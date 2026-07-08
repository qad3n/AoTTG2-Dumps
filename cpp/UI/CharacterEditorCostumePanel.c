// Type: UI.CharacterEditorCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorCostumePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___cctor (const MethodInfo* method);
// 0x404f5d0

void UI_CharacterEditorCostumePanel_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570440f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570440f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c___ctor (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x404f640

void UI_CharacterEditorCostumePanel_<>c___ctor
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c$$<OnButtonClick>b__33_6
// il2cpp: void UI_CharacterEditorCostumePanel___c___OnButtonClick_b__33_6 (UI_CharacterEditorCostumePanel___c_o* __this, const MethodInfo* method);
// 0x404f650

void UI_CharacterEditorCostumePanel_<>c__<OnButtonClick>b__33_6
               (UI_CharacterEditorCostumePanel___c_o *__this,MethodInfo *method)

{
  long *plVar1;
  
  if (DAT_05704410 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704410 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews((MethodInfo *)0x0);
  plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    plVar1 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x248))();
      if (DAT_05704434 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
        DAT_05704434 = '\x01';
      }
      **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
      ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x404f770

void UI_CharacterEditorCostumePanel_<>c__DisplayClass21_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_0$$<Setup>b__27
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_0___Setup_b__27 (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x404f780

void UI_CharacterEditorCostumePanel_<>c__DisplayClass21_0__<Setup>b__27
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick
              (__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x404f7a0

void UI_CharacterEditorCostumePanel_<>c__DisplayClass21_1___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass21_1$$<Setup>b__28
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass21_1___Setup_b__28 (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x404f7b0

void UI_CharacterEditorCostumePanel_<>c__DisplayClass21_1__<Setup>b__28
               (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnButtonClick
              (__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___ctor (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f7d0

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0___ctor
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__0 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f7e0

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__0
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__1 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f800

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__1
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__2 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f820

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__2
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__3 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f840

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__3
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__4 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f860

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__4
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  if (DAT_05704411 == '\0') {
    il2cpp_init_method_metadata(&"LoadPreset");
    DAT_05704411 = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<>c__DisplayClass33_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorCostumePanel___c__DisplayClass33_0___OnButtonClick_b__5 (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x404f8a0

void UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0__<OnButtonClick>b__5
               (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x404f8c0

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x404f8e0

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x404f8f0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31__MoveNext
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  Characters_DummyHuman_o *__this_00;
  long lVar4;
  Settings_TypedSetting_bool__o *pSVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  
  if (DAT_05704412 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704412 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x60),
       pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar5,(uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
         (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58),
         pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar5,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
LAB_0404fc3c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
          TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = (Characters_DummyHuman_o *)plVar3[7];
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
          if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
            return 0;
          }
          lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x60),
             pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
            *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
                 *(undefined1 *)((long)&(pSVar5->fields).DefaultValue + 1);
            if (*(long *)(lVar4 + 0x58) != 0) {
              *(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
                   *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x11);
              if (DAT_05704371 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                DAT_05704371 = '\x01';
              }
              Settings_TypedSetting<bool>__set_Value
                        (pSVar5,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),MethodInfo_Void_set_Value);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
                pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58);
                if (DAT_05704372 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                  DAT_05704372 = '\x01';
                }
                if ((pSVar5 != (Settings_TypedSetting_bool__o *)0x0) &&
                   (Settings_TypedSetting<bool>__set_Value
                              (pSVar5,(uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),
                               MethodInfo_Void_set_Value), __this_00 != (Characters_DummyHuman_o *)0x0)) {
                  Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar6;
                  uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
                  (__this->fields).__1__state = 2;
                  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
                }
              }
            }
          }
          goto LAB_0404fc3c;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
  }
  return 0;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x404fc50

Il2CppObject *
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x404fc60

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
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


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o* __this, const MethodInfo* method);
// 0x404fca0

Il2CppObject *
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29___ctor (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x404fcb0

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x404fcd0

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__MoveNext (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x404fce0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29__MoveNext
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  Characters_DummyHuman_o *__this_00;
  long lVar4;
  Settings_TypedSetting_bool__o *pSVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  
  if (DAT_05704413 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704413 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x60),
       pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar5,(uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
         (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58),
         pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar5,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                   MethodInfo_Void_set_Value);
        return 0;
      }
    }
LAB_0405002c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar3 != (long *)0x0) {
      if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
         (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
          TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      __this_00 = (Characters_DummyHuman_o *)plVar3[7];
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (bVar1 <= (__this_00->klass->_2).naturalAligment) {
          if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
            return 0;
          }
          lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
             (pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x60),
             pSVar5 != (Settings_TypedSetting_bool__o *)0x0)) {
            *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
                 *(undefined1 *)((long)&(pSVar5->fields).DefaultValue + 1);
            if (*(long *)(lVar4 + 0x58) != 0) {
              *(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
                   *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x11);
              if (DAT_05704371 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                DAT_05704371 = '\x01';
              }
              Settings_TypedSetting<bool>__set_Value
                        (pSVar5,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),MethodInfo_Void_set_Value);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
                pSVar5 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58);
                if (DAT_05704372 == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                  DAT_05704372 = '\x01';
                }
                if ((pSVar5 != (Settings_TypedSetting_bool__o *)0x0) &&
                   (Settings_TypedSetting<bool>__set_Value
                              (pSVar5,(uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),
                               MethodInfo_Void_set_Value), __this_00 != (Characters_DummyHuman_o *)0x0)) {
                  Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
                  (__this->fields).__2__current = pIVar6;
                  uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
                  (__this->fields).__1__state = 2;
                  return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
                }
              }
            }
          }
          goto LAB_0405002c;
        }
      }
    }
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
  }
  return 0;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4050040

Il2CppObject *
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4050050

void UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
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


// UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4050090

Il2CppObject *
UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28___ctor (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40500a0

void UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28___ctor
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x40500c0

void UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
                *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__MoveNext (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x40500d0

bool_conflict
UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28__MoveNext
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
           *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  UI_CharacterEditorCostumePanel_o *__this_00;
  Settings_ListSetting_T__o *pSVar4;
  Settings_ListSetting_T__c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Settings_HumanCustomSettings_o *pSVar7;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Characters_DummyHuman_o *pCVar10;
  Settings_StringSetting_o *pSVar11;
  Characters_HumanSetup_o *pCVar12;
  UI_ConfirmPopup_o *pUVar13;
  Il2CppClass *pIVar14;
  bool_conflict bVar15;
  Il2CppMethodPointer *ppIVar16;
  Settings_HumanCustomSet_o *pSVar17;
  Il2CppObject *pIVar18;
  System_Collections_Generic_List_object__o *__this_01;
  int32_t index;
  Characters_DummyHuman_o **ppCVar19;
  long lVar20;
  Settings_HumanCustomSet_o *pSVar21;
  
  if (DAT_05704414 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704414 = '\x01';
  }
  uVar3 = (__this->fields).__1__state;
  if (3 < uVar3) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar3) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields)._settings_5__2 =
         *(Settings_HumanCustomSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    il2cpp_runtime_glue();
    pSVar7 = (__this->fields)._settings_5__2;
    if (((pSVar7 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar8 = (pSVar7->fields).CustomSets,
        pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (pSVar4 = (pSVar8->fields).Sets, pSVar4 != (Settings_ListSetting_T__o *)0x0)) {
      pSVar5 = pSVar4->klass;
      uVar2._0_1_ = (pSVar5->_2).rank;
      uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar20) == TypeInfo_IListSetting) {
            ppIVar16 = &(&(pSVar5->vtable)._0_Equals)[*(int *)((long)&pIVar6->offset + lVar20) + 2].
                        methodPtr;
            goto LAB_04050477;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar20);
      }
      ppIVar16 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pSVar4,TypeInfo_IListSetting,2);
LAB_04050477:
      __this_01 = (System_Collections_Generic_List_object__o *)
                  (**ppIVar16)(pSVar4,(MethodInfo *)ppIVar16[1]);
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        if (0 < (__this_01->fields)._size) {
          index = 0;
          do {
            pSVar17 = (Settings_HumanCustomSet_o *)
                      System_Collections_Generic_List<object>__get_Item
                                (__this_01,index,MethodInfo_BaseSetting_get_Item);
            if (pSVar17 == (Settings_HumanCustomSet_o *)0x0) goto LAB_040507ef;
            bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
            pSVar21 = pSVar17;
            if (((pSVar17->klass->_2).naturalAligment < bVar1) ||
               ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
            goto LAB_040507f7;
            pSVar11 = (pSVar17->fields).UniqueId;
            if (pSVar11 == (Settings_StringSetting_o *)0x0) goto LAB_040507ef;
            bVar15 = System_String__op_Equality
                               ((pSVar11->fields)._value,(__this->fields).previousProfileId,
                                (MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              pSVar7 = (__this->fields)._settings_5__2;
              if (((pSVar7 == (Settings_HumanCustomSettings_o *)0x0) ||
                  (pSVar8 = (pSVar7->fields).CustomSets,
                  pSVar8 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
                 (pSVar9 = (pSVar8->fields).SelectedSetIndex, pSVar9 == (Settings_IntSetting_o *)0x0
                 )) goto LAB_040507ef;
              (__this->fields)._currentSelectedIndex_5__3 = (pSVar9->fields)._value;
              Settings_TypedSetting<int>__set_Value
                        ((Settings_TypedSetting_int__o *)pSVar9,index,MethodInfo_Void_set_Value);
              pIVar14 = TypeInfo_DummyHuman;
              pSVar21 = *(Settings_HumanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
              if (pSVar21 == (Settings_HumanCustomSet_o *)0x0) goto LAB_040507ef;
              bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
              if (((pSVar21->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager))
              goto LAB_040507f7;
              pUVar13 = (UI_ConfirmPopup_o *)(pSVar21->fields).Sex;
              if (pUVar13 == (UI_ConfirmPopup_o *)0x0) {
                (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
              }
              else {
                bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
                if (((pUVar13->klass->_2).naturalAligment < bVar1) ||
                   ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) {
LAB_04050804:
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pUVar13,pIVar14);
                }
                (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)pUVar13;
                if (((pUVar13->klass->_2).naturalAligment < bVar1) ||
                   ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar14))
                goto LAB_04050804;
              }
              ppCVar19 = &(__this->fields)._character_5__4;
              il2cpp_runtime_glue(ppCVar19);
              if (((*ppCVar19 == (Characters_DummyHuman_o *)0x0) ||
                  (__this_00 == (UI_CharacterEditorCostumePanel_o *)0x0)) ||
                 (pSVar21 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
                 pSVar21 == (Settings_HumanCustomSet_o *)0x0)) goto LAB_040507ef;
              bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
              if (((pSVar21->klass->_2).naturalAligment < bVar1) ||
                 ((pSVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorHumanMenu))
              goto LAB_040507f7;
              pSVar11 = (pSVar21->fields).BladeEffect;
              if ((pSVar11 != (Settings_StringSetting_o *)0x0) &&
                 (pCVar12 = ((*ppCVar19)->fields).Setup, pCVar12 != (Characters_HumanSetup_o *)0x0))
              {
                Characters_HumanSetup__Load
                          (pCVar12,pSVar17,*(int32_t *)((long)&(pSVar11->fields).DefaultValue + 4),0
                           ,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pIVar18 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar18;
                il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
                (__this->fields).__1__state = 1;
                return (bool_conflict)CONCAT71((int7)((ulong)ppCVar19 >> 8),1);
              }
              goto LAB_040507ef;
            }
            index = index + 1;
          } while (index < (__this_01->fields)._size);
        }
        if ((char)(__this->fields).shouldApplySkinPreview == '\0') {
          return 0;
        }
        pSVar21 = *(Settings_HumanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
        if (pSVar21 != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
          if (((pSVar21->klass->_2).naturalAligment < bVar1) ||
             ((pSVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
LAB_040507f7:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar21);
          }
          pUVar13 = (UI_ConfirmPopup_o *)(pSVar21->fields).Sex;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pUVar13 != (UI_ConfirmPopup_o *)0x0) {
            bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
            if (((pUVar13->klass->_2).naturalAligment < bVar1) ||
               ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pUVar13);
            }
          }
          bVar15 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            return 0;
          }
          if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            pIVar18 = (Il2CppObject *)
                      UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
                                (__this_00,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar18;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
            (__this->fields).__1__state = 3;
            return 1;
          }
        }
      }
    }
    break;
  case 1:
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(1,(MethodInfo *)0x0);
    pSVar7 = (__this->fields)._settings_5__2;
    if (((pSVar7 != (Settings_HumanCustomSettings_o *)0x0) &&
        (pSVar8 = (pSVar7->fields).CustomSets,
        pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) &&
       (pSVar9 = (pSVar8->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar9,(__this->fields)._currentSelectedIndex_5__3,
                 MethodInfo_Void_set_Value);
      pSVar7 = (__this->fields)._settings_5__2;
      if ((pSVar7 != (Settings_HumanCustomSettings_o *)0x0) &&
         (pSVar8 = (pSVar7->fields).CustomSets,
         pSVar8 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
        pSVar17 = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer<object>__GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
        if (pSVar17 != (Settings_HumanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
          if (((pSVar17->klass->_2).naturalAligment < bVar1) ||
             ((pSVar17->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar17);
          }
        }
        pCVar10 = (__this->fields)._character_5__4;
        if (((pCVar10 != (Characters_DummyHuman_o *)0x0) &&
            (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0)) &&
           (pSVar21 = (Settings_HumanCustomSet_o *)(__this_00->fields)._menu,
           pSVar21 != (Settings_HumanCustomSet_o *)0x0)) {
          bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
          if (((pSVar21->klass->_2).naturalAligment < bVar1) ||
             ((pSVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorHumanMenu))
          goto LAB_040507f7;
          pSVar11 = (pSVar21->fields).BladeEffect;
          if ((pSVar11 != (Settings_StringSetting_o *)0x0) &&
             (pCVar12 = (pCVar10->fields).Setup, pCVar12 != (Characters_HumanSetup_o *)0x0)) {
            Characters_HumanSetup__Load
                      (pCVar12,pSVar17,*(int32_t *)((long)&(pSVar11->fields).DefaultValue + 4),0,
                       (MethodInfo *)0x0);
            pCVar10 = (__this->fields)._character_5__4;
            if (pCVar10 != (Characters_DummyHuman_o *)0x0) {
              Characters_DummyCharacter__Idle
                        ((Characters_DummyCharacter_o *)pCVar10,(MethodInfo *)0x0);
              if ((char)(__this->fields).shouldApplySkinPreview != '\0') {
                pIVar18 = (Il2CppObject *)
                          UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
                                    (__this_00,(MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar18;
                il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
                (__this->fields).__1__state = 2;
                return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
              }
              goto LAB_04050442;
            }
          }
        }
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
LAB_04050442:
    (__this->fields)._character_5__4 = (Characters_DummyHuman_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._character_5__4,0);
    return 0;
  case 3:
    (__this->fields).__1__state = -1;
    return 0;
  }
LAB_040507ef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x4050820

Il2CppObject *
UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x4050830

void UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
                *__this,MethodInfo *method)

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


// UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o* __this, const MethodInfo* method);
// 0x4050870

Il2CppObject *
UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35___ctor (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4050880

void UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35___ctor
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_IDisposable_Dispose (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40508a0

void UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35__System_IDisposable_Dispose
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$MoveNext
// il2cpp: bool UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__MoveNext (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40508b0

bool_conflict
UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35__MoveNext
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (DAT_05704415 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704415 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar2 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar2);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
    return 0;
  }
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(1,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
  if (DAT_05704434 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704434 = '\x01';
  }
  **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return 0;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40509b0

Il2CppObject *
UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_Reset (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x40509c0

void UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
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


// UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35__System_Collections_IEnumerator_get_Current (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o* __this, const MethodInfo* method);
// 0x4050a00

Il2CppObject *
UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorCostumePanel__get_Title (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e830

System_String_o *
UI_CharacterEditorCostumePanel__get_Title
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570435f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"");
    DAT_0570435f = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorCostumePanel__get_Width (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e8d0

float UI_CharacterEditorCostumePanel__get_Width
                (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorCostumePanel__get_Height (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e8e0

float UI_CharacterEditorCostumePanel__get_Height
                (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorCostumePanel__get_VerticalSpacing (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e8f0

float UI_CharacterEditorCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e900

int32_t UI_CharacterEditorCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e910

int32_t UI_CharacterEditorCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorCostumePanel__get_ScrollBar (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x402e920

bool_conflict
UI_CharacterEditorCostumePanel__get_ScrollBar
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CharacterEditorCostumePanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x402e930

bool_conflict UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8));
}


// UI.CharacterEditorCostumePanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorCostumePanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x402e970

bool_conflict UI_CharacterEditorCostumePanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (DAT_05704372 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704372 = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1));
}


// UI.CharacterEditorCostumePanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x402e220

void UI_CharacterEditorCostumePanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles((MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorCostumePanel__Setup (UI_CharacterEditorCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x402e9b0

void UI_CharacterEditorCostumePanel__Setup
               (UI_CharacterEditorCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  Settings_SetSettingsContainer_T__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  UI_IconPickPopup_o *pUVar7;
  Settings_ColorSetting_o *pSVar8;
  UI_ColorPickPopup_o *pUVar9;
  Il2CppClass *pIVar10;
  UI_CharacterEditorCostumePanel_o *category;
  bool_conflict bVar11;
  Settings_HumanCustomSet_o *set;
  System_String_o *pSVar12;
  MethodInfo *__this_00;
  System_String_o *pSVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_String_array *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  long lVar17;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *__this_01;
  System_String_array *pSVar20;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar21;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  UI_CharacterEditorMenu_o *pUVar22;
  UI_CharacterEditorCostumePanel_o *pUVar23;
  UI_CharacterEditorCostumePanel_o *pUVar24;
  ulong uVar25;
  
  if (DAT_05704360 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_10);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_11);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_12);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_13);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_14);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_15);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_16);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_17);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_18);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_19);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_20);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_21);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_22);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_23);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_24);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_25);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_26);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_2);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_3);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_4);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_5);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_7);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_8);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__21_9);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__27);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__28);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Blade Effect (Patreon T2)");
    il2cpp_init_method_metadata(&"BootsColor");
    il2cpp_init_method_metadata(&"PantsColor");
    il2cpp_init_method_metadata(&"JacketColor");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"SaveQuit");
    il2cpp_init_method_metadata(&"No cape");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Logo");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Sex");
    il2cpp_init_method_metadata(&"Boots");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"HairColor");
    il2cpp_init_method_metadata(&"Face");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Glass");
    il2cpp_init_method_metadata(&"Male");
    il2cpp_init_method_metadata(&"StrapsColor");
    il2cpp_init_method_metadata(&"Cape");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Blade Effect Color (Patreon T2)");
    il2cpp_init_method_metadata(&"ShirtColor");
    il2cpp_init_method_metadata(&"Female");
    il2cpp_init_method_metadata(&"Eye");
    il2cpp_init_method_metadata(&"SkinColor");
    il2cpp_init_method_metadata(&"Hair Effect Color (Patreon T2)");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Custom set");
    il2cpp_init_method_metadata(&"Hair");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"Hair Effect (Patreon T2)");
    il2cpp_init_method_metadata(&"Hat");
    DAT_05704360 = '\x01';
    method = extraout_RDX;
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,method);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar22 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar22 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_0402ee59;
LAB_0402edde:
    pIVar10 = TypeInfo_CharacterEditorMenu;
    bVar2 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
    if (((pUVar22->klass->_2).naturalAligment < bVar2) ||
       ((pUVar22->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorMenu)) {
LAB_04030a46:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar22,pIVar10);
    }
    (__this->fields)._menu = pUVar22;
    if (((pUVar22->klass->_2).naturalAligment < bVar2) ||
       ((pUVar22->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar10)) goto LAB_04030a46;
  }
  else {
    pUVar22 = *(UI_CharacterEditorMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar22 != (UI_CharacterEditorMenu_o *)0x0) goto LAB_0402edde;
LAB_0402ee59:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  *(undefined1 *)&(__this->fields)._isRebuildingPanel = 1;
  lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar17 == 0) ||
      (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar17 + 0x20),
      pSVar4 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (set = (Settings_HumanCustomSet_o *)
            Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar4,MethodInfo_BaseSetSetting_GetSelectedSet),
     set == (Settings_HumanCustomSet_o *)0x0)) goto LAB_04030ae5;
  bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
  if (((((Settings_BaseSetSetting_c *)set->klass)->_2).naturalAligment < bVar2) ||
     ((((Settings_BaseSetSetting_c *)set->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      TypeInfo_HumanCustomSet)) {
LAB_04030a54:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(set);
  }
  pSVar5 = (set->fields).UniqueId;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto LAB_04030ae5;
  (__this->fields)._previousProfileId = (pSVar5->fields)._value;
  il2cpp_runtime_glue(&(__this->fields)._previousProfileId);
  pSVar12 = (System_String_o *)
            (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,130.0,20.0,pSVar12,(MethodInfo *)0x0);
  pSVar12 = "Costume";
  category = "CharacterEditor";
  lVar17 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  pUVar19 = (__this->fields).BottomBar;
  pSVar13 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar19,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,pUVar14,(MethodInfo *)0x0);
  pUVar19 = (__this->fields).BottomBar;
  pSVar13 = UI_UIManager__GetLocaleCommon("LoadPreset",(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar19,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,pUVar14,(MethodInfo *)0x0);
  pUVar19 = (__this->fields).BottomBar;
  pSVar13 = UI_UIManager__GetLocale
                      ((System_String_o *)category,pSVar12,"SaveQuit",
                       (System_String_o *)"",(System_String_o *)"",
                       (MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton
            (pUVar19,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,pUVar14,(MethodInfo *)0x0);
  if ((lVar17 == 0) ||
     (*(Settings_SetSettingsContainer_T__o **)(lVar17 + 0x20) ==
      (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04030ae5;
  set = (Settings_HumanCustomSet_o *)
        Settings_SetSettingsContainer<object>__GetSelectedSet
                  (*(Settings_SetSettingsContainer_T__o **)(lVar17 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet);
  if (set != (Settings_HumanCustomSet_o *)0x0) {
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((set->klass->_2).naturalAligment < bVar2) ||
       ((set->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) goto LAB_04030a54;
  }
  pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar17 + 0x20);
  if (pSVar4 == (Settings_SetSettingsContainer_T__o *)0x0) goto LAB_04030ae5;
  pUVar19 = (__this->fields).SinglePanel;
  pSVar6 = (pSVar4->fields).SelectedSetIndex;
  pSVar15 = Settings_SetSettingsContainer<object>__GetSetNames(pSVar4,MethodInfo_String___GetSetNames);
  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (pUVar19,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar6,"Custom set",
             pSVar15,(System_String_o *)"",170.0,40.0,300.0,(System_Nullable_float__o)0x0,
             pUVar14,(MethodInfo *)0x0);
  pUVar16 = UI_ElementFactory__CreateHorizontalGroup
                      ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
  lVar17 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar17 == 0) goto LAB_04030ae5;
  if (*(int *)(lVar17 + 0x18) == 0) goto LAB_04030a93;
  puVar1 = (undefined8 *)(lVar17 + 0x20);
  *(undefined8 *)(lVar17 + 0x20) = "Create";
  il2cpp_runtime_glue(puVar1);
  if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_04030a93;
  *(undefined8 *)(lVar17 + 0x28) = "Delete";
  il2cpp_runtime_glue(lVar17 + 0x28);
  if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_04030a93;
  *(undefined8 *)(lVar17 + 0x30) = "Copy";
  il2cpp_runtime_glue(lVar17 + 0x30);
  if (*(int *)(lVar17 + 0x18) < 1) {
LAB_0402f370:
    pUVar16 = UI_ElementFactory__CreateHorizontalGroup
                        ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
    lVar17 = il2cpp_glue_02274930(TypeInfo_string,3);
    if (lVar17 == 0) goto LAB_04030ae5;
    if (*(int *)(lVar17 + 0x18) == 0) goto LAB_04030a93;
    puVar1 = (undefined8 *)(lVar17 + 0x20);
    *(undefined8 *)(lVar17 + 0x20) = "Rename";
    il2cpp_runtime_glue(puVar1);
    if (*(uint *)(lVar17 + 0x18) < 2) goto LAB_04030a93;
    *(undefined8 *)(lVar17 + 0x28) = "Import";
    il2cpp_runtime_glue(lVar17 + 0x28);
    if (*(uint *)(lVar17 + 0x18) < 3) goto LAB_04030a93;
    *(undefined8 *)(lVar17 + 0x30) = "Export";
    il2cpp_runtime_glue(lVar17 + 0x30);
    if (0 < *(int *)(lVar17 + 0x18)) {
      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
        pUVar18 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)
                  il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_1);
        UI_CharacterEditorCostumePanel_<>c__DisplayClass21_1___ctor
                  ((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)pUVar18,
                   (MethodInfo *)0x0);
        if (pUVar18 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0)
        goto LAB_04030ae5;
        (((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)pUVar18)->fields).__4__this =
             __this;
        il2cpp_runtime_glue(&(((UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)pUVar18)->
                            fields).__4__this);
        iVar3 = *(int *)(lVar17 + 0x18);
        goto joined_r0x04030a91;
      }
      uVar25 = 0;
      do {
        __this_01 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)
                    il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_1);
        UI_CharacterEditorCostumePanel_<>c__DisplayClass21_1___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_1_o *)0x0)
        goto LAB_04030ae5;
        (__this_01->fields).__4__this = __this;
        il2cpp_runtime_glue(&(__this_01->fields).__4__this);
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_04030a93;
        (__this_01->fields).button = *(System_String_o **)(lVar17 + 0x20 + uVar25 * 8);
        il2cpp_runtime_glue(&__this_01->fields);
        pUVar19 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        pSVar13 = (__this_01->fields).button;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar13 = UI_UIManager__GetLocaleCommon(pSVar13,(MethodInfo *)0x0);
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar19,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,0.0,pUVar14,(MethodInfo *)0x0)
        ;
        uVar25 = uVar25 + 1;
      } while ((long)uVar25 < (long)*(int *)(lVar17 + 0x18));
    }
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    if (set != (Settings_HumanCustomSet_o *)0x0) {
      pUVar19 = (__this->fields).SinglePanel;
      pSVar6 = (set->fields).Sex;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar13 = UI_UIManager__GetLocale
                          ((System_String_o *)category,pSVar12,"Sex",
                           (System_String_o *)"",(System_String_o *)"",
                           (MethodInfo *)0x0);
      pSVar15 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
      if (pSVar15 != (System_String_array *)0x0) {
        if ((int)pSVar15->max_length != 0) {
          pSVar15->m_Items[0] = "Male";
          il2cpp_runtime_glue(pSVar15->m_Items);
          if (1 < (uint)pSVar15->max_length) {
            pSVar15->m_Items[1] = "Female";
            il2cpp_runtime_glue(pSVar15->m_Items + 1);
            pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateDropdownSetting
                      (pUVar19,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)pSVar6,
                       pSVar13,pSVar15,(System_String_o *)"",170.0,40.0,300.0,
                       (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) == 0) {
              il2cpp_init_class();
            }
            pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                (TypeInfo_HumanSetup,"Eye",
                                 *(int32_t *)
                                  &((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).
                                   _registeredCallbacksLists,0,(MethodInfo *)pSVar15);
            pUVar24 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
            pSVar6 = (set->fields).Eye;
            pUVar23 = category;
            pSVar13 = UI_UIManager__GetLocale
                                ((System_String_o *)category,pSVar12,"Eye",
                                 (System_String_o *)"",(System_String_o *)"",
                                 (MethodInfo *)0x0);
            pSVar20 = UI_CharacterEditorCostumePanel__GetIcons(pUVar23,pSVar15,method_00);
            lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (lVar17 != 0) {
              pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
              pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              UI_ElementFactory__CreateIconPickSetting
                        ((UnityEngine_Transform_o *)pUVar24,(UI_ElementStyle_o *)__this_00,
                         (Settings_BaseSetting_o *)pSVar6,pSVar13,pSVar15,pSVar20,pUVar7,
                         (System_String_o *)"",(System_String_array *)0x0,170.0,40.0,
                         pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
              pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                  (pUVar24,"Face",
                                   *(int32_t *)
                                    ((long)&((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->
                                            fields)._registeredCallbacksLists + 4),1,
                                   (MethodInfo *)pSVar15);
              pUVar24 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
              pSVar5 = (set->fields).Face;
              pUVar23 = category;
              pSVar13 = UI_UIManager__GetLocale
                                  ((System_String_o *)category,pSVar12,"Face",
                                   (System_String_o *)"",(System_String_o *)"",
                                   (MethodInfo *)0x0);
              pSVar20 = UI_CharacterEditorCostumePanel__GetIcons(pUVar23,pSVar15,method_01);
              lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar17 != 0) {
                pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateIconPickSetting
                          ((UnityEngine_Transform_o *)pUVar24,(UI_ElementStyle_o *)__this_00,
                           (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,pSVar20,pUVar7,
                           (System_String_o *)"",(System_String_array *)0x0,170.0,40.0,
                           pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                    (pUVar24,"Glass",
                                     ((TypeInfo_HumanSetup[1].fields.m_CancellationTokenSource)->fields).
                                     _state,1,(MethodInfo *)pSVar15);
                pUVar24 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                pSVar5 = (set->fields).Glass;
                pUVar23 = category;
                pSVar13 = UI_UIManager__GetLocale
                                    ((System_String_o *)category,pSVar12,"Glass",
                                     (System_String_o *)"",(System_String_o *)""
                                     ,(MethodInfo *)0x0);
                pSVar20 = UI_CharacterEditorCostumePanel__GetIcons(pUVar23,pSVar15,method_02);
                lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                if (lVar17 != 0) {
                  pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pMVar21 = __this_00;
                  UI_ElementFactory__CreateIconPickSetting
                            ((UnityEngine_Transform_o *)pUVar24,(UI_ElementStyle_o *)__this_00,
                             (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,pSVar20,pUVar7,
                             (System_String_o *)"",(System_String_array *)0x0,170.0,40.0,
                             pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                  pSVar15 = UI_CharacterEditorCostumePanel__GetHairOptions(pUVar24,pMVar21);
                  pUVar19 = (__this->fields).SinglePanel;
                  pSVar5 = (set->fields).Hair;
                  pUVar24 = category;
                  pSVar13 = UI_UIManager__GetLocale
                                      ((System_String_o *)category,pSVar12,"Hair",
                                       (System_String_o *)"",
                                       (System_String_o *)"",(MethodInfo *)0x0);
                  pSVar20 = UI_CharacterEditorCostumePanel__GetIcons(pUVar24,pSVar15,method_03);
                  lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                  if (lVar17 != 0) {
                    pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                    pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    UI_ElementFactory__CreateIconPickSetting
                              (pUVar19,(UI_ElementStyle_o *)__this_00,
                               (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,pSVar20,pUVar7,
                               (System_String_o *)"",(System_String_array *)0x0,170.0,40.0
                               ,pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                    pUVar24 = (UI_CharacterEditorCostumePanel_o *)0x0;
                    bVar11 = PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess
                                       ((MethodInfo *)0x0);
                    pMVar21 = extraout_RDX_00;
                    if ((char)bVar11 != '\0') {
                      pUVar19 = (__this->fields).SinglePanel;
                      pSVar5 = (set->fields).HairEffect;
                      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar15 = (System_String_array *)**(undefined8 **)(TypeInfo_CharacterEffectPresets + 0xb8);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateDropdownSetting
                                (pUVar19,(UI_ElementStyle_o *)__this_00,
                                 (Settings_BaseSetting_o *)pSVar5,"Hair Effect (Patreon T2)",pSVar15,
                                 (System_String_o *)"",170.0,40.0,300.0,
                                 (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
                      pUVar24 = (UI_CharacterEditorCostumePanel_o *)(__this->fields).SinglePanel;
                      pSVar8 = (set->fields).HairEffectColor;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                      if (lVar17 == 0) goto LAB_04030ae5;
                      pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateColorSetting
                                ((UnityEngine_Transform_o *)pUVar24,(UI_ElementStyle_o *)__this_00,
                                 (Settings_BaseSetting_o *)pSVar8,"Hair Effect Color (Patreon T2)",pUVar9,
                                 (System_String_o *)"",90.0,30.0,pUVar14,(MethodInfo *)0x0
                                );
                      pMVar21 = extraout_RDX_01;
                    }
                    pSVar15 = UI_CharacterEditorCostumePanel__GetCostumeOptions(pUVar24,set,pMVar21)
                    ;
                    pUVar19 = (__this->fields).SinglePanel;
                    pSVar6 = (set->fields).Costume;
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pUVar24 = category;
                    pSVar13 = UI_UIManager__GetLocale
                                        ((System_String_o *)category,pSVar12,"Costume",
                                         (System_String_o *)"",
                                         (System_String_o *)"",(MethodInfo *)0x0);
                    pSVar20 = UI_CharacterEditorCostumePanel__GetIcons(pUVar24,pSVar15,method_04);
                    lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                    if (lVar17 != 0) {
                      pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateIconPickSetting
                                (pUVar19,(UI_ElementStyle_o *)__this_00,
                                 (Settings_BaseSetting_o *)pSVar6,pSVar13,pSVar15,pSVar20,pUVar7,
                                 (System_String_o *)"",(System_String_array *)0x0,170.0,
                                 40.0,pUVar14,(UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                      pUVar19 = (__this->fields).SinglePanel;
                      pSVar6 = (set->fields).Boots;
                      pUVar24 = category;
                      pMVar21 = "";
                      pSVar13 = UI_UIManager__GetLocale
                                          ((System_String_o *)category,pSVar12,"Boots",
                                           (System_String_o *)"",
                                           (System_String_o *)"",(MethodInfo *)0x0);
                      pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                          (pUVar24,"Boots",2,0,pMVar21);
                      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      UI_ElementFactory__CreateDropdownSetting
                                (pUVar19,(UI_ElementStyle_o *)__this_00,
                                 (Settings_BaseSetting_o *)pSVar6,pSVar13,pSVar15,
                                 (System_String_o *)"",170.0,40.0,300.0,
                                 (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
                      if ((char)bVar11 != '\0') {
                        pUVar19 = (__this->fields).SinglePanel;
                        pSVar5 = (set->fields).BladeEffect;
                        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        pSVar15 = (System_String_array *)**(undefined8 **)(TypeInfo_CharacterEffectPresets + 0xb8);
                        pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        UI_ElementFactory__CreateDropdownSetting
                                  (pUVar19,(UI_ElementStyle_o *)__this_00,
                                   (Settings_BaseSetting_o *)pSVar5,"Blade Effect (Patreon T2)",pSVar15,
                                   (System_String_o *)"",170.0,40.0,300.0,
                                   (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
                        pUVar19 = (__this->fields).SinglePanel;
                        pSVar8 = (set->fields).BladeEffectColor;
                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                        if (lVar17 == 0) goto LAB_04030ae5;
                        pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                        pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                        UnityEngine_Events_UnityAction___ctor();
                        UI_ElementFactory__CreateColorSetting
                                  (pUVar19,(UI_ElementStyle_o *)__this_00,
                                   (Settings_BaseSetting_o *)pSVar8,"Blade Effect Color (Patreon T2)",pUVar9,
                                   (System_String_o *)"",90.0,30.0,pUVar14,
                                   (MethodInfo *)0x0);
                      }
                      pUVar19 = (__this->fields).SinglePanel;
                      pSVar6 = (set->fields).Cape;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar13 = UI_UIManager__GetLocale
                                          ((System_String_o *)category,pSVar12,"Cape",
                                           (System_String_o *)"",
                                           (System_String_o *)"",(MethodInfo *)0x0);
                      pSVar15 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                      if (pSVar15 != (System_String_array *)0x0) {
                        if ((int)pSVar15->max_length != 0) {
                          pSVar15->m_Items[0] = "No cape";
                          il2cpp_runtime_glue(pSVar15->m_Items);
                          if (1 < (uint)pSVar15->max_length) {
                            pSVar15->m_Items[1] = "Cape";
                            il2cpp_runtime_glue(pSVar15->m_Items + 1);
                            pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            UI_ElementFactory__CreateDropdownSetting
                                      (pUVar19,(UI_ElementStyle_o *)__this_00,
                                       (Settings_BaseSetting_o *)pSVar6,pSVar13,pSVar15,
                                       (System_String_o *)"",170.0,40.0,300.0,
                                       (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
                            pUVar19 = (__this->fields).SinglePanel;
                            pSVar6 = (set->fields).Logo;
                            pUVar24 = category;
                            pMVar21 = "";
                            pSVar13 = UI_UIManager__GetLocale
                                                ((System_String_o *)category,pSVar12,"Logo",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",(MethodInfo *)0x0);
                            pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                                (pUVar24,"Logo",4,0,pMVar21);
                            pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            UI_ElementFactory__CreateDropdownSetting
                                      (pUVar19,(UI_ElementStyle_o *)__this_00,
                                       (Settings_BaseSetting_o *)pSVar6,pSVar13,pSVar15,
                                       (System_String_o *)"",170.0,40.0,300.0,
                                       (System_Nullable_float__o)0x0,pUVar14,(MethodInfo *)0x0);
                            if (*(int *)((long)&TypeInfo_HumanSetup[1].fields._currentCategoryPanel + 4) ==
                                0) {
                              il2cpp_init_class();
                            }
                            pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                                (TypeInfo_HumanSetup,"Hat",
                                                 *(int32_t *)
                                                  ((long)&((TypeInfo_HumanSetup[1].fields.
                                                           m_CancellationTokenSource)->fields).
                                                          _timer + 4),1,(MethodInfo *)pSVar15);
                            pUVar24 = (UI_CharacterEditorCostumePanel_o *)
                                      (__this->fields).SinglePanel;
                            pSVar5 = (set->fields).Hat;
                            pUVar23 = category;
                            pSVar13 = UI_UIManager__GetLocale
                                                ((System_String_o *)category,pSVar12,"Hat",
                                                 (System_String_o *)"",
                                                 (System_String_o *)"",(MethodInfo *)0x0);
                            pSVar20 = UI_CharacterEditorCostumePanel__GetIcons
                                                (pUVar23,pSVar15,method_05);
                            lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                            if (lVar17 != 0) {
                              pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                              pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                        il2cpp_runtime_glue(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateIconPickSetting
                                        ((UnityEngine_Transform_o *)pUVar24,
                                         (UI_ElementStyle_o *)__this_00,
                                         (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,pSVar20,
                                         pUVar7,(System_String_o *)"",
                                         (System_String_array *)0x0,170.0,40.0,pUVar14,
                                         (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                              pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                                  (pUVar24,"Head",
                                                   *(int32_t *)
                                                    &((TypeInfo_HumanSetup[1].fields.
                                                      m_CancellationTokenSource)->fields)._timer,1,
                                                   (MethodInfo *)pSVar15);
                              pUVar24 = (UI_CharacterEditorCostumePanel_o *)
                                        (__this->fields).SinglePanel;
                              pSVar5 = (set->fields).Head;
                              pUVar23 = category;
                              pSVar13 = UI_UIManager__GetLocale
                                                  ((System_String_o *)category,pSVar12,"Head",
                                                   (System_String_o *)"",
                                                   (System_String_o *)"",(MethodInfo *)0x0
                                                  );
                              pSVar20 = UI_CharacterEditorCostumePanel__GetIcons
                                                  (pUVar23,pSVar15,method_06);
                              lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                              if (lVar17 != 0) {
                                pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                                pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                          il2cpp_runtime_glue(TypeInfo_UnityAction);
                                UnityEngine_Events_UnityAction___ctor();
                                UI_ElementFactory__CreateIconPickSetting
                                          ((UnityEngine_Transform_o *)pUVar24,
                                           (UI_ElementStyle_o *)__this_00,
                                           (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,pSVar20,
                                           pUVar7,(System_String_o *)"",
                                           (System_String_array *)0x0,170.0,40.0,pUVar14,
                                           (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                                pSVar15 = UI_CharacterEditorCostumePanel__GetOptions
                                                    (pUVar24,"Back",
                                                     *(int32_t *)
                                                      ((long)&((TypeInfo_HumanSetup[1].fields.
                                                               m_CancellationTokenSource)->fields).
                                                              _executingCallback + 4),1,
                                                     (MethodInfo *)pSVar15);
                                pUVar19 = (__this->fields).SinglePanel;
                                pSVar5 = (set->fields).Back;
                                pUVar24 = category;
                                pSVar13 = UI_UIManager__GetLocale
                                                    ((System_String_o *)category,pSVar12,
                                                     "Back",(System_String_o *)"",
                                                     (System_String_o *)"",
                                                     (MethodInfo *)0x0);
                                pSVar20 = UI_CharacterEditorCostumePanel__GetIcons
                                                    (pUVar24,pSVar15,method_07);
                                lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                if (lVar17 != 0) {
                                  pUVar7 = *(UI_IconPickPopup_o **)(lVar17 + 0x50);
                                  pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor();
                                  UI_ElementFactory__CreateIconPickSetting
                                            (pUVar19,(UI_ElementStyle_o *)__this_00,
                                             (Settings_BaseSetting_o *)pSVar5,pSVar13,pSVar15,
                                             pSVar20,pUVar7,(System_String_o *)"",
                                             (System_String_array *)0x0,170.0,40.0,pUVar14,
                                             (UI_TooltipPopup_o *)0x0,(MethodInfo *)0x0);
                                  pUVar19 = (__this->fields).SinglePanel;
                                  pSVar8 = (set->fields).SkinColor;
                                  pSVar13 = UI_UIManager__GetLocale
                                                      ((System_String_o *)category,pSVar12,
                                                       "SkinColor",(System_String_o *)"",
                                                       (System_String_o *)"",
                                                       (MethodInfo *)0x0);
                                  lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                  if (lVar17 != 0) {
                                    pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                    pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                              il2cpp_runtime_glue(TypeInfo_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor();
                                    UI_ElementFactory__CreateColorSetting
                                              (pUVar19,(UI_ElementStyle_o *)__this_00,
                                               (Settings_BaseSetting_o *)pSVar8,pSVar13,pUVar9,
                                               (System_String_o *)"",90.0,30.0,pUVar14,
                                               (MethodInfo *)0x0);
                                    pUVar19 = (__this->fields).SinglePanel;
                                    pSVar8 = (set->fields).HairColor;
                                    pSVar13 = UI_UIManager__GetLocale
                                                        ((System_String_o *)category,pSVar12,
                                                         "HairColor",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",
                                                         (MethodInfo *)0x0);
                                    lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                    if (lVar17 != 0) {
                                      pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                      pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                il2cpp_runtime_glue(TypeInfo_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor();
                                      UI_ElementFactory__CreateColorSetting
                                                (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                 (Settings_BaseSetting_o *)pSVar8,pSVar13,pUVar9,
                                                 (System_String_o *)"",90.0,30.0,pUVar14,
                                                 (MethodInfo *)0x0);
                                      pUVar19 = (__this->fields).SinglePanel;
                                      pSVar8 = (set->fields).ShirtColor;
                                      pSVar13 = UI_UIManager__GetLocale
                                                          ((System_String_o *)category,pSVar12,
                                                           "ShirtColor",
                                                           (System_String_o *)"",
                                                           (System_String_o *)"",
                                                           (MethodInfo *)0x0);
                                      lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                      if (lVar17 != 0) {
                                        pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                        pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                  il2cpp_runtime_glue(TypeInfo_UnityAction);
                                        UnityEngine_Events_UnityAction___ctor();
                                        UI_ElementFactory__CreateColorSetting
                                                  (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                   (Settings_BaseSetting_o *)pSVar8,pSVar13,pUVar9,
                                                   (System_String_o *)"",90.0,30.0,pUVar14
                                                   ,(MethodInfo *)0x0);
                                        pUVar19 = (__this->fields).SinglePanel;
                                        pSVar8 = (set->fields).StrapsColor;
                                        pSVar13 = UI_UIManager__GetLocale
                                                            ((System_String_o *)category,pSVar12,
                                                             "StrapsColor",
                                                             (System_String_o *)"",
                                                             (System_String_o *)"",
                                                             (MethodInfo *)0x0);
                                        lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                        if (lVar17 != 0) {
                                          pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                          pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_glue(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          UI_ElementFactory__CreateColorSetting
                                                    (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                     (Settings_BaseSetting_o *)pSVar8,pSVar13,pUVar9
                                                     ,(System_String_o *)"",90.0,30.0,
                                                     pUVar14,(MethodInfo *)0x0);
                                          pUVar19 = (__this->fields).SinglePanel;
                                          pSVar8 = (set->fields).PantsColor;
                                          pSVar13 = UI_UIManager__GetLocale
                                                              ((System_String_o *)category,pSVar12,
                                                               "PantsColor",
                                                               (System_String_o *)"",
                                                               (System_String_o *)"",
                                                               (MethodInfo *)0x0);
                                          lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
                                          if (lVar17 != 0) {
                                            pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                            pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                      il2cpp_runtime_glue(TypeInfo_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor();
                                            UI_ElementFactory__CreateColorSetting
                                                      (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                       (Settings_BaseSetting_o *)pSVar8,pSVar13,
                                                       pUVar9,(System_String_o *)"",90.0,
                                                       30.0,pUVar14,(MethodInfo *)0x0);
                                            pUVar19 = (__this->fields).SinglePanel;
                                            pSVar8 = (set->fields).JacketColor;
                                            pSVar13 = UI_UIManager__GetLocale
                                                                ((System_String_o *)category,pSVar12
                                                                 ,"JacketColor",
                                                                 (System_String_o *)"",
                                                                 (System_String_o *)"",
                                                                 (MethodInfo *)0x0);
                                            lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28
                                                              );
                                            if (lVar17 != 0) {
                                              pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                              pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                        il2cpp_runtime_glue(TypeInfo_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor();
                                              UI_ElementFactory__CreateColorSetting
                                                        (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                         (Settings_BaseSetting_o *)pSVar8,pSVar13,
                                                         pUVar9,(System_String_o *)"",90.0
                                                         ,30.0,pUVar14,(MethodInfo *)0x0);
                                              pUVar19 = (__this->fields).SinglePanel;
                                              pSVar8 = (set->fields).BootsColor;
                                              pSVar12 = UI_UIManager__GetLocale
                                                                  ((System_String_o *)category,
                                                                   pSVar12,"BootsColor",
                                                                   (System_String_o *)"",
                                                                   (System_String_o *)"",
                                                                   (MethodInfo *)0x0);
                                              lVar17 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) +
                                                                0x28);
                                              if (lVar17 != 0) {
                                                pUVar9 = *(UI_ColorPickPopup_o **)(lVar17 + 0x48);
                                                pUVar14 = (UnityEngine_Events_UnityAction_o *)
                                                          il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateColorSetting
                                                          (pUVar19,(UI_ElementStyle_o *)__this_00,
                                                           (Settings_BaseSetting_o *)pSVar8,pSVar12,
                                                           pUVar9,(System_String_o *)"",
                                                           90.0,30.0,pUVar14,(MethodInfo *)0x0);
                                                *(undefined1 *)&(__this->fields)._isRebuildingPanel
                                                     = 0;
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
                            goto LAB_04030ae5;
                          }
                        }
                        goto LAB_04030a93;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_04030ae5;
          }
        }
LAB_04030a93:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
      uVar25 = 0;
      do {
        pUVar18 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)
                  il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
        UI_CharacterEditorCostumePanel_<>c__DisplayClass21_0___ctor(pUVar18,(MethodInfo *)0x0);
        if (pUVar18 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0)
        goto LAB_04030ae5;
        (pUVar18->fields).__4__this = __this;
        il2cpp_runtime_glue(&(pUVar18->fields).__4__this);
        if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_04030a93;
        (pUVar18->fields).button = *(System_String_o **)(lVar17 + 0x20 + uVar25 * 8);
        il2cpp_runtime_glue(&pUVar18->fields);
        pUVar19 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        pSVar13 = (pUVar18->fields).button;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar13 = UI_UIManager__GetLocaleCommon(pSVar13,(MethodInfo *)0x0);
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDefaultButton
                  (pUVar19,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,0.0,pUVar14,(MethodInfo *)0x0)
        ;
        uVar25 = uVar25 + 1;
      } while ((long)uVar25 < (long)*(int *)(lVar17 + 0x18));
      goto LAB_0402f370;
    }
    pUVar18 = (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
    UI_CharacterEditorCostumePanel_<>c__DisplayClass21_0___ctor(pUVar18,(MethodInfo *)0x0);
    if (pUVar18 == (UI_CharacterEditorCostumePanel___c__DisplayClass21_0_o *)0x0) goto LAB_04030ae5;
    (pUVar18->fields).__4__this = __this;
    il2cpp_runtime_glue(&(pUVar18->fields).__4__this);
    iVar3 = *(int *)(lVar17 + 0x18);
joined_r0x04030a91:
    if (iVar3 == 0) goto LAB_04030a93;
    (pUVar18->fields).button = (System_String_o *)*puVar1;
    il2cpp_runtime_glue(&pUVar18->fields);
  }
LAB_04030ae5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetOptions (UI_CharacterEditorCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x4030af0

System_String_array *
UI_CharacterEditorCostumePanel__GetOptions
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool_conflict includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  int local_2c;
  
  if (DAT_05704361 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"None");
    DAT_05704361 = '\x01';
  }
  local_2c = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if ((char)includeNone != '\0') {
    pSVar5 = System_String__Concat(prefix,"None",(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_04030cd7;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto LAB_04030cd7;
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)pSVar5,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (options < 1) {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_04030cd7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    local_2c = 0;
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      pSVar5 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      System_String__Concat(prefix,pSVar5,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar5 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(prefix,pSVar5,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_04030cd7;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)pSVar5,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      local_2c = local_2c + 1;
    } while (local_2c < options);
  }
  pSVar6 = (System_String_array *)
           System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
  return pSVar6;
}


// UI.CharacterEditorCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetHairOptions (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4030f00

System_String_array *
UI_CharacterEditorCostumePanel__GetHairOptions
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_38;
  
  if (DAT_05704362 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"HairF");
    il2cpp_init_method_metadata(&"HairM");
    DAT_05704362 = '\x01';
  }
  local_38 = 0;
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar8 = 0;
    local_38 = local_38 & 0xffffffff;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto LAB_04031031;
    while (il2cpp_init_class(), iVar8 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c)) {
      while( true ) {
        pSVar5 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat("HairM",pSVar5,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_04031207;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar8 = local_38._4_4_ + 1;
        local_38 = CONCAT44(iVar8,(int)local_38);
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) break;
LAB_04031031:
        if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c) <= iVar8) goto LAB_04031090;
      }
    }
LAB_04031090:
    iVar8 = 0;
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto LAB_040310ff;
    while (il2cpp_init_class(), iVar8 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30)) {
      while( true ) {
        pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat("HairF",pSVar5,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_04031207;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar5;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)pSVar5,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        iVar8 = (int)local_38 + 1;
        local_38 = CONCAT44(local_38._4_4_,iVar8);
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) break;
LAB_040310ff:
        if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30) <= iVar8) goto LAB_0403115e;
      }
    }
LAB_0403115e:
    pSVar6 = (System_String_array *)
             System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
    return pSVar6;
  }
  local_38 = local_38 & 0xffffffff;
  if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c) < 1) {
    local_38 = local_38 & 0xffffffff00000000;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30) < 1) goto LAB_04031207;
    pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    puVar7 = &"HairF";
  }
  else {
    pSVar5 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
    puVar7 = &"HairM";
  }
  System_String__Concat((System_String_o *)*puVar7,pSVar5,(MethodInfo *)0x0);
LAB_04031207:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$GetCostumeOptions
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetCostumeOptions (UI_CharacterEditorCostumePanel_o* __this, Settings_HumanCustomSet_o* set, const MethodInfo* method);
// 0x4031210

System_String_array *
UI_CharacterEditorCostumePanel__GetCostumeOptions
          (UI_CharacterEditorCostumePanel_o *__this,Settings_HumanCustomSet_o *set,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_IntSetting_o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 local_38;
  
  if (DAT_05704363 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"CostumeM");
    il2cpp_init_method_metadata(&"CostumeF");
    DAT_05704363 = '\x01';
  }
  local_38 = 0;
  if ((set != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar3 = (set->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    iVar9 = (pSVar3->fields)._value;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
    if (iVar9 == 0) {
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar9 = 0;
        local_38 = local_38 & 0xffffffff;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto LAB_04031461;
        while (il2cpp_init_class(), iVar9 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24)) {
          while( true ) {
            pSVar6 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat("CostumeM",pSVar6,(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_04031573;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pSVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            iVar9 = local_38._4_4_ + 1;
            local_38 = CONCAT44(iVar9,(int)local_38);
            if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) break;
LAB_04031461:
            if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24) <= iVar9) goto LAB_040314c0;
          }
        }
        goto LAB_040314c0;
      }
      local_38 = local_38 & 0xffffffff;
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24) < 1) goto LAB_04031573;
      pSVar6 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
      puVar8 = &"CostumeM";
    }
    else {
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar9 = 0;
        local_38 = (ulong)local_38._4_4_ << 0x20;
        if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto LAB_0403136f;
        while (il2cpp_init_class(), iVar9 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28)) {
          while( true ) {
            pSVar6 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat("CostumeF",pSVar6,(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_04031573;
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)pSVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
            iVar9 = (int)local_38 + 1;
            local_38 = CONCAT44(local_38._4_4_,iVar9);
            if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) break;
LAB_0403136f:
            if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28) <= iVar9) goto LAB_040314c0;
          }
        }
LAB_040314c0:
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar7;
      }
      local_38 = (ulong)local_38._4_4_ << 0x20;
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (*(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28) < 1) goto LAB_04031573;
      pSVar6 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
      puVar8 = &"CostumeF";
    }
    System_String__Concat((System_String_o *)*puVar8,pSVar6,(MethodInfo *)0x0);
  }
LAB_04031573:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorCostumePanel__GetIcons (UI_CharacterEditorCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x4030d00

System_String_array *
UI_CharacterEditorCostumePanel__GetIcons
          (UI_CharacterEditorCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  ulong uVar8;
  
  if (DAT_05704364 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"/Human/Previews/");
    DAT_05704364 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_String);
  if (options != (System_String_array *)0x0) {
    iVar5 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      if (iVar5 < 1) {
LAB_04030e87:
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List<object>__ToArray(__this_00,MethodInfo_String___ToArray);
        return pSVar7;
      }
      uVar8 = 0;
      if ((options->max_length & 0xffffffff) != 0) {
        do {
          pSVar6 = options->m_Items[uVar8];
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar6 = System_String__Concat
                             (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/"
                              ,pSVar6,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_04030ef0;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar8 = uVar8 + 1;
          uVar2 = (uint)options->max_length;
          if ((long)(int)uVar2 <= (long)uVar8) goto LAB_04030e87;
        } while (uVar8 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < iVar5) {
      pSVar6 = options->m_Items[0];
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      System_String__Concat
                (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8),"/Human/Previews/",pSVar6,
                 (MethodInfo *)0x0);
    }
  }
LAB_04030ef0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$OnSexChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnSexChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4031580

void UI_CharacterEditorCostumePanel__OnSexChanged
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  UI_CharacterEditorMenu_o *pUVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Characters_DummyHuman_o *__this_03;
  bool_conflict bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  undefined8 *puVar8;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_04;
  
  if (DAT_05704365 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"HairM0");
    il2cpp_init_method_metadata(&"HairF0");
    DAT_05704365 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar3 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar7 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar7 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar7);
    }
    if ((pSVar7[1].klass != (Settings_BaseSetSetting_c *)0x0) &&
       (__this_01 = pSVar7[1].fields.Name, __this_01 != (Settings_StringSetting_o *)0x0)) {
      if (*(int *)((long)&((pSVar7[1].klass)->_1).name + 4) == 0) {
        puVar8 = &"HairM0";
      }
      else {
        puVar8 = &"HairF0";
      }
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*puVar8,MethodInfo_Void_set_Value);
      __this_02 = pSVar7[1].fields.Preset;
      if (__this_02 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,0,MethodInfo_Void_set_Value);
        pUVar4 = (__this->fields)._menu;
        if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar4->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar4,1,(pUVar4->klass->vtable)._8_RebuildPanels.method);
          pUVar4 = (__this->fields)._menu;
          if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar4->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar4,1,(pUVar4->klass->vtable)._9_ResetCharacter.method);
            if (DAT_05704371 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
              DAT_05704371 = '\x01';
            }
            if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
              if (DAT_05704372 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                DAT_05704372 = '\x01';
                cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
              }
              else {
                cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
              }
              if (cVar2 == '\0') {
                return;
              }
            }
            pUVar4 = (__this->fields)._menu;
            if ((pUVar4 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar5 = (pUVar4->fields)._gameManager,
               pGVar5 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar5->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if (__this_03 == (Characters_DummyHuman_o *)0x0) goto LAB_04031846;
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
              }
              if (DAT_05704368 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                DAT_05704368 = '\x01';
              }
              __this_04 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                          il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterReset_d__29);
              UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
                        (__this_04,0,(MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this,
                         (System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_04031846:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorCostumePanel__OnCustomSetSelected (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x40318a0

void UI_CharacterEditorCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **ppSVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar5;
  System_String_o *b;
  UI_CharacterEditorMenu_o *pUVar6;
  UI_MessagePopup_o *x;
  UI_PresetSkinEditPopup_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_MonoBehaviour_o *__this_02;
  UI_CharacterEditorHumanMenu_o *pUVar8;
  bool_conflict bVar9;
  Settings_BaseSetSetting_o *pSVar10;
  char *pcVar11;
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_03;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *pUVar12;
  UI_CharacterEditorMenu_o *x_00;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  bool bVar13;
  
  if (DAT_05704366 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704366 = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar4 == 0) ||
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
      __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
     (pSVar10 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar10 == (Settings_BaseSetSetting_o *)0x0)) goto LAB_04031df3;
  bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
  if (((pSVar10->klass->_2).naturalAligment < bVar2) ||
     ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pSVar10);
  }
  pSVar5 = (pSVar10->fields).UniqueId;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto LAB_04031df3;
  b = (pSVar5->fields)._value;
  ppSVar1 = &(__this->fields)._previousProfileId;
  bVar9 = System_String__op_Equality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0);
  if (((char)bVar9 != '\0') && (*ppSVar1 != (System_String_o *)0x0)) {
    return;
  }
  pUVar6 = (__this->fields)._menu;
  if (pUVar6 == (UI_CharacterEditorMenu_o *)0x0) {
LAB_04031a12:
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar6->klass->_2).naturalAligment < bVar2) goto LAB_04031a12;
    x_00 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      x_00 = pUVar6;
    }
    iVar3 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (x_00 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_04031df3;
    x = x_00[1].fields.MessagePopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      __this_01 = (UI_PresetSkinEditPopup_o *)x_00[1].fields.MessagePopup;
      if (__this_01 == (UI_PresetSkinEditPopup_o *)0x0) goto LAB_04031df3;
      if ((char)(__this_01->fields).IsActive != '\0') {
        UI_PresetSkinEditPopup__OnCancelClick(__this_01,(MethodInfo *)0x0);
      }
    }
  }
  pUVar6 = (__this->fields)._menu;
  if (pUVar6 == (UI_CharacterEditorMenu_o *)0x0) {
LAB_04031df3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar6->klass->vtable)._8_RebuildPanels.methodPtr)
            (pUVar6,1,(pUVar6->klass->vtable)._8_RebuildPanels.method);
  pUVar6 = (__this->fields)._menu;
  if (pUVar6 == (UI_CharacterEditorMenu_o *)0x0) goto LAB_04031df3;
  (*(pUVar6->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar6,1,(pUVar6->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  pcVar11 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
  bVar13 = true;
  if (*pcVar11 == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      pcVar11 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
    }
    bVar13 = pcVar11[1] != '\0';
    pSVar7 = *ppSVar1;
  }
  else {
    pSVar7 = *ppSVar1;
  }
  if ((pSVar7 != (System_String_o *)0x0) &&
     (bVar9 = System_String__op_Inequality(pSVar7,b,(MethodInfo *)0x0), (char)bVar9 != '\0')) {
    __this_02 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
      bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if (((__this_02->klass->_2).naturalAligment < bVar2) ||
         ((__this_02->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_02);
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pSVar7 = *ppSVar1;
      if (DAT_05704367 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__2);
        DAT_05704367 = '\x01';
      }
      __this_03 = (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o
                   *)il2cpp_runtime_glue(TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__2);
      UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28___ctor
                (__this_03,0,(MethodInfo *)0x0);
      if (__this_03 !=
          (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)0x0)
      {
        (__this_03->fields).__4__this = __this;
        il2cpp_runtime_glue(&(__this_03->fields).__4__this,__this);
        (__this_03->fields).previousProfileId = pSVar7;
        il2cpp_runtime_glue(&(__this_03->fields).previousProfileId);
        *(bool *)&(__this_03->fields).shouldApplySkinPreview = bVar13;
        if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine
                    (__this_02,(System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
          goto LAB_04031dd6;
        }
      }
      goto LAB_04031df3;
    }
    goto LAB_04031dd6;
  }
  if ((char)(__this->fields)._shouldGeneratePreviewAfterRebuild == '\0') {
    if (bVar13 != false) {
      if (DAT_05704368 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
        DAT_05704368 = '\x01';
      }
      pUVar12 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterReset_d__29);
      UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
                (pUVar12,0,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar12,
                 (MethodInfo *)0x0);
    }
    goto LAB_04031dd6;
  }
  *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 0;
  if (bVar13 != false) {
    if (DAT_05704368 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
      DAT_05704368 = '\x01';
    }
    pUVar12 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterReset_d__29);
    UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
              (pUVar12,0,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar12,
               (MethodInfo *)0x0);
  }
  pUVar8 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
    if (pUVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) goto LAB_04031d9e;
LAB_04031db4:
    humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    if (pUVar8 == (UI_CharacterEditorHumanMenu_o *)0x0) goto LAB_04031db4;
LAB_04031d9e:
    bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((((UI_CharacterEditorMenu_c *)pUVar8->klass)->_2).naturalAligment < bVar2)
    goto LAB_04031db4;
    humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
    if ((((UI_CharacterEditorMenu_c *)pUVar8->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        TypeInfo_CharacterEditorHumanMenu) {
      humanMenu = pUVar8;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,1,(MethodInfo *)0x0);
LAB_04031dd6:
  *ppSVar1 = b;
  il2cpp_runtime_glue(ppSVar1,b);
  return;
}


// UI.CharacterEditorCostumePanel$$CapturePreviousProfilePreviewAndApplySkins
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins (UI_CharacterEditorCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, bool shouldApplySkinPreview, const MethodInfo* method);
// 0x4031e10

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins
          (UI_CharacterEditorCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,bool_conflict shouldApplySkinPreview,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *__this_00;
  
  if (DAT_05704367 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__2);
    DAT_05704367 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)
              il2cpp_runtime_glue(TypeInfo_CapturePreviousProfilePreviewAndApplySkins_d__2);
  UI_CharacterEditorCostumePanel_<CapturePreviousProfilePreviewAndApplySkins>d__28___ctor
            (__this_00,0,(MethodInfo *)0x0);
  if (__this_00 !=
      (UI_CharacterEditorCostumePanel__CapturePreviousProfilePreviewAndApplySkins_d__28_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    il2cpp_runtime_glue(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).previousProfileId = previousProfileId;
    il2cpp_runtime_glue(&(__this_00->fields).previousProfileId,previousProfileId);
    *(char *)&(__this_00->fields).shouldApplySkinPreview = (char)shouldApplySkinPreview;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4031860

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_00;
  
  if (DAT_05704368 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
    DAT_05704368 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterReset_d__29);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
            (__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorCostumePanel__OnCharacterChanged (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4031ea0

void UI_CharacterEditorCostumePanel__OnCharacterChanged
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterCostumeChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4031f90

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4031fd0

void UI_CharacterEditorCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  
  if (DAT_0570436a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    DAT_0570436a = '\x01';
  }
  pUVar2 = (UI_CharacterEditorHumanMenu_o *)(__this->fields)._menu;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).naturalAligment) {
      humanMenu = (UI_CharacterEditorHumanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          TypeInfo_CharacterEditorHumanMenu) {
        humanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,0,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
            ((UI_CharacterEditorHumanMenu_o *)0x0,0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorCostumePanel__OnButtonClick (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4032070

void UI_CharacterEditorCostumePanel__OnButtonClick
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar5;
  System_Collections_Generic_List_BasePopup__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  UI_ExportPopup_o *__this_03;
  Settings_SetSettingsContainer_T__o *pSVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ExternalLinkPopup_o *pUVar10;
  UI_BasePopup_array *__this_04;
  char cVar11;
  uint32_t uVar12;
  bool_conflict bVar13;
  MethodInfo *in_RAX;
  UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *__this_05;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  long *plVar15;
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this_06;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  Settings_BaseSetSetting_o *pSVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  Settings_HumanCustomSet_o *customSet;
  int32_t weapon;
  UI_CharacterEditorCostumePanel_o *__this_07;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  System_String_o **ppSVar20;
  UI_ConfirmPopup_o *__this_08;
  undefined1 auVar21 [16];
  
  if (DAT_0570436b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_CanDeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_String___GetSetNames);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__33_6);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__1);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__2);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__3);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__4);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnButtonClick_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"QuitWithoutSaveConfirm");
    il2cpp_init_method_metadata(&"Presets");
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"SaveQuit");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"DeleteWarning");
    il2cpp_init_method_metadata(&"Import");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Export");
    il2cpp_init_method_metadata(&"New set");
    DAT_0570436b = '\x01';
  }
  __this_05 = (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass33_0);
  UI_CharacterEditorCostumePanel_<>c__DisplayClass33_0___ctor(__this_05,(MethodInfo *)0x0);
  if (__this_05 == (UI_CharacterEditorCostumePanel___c__DisplayClass33_0_o *)0x0) goto LAB_04032d3c;
  (__this_05->fields).__4__this = __this;
  il2cpp_runtime_glue(&__this_05->fields,__this);
  ppSVar20 = &(__this_05->fields).name;
  (__this_05->fields).name = name;
  il2cpp_runtime_glue(ppSVar20);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar4 == 0) goto LAB_04032d3c;
  __this_00 = *(UI_SetNamePopup_o **)(lVar4 + 0x88);
  pSVar16 = *ppSVar20;
  uVar12 = <PrivateImplementationDetails>__ComputeStringHash(pSVar16,(MethodInfo *)0x0);
  if (uVar12 < 0x5cb46bab) {
    if (uVar12 < 0x573e0af5) {
      if (uVar12 != 0x547f6497) {
        if (uVar12 != 0x573e0af4) {
          return;
        }
        bVar13 = System_String__op_Equality(pSVar16,"Import",(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_01 = *(UI_ImportPopup_o **)(lVar3 + 0x70);
          pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_01 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show(__this_01,pUVar14,1,"",in_R8);
            return;
          }
        }
        goto LAB_04032d3c;
      }
      bVar13 = System_String__op_Equality(pSVar16,"SaveQuit",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (plVar15 == (long *)0x0) goto LAB_04032d3c;
      (**(code **)(*plVar15 + 0x238))(plVar15,*(undefined8 *)(*plVar15 + 0x240));
      plVar15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (plVar15 == (long *)0x0) goto LAB_04032d3c;
      (**(code **)(*plVar15 + 0x238))();
      __this_07 = *(UI_CharacterEditorCostumePanel_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (__this_07 != (UI_CharacterEditorCostumePanel_o *)0x0) {
        bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
        if (((__this_07->klass->_2).naturalAligment < bVar1) ||
           ((__this_07->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_07);
        }
        pSVar6 = (__this_07->fields)._popups;
        if (pSVar6 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
          bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
          if ((bVar1 <= (pSVar6->klass->_2).naturalAligment) &&
             ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman)) {
            lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if ((lVar3 == 0) ||
               (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
               pSVar8 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04032d3c;
            customSet = (Settings_HumanCustomSet_o *)
                        Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar8,MethodInfo_BaseSetSetting_GetSelectedSet);
            if (customSet != (Settings_HumanCustomSet_o *)0x0) {
              bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
              if (((customSet->klass->_2).naturalAligment < bVar1) ||
                 ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
              goto LAB_04032d41;
            }
            pUVar9 = (__this->fields)._menu;
            weapon = 0;
            if (pUVar9 != (UI_CharacterEditorMenu_o *)0x0) {
              bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
              weapon = 0;
              if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
                 ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu)) {
                pUVar10 = pUVar9[1].fields.ExternalLinkPopup;
                if (pUVar10 == (UI_ExternalLinkPopup_o *)0x0) goto LAB_04032d3c;
                weapon = *(int32_t *)((long)&(pUVar10->fields).m_CachedPtr + 4);
              }
            }
            __this_04 = pSVar6[1].fields._items;
            if (__this_04 == (UI_BasePopup_array *)0x0) goto LAB_04032d3c;
            Characters_HumanSetup__Load
                      ((Characters_HumanSetup_o *)__this_04,customSet,weapon,0,(MethodInfo *)0x0);
            if (DAT_0570436d == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
              DAT_0570436d = '\x01';
            }
            __this_06 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
                        il2cpp_runtime_glue(TypeInfo_SaveQuitCaptureCoroutine_d__35);
            UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35___ctor
                      (__this_06,0,(MethodInfo *)0x0);
            goto LAB_040327c8;
          }
        }
      }
      if (DAT_0570436d == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
        DAT_0570436d = '\x01';
      }
      __this_06 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
                  il2cpp_runtime_glue(TypeInfo_SaveQuitCaptureCoroutine_d__35);
      UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35___ctor
                (__this_06,0,(MethodInfo *)0x0);
      __this_07 = __this;
LAB_040327c8:
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this_07,
                 (System_Collections_IEnumerator_o *)__this_06,(MethodInfo *)0x0);
      return;
    }
    if (uVar12 != 0x5797ea6a) {
      if ((uVar12 != 0x5cb46baa) ||
         (bVar13 = System_String__op_Equality(pSVar16,"LoadPreset",(MethodInfo *)0x0),
         (char)bVar13 == '\0')) {
        return;
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if ((lVar3 != 0) &&
         (pSVar8 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x28),
         pSVar8 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        collection = Settings_SetSettingsContainer<object>__GetSetNames(pSVar8,MethodInfo_String___GetSetNames);
        items = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)items,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar3 != 0) {
          __this_02 = *(UI_SelectListPopup_o **)(lVar3 + 0x90);
          pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if (__this_02 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (__this_02,items,"Presets",pUVar14,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Collections_Generic_List_string__o *)0x0,in_RAX);
            return;
          }
        }
      }
      goto LAB_04032d3c;
    }
    bVar13 = System_String__op_Equality(pSVar16,"Delete",(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if ((lVar3 == 0) ||
       (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
        (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04032d3c;
    bVar13 = Settings_SetSettingsContainer<object>__CanDeleteSelectedSet
                       (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_Boolean_CanDeleteSelectedSet);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_04032d3c;
    __this_08 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
    pSVar16 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    pSVar17 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
    if (__this_08 == (UI_ConfirmPopup_o *)0x0) goto LAB_04032d3c;
    goto LAB_04032abe;
  }
  if (uVar12 < 0x990de47e) {
    if (uVar12 == 0x990de47d) {
      ppSVar20 = &"Create";
      bVar13 = System_String__op_Equality(pSVar16,"Create",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    }
    else {
      if (uVar12 != 0x658f3664) {
        return;
      }
      ppSVar20 = &"Copy";
      bVar13 = System_String__op_Equality(pSVar16,"Copy",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    }
    UnityEngine_Events_UnityAction___ctor();
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar17 = UI_UIManager__GetLocaleCommon(*ppSVar20,(MethodInfo *)0x0);
    pSVar16 = "New set";
joined_r0x04032847:
    if (__this_00 != (UI_SetNamePopup_o *)0x0) {
      UI_SetNamePopup__Show(__this_00,pSVar16,pUVar14,pSVar17,(System_String_o *)0x0,in_R9);
      return;
    }
    goto LAB_04032d3c;
  }
  if (uVar12 != 0xc7b3d356) {
    if (uVar12 == 0xc80631f3) {
      bVar13 = System_String__op_Equality(pSVar16,"Rename",(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        return;
      }
      if ((((lVar3 == 0) ||
           (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
            (Settings_SetSettingsContainer_T__o *)0x0)) ||
          (pSVar18 = Settings_SetSettingsContainer<object>__GetSelectedSet
                               (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet)
          , pSVar18 == (Settings_BaseSetSetting_o *)0x0)) ||
         (pSVar7 = (pSVar18->fields).Name, pSVar7 == (Settings_StringSetting_o *)0x0))
      goto LAB_04032d3c;
      pSVar16 = (pSVar7->fields)._value;
      pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar17 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
      goto joined_r0x04032847;
    }
    if (uVar12 != 0xe86349d3) {
      return;
    }
    bVar13 = System_String__op_Equality(pSVar16,"Export",(MethodInfo *)0x0);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (((lVar3 == 0) ||
        (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20) ==
         (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (customSet = (Settings_HumanCustomSet_o *)
                    Settings_SetSettingsContainer<object>__GetSelectedSet
                              (*(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),MethodInfo_BaseSetSetting_GetSelectedSet),
       customSet == (Settings_HumanCustomSet_o *)0x0)) goto LAB_04032d3c;
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((((Settings_BaseSetSetting_c *)customSet->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_BaseSetSetting_c *)customSet->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_HumanCustomSet)) {
LAB_04032d41:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(customSet);
    }
    pSVar5 = (Settings_BaseSetSetting_c *)customSet->klass;
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar5->_2).naturalAligment < bVar1) ||
       ((pSVar5->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto LAB_04032d41;
    plVar15 = (long *)(*(pSVar5->vtable)._5_SerializeToJsonObject.methodPtr)
                                (customSet,(pSVar5->vtable)._5_SerializeToJsonObject.method);
    if (plVar15 == (long *)0x0) goto LAB_04032d3c;
    cVar11 = (**(code **)(*plVar15 + 0x2f8))(plVar15,"Preset",*(undefined8 *)(*plVar15 + 0x300))
    ;
    if (cVar11 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto LAB_04032b36;
LAB_04032681:
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit(0,(MethodInfo *)0x0);
      (**(code **)(*plVar15 + 0x1b8))
                (plVar15,"Preset",pSVar19,*(undefined8 *)(*plVar15 + 0x1c0));
      if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto LAB_04032681;
LAB_04032b36:
      il2cpp_init_class();
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (lVar3 != 0) {
      __this_03 = *(UI_ExportPopup_o **)(lVar3 + 0x68);
      auVar21 = (**(code **)(*plVar15 + 0x318))(plVar15,4,*(undefined8 *)(*plVar15 + 800));
      if (__this_03 != (UI_ExportPopup_o *)0x0) {
        UI_ExportPopup__Show(__this_03,auVar21._0_8_,auVar21._8_8_);
        return;
      }
    }
    goto LAB_04032d3c;
  }
  bVar13 = System_String__op_Equality(pSVar16,"Quit",(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar3 == 0) goto LAB_04032d3c;
  __this_08 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
  pSVar16 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar14 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pUVar14 != (UnityEngine_Events_UnityAction_o *)0x0) goto LAB_04032a93;
LAB_04032bad:
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(UnityEngine_Events_UnityAction_o **)(lVar3 + 8) = pUVar14;
    il2cpp_runtime_glue(lVar3 + 8);
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    pUVar14 = *(UnityEngine_Events_UnityAction_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pUVar14 == (UnityEngine_Events_UnityAction_o *)0x0) goto LAB_04032bad;
LAB_04032a93:
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar17 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  if (__this_08 != (UI_ConfirmPopup_o *)0x0) {
LAB_04032abe:
    UI_ConfirmPopup__Show(__this_08,pSVar16,pUVar14,pSVar17,in_R8);
    return;
  }
LAB_04032d3c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4032da0

void UI_CharacterEditorCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  long *plVar5;
  System_String_o *pSVar6;
  System_String_o *a;
  Settings_BoolSetting_o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar8;
  int iVar9;
  VirtualInvokeData *pVVar10;
  Settings_BaseSetSetting_o *pSVar11;
  Settings_ListSetting_T__c *pSVar12;
  undefined8 *puVar13;
  char *pcVar14;
  System_Collections_Generic_List_object__o *__this_03;
  char cVar15;
  Il2CppRuntimeInterfaceOffsetPair *pIVar16;
  Settings_ListSetting_T__o *pSVar17;
  MethodInfo *method_00;
  long lVar18;
  long lVar19;
  Settings_IntSetting_o *pSVar20;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar21;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_0570436c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_Void_CopySelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_CreateSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_DeleteSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Create");
    il2cpp_init_method_metadata(&"LoadPreset");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"Rename");
    il2cpp_init_method_metadata(&"Import");
    DAT_0570436c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if ((lVar18 == 0) || (lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar19 == 0))
  goto LAB_040338a8;
  lVar18 = *(long *)(lVar18 + 0x88);
  __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar19 + 0x20);
  bVar8 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    bVar8 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
        Settings_SetSettingsContainer<object>__DeleteSelectedSet(__this_00,MethodInfo_Void_DeleteSelectedSet);
        pSVar20 = (__this_00->fields).SelectedSetIndex;
        if (pSVar20 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting<int>__set_Value
                    ((Settings_TypedSetting_int__o *)pSVar20,0,MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto LAB_040331fc;
        }
      }
      goto LAB_040338a8;
    }
    bVar8 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if ((((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
           (pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
           pSVar11 != (Settings_BaseSetSetting_o *)0x0)) && (lVar18 != 0)) &&
         ((*(long *)(lVar18 + 0xb8) != 0 &&
          (pSVar4 = (pSVar11->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
        method_00 = *(MethodInfo **)(*(long *)(lVar18 + 0xb8) + 0x18);
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
        goto LAB_040331fc;
      }
      goto LAB_040338a8;
    }
    bVar8 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__op_Equality(name,"LoadPreset",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if ((((__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) &&
             (pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                                  (__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
             pSVar11 != (Settings_BaseSetSetting_o *)0x0)) &&
            ((pSVar4 = (pSVar11->fields).Name, pSVar4 != (Settings_StringSetting_o *)0x0 &&
             ((lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar18 != 0 &&
              (lVar18 = *(long *)(lVar18 + 0x28), lVar18 != 0)))))) &&
           (plVar5 = *(long **)(lVar18 + 0x28), plVar5 != (long *)0x0)) {
          pSVar6 = (pSVar4->fields)._value;
          lVar18 = *plVar5;
          if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar19) == TypeInfo_IListSetting) {
                puVar13 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar19) + 2) * 0x10 +
                           lVar18 + 0x138);
                goto LAB_040334b4;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar19);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IListSetting,2);
LAB_040334b4:
          __this_03 = (System_Collections_Generic_List_object__o *)
                      (*(code *)*puVar13)(plVar5,puVar13[1]);
          if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List<object>__GetEnumerator(&local_48,__this_03,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn)
            ;
            pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
            while (__this_01.fields._8_8_ = __this,
                  __this_01.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
                  __this_01.fields._current = (Il2CppObject *)pSVar21,
                  bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                  (char)bVar8 != '\0') {
              if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
              if ((((local_48.fields._current)->klass->_2).naturalAligment < bVar1) ||
                 (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(local_48.fields._current);
              }
              if (local_48.fields._current[2].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              a = (System_String_o *)((local_48.fields._current[2].klass)->_1).namespaze;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              lVar18 = *(long *)(lVar18 + 0x90);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              lVar18 = *(long *)(lVar18 + 0x138);
              if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar8 = System_String__op_Equality
                                (a,*(System_String_o **)(lVar18 + 0x18),(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                                    (__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                (*(pSVar11->klass->vtable)._9_Copy.methodPtr)
                          (pSVar11,local_48.fields._current,(pSVar11->klass->vtable)._9_Copy.method)
                ;
                pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                                    (__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar7 = (pSVar11->fields).Preset;
                if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Settings_TypedSetting<bool>__set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar7,0,MethodInfo_Void_set_Value);
                pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet
                                    (__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
                if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar4 = (pSVar11->fields).Name;
                if (pSVar4 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Settings_TypedSetting<object>__set_Value
                          ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Value)
                ;
              }
            }
            __this_02.fields._8_8_ = __this;
            __this_02.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
            __this_02.fields._current = (Il2CppObject *)pSVar21;
            method_00 = MethodInfo_Void_Dispose;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
            goto LAB_040331fc;
          }
        }
        goto LAB_040338a8;
      }
      method_00 = "Import";
      bVar8 = System_String__op_Equality(name,(System_String_o *)"Import",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar18 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (lVar18 != 0) {
          plVar5 = *(long **)(lVar18 + 0x70);
          if (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
          if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (pSVar11->fields).Name;
          if (pSVar4 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = (pSVar4->fields)._value;
          pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (plVar5[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*(pSVar11->klass->vtable)._8_DeserializeFromJsonString.methodPtr)
                    (pSVar11,*(undefined8 *)(plVar5[0x19] + 0x18),
                     (pSVar11->klass->vtable)._8_DeserializeFromJsonString.method);
          pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
          if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar7 = (pSVar11->fields).Preset;
          if (pSVar7 == (Settings_BoolSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Settings_TypedSetting<bool>__set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar7,0,MethodInfo_Void_set_Value);
          pSVar11 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
          if (pSVar11 == (Settings_BaseSetSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (pSVar11->fields).Name;
          if (pSVar4 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Value);
          method_00 = *(MethodInfo **)(*plVar5 + 0x2a0);
          (**(code **)(*plVar5 + 0x298))(plVar5);
          if (DAT_05704371 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
            DAT_05704371 = '\x01';
          }
          pcVar14 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
          cVar15 = '\x01';
          if (*pcVar14 == '\0') {
            if (DAT_05704372 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
              DAT_05704372 = '\x01';
              pcVar14 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            }
            cVar15 = pcVar14[1];
          }
          if (__this != (UI_CharacterEditorCostumePanel_o *)0x0) {
            *(char *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = cVar15;
            goto LAB_040331fc;
          }
        }
        goto LAB_040338a8;
      }
      goto LAB_040331fc;
    }
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0xb8) == 0)) ||
       (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_040338a8;
    Settings_SetSettingsContainer<object>__CopySelectedSet
              (__this_00,*(System_String_o **)(*(long *)(lVar18 + 0xb8) + 0x18),MethodInfo_Void_CopySelectedSet);
    pSVar17 = (__this_00->fields).Sets;
    if (pSVar17 == (Settings_ListSetting_T__o *)0x0) goto LAB_040338a8;
    pSVar20 = (__this_00->fields).SelectedSetIndex;
    pSVar12 = pSVar17->klass;
    uVar3._0_1_ = (pSVar12->_2).rank;
    uVar3._1_1_ = (pSVar12->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar16 = (pSVar12->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar16->interfaceType + lVar18) == TypeInfo_IListSetting) goto LAB_040331b4;
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar18);
    }
  }
  else {
    if (((lVar18 == 0) || (*(long *)(lVar18 + 0xb8) == 0)) ||
       (__this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_040338a8;
    Settings_SetSettingsContainer<object>__CreateSet
              (__this_00,*(System_String_o **)(*(long *)(lVar18 + 0xb8) + 0x18),MethodInfo_Void_CreateSet);
    pSVar17 = (__this_00->fields).Sets;
    if (pSVar17 == (Settings_ListSetting_T__o *)0x0) goto LAB_040338a8;
    pSVar20 = (__this_00->fields).SelectedSetIndex;
    pSVar12 = pSVar17->klass;
    uVar2._0_1_ = (pSVar12->_2).rank;
    uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar16 = (pSVar12->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar16->interfaceType + lVar18) == TypeInfo_IListSetting) goto LAB_040331b4;
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar18);
    }
  }
  pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar17,TypeInfo_IListSetting,0);
LAB_040331c7:
  iVar9 = (*pVVar10->methodPtr)(pSVar17,pVVar10->method);
  if (pSVar20 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar9 - 1U);
    Settings_TypedSetting<int>__set_Value
              ((Settings_TypedSetting_int__o *)pSVar20,iVar9 - 1U,MethodInfo_Void_set_Value);
    *(undefined1 *)&(__this->fields)._shouldGeneratePreviewAfterRebuild = 1;
LAB_040331fc:
    UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,method_00);
    return;
  }
LAB_040338a8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
LAB_040331b4:
  pVVar10 = &(pSVar12->vtable)._0_Equals + *(int *)((long)&pIVar16->offset + lVar18);
  goto LAB_040331c7;
}


// UI.CharacterEditorCostumePanel$$SaveQuitCaptureCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4032d60

System_Collections_IEnumerator_o *
UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine
          (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *__this_00;
  
  if (DAT_0570436d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SaveQuitCaptureCoroutine_d__35);
    DAT_0570436d = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__SaveQuitCaptureCoroutine_d__35_o *)
              il2cpp_runtime_glue(TypeInfo_SaveQuitCaptureCoroutine_d__35);
  UI_CharacterEditorCostumePanel_<SaveQuitCaptureCoroutine>d__35___ctor
            (__this_00,0,(MethodInfo *)0x0);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorCostumePanel___ctor (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x40339b0

void UI_CharacterEditorCostumePanel___ctor
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057042ff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Button);
    DAT_057042ff = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Button);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
  (__this->fields)._topButtons =
       (System_Collections_Generic_Dictionary_string__Button__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._topButtons);
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_0
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_0 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033a30

void UI_CharacterEditorCostumePanel__<Setup>b__21_0
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570436e == '\0') {
    il2cpp_init_method_metadata(&"Quit");
    DAT_0570436e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_1
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_1 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033a70

void UI_CharacterEditorCostumePanel__<Setup>b__21_1
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570436f == '\0') {
    il2cpp_init_method_metadata(&"LoadPreset");
    DAT_0570436f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"LoadPreset",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_2
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_2 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033ab0

void UI_CharacterEditorCostumePanel__<Setup>b__21_2
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704370 == '\0') {
    il2cpp_init_method_metadata(&"SaveQuit");
    DAT_05704370 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorCostumePanel__OnButtonClick(__this,"SaveQuit",in_RDX);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_3
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_3 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033af0

void UI_CharacterEditorCostumePanel__<Setup>b__21_3
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel__OnCustomSetSelected(__this,method);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_4
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_4 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b00

void UI_CharacterEditorCostumePanel__<Setup>b__21_4
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *__this_01;
  Settings_BoolSetting_o *__this_02;
  UI_CharacterEditorMenu_o *pUVar4;
  GameManagers_CharacterEditorGameManager_o *pGVar5;
  Characters_DummyHuman_o *__this_03;
  bool_conflict bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  undefined8 *puVar8;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *__this_04;
  
  if (DAT_05704365 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"HairM0");
    il2cpp_init_method_metadata(&"HairF0");
    DAT_05704365 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((lVar3 != 0) &&
      (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
      __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) &&
     (pSVar7 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet),
     pSVar7 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar7->klass->_2).naturalAligment < bVar1) ||
       ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar7);
    }
    if ((pSVar7[1].klass != (Settings_BaseSetSetting_c *)0x0) &&
       (__this_01 = pSVar7[1].fields.Name, __this_01 != (Settings_StringSetting_o *)0x0)) {
      if (*(int *)((long)&((pSVar7[1].klass)->_1).name + 4) == 0) {
        puVar8 = &"HairM0";
      }
      else {
        puVar8 = &"HairF0";
      }
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)*puVar8,MethodInfo_Void_set_Value);
      __this_02 = pSVar7[1].fields.Preset;
      if (__this_02 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting<int>__set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,0,MethodInfo_Void_set_Value);
        pUVar4 = (__this->fields)._menu;
        if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar4->klass->vtable)._8_RebuildPanels.methodPtr)
                    (pUVar4,1,(pUVar4->klass->vtable)._8_RebuildPanels.method);
          pUVar4 = (__this->fields)._menu;
          if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
            (*(pUVar4->klass->vtable)._9_ResetCharacter.methodPtr)
                      (pUVar4,1,(pUVar4->klass->vtable)._9_ResetCharacter.method);
            if (DAT_05704371 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
              DAT_05704371 = '\x01';
            }
            if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
              if (DAT_05704372 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
                DAT_05704372 = '\x01';
                cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
              }
              else {
                cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
              }
              if (cVar2 == '\0') {
                return;
              }
            }
            pUVar4 = (__this->fields)._menu;
            if ((pUVar4 != (UI_CharacterEditorMenu_o *)0x0) &&
               (pGVar5 = (pUVar4->fields)._gameManager,
               pGVar5 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
              __this_03 = (pGVar5->fields).Human;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                if (__this_03 == (Characters_DummyHuman_o *)0x0) goto LAB_04031846;
                Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
              }
              if (DAT_05704368 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterReset_d__29);
                DAT_05704368 = '\x01';
              }
              __this_04 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterReset_d__29_o *)
                          il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterReset_d__29);
              UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterReset>d__29___ctor
                        (__this_04,0,(MethodInfo *)0x0);
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)__this,
                         (System_Collections_IEnumerator_o *)__this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_04031846:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_5
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_5 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b10

void UI_CharacterEditorCostumePanel__<Setup>b__21_5
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_6
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_6 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b20

void UI_CharacterEditorCostumePanel__<Setup>b__21_6
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_7
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_7 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b30

void UI_CharacterEditorCostumePanel__<Setup>b__21_7
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_8
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_8 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b40

void UI_CharacterEditorCostumePanel__<Setup>b__21_8
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_9
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_9 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b50

void UI_CharacterEditorCostumePanel__<Setup>b__21_9
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_10
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_10 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b60

void UI_CharacterEditorCostumePanel__<Setup>b__21_10
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_11
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_11 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b70

void UI_CharacterEditorCostumePanel__<Setup>b__21_11
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_12
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_12 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b80

void UI_CharacterEditorCostumePanel__<Setup>b__21_12
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_13
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_13 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033b90

void UI_CharacterEditorCostumePanel__<Setup>b__21_13
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_14
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_14 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033ba0

void UI_CharacterEditorCostumePanel__<Setup>b__21_14
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_15
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_15 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033bb0

void UI_CharacterEditorCostumePanel__<Setup>b__21_15
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_16
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_16 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033bc0

void UI_CharacterEditorCostumePanel__<Setup>b__21_16
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_17
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_17 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033bd0

void UI_CharacterEditorCostumePanel__<Setup>b__21_17
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_18
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_18 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033be0

void UI_CharacterEditorCostumePanel__<Setup>b__21_18
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_19
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_19 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033bf0

void UI_CharacterEditorCostumePanel__<Setup>b__21_19
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_20
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_20 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c00

void UI_CharacterEditorCostumePanel__<Setup>b__21_20
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_21
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_21 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c10

void UI_CharacterEditorCostumePanel__<Setup>b__21_21
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_22
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_22 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c20

void UI_CharacterEditorCostumePanel__<Setup>b__21_22
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_23
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_23 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c30

void UI_CharacterEditorCostumePanel__<Setup>b__21_23
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_24
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_24 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c40

void UI_CharacterEditorCostumePanel__<Setup>b__21_24
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_25
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_25 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c50

void UI_CharacterEditorCostumePanel__<Setup>b__21_25
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorCostumePanel$$<Setup>b__21_26
// il2cpp: void UI_CharacterEditorCostumePanel___Setup_b__21_26 (UI_CharacterEditorCostumePanel_o* __this, const MethodInfo* method);
// 0x4033c60

void UI_CharacterEditorCostumePanel__<Setup>b__21_26
               (UI_CharacterEditorCostumePanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *__this_00;
  
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 == (UI_CharacterEditorMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
            (pUVar2,0,(pUVar2->klass->vtable)._9_ResetCharacter.method);
  if (DAT_05704371 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
    DAT_05704371 = '\x01';
  }
  if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
    if (DAT_05704372 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704372 = '\x01';
      cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    }
    else {
      cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if (DAT_05704369 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
    DAT_05704369 = '\x01';
  }
  __this_00 = (UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange_d__31_o *)
              il2cpp_runtime_glue(TypeInfo_ApplySkinPreviewAfterCostumeChange_d__31);
  UI_CharacterEditorCostumePanel_<ApplySkinPreviewAfterCostumeChange>d__31___ctor
            (__this_00,0,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


