// Type: UI.CharacterEditorSkinsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorSkinsPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x1821e5910

bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Characters_DummyHuman_o *pCVar6;
  GameManagers_BaseGameManager_o *pGVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  bool bVar9;
  Il2CppObject *pIVar10;
  Characters_DummyHuman_o *pCVar11;
  UI_CharacterEditorSkinsPanel_o *pUVar12;
  
  if (Il2CppMethodInitialized_184346fbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346fbf = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      pGVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar7 == (GameManagers_BaseGameManager_o *)0x0) {
        pUVar12 = (__this->fields).__4__this;
        (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)0x0;
        pCVar11 = (Characters_DummyHuman_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
        if (((pGVar7->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar7);
        }
        pUVar12 = (__this->fields).__4__this;
        pCVar6 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar7 + 0x38));
        if (pCVar6 == (Characters_DummyHuman_o *)0x0) {
          (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)0x0;
          pCVar11 = (Characters_DummyHuman_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
          if (((pCVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             (bVar9 = true,
             (pCVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
            bVar9 = false;
          }
          pCVar11 = (Characters_DummyHuman_o *)0x0;
          if (bVar9) {
            pCVar11 = pCVar6;
          }
          (__this->fields)._dummyHuman_5__2 = pCVar11;
          bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
          if (((pCVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             (bVar9 = true,
             (pCVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
            bVar9 = false;
          }
          pCVar11 = (Characters_DummyHuman_o *)0x0;
          if (bVar9) {
            pCVar11 = pCVar6;
          }
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dummyHuman_5__2,pCVar11);
      if ((__this->fields)._dummyHuman_5__2 == (Characters_DummyHuman_o *)0x0) {
        return false;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        (__this->fields)._originalGlobalEnabled_5__3 = (pSVar5->fields)._value;
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           ((pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0 &&
            (((__this->fields)._originalSetEnabled_5__4 = (pSVar5->fields)._value,
             pUVar12 != (UI_CharacterEditorSkinsPanel_o *)0x0 &&
             (pUVar8 = (pUVar12->fields)._menu, pUVar8 != (UI_CharacterEditorMenu_o *)0x0)))))) {
          (*(pUVar8->klass->vtable)._9_ResetCharacter.methodPtr)
                    (pUVar8,(System_Type_o *)0x0,(pUVar8->klass->vtable)._9_ResetCharacter.method);
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pIVar10 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar10;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
          (__this->fields).__1__state = 2;
          return true;
        }
      }
    }
    else if (iVar2 == 2) {
      (__this->fields).__1__state = -1;
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,
                   TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar5,
                     TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pCVar6 = (__this->fields)._dummyHuman_5__2;
          if (pCVar6 != (Characters_DummyHuman_o *)0x0) {
            Characters_DummyHuman__LoadSkin(pCVar6,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pIVar10 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
            (__this->fields).__1__state = 3;
            return true;
          }
        }
      }
    }
    else {
      if (iVar2 != 3) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalGlobalEnabled_5__3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalSetEnabled_5__4,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return false;
        }
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x1821e5d80

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27_System_Collections_IEnum
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x1821e5dc0

bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_DummyHuman_o *__this_00;
  UI_CharacterEditorSkinsPanel_o *pUVar7;
  Settings_BoolSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  
  if (Il2CppMethodInitialized_184346fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346fc0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 = (pSVar5->fields)._value;
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
            if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
               ((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)))
               ) {
              (__this->fields)._originalSetEnabled_5__3 = (pSVar5->fields)._value;
              pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                  (((pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                    (pUVar7 = (__this->fields).__4__this, pUVar7 != (UI_CharacterEditorSkinsPanel_o *)0x0)) &&
                   (pSVar5 = (pUVar7->fields)._globalSkinPreview, pSVar5 != (Settings_BoolSetting_o *)0x0))))
                 && (pSVar8 = (pSVar4->fields).GlobalSkinOverridesEnabled,
                    pSVar8 != (Settings_BoolSetting_o *)0x0)) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar8,(pSVar5->fields)._value,
                           (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
                    (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
                   ((pSVar5 = (pUVar7->fields)._customSkinPreview, pSVar5 != (Settings_BoolSetting_o *)0x0 &&
                    (pSVar8 = (pSVar4->fields).SetSpecificSkinsEnabled,
                    pSVar8 != (Settings_BoolSetting_o *)0x0)))) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar8,(pSVar5->fields)._value,
                             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                  }
                  pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar9;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar9);
                  (__this->fields).__1__state = 2;
                  return true;
                }
              }
            }
          }
          goto label_1821e614e;
        }
      }
    }
  }
  else if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).GlobalSkinOverridesEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Human, pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).SetSpecificSkinsEnabled, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_1821e614e:
    ThrowNullReferenceException();
  }
  return false;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x1821e6160

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30_System_Collections_IEnumera
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor(UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose(UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x1821e77b0

bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_DummyHuman_o *pCVar5;
  UI_CharacterEditorSkinsPanel_o *__this_00;
  Characters_HumanSetup_o *x;
  bool bVar6;
  Il2CppObject *pIVar7;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346fc1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pCVar5 = (__this->fields).dummyHuman;
      (__this->fields).__1__state = -1;
      if (pCVar5 != (Characters_DummyHuman_o *)0x0) {
        __this_00 = (__this->fields).__4__this;
        x = (pCVar5->fields).Setup;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if (__this_00 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
            routine = UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
                                (__this_00,(__this->fields).originalGlobalEnabled,
                                 (__this->fields).originalSetEnabled,(MethodInfo *)0x0);
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
            return false;
          }
        }
        else {
          pCVar5 = (__this->fields).dummyHuman;
          if (pCVar5 != (Characters_DummyHuman_o *)0x0) {
            Characters_DummyHuman__LoadSkin(pCVar5,(MethodInfo *)0x0);
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar7;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
            (__this->fields).__1__state = 2;
            return true;
          }
        }
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
                  ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalGlobalEnabled,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           (pSVar4 = (pSVar3->fields).SetSpecificSkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalSetEnabled,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return false;
        }
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar7);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x1821e79e0

void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current(UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor(UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose(UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x1821e7c20

bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184346fc2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).GlobalSkinOverridesEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalGlobalEnabled,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).SetSpecificSkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalSetEnabled,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x1821e7d10

void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31_System_Collections_IEnumerator_Re
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current(UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorSkinsPanel__get_Title (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc6d0

System_String_o *
UI_CharacterEditorSkinsPanel__get_Title(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fae = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Top","SkinsButton","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorSkinsPanel$$get_Width
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Width (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821d2010

float
UI_CharacterEditorSkinsPanel__get_Width(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  return 330.0;
}


// UI.CharacterEditorSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Height (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc6c0

float
UI_CharacterEditorSkinsPanel__get_Height(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  return 310.0;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorSkinsPanel__get_VerticalSpacing (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorSkinsPanel__get_VerticalSpacing(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_CharacterEditorSkinsPanel__get_HorizontalPadding(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_CharacterEditorSkinsPanel__get_VerticalPadding(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x1821dac10

bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346faf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346faf = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x1821dabd0

bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346fb0 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
}


// UI.CharacterEditorSkinsPanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x1821d1b70

void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_184346fb1 = '\x01';
  }
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
  TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
  return;
}


// UI.CharacterEditorSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorSkinsPanel__Setup (UI_CharacterEditorSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821db910
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821dbe99: mov ebx, r14d
// asm:   0x1821dbe9c: mov eax, r14d
// asm:   0x1821dbe9f: nop 
// asm:   0x1821dc00c: mov ebx, r14d
// asm:   0x1821dc00f: mov eax, r14d

void UI_CharacterEditorSkinsPanel__Setup
               (UI_CharacterEditorSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  bool bVar4;
  uint uVar5;
  int32_t iVar6;
  Settings_BoolSetting_o *pSVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  System_Collections_Generic_List_int__o *__this_02;
  Settings_IntSetting_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Text_o *__this_04;
  UnityEngine_UI_Text_o *__this_05;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_UI_LayoutElement_o *x_00;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *routine;
  UI_CharacterEditorMenu_o *pUVar15;
  UI_CharacterEditorMenu_o *pUVar16;
  int32_t iVar17;
  
  if (Il2CppMethodInitialized_184346fb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterSkins");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalSkins");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Global");
    Il2CppMethodInitialized_184346fb2 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar16 = (UI_CharacterEditorMenu_o *)0x0;
  pUVar15 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar15 == (UI_CharacterEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
    pUVar15 = pUVar16;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar15->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar15);
    }
    (__this->fields)._menu = pUVar15;
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar15->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar15);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar15);
  (__this->fields)._isRebuildingPanel = true;
  if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_hasInitializedPersistentStates == false) {
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview = false;
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview = false;
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_hasInitializedPersistentStates = true;
  }
  bVar4 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar7,bVar4,(MethodInfo *)0x0);
  (__this->fields)._globalSkinPreview = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._globalSkinPreview,pSVar7);
  bVar4 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar7,bVar4,(MethodInfo *)0x0);
  (__this->fields)._customSkinPreview = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinPreview,pSVar7);
  pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,95.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar8 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  pSVar9 = UI_UIManager__GetLocale
                     ("CharacterPopup","General","Character","",
                      "",(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_1969b70(pSVar8," ",pSVar9,(MethodInfo *)0x0);
  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar10,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar14,__this_00,pSVar8,0.0,pUVar10,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).BottomBar;
  pSVar8 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  pSVar9 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","",
                      "",(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_1969b70(pSVar8," ",pSVar9,(MethodInfo *)0x0);
  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar10,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar14,__this_00,pSVar8,0.0,pUVar10,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_184346fb3 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar2 == (Settings_CustomSkinSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanCustomSkinSettings_o *)0x0)) {
label_1821dc5cb:
    ThrowNullReferenceException();
  }
  pSVar11 = Settings_SetSettingsContainer_object___GetSetNames
                      ((Settings_SetSettingsContainer_T__o *)pSVar3,
                       (MethodInfo_C8EC20 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pUVar15 = pUVar16;
  if (pSVar11 == (System_String_array *)0x0) goto label_1821dc5cb;
  while (uVar5 = (uint)pUVar15, (int)uVar5 < (int)pSVar11->max_length) {
    if ((uint)pSVar11->max_length <= uVar5) goto label_1821dc5c5;
    if (pSVar11->m_Items[(int)uVar5] == (System_String_o *)0x0) goto label_1821dc5cb;
    bVar4 = System_String__StartsWith(pSVar11->m_Items[(int)uVar5],"Custom Set:",(MethodInfo *)0x0);
    if (!bVar4) {
      if ((uint)pSVar11->max_length <= uVar5) goto label_1821dc5c5;
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821dc5cb;
      il2cpp_runtime_helper_180012890(__this_01,pSVar11->m_Items[(int)uVar5]);
    }
    pUVar15 = (UI_CharacterEditorMenu_o *)(ulonglong)(uVar5 + 1);
  }
  if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821dc5cb;
  options = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)__this_01,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  if (Il2CppMethodInitialized_184346fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_184346fb4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 == (Settings_CustomSkinSettings_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Human, pSVar3 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
     (pSVar12 = (pSVar3->fields).LastGlobalPresetIndex, pSVar12 == (Settings_IntSetting_o *)0x0))
  goto label_1821dc5cb;
  iVar17 = (pSVar12->fields)._value;
  pSVar11 = Settings_SetSettingsContainer_object___GetSetNames
                      ((Settings_SetSettingsContainer_T__o *)
                       (TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human,
                       (MethodInfo_C8EC20 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (pSVar11 == (System_String_array *)0x0) goto label_1821dc5cb;
  while (uVar5 = (uint)pUVar16, (int)uVar5 < (int)pSVar11->max_length) {
    if ((uint)pSVar11->max_length <= uVar5) {
label_1821dc5c5:
      ThrowIndexOutOfRangeException();
    }
    if (pSVar11->m_Items[(int)uVar5] == (System_String_o *)0x0) goto label_1821dc5cb;
    bVar4 = System_String__StartsWith(pSVar11->m_Items[(int)uVar5],"Custom Set:",(MethodInfo *)0x0);
    if (!bVar4) {
      if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821dc5cb;
      il2cpp_runtime_helper_180026690(__this_02,pUVar16);
    }
    pUVar16 = (UI_CharacterEditorMenu_o *)(ulonglong)(uVar5 + 1);
  }
  if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821dc5cb;
  iVar6 = System_Collections_Generic_List_int___IndexOf
                    (__this_02,iVar17,
                     (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
  iVar17 = 0;
  if (-1 < iVar6) {
    iVar17 = iVar6;
  }
  pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar12,iVar17,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._globalSetDropdownSetting = pSVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._globalSetDropdownSetting,pSVar12);
  pUVar14 = (__this->fields).SinglePanel;
  pSVar12 = (__this->fields)._globalSetDropdownSetting;
  pSVar8 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","",
                      "",(MethodInfo *)0x0);
  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar10,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_2,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateDropdownSetting
                      (pUVar14,__this_00,(Settings_BaseSetting_o *)pSVar12,pSVar8,
                       (System_String_array *)options,"",160.0,40.0,180.0,
                       (System_Nullable_float__o)0x0,pUVar10,(System_Int32_array *)0x0,(MethodInfo *)0x0);
  if (((pUVar13 == (UnityEngine_GameObject_o *)0x0) ||
      (pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_1821dc5cb;
  UnityEngine_Component__GetComponent_object_
            ((UnityEngine_Component_o *)pUVar14,
             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  pUVar14 = (__this->fields).SinglePanel;
  pSVar7 = (__this->fields)._globalSkinPreview;
  pSVar8 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","GlobalSkins","",
                      "",(MethodInfo *)0x0);
  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar10,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_3,(MethodInfo *)0x0);
  pUVar13 = UI_ElementFactory__CreateToggleSetting
                      (pUVar14,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",30.0,
                       30.0,pUVar10,(MethodInfo *)0x0);
  pUVar14 = (__this->fields).SinglePanel;
  pSVar7 = (__this->fields)._customSkinPreview;
  pSVar8 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","CharacterSkins","",
                      "",(MethodInfo *)0x0);
  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar10,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_4,(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateToggleSetting
                        (pUVar14,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",30.0,
                         30.0,pUVar10,(MethodInfo *)0x0);
  if (((pUVar13 == (UnityEngine_GameObject_o *)0x0) ||
      (pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0)) ||
     ((pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0),
      pUVar14 == (UnityEngine_Transform_o *)0x0 ||
      ((((__this_04 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar14,
                                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
         __this_03 == (UnityEngine_GameObject_o *)0x0 ||
         (pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0),
         pUVar14 == (UnityEngine_Transform_o *)0x0)) ||
        (pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0),
        pUVar14 == (UnityEngine_Transform_o *)0x0)) ||
       ((__this_05 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar14,
                                (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
        __this_04 == (UnityEngine_UI_Text_o *)0x0 ||
        (UnityEngine_UI_Text__set_horizontalOverflow(__this_04,1,(MethodInfo *)0x0),
        __this_05 == (UnityEngine_UI_Text_o *)0x0)))))))) goto label_1821dc5cb;
  UnityEngine_UI_Text__set_horizontalOverflow(__this_05,1,(MethodInfo *)0x0);
  UnityEngine_UI_Text__set_verticalOverflow(__this_04,1,(MethodInfo *)0x0);
  UnityEngine_UI_Text__set_verticalOverflow(__this_05,1,(MethodInfo *)0x0);
  pUVar14 = UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
  if ((pUVar14 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_1821dc5cb;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar14,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  pUVar14 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
  if ((pUVar14 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar14 = UnityEngine_Transform__Find(pUVar14,"Label",(MethodInfo *)0x0),
     pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_1821dc5cb;
  x_00 = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar14,
                    (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821dc5cb;
    (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x,210.0,(x->klass->vtable)._36_set_preferredWidth.method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x_00 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1821dc5cb;
    (*(x_00->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x_00,210.0,(x_00->klass->vtable)._36_set_preferredWidth.method);
  }
  pSVar7 = (__this->fields)._globalSkinPreview;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_1821dc5cb;
  if ((pSVar7->fields)._value == false) {
    pSVar7 = (__this->fields)._customSkinPreview;
    if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_1821dc5cb;
    if ((pSVar7->fields)._value == false) goto label_1821dc57b;
  }
  if (Il2CppMethodInitialized_184346fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
    Il2CppMethodInitialized_184346fb9 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
label_1821dc57b:
  (__this->fields)._isRebuildingPanel = false;
  return;
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetNames
// il2cpp: System_String_array* UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821daa70

System_String_array *
UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Settings_HumanCustomSkinSettings_o *__this_00;
  bool bVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184346fb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_184346fb3 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar1 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EC20 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (pSVar3 != (System_String_array *)0x0) {
      for (uVar5 = 0; (int)uVar5 < (int)pSVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pSVar3->max_length <= uVar5) {
label_1821dabc3:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar3->m_Items[(int)uVar5] == (System_String_o *)0x0) goto label_1821dabbd;
        bVar2 = System_String__StartsWith(pSVar3->m_Items[(int)uVar5],"Custom Set:",(MethodInfo *)0x0)
        ;
        if (!bVar2) {
          if ((uint)pSVar3->max_length <= uVar5) goto label_1821dabc3;
          if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821dabbd;
          il2cpp_runtime_helper_180012890(__this_01,pSVar3->m_Items[(int)uVar5]);
        }
      }
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar4 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_01,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar4;
      }
    }
  }
label_1821dabbd:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetIndex
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821da8d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821da9dc: nop dword ptr [rax]

int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Settings_HumanCustomSkinSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  int32_t iVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_int__o *__this_00;
  int32_t iVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_184346fb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_184346fb4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar1 != (Settings_CustomSkinSettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Human, pSVar2 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).LastGlobalPresetIndex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar7 = (pSVar3->fields)._value;
    pSVar6 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)
                        (TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human,
                        (MethodInfo_C8EC20 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    if (pSVar6 != (System_String_array *)0x0) {
      for (uVar8 = 0; (int)uVar8 < (int)pSVar6->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pSVar6->max_length <= uVar8) {
          ThrowIndexOutOfRangeException();
        }
        if (pSVar6->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_1821daa5e;
        bVar4 = System_String__StartsWith(pSVar6->m_Items[(int)uVar8],"Custom Set:",(MethodInfo *)0x0)
        ;
        if (!bVar4) {
          if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) goto label_1821daa5e;
          il2cpp_runtime_helper_180026690(__this_00,uVar8);
        }
      }
      if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar5 = System_Collections_Generic_List_int___IndexOf
                          (__this_00,iVar7,
                           (MethodInfo_91F570 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
        iVar7 = 0;
        if (-1 < iVar5) {
          iVar7 = iVar5;
        }
        return iVar7;
      }
    }
  }
label_1821daa5e:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$OnGlobalSkinSetSelected
// il2cpp: void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected (UI_CharacterEditorSkinsPanel_o* __this, int32_t filteredIndex, const MethodInfo* method);
// 0x1821dafb0

void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected
               (UI_CharacterEditorSkinsPanel_o *__this,int32_t filteredIndex,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UI_CharacterEditorMenu_o *pUVar5;
  UI_ConfirmPopup_o *x;
  UI_GlobalSkinEditPopup_o *__this_00;
  bool bVar6;
  System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields value;
  System_String_array *pSVar7;
  System_Collections_Generic_List_RegexCharClass_SingleRange__o *__this_01;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *routine;
  uint uVar8;
  UI_CharacterEditorMenu_o *x_00;
  
  if (Il2CppMethodInitialized_184346fb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_184346fb5 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
     (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar7 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)pSVar3,
                        (MethodInfo_C8EC20 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    __this_01 = (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    if (pSVar7 != (System_String_array *)0x0) {
      for (uVar8 = 0; (int)uVar8 < (int)pSVar7->max_length; uVar8 = uVar8 + 1) {
        if ((uint)pSVar7->max_length <= uVar8) goto label_1821db371;
        if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_1821db36b;
        bVar6 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"Custom Set:",(MethodInfo *)0x0)
        ;
        if (!bVar6) {
          if (__this_01 == (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0)
          goto label_1821db36b;
          il2cpp_runtime_helper_180026690(__this_01,uVar8);
        }
      }
      if (filteredIndex < 0) {
        return;
      }
      if (__this_01 != (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)0x0) {
        if ((__this_01->fields)._size <= filteredIndex) {
          return;
        }
        value = (System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields)
                System_Collections_Generic_List_int___get_Item
                          (__this_01,filteredIndex,
                           (MethodInfo_92B8E0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,(int32_t)value,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
              (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
             (pSVar4 = (pSVar3->fields).LastGlobalPresetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar4,(int32_t)value,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            if ((uint)*(System_Text_RegularExpressions_RegexCharClass_SingleRange_Fields *)&pSVar7->max_length
                <= (uint)value) {
label_1821db371:
              ThrowIndexOutOfRangeException();
            }
            pUVar5 = (__this->fields)._menu;
            if (pUVar5 == (UI_CharacterEditorMenu_o *)0x0) {
              x_00 = (UI_CharacterEditorMenu_o *)0x0;
            }
            else {
              bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
              if (((pUVar5->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              x_00 = (UI_CharacterEditorMenu_o *)0x0;
              if (bVar6) {
                x_00 = pUVar5;
              }
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar6) {
              if (x_00 == (UI_CharacterEditorMenu_o *)0x0) goto label_1821db36b;
              x = (*(uint64_t *)((char *)x_00 + 0xd8));
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                __this_00 = (UI_GlobalSkinEditPopup_o *)(*(uint64_t *)((char *)x_00 + 0xd8));
                if (__this_00 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_1821db36b;
                if ((__this_00->fields).IsActive != false) {
                  if ((__this_00->fields)._hasBackup != false) {
                    UI_GlobalSkinEditPopup__RestoreBackup(__this_00,(MethodInfo *)0x0);
                  }
                  (*(__this_00->klass->vtable)._22_Hide.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._22_Hide.method);
                }
              }
            }
            if ((TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false)
               && (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false
                  )) {
              return;
            }
            if (Il2CppMethodInitialized_184346fb6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
              Il2CppMethodInitialized_184346fb6 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27
                                );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_1821db36b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterGlobalSetChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821da7f0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
    Il2CppMethodInitialized_184346fb6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$OnSkinPreviewToggle
// il2cpp: void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821db380
// eh: try 0x1821db440..0x1821db89e -> pad 0x1833157d0 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821db699: nop 
// asm:   0x1821db69a: jmp 0x1821db825
// asm:   0x1821db7c4: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821db7c9: test rcx, rcx
// asm:   0x1821db7cc: je 0x1821db831
// asm:   0x1821db7ce: mov rax, qword ptr [rcx]
// asm:   0x1821db7d1: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1821db7d8: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1821db7de: mov rbx, rax
// asm:   0x1821db7e1: lea rcx, [rip + 0x1ef5e80]  ; "Error updating skin preview: "
// asm:   0x1821db7e8: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821db7ed: mov rcx, rax
// asm:   0x1821db7f0: xor r8d, r8d
// asm:   0x1821db7f3: mov rdx, rbx
// asm:   0x1821db7f6: call 0x181969e50  ; System_String__Concat()
// asm:   0x1821db7fb: mov rbx, rax
// asm:   0x1821db7fe: lea rcx, [rip + 0x1f1fc33]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1821db805: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821db80a: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1821db811: jne 0x1821db81b
// asm:   0x1821db813: mov rcx, rax
// asm:   0x1821db816: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1821db81b: xor edx, edx
// asm:   0x1821db81d: mov rcx, rbx
// asm:   0x1821db820: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x1821db831: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool originalGlobalEnabled;
  bool originalSetEnabled;
  Settings_BoolSetting_o *pSVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Characters_DummyHuman_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  Settings_HumanCustomSettings_o *pSVar9;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_01;
  UI_ExternalLinkPopup_o *pUVar10;
  Characters_HumanSetup_o *__this_02;
  bool bVar11;
  UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *routine;
  Settings_HumanCustomSet_o *customSet;
  UI_CharacterEditorMenu_o *x;
  
  if (Il2CppMethodInitialized_184346fb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184346fb7 = '\x01';
  }
  if ((__this->fields)._isRebuildingPanel == false) {
    pSVar2 = (__this->fields)._globalSkinPreview;
    if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview =
         (pSVar2->fields)._value;
    pSVar2 = (__this->fields)._customSkinPreview;
    if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview =
         (pSVar2->fields)._value;
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar3 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if (pSVar4 == (Settings_CustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar4->fields).Human;
          if (pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (pSVar5->fields).GlobalSkinOverridesEnabled;
          if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human)->
                   fields).SetSpecificSkinsEnabled;
          if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = (__this->fields)._globalSkinPreview;
          if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          originalGlobalEnabled = (pSVar2->fields)._value;
          originalSetEnabled = (pSVar6->fields)._value;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)
                     (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human)->
                     fields).GlobalSkinOverridesEnabled,(pSVar7->fields)._value,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if (pSVar4 == (Settings_CustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar4->fields).Human;
          if (pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (__this->fields)._customSkinPreview;
          if (pSVar2 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled;
          if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar6,(pSVar2->fields)._value,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pUVar8 = (__this->fields)._menu;
          if (pUVar8 == (UI_CharacterEditorMenu_o *)0x0) {
            x = (UI_CharacterEditorMenu_o *)0x0;
          }
          else {
            bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
            if (((pUVar8->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            x = (UI_CharacterEditorMenu_o *)0x0;
            if (bVar11) {
              x = pUVar8;
            }
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar11) {
            pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
            if (pSVar9 == (Settings_HumanCustomSettings_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_01 = (pSVar9->fields).CustomSets;
            if (__this_01 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
              ThrowNullReferenceException();
            }
            customSet = (Settings_HumanCustomSet_o *)
                        Settings_SetSettingsContainer_object___GetSelectedSet
                                  ((Settings_SetSettingsContainer_T__o *)__this_01,
                                   (MethodInfo_C8EAF0 *)
                                   MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
            if (customSet != (Settings_HumanCustomSet_o *)0x0) {
              bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((customSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(customSet);
              }
            }
            if (x == (UI_CharacterEditorMenu_o *)0x0) {
              ThrowNullReferenceException();
            }
            pUVar10 = (*(uint64_t *)((char *)x + 0xe0));
            if (pUVar10 == (UI_ExternalLinkPopup_o *)0x0) {
              ThrowNullReferenceException();
            }
            __this_02 = (__this_00->fields).Setup;
            if (__this_02 == (Characters_HumanSetup_o *)0x0) {
              ThrowNullReferenceException();
            }
            Characters_HumanSetup__Load
                      (__this_02,customSet,
                       *(int32_t *)((longlong)&(pUVar10->fields).m_CancellationTokenSource + 4),false,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184346fb8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
              Il2CppMethodInitialized_184346fb8 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29
                                );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            if (routine == (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *)0x0) {
              ThrowNullReferenceException();
            }
            (routine->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
            (routine->fields).dummyHuman = __this_00;
            Il2CppCodeGenWriteBarrier(&(routine->fields).dummyHuman,__this_00);
            (routine->fields).originalGlobalEnabled = originalGlobalEnabled;
            (routine->fields).originalSetEnabled = originalSetEnabled;
          }
          else {
            Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
            routine = (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *)
                      UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
                                (__this,originalGlobalEnabled,originalSetEnabled,(MethodInfo *)0x0);
          }
          UnityEngine_MonoBehaviour__StartCoroutine_Auto
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// UI.CharacterEditorSkinsPanel$$LoadSkinAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset (UI_CharacterEditorSkinsPanel_o* __this, Characters_DummyHuman_o* dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x1821dac50

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset
          (UI_CharacterEditorSkinsPanel_o *__this,Characters_DummyHuman_o *dummyHuman,
          bool originalGlobalEnabled,bool originalSetEnabled,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
    Il2CppMethodInitialized_184346fb8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).dummyHuman = dummyHuman;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).dummyHuman,dummyHuman);
  (__this_00->fields).originalGlobalEnabled = originalGlobalEnabled;
  (__this_00->fields).originalSetEnabled = originalSetEnabled;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterInitialSetup
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821da860

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
    Il2CppMethodInitialized_184346fb9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$RestoreOriginalSkinSettings
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings (UI_CharacterEditorSkinsPanel_o* __this, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x1821db8a0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
          (UI_CharacterEditorSkinsPanel_o *__this,bool originalGlobalEnabled,bool originalSetEnabled,
          MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
    Il2CppMethodInitialized_184346fba = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).originalGlobalEnabled = originalGlobalEnabled;
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).originalSetEnabled = originalSetEnabled;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorSkinsPanel__OnButtonClick (UI_CharacterEditorSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821dace0

void UI_CharacterEditorSkinsPanel__OnButtonClick
               (UI_CharacterEditorSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_ConfirmPopup_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_TooltipPopup_o *pUVar5;
  bool bVar6;
  UI_MessagePopup_o *pUVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  
  if (Il2CppMethodInitialized_184346fbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"EditGlobalSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"EditCustomSkins");
    Il2CppMethodInitialized_184346fbb = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"EditCustomSkins",(MethodInfo *)0x0);
  if (bVar6) {
    pUVar2 = (__this->fields)._menu;
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    if (pUVar2 != (UI_CharacterEditorMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar6 = true,
         (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        bVar6 = false;
      }
      if (bVar6) {
        pUVar8 = pUVar2;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    if (pUVar8 == (UI_CharacterEditorMenu_o *)0x0) goto label_1821daf9d;
    pUVar7 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pUVar3 = (*(uint64_t *)((char *)pUVar8 + 0xd8));
    if (pUVar3 == (UI_ConfirmPopup_o *)0x0) goto label_1821daf9d;
    (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
    pSVar4 = (*(uint64_t *)((char *)pUVar8 + 0xc0));
    if (pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821daf9d;
    (*(pSVar4->klass->vtable)._22_Clear.methodPtr)(pSVar4,(pSVar4->klass->vtable)._22_Clear.method);
    pUVar5 = (*(uint64_t *)((char *)pUVar8 + 0xc8));
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_1821daf9d;
    (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
    pUVar7 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
  }
  else {
    bVar6 = System_String__op_Equality(name,"EditGlobalSkin",(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pUVar2 = (__this->fields)._menu;
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    if (pUVar2 != (UI_CharacterEditorMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar6 = true,
         (pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
        bVar6 = false;
      }
      if (bVar6) {
        pUVar8 = pUVar2;
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    if (pUVar8 == (UI_CharacterEditorMenu_o *)0x0) goto label_1821daf9d;
    pUVar3 = (*(uint64_t *)((char *)pUVar8 + 0xd8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      return;
    }
    pUVar7 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
    if (pUVar7 == (UI_MessagePopup_o *)0x0) goto label_1821daf9d;
    (*(pUVar7->klass->vtable)._22_Hide.methodPtr)(pUVar7,(pUVar7->klass->vtable)._22_Hide.method);
    pSVar4 = (*(uint64_t *)((char *)pUVar8 + 0xc0));
    if (pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_1821daf9d;
    (*(pSVar4->klass->vtable)._22_Clear.methodPtr)(pSVar4,(pSVar4->klass->vtable)._22_Clear.method);
    pUVar5 = (*(uint64_t *)((char *)pUVar8 + 0xc8));
    if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_1821daf9d;
    (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
    pUVar7 = (UI_MessagePopup_o *)(*(uint64_t *)((char *)pUVar8 + 0xd8));
  }
  if (pUVar7 != (UI_MessagePopup_o *)0x0) {
    (*(pUVar7->klass->vtable)._21_Show.methodPtr)(pUVar7,(pUVar7->klass->vtable)._21_Show.method);
    return;
  }
label_1821daf9d:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel___ctor (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_CharacterEditorSkinsPanel___ctor(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_0
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_0 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc5e0

void UI_CharacterEditorSkinsPanel___Setup_b__23_0(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditCustomSkins");
    Il2CppMethodInitialized_184346fbc = '\x01';
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditCustomSkins",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_1
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_1 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc620

void UI_CharacterEditorSkinsPanel___Setup_b__23_1(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditGlobalSkin");
    Il2CppMethodInitialized_184346fbd = '\x01';
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditGlobalSkin",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_2
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_2 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc660

void UI_CharacterEditorSkinsPanel___Setup_b__23_2(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346fbe = '\x01';
  }
  pSVar1 = (__this->fields)._globalSetDropdownSetting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected(__this,(pSVar1->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_3
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_3 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc6b0

void
UI_CharacterEditorSkinsPanel___Setup_b__23_3(UI_CharacterEditorSkinsPanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_4
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_4 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x1821dc6b0

void UI_CharacterEditorSkinsPanel___Setup_b__23_4(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,(MethodInfo *)0x0);
  return;
}


