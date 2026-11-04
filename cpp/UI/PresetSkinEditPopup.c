// Type: UI.PresetSkinEditPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PresetSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$.ctor
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor(UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose(UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, MethodInfo* method)

{
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$MoveNext
// il2cpp: bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x18221ac10

bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,MethodInfo *method
               )

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_DummyHuman_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar5;
  
  if (Il2CppMethodInitialized_184347099 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184347099 = '\x01';
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


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x18221add0

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
// 0x180573e90

Il2CppObject*
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current(UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_PresetSkinEditPopup__get_Title (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1822193b0

System_String_o * UI_PresetSkinEditPopup__get_Title(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_18434708c == '\0') {
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
    Il2CppMethodInitialized_18434708c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Preset","",
                      "",(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar1 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
      str2 = (System_String_o *)0x0;
    }
    else {
      pSVar2 = (pSVar4->fields).Name;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822194d3;
      str2 = (pSVar2->fields)._value;
    }
    pSVar3 = System_String__Concat_1969b70(pSVar3,": ",str2,(MethodInfo *)0x0);
    return pSVar3;
  }
label_1822194d3:
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$get_Width
// il2cpp: float UI_PresetSkinEditPopup__get_Width (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e47c0

float UI_PresetSkinEditPopup__get_Width(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.PresetSkinEditPopup$$get_Height
// il2cpp: float UI_PresetSkinEditPopup__get_Height (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e4680

float
UI_PresetSkinEditPopup__get_Height(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return 700.0;
}


// UI.PresetSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_PresetSkinEditPopup__get_VerticalSpacing (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182182ab0

float
UI_PresetSkinEditPopup__get_VerticalSpacing(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return 15.0;
}


// UI.PresetSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_HorizontalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_PresetSkinEditPopup__get_HorizontalPadding(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_VerticalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_PresetSkinEditPopup__get_VerticalPadding(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_PresetSkinEditPopup__get_DoublePanel (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_PresetSkinEditPopup__get_DoublePanel(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.PresetSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_PresetSkinEditPopup__get_ScrollBar (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_PresetSkinEditPopup__get_ScrollBar(UI_PresetSkinEditPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.PresetSkinEditPopup$$Setup
// il2cpp: void UI_PresetSkinEditPopup__Setup (UI_PresetSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182217f40

void UI_PresetSkinEditPopup__Setup(UI_PresetSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *style;
  UI_ElementStyle_o *style_00;
  Settings_HumanCustomSet_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  
  if (Il2CppMethodInitialized_18434708d == '\0') {
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
    Il2CppMethodInitialized_18434708d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  style = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style,(MethodInfo *)0x0);
  (style->fields).FontSize = 0x18;
  (style->fields).TitleWidth = 200.0;
  (style->fields).Spacing = 20.0;
  (style->fields).ThemePanel = pSVar7;
  Il2CppCodeGenWriteBarrier(&(style->fields).ThemePanel,pSVar7);
  iVar6 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  style_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)style_00,(MethodInfo *)0x0);
  (style_00->fields).FontSize = iVar6;
  (style_00->fields).TitleWidth = 120.0;
  (style_00->fields).Spacing = 20.0;
  (style_00->fields).ThemePanel = pSVar7;
  Il2CppCodeGenWriteBarrier(&(style_00->fields).ThemePanel,pSVar7);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    pSVar8 = (Settings_HumanCustomSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar8 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
      pSVar8 = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
      (__this->fields)._currentPreset = pSVar8;
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPreset,pSVar8);
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
                (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,false,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._currentPreset;
      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (pSVar8->fields).SkinEye;
        pSVar7 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye",
                            "","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,false
                   ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._currentPreset;
        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          pSVar4 = (pSVar8->fields).SkinGlass;
          pSVar7 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass",
                              "","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,
                     false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pSVar8 = (__this->fields)._currentPreset;
          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelLeft;
            pSVar4 = (pSVar8->fields).SkinFace;
            pSVar7 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face",
                                "","",(MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,
                       false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                       (MethodInfo *)0x0);
            pSVar8 = (__this->fields)._currentPreset;
            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (pSVar8->fields).SkinSkin;
              pSVar7 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin",
                                  "","",(MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0
                         ,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              pSVar8 = (__this->fields)._currentPreset;
              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                pUVar3 = (__this->fields).DoublePanelLeft;
                pSVar4 = (pSVar8->fields).SkinCostume;
                pSVar7 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume",
                                    "","",(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                           40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                pSVar8 = (__this->fields)._currentPreset;
                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar4 = (pSVar8->fields).SkinLogo;
                  pSVar7 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo",
                                      "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                             40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._currentPreset;
                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = (pSVar8->fields).SkinGearL;
                    pSVar7 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL",
                                        "","",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                               300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    pSVar8 = (__this->fields)._currentPreset;
                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar4 = (pSVar8->fields).SkinGearR;
                      pSVar7 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR",
                                          "","",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                                 300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar8 = (__this->fields)._currentPreset;
                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar4 = (pSVar8->fields).SkinGas;
                        pSVar7 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas",
                                            "","",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                                   300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar8 = (__this->fields)._currentPreset;
                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          pSVar4 = (pSVar8->fields).SkinHoodie;
                          pSVar7 = UI_UIManager__GetLocale
                                             ("SettingsPopup","Skins.Human",
                                              "Hoodie","",
                                              "",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                     "",300.0,40.0,false,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                     (MethodInfo *)0x0);
                          pSVar8 = (__this->fields)._currentPreset;
                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                            pUVar3 = (__this->fields).DoublePanelLeft;
                            pSVar4 = (pSVar8->fields).SkinCloak;
                            pSVar7 = UI_UIManager__GetLocale
                                               ("SettingsPopup","Skins.Human",
                                                "Cloak","",
                                                "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                       "",300.0,40.0,false,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,(MethodInfo *)0x0);
                            pSVar8 = (__this->fields)._currentPreset;
                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar8->fields).SkinWeaponTrail;
                              pSVar7 = UI_UIManager__GetLocale
                                                 ("SettingsPopup","Skins.Human",
                                                  "WeaponTrail","",
                                                  "",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateInputSetting
                                        (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                         "",300.0,40.0,false,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar8 = (__this->fields)._currentPreset;
                              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (pSVar8->fields).SkinHorse;
                                pSVar7 = UI_UIManager__GetLocale
                                                   ("SettingsPopup","Skins.Human",
                                                    "Horse","",
                                                    "",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                           "",300.0,40.0,false,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar8 = (__this->fields)._currentPreset;
                                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                  pUVar3 = (__this->fields).DoublePanelRight;
                                  pSVar4 = (pSVar8->fields).SkinThunderspearL;
                                  pSVar7 = UI_UIManager__GetLocale
                                                     ("SettingsPopup","Skins.Human",
                                                      "ThunderspearL","",
                                                      "",(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                             "",300.0,40.0,false,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  pSVar8 = (__this->fields)._currentPreset;
                                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                    pUVar3 = (__this->fields).DoublePanelRight;
                                    pSVar4 = (pSVar8->fields).SkinThunderspearR;
                                    pSVar7 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","Skins.Human",
                                                        "ThunderspearR","",
                                                        "",(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateInputSetting
                                              (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                               "",300.0,40.0,false,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                    pSVar8 = (__this->fields)._currentPreset;
                                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                      pUVar3 = (__this->fields).DoublePanelRight;
                                      pSVar4 = (pSVar8->fields).SkinHookL;
                                      pSVar7 = UI_UIManager__GetLocale
                                                         ("SettingsPopup","Skins.Human",
                                                          "HookL","",
                                                          "",(MethodInfo *)0x0);
                                      UI_ElementFactory__CreateInputSetting
                                                (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                 "",300.0,40.0,false,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                      pSVar8 = (__this->fields)._currentPreset;
                                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                        pUVar3 = (__this->fields).DoublePanelRight;
                                        pSVar5 = (pSVar8->fields).SkinHookLTiling;
                                        pSVar7 = UI_UIManager__GetLocale
                                                           ("SettingsPopup","Skins.Human",
                                                            "HookLTiling","",
                                                            "",(MethodInfo *)0x0);
                                        UI_ElementFactory__CreateInputSetting
                                                  (pUVar3,style,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                   "",300.0,40.0,false,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                        pSVar8 = (__this->fields)._currentPreset;
                                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                          pUVar3 = (__this->fields).DoublePanelRight;
                                          pSVar4 = (pSVar8->fields).SkinHookR;
                                          pSVar7 = UI_UIManager__GetLocale
                                                             ("SettingsPopup","Skins.Human",
                                                              "HookR","",
                                                              "",(MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                     "",300.0,40.0,false,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          pSVar8 = (__this->fields)._currentPreset;
                                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                            pUVar3 = (__this->fields).DoublePanelRight;
                                            pSVar5 = (pSVar8->fields).SkinHookRTiling;
                                            pSVar7 = UI_UIManager__GetLocale
                                                               ("SettingsPopup","Skins.Human",
                                                                "HookRTiling","",
                                                                "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateInputSetting
                                                      (pUVar3,style,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                       "",300.0,40.0,false,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                            ;
                                            pSVar8 = (__this->fields)._currentPreset;
                                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                              pUVar3 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (pSVar8->fields).SkinHat;
                                              pSVar7 = UI_UIManager__GetLocale
                                                                 ("SettingsPopup","Skins.Human",
                                                                  "Hat","",
                                                                  "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateInputSetting
                                                        (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                         "",300.0,40.0,false,
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
                                                                   ("SettingsPopup",
                                                                    "Skins.Human",
                                                                    "Head",
                                                                    "",
                                                                    "",(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateInputSetting
                                                          (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,
                                                           pSVar7,"",300.0,40.0,false,
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
                                                                     ("SettingsPopup",
                                                                      "Skins.Human",
                                                                      "Back",
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar3,style,(Settings_BaseSetting_o *)pSVar4,
                                                             pSVar7,"",300.0,40.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Clear",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_0,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,style_00,pSVar7,0.0,pUVar9,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Apply",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_1,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,style_00,pSVar7,0.0,pUVar9,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar7 = UI_UIManager__GetLocaleCommon
                                                                     ("Cancel",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar9 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar9,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_PresetSkinEditPopup_Setup_b__20_2,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,style_00,pSVar7,0.0,pUVar9,
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


// UI.PresetSkinEditPopup$$OnButtonClick
// il2cpp: void UI_PresetSkinEditPopup__OnButtonClick (UI_PresetSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182217440

void UI_PresetSkinEditPopup__OnButtonClick
               (UI_PresetSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434708e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_18434708e = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields)._hasBackup != false) {
      UI_PresetSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  else {
    bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
    if (bVar1) {
      UI_PresetSkinEditPopup__OnClearClick(__this,(MethodInfo *)0x0);
      return;
    }
    bVar1 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
    if (bVar1) {
      UI_PresetSkinEditPopup__OnSaveClick(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.PresetSkinEditPopup$$OnClearClick
// il2cpp: void UI_PresetSkinEditPopup__OnClearClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217560
// eh: try 0x182217660..0x18221772a -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822176a6: mov rdx, qword ptr [rip + 0x1ea12b3]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x1822176ad: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822176b2: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822176b7: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822176bc: test rcx, rcx
// asm:   0x1822176bf: jne 0x18221772a
// asm:   0x1822176c1: xor edi, edi
// asm:   0x1822176c3: mov rsi, qword ptr [rsp + 0xa0]
// asm:   0x18221772a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_PresetSkinEditPopup__OnClearClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  uint uVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_18434708f == '\0') {
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
    Il2CppMethodInitialized_18434708f = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  if ((__this->fields)._hasBackup == false) {
    UI_PresetSkinEditPopup__CreateBackup(__this,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._currentPreset;
  if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
     (__this_00 = (pSVar1->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    uVar5 = 0;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_60,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      if (!bVar3) break;
      if (local_60.fields._current.fields.value == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*(local_60.fields._current.fields.value)->klass->vtable[4].methodPtr)
                (local_60.fields._current.fields.value,
                 (local_60.fields._current.fields.value)->klass->vtable[4].method);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar4 != (System_Object_array *)0x0) {
      while( true ) {
        if ((int)pSVar4->max_length <= (int)uVar5) {
          return;
        }
        if ((uint)pSVar4->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        pIVar2 = pSVar4->m_Items[(int)uVar5];
        if (pIVar2 == (Il2CppObject *)0x0) break;
        (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
        uVar5 = uVar5 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$CreateBackup
// il2cpp: void UI_PresetSkinEditPopup__CreateBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217000
// eh: try 0x182217180..0x1822172f4 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182217291: mov rdx, qword ptr [rip + 0x1ea16c8]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x182217298: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18221729d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822172a2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822172a7: test rcx, rcx
// asm:   0x1822172aa: jne 0x1822172f4
// asm:   0x1822172ac: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x1822172f4: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_PresetSkinEditPopup__CreateBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *key;
  Il2CppObject *pIVar4;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184347090 == '\0') {
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
    Il2CppMethodInitialized_184347090 = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
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
      pSVar3 = (__this->fields)._currentPreset;
      if ((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
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
            bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (&local_80,
                               (MethodInfo_1585360 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                              );
            pIVar4 = local_80.fields._current.fields.value;
            key = local_80.fields._current.fields.key;
            if (!bVar5) {
              System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
                        );
              (__this->fields)._hasBackup = true;
              return;
            }
            iVar6 = Settings_SettingsUtil__GetSettingType
                              ((Settings_BaseSetting_o *)local_80.fields._current.fields.value,
                               (MethodInfo *)0x0);
            if (iVar6 == 3) break;
            if (iVar6 == 4) {
              if ((Settings_BaseSetting_o *)pIVar4 == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
              if (((((Settings_BaseSetting_c *)pIVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
                 ((((Settings_BaseSetting_c *)pIVar4->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar4);
              }
              __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._backupValues;
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_02,key,((Settings_BaseSetting_o *)((longlong)pIVar4 + 0x18))->monitor,
                         (MethodInfo_147A7F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
            }
          }
          if ((Settings_BaseSetting_o *)pIVar4 == (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetting_c *)pIVar4->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BaseSetting_c *)pIVar4->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) break;
          pSVar2 = (__this->fields)._backupFloatValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                     *(float *)((longlong)&((Settings_BaseSetting_o *)((longlong)pIVar4 + 0x18))->klass + 4),
                     (MethodInfo_1488DA0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$RestoreBackup
// il2cpp: void UI_PresetSkinEditPopup__RestoreBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217b70
// eh: try 0x182217ce0..0x182217f29 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182217cdd: nop dword ptr [rax]
// asm:   0x182217e61: mov rdx, qword ptr [rip + 0x1ea0af8]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x182217e68: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182217e6d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182217e72: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182217e77: test rcx, rcx
// asm:   0x182217e7a: jne 0x182217f29
// asm:   0x182217e80: xor r14d, r14d
// asm:   0x182217e83: mov rsi, qword ptr [rsp + 0xb0]
// asm:   0x182217f29: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_PresetSkinEditPopup__RestoreBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *pIVar3;
  Il2CppObject *__this_03;
  bool bVar4;
  int32_t iVar5;
  System_String_o *value;
  System_Object_array *pSVar6;
  uint uVar7;
  float value_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_70;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184347091 == '\0') {
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
    Il2CppMethodInitialized_184347091 = '\x01';
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  if (((__this->fields)._hasBackup == false) ||
     ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0)) {
    return;
  }
  __this_00 = (((__this->fields)._currentPreset)->fields).TypedSettings;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
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
    uVar7 = 0;
    while (bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             (&local_70,
                              (MethodInfo_1585360 *)
                              MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                             ), __this_03 = local_70.fields._current.fields.value,
          pIVar3 = local_70.fields._current.fields.key, bVar4) {
      iVar5 = Settings_SettingsUtil__GetSettingType
                        ((Settings_BaseSetting_o *)local_70.fields._current.fields.value,(MethodInfo *)0x0);
      if (iVar5 == 3) {
        pSVar2 = (__this->fields)._backupFloatValues;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,pIVar3,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
        if (bVar4) {
          pSVar2 = (__this->fields)._backupFloatValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          value_00 = System_Collections_Generic_Dictionary_object__float___get_Item
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,pIVar3,
                                (MethodInfo_1488BA0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
          if ((Settings_TypedSetting_T__o *)__this_03 == (Settings_TypedSetting_T__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_03,TypeInfo_Settings_FloatSetting);
          }
          Settings_TypedSetting_float___set_Value
                    ((Settings_TypedSetting_float__o *)__this_03,value_00,
                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
        }
      }
      else if (iVar5 == 4) {
        __this_01 = (__this->fields)._backupValues;
        if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,pIVar3,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
        if (bVar4) {
          __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields)._backupValues;
          if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          value = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_02,pIVar3,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
          if ((Settings_TypedSetting_T__o *)__this_03 == (Settings_TypedSetting_T__o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_03);
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar6 != (System_Object_array *)0x0) {
      while( true ) {
        if ((int)pSVar6->max_length <= (int)uVar7) {
          return;
        }
        if ((uint)pSVar6->max_length <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pIVar3 = pSVar6->m_Items[(int)uVar7];
        if (pIVar3 == (Il2CppObject *)0x0) break;
        (*pIVar3->klass->vtable[6].methodPtr)(pIVar3,pIVar3->klass->vtable[6].method);
        uVar7 = uVar7 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$OnCancelClick
// il2cpp: void UI_PresetSkinEditPopup__OnCancelClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217520

void UI_PresetSkinEditPopup__OnCancelClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.PresetSkinEditPopup$$OnSaveClick
// il2cpp: void UI_PresetSkinEditPopup__OnSaveClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217770

void UI_PresetSkinEditPopup__OnSaveClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool originalCustom;
  bool originalGlobal;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  UI_BaseMenu_o *pUVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Characters_DummyHuman_o *pCVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_HumanCustomSkinSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Characters_HumanSetup_o *pCVar9;
  bool bVar10;
  bool bVar11;
  System_Collections_IEnumerator_o *routine;
  Characters_DummyHuman_o *character;
  UI_BaseMenu_o *__this_02;
  
  if (Il2CppMethodInitialized_184347092 == '\0') {
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
    Il2CppMethodInitialized_184347092 = '\x01';
  }
  if ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0) {
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
      bVar10 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
      if (bVar10) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        bVar10 = true;
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 == (UI_BaseMenu_o *)0x0) {
          __this_02 = (UI_BaseMenu_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
          if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          __this_02 = (UI_BaseMenu_o *)0x0;
          if (bVar11) {
            __this_02 = pUVar2;
          }
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar11) {
          pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
            bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
            if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
              il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
            }
            pCVar4 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar3 + 0x38));
            if (pCVar4 == (Characters_DummyHuman_o *)0x0) {
              character = (Characters_DummyHuman_o *)0x0;
            }
            else {
              bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
              if (((pCVar4->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pCVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
                bVar10 = false;
              }
              character = (Characters_DummyHuman_o *)0x0;
              if (bVar10) {
                character = pCVar4;
              }
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar10 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if (!bVar10) goto label_182217b22;
            bVar10 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
            bVar11 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
            pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
            if ((((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
                (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0
                )) && (pSVar8 = (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->
                                  fields).Human)->fields).SetSpecificSkinsEnabled,
                      pSVar8 != (Settings_BoolSetting_o *)0x0)) {
              originalCustom = (pSVar8->fields)._value;
              originalGlobal = (pSVar7->fields)._value;
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)
                         (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).
                          Human)->fields).GlobalSkinOverridesEnabled,bVar10,
                         (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
                  (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
                 ((pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0
                  && ((Settings_TypedSetting_bool___set_Value
                                 ((Settings_TypedSetting_bool__o *)pSVar7,bVar11,
                                  (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value),
                      character != (Characters_DummyHuman_o *)0x0 &&
                      (pCVar9 = (character->fields).Setup, pCVar9 != (Characters_HumanSetup_o *)0x0)))))) {
                Characters_HumanSetup__Load
                          ((character->fields).Setup,(pCVar9->fields).CustomSet,(pCVar9->fields).Weapon,false,
                           (MethodInfo *)0x0);
                routine = UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine
                                    (__this,character,originalGlobal,originalCustom,(MethodInfo *)0x0);
                if (__this_02 != (UI_BaseMenu_o *)0x0) {
                  UnityEngine_MonoBehaviour__StartCoroutine_Auto
                            ((UnityEngine_MonoBehaviour_o *)__this_02,routine,(MethodInfo *)0x0);
                  goto label_182217b22;
                }
              }
            }
          }
          goto label_182217b59;
        }
      }
label_182217b22:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
label_182217b59:
  ThrowNullReferenceException();
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x1822173b0

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings
               (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
               bool originalCustom,MethodInfo *method)

{
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *routine;
  
  if (Il2CppMethodInitialized_184347093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
    Il2CppMethodInitialized_184347093 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(routine->fields).character,character);
  (routine->fields).originalGlobal = originalGlobal;
  (routine->fields).originalCustom = originalCustom;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettingsCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x182217330

System_Collections_IEnumerator_o *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine
          (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
          bool originalCustom,MethodInfo *method)

{
  UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_184347093 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
    Il2CppMethodInitialized_184347093 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_PresetSkinEditPopup_LoadSkinAndRestoreSettingsCoroutine_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).character,character);
  (__this_00->fields).originalGlobal = originalGlobal;
  (__this_00->fields).originalCustom = originalCustom;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.PresetSkinEditPopup$$Show
// il2cpp: void UI_PresetSkinEditPopup__Show (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1822190f0

void UI_PresetSkinEditPopup__Show(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_HumanCustomSet_o *value;
  
  if (Il2CppMethodInitialized_184347094 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347094 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     ((pSVar2->fields).CustomSets != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    value = (Settings_HumanCustomSet_o *)
            Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)(pSVar2->fields).CustomSets,
                       (MethodInfo_C8EAF0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (value == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      (__this->fields)._currentPreset = value;
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentPreset,value);
    if (((__this->fields)._currentPreset != (Settings_HumanCustomSet_o *)0x0) &&
       ((__this->fields)._hasBackup == false)) {
      UI_PresetSkinEditPopup__CreateBackup(__this,(MethodInfo *)0x0);
    }
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$OnDisable
// il2cpp: void UI_PresetSkinEditPopup__OnDisable (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217740

void UI_PresetSkinEditPopup__OnDisable(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$HideImmediate
// il2cpp: void UI_PresetSkinEditPopup__HideImmediate (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182217300

void UI_PresetSkinEditPopup__HideImmediate(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_PresetSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$.ctor
// il2cpp: void UI_PresetSkinEditPopup___ctor (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1822192e0

void UI_PresetSkinEditPopup___ctor(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_184347095 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184347095 = '\x01';
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


// UI.PresetSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_0 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182219220

void UI_PresetSkinEditPopup___Setup_b__20_0(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347096 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_184347096 = '\x01';
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Clear",(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_1 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182219260

void UI_PresetSkinEditPopup___Setup_b__20_1(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347097 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347097 = '\x01';
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_2 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1822192a0

void UI_PresetSkinEditPopup___Setup_b__20_2(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347098 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184347098 = '\x01';
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


