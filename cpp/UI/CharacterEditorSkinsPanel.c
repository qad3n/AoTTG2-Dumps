// Type: UI.CharacterEditorSkinsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorSkinsPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd7210

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x5cd7d30

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x5cd7d40

bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorSkinsPanel_o *pUVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Characters_DummyHuman_o *pCVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_HumanCustomSkinSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  Il2CppObject *pIVar9;
  Characters_DummyHuman_o *pCVar10;
  Characters_DummyHuman_o **ppCVar11;
  
  if (Il2CppMethodInitialized_07547bbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547bbf = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  case 1:
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) {
label_05cd8024:
      (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)0x0;
label_05cd805b:
      ppCVar11 = &(__this->fields)._dummyHuman_5__2;
      Il2CppCodeGenWriteBarrier(ppCVar11);
      pCVar4 = *ppCVar11;
    }
    else {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pCVar4 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar3 + 0x38));
      if (pCVar4 == (Characters_DummyHuman_o *)0x0) goto label_05cd8024;
      bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
      if ((pCVar4->klass->_2).typeHierarchyDepth < bVar1) {
        pCVar10 = (Characters_DummyHuman_o *)0x0;
      }
      else {
        pCVar10 = (Characters_DummyHuman_o *)0x0;
        if ((pCVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman) {
          pCVar10 = pCVar4;
        }
      }
      ppCVar11 = &(__this->fields)._dummyHuman_5__2;
      (__this->fields)._dummyHuman_5__2 = pCVar10;
      if ((pCVar4->klass->_2).typeHierarchyDepth < bVar1) goto label_05cd805b;
      Il2CppCodeGenWriteBarrier(ppCVar11);
      pCVar4 = *ppCVar11;
    }
    if (pCVar4 == (Characters_DummyHuman_o *)0x0) {
switchD_05cd7dd6_default:
      return false;
    }
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      (__this->fields)._originalGlobalEnabled_5__3 = (pSVar7->fields)._value;
      pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled;
      if (((pSVar7 != (Settings_BoolSetting_o *)0x0) &&
          ((__this->fields)._originalSetEnabled_5__4 = (pSVar7->fields)._value,
          pUVar2 != (UI_CharacterEditorSkinsPanel_o *)0x0)) &&
         (pUVar8 = (pUVar2->fields)._menu, pUVar8 != (UI_CharacterEditorMenu_o *)0x0)) {
        (*(pUVar8->klass->vtable)._10_ResetCharacter.methodPtr)
                  (pUVar8,false,(pUVar8->klass->vtable)._10_ResetCharacter.method);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar7,
                 TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar7,
                   TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pCVar4 = (__this->fields)._dummyHuman_5__2;
        if (pCVar4 != (Characters_DummyHuman_o *)0x0) {
          Characters_DummyHuman__LoadSkin(pCVar4,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 3;
          return true;
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar7,(__this->fields)._originalGlobalEnabled_5__3,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar7,(__this->fields)._originalSetEnabled_5__4,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
    break;
  default:
    goto switchD_05cd7dd6_default;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x5cd8170

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x5cd8180

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
// 0x5cd81c0

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd78f0

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x5cd81d0

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x5cd81e0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd84be: mov edi, 2
// asm:   0x5cd84c3: xor esi, esi
// asm:   0x5cd84c5: call 0x5df1d90  ; Utility_Util__YieldForFrames()
// asm:   0x5cd84ca: lea rdi, [rbx + 0x18]
// asm:   0x5cd84ce: mov qword ptr [rbx + 0x18], rax
// asm:   0x5cd84d2: mov rsi, rax
// asm:   0x5cd84d5: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5cd84da: mov dword ptr [rbx + 0x10], 2
// asm:   0x5cd84e1: mov al, 1
// asm:   0x5cd84e3: jmp 0x5cd83d2

bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *pUVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Characters_DummyHuman_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_HumanCustomSkinSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Il2CppObject *pIVar9;
  
  if (Il2CppMethodInitialized_07547bc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547bc0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar7,(__this->fields)._originalGlobalEnabled_5__2,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar7 = (pSVar6->fields).SetSpecificSkinsEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar7,(__this->fields)._originalSetEnabled_5__3,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        return false;
      }
    }
label_05cd84e8:
    ThrowNullReferenceException();
  }
  if (iVar2 == 1) {
    pUVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar4->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar4 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if ((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
             ((pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
              (pSVar7 = (pSVar6->fields).GlobalSkinOverridesEnabled, pSVar7 != (Settings_BoolSetting_o *)0x0))
             )) {
            (__this->fields)._originalGlobalEnabled_5__2 =
                 ((Settings_TypedSetting_bool__Fields *)&pSVar7->fields)->_value;
            pSVar8 = (pSVar6->fields).SetSpecificSkinsEnabled;
            if ((pSVar8 != (Settings_BoolSetting_o *)0x0) &&
               (((__this->fields)._originalSetEnabled_5__3 = (pSVar8->fields)._value,
                pUVar3 != (UI_CharacterEditorSkinsPanel_o *)0x0 &&
                (pSVar8 = (pUVar3->fields)._globalSkinPreview, pSVar8 != (Settings_BoolSetting_o *)0x0)))) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar7,(pSVar8->fields)._value,
                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
              if ((pSVar5 != (Settings_CustomSkinSettings_o *)0x0) &&
                 (((pSVar6 = (pSVar5->fields).Human, pSVar6 != (Settings_HumanCustomSkinSettings_o *)0x0 &&
                   (pSVar7 = (pUVar3->fields)._customSkinPreview, pSVar7 != (Settings_BoolSetting_o *)0x0)) &&
                  (pSVar8 = (pSVar6->fields).SetSpecificSkinsEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0)
                  ))) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar8,(pSVar7->fields)._value,
                           (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar9;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 2;
                return true;
              }
            }
          }
          goto label_05cd84e8;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x5cd8500

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x5cd8510

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
// 0x5cd8550

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd78d0

void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x5cd8560

void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x5cd8570

bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *__this_00;
  Characters_DummyHuman_o *pCVar3;
  Characters_HumanSetup_o *x;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this_01;
  
  if (Il2CppMethodInitialized_07547bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547bc1 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
        (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
       (pSVar6 = (pSVar5->fields).GlobalSkinOverridesEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0)) {
label_05cd87b2:
      ThrowNullReferenceException();
    }
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields).originalGlobalEnabled,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
        (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
       (pSVar6 = (pSVar5->fields).SetSpecificSkinsEnabled, pSVar6 == (Settings_BoolSetting_o *)0x0))
    goto label_05cd87b2;
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar6,(__this->fields).originalSetEnabled,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
label_05cd8756:
    bVar7 = false;
  }
  else {
    if (iVar2 == 1) {
      __this_00 = (__this->fields).__4__this;
      (__this->fields).__1__state = -1;
      pCVar3 = (__this->fields).dummyHuman;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto label_05cd87b2;
      x = (pCVar3->fields).Setup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        if (__this_00 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
          bVar7 = (__this->fields).originalGlobalEnabled;
          bVar1 = (__this->fields).originalSetEnabled;
          if (Il2CppMethodInitialized_07547bba == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
            Il2CppMethodInitialized_07547bba = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          (__this_01->fields).__1__state = 0;
          (__this_01->fields).originalGlobalEnabled = bVar7;
          (__this_01->fields).originalSetEnabled = bVar1;
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_01,
                     (MethodInfo *)0x0);
          return false;
        }
        goto label_05cd87b2;
      }
      pCVar3 = (__this->fields).dummyHuman;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto label_05cd87b2;
      Characters_DummyHuman__LoadSkin(pCVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar2 != 0) goto label_05cd8756;
      (__this->fields).__1__state = -1;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    bVar7 = true;
  }
  return bVar7;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x5cd87c0

Il2CppObject *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x5cd87d0

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
// 0x5cd8810

Il2CppObject *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cd7910

void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x5cd8820

void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x5cd8830

bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547bc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_07547bc2 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).GlobalSkinOverridesEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalGlobalEnabled,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).SetSpecificSkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalSetEnabled,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        goto label_05cd8918;
      }
    }
    ThrowNullReferenceException();
  }
label_05cd8918:
  return iVar1 == 0;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x5cd8930

Il2CppObject *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x5cd8940

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
// 0x5cd8980

Il2CppObject *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorSkinsPanel__get_Title (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd5c20

System_String_o *
UI_CharacterEditorSkinsPanel__get_Title(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinsButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547bae = '\x01';
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
// 0x5cd5cc0

float UI_CharacterEditorSkinsPanel__get_Width(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Height (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd5cd0

float UI_CharacterEditorSkinsPanel__get_Height(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorSkinsPanel__get_VerticalSpacing (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd5ce0

float UI_CharacterEditorSkinsPanel__get_VerticalSpacing
                (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd5cf0

int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd5d00

int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x5cd5d10

bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547baf = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x5cd5d50

bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547bb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547bb0 = '\x01';
  }
  return TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
}


// UI.CharacterEditorSkinsPanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x5ccfba0

void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar1;
  
  if (Il2CppMethodInitialized_07547bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
    Il2CppMethodInitialized_07547bb1 = '\x01';
  }
  pUVar1 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
  pUVar1->_persistentGlobalSkinPreview = false;
  pUVar1->_persistentCustomSkinPreview = false;
  return;
}


// UI.CharacterEditorSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorSkinsPanel__Setup (UI_CharacterEditorSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cd5d90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd5f9e: lea rdi, [r15 + 0x80]
// asm:   0x5cd5fa5: jmp 0x5cd5fd1

void UI_CharacterEditorSkinsPanel__Setup
               (UI_CharacterEditorSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_BoolSetting_o **targetAddress;
  Settings_BoolSetting_o **targetAddress_00;
  byte bVar1;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar2;
  UI_CharacterEditorMenu_c *pUVar3;
  bool bVar4;
  int32_t defaultValue;
  Settings_BoolSetting_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *__this_00;
  System_String_o *pSVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  System_String_array *options;
  Settings_IntSetting_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_UI_LayoutElement_o *x;
  UnityEngine_UI_LayoutElement_o *x_00;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this_04;
  UI_CharacterEditorMenu_o *pUVar12;
  UI_CharacterEditorSkinsPanel_o *__this_05;
  MethodInfo *method_00;
  MethodInfo *pMVar13;
  MethodInfo *in_stack_ffffffffffffff98;
  
  if (Il2CppMethodInitialized_07547bb2 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
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
    Il2CppMethodInitialized_07547bb2 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar12 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 != (UI_CharacterEditorMenu_o *)0x0) goto label_05cd5f44;
label_05cd5fbf:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    pUVar12 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 == (UI_CharacterEditorMenu_o *)0x0) goto label_05cd5fbf;
label_05cd5f44:
    pUVar3 = TypeInfo_UI_CharacterEditorMenu;
    bVar1 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar12->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu
       )) {
label_05cd6750:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar12,pUVar3);
    }
    (__this->fields)._menu = pUVar12;
    if (((pUVar12->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pUVar3)) goto label_05cd6750;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  (__this->fields)._isRebuildingPanel = true;
  pUVar2 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
  if (pUVar2->_hasInitializedPersistentStates == false) {
    pUVar2->_persistentGlobalSkinPreview = false;
    pUVar2->_persistentCustomSkinPreview = false;
    pUVar2->_hasInitializedPersistentStates = true;
    bVar4 = false;
  }
  else {
    bVar4 = pUVar2->_persistentGlobalSkinPreview;
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar5,bVar4,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._globalSkinPreview;
  (__this->fields)._globalSkinPreview = pSVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  bVar4 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar5,bVar4,(MethodInfo *)0x0);
  targetAddress_00 = &(__this->fields)._customSkinPreview;
  (__this->fields)._customSkinPreview = pSVar5;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,95.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar11 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  pMVar13 = (MethodInfo *)"";
  pSVar7 = UI_UIManager__GetLocale
                     ("CharacterPopup","General","Character","",
                      "",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar6 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                     (pSVar6," ",pSVar7,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar11,(UI_ElementStyle_o *)__this_00,pSVar6,0.0,pUVar8,pMVar13);
  __this_05 = (UI_CharacterEditorSkinsPanel_o *)(__this->fields).BottomBar;
  pSVar6 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  method_00 = (MethodInfo *)"";
  pSVar7 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","",
                      "",(MethodInfo *)0x0);
  pSVar6 = Gisketch_Aottg2UI_Styling_GisketchArabicText__Join
                     (pSVar6," ",pSVar7,(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_1,
             (MethodInfo *)0x0);
  pMVar13 = __this_00;
  UI_ElementFactory__CreateTextButton
            ((UnityEngine_Transform_o *)__this_05,(UI_ElementStyle_o *)__this_00,pSVar6,0.0,pUVar8,method_00);
  options = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames(__this_05,pMVar13);
  defaultValue = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex(__this_05,pMVar13);
  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar9,defaultValue,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._globalSetDropdownSetting = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._globalSetDropdownSetting);
  pUVar11 = (__this->fields).SinglePanel;
  pSVar9 = (__this->fields)._globalSetDropdownSetting;
  pSVar6 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","",
                      "",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_2,
             (MethodInfo *)0x0);
  pMVar13 = (MethodInfo *)0x0;
  pUVar10 = UI_ElementFactory__CreateDropdownSetting
                      (pUVar11,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar9,pSVar6,options,
                       "",160.0,40.0,180.0,(System_Nullable_float__o)0x0,pUVar8,
                       (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,
                       in_stack_ffffffffffffff98);
  if (((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
      (pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) {
label_05cd674b:
    ThrowNullReferenceException();
  }
  UnityEngine_Component__GetComponent_object_
            ((UnityEngine_Component_o *)pUVar11,
             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  pUVar11 = (__this->fields).SinglePanel;
  pSVar5 = (__this->fields)._globalSkinPreview;
  pSVar6 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","GlobalSkins","",
                      "",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_3,
             (MethodInfo *)0x0);
  pUVar10 = UI_ElementFactory__CreateToggleSetting
                      (pUVar11,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar6,
                       "",30.0,30.0,pUVar8,pMVar13);
  pUVar11 = (__this->fields).SinglePanel;
  pSVar5 = (__this->fields)._customSkinPreview;
  pSVar6 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","CharacterSkins","",
                      "",(MethodInfo *)0x0);
  pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (pUVar8,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_4,
             (MethodInfo *)0x0);
  __this_01 = UI_ElementFactory__CreateToggleSetting
                        (pUVar11,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar6,
                         "",30.0,30.0,pUVar8,pMVar13);
  if (((((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
        (pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
        pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
       ((pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0),
        pUVar11 == (UnityEngine_Transform_o *)0x0 ||
        ((__this_02 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar11,
                                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
         __this_01 == (UnityEngine_GameObject_o *)0x0 ||
         (pUVar11 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
         pUVar11 == (UnityEngine_Transform_o *)0x0)))))) ||
      (pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0),
      pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
     ((__this_03 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar11,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text),
      __this_02 == (UnityEngine_UI_Text_o *)0x0 ||
      (UnityEngine_UI_Text__set_horizontalOverflow(__this_02,1,(MethodInfo *)0x0),
      __this_03 == (UnityEngine_UI_Text_o *)0x0)))) goto label_05cd674b;
  UnityEngine_UI_Text__set_horizontalOverflow(__this_03,1,(MethodInfo *)0x0);
  UnityEngine_UI_Text__set_verticalOverflow(__this_02,1,(MethodInfo *)0x0);
  UnityEngine_UI_Text__set_verticalOverflow(__this_03,1,(MethodInfo *)0x0);
  pUVar11 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
  if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05cd674b;
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)pUVar11,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  pUVar11 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
  if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar11 = UnityEngine_Transform__Find(pUVar11,"Label",(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05cd674b;
  x_00 = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar11,
                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd674b;
    (*(x->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x,210.0,(x->klass->vtable)._36_set_preferredWidth.method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x_00 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_05cd674b;
    (*(x_00->klass->vtable)._36_set_preferredWidth.methodPtr)
              (x_00,210.0,(x_00->klass->vtable)._36_set_preferredWidth.method);
  }
  pSVar5 = *targetAddress;
  if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05cd674b;
  if ((pSVar5->fields)._value == false) {
    pSVar5 = *targetAddress_00;
    if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05cd674b;
    if ((pSVar5->fields)._value == false) goto label_05cd6734;
  }
  if (Il2CppMethodInitialized_07547bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
    Il2CppMethodInitialized_07547bb9 = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  (__this_04->fields).__1__state = 0;
  (__this_04->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_04->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
             (MethodInfo *)0x0);
label_05cd6734:
  (__this->fields)._isRebuildingPanel = false;
  return;
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetNames
// il2cpp: System_String_array* UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd6760

System_String_array *
UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *__this_00;
  System_String_o *item;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  uint uVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_string__o *__this_01;
  uint uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_07547bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_07547bb3 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar7 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40482D0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (pSVar7 == (System_String_array *)0x0) goto label_05cd6963;
    uVar6 = (uint)pSVar7->max_length;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      if ((int)uVar6 < 1) goto label_05cd6963;
      lVar9 = 0;
      do {
        if (uVar6 <= (uint)lVar9) goto label_05cd6968;
        if (pSVar7->m_Items[lVar9] == (System_String_o *)0x0) goto label_05cd6963;
        bVar5 = System_String__StartsWith(pSVar7->m_Items[lVar9],"Custom Set:",(MethodInfo *)0x0);
        if (!bVar5) {
          if ((uint)lVar9 < (uint)pSVar7->max_length) goto label_05cd6963;
          goto label_05cd6968;
        }
        uVar6 = (uint)pSVar7->max_length;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar6);
    }
    else {
      if ((int)uVar6 < 1) goto label_05cd693d;
      uVar8 = 0;
      do {
        if (uVar6 <= uVar8) {
label_05cd6968:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_05cd6963;
        bVar5 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"Custom Set:",(MethodInfo *)0x0)
        ;
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (!bVar5) {
          if ((uint)pSVar7->max_length <= uVar8) goto label_05cd6968;
          item = pSVar7->m_Items[(int)uVar8];
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_01->fields)._items;
          if (pSVar3 == (System_String_array *)0x0) goto label_05cd6963;
          uVar6 = (__this_01->fields)._size;
          if (uVar6 < (uint)pSVar3->max_length) {
            (__this_01->fields)._size = uVar6 + 1;
            pSVar3->m_Items[(int)uVar6] = item;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        uVar8 = uVar8 + 1;
        uVar6 = (uint)pSVar7->max_length;
      } while ((int)uVar8 < (int)uVar6);
    }
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
label_05cd693d:
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
  }
label_05cd6963:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetIndex
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd6970

int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *__this_00;
  Settings_IntSetting_o *pSVar3;
  System_Int32_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  uint uVar7;
  int32_t iVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_int__o *__this_01;
  uint item;
  long lVar10;
  
  if (Il2CppMethodInitialized_07547bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_IndexOf);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom Set:");
    Il2CppMethodInitialized_07547bb4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
     (pSVar3 = (__this_00->fields).LastGlobalPresetIndex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar8 = (pSVar3->fields)._value;
    pSVar9 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40482D0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
    System_Collections_Generic_List_int____ctor
              (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
    if (pSVar9 == (System_String_array *)0x0) goto label_05cd6b77;
    uVar7 = (uint)pSVar9->max_length;
    if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
      if ((int)uVar7 < 1) goto label_05cd6b77;
      lVar10 = 0;
      do {
        if (uVar7 <= (uint)lVar10) goto label_05cd6b7c;
        if (pSVar9->m_Items[lVar10] == (System_String_o *)0x0) goto label_05cd6b77;
        bVar6 = System_String__StartsWith(pSVar9->m_Items[lVar10],"Custom Set:",(MethodInfo *)0x0);
        if (!bVar6) goto label_05cd6b77;
        uVar7 = (uint)pSVar9->max_length;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar7);
    }
    else {
      if ((int)uVar7 < 1) goto label_05cd6b4c;
      item = 0;
      do {
        if (uVar7 <= item) {
label_05cd6b7c:
          ThrowIndexOutOfRangeException();
        }
        if (pSVar9->m_Items[(int)item] == (System_String_o *)0x0) goto label_05cd6b77;
        bVar6 = System_String__StartsWith(pSVar9->m_Items[(int)item],"Custom Set:",(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_int_Add;
        if (!bVar6) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_01->fields)._items;
          if (pSVar4 == (System_Int32_array *)0x0) goto label_05cd6b77;
          uVar7 = (__this_01->fields)._size;
          if (uVar7 < (uint)pSVar4->max_length) {
            (__this_01->fields)._size = uVar7 + 1;
            pSVar4->m_Items[(int)uVar7] = item;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this_01,item,(MethodInfo_3916AC0 *)pMVar5->klass->rgctx_data[0xe].method);
          }
        }
        item = item + 1;
        uVar7 = (uint)pSVar9->max_length;
      } while ((int)item < (int)uVar7);
    }
    if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
label_05cd6b4c:
      iVar8 = System_Collections_Generic_List_int___IndexOf
                        (__this_01,iVar8,
                         (MethodInfo_3917A80 *)MethodInfo_System_Collections_Generic_List_int_IndexOf);
      if (iVar8 < 1) {
        iVar8 = 0;
      }
      return iVar8;
    }
  }
label_05cd6b77:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$OnGlobalSkinSetSelected
// il2cpp: void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected (UI_CharacterEditorSkinsPanel_o* __this, int32_t filteredIndex, const MethodInfo* method);
// 0x5cd6cd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd6f14: jmp 0x5cd7160
// asm:   0x5cd715b: jmp 0x5cd7015

void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected
               (UI_CharacterEditorSkinsPanel_o *__this,int32_t filteredIndex,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_HumanCustomSkinSettings_o *pSVar5;
  System_Int32_array *pSVar6;
  Settings_IntSetting_o *pSVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  UI_ConfirmPopup_o *x;
  UI_GlobalSkinEditPopup_o *__this_00;
  bool bVar9;
  uint uVar10;
  System_String_array *pSVar11;
  System_Collections_Generic_List_int__o *__this_01;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this_02;
  UI_CharacterEditorMenu_o *x_00;
  uint item;
  long lVar12;
  MethodInfo *pMVar13;
  
  if (Il2CppMethodInitialized_07547bb5 == '\0') {
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
    Il2CppMethodInitialized_07547bb5 = '\x01';
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
     (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0))
  goto label_05cd7160;
  pSVar11 = Settings_SetSettingsContainer_object___GetSetNames
                      ((Settings_SetSettingsContainer_T__o *)pSVar5,
                       (MethodInfo_40482D0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSetNames);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_int);
  System_Collections_Generic_List_int____ctor
            (__this_01,(MethodInfo_39161C0 *)MethodInfo_System_Collections_Generic_List_int_ctor);
  if (pSVar11 == (System_String_array *)0x0) goto label_05cd7160;
  uVar10 = (uint)pSVar11->max_length;
  if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
    if ((int)uVar10 < 1) {
      if (filteredIndex < 0) {
        return;
      }
      goto label_05cd7160;
    }
    lVar12 = 0;
    do {
      if (uVar10 <= (uint)lVar12) goto label_05cd7165;
      if ((pSVar11->m_Items[lVar12] == (System_String_o *)0x0) ||
         (bVar9 = System_String__StartsWith(pSVar11->m_Items[lVar12],"Custom Set:",(MethodInfo *)0x0),
         !bVar9)) goto label_05cd7160;
      uVar10 = (uint)pSVar11->max_length;
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar10);
label_05cd6f02:
    if (filteredIndex < 0) {
      return;
    }
    if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) goto label_05cd7160;
  }
  else {
    if (0 < (int)uVar10) {
      item = 0;
      do {
        if (uVar10 <= item) goto label_05cd7165;
        if (pSVar11->m_Items[(int)item] == (System_String_o *)0x0) goto label_05cd7160;
        bVar9 = System_String__StartsWith(pSVar11->m_Items[(int)item],"Custom Set:",(MethodInfo *)0x0)
        ;
        pMVar13 = MethodInfo_System_Collections_Generic_List_int_Add;
        if (!bVar9) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_01->fields)._items;
          if (pSVar6 == (System_Int32_array *)0x0) goto label_05cd7160;
          uVar10 = (__this_01->fields)._size;
          if (uVar10 < (uint)pSVar6->max_length) {
            (__this_01->fields)._size = uVar10 + 1;
            pSVar6->m_Items[(int)uVar10] = item;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize
                      (__this_01,item,(MethodInfo_3916AC0 *)pMVar13->klass->rgctx_data[0xe].method);
          }
        }
        item = item + 1;
        uVar10 = (uint)pSVar11->max_length;
      } while ((int)item < (int)uVar10);
      goto label_05cd6f02;
    }
    if (filteredIndex < 0) {
      return;
    }
  }
  if ((__this_01->fields)._size <= filteredIndex) {
    return;
  }
  uVar10 = System_Collections_Generic_List_int___get_Item
                     (__this_01,filteredIndex,
                      (MethodInfo_39167D0 *)MethodInfo_System_Collections_Generic_List_int_get_Item);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
     (pSVar7 = (pSVar5->fields).SelectedSetIndex, pSVar7 == (Settings_IntSetting_o *)0x0)) goto label_05cd7160;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar7,uVar10,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar4 == (Settings_CustomSkinSettings_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Human, pSVar5 == (Settings_HumanCustomSkinSettings_o *)0x0)) ||
     (pSVar7 = (pSVar5->fields).LastGlobalPresetIndex, pSVar7 == (Settings_IntSetting_o *)0x0))
  goto label_05cd7160;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar7,uVar10,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  if ((uint)pSVar11->max_length <= uVar10) {
label_05cd7165:
    ThrowIndexOutOfRangeException();
  }
  pUVar8 = (__this->fields)._menu;
  if (pUVar8 == (UI_CharacterEditorMenu_o *)0x0) {
label_05cd7000:
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar2 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((pUVar8->klass->_2).typeHierarchyDepth < bVar2) goto label_05cd7000;
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
      x_00 = pUVar8;
    }
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if (x_00 == (UI_CharacterEditorMenu_o *)0x0) {
label_05cd7160:
      ThrowNullReferenceException();
    }
    x = (*(uint64_t *)((char *)x_00 + 0xd8));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar13 = (MethodInfo *)0x0;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      __this_00 = (UI_GlobalSkinEditPopup_o *)(*(uint64_t *)((char *)x_00 + 0xd8));
      if (__this_00 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_05cd7160;
      if ((__this_00->fields).IsActive != false) {
        if ((__this_00->fields)._hasBackup != false) {
          UI_GlobalSkinEditPopup__RestoreBackup(__this_00,pMVar13);
        }
        (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00,(__this_00->klass->vtable)._22_Hide.method)
        ;
      }
    }
  }
  if ((TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) &&
     (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview == false)) {
    return;
  }
  if (Il2CppMethodInitialized_07547bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
    Il2CppMethodInitialized_07547bb6 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields).__1__state = 0;
  (__this_02->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterGlobalSetChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd71a0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
    Il2CppMethodInitialized_07547bb6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$OnSkinPreviewToggle
// il2cpp: void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7230
// eh: try 0x5cd741f..0x5cd76bf -> pad 0x5cd76d9 (+27 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5cd7706..0x5cd77bd -> pad 0x5cd77c2 (+1 call sites) cleanup
// eh: try 0x5cd77c5..0x5cd77ca -> pad 0x5cd77d2 catch (...) [compiler noexcept guard]
// asm: 85 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd76bf: jmp 0x5cd76ef
// asm:   0x5cd76c1: jmp 0x5cd76ef
// asm:   0x5cd76c3: jmp 0x5cd76ef
// asm:   0x5cd76c5: jmp 0x5cd76ef
// asm:   0x5cd76c7: jmp 0x5cd76ef
// asm:   0x5cd76c9: jmp 0x5cd76ef
// asm:   0x5cd76cb: jmp 0x5cd76ef
// asm:   0x5cd76cd: jmp 0x5cd76ef
// asm:   0x5cd76cf: jmp 0x5cd76ef
// asm:   0x5cd76d1: jmp 0x5cd76ef
// asm:   0x5cd76d3: jmp 0x5cd76ef
// asm:   0x5cd76d5: jmp 0x5cd76ef
// asm:   0x5cd76d7: jmp 0x5cd76ef
// asm:   0x5cd76d9: jmp 0x5cd76ef
// asm:   0x5cd76db: jmp 0x5cd76ef
// asm:   0x5cd76dd: jmp 0x5cd76ef
// asm:   0x5cd76df: jmp 0x5cd76ef
// asm:   0x5cd76e1: jmp 0x5cd76ef
// asm:   0x5cd76e3: jmp 0x5cd76ef
// asm:   0x5cd76e5: jmp 0x5cd76ef
// asm:   0x5cd76e7: jmp 0x5cd76ef
// asm:   0x5cd76e9: jmp 0x5cd76ef
// asm:   0x5cd76eb: jmp 0x5cd76ef
// asm:   0x5cd76ed: jmp 0x5cd76ef
// asm:   0x5cd76ef: mov rbx, rax
// asm:   0x5cd76f2: cmp edx, 1
// asm:   0x5cd76f5: jne 0x5cd77ca
// asm:   0x5cd76fb: mov rdi, rbx
// asm:   0x5cd76fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cd7703: mov rbx, rax
// asm:   0x5cd7706: lea rdi, [rip + 0x15a09b3]  ; TypeInfo_System_Exception
// asm:   0x5cd770d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cd7712: mov rcx, qword ptr [rbx]
// asm:   0x5cd7715: mov rsi, qword ptr [rcx]
// asm:   0x5cd7718: mov rdi, rax
// asm:   0x5cd771b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5cd7720: test al, al
// asm:   0x5cd7722: je 0x5cd779c
// asm:   0x5cd7724: mov rbx, qword ptr [rbx]
// asm:   0x5cd7727: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cd772c: test rbx, rbx
// asm:   0x5cd772f: je 0x5cd77bd
// asm:   0x5cd7735: mov rax, qword ptr [rbx]
// asm:   0x5cd7738: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5cd773f: mov rdi, rbx
// asm:   0x5cd7742: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5cd7748: mov rbx, rax
// asm:   0x5cd774b: lea rdi, [rip + 0x16039a6]  ; "Error updating skin preview: "
// asm:   0x5cd7752: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cd7757: mov rdi, rax
// asm:   0x5cd775a: mov rsi, rbx
// asm:   0x5cd775d: xor edx, edx
// asm:   0x5cd775f: call 0x53f0320  ; System_String__Concat()
// asm:   0x5cd7764: mov rbx, rax
// asm:   0x5cd7767: lea rdi, [rip + 0x159feda]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5cd776e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cd7773: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5cd777a: jne 0x5cd7784
// asm:   0x5cd777c: mov rdi, rax
// asm:   0x5cd777f: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5cd7784: mov rdi, rbx
// asm:   0x5cd7787: xor esi, esi
// asm:   0x5cd7789: add rsp, 8
// asm:   0x5cd778d: pop rbx
// asm:   0x5cd778e: pop r12
// asm:   0x5cd7790: pop r13
// asm:   0x5cd7792: pop r14
// asm:   0x5cd7794: pop r15
// asm:   0x5cd7796: pop rbp
// asm:   0x5cd7797: jmp 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5cd779c: mov edi, 8
// asm:   0x5cd77a1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5cd77a6: mov rcx, qword ptr [rbx]
// asm:   0x5cd77a9: mov qword ptr [rax], rcx
// asm:   0x5cd77ac: lea rsi, [rip + 0x1155d4d]
// asm:   0x5cd77b3: mov rdi, rax
// asm:   0x5cd77b6: xor edx, edx
// asm:   0x5cd77b8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5cd77bd: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5cd77c2: mov rbx, rax
// asm:   0x5cd77c5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cd77ca: mov rdi, rbx
// asm:   0x5cd77cd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cd77d2: mov rdi, rax
// asm:   0x5cd77d5: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  Settings_BoolSetting_o *pSVar4;
  UI_CharacterEditorSkinsPanel_StaticFields *pUVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_DummyHuman_o *__this_00;
  Settings_CustomSkinSettings_o *pSVar7;
  Settings_HumanCustomSkinSettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  UI_CharacterEditorMenu_o *pUVar10;
  Settings_HumanCustomSettings_o *pSVar11;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_01;
  UI_ExternalLinkPopup_o *pUVar12;
  Characters_HumanSetup_o *__this_02;
  bool bVar13;
  Settings_HumanCustomSet_o *customSet;
  UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this_03;
  UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this_04;
  UI_CharacterEditorMenu_o *x;
  
  if (Il2CppMethodInitialized_07547bb7 == '\0') {
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
    Il2CppMethodInitialized_07547bb7 = '\x01';
  }
  if ((__this->fields)._isRebuildingPanel != false) {
    return;
  }
  pSVar4 = (__this->fields)._globalSkinPreview;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar13 = (pSVar4->fields)._value;
  pUVar5 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields;
  pUVar5->_persistentGlobalSkinPreview = bVar13;
  pSVar4 = (__this->fields)._customSkinPreview;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar5->_persistentCustomSkinPreview = (pSVar4->fields)._value;
  pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar6 == (GameManagers_BaseGameManager_o *)0x0) {
    return;
  }
  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
  if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
  if (__this_00 == (Characters_DummyHuman_o *)0x0) {
    return;
  }
  bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
  if ((__this_00->klass->_2).typeHierarchyDepth < bVar1) {
    return;
  }
  if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_DummyHuman)
  {
    return;
  }
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (pSVar7 == (Settings_CustomSkinSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (pSVar7->fields).Human;
  if (pSVar8 == (Settings_HumanCustomSkinSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar8->fields).GlobalSkinOverridesEnabled;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (pSVar8->fields).SetSpecificSkinsEnabled;
  if (pSVar9 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = ((Settings_TypedSetting_bool__Fields *)&pSVar4->fields)->_value;
  bVar3 = (pSVar9->fields)._value;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar4,bVar13,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (pSVar7 == (Settings_CustomSkinSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = (pSVar7->fields).Human;
  if (pSVar8 == (Settings_HumanCustomSkinSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (__this->fields)._customSkinPreview;
  if (pSVar4 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar9 = (pSVar8->fields).SetSpecificSkinsEnabled;
  if (pSVar9 == (Settings_BoolSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar9,(pSVar4->fields)._value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pUVar10 = (__this->fields)._menu;
  if (pUVar10 != (UI_CharacterEditorMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (bVar1 <= (pUVar10->klass->_2).typeHierarchyDepth) {
      x = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
        x = pUVar10;
      }
      goto label_05cd74b9;
    }
  }
  x = (UI_CharacterEditorMenu_o *)0x0;
label_05cd74b9:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if (pSVar11 == (Settings_HumanCustomSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_01 = (pSVar11->fields).CustomSets;
    if (__this_01 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) {
      ThrowNullReferenceException();
    }
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_01,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(customSet);
      }
    }
    if (x == (UI_CharacterEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar12 = (*(uint64_t *)((char *)x + 0xe0));
    if (pUVar12 == (UI_ExternalLinkPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = (__this_00->fields).Setup;
    if (__this_02 == (Characters_HumanSetup_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_HumanSetup__Load
              (__this_02,customSet,*(int32_t *)((long)&(pUVar12->fields).m_CancellationTokenSource + 4),false,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547bb8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
      Il2CppMethodInitialized_07547bb8 = '\x01';
    }
    __this_03 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    (__this_03->fields).__1__state = 0;
    (__this_03->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
    (__this_03->fields).dummyHuman = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).dummyHuman);
    (__this_03->fields).originalGlobalEnabled = bVar2;
    (__this_03->fields).originalSetEnabled = bVar3;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03,
               (MethodInfo *)0x0);
  }
  else {
    Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547bba == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
      Il2CppMethodInitialized_07547bba = '\x01';
    }
    __this_04 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
    System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
    (__this_04->fields).__1__state = 0;
    (__this_04->fields).originalGlobalEnabled = bVar2;
    (__this_04->fields).originalSetEnabled = bVar3;
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.CharacterEditorSkinsPanel$$LoadSkinAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset (UI_CharacterEditorSkinsPanel_o* __this, Characters_DummyHuman_o* dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x5cd77e0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset
          (UI_CharacterEditorSkinsPanel_o *__this,Characters_DummyHuman_o *dummyHuman,
          bool originalGlobalEnabled,bool originalSetEnabled,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
    Il2CppMethodInitialized_07547bb8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).dummyHuman = dummyHuman;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).dummyHuman);
  (__this_00->fields).originalGlobalEnabled = originalGlobalEnabled;
  (__this_00->fields).originalSetEnabled = originalSetEnabled;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterInitialSetup
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd6c60

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
    Il2CppMethodInitialized_07547bb9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$RestoreOriginalSkinSettings
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings (UI_CharacterEditorSkinsPanel_o* __this, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x5cd7870

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
          (UI_CharacterEditorSkinsPanel_o *__this,bool originalGlobalEnabled,bool originalSetEnabled,
          MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
    Il2CppMethodInitialized_07547bba = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).originalGlobalEnabled = originalGlobalEnabled;
  (__this_00->fields).originalSetEnabled = originalSetEnabled;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorSkinsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorSkinsPanel__OnButtonClick (UI_CharacterEditorSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cd7930
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd7a96: jmp 0x5cd7c2c
// asm:   0x5cd7bf9: jmp 0x5cd79d8
// asm:   0x5cd7c27: jmp 0x5cd7af8

void UI_CharacterEditorSkinsPanel__OnButtonClick
               (UI_CharacterEditorSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_CharacterEditorMenu_o *pUVar3;
  UI_ConfirmPopup_o *pUVar4;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  UI_TooltipPopup_o *pUVar6;
  bool bVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  UI_MessagePopup_o *pUVar9;
  
  if (Il2CppMethodInitialized_07547bbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"EditGlobalSkin");
    il2cpp_codegen_initialize_runtime_metadata(&"EditCustomSkins");
    Il2CppMethodInitialized_07547bbb = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"EditCustomSkins",(MethodInfo *)0x0);
  if (!bVar7) {
    bVar7 = System_String__op_Equality(name,"EditGlobalSkin",(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 == (UI_CharacterEditorMenu_o *)0x0) {
label_05cd7ae3:
      pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
      uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    else {
      bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
      if ((pUVar3->klass->_2).typeHierarchyDepth < bVar1) goto label_05cd7ae3;
      pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
        pUVar8 = pUVar3;
      }
      uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
      pUVar4 = (*(uint64_t *)((char *)pUVar8 + 0xd8));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar7) {
        return;
      }
      pUVar9 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
      if (pUVar9 == (UI_MessagePopup_o *)0x0) goto label_05cd7c2c;
      (*(pUVar9->klass->vtable)._22_Hide.methodPtr)(pUVar9,(pUVar9->klass->vtable)._22_Hide.method);
      pSVar5 = (*(uint64_t *)((char *)pUVar8 + 0xc0));
      if (pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_05cd7c2c;
      (*(pSVar5->klass->vtable)._22_Clear.methodPtr)(pSVar5,(pSVar5->klass->vtable)._22_Clear.method);
      pUVar6 = (*(uint64_t *)((char *)pUVar8 + 0xc8));
      if (pUVar6 == (UI_TooltipPopup_o *)0x0) goto label_05cd7c2c;
      (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
      pUVar9 = (UI_MessagePopup_o *)(*(uint64_t *)((char *)pUVar8 + 0xd8));
      if (pUVar9 == (UI_MessagePopup_o *)0x0) goto label_05cd7c2c;
      goto label_05cd7bb2;
    }
    goto label_05cd7c2c;
  }
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 == (UI_CharacterEditorMenu_o *)0x0) {
label_05cd79c3:
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((pUVar3->klass->_2).typeHierarchyDepth < bVar1) goto label_05cd79c3;
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
      pUVar8 = pUVar3;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
    pUVar9 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    pUVar4 = (*(uint64_t *)((char *)pUVar8 + 0xd8));
    if (pUVar4 != (UI_ConfirmPopup_o *)0x0) {
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      pSVar5 = (*(uint64_t *)((char *)pUVar8 + 0xc0));
      if (pSVar5 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (*(pSVar5->klass->vtable)._22_Clear.methodPtr)(pSVar5,(pSVar5->klass->vtable)._22_Clear.method);
        pUVar6 = (*(uint64_t *)((char *)pUVar8 + 0xc8));
        if (pUVar6 != (UI_TooltipPopup_o *)0x0) {
          (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
          pUVar9 = (*(uint64_t *)((char *)pUVar8 + 0xd0));
          if (pUVar9 != (UI_MessagePopup_o *)0x0) {
label_05cd7bb2:
            (*(pUVar9->klass->vtable)._21_Show.methodPtr)(pUVar9,(pUVar9->klass->vtable)._21_Show.method);
            return;
          }
        }
      }
    }
  }
label_05cd7c2c:
  ThrowNullReferenceException();
}


// UI.CharacterEditorSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel___ctor (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7c40

void UI_CharacterEditorSkinsPanel___ctor(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_0
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_0 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7c50

void UI_CharacterEditorSkinsPanel___Setup_b__23_0(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditCustomSkins");
    Il2CppMethodInitialized_07547bbc = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditCustomSkins",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_1
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_1 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7c90

void UI_CharacterEditorSkinsPanel___Setup_b__23_1(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"EditGlobalSkin");
    Il2CppMethodInitialized_07547bbd = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditGlobalSkin",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_2
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_2 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7cd0

void UI_CharacterEditorSkinsPanel___Setup_b__23_2(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547bbe = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = (__this->fields)._globalSetDropdownSetting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected(__this,(pSVar1->fields)._value,in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_3
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_3 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7d10

void UI_CharacterEditorSkinsPanel___Setup_b__23_3(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,method);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_4
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_4 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x5cd7d20

void UI_CharacterEditorSkinsPanel___Setup_b__23_4(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,method);
  return;
}


