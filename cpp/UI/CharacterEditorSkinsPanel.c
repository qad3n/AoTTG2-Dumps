// Type: UI.CharacterEditorSkinsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorSkinsPanel.cs
// Prior source: NEW in this update
// --------------------------------

// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4055780

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27___ctor
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4056460

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4056470

bool_conflict
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27__MoveNext
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  Characters_DummyHuman_o *pCVar2;
  long lVar3;
  Settings_TypedSetting_bool__o *pSVar4;
  UI_CharacterEditorSkinsPanel_o *pUVar5;
  long *plVar6;
  UI_CharacterEditorMenu_o *pUVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  Characters_DummyHuman_o *pCVar10;
  Characters_DummyHuman_o **ppCVar11;
  
  if (DAT_05704442 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704442 = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
  case 1:
    pUVar5 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    plVar6 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar6 == (long *)0x0) {
LAB_04056745:
      (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)0x0;
LAB_0405677c:
      ppCVar11 = &(__this->fields)._dummyHuman_5__2;
      il2cpp_runtime_glue(ppCVar11);
      pCVar2 = *ppCVar11;
    }
    else {
      if ((*(byte *)(*plVar6 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar6 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
          TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      pCVar2 = (Characters_DummyHuman_o *)plVar6[7];
      if (pCVar2 == (Characters_DummyHuman_o *)0x0) goto LAB_04056745;
      bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
      if ((pCVar2->klass->_2).naturalAligment < bVar1) {
        pCVar10 = (Characters_DummyHuman_o *)0x0;
      }
      else {
        pCVar10 = (Characters_DummyHuman_o *)0x0;
        if ((pCVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
          pCVar10 = pCVar2;
        }
      }
      ppCVar11 = &(__this->fields)._dummyHuman_5__2;
      (__this->fields)._dummyHuman_5__2 = pCVar10;
      if ((pCVar2->klass->_2).naturalAligment < bVar1) goto LAB_0405677c;
      il2cpp_runtime_glue(ppCVar11);
      pCVar2 = *ppCVar11;
    }
    if (pCVar2 == (Characters_DummyHuman_o *)0x0) {
switchD_04056506_default:
      return 0;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (*(long *)(lVar3 + 0x60) != 0)) {
      *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__3 =
           *(undefined1 *)(*(long *)(lVar3 + 0x60) + 0x11);
      if (((*(long *)(lVar3 + 0x58) != 0) &&
          (*(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__3 + 1) =
                *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11),
          pUVar5 != (UI_CharacterEditorSkinsPanel_o *)0x0)) &&
         (pUVar7 = (pUVar5->fields)._menu, pUVar7 != (UI_CharacterEditorMenu_o *)0x0)) {
        (*(pUVar7->klass->vtable)._9_ResetCharacter.methodPtr)
                  (pUVar7,0,(pUVar7->klass->vtable)._9_ResetCharacter.method);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar8;
        uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
        (__this->fields).__1__state = 2;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x60),
       pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar4,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
         (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58),
         pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar4,(uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value);
        pCVar2 = (__this->fields)._dummyHuman_5__2;
        if (pCVar2 != (Characters_DummyHuman_o *)0x0) {
          Characters_DummyHuman__LoadSkin(pCVar2,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar8;
          uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
          (__this->fields).__1__state = 3;
          return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x60),
       pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar4,(uint)(byte)(__this->fields)._originalGlobalEnabled_5__3,MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
         (pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58),
         pSVar4 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar4,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__3 + 1),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
    break;
  default:
    goto switchD_04056506_default;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4056890

Il2CppObject *
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x40568a0

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
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


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x40568e0

Il2CppObject *
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterGlobalSetChange>d__27__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4056020

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30___ctor
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x40568f0

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4056900

/* WARNING: Type propagation algorithm not settling */

bool_conflict
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30__MoveNext
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *pUVar3;
  long *plVar4;
  Characters_DummyHuman_o *__this_00;
  long lVar5;
  Settings_TypedSetting_bool__o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  
  if (DAT_05704443 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704443 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
       (pSVar6 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x60),
       pSVar6 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar6,(uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
         (pSVar6 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x58),
         pSVar6 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar6,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
LAB_04056c15:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar2 == 1) {
    pUVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar4 != (long *)0x0) {
      if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
          TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = (Characters_DummyHuman_o *)plVar4[7];
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
          if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
            return 0;
          }
          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
             (pSVar6 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x60),
             pSVar6 != (Settings_TypedSetting_bool__o *)0x0)) {
            *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
                 *(undefined1 *)((long)&(pSVar6->fields).DefaultValue + 1);
            if (((*(long *)(lVar5 + 0x58) != 0) &&
                (*(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
                      *(undefined1 *)(*(long *)(lVar5 + 0x58) + 0x11),
                pUVar3 != (UI_CharacterEditorSkinsPanel_o *)0x0)) &&
               (pSVar7 = (pUVar3->fields)._globalSkinPreview,
               pSVar7 != (Settings_BoolSetting_o *)0x0)) {
              Settings_TypedSetting<bool>__set_Value
                        (pSVar6,(uint)*(byte *)((long)&(pSVar7->fields).DefaultValue + 1),
                         MethodInfo_Void_set_Value);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
                 ((pSVar7 = (pUVar3->fields)._customSkinPreview,
                  pSVar7 != (Settings_BoolSetting_o *)0x0 &&
                  ((pSVar6 = *(Settings_TypedSetting_bool__o **)(lVar5 + 0x58),
                   pSVar6 != (Settings_TypedSetting_bool__o *)0x0 &&
                   (Settings_TypedSetting<bool>__set_Value
                              (pSVar6,(uint)*(byte *)((long)&(pSVar7->fields).DefaultValue + 1),
                               MethodInfo_Void_set_Value), __this_00 != (Characters_DummyHuman_o *)0x0)))))) {
                Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar8;
                uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
                (__this->fields).__1__state = 2;
                return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
              }
            }
          }
          goto LAB_04056c15;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar8 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar8;
    uVar9 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar8);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
  }
  return 0;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4056c20

Il2CppObject *
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4056c30

void UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
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


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4056c70

Il2CppObject *
UI_CharacterEditorSkinsPanel_<ApplySkinPreviewAfterInitialSetup>d__30__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4056000

void UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29___ctor
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4056c80

void UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4056c90

bool_conflict
UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29__MoveNext
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *__this_00;
  Characters_DummyHuman_o *pCVar3;
  Characters_HumanSetup_o *x;
  long lVar4;
  Settings_TypedSetting_bool__o *pSVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  
  if (DAT_05704444 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704444 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
       (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x60),
       pSVar5 == (Settings_TypedSetting_bool__o *)0x0)) {
LAB_04056eda:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<bool>__set_Value
              (pSVar5,(uint)(byte)(__this->fields).originalGlobalEnabled,MethodInfo_Void_set_Value);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
       (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58),
       pSVar5 == (Settings_TypedSetting_bool__o *)0x0)) goto LAB_04056eda;
    Settings_TypedSetting<bool>__set_Value
              (pSVar5,(uint)*(byte *)((long)&(__this->fields).originalGlobalEnabled + 1),
               MethodInfo_Void_set_Value);
LAB_04056e7c:
    bVar6 = 0;
  }
  else {
    if (iVar2 == 1) {
      __this_00 = (__this->fields).__4__this;
      (__this->fields).__1__state = -1;
      pCVar3 = (__this->fields).dummyHuman;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto LAB_04056eda;
      x = (pCVar3->fields).Setup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (__this_00 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
          bVar6 = (__this->fields).originalGlobalEnabled;
          uVar1 = *(undefined1 *)((long)&(__this->fields).originalGlobalEnabled + 1);
          if (DAT_0570443d == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_RestoreOriginalSkinSettings_d__31);
            DAT_0570443d = '\x01';
          }
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RestoreOriginalSkinSettings_d__31);
          System_Object___ctor(pIVar7,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar7[1].klass = 0;
          if (pIVar7 != (Il2CppObject *)0x0) {
            *(char *)&pIVar7[2].klass = (char)bVar6;
            *(undefined1 *)((long)&pIVar7[2].klass + 1) = uVar1;
            UnityEngine_MonoBehaviour__StartCoroutine
                      ((UnityEngine_MonoBehaviour_o *)__this_00,
                       (System_Collections_IEnumerator_o *)pIVar7,(MethodInfo *)0x0);
            return 0;
          }
        }
        goto LAB_04056eda;
      }
      pCVar3 = (__this->fields).dummyHuman;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto LAB_04056eda;
      Characters_DummyHuman__LoadSkin(pCVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar7;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar7);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar2 != 0) goto LAB_04056e7c;
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar7 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar7;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar7);
      (__this->fields).__1__state = 1;
    }
    bVar6 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar6;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4056ee0

Il2CppObject *
UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4056ef0

void UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

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


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4056f30

Il2CppObject *
UI_CharacterEditorSkinsPanel_<LoadSkinAfterReset>d__29__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4056040

void UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31___ctor
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4056f40

void UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4056f50

bool_conflict
UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31__MoveNext
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
          MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_TypedSetting_bool__o *pSVar3;
  undefined8 uVar4;
  
  if (DAT_05704445 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704445 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (pSVar3 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x60),
       pSVar3 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar3,(uint)(byte)(__this->fields).originalGlobalEnabled,MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
         (pSVar3 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58),
         pSVar3 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar3,(uint)*(byte *)((long)&(__this->fields).originalGlobalEnabled + 1),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4057040

Il2CppObject *
UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4057050

void UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
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


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4057090

Il2CppObject *
UI_CharacterEditorSkinsPanel_<RestoreOriginalSkinSettings>d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorSkinsPanel__get_Title (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4054230

System_String_o *
UI_CharacterEditorSkinsPanel__get_Title(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704431 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"SkinsButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704431 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Top","SkinsButton","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorSkinsPanel$$get_Width
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Width (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40542d0

float UI_CharacterEditorSkinsPanel__get_Width
                (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Height (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40542e0

float UI_CharacterEditorSkinsPanel__get_Height
                (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorSkinsPanel__get_VerticalSpacing (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40542f0

float UI_CharacterEditorSkinsPanel__get_VerticalSpacing
                (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4054300

int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4054310

int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x4054320

bool_conflict UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (DAT_05704432 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704432 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8));
}


// UI.CharacterEditorSkinsPanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x4054360

bool_conflict UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (DAT_05704433 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704433 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1));
}


// UI.CharacterEditorSkinsPanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x404f730

void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  if (DAT_05704434 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704434 = '\x01';
  }
  **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
  return;
}


// UI.CharacterEditorSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorSkinsPanel__Setup (UI_CharacterEditorSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40543a0

void UI_CharacterEditorSkinsPanel__Setup
               (UI_CharacterEditorSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_BoolSetting_o **ppSVar1;
  Settings_BoolSetting_o **ppSVar2;
  byte *pbVar3;
  Il2CppClass *pIVar4;
  int32_t defaultValue;
  bool_conflict bVar5;
  Settings_BoolSetting_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *__this_00;
  System_String_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  System_String_array *options;
  Settings_IntSetting_o *pSVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_UI_Text_o *__this_03;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  Il2CppObject *__this_04;
  byte bVar13;
  UI_CharacterEditorMenu_o *pUVar14;
  MethodInfo *method_00;
  UI_CharacterEditorSkinsPanel_o *__this_05;
  
  if (DAT_05704435 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__23_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__23_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__23_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__23_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__23_4);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"CharacterSkins");
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Character");
    il2cpp_init_method_metadata(&"GlobalSkins");
    il2cpp_init_method_metadata(&"Skins.Human");
    il2cpp_init_method_metadata(&"Edit");
    il2cpp_init_method_metadata(&"CharacterPopup");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Global");
    DAT_05704435 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar14 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar14 != (UI_CharacterEditorMenu_o *)0x0) goto LAB_04054548;
LAB_040545c3:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    pUVar14 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar14 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_040545c3;
LAB_04054548:
    pIVar4 = TypeInfo_CharacterEditorMenu;
    bVar13 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
    if (((pUVar14->klass->_2).naturalAligment < bVar13) ||
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar13 - 1] != TypeInfo_CharacterEditorMenu)) {
LAB_04054d65:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar14,pIVar4);
    }
    (__this->fields)._menu = pUVar14;
    if (((pUVar14->klass->_2).naturalAligment < bVar13) ||
       ((pUVar14->klass->_2).typeHierarchy[(ulong)bVar13 - 1] != pIVar4)) goto LAB_04054d65;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  *(undefined1 *)&(__this->fields)._isRebuildingPanel = 1;
  pbVar3 = *(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
  if (pbVar3[2] == 0) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 1;
    bVar13 = 0;
  }
  else {
    bVar13 = *pbVar3;
  }
  pSVar6 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar6,(uint)bVar13,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._globalSkinPreview;
  (__this->fields)._globalSkinPreview = pSVar6;
  il2cpp_runtime_glue(ppSVar1,pSVar6);
  bVar13 = *(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
  pSVar6 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar6,(uint)bVar13,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields)._customSkinPreview;
  (__this->fields)._customSkinPreview = pSVar6;
  il2cpp_runtime_glue(ppSVar2,pSVar6);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,95.0,20.0,pSVar7,(MethodInfo *)0x0);
  pUVar12 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  pSVar8 = UI_UIManager__GetLocale
                     ("CharacterPopup","General","Character","","",
                      (MethodInfo *)0x0);
  pSVar7 = System_String__Concat(pSVar7," ",pSVar8,(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar12,(UI_ElementStyle_o *)__this_00,pSVar7,0.0,pUVar9,(MethodInfo *)0x0);
  __this_05 = (UI_CharacterEditorSkinsPanel_o *)(__this->fields).BottomBar;
  pSVar7 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
  pSVar8 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","","",
                      (MethodInfo *)0x0);
  pSVar7 = System_String__Concat(pSVar7," ",pSVar8,(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_00 = __this_00;
  UI_ElementFactory__CreateTextButton
            ((UnityEngine_Transform_o *)__this_05,(UI_ElementStyle_o *)__this_00,pSVar7,0.0,pUVar9,
             (MethodInfo *)0x0);
  options = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames(__this_05,method_00);
  defaultValue = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex(__this_05,method_00);
  pSVar10 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar10,defaultValue,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._globalSetDropdownSetting = pSVar10;
  il2cpp_runtime_glue(&(__this->fields)._globalSetDropdownSetting,pSVar10);
  pUVar12 = (__this->fields).SinglePanel;
  pSVar10 = (__this->fields)._globalSetDropdownSetting;
  pSVar7 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Global","","",
                      (MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pUVar11 = UI_ElementFactory__CreateDropdownSetting
                      (pUVar12,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar10,
                       pSVar7,options,"",160.0,40.0,180.0,(System_Nullable_float__o)0x0,
                       pUVar9,(MethodInfo *)0x0);
  if (((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
      pUVar12 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Label",(MethodInfo *)0x0),
     pUVar12 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text);
    pUVar12 = (__this->fields).SinglePanel;
    pSVar6 = (__this->fields)._globalSkinPreview;
    pSVar7 = UI_UIManager__GetLocale
                       ("SettingsPopup","Skins.Human","GlobalSkins","","",
                        (MethodInfo *)0x0);
    pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pUVar11 = UI_ElementFactory__CreateToggleSetting
                        (pUVar12,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar6,
                         pSVar7,"",30.0,30.0,pUVar9,(MethodInfo *)0x0);
    pUVar12 = (__this->fields).SinglePanel;
    pSVar6 = (__this->fields)._customSkinPreview;
    pSVar7 = UI_UIManager__GetLocale
                       ("SettingsPopup","Skins.Human","CharacterSkins","","",
                        (MethodInfo *)0x0);
    pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    __this_01 = UI_ElementFactory__CreateToggleSetting
                          (pUVar12,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar6,
                           pSVar7,"",30.0,30.0,pUVar9,(MethodInfo *)0x0);
    if (((((pUVar11 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
          pUVar12 == (UnityEngine_Transform_o *)0x0)) ||
         ((pUVar12 = UnityEngine_Transform__Find(pUVar12,"Label",(MethodInfo *)0x0),
          pUVar12 == (UnityEngine_Transform_o *)0x0 ||
          ((__this_02 = (UnityEngine_UI_Text_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text),
           __this_01 == (UnityEngine_GameObject_o *)0x0 ||
           (pUVar12 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
           pUVar12 == (UnityEngine_Transform_o *)0x0)))))) ||
        (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Label",(MethodInfo *)0x0),
        pUVar12 == (UnityEngine_Transform_o *)0x0)) ||
       ((__this_03 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar12,MethodInfo_Text_GetComponent_Text),
        __this_02 == (UnityEngine_UI_Text_o *)0x0 ||
        (UnityEngine_UI_Text__set_horizontalOverflow(__this_02,1,(MethodInfo *)0x0),
        __this_03 == (UnityEngine_UI_Text_o *)0x0)))) goto LAB_04054d60;
    UnityEngine_UI_Text__set_horizontalOverflow(__this_03,1,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_verticalOverflow(__this_02,1,(MethodInfo *)0x0);
    UnityEngine_UI_Text__set_verticalOverflow(__this_03,1,(MethodInfo *)0x0);
    pUVar12 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0);
    if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Label",(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_04054d60;
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement)
    ;
    pUVar12 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    if ((pUVar12 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Label",(MethodInfo *)0x0),
       pUVar12 == (UnityEngine_Transform_o *)0x0)) goto LAB_04054d60;
    x_00 = (UnityEngine_Object_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar12,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_04054d60;
      (*x->klass[2]._1.events)(0x43520000,x);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (x_00 == (UnityEngine_Object_o *)0x0) goto LAB_04054d60;
      (*x_00->klass[2]._1.events)(0x43520000,x_00);
    }
    pSVar6 = *ppSVar1;
    if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto LAB_04054d60;
    if (*(char *)((long)&(pSVar6->fields).DefaultValue + 1) == '\0') {
      pSVar6 = *ppSVar2;
      if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto LAB_04054d60;
      if (*(char *)((long)&(pSVar6->fields).DefaultValue + 1) == '\0') goto LAB_04054d49;
    }
    if (DAT_0570443c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
      DAT_0570443c = '\x01';
    }
    __this_04 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    System_Object___ctor(__this_04,(MethodInfo *)0x0);
    *(undefined4 *)&__this_04[1].klass = 0;
    if (__this_04 != (Il2CppObject *)0x0) {
      __this_04[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_04 + 2,__this);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04
                 ,(MethodInfo *)0x0);
LAB_04054d49:
      *(undefined1 *)&(__this->fields)._isRebuildingPanel = 0;
      return;
    }
  }
LAB_04054d60:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetNames
// il2cpp: System_String_array* UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4054d70

System_String_array *
UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_String_o *item;
  System_Object_array *pSVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_object__o *__this_01;
  uint uVar6;
  long lVar7;
  
  if (DAT_05704436 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Custom Set:");
    DAT_05704436 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar7 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar5 = Settings_SetSettingsContainer<object>__GetSetNames(__this_00,MethodInfo_String___GetSetNames);
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_01,MethodInfo_List_1_System_String);
    if (pSVar5 != (System_String_array *)0x0) {
      uVar4 = (uint)pSVar5->max_length;
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (int)uVar4) {
          lVar7 = 0;
          do {
            if (uVar4 <= (uint)lVar7) goto LAB_04054f89;
            if (pSVar5->m_Items[lVar7] == (System_String_o *)0x0) goto LAB_04054f84;
            bVar3 = System_String__StartsWith(pSVar5->m_Items[lVar7],"Custom Set:",(MethodInfo *)0x0)
            ;
            if ((char)bVar3 == '\0') {
              if ((uint)pSVar5->max_length <= (uint)lVar7) goto LAB_04054f89;
              goto LAB_04054f84;
            }
            uVar4 = (uint)pSVar5->max_length;
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < (int)uVar4);
        }
      }
      else if (0 < (int)uVar4) {
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            if (pSVar5->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_04054f84;
            bVar3 = System_String__StartsWith
                              (pSVar5->m_Items[(int)uVar6],"Custom Set:",(MethodInfo *)0x0);
            lVar7 = MethodInfo_Void_Add;
            if ((char)bVar3 == '\0') {
              if ((uint)pSVar5->max_length <= uVar6) break;
              item = pSVar5->m_Items[(int)uVar6];
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar2 = (__this_01->fields)._items;
              if (pSVar2 == (System_Object_array *)0x0) goto LAB_04054f84;
              uVar4 = (__this_01->fields)._size;
              if (uVar4 < (uint)pSVar2->max_length) {
                (__this_01->fields)._size = uVar4 + 1;
                pSVar2->m_Items[(int)uVar4] = (Il2CppObject *)item;
                il2cpp_runtime_glue(pSVar2->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_01,(Il2CppObject *)item,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar6 = uVar6 + 1;
            uVar4 = (uint)pSVar5->max_length;
            if ((int)uVar4 <= (int)uVar6) goto LAB_04054f59;
          } while (uVar6 < uVar4);
        }
LAB_04054f89:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_04054f59:
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar5 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_01,MethodInfo_String___ToArray);
        return pSVar5;
      }
    }
  }
LAB_04054f84:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetIndex
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4054f90

int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar2;
  System_Int32_array *pSVar3;
  bool_conflict bVar4;
  uint uVar5;
  int32_t iVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_int__o *__this_01;
  uint item;
  long lVar8;
  
  if (DAT_05704437 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_IndexOf);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Custom Set:");
    DAT_05704437 = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar8 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar2 = __this_00[2].fields.TypedSettings,
     pSVar2 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
    iVar6 = *(int32_t *)((long)&(pSVar2->fields)._buckets + 4);
    pSVar7 = Settings_SetSettingsContainer<object>__GetSetNames(__this_00,MethodInfo_String___GetSetNames);
    __this_01 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
    System_Collections_Generic_List<int>___ctor(__this_01,MethodInfo_List_1_System_Int32);
    if (pSVar7 != (System_String_array *)0x0) {
      uVar5 = (uint)pSVar7->max_length;
      if (__this_01 == (System_Collections_Generic_List_int__o *)0x0) {
        if (0 < (int)uVar5) {
          lVar8 = 0;
          do {
            if (uVar5 <= (uint)lVar8) goto LAB_040551bd;
            if ((pSVar7->m_Items[lVar8] == (System_String_o *)0x0) ||
               (bVar4 = System_String__StartsWith
                                  (pSVar7->m_Items[lVar8],"Custom Set:",(MethodInfo *)0x0),
               (char)bVar4 == '\0')) goto LAB_040551b8;
            uVar5 = (uint)pSVar7->max_length;
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < (int)uVar5);
        }
      }
      else if (0 < (int)uVar5) {
        item = 0;
        if (uVar5 != 0) {
          do {
            if (pSVar7->m_Items[(int)item] == (System_String_o *)0x0) goto LAB_040551b8;
            bVar4 = System_String__StartsWith
                              (pSVar7->m_Items[(int)item],"Custom Set:",(MethodInfo *)0x0);
            lVar8 = MethodInfo_Void_Add;
            if ((char)bVar4 == '\0') {
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this_01->fields)._items;
              if (pSVar3 == (System_Int32_array *)0x0) goto LAB_040551b8;
              uVar5 = (__this_01->fields)._size;
              if ((uint)pSVar3->max_length <= uVar5) {
                System_Collections_Generic_List<int>__AddWithResize
                          (__this_01,item,
                           *(MethodInfo_3579120 **)
                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                goto LAB_040550d9;
              }
              (__this_01->fields)._size = uVar5 + 1;
              pSVar3->m_Items[(int)uVar5] = item;
              uVar5 = (uint)pSVar7->max_length;
              if ((int)uVar5 <= (int)(item + 1)) goto LAB_04055188;
            }
            else {
LAB_040550d9:
              uVar5 = (uint)pSVar7->max_length;
              if ((int)uVar5 <= (int)(item + 1)) goto LAB_04055188;
            }
            item = item + 1;
          } while (item < uVar5);
        }
LAB_040551bd:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_04055188:
      if (__this_01 != (System_Collections_Generic_List_int__o *)0x0) {
        iVar6 = System_Collections_Generic_List<int>__IndexOf(__this_01,iVar6,MethodInfo_Int32_IndexOf);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        return iVar6;
      }
    }
  }
LAB_040551b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$OnGlobalSkinSetSelected
// il2cpp: void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected (UI_CharacterEditorSkinsPanel_o* __this, int32_t filteredIndex, const MethodInfo* method);
// 0x4055240

void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected
               (UI_CharacterEditorSkinsPanel_o *__this,int32_t filteredIndex,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Int32_array *pSVar4;
  Settings_TypedSetting_int__o *pSVar5;
  UI_CharacterEditorMenu_o *pUVar6;
  UI_ConfirmPopup_o *x;
  UI_GlobalSkinEditPopup_o *__this_01;
  bool_conflict bVar7;
  uint uVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_int__o *__this_02;
  Il2CppObject *__this_03;
  UI_CharacterEditorMenu_o *x_00;
  uint item;
  long lVar10;
  MethodInfo *method_00;
  
  if (DAT_05704438 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_int);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Custom Set:");
    DAT_05704438 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar10 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_040556cb;
  pSVar9 = Settings_SetSettingsContainer<object>__GetSetNames(__this_00,MethodInfo_String___GetSetNames);
  __this_02 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_glue(TypeInfo_List_int);
  System_Collections_Generic_List<int>___ctor(__this_02,MethodInfo_List_1_System_Int32);
  if (pSVar9 == (System_String_array *)0x0) goto LAB_040556cb;
  uVar8 = (uint)pSVar9->max_length;
  if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) {
    if (0 < (int)uVar8) {
      lVar10 = 0;
      do {
        if (uVar8 <= (uint)lVar10) goto LAB_040556d0;
        if ((pSVar9->m_Items[lVar10] == (System_String_o *)0x0) ||
           (bVar7 = System_String__StartsWith
                              (pSVar9->m_Items[lVar10],"Custom Set:",(MethodInfo *)0x0),
           (char)bVar7 == '\0')) goto LAB_040556cb;
        uVar8 = (uint)pSVar9->max_length;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar8);
    }
  }
  else if (0 < (int)uVar8) {
    item = 0;
    if (uVar8 != 0) {
      do {
        if (pSVar9->m_Items[(int)item] == (System_String_o *)0x0) goto LAB_040556cb;
        bVar7 = System_String__StartsWith(pSVar9->m_Items[(int)item],"Custom Set:",(MethodInfo *)0x0)
        ;
        lVar10 = MethodInfo_Void_Add;
        if ((char)bVar7 == '\0') {
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_02->fields)._items;
          if (pSVar4 == (System_Int32_array *)0x0) goto LAB_040556cb;
          uVar8 = (__this_02->fields)._size;
          if ((uint)pSVar4->max_length <= uVar8) {
            System_Collections_Generic_List<int>__AddWithResize
                      (__this_02,item,
                       *(MethodInfo_3579120 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            goto LAB_040553b9;
          }
          (__this_02->fields)._size = uVar8 + 1;
          pSVar4->m_Items[(int)uVar8] = item;
          uVar8 = (uint)pSVar9->max_length;
          if ((int)uVar8 <= (int)(item + 1)) goto LAB_04055473;
        }
        else {
LAB_040553b9:
          uVar8 = (uint)pSVar9->max_length;
          if ((int)uVar8 <= (int)(item + 1)) goto LAB_04055473;
        }
        item = item + 1;
      } while (item < uVar8);
    }
    goto LAB_040556d0;
  }
LAB_04055473:
  if (filteredIndex < 0) {
    return;
  }
  if (__this_02 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_040556cb;
  if ((__this_02->fields)._size <= filteredIndex) {
    return;
  }
  uVar8 = System_Collections_Generic_List<int>__get_Item(__this_02,filteredIndex,MethodInfo_Int32_get_Item);
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) ||
     (pSVar5 = *(Settings_TypedSetting_int__o **)(lVar10 + 0x20),
     pSVar5 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_040556cb;
  Settings_TypedSetting<int>__set_Value(pSVar5,uVar8,MethodInfo_Void_set_Value);
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) ||
     (pSVar5 = *(Settings_TypedSetting_int__o **)(lVar10 + 0x78),
     pSVar5 == (Settings_TypedSetting_int__o *)0x0)) goto LAB_040556cb;
  Settings_TypedSetting<int>__set_Value(pSVar5,uVar8,MethodInfo_Void_set_Value);
  if ((uint)pSVar9->max_length <= uVar8) {
LAB_040556d0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar6 = (__this->fields)._menu;
  if (pUVar6 == (UI_CharacterEditorMenu_o *)0x0) {
LAB_04055564:
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar6->klass->_2).naturalAligment < bVar2) goto LAB_04055564;
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      x_00 = pUVar6;
    }
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (x_00 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_040556cb;
    x = x_00[1].fields.ConfirmPopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_01 = (UI_GlobalSkinEditPopup_o *)x_00[1].fields.ConfirmPopup;
      if (__this_01 == (UI_GlobalSkinEditPopup_o *)0x0) goto LAB_040556cb;
      if ((char)(__this_01->fields).IsActive != '\0') {
        if ((char)(__this_01->fields)._hasBackup != '\0') {
          UI_GlobalSkinEditPopup__RestoreBackup(__this_01,method_00);
        }
        (*(__this_01->klass->vtable)._22_Hide.methodPtr)(__this_01);
      }
    }
  }
  if ((**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') && ((*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1] == '\0'))
  {
    return;
  }
  if (DAT_05704439 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
    DAT_05704439 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_03 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03,
               (MethodInfo *)0x0);
    return;
  }
LAB_040556cb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterGlobalSetChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4055710

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704439 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
    DAT_05704439 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$OnSkinPreviewToggle
// il2cpp: void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40557a0

void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  Settings_BoolSetting_o *pSVar6;
  byte *pbVar7;
  long *plVar8;
  Il2CppClass *__this_00;
  Characters_DummyHuman_c *pCVar9;
  long lVar10;
  Settings_TypedSetting_bool__o *pSVar11;
  UI_CharacterEditorMenu_o *pUVar12;
  Settings_SetSettingsContainer_T__o *__this_01;
  UI_ExternalLinkPopup_o *pUVar13;
  Characters_HumanSetup_o *__this_02;
  bool_conflict bVar14;
  Settings_HumanCustomSet_o *customSet;
  Il2CppObject *pIVar15;
  UI_CharacterEditorMenu_o *x;
  
  if (DAT_0570443a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_0570443a = '\x01';
  }
  if ((char)(__this->fields)._isRebuildingPanel != '\0') {
    return;
  }
  pSVar6 = (__this->fields)._globalSkinPreview;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
  pbVar7 = *(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
  *pbVar7 = bVar1;
  pSVar6 = (__this->fields)._customSkinPreview;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pbVar7[1] = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
  plVar8 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar8 == (long *)0x0) {
    return;
  }
  if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar8 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
      TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  __this_00 = (Il2CppClass *)plVar8[7];
  if (__this_00 == (Il2CppClass *)0x0) {
    return;
  }
  pCVar9 = (__this_00->_1).image;
  bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
  if ((pCVar9->_2).naturalAligment < bVar2) {
    return;
  }
  if ((pCVar9->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman) {
    return;
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar11 = *(Settings_TypedSetting_bool__o **)(lVar10 + 0x60);
  if (pSVar11 == (Settings_TypedSetting_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(long *)(lVar10 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar3 = *(undefined1 *)((long)&(pSVar11->fields).DefaultValue + 1);
  uVar4 = *(undefined1 *)(*(long *)(lVar10 + 0x58) + 0x11);
  Settings_TypedSetting<bool>__set_Value(pSVar11,(uint)bVar1,MethodInfo_Void_set_Value);
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar10 = *(long *)(lVar10 + 0x20);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar6 = (__this->fields)._customSkinPreview;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar11 = *(Settings_TypedSetting_bool__o **)(lVar10 + 0x58);
  if (pSVar11 == (Settings_TypedSetting_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Settings_TypedSetting<bool>__set_Value
            (pSVar11,(uint)*(byte *)((long)&(pSVar6->fields).DefaultValue + 1),MethodInfo_Void_set_Value);
  pUVar12 = (__this->fields)._menu;
  if (pUVar12 != (UI_CharacterEditorMenu_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if (bVar1 <= (pUVar12->klass->_2).naturalAligment) {
      x = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        x = pUVar12;
      }
      iVar5 = *(int *)(TypeInfo_Object + 0xe4);
      goto joined_r0x04055a28;
    }
  }
  x = (UI_CharacterEditorMenu_o *)0x0;
  iVar5 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x04055a28:
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Characters_DummyHuman__LoadSkin((Characters_DummyHuman_o *)__this_00,(MethodInfo *)0x0);
    if (DAT_0570443d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_RestoreOriginalSkinSettings_d__31);
      DAT_0570443d = '\x01';
    }
    pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RestoreOriginalSkinSettings_d__31);
    System_Object___ctor(pIVar15,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar15[1].klass = 0;
    if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined1 *)&pIVar15[2].klass = uVar3;
    *(undefined1 *)((long)&pIVar15[2].klass + 1) = uVar4;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar15,
               (MethodInfo *)0x0);
  }
  else {
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x20);
    if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((customSet->klass->_2).naturalAligment < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(customSet);
      }
    }
    if (__this_00 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (x == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar13 = x[1].fields.ExternalLinkPopup;
    if (pUVar13 == (UI_ExternalLinkPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_02 = *(Characters_HumanSetup_o **)&(__this_00->_1).this_arg.bits;
    if (__this_02 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Characters_HumanSetup__Load
              (__this_02,customSet,*(int32_t *)((long)&(pUVar13->fields).m_CachedPtr + 4),0,
               (MethodInfo *)0x0);
    if (DAT_0570443b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_LoadSkinAfterReset_d__29);
      DAT_0570443b = '\x01';
    }
    pIVar15 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAfterReset_d__29);
    System_Object___ctor(pIVar15,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar15[1].klass = 0;
    if (pIVar15 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar15[2].monitor = __this;
    il2cpp_runtime_glue(&pIVar15[2].monitor,__this);
    pIVar15[2].klass = __this_00;
    il2cpp_runtime_glue(pIVar15 + 2,__this_00);
    *(undefined1 *)&pIVar15[3].klass = uVar3;
    *(undefined1 *)((long)&pIVar15[3].klass + 1) = uVar4;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar15,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.CharacterEditorSkinsPanel$$LoadSkinAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset (UI_CharacterEditorSkinsPanel_o* __this, Characters_DummyHuman_o* dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x4055ef0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset
          (UI_CharacterEditorSkinsPanel_o *__this,Characters_DummyHuman_o *dummyHuman,
          bool_conflict originalGlobalEnabled,bool_conflict originalSetEnabled,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570443b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinAfterReset_d__29);
    DAT_0570443b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAfterReset_d__29);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)dummyHuman;
    il2cpp_runtime_glue(__this_00 + 2,dummyHuman);
    *(char *)&__this_00[3].klass = (char)originalGlobalEnabled;
    *(char *)((long)&__this_00[3].klass + 1) = (char)originalSetEnabled;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterInitialSetup
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40551d0

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570443c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    DAT_0570443c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$RestoreOriginalSkinSettings
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings (UI_CharacterEditorSkinsPanel_o* __this, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x4055f90

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
          (UI_CharacterEditorSkinsPanel_o *__this,bool_conflict originalGlobalEnabled,
          bool_conflict originalSetEnabled,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570443d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RestoreOriginalSkinSettings_d__31);
    DAT_0570443d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RestoreOriginalSkinSettings_d__31);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    *(char *)&__this_00[2].klass = (char)originalGlobalEnabled;
    *(char *)((long)&__this_00[2].klass + 1) = (char)originalSetEnabled;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorSkinsPanel__OnButtonClick (UI_CharacterEditorSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4056060

void UI_CharacterEditorSkinsPanel__OnButtonClick
               (UI_CharacterEditorSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_CharacterEditorMenu_o *pUVar3;
  UI_MessagePopup_o *pUVar4;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  UI_TooltipPopup_o *pUVar6;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ConfirmPopup_o *pUVar10;
  
  if (DAT_0570443e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"EditGlobalSkin");
    il2cpp_init_method_metadata(&"EditCustomSkins");
    DAT_0570443e = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"EditCustomSkins",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality(name,"EditGlobalSkin",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar3 = (__this->fields)._menu;
    if (pUVar3 == (UI_CharacterEditorMenu_o *)0x0) {
LAB_04056213:
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar3->klass->_2).naturalAligment < bVar1) goto LAB_04056213;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        pUVar9 = pUVar3;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      return;
    }
    if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
      pUVar10 = pUVar9[1].fields.ConfirmPopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      pUVar4 = pUVar9[1].fields.MessagePopup;
      if (pUVar4 == (UI_MessagePopup_o *)0x0) goto LAB_0405635c;
      (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
      pSVar5 = pUVar9[1].fields._popups;
      if (pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto LAB_0405635c;
      (*(pSVar5->klass->vtable)._22_Clear.methodPtr)
                (pSVar5,(pSVar5->klass->vtable)._22_Clear.method);
      pUVar6 = pUVar9[1].fields.TooltipPopup;
      if (pUVar6 == (UI_TooltipPopup_o *)0x0) goto LAB_0405635c;
      (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
      pUVar10 = pUVar9[1].fields.ConfirmPopup;
      uVar8 = extraout_RDX_00;
      if (pUVar10 == (UI_ConfirmPopup_o *)0x0) goto LAB_0405635c;
      goto LAB_040562e2;
    }
    goto LAB_0405635c;
  }
  pUVar3 = (__this->fields)._menu;
  if (pUVar3 == (UI_CharacterEditorMenu_o *)0x0) {
LAB_040560f3:
    pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar3->klass->_2).naturalAligment < bVar1) goto LAB_040560f3;
    pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      pUVar9 = pUVar3;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
    pUVar4 = pUVar9[1].fields.MessagePopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar10 = pUVar9[1].fields.ConfirmPopup;
    if (pUVar10 != (UI_ConfirmPopup_o *)0x0) {
      (*(pUVar10->klass->vtable)._22_Hide.methodPtr)
                (pUVar10,(pUVar10->klass->vtable)._22_Hide.method);
      pSVar5 = pUVar9[1].fields._popups;
      if (pSVar5 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (*(pSVar5->klass->vtable)._22_Clear.methodPtr)
                  (pSVar5,(pSVar5->klass->vtable)._22_Clear.method);
        pUVar6 = pUVar9[1].fields.TooltipPopup;
        if (pUVar6 != (UI_TooltipPopup_o *)0x0) {
          (*(pUVar6->klass->vtable)._22_Hide.methodPtr)
                    (pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
          pUVar10 = (UI_ConfirmPopup_o *)pUVar9[1].fields.MessagePopup;
          uVar8 = extraout_RDX;
          if (pUVar10 != (UI_ConfirmPopup_o *)0x0) {
LAB_040562e2:
            vtable_dispatch =
                 (((UI_MessagePopup_c *)pUVar10->klass)->vtable)._21_Show.methodPtr;
            (*vtable_dispatch)
                      (pUVar10,(((UI_MessagePopup_c *)pUVar10->klass)->vtable)._21_Show.method,uVar8
                       ,vtable_dispatch);
            return;
          }
        }
      }
    }
  }
LAB_0405635c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel___ctor (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4056370

void UI_CharacterEditorSkinsPanel___ctor(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_0
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_0 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4056380

void UI_CharacterEditorSkinsPanel__<Setup>b__23_0
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570443f == '\0') {
    il2cpp_init_method_metadata(&"EditCustomSkins");
    DAT_0570443f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditCustomSkins",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_1
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_1 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x40563c0

void UI_CharacterEditorSkinsPanel__<Setup>b__23_1
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704440 == '\0') {
    il2cpp_init_method_metadata(&"EditGlobalSkin");
    DAT_05704440 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditGlobalSkin",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_2
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_2 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4056400

void UI_CharacterEditorSkinsPanel__<Setup>b__23_2
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704441 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704441 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = (__this->fields)._globalSetDropdownSetting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected(__this,(pSVar1->fields)._value,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_3
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_3 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4056440

void UI_CharacterEditorSkinsPanel__<Setup>b__23_3
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,method);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_4
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_4 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4056450

void UI_CharacterEditorSkinsPanel__<Setup>b__23_4
               (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,method);
  return;
}


