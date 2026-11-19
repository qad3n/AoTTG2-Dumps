// Type: UI.PresetSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PresetSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$.ctor
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5ce4640

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x5ce4950

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

{
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$MoveNext
// il2cpp: bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x5ce4960

bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_DummyHuman_o *__this_00;
  UnityEngine_WaitForSeconds_o *pUVar5;
  
  if (Il2CppMethodInitialized_07547c08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547c08 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      __this_00 = (__this->fields).character;
      if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_05ce4ae5;
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
label_05ce4ae5:
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x5ce4af0

Il2CppObject *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x5ce4b00

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

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
                  MethodInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x5ce4b40

Il2CppObject *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_PresetSkinEditPopup__get_Title (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce25f0

System_String_o * UI_PresetSkinEditPopup__get_Title(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_07547bfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547bfb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Preset","",
                      "",(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar1 == (Settings_HumanCustomSettings_o *)0x0) ||
     (__this_00 = (pSVar1->fields).CustomSets,
     __this_00 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
label_05ce2718:
    ThrowNullReferenceException();
  }
  pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet
                     ((Settings_SetSettingsContainer_T__o *)__this_00,
                      (MethodInfo_40477A0 *)
                      MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
  if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
    str2 = (System_String_o *)0x0;
  }
  else {
    pSVar2 = (pSVar4->fields).Name;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05ce2718;
    str2 = (pSVar2->fields)._value;
  }
  pSVar3 = System_String__Concat_5301f10(pSVar3,": ",str2,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.PresetSkinEditPopup$$get_Width
// il2cpp: float UI_PresetSkinEditPopup__get_Width (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2720

float UI_PresetSkinEditPopup__get_Width(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.PresetSkinEditPopup$$get_Height
// il2cpp: float UI_PresetSkinEditPopup__get_Height (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2730

float UI_PresetSkinEditPopup__get_Height(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.PresetSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_PresetSkinEditPopup__get_VerticalSpacing (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2740

float UI_PresetSkinEditPopup__get_VerticalSpacing(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.PresetSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_HorizontalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2750

int32_t UI_PresetSkinEditPopup__get_HorizontalPadding(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_VerticalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2760

int32_t UI_PresetSkinEditPopup__get_VerticalPadding(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_PresetSkinEditPopup__get_DoublePanel (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2770

bool UI_PresetSkinEditPopup__get_DoublePanel(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.PresetSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_PresetSkinEditPopup__get_ScrollBar (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2780

bool UI_PresetSkinEditPopup__get_ScrollBar(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.PresetSkinEditPopup$$Setup
// il2cpp: void UI_PresetSkinEditPopup__Setup (UI_PresetSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5ce2790
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce2ac5: lea rbx, [r14 + 0xa8]
// asm:   0x5ce2acc: jmp 0x5ce2ae0

void UI_PresetSkinEditPopup__Setup(UI_PresetSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_HumanCustomSet_c *pSVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  Settings_HumanCustomSet_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  Settings_HumanCustomSet_o **targetAddress;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07547bfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
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
    Il2CppMethodInitialized_07547bfc = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar8 = (Settings_HumanCustomSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    pSVar6 = TypeInfo_Settings_HumanCustomSet;
    if (pSVar8 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05ce3690:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
      (__this->fields)._currentPreset = pSVar8;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)pSVar6)) goto label_05ce3690;
    }
    targetAddress = &(__this->fields)._currentPreset;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar8 = (__this->fields)._currentPreset;
    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar8->fields).SkinHair;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Human","Hair",
                          "","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 in_stack_ffffffffffffffb8);
      pSVar8 = *targetAddress;
      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (pSVar8->fields).SkinEye;
        pSVar7 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye",
                            "","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,
                   false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                   in_stack_ffffffffffffffb8);
        pSVar8 = (__this->fields)._currentPreset;
        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          pSVar4 = (pSVar8->fields).SkinGlass;
          pSVar7 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass",
                              "","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0
                     ,false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     in_stack_ffffffffffffffb8);
          pSVar8 = (__this->fields)._currentPreset;
          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelLeft;
            pSVar4 = (pSVar8->fields).SkinFace;
            pSVar7 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face",
                                "","",(MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                       40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
            pSVar8 = (__this->fields)._currentPreset;
            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (pSVar8->fields).SkinSkin;
              pSVar7 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin",
                                  "","",(MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                         40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
              pSVar8 = (__this->fields)._currentPreset;
              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                pUVar3 = (__this->fields).DoublePanelLeft;
                pSVar4 = (pSVar8->fields).SkinCostume;
                pSVar7 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume",
                                    "","",(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                           300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                           (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                pSVar8 = (__this->fields)._currentPreset;
                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar4 = (pSVar8->fields).SkinLogo;
                  pSVar7 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo",
                                      "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                             300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                  pSVar8 = (__this->fields)._currentPreset;
                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = (pSVar8->fields).SkinGearL;
                    pSVar7 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL",
                                        "","",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                               300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                    pSVar8 = (__this->fields)._currentPreset;
                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar4 = (pSVar8->fields).SkinGearR;
                      pSVar7 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR",
                                          "","",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                 "",300.0,40.0,false,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                      pSVar8 = (__this->fields)._currentPreset;
                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar4 = (pSVar8->fields).SkinGas;
                        pSVar7 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas",
                                            "","",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                   "",300.0,40.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                        pSVar8 = (__this->fields)._currentPreset;
                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          pSVar4 = (pSVar8->fields).SkinHoodie;
                          pSVar7 = UI_UIManager__GetLocale
                                             ("SettingsPopup","Skins.Human",
                                              "Hoodie","",
                                              "",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                     "",300.0,40.0,false,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                     in_stack_ffffffffffffffb8);
                          pSVar8 = (__this->fields)._currentPreset;
                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                            pUVar3 = (__this->fields).DoublePanelLeft;
                            pSVar4 = (pSVar8->fields).SkinCloak;
                            pSVar7 = UI_UIManager__GetLocale
                                               ("SettingsPopup","Skins.Human",
                                                "Cloak","",
                                                "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                       "",300.0,40.0,false,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,in_stack_ffffffffffffffb8);
                            pSVar8 = (__this->fields)._currentPreset;
                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar8->fields).SkinWeaponTrail;
                              pSVar7 = UI_UIManager__GetLocale
                                                 ("SettingsPopup","Skins.Human",
                                                  "WeaponTrail","",
                                                  "",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateInputSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                         "",300.0,40.0,false,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                              pSVar8 = (__this->fields)._currentPreset;
                              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (pSVar8->fields).SkinHorse;
                                pSVar7 = UI_UIManager__GetLocale
                                                   ("SettingsPopup","Skins.Human",
                                                    "Horse","",
                                                    "",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                           "",300.0,40.0,false,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                                pSVar8 = (__this->fields)._currentPreset;
                                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                  pUVar3 = (__this->fields).DoublePanelRight;
                                  pSVar4 = (pSVar8->fields).SkinThunderspearL;
                                  pSVar7 = UI_UIManager__GetLocale
                                                     ("SettingsPopup","Skins.Human",
                                                      "ThunderspearL","",
                                                      "",(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                             "",300.0,40.0,false,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                                  pSVar8 = (__this->fields)._currentPreset;
                                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                    pUVar3 = (__this->fields).DoublePanelRight;
                                    pSVar4 = (pSVar8->fields).SkinThunderspearR;
                                    pSVar7 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","Skins.Human",
                                                        "ThunderspearR","",
                                                        "",(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateInputSetting
                                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                               "",300.0,40.0,false,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8)
                                    ;
                                    pSVar8 = (__this->fields)._currentPreset;
                                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                      pUVar3 = (__this->fields).DoublePanelRight;
                                      pSVar4 = (pSVar8->fields).SkinHookL;
                                      pSVar7 = UI_UIManager__GetLocale
                                                         ("SettingsPopup","Skins.Human",
                                                          "HookL","",
                                                          "",(MethodInfo *)0x0);
                                      UI_ElementFactory__CreateInputSetting
                                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                 "",300.0,40.0,false,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,
                                                 in_stack_ffffffffffffffb8);
                                      pSVar8 = (__this->fields)._currentPreset;
                                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                        pUVar3 = (__this->fields).DoublePanelRight;
                                        pSVar5 = (pSVar8->fields).SkinHookLTiling;
                                        pSVar7 = UI_UIManager__GetLocale
                                                           ("SettingsPopup","Skins.Human",
                                                            "HookLTiling","",
                                                            "",(MethodInfo *)0x0);
                                        UI_ElementFactory__CreateInputSetting
                                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                   "",300.0,40.0,false,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,
                                                   in_stack_ffffffffffffffb8);
                                        pSVar8 = (__this->fields)._currentPreset;
                                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                          pUVar3 = (__this->fields).DoublePanelRight;
                                          pSVar4 = (pSVar8->fields).SkinHookR;
                                          pSVar7 = UI_UIManager__GetLocale
                                                             ("SettingsPopup","Skins.Human",
                                                              "HookR","",
                                                              "",(MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                     "",300.0,40.0,false,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,
                                                     in_stack_ffffffffffffffb8);
                                          pSVar8 = (__this->fields)._currentPreset;
                                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                            pUVar3 = (__this->fields).DoublePanelRight;
                                            pSVar5 = (pSVar8->fields).SkinHookRTiling;
                                            pSVar7 = UI_UIManager__GetLocale
                                                               ("SettingsPopup","Skins.Human",
                                                                "HookRTiling","",
                                                                "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateInputSetting
                                                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar5,
                                                       pSVar7,"",300.0,40.0,false,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,
                                                       in_stack_ffffffffffffffb8);
                                            pSVar8 = (__this->fields)._currentPreset;
                                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                              pUVar3 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (pSVar8->fields).SkinHat;
                                              pSVar7 = UI_UIManager__GetLocale
                                                                 ("SettingsPopup","Skins.Human",
                                                                  "Hat","",
                                                                  "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateInputSetting
                                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                                         pSVar7,"",300.0,40.0,false,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         in_stack_ffffffffffffffb8);
                                              pSVar8 = (__this->fields)._currentPreset;
                                              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                                pUVar3 = (__this->fields).DoublePanelRight;
                                                pSVar4 = (pSVar8->fields).SkinHead;
                                                pSVar7 = UI_UIManager__GetLocale
                                                                   ("SettingsPopup",
                                                                    "Skins.Human",
                                                                    "Head",
                                                                    "",
                                                                    "",(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateInputSetting
                                                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                                           pSVar7,"",300.0,40.0,false,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           in_stack_ffffffffffffffb8);
                                                pSVar8 = (__this->fields)._currentPreset;
                                                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                                  pUVar3 = (__this->fields).DoublePanelRight;
                                                  pSVar4 = (pSVar8->fields).SkinBack;
                                                  pSVar7 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "Skins.Human",
                                                                      "Back",
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  method_00 = (MethodInfo *)"";
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4
                                                             ,pSVar7,"",300.0,40.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             in_stack_ffffffffffffffb8);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Clear",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_0,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar7,0.0,pUVar9,method_00);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Apply",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_1,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar7,0.0,pUVar9,method_00);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Cancel",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_2,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar7,0.0,pUVar9,method_00);
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


// UI.PresetSkinEditPopup$$OnButtonClick
// il2cpp: void UI_PresetSkinEditPopup__OnButtonClick (UI_PresetSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ce36a0

void UI_PresetSkinEditPopup__OnButtonClick
               (UI_PresetSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_07547bfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547bfd = '\x01';
  }
  pMVar2 = (MethodInfo *)"Cancel";
  bVar1 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields)._hasBackup != false) {
      UI_PresetSkinEditPopup__RestoreBackup(__this,pMVar2);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar2 = (MethodInfo *)"Clear";
  bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if (bVar1) {
    UI_PresetSkinEditPopup__OnClearClick(__this,pMVar2);
    return;
  }
  pMVar2 = (MethodInfo *)"Save";
  bVar1 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar1) {
    UI_PresetSkinEditPopup__OnSaveClick(__this,pMVar2);
    return;
  }
  return;
}


// UI.PresetSkinEditPopup$$OnClearClick
// il2cpp: void UI_PresetSkinEditPopup__OnClearClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce37b0
// eh: try 0x5ce3893..0x5ce393a -> pad 0x5ce3948 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce395f..0x5ce3964 -> pad 0x5ce3989 cleanup
// eh: try 0x5ce398c..0x5ce3994 -> pad 0x5ce399c catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce3944: jmp 0x5ce3948
// asm:   0x5ce3946: jmp 0x5ce3948
// asm:   0x5ce3948: mov r14, rax
// asm:   0x5ce394b: cmp edx, 1
// asm:   0x5ce394e: jne 0x5ce398c
// asm:   0x5ce3950: mov rdi, r14
// asm:   0x5ce3953: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce3958: mov rbx, qword ptr [rax]
// asm:   0x5ce395b: mov qword ptr [rsp], rbx
// asm:   0x5ce395f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce3964: lea rax, [rip + 0x15ac4ad]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce396b: mov rsi, qword ptr [rax]
// asm:   0x5ce396e: lea rdi, [rsp + 0x10]
// asm:   0x5ce3973: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce3978: test rbx, rbx
// asm:   0x5ce397b: je 0x5ce38d3
// asm:   0x5ce3981: mov rdi, rbx
// asm:   0x5ce3984: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce3989: mov r14, rax
// asm:   0x5ce398c: mov rdi, rsp
// asm:   0x5ce398f: call 0x2fdb830  ; il2cpp_runtime_helper_02fdb830()
// asm:   0x5ce3994: mov rdi, r14
// asm:   0x5ce3997: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce399c: mov rdi, rax
// asm:   0x5ce399f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_PresetSkinEditPopup__OnClearClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_07547bfe == '\0') {
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
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    Il2CppMethodInitialized_07547bfe = '\x01';
  }
  local_48.fields._current.fields.key = (Il2CppObject *)0x0;
  local_48.fields._current.fields.value = (Il2CppObject *)0x0;
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._version = 0;
  local_48.fields._index = 0;
  local_48.fields._getEnumeratorRetType = 0;
  local_48.fields._36_4_ = 0;
  if ((__this->fields)._hasBackup == false) {
    UI_PresetSkinEditPopup__CreateBackup(__this,method);
  }
  pSVar1 = (__this->fields)._currentPreset;
  if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar1->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&local_48,__this_00,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      if (!bVar3) break;
      if (local_48.fields._current.fields.value == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_48.fields._current.fields.value)->klass->vtable[4].methodPtr)
                (local_48.fields._current.fields.value,
                 (local_48.fields._current.fields.value)->klass->vtable[4].method);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_48,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar4 = (uint)pSVar5->max_length;
      if (0 < (int)uVar4) {
        uVar6 = 0;
        do {
          if (uVar4 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          pIVar2 = pSVar5->m_Items[(int)uVar6];
          if (pIVar2 == (Il2CppObject *)0x0) goto label_05ce393a;
          (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
        } while ((int)uVar6 < (int)uVar4);
      }
      return;
    }
  }
label_05ce393a:
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$CreateBackup
// il2cpp: void UI_PresetSkinEditPopup__CreateBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce3de0
// eh: try 0x5ce3f74..0x5ce40b8 -> pad 0x5ce40cb (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce40e3..0x5ce40e8 -> pad 0x5ce410b cleanup
// eh: try 0x5ce410e..0x5ce4118 -> pad 0x5ce4120 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce3f6d: nop dword ptr [rax]
// asm:   0x5ce40bd: jmp 0x5ce40cb
// asm:   0x5ce40bf: jmp 0x5ce40cb
// asm:   0x5ce40c1: jmp 0x5ce40cb
// asm:   0x5ce40c3: jmp 0x5ce40cb
// asm:   0x5ce40c5: jmp 0x5ce40cb
// asm:   0x5ce40c7: jmp 0x5ce40cb
// asm:   0x5ce40c9: jmp 0x5ce40cb
// asm:   0x5ce40cb: mov rbx, rax
// asm:   0x5ce40ce: cmp edx, 1
// asm:   0x5ce40d1: jne 0x5ce410e
// asm:   0x5ce40d3: mov rdi, rbx
// asm:   0x5ce40d6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce40db: mov rbx, qword ptr [rax]
// asm:   0x5ce40de: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ce40e3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce40e8: lea rax, [rip + 0x15abd29]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce40ef: mov rsi, qword ptr [rax]
// asm:   0x5ce40f2: mov rdi, rsp
// asm:   0x5ce40f5: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce40fa: test rbx, rbx
// asm:   0x5ce40fd: je 0x5ce407d
// asm:   0x5ce4103: mov rdi, rbx
// asm:   0x5ce4106: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce410b: mov rbx, rax
// asm:   0x5ce410e: lea rdi, [rsp + 0x30]
// asm:   0x5ce4113: call 0x2fdb860  ; il2cpp_runtime_helper_02fdb860()
// asm:   0x5ce4118: mov rdi, rbx
// asm:   0x5ce411b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce4120: mov rdi, rax
// asm:   0x5ce4123: call 0x2ab61e0  ; __clang_call_terminate()

void UI_PresetSkinEditPopup__CreateBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Il2CppObject *key;
  Il2CppObject *pIVar5;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_88;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  Settings_BaseSetting_o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547bff == '\0') {
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
    Il2CppMethodInitialized_07547bff = '\x01';
  }
  local_88.fields._current.fields.key = (Il2CppObject *)0x0;
  local_88.fields._current.fields.value = (Il2CppObject *)0x0;
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._version = 0;
  local_88.fields._index = 0;
  local_88.fields._getEnumeratorRetType = 0;
  local_88.fields._36_4_ = 0;
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
      pSVar4 = (__this->fields)._currentPreset;
      if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).TypedSettings,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar2,
                   (MethodInfo_4AAD970 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
        local_88.fields._getEnumeratorRetType = local_38;
        local_88.fields._36_4_ = uStack_34;
        local_88.fields._current.fields.key = local_48;
        local_88.fields._current.fields.value = (Il2CppObject *)pSStack_40;
        local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        local_88.fields._version = local_58._8_4_;
        local_88.fields._index = local_58._12_4_;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = &local_88;
        while( true ) {
          do {
            while( true ) {
              bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (&local_88,
                                 (MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                                );
              pIVar5 = local_88.fields._current.fields.value;
              key = local_88.fields._current.fields.key;
              if (!bVar6) {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          (&local_88,
                           (MethodInfo_4CE67F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
                          );
                (__this->fields)._hasBackup = true;
                return;
              }
              iVar7 = Settings_SettingsUtil__GetSettingType
                                ((Settings_BaseSetting_o *)local_88.fields._current.fields.value,
                                 (MethodInfo *)0x0);
              if (iVar7 != 3) break;
              if ((Settings_BaseSetting_o *)pIVar5 == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
              if (((((Settings_BaseSetting_c *)pIVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
                 ((((Settings_BaseSetting_c *)pIVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
              }
              pSVar3 = (__this->fields)._backupFloatValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                         *(float *)((long)&((Settings_BaseSetting_o *)((long)pIVar5 + 0x18))->klass + 4),
                         (MethodInfo_4AB5450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
            }
          } while (iVar7 != 4);
          if ((Settings_BaseSetting_o *)pIVar5 == (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetting_c *)pIVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BaseSetting_c *)pIVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) break;
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,key,((Settings_BaseSetting_o *)((long)pIVar5 + 0x18))->monitor,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$RestoreBackup
// il2cpp: void UI_PresetSkinEditPopup__RestoreBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce4130
// eh: try 0x5ce42a4..0x5ce44c1 -> pad 0x5ce44d7 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce44ef..0x5ce44f4 -> pad 0x5ce4517 cleanup
// eh: try 0x5ce451a..0x5ce4524 -> pad 0x5ce452c catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce4299: nop dword ptr [rax]
// asm:   0x5ce44c1: jmp 0x5ce44d7
// asm:   0x5ce44c3: jmp 0x5ce44d7
// asm:   0x5ce44c5: jmp 0x5ce44d7
// asm:   0x5ce44c7: jmp 0x5ce44d7
// asm:   0x5ce44c9: jmp 0x5ce44d7
// asm:   0x5ce44cb: jmp 0x5ce44d7
// asm:   0x5ce44cd: jmp 0x5ce44d7
// asm:   0x5ce44cf: jmp 0x5ce44d7
// asm:   0x5ce44d1: jmp 0x5ce44d7
// asm:   0x5ce44d3: jmp 0x5ce44d7
// asm:   0x5ce44d5: jmp 0x5ce44d7
// asm:   0x5ce44d7: mov rbx, rax
// asm:   0x5ce44da: cmp edx, 1
// asm:   0x5ce44dd: jne 0x5ce451a
// asm:   0x5ce44df: mov rdi, rbx
// asm:   0x5ce44e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce44e7: mov rbx, qword ptr [rax]
// asm:   0x5ce44ea: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ce44ef: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce44f4: lea rax, [rip + 0x15ab91d]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce44fb: mov rsi, qword ptr [rax]
// asm:   0x5ce44fe: mov rdi, rsp
// asm:   0x5ce4501: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce4506: test rbx, rbx
// asm:   0x5ce4509: je 0x5ce4421
// asm:   0x5ce450f: mov rdi, rbx
// asm:   0x5ce4512: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce4517: mov rbx, rax
// asm:   0x5ce451a: lea rdi, [rsp + 0x30]
// asm:   0x5ce451f: call 0x2fdb890  ; il2cpp_runtime_helper_02fdb890()
// asm:   0x5ce4524: mov rdi, rbx
// asm:   0x5ce4527: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce452c: mov rdi, rax
// asm:   0x5ce452f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_PresetSkinEditPopup__RestoreBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  Il2CppObject *pIVar5;
  Settings_TypedSetting_T__o *__this_00;
  bool bVar6;
  int32_t iVar7;
  uint uVar8;
  System_String_o *value;
  System_Object_array *pSVar9;
  uint uVar10;
  float value_00;
  undefined1 local_88 [8];
  undefined1 *puStack_80;
  Il2CppObject *local_78;
  Settings_TypedSetting_T__o *pSStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  Settings_TypedSetting_T__o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547c00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
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
    Il2CppMethodInitialized_07547c00 = '\x01';
  }
  local_78 = (Il2CppObject *)0x0;
  pSStack_70 = (Settings_TypedSetting_T__o *)0x0;
  local_88 = (undefined1  [8])0x0;
  puStack_80 = (undefined1 *)0x0;
  local_68._0_4_ = 0;
  local_68._4_4_ = 0;
  if (((__this->fields)._hasBackup == false) ||
     (pSVar2 = (__this->fields)._currentPreset, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    local_68._0_4_ = local_38;
    local_68._4_4_ = uStack_34;
    local_78 = local_48;
    pSStack_70 = pSStack_40;
    local_88 = (undefined1  [8])local_58._0_8_;
    puStack_80 = (undefined1 *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = local_88;
    while( true ) {
      bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      __this_00 = pSStack_70;
      pIVar5 = local_78;
      if (!bVar6) break;
      iVar7 = Settings_SettingsUtil__GetSettingType((Settings_BaseSetting_o *)pSStack_70,(MethodInfo *)0x0);
      if (iVar7 == 3) {
        pSVar4 = (__this->fields)._backupFloatValues;
        if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar5,
                           (MethodInfo_4AB5680 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
        if (bVar6) {
          pSVar4 = (__this->fields)._backupFloatValues;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          value_00 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar5,
                                (MethodInfo_4AB53E0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
          if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00);
          }
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)__this_00,value_00,
                     (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        }
      }
      else if (iVar7 == 4) {
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (pSVar3,pIVar5,
                           (MethodInfo_4AAD6F0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (bVar6) {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          value = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar3,pIVar5,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
          if (__this_00 == (Settings_TypedSetting_T__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_00);
          }
          Settings_TypedSetting_object___set_Value
                    (__this_00,(Il2CppObject *)value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_88,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar9 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar8 = (uint)pSVar9->max_length;
      if ((int)uVar8 < 1) {
        return;
      }
      uVar10 = 0;
      while( true ) {
        if (uVar8 <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pIVar5 = pSVar9->m_Items[(int)uVar10];
        if (pIVar5 == (Il2CppObject *)0x0) break;
        (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,pIVar5->klass->vtable[6].method);
        uVar10 = uVar10 + 1;
        uVar8 = (uint)pSVar9->max_length;
        if ((int)uVar8 <= (int)uVar10) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$OnCancelClick
// il2cpp: void UI_PresetSkinEditPopup__OnCancelClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce3780

void UI_PresetSkinEditPopup__OnCancelClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.PresetSkinEditPopup$$OnSaveClick
// il2cpp: void UI_PresetSkinEditPopup__OnSaveClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce39b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce3ad8: jmp 0x5ce3b22
// asm:   0x5ce3da6: jmp 0x5ce3b39
// asm:   0x5ce3dcf: jmp 0x5ce3bdb

void UI_PresetSkinEditPopup__OnSaveClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

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
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this_03;
  UI_BaseMenu_o *__this_04;
  Characters_DummyHuman_o *x;
  
  if (Il2CppMethodInitialized_07547c01 == '\0') {
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
    Il2CppMethodInitialized_07547c01 = '\x01';
  }
  if ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ce3dd4;
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
  __this_01 = (__this->fields)._backupFloatValues;
  if (__this_01 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05ce3dd4;
  System_Collections_Generic_Dictionary_object__float___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
  (__this->fields)._hasBackup = false;
  bVar11 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
  if (!bVar11) goto label_05ce3d57;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar12 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 != (UI_BaseMenu_o *)0x0) goto label_05ce3b02;
label_05ce3b22:
    __this_04 = (UI_BaseMenu_o *)0x0;
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 == (UI_BaseMenu_o *)0x0) goto label_05ce3b22;
label_05ce3b02:
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((pUVar12->klass->_2).typeHierarchyDepth < bVar1) goto label_05ce3b22;
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
  if (!bVar11) goto label_05ce3d57;
  pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ce3dd4;
  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
  if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  pCVar6 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar5 + 0x38));
  if (pCVar6 == (Characters_DummyHuman_o *)0x0) {
label_05ce3bcb:
    x = (Characters_DummyHuman_o *)0x0;
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
    if ((pCVar6->klass->_2).typeHierarchyDepth < bVar1) goto label_05ce3bcb;
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
        if (Il2CppMethodInitialized_07547c02 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
          Il2CppMethodInitialized_07547c02 = '\x01';
        }
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
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
          goto label_05ce3d57;
        }
      }
    }
label_05ce3dd4:
    ThrowNullReferenceException();
  }
label_05ce3d57:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x5ce45c0

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings
               (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
               bool originalCustom,MethodInfo *method)

{
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_07547c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
    Il2CppMethodInitialized_07547c02 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).character);
  (__this_00->fields).originalGlobal = originalGlobal;
  (__this_00->fields).originalCustom = originalCustom;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettingsCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x5ce4540

System_Collections_IEnumerator_o *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine
          (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
          bool originalCustom,MethodInfo *method)

{
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_07547c02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
    Il2CppMethodInitialized_07547c02 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).character);
  (__this_00->fields).originalGlobal = originalGlobal;
  (__this_00->fields).originalCustom = originalCustom;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.PresetSkinEditPopup$$Show
// il2cpp: void UI_PresetSkinEditPopup__Show (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce4660
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce4724: lea rbx, [r14 + 0xa8]
// asm:   0x5ce472b: jmp 0x5ce473f

void UI_PresetSkinEditPopup__Show(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_HumanCustomSet_c *pSVar3;
  Settings_HumanCustomSet_o *method_00;
  Settings_HumanCustomSet_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547c03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547c03 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    method_00 = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_00,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    pSVar3 = TypeInfo_Settings_HumanCustomSet;
    if (method_00 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05ce4773:
        il2cpp_codegen_raise_invalid_cast_exception(method_00);
      }
      (__this->fields)._currentPreset = method_00;
      if (((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)pSVar3)) goto label_05ce4773;
    }
    targetAddress = &(__this->fields)._currentPreset;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((*targetAddress != (Settings_HumanCustomSet_o *)0x0) && ((__this->fields)._hasBackup == false)) {
      UI_PresetSkinEditPopup__CreateBackup(__this,(MethodInfo *)method_00);
    }
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$OnDisable
// il2cpp: void UI_PresetSkinEditPopup__OnDisable (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce4780

void UI_PresetSkinEditPopup__OnDisable(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$HideImmediate
// il2cpp: void UI_PresetSkinEditPopup__HideImmediate (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce47a0

void UI_PresetSkinEditPopup__HideImmediate(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$.ctor
// il2cpp: void UI_PresetSkinEditPopup___ctor (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce47c0

void UI_PresetSkinEditPopup___ctor(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_07547c04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_07547c04 = '\x01';
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


// UI.PresetSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_0 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce4890

void UI_PresetSkinEditPopup___Setup_b__20_0(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_07547c05 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_1 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce48d0

void UI_PresetSkinEditPopup___Setup_b__20_1(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547c06 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_2 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce4910

void UI_PresetSkinEditPopup___Setup_b__20_2(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547c07 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


