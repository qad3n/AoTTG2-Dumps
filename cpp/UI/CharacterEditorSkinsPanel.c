// Type: UI.CharacterEditorSkinsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorSkinsPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4363600

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
// 0x43642e0

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x43642f0

bool_conflict
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__MoveNext
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  Characters_DummyHuman_o *pCVar2;
  long lVar3;
  Settings_TypedSetting_bool__o *pSVar4;
  UI_CharacterEditorSkinsPanel_o *pUVar5;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_c *pUVar6;
  void *pvVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_c *pUVar11;
  long *__this_00;
  Characters_DummyHuman_o **ppCVar12;
  
  __this_00 = (long *)__this;
  if (g_data_057ae1bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_00 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1bc = '\x01';
  }
  switch((__this->fields).__1__state) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar10 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
  case 1:
    pUVar5 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_00 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if ((UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00 ==
        (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)0x0) {
label_043645c5:
      (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)0x0;
label_043645fc:
      ppCVar12 = &(__this->fields)._dummyHuman_5__2;
      __this_00 = (long *)ppCVar12;
      il2cpp_runtime_helper_022b4080();
      pCVar2 = *ppCVar12;
    }
    else {
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if (((((Settings_TypedSetting_bool__c *)
            ((UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00)->klass)
           ->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_bool__c *)
           ((UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00)->klass)->
          _2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04364702;
      pUVar6 = ((UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)
               ((long)__this_00 + 0x38))->klass;
      if (pUVar6 == (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_c *)0x0)
      goto label_043645c5;
      pvVar7 = (pUVar6->_1).image;
      bVar1 = *(byte *)(TypeInfo_DummyHuman + 0x130);
      if (*(byte *)((long)pvVar7 + 0x130) < bVar1) {
        pUVar11 = (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_c *)0x0;
      }
      else {
        pUVar11 = (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_c *)0x0;
        if (*(long *)(*(long *)((long)pvVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_DummyHuman) {
          pUVar11 = pUVar6;
        }
      }
      ppCVar12 = &(__this->fields)._dummyHuman_5__2;
      (__this->fields)._dummyHuman_5__2 = (Characters_DummyHuman_o *)pUVar11;
      if (*(byte *)((long)(pUVar6->_1).image + 0x130) < bVar1) goto label_043645fc;
      __this_00 = (long *)ppCVar12;
      il2cpp_runtime_helper_022b4080();
      pCVar2 = *ppCVar12;
    }
    if (pCVar2 == (Characters_DummyHuman_o *)0x0) {
switchD_04364386_default:
      return 0;
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) && (*(long *)(lVar3 + 0x60) != 0)) {
      *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__3 =
           *(undefined1 *)(*(long *)(lVar3 + 0x60) + 0x11);
      if ((*(long *)(lVar3 + 0x58) != 0) &&
         (*(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__3 + 1) =
               *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x11),
         pUVar5 != (UI_CharacterEditorSkinsPanel_o *)0x0)) {
        pUVar8 = (pUVar5->fields)._menu;
        __this_00 = (long *)0x0;
        if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
          (*(pUVar8->klass->vtable)._9_ResetCharacter.methodPtr)
                    (pUVar8,0,(pUVar8->klass->vtable)._9_ResetCharacter.method);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar9;
          uVar10 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar9);
          (__this->fields).__1__state = 2;
          return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
        }
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_00 = *(long **)(lVar3 + 0x60),
       (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00 !=
       (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,(uint)**(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8),
                 MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58);
        __this_00 = (long *)0x0;
        if (pSVar4 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (pSVar4,(uint)*(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1),MethodInfo_Void_set_Value);
          pCVar2 = (__this->fields)._dummyHuman_5__2;
          __this_00 = (long *)0x0;
          if (pCVar2 != (Characters_DummyHuman_o *)0x0) {
            Characters_DummyHuman__LoadSkin(pCVar2,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar9 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar9;
            uVar10 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar9);
            (__this->fields).__1__state = 3;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
          }
        }
      }
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) &&
       (__this_00 = *(long **)(lVar3 + 0x60),
       (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00 !=
       (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,
                 (uint)(byte)(__this->fields)._originalGlobalEnabled_5__3,MethodInfo_Void_set_Value);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x20), lVar3 != 0)) {
        pSVar4 = *(Settings_TypedSetting_bool__o **)(lVar3 + 0x58);
        __this_00 = (long *)0x0;
        if (pSVar4 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (pSVar4,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__3 + 1),
                     MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
    break;
  default:
    goto switchD_04364386_default;
  }
  il2cpp_runtime_helper_022b2c90();
label_04364702:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)
         (((UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *)__this_00)->fields).
         __2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4364710

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4364720

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o* __this, const MethodInfo* method);
// 0x4364760

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange_d__27_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30___ctor (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4363ea0

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
// 0x4364770

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4364780

bool_conflict
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__MoveNext
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *pUVar3;
  Characters_DummyHuman_o *__this_00;
  long lVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_TypedSetting_bool__o *__this_01;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this_02;
  
  __this_02 = __this;
  if (g_data_057ae1bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1bd = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       (__this_02 = *(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o **)
                     (lVar4 + 0x60),
       __this_02 != (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_02,
                 (uint)(byte)(__this->fields)._originalGlobalEnabled_5__2,MethodInfo_Void_set_Value);
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
        __this_01 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58);
        __this_02 = (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)0x0;
        if (__this_01 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_01,(uint)*(byte *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1),
                     MethodInfo_Void_set_Value);
          return 0;
        }
      }
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return 0;
      }
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(3,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      uVar7 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
    }
    pUVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_02 = *(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o **)
                 (*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_02 == (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).naturalAligment < bVar1) ||
       ((((Settings_TypedSetting_bool__c *)__this_02->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        TypeInfo_CharacterEditorGameManager)) goto label_04364a9a;
    __this_00 = __this_02[1].monitor;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) {
      return 0;
    }
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((__this_00->klass->_2).naturalAligment < bVar1) {
      return 0;
    }
    if ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman) {
      return 0;
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
       (__this_02 = *(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o **)
                     (lVar4 + 0x60),
       __this_02 != (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)0x0)) {
      *(undefined1 *)&(__this->fields)._originalGlobalEnabled_5__2 =
           *(undefined1 *)((long)&(__this_02->fields).__1__state + 1);
      if (((*(long *)(lVar4 + 0x58) != 0) &&
          (*(undefined1 *)((long)&(__this->fields)._originalGlobalEnabled_5__2 + 1) =
                *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x11),
          pUVar3 != (UI_CharacterEditorSkinsPanel_o *)0x0)) &&
         (pSVar5 = (pUVar3->fields)._globalSkinPreview, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_02,
                   (uint)*(byte *)((long)&(pSVar5->fields).DefaultValue + 1),MethodInfo_Void_set_Value);
        lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
           ((pSVar5 = (pUVar3->fields)._customSkinPreview, pSVar5 != (Settings_BoolSetting_o *)0x0 &&
            ((__this_02 = *(UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o **)
                           (lVar4 + 0x58),
             __this_02 != (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *)0x0 &&
             (Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)__this_02,
                         (uint)*(byte *)((long)&(pSVar5->fields).DefaultValue + 1),MethodInfo_Void_set_Value),
             __this_00 != (Characters_DummyHuman_o *)0x0)))))) {
          Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
          (__this->fields).__2__current = pIVar6;
          uVar7 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
          (__this->fields).__1__state = 2;
          return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04364a9a:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)(__this_02->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4364aa0

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4364ab0

void UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o* __this, const MethodInfo* method);
// 0x4364af0

Il2CppObject *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29___ctor (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4363e80

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
// 0x4364b00

void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4364b10

bool_conflict
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__MoveNext
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  undefined1 uVar1;
  int iVar2;
  UI_CharacterEditorSkinsPanel_o *__this_00;
  Characters_DummyHuman_o *pCVar3;
  long lVar4;
  Settings_TypedSetting_bool__o *__this_01;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Characters_HumanSetup_o *__this_02;
  Characters_HumanSetup_o *__this_03;
  
  __this_03 = (Characters_HumanSetup_o *)__this;
  if (g_data_057ae1be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_03 = (Characters_HumanSetup_o *)&TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1be = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
       (__this_03 = *(Characters_HumanSetup_o **)(lVar4 + 0x60), __this_03 == (Characters_HumanSetup_o *)0x0))
    {
label_04364d5a:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_03->fields).m_CancellationTokenSource;
    }
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)__this_03,(uint)(byte)(__this->fields).originalGlobalEnabled,
               MethodInfo_Void_set_Value);
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto label_04364d5a;
    __this_01 = *(Settings_TypedSetting_bool__o **)(lVar4 + 0x58);
    __this_03 = (Characters_HumanSetup_o *)0x0;
    if (__this_01 == (Settings_TypedSetting_bool__o *)0x0) goto label_04364d5a;
    Settings_TypedSetting_bool___set_Value
              (__this_01,(uint)*(byte *)((long)&(__this->fields).originalGlobalEnabled + 1),MethodInfo_Void_set_Value);
label_04364cfc:
    bVar5 = 0;
  }
  else {
    if (iVar2 == 1) {
      __this_00 = (__this->fields).__4__this;
      (__this->fields).__1__state = -1;
      pCVar3 = (__this->fields).dummyHuman;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto label_04364d5a;
      __this_03 = (pCVar3->fields).Setup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (__this_00 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
          bVar5 = (__this->fields).originalGlobalEnabled;
          uVar1 = *(undefined1 *)((long)&(__this->fields).originalGlobalEnabled + 1);
          if (g_data_057ae1b7 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_RestoreOriginalSkinSettings_d__31);
            g_data_057ae1b7 = '\x01';
          }
          __this_02 = (Characters_HumanSetup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RestoreOriginalSkinSettings_d__31);
          __this_03 = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_02->fields).m_CachedPtr = 0;
          if (__this_02 != (Characters_HumanSetup_o *)0x0) {
            *(char *)&(__this_02->fields)._mount_chest = (char)bVar5;
            *(undefined1 *)((long)&(__this_02->fields)._mount_chest + 1) = uVar1;
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_02,
                       (MethodInfo *)0x0);
            return 0;
          }
        }
        goto label_04364d5a;
      }
      pCVar3 = (__this->fields).dummyHuman;
      __this_03 = (Characters_HumanSetup_o *)0x0;
      if (pCVar3 == (Characters_DummyHuman_o *)0x0) goto label_04364d5a;
      Characters_DummyHuman__LoadSkin(pCVar3,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar2 != 0) goto label_04364cfc;
      (__this->fields).__1__state = -1;
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar6 = (Il2CppObject *)Utility_Util__YieldForFrames(2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 1;
    }
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar5;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4364d60

Il2CppObject *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4364d70

void UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o* __this, const MethodInfo* method);
// 0x4364db0

Il2CppObject *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__LoadSkinAfterReset_d__29_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31___ctor (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4363ec0

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
// 0x4364dc0

void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_IDisposable_Dispose
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$MoveNext
// il2cpp: bool UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4364dd0

bool_conflict
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__MoveNext
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Settings_TypedSetting_bool__o *__this_00;
  undefined8 uVar3;
  UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this_01;
  
  __this_01 = __this;
  if (g_data_057ae1bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_01 = (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1bf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (__this_01 = *(UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o **)(lVar2 + 0x60),
       __this_01 != (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_01,(uint)(byte)(__this->fields).originalGlobalEnabled
                 ,MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
        __this_00 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58);
        __this_01 = (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *)0x0;
        if (__this_00 != (Settings_TypedSetting_bool__o *)0x0) {
          Settings_TypedSetting_bool___set_Value
                    (__this_00,(uint)*(byte *)((long)&(__this->fields).originalGlobalEnabled + 1),MethodInfo_Void_set_Value
                    );
          return 0;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)(__this_01->fields).__2__current;
  }
  if (iVar1 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4364ec0

Il2CppObject *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4364ed0

void UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o* __this, const MethodInfo* method);
// 0x4364f10

Il2CppObject *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorSkinsPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorSkinsPanel__get_Title (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x43620b0

System_String_o *
UI_CharacterEditorSkinsPanel__get_Title(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae1ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"SkinsButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1ab = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Top","SkinsButton","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorSkinsPanel$$get_Width
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Width (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362150

float UI_CharacterEditorSkinsPanel__get_Width(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 330.0;
}


// UI.CharacterEditorSkinsPanel$$get_Height
// il2cpp: float UI_CharacterEditorSkinsPanel__get_Height (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362160

float UI_CharacterEditorSkinsPanel__get_Height(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 310.0;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorSkinsPanel__get_VerticalSpacing (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362170

float UI_CharacterEditorSkinsPanel__get_VerticalSpacing
                (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorSkinsPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362180

int32_t UI_CharacterEditorSkinsPanel__get_HorizontalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362190

int32_t UI_CharacterEditorSkinsPanel__get_VerticalPadding
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.CharacterEditorSkinsPanel$$GetPersistentGlobalPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview (const MethodInfo* method);
// 0x43621a0

bool_conflict UI_CharacterEditorSkinsPanel__GetPersistentGlobalPreview(MethodInfo *method)

{
  if (g_data_057ae1ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae1ac = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  **(undefined1 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8));
}


// UI.CharacterEditorSkinsPanel$$GetPersistentCustomPreview
// il2cpp: bool UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview (const MethodInfo* method);
// 0x43621e0

bool_conflict UI_CharacterEditorSkinsPanel__GetPersistentCustomPreview(MethodInfo *method)

{
  if (g_data_057ae1ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae1ad = '\x01';
  }
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1));
}


// UI.CharacterEditorSkinsPanel$$ResetSkinPreviewToggles
// il2cpp: void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles (const MethodInfo* method);
// 0x435d5b0

void UI_CharacterEditorSkinsPanel__ResetSkinPreviewToggles(MethodInfo *method)

{
  if (g_data_057ae1ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    g_data_057ae1ae = '\x01';
  }
  **(undefined2 **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) = 0;
  return;
}


// UI.CharacterEditorSkinsPanel$$Setup
// il2cpp: void UI_CharacterEditorSkinsPanel__Setup (UI_CharacterEditorSkinsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4362220

void UI_CharacterEditorSkinsPanel__Setup
               (UI_CharacterEditorSkinsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int *piVar1;
  Settings_BoolSetting_o **ppSVar2;
  Settings_BoolSetting_o **ppSVar3;
  byte *pbVar4;
  Settings_SetSettingsContainer_T__o *pSVar5;
  UI_NewImportPopup_o *pUVar6;
  System_Collections_Specialized_OrderedDictionary_o *pSVar7;
  System_Int32_array *pSVar8;
  int32_t *piVar9;
  Il2CppClass *pIVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  uint uVar13;
  Settings_BoolSetting_o *pSVar14;
  System_String_o *pSVar15;
  UI_CharacterEditorMenu_o *pUVar16;
  System_String_o *pSVar17;
  UnityEngine_Events_UnityAction_o *pUVar18;
  System_String_array *pSVar19;
  Settings_IntSetting_o *pSVar20;
  UnityEngine_GameObject_o *pUVar21;
  UnityEngine_Transform_o *pUVar22;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_Text_o *__this_02;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  Il2CppObject *__this_03;
  UI_GlobalSkinEditPopup_o *pUVar23;
  uint uVar24;
  UI_GlobalSkinEditPopup_o *x_01;
  byte bVar25;
  long lVar26;
  UI_CharacterEditorMenu_o *method_00;
  MethodInfo **ppMVar27;
  MethodInfo *pMVar28;
  MethodInfo *method_01;
  UI_CharacterEditorSkinsPanel_o *__this_04;
  UI_GlobalSkinEditPopup_o *__this_05;
  int iVar29;
  
  if (g_data_057ae1af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__23_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__23_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__23_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__23_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__23_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"CharacterSkins");
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"GlobalSkins");
    il2cpp_runtime_helper_023445d0(&"Skins.Human");
    il2cpp_runtime_helper_023445d0(&"Edit");
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Global");
    g_data_057ae1af = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ppMVar27 = *(MethodInfo ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((UI_CharacterEditorMenu_o *)ppMVar27 != (UI_CharacterEditorMenu_o *)0x0) goto label_043623c8;
label_04362443:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
label_04362455:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
    *(undefined1 *)&(__this->fields)._isRebuildingPanel = 1;
    pbVar4 = *(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
    if (pbVar4[2] == 0) {
      pbVar4[0] = 0;
      pbVar4[1] = 0;
      pbVar4[2] = 1;
      bVar25 = 0;
    }
    else {
      bVar25 = *pbVar4;
    }
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    Settings_BoolSetting___ctor_40f3960(pSVar14,(uint)bVar25,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields)._globalSkinPreview;
    (__this->fields)._globalSkinPreview = pSVar14;
    il2cpp_runtime_helper_022b4080(ppSVar2,pSVar14);
    bVar25 = *(byte *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
    pSVar14 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    Settings_BoolSetting___ctor_40f3960(pSVar14,(uint)bVar25,(MethodInfo *)0x0);
    ppSVar3 = &(__this->fields)._customSkinPreview;
    (__this->fields)._customSkinPreview = pSVar14;
    il2cpp_runtime_helper_022b4080(ppSVar3,pSVar14);
    pSVar15 = (System_String_o *)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar16 = (UI_CharacterEditorMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor((UI_ElementStyle_o *)pUVar16,0x18,95.0,20.0,pSVar15,(MethodInfo *)0x0);
    pUVar22 = (__this->fields).BottomBar;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
    pSVar17 = UI_UIManager__GetLocale
                        ("CharacterPopup","General","Character","","",(MethodInfo *)0x0);
    pSVar15 = System_String__Concat_3af7150(pSVar15," ",pSVar17,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    UI_ElementFactory__CreateTextButton
              (pUVar22,(UI_ElementStyle_o *)pUVar16,pSVar15,0.0,pUVar18,(MethodInfo *)0x0);
    __this_04 = (UI_CharacterEditorSkinsPanel_o *)(__this->fields).BottomBar;
    pSVar15 = UI_UIManager__GetLocaleCommon("Edit",(MethodInfo *)0x0);
    pSVar17 = UI_UIManager__GetLocale
                        ("SettingsPopup","Skins.Human","Global","","",(MethodInfo *)0x0);
    pSVar15 = System_String__Concat_3af7150(pSVar15," ",pSVar17,(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    method_00 = pUVar16;
    UI_ElementFactory__CreateTextButton
              ((UnityEngine_Transform_o *)__this_04,(UI_ElementStyle_o *)pUVar16,pSVar15,0.0,pUVar18,
               (MethodInfo *)0x0);
    pSVar19 = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames(__this_04,(MethodInfo *)method_00);
    iVar11 = UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex(__this_04,(MethodInfo *)method_00);
    pSVar20 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    Settings_IntSetting___ctor_40f39a0(pSVar20,iVar11,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    (__this->fields)._globalSetDropdownSetting = pSVar20;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._globalSetDropdownSetting,pSVar20);
    pUVar22 = (__this->fields).SinglePanel;
    pSVar20 = (__this->fields)._globalSetDropdownSetting;
    pSVar15 = UI_UIManager__GetLocale
                        ("SettingsPopup","Skins.Human","Global","","",(MethodInfo *)0x0);
    pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    ppMVar27 = (MethodInfo **)pUVar16;
    pUVar21 = UI_ElementFactory__CreateDropdownSetting
                        (pUVar22,(UI_ElementStyle_o *)pUVar16,(Settings_BaseSetting_o *)pSVar20,pSVar15,
                         pSVar19,"",160.0,40.0,180.0,(System_Nullable_float__o)0x0,pUVar18,
                         (MethodInfo *)0x0);
    if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
      ppMVar27 = (MethodInfo **)0x0;
      pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
      if ((pUVar22 != (UnityEngine_Transform_o *)0x0) &&
         (ppMVar27 = (MethodInfo **)"Label",
         pUVar22 = UnityEngine_Transform__Find(pUVar22,(System_String_o *)"Label",(MethodInfo *)0x0),
         pUVar22 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar22,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text);
        pUVar22 = (__this->fields).SinglePanel;
        pSVar14 = (__this->fields)._globalSkinPreview;
        pSVar15 = UI_UIManager__GetLocale
                            ("SettingsPopup","Skins.Human","GlobalSkins","","",
                             (MethodInfo *)0x0);
        pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pUVar21 = UI_ElementFactory__CreateToggleSetting
                            (pUVar22,(UI_ElementStyle_o *)pUVar16,(Settings_BaseSetting_o *)pSVar14,pSVar15,
                             "",30.0,30.0,pUVar18,(MethodInfo *)0x0);
        pUVar22 = (__this->fields).SinglePanel;
        pSVar14 = (__this->fields)._customSkinPreview;
        pSVar15 = UI_UIManager__GetLocale
                            ("SettingsPopup","Skins.Human","CharacterSkins","","",
                             (MethodInfo *)0x0);
        pUVar18 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        __this_00 = UI_ElementFactory__CreateToggleSetting
                              (pUVar22,(UI_ElementStyle_o *)pUVar16,(Settings_BaseSetting_o *)pSVar14,pSVar15,
                               "",30.0,30.0,pUVar18,(MethodInfo *)0x0);
        ppMVar27 = (MethodInfo **)pUVar16;
        if (pUVar21 != (UnityEngine_GameObject_o *)0x0) {
          ppMVar27 = (MethodInfo **)0x0;
          pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
          if (((pUVar22 != (UnityEngine_Transform_o *)0x0) &&
              (ppMVar27 = (MethodInfo **)"Label",
              pUVar22 = UnityEngine_Transform__Find(pUVar22,(System_String_o *)"Label",(MethodInfo *)0x0)
              , pUVar22 != (UnityEngine_Transform_o *)0x0)) &&
             (ppMVar27 = (MethodInfo **)MethodInfo_Text_GetComponent_Text,
             __this_01 = (UnityEngine_UI_Text_o *)
                         UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar22,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text),
             __this_00 != (UnityEngine_GameObject_o *)0x0)) {
            ppMVar27 = (MethodInfo **)0x0;
            pUVar22 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            if (((pUVar22 != (UnityEngine_Transform_o *)0x0) &&
                (ppMVar27 = (MethodInfo **)"Label",
                pUVar22 = UnityEngine_Transform__Find
                                    (pUVar22,(System_String_o *)"Label",(MethodInfo *)0x0),
                pUVar22 != (UnityEngine_Transform_o *)0x0)) &&
               (ppMVar27 = (MethodInfo **)MethodInfo_Text_GetComponent_Text,
               __this_02 = (UnityEngine_UI_Text_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar22,(MethodInfo_24E7B40 *)MethodInfo_Text_GetComponent_Text),
               __this_01 != (UnityEngine_UI_Text_o *)0x0)) {
              ppMVar27 = (MethodInfo **)0x1;
              UnityEngine_UI_Text__set_horizontalOverflow(__this_01,1,(MethodInfo *)0x0);
              if (__this_02 != (UnityEngine_UI_Text_o *)0x0) {
                UnityEngine_UI_Text__set_horizontalOverflow(__this_02,1,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_verticalOverflow(__this_01,1,(MethodInfo *)0x0);
                UnityEngine_UI_Text__set_verticalOverflow(__this_02,1,(MethodInfo *)0x0);
                ppMVar27 = (MethodInfo **)0x0;
                pUVar22 = UnityEngine_GameObject__get_transform(pUVar21,(MethodInfo *)0x0);
                if ((pUVar22 != (UnityEngine_Transform_o *)0x0) &&
                   (ppMVar27 = (MethodInfo **)"Label",
                   pUVar22 = UnityEngine_Transform__Find
                                       (pUVar22,(System_String_o *)"Label",(MethodInfo *)0x0),
                   pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                  x = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar22,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  ppMVar27 = (MethodInfo **)0x0;
                  pUVar22 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                  if ((pUVar22 != (UnityEngine_Transform_o *)0x0) &&
                     (ppMVar27 = (MethodInfo **)"Label",
                     pUVar22 = UnityEngine_Transform__Find
                                         (pUVar22,(System_String_o *)"Label",(MethodInfo *)0x0),
                     pUVar22 != (UnityEngine_Transform_o *)0x0)) {
                    x_00 = (UnityEngine_Object_o *)
                           UnityEngine_Component__GetComponent_object_
                                     ((UnityEngine_Component_o *)pUVar22,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppMVar27 = (MethodInfo **)0x0;
                    bVar12 = UnityEngine_Object__op_Inequality
                                       (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar12 != '\0') {
                      if (x == (UnityEngine_Object_o *)0x0) goto label_04362be0;
                      (*x->klass[2]._1.events)(0x43520000,x);
                    }
                    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    ppMVar27 = (MethodInfo **)0x0;
                    bVar12 = UnityEngine_Object__op_Inequality
                                       (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    if ((char)bVar12 != '\0') {
                      if (x_00 == (UnityEngine_Object_o *)0x0) goto label_04362be0;
                      ppMVar27 = x_00->klass[2]._1.properties;
                      (*x_00->klass[2]._1.events)(0x43520000,x_00);
                    }
                    pSVar14 = *ppSVar2;
                    if (pSVar14 != (Settings_BoolSetting_o *)0x0) {
                      if (*(char *)((long)&(pSVar14->fields).DefaultValue + 1) == '\0') {
                        pSVar14 = *ppSVar3;
                        if (pSVar14 == (Settings_BoolSetting_o *)0x0) goto label_04362be0;
                        if (*(char *)((long)&(pSVar14->fields).DefaultValue + 1) == '\0') goto label_04362bc9;
                      }
                      if (g_data_057ae1b6 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
                        g_data_057ae1b6 = '\x01';
                      }
                      __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
                      ppMVar27 = (MethodInfo **)0x0;
                      System_Object___ctor(__this_03,(MethodInfo *)0x0);
                      *(undefined4 *)&__this_03[1].klass = 0;
                      if (__this_03 != (Il2CppObject *)0x0) {
                        __this_03[2].klass = (Il2CppClass *)__this;
                        il2cpp_runtime_helper_022b4080(__this_03 + 2,__this);
                        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)__this,
                                   (System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
label_04362bc9:
                        *(undefined1 *)&(__this->fields)._isRebuildingPanel = 0;
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
label_04362be0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    ppMVar27 = *(MethodInfo ***)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0) goto label_04362443;
label_043623c8:
    pIVar10 = TypeInfo_CharacterEditorMenu;
    bVar25 = (TypeInfo_CharacterEditorMenu->_2).naturalAligment;
    if ((bVar25 <= (((System_String_c *)((UI_CharacterEditorMenu_o *)ppMVar27)->klass)->_2).naturalAligment)
       && ((((System_String_c *)((UI_CharacterEditorMenu_o *)ppMVar27)->klass)->_2).typeHierarchy
           [(ulong)bVar25 - 1] == TypeInfo_CharacterEditorMenu)) {
      (__this->fields)._menu = (UI_CharacterEditorMenu_o *)ppMVar27;
      if (((((System_String_c *)((UI_CharacterEditorMenu_o *)ppMVar27)->klass)->_2).naturalAligment < bVar25)
         || ((((System_String_c *)((UI_CharacterEditorMenu_o *)ppMVar27)->klass)->_2).typeHierarchy
             [(ulong)bVar25 - 1] != pIVar10)) goto label_04362be5;
      goto label_04362455;
    }
  }
label_04362be5:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae1b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppMVar27 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b0 = '\x01';
  }
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar26 == 0) {
label_04362e04:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar26 + 0x20);
    ppMVar27 = (MethodInfo **)0x0;
    if (pSVar5 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04362e04;
    pSVar19 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
    pUVar16 = (UI_CharacterEditorMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    ppMVar27 = (MethodInfo **)pUVar16;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pUVar16,MethodInfo_List_1_System_String);
    if (pSVar19 == (System_String_array *)0x0) goto label_04362e04;
    uVar13 = (uint)pSVar19->max_length;
    if (pUVar16 == (UI_CharacterEditorMenu_o *)0x0) {
      if (0 < (int)uVar13) {
        lVar26 = 0;
        do {
          if (uVar13 <= (uint)lVar26) goto label_04362e09;
          ppMVar27 = (MethodInfo **)pSVar19->m_Items[lVar26];
          if ((UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0) goto label_04362e04;
          bVar12 = System_String__StartsWith
                             ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            if ((uint)pSVar19->max_length <= (uint)lVar26) goto label_04362e09;
            goto label_04362e04;
          }
          uVar13 = (uint)pSVar19->max_length;
          lVar26 = lVar26 + 1;
        } while ((int)lVar26 < (int)uVar13);
      }
label_04362dd9:
      if (pUVar16 != (UI_CharacterEditorMenu_o *)0x0) {
        System_Collections_Generic_List_object___ToArray
                  ((System_Collections_Generic_List_object__o *)pUVar16,MethodInfo_String_ToArray);
        return;
      }
      goto label_04362e04;
    }
    if ((int)uVar13 < 1) goto label_04362dd9;
    uVar24 = 0;
    if (uVar13 != 0) {
      do {
        ppMVar27 = (MethodInfo **)pSVar19->m_Items[(int)uVar24];
        if ((UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0) goto label_04362e04;
        bVar12 = System_String__StartsWith
                           ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
        lVar26 = MethodInfo_Void_Add;
        if ((char)bVar12 == '\0') {
          if ((uint)pSVar19->max_length <= uVar24) break;
          pSVar15 = pSVar19->m_Items[(int)uVar24];
          piVar1 = (int *)((long)&(pUVar16->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar7 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar16->fields).m_CachedPtr;
          if (pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04362e04;
          uVar13 = *(uint *)&(pUVar16->fields).m_CancellationTokenSource;
          if (uVar13 < *(uint *)&(pSVar7->fields)._objectsTable) {
            *(uint *)&(pUVar16->fields).m_CancellationTokenSource = uVar13 + 1;
            ppMVar27 = (MethodInfo **)(&(pSVar7->fields)._initialCapacity + (long)(int)uVar13 * 2);
            *(System_String_o **)(&(pSVar7->fields)._initialCapacity + (long)(int)uVar13 * 2) = pSVar15;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            ppMVar27 = (MethodInfo **)pUVar16;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pUVar16,(Il2CppObject *)pSVar15,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar24 = uVar24 + 1;
        uVar13 = (uint)pSVar19->max_length;
        if ((int)uVar13 <= (int)uVar24) goto label_04362dd9;
      } while (uVar24 < uVar13);
    }
  }
label_04362e09:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae1b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar27 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b1 = '\x01';
  }
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar26 == 0) ||
      (ppMVar27 = *(MethodInfo ***)(lVar26 + 0x20),
      (UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0)) ||
     (pUVar6 = (((UI_CharacterEditorMenu_o *)ppMVar27)->fields).NewImportPopup,
     pUVar6 == (UI_NewImportPopup_o *)0x0)) {
label_04363038:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar11 = *(int32_t *)((long)&(pUVar6->fields).m_CachedPtr + 4);
    pSVar19 = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)ppMVar27,MethodInfo_String_GetSetNames);
    pUVar16 = (UI_CharacterEditorMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
    ppMVar27 = (MethodInfo **)pUVar16;
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_List_int__o *)pUVar16,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
    if (pSVar19 == (System_String_array *)0x0) goto label_04363038;
    uVar13 = (uint)pSVar19->max_length;
    if (pUVar16 == (UI_CharacterEditorMenu_o *)0x0) {
      if (0 < (int)uVar13) {
        lVar26 = 0;
        do {
          if (uVar13 <= (uint)lVar26) goto label_0436303d;
          ppMVar27 = (MethodInfo **)pSVar19->m_Items[lVar26];
          if (((UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0) ||
             (bVar12 = System_String__StartsWith
                                 ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",
                                  (MethodInfo *)0x0), (char)bVar12 == '\0')) goto label_04363038;
          uVar13 = (uint)pSVar19->max_length;
          lVar26 = lVar26 + 1;
        } while ((int)lVar26 < (int)uVar13);
      }
label_04363008:
      if (pUVar16 != (UI_CharacterEditorMenu_o *)0x0) {
        System_Collections_Generic_List_int___IndexOf
                  ((System_Collections_Generic_List_int__o *)pUVar16,iVar11,MethodInfo_Int32_IndexOf);
        return;
      }
      goto label_04363038;
    }
    if ((int)uVar13 < 1) goto label_04363008;
    uVar24 = 0;
    if (uVar13 != 0) {
      do {
        ppMVar27 = (MethodInfo **)pSVar19->m_Items[(int)uVar24];
        if ((UI_CharacterEditorMenu_o *)ppMVar27 == (UI_CharacterEditorMenu_o *)0x0) goto label_04363038;
        bVar12 = System_String__StartsWith
                           ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
        lVar26 = MethodInfo_Void_Add;
        if ((char)bVar12 == '\0') {
          piVar1 = (int *)((long)&(pUVar16->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar7 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar16->fields).m_CachedPtr;
          if (pSVar7 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04363038;
          uVar13 = *(uint *)&(pUVar16->fields).m_CancellationTokenSource;
          if (*(uint *)&(pSVar7->fields)._objectsTable <= uVar13) {
            ppMVar27 = (MethodInfo **)pUVar16;
            System_Collections_Generic_List_int___AddWithResize
                      ((System_Collections_Generic_List_int__o *)pUVar16,uVar24,
                       *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
            goto label_04362f59;
          }
          *(uint *)&(pUVar16->fields).m_CancellationTokenSource = uVar13 + 1;
          (&(pSVar7->fields)._initialCapacity)[(int)uVar13] = uVar24;
          uVar13 = (uint)pSVar19->max_length;
          if ((int)uVar13 <= (int)(uVar24 + 1)) goto label_04363008;
        }
        else {
label_04362f59:
          uVar13 = (uint)pSVar19->max_length;
          if ((int)uVar13 <= (int)(uVar24 + 1)) goto label_04363008;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar13);
    }
  }
label_0436303d:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae1b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    g_data_057ae1b6 = '\x01';
  }
  pUVar23 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
  pMVar28 = (MethodInfo *)0x0;
  __this_05 = pUVar23;
  System_Object___ctor((Il2CppObject *)pUVar23,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar23->fields).m_CachedPtr = 0;
  if (pUVar23 != (UI_GlobalSkinEditPopup_o *)0x0) {
    (pUVar23->fields).SinglePanel = (UnityEngine_Transform_o *)ppMVar27;
    il2cpp_runtime_helper_022b4080(&(pUVar23->fields).SinglePanel,ppMVar27);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = pMVar28;
  ppMVar27 = (MethodInfo **)__this_05;
  if (g_data_057ae1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppMVar27 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b2 = '\x01';
  }
  lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar26 != 0) {
    pSVar5 = *(Settings_SetSettingsContainer_T__o **)(lVar26 + 0x20);
    ppMVar27 = (MethodInfo **)(UI_GlobalSkinEditPopup_o *)0x0;
    if (pSVar5 != (Settings_SetSettingsContainer_T__o *)0x0) {
      pSVar19 = Settings_SetSettingsContainer_object___GetSetNames(pSVar5,MethodInfo_String_GetSetNames);
      pUVar23 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
      method_01 = MethodInfo_List_1_System_Int32;
      ppMVar27 = (MethodInfo **)pUVar23;
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_List_int__o *)pUVar23,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
      if (pSVar19 != (System_String_array *)0x0) {
        uVar13 = (uint)pSVar19->max_length;
        if (pUVar23 == (UI_GlobalSkinEditPopup_o *)0x0) {
          if (0 < (int)uVar13) {
            lVar26 = 0;
            do {
              if (uVar13 <= (uint)lVar26) goto label_04363550;
              ppMVar27 = (MethodInfo **)pSVar19->m_Items[lVar26];
              if (((UI_GlobalSkinEditPopup_o *)ppMVar27 == (UI_GlobalSkinEditPopup_o *)0x0) ||
                 (method_01 = "Custom Set:",
                 bVar12 = System_String__StartsWith
                                    ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",
                                     (MethodInfo *)0x0), (char)bVar12 == '\0')) goto label_0436354b;
              uVar13 = (uint)pSVar19->max_length;
              lVar26 = lVar26 + 1;
            } while ((int)lVar26 < (int)uVar13);
          }
        }
        else if (0 < (int)uVar13) {
          uVar24 = 0;
          if (uVar13 != 0) {
            do {
              ppMVar27 = (MethodInfo **)pSVar19->m_Items[(int)uVar24];
              if ((UI_GlobalSkinEditPopup_o *)ppMVar27 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
              method_01 = "Custom Set:";
              bVar12 = System_String__StartsWith
                                 ((System_String_o *)ppMVar27,(System_String_o *)"Custom Set:",
                                  (MethodInfo *)0x0);
              lVar26 = MethodInfo_Void_Add;
              if ((char)bVar12 == '\0') {
                piVar9 = (int32_t *)((long)&(pUVar23->fields).m_CancellationTokenSource + 4);
                *piVar9 = *piVar9 + 1;
                pSVar8 = (System_Int32_array *)(pUVar23->fields).m_CachedPtr;
                if (pSVar8 == (System_Int32_array *)0x0) goto label_0436354b;
                uVar13 = *(uint *)&(pUVar23->fields).m_CancellationTokenSource;
                if ((uint)pSVar8->max_length <= uVar13) {
                  method_01 = (MethodInfo *)(ulong)uVar24;
                  ppMVar27 = (MethodInfo **)pUVar23;
                  System_Collections_Generic_List_int___AddWithResize
                            ((System_Collections_Generic_List_int__o *)pUVar23,uVar24,
                             *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                  goto label_04363239;
                }
                *(uint *)&(pUVar23->fields).m_CancellationTokenSource = uVar13 + 1;
                pSVar8->m_Items[(int)uVar13] = uVar24;
                uVar13 = (uint)pSVar19->max_length;
                if ((int)uVar13 <= (int)(uVar24 + 1)) goto label_043632f3;
              }
              else {
label_04363239:
                uVar13 = (uint)pSVar19->max_length;
                if ((int)uVar13 <= (int)(uVar24 + 1)) goto label_043632f3;
              }
              uVar24 = uVar24 + 1;
            } while (uVar24 < uVar13);
          }
          goto label_04363550;
        }
label_043632f3:
        iVar29 = (int)pMVar28;
        if (iVar29 < 0) {
          return;
        }
        if (pUVar23 != (UI_GlobalSkinEditPopup_o *)0x0) {
          if (*(int *)&(pUVar23->fields).m_CancellationTokenSource <= iVar29) {
            return;
          }
          method_01 = (MethodInfo *)((ulong)pMVar28 & 0xffffffff);
          uVar13 = System_Collections_Generic_List_int___get_Item
                             ((System_Collections_Generic_List_int__o *)pUVar23,iVar29,MethodInfo_Int32_get_Item);
          lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          ppMVar27 = (MethodInfo **)pUVar23;
          if (((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x20), lVar26 != 0)) &&
             (ppMVar27 = *(MethodInfo ***)(lVar26 + 0x20),
             (UI_GlobalSkinEditPopup_o *)ppMVar27 != (UI_GlobalSkinEditPopup_o *)0x0)) {
            method_01 = (MethodInfo *)(ulong)uVar13;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)ppMVar27,uVar13,MethodInfo_Void_set_Value);
            lVar26 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x20), lVar26 != 0)) &&
               (ppMVar27 = *(MethodInfo ***)(lVar26 + 0x78),
               (UI_GlobalSkinEditPopup_o *)ppMVar27 != (UI_GlobalSkinEditPopup_o *)0x0)) {
              method_01 = (MethodInfo *)(ulong)uVar13;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)ppMVar27,uVar13,MethodInfo_Void_set_Value);
              if ((uint)pSVar19->max_length <= uVar13) goto label_04363550;
              pUVar23 = *(UI_GlobalSkinEditPopup_o **)&(__this_05->fields)._currentAnimationValue;
              if (pUVar23 == (UI_GlobalSkinEditPopup_o *)0x0) {
label_043633e4:
                x_01 = (UI_GlobalSkinEditPopup_o *)0x0;
                iVar29 = *(int *)(TypeInfo_Object + 0xe4);
              }
              else {
                bVar25 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
                if ((pUVar23->klass->_2).naturalAligment < bVar25) goto label_043633e4;
                x_01 = (UI_GlobalSkinEditPopup_o *)0x0;
                if ((pUVar23->klass->_2).typeHierarchy[(ulong)bVar25 - 1] == TypeInfo_CharacterEditorHumanMenu) {
                  x_01 = pUVar23;
                }
                iVar29 = *(int *)(TypeInfo_Object + 0xe4);
              }
              if (iVar29 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_01 = (MethodInfo *)0x0;
              ppMVar27 = (MethodInfo **)x_01;
              bVar12 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar12 != '\0') {
                if (x_01 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                ppMVar27 = (MethodInfo **)x_01[1].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                method_01 = (MethodInfo *)0x0;
                bVar12 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)ppMVar27,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar12 != '\0') {
                  pUVar23 = (UI_GlobalSkinEditPopup_o *)x_01[1].fields.m_CachedPtr;
                  if (pUVar23 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                  if ((char)(pUVar23->fields).IsActive != '\0') {
                    if ((char)(pUVar23->fields)._hasBackup != '\0') {
                      UI_GlobalSkinEditPopup__RestoreBackup(pUVar23,method_01);
                    }
                    (*(pUVar23->klass->vtable)._22_Hide.methodPtr)(pUVar23);
                  }
                }
              }
              if ((**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') && ((*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1] == '\0')
                 ) {
                return;
              }
              if (g_data_057ae1b3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
                g_data_057ae1b3 = '\x01';
              }
              pUVar23 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
              method_01 = (MethodInfo *)0x0;
              ppMVar27 = (MethodInfo **)pUVar23;
              System_Object___ctor((Il2CppObject *)pUVar23,(MethodInfo *)0x0);
              *(int32_t *)&(pUVar23->fields).m_CachedPtr = 0;
              if (pUVar23 != (UI_GlobalSkinEditPopup_o *)0x0) {
                (pUVar23->fields).SinglePanel = (UnityEngine_Transform_o *)__this_05;
                il2cpp_runtime_helper_022b4080(&(pUVar23->fields).SinglePanel,__this_05);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this_05,
                           (System_Collections_IEnumerator_o *)pUVar23,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_0436354b:
  il2cpp_runtime_helper_022b2c90();
label_04363550:
  il2cpp_runtime_helper_022b2ca0();
  if ((char)(((UI_GlobalSkinEditPopup_o *)ppMVar27)->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)ppMVar27,method_01);
  }
  (*(((UI_GlobalSkinEditPopup_o *)ppMVar27)->klass->vtable)._22_Hide.methodPtr)
            (ppMVar27,(((UI_GlobalSkinEditPopup_o *)ppMVar27)->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetNames
// il2cpp: System_String_array* UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362bf0

System_String_array *
UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetNames
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  int32_t item;
  Settings_SetSettingsContainer_T__o *pSVar3;
  System_String_o *item_00;
  System_Collections_Generic_Dictionary_string__Button__o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  Il2CppArrayBounds *pIVar6;
  UI_GlobalSkinEditPopup_o *__this_00;
  Il2CppClass *pIVar7;
  bool_conflict bVar8;
  uint uVar9;
  System_String_array *pSVar10;
  UI_CharacterEditorSkinsPanel_o *pUVar11;
  System_String_array *pSVar12;
  System_String_array *pSVar13;
  System_String_array *pSVar14;
  uint uVar15;
  long lVar16;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  MethodInfo **ppMVar18;
  int iVar19;
  
  ppMVar18 = (MethodInfo **)__this;
  if (g_data_057ae1b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    ppMVar18 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b0 = '\x01';
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar16 == 0) {
label_04362e04:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar16 + 0x20);
    ppMVar18 = (MethodInfo **)0x0;
    if (pSVar3 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04362e04;
    pSVar10 = Settings_SetSettingsContainer_object___GetSetNames(pSVar3,MethodInfo_String_GetSetNames);
    pUVar11 = (UI_CharacterEditorSkinsPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    ppMVar18 = (MethodInfo **)pUVar11;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pUVar11,MethodInfo_List_1_System_String);
    if (pSVar10 == (System_String_array *)0x0) goto label_04362e04;
    uVar9 = (uint)pSVar10->max_length;
    if (pUVar11 == (UI_CharacterEditorSkinsPanel_o *)0x0) {
      if (0 < (int)uVar9) {
        lVar16 = 0;
        do {
          if (uVar9 <= (uint)lVar16) goto label_04362e09;
          ppMVar18 = (MethodInfo **)pSVar10->m_Items[lVar16];
          if ((UI_CharacterEditorSkinsPanel_o *)ppMVar18 == (UI_CharacterEditorSkinsPanel_o *)0x0)
          goto label_04362e04;
          bVar8 = System_String__StartsWith
                            ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if ((uint)pSVar10->max_length <= (uint)lVar16) goto label_04362e09;
            goto label_04362e04;
          }
          uVar9 = (uint)pSVar10->max_length;
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar9);
      }
label_04362dd9:
      if (pUVar11 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
        pSVar10 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)pUVar11,MethodInfo_String_ToArray);
        return pSVar10;
      }
      goto label_04362e04;
    }
    if ((int)uVar9 < 1) goto label_04362dd9;
    uVar15 = 0;
    if (uVar9 != 0) {
      do {
        ppMVar18 = (MethodInfo **)pSVar10->m_Items[(int)uVar15];
        if ((UI_CharacterEditorSkinsPanel_o *)ppMVar18 == (UI_CharacterEditorSkinsPanel_o *)0x0)
        goto label_04362e04;
        bVar8 = System_String__StartsWith
                          ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
        lVar16 = MethodInfo_Void_Add;
        if ((char)bVar8 == '\0') {
          if ((uint)pSVar10->max_length <= uVar15) break;
          item_00 = pSVar10->m_Items[(int)uVar15];
          piVar1 = (int *)((long)&(pUVar11->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar5 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar11->fields).m_CachedPtr;
          if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04362e04;
          uVar9 = *(uint *)&(pUVar11->fields).m_CancellationTokenSource;
          if (uVar9 < *(uint *)&(pSVar5->fields)._objectsTable) {
            *(uint *)&(pUVar11->fields).m_CancellationTokenSource = uVar9 + 1;
            ppMVar18 = (MethodInfo **)(&(pSVar5->fields)._initialCapacity + (long)(int)uVar9 * 2);
            *(System_String_o **)(&(pSVar5->fields)._initialCapacity + (long)(int)uVar9 * 2) = item_00;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            ppMVar18 = (MethodInfo **)pUVar11;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pUVar11,(Il2CppObject *)item_00,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar15 = uVar15 + 1;
        uVar9 = (uint)pSVar10->max_length;
        if ((int)uVar9 <= (int)uVar15) goto label_04362dd9;
      } while (uVar15 < uVar9);
    }
  }
label_04362e09:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae1b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar18 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b1 = '\x01';
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar16 == 0) ||
      (ppMVar18 = *(MethodInfo ***)(lVar16 + 0x20),
      (UI_CharacterEditorSkinsPanel_o *)ppMVar18 == (UI_CharacterEditorSkinsPanel_o *)0x0)) ||
     (pSVar4 = (((UI_CharacterEditorSkinsPanel_o *)ppMVar18)->fields)._topButtons,
     pSVar4 == (System_Collections_Generic_Dictionary_string__Button__o *)0x0)) {
label_04363038:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    item = *(int32_t *)((long)&(pSVar4->fields)._buckets + 4);
    pSVar10 = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)ppMVar18,MethodInfo_String_GetSetNames);
    pUVar11 = (UI_CharacterEditorSkinsPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
    ppMVar18 = (MethodInfo **)pUVar11;
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_List_int__o *)pUVar11,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
    if (pSVar10 == (System_String_array *)0x0) goto label_04363038;
    uVar9 = (uint)pSVar10->max_length;
    if (pUVar11 == (UI_CharacterEditorSkinsPanel_o *)0x0) {
      if (0 < (int)uVar9) {
        lVar16 = 0;
        do {
          if (uVar9 <= (uint)lVar16) goto label_0436303d;
          ppMVar18 = (MethodInfo **)pSVar10->m_Items[lVar16];
          if (((UI_CharacterEditorSkinsPanel_o *)ppMVar18 == (UI_CharacterEditorSkinsPanel_o *)0x0) ||
             (bVar8 = System_String__StartsWith
                                ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",(MethodInfo *)0x0
                                ), (char)bVar8 == '\0')) goto label_04363038;
          uVar9 = (uint)pSVar10->max_length;
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < (int)uVar9);
      }
label_04363008:
      if (pUVar11 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
        uVar9 = System_Collections_Generic_List_int___IndexOf
                          ((System_Collections_Generic_List_int__o *)pUVar11,item,MethodInfo_Int32_IndexOf);
        pSVar10 = (System_String_array *)(ulong)uVar9;
        if ((int)uVar9 < 0) {
          pSVar10 = (System_String_array *)0x0;
        }
        return pSVar10;
      }
      goto label_04363038;
    }
    if ((int)uVar9 < 1) goto label_04363008;
    uVar15 = 0;
    if (uVar9 != 0) {
      do {
        ppMVar18 = (MethodInfo **)pSVar10->m_Items[(int)uVar15];
        if ((UI_CharacterEditorSkinsPanel_o *)ppMVar18 == (UI_CharacterEditorSkinsPanel_o *)0x0)
        goto label_04363038;
        bVar8 = System_String__StartsWith
                          ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
        lVar16 = MethodInfo_Void_Add;
        if ((char)bVar8 == '\0') {
          piVar1 = (int *)((long)&(pUVar11->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar5 = (System_Collections_Specialized_OrderedDictionary_o *)(pUVar11->fields).m_CachedPtr;
          if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04363038;
          uVar9 = *(uint *)&(pUVar11->fields).m_CancellationTokenSource;
          if (*(uint *)&(pSVar5->fields)._objectsTable <= uVar9) {
            ppMVar18 = (MethodInfo **)pUVar11;
            System_Collections_Generic_List_int___AddWithResize
                      ((System_Collections_Generic_List_int__o *)pUVar11,uVar15,
                       *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            goto label_04362f59;
          }
          *(uint *)&(pUVar11->fields).m_CancellationTokenSource = uVar9 + 1;
          (&(pSVar5->fields)._initialCapacity)[(int)uVar9] = uVar15;
          uVar9 = (uint)pSVar10->max_length;
          if ((int)uVar9 <= (int)(uVar15 + 1)) goto label_04363008;
        }
        else {
label_04362f59:
          uVar9 = (uint)pSVar10->max_length;
          if ((int)uVar9 <= (int)(uVar15 + 1)) goto label_04363008;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
  }
label_0436303d:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae1b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    g_data_057ae1b6 = '\x01';
  }
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
  pMVar17 = (MethodInfo *)0x0;
  pSVar10 = pSVar12;
  System_Object___ctor((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pSVar12->bounds = 0;
  if (pSVar12 != (System_String_array *)0x0) {
    pSVar12->m_Items[0] = (System_String_o *)ppMVar18;
    il2cpp_runtime_helper_022b4080(pSVar12->m_Items,ppMVar18);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar17;
  ppMVar18 = (MethodInfo **)pSVar10;
  if (g_data_057ae1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppMVar18 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b2 = '\x01';
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar16 != 0) {
    pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar16 + 0x20);
    ppMVar18 = (MethodInfo **)(System_String_array *)0x0;
    if (pSVar3 != (Settings_SetSettingsContainer_T__o *)0x0) {
      pSVar12 = Settings_SetSettingsContainer_object___GetSetNames(pSVar3,MethodInfo_String_GetSetNames);
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
      method_00 = MethodInfo_List_1_System_Int32;
      ppMVar18 = (MethodInfo **)pSVar13;
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_List_int__o *)pSVar13,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
      if (pSVar12 != (System_String_array *)0x0) {
        uVar9 = (uint)pSVar12->max_length;
        pSVar14 = (System_String_array *)(ulong)uVar9;
        if (pSVar13 == (System_String_array *)0x0) {
          if (0 < (int)uVar9) {
            lVar16 = 0;
            do {
              if ((uint)pSVar14 <= (uint)lVar16) goto label_04363550;
              ppMVar18 = (MethodInfo **)pSVar12->m_Items[lVar16];
              if (((System_String_array *)ppMVar18 == (System_String_array *)0x0) ||
                 (method_00 = "Custom Set:",
                 bVar8 = System_String__StartsWith
                                   ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",
                                    (MethodInfo *)0x0), (char)bVar8 == '\0')) goto label_0436354b;
              uVar9 = (uint)pSVar12->max_length;
              pSVar14 = (System_String_array *)(ulong)uVar9;
              lVar16 = lVar16 + 1;
            } while ((int)lVar16 < (int)uVar9);
          }
        }
        else if (0 < (int)uVar9) {
          uVar15 = 0;
          if (uVar9 != 0) {
            do {
              ppMVar18 = (MethodInfo **)pSVar12->m_Items[(int)uVar15];
              if ((System_String_array *)ppMVar18 == (System_String_array *)0x0) goto label_0436354b;
              method_00 = "Custom Set:";
              bVar8 = System_String__StartsWith
                                ((System_String_o *)ppMVar18,(System_String_o *)"Custom Set:",(MethodInfo *)0x0
                                );
              lVar16 = MethodInfo_Void_Add;
              if ((char)bVar8 == '\0') {
                piVar1 = (int *)((long)&pSVar13->max_length + 4);
                *piVar1 = *piVar1 + 1;
                pIVar6 = pSVar13->bounds;
                if (pIVar6 == (Il2CppArrayBounds *)0x0) goto label_0436354b;
                uVar9 = (uint)pSVar13->max_length;
                if ((uint)pIVar6[1].lower_bound <= uVar9) {
                  method_00 = (MethodInfo *)(ulong)uVar15;
                  ppMVar18 = (MethodInfo **)pSVar13;
                  System_Collections_Generic_List_int___AddWithResize
                            ((System_Collections_Generic_List_int__o *)pSVar13,uVar15,
                             *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                  goto label_04363239;
                }
                *(uint *)&pSVar13->max_length = uVar9 + 1;
                *(uint *)((long)&pIVar6[2].length + (long)(int)uVar9 * 4) = uVar15;
                uVar9 = (uint)pSVar12->max_length;
                pSVar14 = (System_String_array *)(ulong)uVar9;
                if ((int)uVar9 <= (int)(uVar15 + 1)) goto label_043632f3;
              }
              else {
label_04363239:
                uVar9 = (uint)pSVar12->max_length;
                pSVar14 = (System_String_array *)(ulong)uVar9;
                if ((int)uVar9 <= (int)(uVar15 + 1)) goto label_043632f3;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar9);
          }
          goto label_04363550;
        }
label_043632f3:
        iVar19 = (int)pMVar17;
        if (iVar19 < 0) {
          return pSVar14;
        }
        if (pSVar13 != (System_String_array *)0x0) {
          if ((int)pSVar13->max_length <= iVar19) {
            return pSVar14;
          }
          method_00 = (MethodInfo *)((ulong)pMVar17 & 0xffffffff);
          uVar9 = System_Collections_Generic_List_int___get_Item
                            ((System_Collections_Generic_List_int__o *)pSVar13,iVar19,MethodInfo_Int32_get_Item);
          lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          ppMVar18 = (MethodInfo **)pSVar13;
          if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) &&
             (ppMVar18 = *(MethodInfo ***)(lVar16 + 0x20),
             (System_String_array *)ppMVar18 != (System_String_array *)0x0)) {
            method_00 = (MethodInfo *)(ulong)uVar9;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)ppMVar18,uVar9,MethodInfo_Void_set_Value)
            ;
            lVar16 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar16 != 0) && (lVar16 = *(long *)(lVar16 + 0x20), lVar16 != 0)) &&
               (ppMVar18 = *(MethodInfo ***)(lVar16 + 0x78),
               (System_String_array *)ppMVar18 != (System_String_array *)0x0)) {
              method_00 = (MethodInfo *)(ulong)uVar9;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)ppMVar18,uVar9,MethodInfo_Void_set_Value);
              if ((uint)pSVar12->max_length <= uVar9) goto label_04363550;
              pSVar12 = (System_String_array *)pSVar10->m_Items[0xc];
              if (pSVar12 == (System_String_array *)0x0) {
label_043633e4:
                pSVar13 = (System_String_array *)0x0;
                iVar19 = *(int *)(TypeInfo_Object + 0xe4);
              }
              else {
                pIVar7 = (pSVar12->obj).klass;
                bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
                if ((pIVar7->_2).naturalAligment < bVar2) goto label_043633e4;
                pSVar13 = (System_String_array *)0x0;
                if ((pIVar7->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorHumanMenu) {
                  pSVar13 = pSVar12;
                }
                iVar19 = *(int *)(TypeInfo_Object + 0xe4);
              }
              if (iVar19 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              ppMVar18 = (MethodInfo **)pSVar13;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pSVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if ((char)bVar8 != '\0') {
                if (pSVar13 == (System_String_array *)0x0) goto label_0436354b;
                ppMVar18 = (MethodInfo **)pSVar13->m_Items[0x17];
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                method_00 = (MethodInfo *)0x0;
                bVar8 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)ppMVar18,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar8 != '\0') {
                  __this_00 = (UI_GlobalSkinEditPopup_o *)pSVar13->m_Items[0x17];
                  if (__this_00 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                  if ((char)(__this_00->fields).IsActive != '\0') {
                    if ((char)(__this_00->fields)._hasBackup != '\0') {
                      UI_GlobalSkinEditPopup__RestoreBackup(__this_00,method_00);
                    }
                    (*(__this_00->klass->vtable)._22_Hide.methodPtr)(__this_00);
                  }
                }
              }
              pSVar12 = *(System_String_array **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
              if ((*(char *)&(pSVar12->obj).klass == '\0') &&
                 (*(char *)((long)&(pSVar12->obj).klass + 1) == '\0')) {
                return pSVar12;
              }
              if (g_data_057ae1b3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
                g_data_057ae1b3 = '\x01';
              }
              pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
              method_00 = (MethodInfo *)0x0;
              ppMVar18 = (MethodInfo **)pSVar12;
              System_Object___ctor((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
              ((System_String_Fields *)&pSVar12->bounds)->_stringLength = 0;
              if (pSVar12 != (System_String_array *)0x0) {
                pSVar12->m_Items[0] = (System_String_o *)pSVar10;
                il2cpp_runtime_helper_022b4080(pSVar12->m_Items,pSVar10);
                pSVar10 = (System_String_array *)
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    ((UnityEngine_MonoBehaviour_o *)pSVar10,
                                     (System_Collections_IEnumerator_o *)pSVar12,(MethodInfo *)0x0);
                return pSVar10;
              }
            }
          }
        }
      }
    }
  }
label_0436354b:
  il2cpp_runtime_helper_022b2c90();
label_04363550:
  il2cpp_runtime_helper_022b2ca0();
  if (*(char *)(((System_String_array *)ppMVar18)->m_Items + 0x14) != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)ppMVar18,method_00);
  }
  pIVar7 = (((System_String_array *)ppMVar18)->obj).klass;
  pSVar10 = (System_String_array *)(*pIVar7->vtable[0x16].methodPtr)(ppMVar18,pIVar7->vtable[0x16].method);
  return pSVar10;
}


// UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetIndex
// il2cpp: int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4362e10

int32_t UI_CharacterEditorSkinsPanel__GetFilteredGlobalSetIndex
                  (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  System_Collections_Generic_Dictionary_string__Button__o *pSVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Int32_array *pSVar5;
  int32_t *piVar6;
  bool_conflict bVar7;
  uint uVar8;
  int32_t iVar9;
  System_String_array *pSVar10;
  UI_CharacterEditorSkinsPanel_o *__this_01;
  UI_GlobalSkinEditPopup_o *pUVar11;
  char *pcVar12;
  UnityEngine_Coroutine_o *pUVar13;
  UI_GlobalSkinEditPopup_o *x;
  uint uVar14;
  long lVar15;
  MethodInfo *pMVar16;
  MethodInfo *method_00;
  MethodInfo **ppMVar17;
  UI_GlobalSkinEditPopup_o *__this_02;
  int iVar18;
  
  if (g_data_057ae1b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppMVar17 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b1 = '\x01';
    __this = (UI_CharacterEditorSkinsPanel_o *)ppMVar17;
  }
  lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (((lVar15 == 0) ||
      (__this = *(UI_CharacterEditorSkinsPanel_o **)(lVar15 + 0x20),
      __this == (UI_CharacterEditorSkinsPanel_o *)0x0)) ||
     (pSVar3 = (__this->fields)._topButtons,
     pSVar3 == (System_Collections_Generic_Dictionary_string__Button__o *)0x0)) {
label_04363038:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar9 = *(int32_t *)((long)&(pSVar3->fields)._buckets + 4);
    pSVar10 = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)__this,MethodInfo_String_GetSetNames);
    __this_01 = (UI_CharacterEditorSkinsPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
    __this = __this_01;
    System_Collections_Generic_List_int____ctor
              ((System_Collections_Generic_List_int__o *)__this_01,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
    if (pSVar10 == (System_String_array *)0x0) goto label_04363038;
    uVar8 = (uint)pSVar10->max_length;
    if (__this_01 == (UI_CharacterEditorSkinsPanel_o *)0x0) {
      if (0 < (int)uVar8) {
        lVar15 = 0;
        do {
          if (uVar8 <= (uint)lVar15) goto label_0436303d;
          __this = (UI_CharacterEditorSkinsPanel_o *)pSVar10->m_Items[lVar15];
          if ((__this == (UI_CharacterEditorSkinsPanel_o *)0x0) ||
             (bVar7 = System_String__StartsWith
                                ((System_String_o *)__this,(System_String_o *)"Custom Set:",(MethodInfo *)0x0),
             (char)bVar7 == '\0')) goto label_04363038;
          uVar8 = (uint)pSVar10->max_length;
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < (int)uVar8);
      }
label_04363008:
      if (__this_01 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
        iVar9 = System_Collections_Generic_List_int___IndexOf
                          ((System_Collections_Generic_List_int__o *)__this_01,iVar9,MethodInfo_Int32_IndexOf);
        if (iVar9 < 0) {
          iVar9 = 0;
        }
        return iVar9;
      }
      goto label_04363038;
    }
    if ((int)uVar8 < 1) goto label_04363008;
    uVar14 = 0;
    if (uVar8 != 0) {
      do {
        __this = (UI_CharacterEditorSkinsPanel_o *)pSVar10->m_Items[(int)uVar14];
        if (__this == (UI_CharacterEditorSkinsPanel_o *)0x0) goto label_04363038;
        bVar7 = System_String__StartsWith
                          ((System_String_o *)__this,(System_String_o *)"Custom Set:",(MethodInfo *)0x0);
        lVar15 = MethodInfo_Void_Add;
        if ((char)bVar7 == '\0') {
          piVar1 = (int *)((long)&(__this_01->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar4 = (System_Collections_Specialized_OrderedDictionary_o *)(__this_01->fields).m_CachedPtr;
          if (pSVar4 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_04363038;
          uVar8 = *(uint *)&(__this_01->fields).m_CancellationTokenSource;
          if (*(uint *)&(pSVar4->fields)._objectsTable <= uVar8) {
            __this = __this_01;
            System_Collections_Generic_List_int___AddWithResize
                      ((System_Collections_Generic_List_int__o *)__this_01,uVar14,
                       *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            goto label_04362f59;
          }
          *(uint *)&(__this_01->fields).m_CancellationTokenSource = uVar8 + 1;
          (&(pSVar4->fields)._initialCapacity)[(int)uVar8] = uVar14;
          uVar8 = (uint)pSVar10->max_length;
          if ((int)uVar8 <= (int)(uVar14 + 1)) goto label_04363008;
        }
        else {
label_04362f59:
          uVar8 = (uint)pSVar10->max_length;
          if ((int)uVar8 <= (int)(uVar14 + 1)) goto label_04363008;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar8);
    }
  }
label_0436303d:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae1b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    g_data_057ae1b6 = '\x01';
  }
  pUVar11 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
  pMVar16 = (MethodInfo *)0x0;
  __this_02 = pUVar11;
  System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar11->fields).m_CachedPtr = 0;
  if (pUVar11 != (UI_GlobalSkinEditPopup_o *)0x0) {
    (pUVar11->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar11->fields).SinglePanel,__this);
    return (int32_t)pUVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar16;
  ppMVar17 = (MethodInfo **)__this_02;
  if (g_data_057ae1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppMVar17 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b2 = '\x01';
  }
  lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar15 != 0) {
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar15 + 0x20);
    ppMVar17 = (MethodInfo **)(UI_GlobalSkinEditPopup_o *)0x0;
    if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
      pSVar10 = Settings_SetSettingsContainer_object___GetSetNames(__this_00,MethodInfo_String_GetSetNames);
      pUVar11 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
      method_00 = MethodInfo_List_1_System_Int32;
      ppMVar17 = (MethodInfo **)pUVar11;
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_List_int__o *)pUVar11,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
      if (pSVar10 != (System_String_array *)0x0) {
        uVar8 = (uint)pSVar10->max_length;
        pcVar12 = (char *)(ulong)uVar8;
        if (pUVar11 == (UI_GlobalSkinEditPopup_o *)0x0) {
          if (0 < (int)uVar8) {
            lVar15 = 0;
            do {
              if ((uint)pcVar12 <= (uint)lVar15) goto label_04363550;
              ppMVar17 = (MethodInfo **)pSVar10->m_Items[lVar15];
              if (((UI_GlobalSkinEditPopup_o *)ppMVar17 == (UI_GlobalSkinEditPopup_o *)0x0) ||
                 (method_00 = "Custom Set:",
                 bVar7 = System_String__StartsWith
                                   ((System_String_o *)ppMVar17,(System_String_o *)"Custom Set:",
                                    (MethodInfo *)0x0), (char)bVar7 == '\0')) goto label_0436354b;
              uVar8 = (uint)pSVar10->max_length;
              pcVar12 = (char *)(ulong)uVar8;
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < (int)uVar8);
          }
        }
        else if (0 < (int)uVar8) {
          uVar14 = 0;
          if (uVar8 != 0) {
            do {
              ppMVar17 = (MethodInfo **)pSVar10->m_Items[(int)uVar14];
              if ((UI_GlobalSkinEditPopup_o *)ppMVar17 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
              method_00 = "Custom Set:";
              bVar7 = System_String__StartsWith
                                ((System_String_o *)ppMVar17,(System_String_o *)"Custom Set:",(MethodInfo *)0x0
                                );
              lVar15 = MethodInfo_Void_Add;
              if ((char)bVar7 == '\0') {
                piVar6 = (int32_t *)((long)&(pUVar11->fields).m_CancellationTokenSource + 4);
                *piVar6 = *piVar6 + 1;
                pSVar5 = (System_Int32_array *)(pUVar11->fields).m_CachedPtr;
                if (pSVar5 == (System_Int32_array *)0x0) goto label_0436354b;
                uVar8 = *(uint *)&(pUVar11->fields).m_CancellationTokenSource;
                if ((uint)pSVar5->max_length <= uVar8) {
                  method_00 = (MethodInfo *)(ulong)uVar14;
                  ppMVar17 = (MethodInfo **)pUVar11;
                  System_Collections_Generic_List_int___AddWithResize
                            ((System_Collections_Generic_List_int__o *)pUVar11,uVar14,
                             *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  goto label_04363239;
                }
                *(uint *)&(pUVar11->fields).m_CancellationTokenSource = uVar8 + 1;
                pSVar5->m_Items[(int)uVar8] = uVar14;
                uVar8 = (uint)pSVar10->max_length;
                pcVar12 = (char *)(ulong)uVar8;
                if ((int)uVar8 <= (int)(uVar14 + 1)) goto label_043632f3;
              }
              else {
label_04363239:
                uVar8 = (uint)pSVar10->max_length;
                pcVar12 = (char *)(ulong)uVar8;
                if ((int)uVar8 <= (int)(uVar14 + 1)) goto label_043632f3;
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar8);
          }
          goto label_04363550;
        }
label_043632f3:
        iVar18 = (int)pMVar16;
        if (iVar18 < 0) goto label_0436350e;
        if (pUVar11 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
        if (*(int *)&(pUVar11->fields).m_CancellationTokenSource <= iVar18) goto label_0436350e;
        method_00 = (MethodInfo *)((ulong)pMVar16 & 0xffffffff);
        uVar8 = System_Collections_Generic_List_int___get_Item
                          ((System_Collections_Generic_List_int__o *)pUVar11,iVar18,MethodInfo_Int32_get_Item);
        lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        ppMVar17 = (MethodInfo **)pUVar11;
        if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x20), lVar15 != 0)) &&
           (ppMVar17 = *(MethodInfo ***)(lVar15 + 0x20),
           (UI_GlobalSkinEditPopup_o *)ppMVar17 != (UI_GlobalSkinEditPopup_o *)0x0)) {
          method_00 = (MethodInfo *)(ulong)uVar8;
          Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)ppMVar17,uVar8,MethodInfo_Void_set_Value);
          lVar15 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          if (((lVar15 != 0) && (lVar15 = *(long *)(lVar15 + 0x20), lVar15 != 0)) &&
             (ppMVar17 = *(MethodInfo ***)(lVar15 + 0x78),
             (UI_GlobalSkinEditPopup_o *)ppMVar17 != (UI_GlobalSkinEditPopup_o *)0x0)) {
            method_00 = (MethodInfo *)(ulong)uVar8;
            Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)ppMVar17,uVar8,MethodInfo_Void_set_Value)
            ;
            if ((uint)pSVar10->max_length <= uVar8) goto label_04363550;
            pUVar11 = *(UI_GlobalSkinEditPopup_o **)&(__this_02->fields)._currentAnimationValue;
            if (pUVar11 == (UI_GlobalSkinEditPopup_o *)0x0) {
label_043633e4:
              x = (UI_GlobalSkinEditPopup_o *)0x0;
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            else {
              bVar2 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
              if ((pUVar11->klass->_2).naturalAligment < bVar2) goto label_043633e4;
              x = (UI_GlobalSkinEditPopup_o *)0x0;
              if ((pUVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CharacterEditorHumanMenu) {
                x = pUVar11;
              }
              iVar18 = *(int *)(TypeInfo_Object + 0xe4);
            }
            if (iVar18 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo *)0x0;
            ppMVar17 = (MethodInfo **)x;
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              if (x == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
              ppMVar17 = (MethodInfo **)x[1].fields.m_CachedPtr;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)ppMVar17,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pUVar11 = (UI_GlobalSkinEditPopup_o *)x[1].fields.m_CachedPtr;
                if (pUVar11 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                if ((char)(pUVar11->fields).IsActive != '\0') {
                  if ((char)(pUVar11->fields)._hasBackup != '\0') {
                    UI_GlobalSkinEditPopup__RestoreBackup(pUVar11,method_00);
                  }
                  (*(pUVar11->klass->vtable)._22_Hide.methodPtr)(pUVar11);
                }
              }
            }
            pcVar12 = *(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
            if ((*pcVar12 == '\0') && (pcVar12[1] == '\0')) {
label_0436350e:
              return (int32_t)pcVar12;
            }
            if (g_data_057ae1b3 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
              g_data_057ae1b3 = '\x01';
            }
            pUVar11 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
            method_00 = (MethodInfo *)0x0;
            ppMVar17 = (MethodInfo **)pUVar11;
            System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
            *(int32_t *)&(pUVar11->fields).m_CachedPtr = 0;
            if (pUVar11 != (UI_GlobalSkinEditPopup_o *)0x0) {
              (pUVar11->fields).SinglePanel = (UnityEngine_Transform_o *)__this_02;
              il2cpp_runtime_helper_022b4080(&(pUVar11->fields).SinglePanel,__this_02);
              pUVar13 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                  ((UnityEngine_MonoBehaviour_o *)__this_02,
                                   (System_Collections_IEnumerator_o *)pUVar11,(MethodInfo *)0x0);
              return (int32_t)pUVar13;
            }
          }
        }
      }
    }
  }
label_0436354b:
  il2cpp_runtime_helper_022b2c90();
label_04363550:
  il2cpp_runtime_helper_022b2ca0();
  if ((char)(((UI_GlobalSkinEditPopup_o *)ppMVar17)->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)ppMVar17,method_00);
  }
  iVar9 = (*(((UI_GlobalSkinEditPopup_o *)ppMVar17)->klass->vtable)._22_Hide.methodPtr)
                    (ppMVar17,(((UI_GlobalSkinEditPopup_o *)ppMVar17)->klass->vtable)._22_Hide.method);
  return iVar9;
}


// UI.CharacterEditorSkinsPanel$$OnGlobalSkinSetSelected
// il2cpp: void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected (UI_CharacterEditorSkinsPanel_o* __this, int32_t filteredIndex, const MethodInfo* method);
// 0x43630c0

void UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected
               (UI_CharacterEditorSkinsPanel_o *__this,int32_t filteredIndex,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Int32_array *pSVar3;
  int32_t *piVar4;
  bool_conflict bVar5;
  uint uVar6;
  System_String_array *pSVar7;
  UI_GlobalSkinEditPopup_o *pUVar8;
  UI_GlobalSkinEditPopup_o *x;
  uint item;
  long lVar9;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo **__this_01;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,filteredIndex);
  __this_01 = (MethodInfo **)__this;
  if (g_data_057ae1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_01 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b2 = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar9 != 0) {
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar9 + 0x20);
    __this_01 = (MethodInfo **)(UI_GlobalSkinEditPopup_o *)0x0;
    if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
      pSVar7 = Settings_SetSettingsContainer_object___GetSetNames(__this_00,MethodInfo_String_GetSetNames);
      pUVar8 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
      method_00 = MethodInfo_List_1_System_Int32;
      __this_01 = (MethodInfo **)pUVar8;
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_List_int__o *)pUVar8,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
      if (pSVar7 != (System_String_array *)0x0) {
        uVar6 = (uint)pSVar7->max_length;
        if (pUVar8 == (UI_GlobalSkinEditPopup_o *)0x0) {
          if (0 < (int)uVar6) {
            lVar9 = 0;
            do {
              if (uVar6 <= (uint)lVar9) goto label_04363550;
              __this_01 = (MethodInfo **)pSVar7->m_Items[lVar9];
              if (((UI_GlobalSkinEditPopup_o *)__this_01 == (UI_GlobalSkinEditPopup_o *)0x0) ||
                 (method_00 = "Custom Set:",
                 bVar5 = System_String__StartsWith
                                   ((System_String_o *)__this_01,(System_String_o *)"Custom Set:",
                                    (MethodInfo *)0x0), (char)bVar5 == '\0')) goto label_0436354b;
              uVar6 = (uint)pSVar7->max_length;
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar6);
          }
        }
        else if (0 < (int)uVar6) {
          item = 0;
          if (uVar6 != 0) {
            do {
              __this_01 = (MethodInfo **)pSVar7->m_Items[(int)item];
              if ((UI_GlobalSkinEditPopup_o *)__this_01 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
              method_00 = "Custom Set:";
              bVar5 = System_String__StartsWith
                                ((System_String_o *)__this_01,(System_String_o *)"Custom Set:",
                                 (MethodInfo *)0x0);
              lVar9 = MethodInfo_Void_Add;
              if ((char)bVar5 == '\0') {
                piVar4 = (int32_t *)((long)&(pUVar8->fields).m_CancellationTokenSource + 4);
                *piVar4 = *piVar4 + 1;
                pSVar3 = (System_Int32_array *)(pUVar8->fields).m_CachedPtr;
                if (pSVar3 == (System_Int32_array *)0x0) goto label_0436354b;
                uVar6 = *(uint *)&(pUVar8->fields).m_CancellationTokenSource;
                if ((uint)pSVar3->max_length <= uVar6) {
                  method_00 = (MethodInfo *)(ulong)item;
                  __this_01 = (MethodInfo **)pUVar8;
                  System_Collections_Generic_List_int___AddWithResize
                            ((System_Collections_Generic_List_int__o *)pUVar8,item,
                             *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  goto label_04363239;
                }
                *(uint *)&(pUVar8->fields).m_CancellationTokenSource = uVar6 + 1;
                pSVar3->m_Items[(int)uVar6] = item;
                uVar6 = (uint)pSVar7->max_length;
                if ((int)uVar6 <= (int)(item + 1)) goto label_043632f3;
              }
              else {
label_04363239:
                uVar6 = (uint)pSVar7->max_length;
                if ((int)uVar6 <= (int)(item + 1)) goto label_043632f3;
              }
              item = item + 1;
            } while (item < uVar6);
          }
          goto label_04363550;
        }
label_043632f3:
        if (filteredIndex < 0) {
          return;
        }
        if (pUVar8 != (UI_GlobalSkinEditPopup_o *)0x0) {
          if (*(int *)&(pUVar8->fields).m_CancellationTokenSource <= filteredIndex) {
            return;
          }
          method_00 = (MethodInfo *)(ulong)(uint)filteredIndex;
          uVar6 = System_Collections_Generic_List_int___get_Item
                            ((System_Collections_Generic_List_int__o *)pUVar8,filteredIndex,MethodInfo_Int32_get_Item);
          lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          __this_01 = (MethodInfo **)pUVar8;
          if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) &&
             (__this_01 = *(MethodInfo ***)(lVar9 + 0x20),
             (UI_GlobalSkinEditPopup_o *)__this_01 != (UI_GlobalSkinEditPopup_o *)0x0)) {
            method_00 = (MethodInfo *)(ulong)uVar6;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this_01,uVar6,MethodInfo_Void_set_Value);
            lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) &&
               (__this_01 = *(MethodInfo ***)(lVar9 + 0x78),
               (UI_GlobalSkinEditPopup_o *)__this_01 != (UI_GlobalSkinEditPopup_o *)0x0)) {
              method_00 = (MethodInfo *)(ulong)uVar6;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)__this_01,uVar6,MethodInfo_Void_set_Value);
              if ((uint)pSVar7->max_length <= uVar6) goto label_04363550;
              pUVar8 = (UI_GlobalSkinEditPopup_o *)(__this->fields)._menu;
              if (pUVar8 == (UI_GlobalSkinEditPopup_o *)0x0) {
label_043633e4:
                x = (UI_GlobalSkinEditPopup_o *)0x0;
                iVar2 = *(int *)(TypeInfo_Object + 0xe4);
              }
              else {
                bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
                if ((pUVar8->klass->_2).naturalAligment < bVar1) goto label_043633e4;
                x = (UI_GlobalSkinEditPopup_o *)0x0;
                if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
                  x = pUVar8;
                }
                iVar2 = *(int *)(TypeInfo_Object + 0xe4);
              }
              if (iVar2 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              __this_01 = (MethodInfo **)x;
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                if (x == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                __this_01 = (MethodInfo **)x[1].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                method_00 = (MethodInfo *)0x0;
                bVar5 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar5 != '\0') {
                  pUVar8 = (UI_GlobalSkinEditPopup_o *)x[1].fields.m_CachedPtr;
                  if (pUVar8 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                  if ((char)(pUVar8->fields).IsActive != '\0') {
                    if ((char)(pUVar8->fields)._hasBackup != '\0') {
                      UI_GlobalSkinEditPopup__RestoreBackup(pUVar8,method_00);
                    }
                    (*(pUVar8->klass->vtable)._22_Hide.methodPtr)(pUVar8);
                  }
                }
              }
              if ((**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') && ((*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1] == '\0')
                 ) {
                return;
              }
              if (g_data_057ae1b3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
                g_data_057ae1b3 = '\x01';
              }
              pUVar8 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
              method_00 = (MethodInfo *)0x0;
              __this_01 = (MethodInfo **)pUVar8;
              System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
              *(int32_t *)&(pUVar8->fields).m_CachedPtr = 0;
              if (pUVar8 != (UI_GlobalSkinEditPopup_o *)0x0) {
                (pUVar8->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
                il2cpp_runtime_helper_022b4080(&(pUVar8->fields).SinglePanel,__this);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pUVar8,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_0436354b:
  il2cpp_runtime_helper_022b2c90();
label_04363550:
  il2cpp_runtime_helper_022b2ca0();
  if ((char)(((UI_GlobalSkinEditPopup_o *)__this_01)->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)__this_01,method_00);
  }
  (*(((UI_GlobalSkinEditPopup_o *)__this_01)->klass->vtable)._22_Hide.methodPtr)
            (__this_01,(((UI_GlobalSkinEditPopup_o *)__this_01)->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterGlobalSetChange
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4363590

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterGlobalSetChange
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae1b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
    g_data_057ae1b3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.CharacterEditorSkinsPanel$$OnSkinPreviewToggle
// il2cpp: void UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4363620

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
  Il2CppClass *__this_00;
  Characters_DummyHuman_c *pCVar8;
  Settings_TypedSetting_bool__o *pSVar9;
  UI_CharacterEditorMenu_o *pUVar10;
  Settings_SetSettingsContainer_T__o *__this_01;
  UI_ExternalLinkPopup_o *pUVar11;
  Characters_HumanSetup_o *__this_02;
  char cVar12;
  bool_conflict bVar13;
  Settings_HumanCustomSet_o *customSet;
  Il2CppObject *pIVar14;
  long *plVar15;
  undefined8 uVar16;
  System_String_o *pSVar17;
  System_String_o *str0;
  long lVar18;
  long *plVar19;
  UI_CharacterEditorMenu_o *x;
  undefined1 auVar20 [12];
  
  if (g_data_057ae1b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae1b4 = '\x01';
  }
  if ((char)(__this->fields)._isRebuildingPanel != '\0') {
    return;
  }
  pSVar6 = (__this->fields)._globalSkinPreview;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
label_04363a92:
    il2cpp_runtime_helper_022b2c90();
label_04363a97:
    il2cpp_runtime_helper_022b2c90();
label_04363a9c:
    il2cpp_runtime_helper_022b2c90();
label_04363aa1:
    il2cpp_runtime_helper_022b2c90();
label_04363aa6:
    il2cpp_runtime_helper_022b2c90();
label_04363aab:
    il2cpp_runtime_helper_022b2c90();
label_04363ab0:
    il2cpp_runtime_helper_022b2c90();
label_04363ab5:
    il2cpp_runtime_helper_022b2c90();
label_04363aba:
    il2cpp_runtime_helper_022b2c90();
label_04363abf:
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
label_04363ac4:
    il2cpp_runtime_helper_022b2fd0(customSet);
label_04363acc:
    il2cpp_runtime_helper_022b2c90();
label_04363ad1:
    il2cpp_runtime_helper_022b2c90();
label_04363ad6:
    il2cpp_runtime_helper_022b2c90();
label_04363adb:
    il2cpp_runtime_helper_022b2c90();
label_04363ae0:
    il2cpp_runtime_helper_022b2c90();
label_04363ae5:
    il2cpp_runtime_helper_022b2c90();
label_04363aea:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
    pbVar7 = *(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
    *pbVar7 = bVar1;
    pSVar6 = (__this->fields)._customSkinPreview;
    if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_04363a97;
    pbVar7[1] = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
    plVar15 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar15 == (long *)0x0) {
      return;
    }
    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) != TypeInfo_CharacterEditorGameManager
       )) {
      il2cpp_runtime_helper_022b2fd0();
      goto label_04363a92;
    }
    __this_00 = (Il2CppClass *)plVar15[7];
    if (__this_00 == (Il2CppClass *)0x0) {
      return;
    }
    pCVar8 = (__this_00->_1).image;
    bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((pCVar8->_2).naturalAligment < bVar2) {
      return;
    }
    if ((pCVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman) {
      return;
    }
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar18 == 0) goto label_04363a9c;
    lVar18 = *(long *)(lVar18 + 0x20);
    if (lVar18 == 0) goto label_04363aa1;
    pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar18 + 0x60);
    if (pSVar9 == (Settings_TypedSetting_bool__o *)0x0) goto label_04363aa6;
    if (*(long *)(lVar18 + 0x58) == 0) goto label_04363aab;
    uVar3 = *(undefined1 *)((long)&(pSVar9->fields).DefaultValue + 1);
    uVar4 = *(undefined1 *)(*(long *)(lVar18 + 0x58) + 0x11);
    Settings_TypedSetting_bool___set_Value(pSVar9,(uint)bVar1,MethodInfo_Void_set_Value);
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar18 == 0) goto label_04363ab0;
    lVar18 = *(long *)(lVar18 + 0x20);
    if (lVar18 == 0) goto label_04363ab5;
    pSVar6 = (__this->fields)._customSkinPreview;
    if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_04363aba;
    pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar18 + 0x58);
    if (pSVar9 == (Settings_TypedSetting_bool__o *)0x0) goto label_04363abf;
    Settings_TypedSetting_bool___set_Value
              (pSVar9,(uint)*(byte *)((long)&(pSVar6->fields).DefaultValue + 1),MethodInfo_Void_set_Value);
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 == (UI_CharacterEditorMenu_o *)0x0) {
label_04363894:
      x = (UI_CharacterEditorMenu_o *)0x0;
      iVar5 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar10->klass->_2).naturalAligment < bVar1) goto label_04363894;
      x = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        x = pUVar10;
      }
      iVar5 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar18 == 0) goto label_04363acc;
      __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar18 + 0x20);
      if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04363ad1;
      customSet = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (customSet != (Settings_HumanCustomSet_o *)0x0) {
        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        if ((bVar1 <= (customSet->klass->_2).naturalAligment) &&
           ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) goto label_04363956;
        goto label_04363ac4;
      }
label_04363956:
      if (__this_00 == (Il2CppClass *)0x0) goto label_04363adb;
      if (x == (UI_CharacterEditorMenu_o *)0x0) goto label_04363ae0;
      pUVar11 = x[1].fields.ExternalLinkPopup;
      if (pUVar11 == (UI_ExternalLinkPopup_o *)0x0) goto label_04363ae5;
      __this_02 = *(Characters_HumanSetup_o **)&(__this_00->_1).this_arg.bits;
      if (__this_02 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load
                  (__this_02,customSet,*(int32_t *)((long)&(pUVar11->fields).m_CachedPtr + 4),0,
                   (MethodInfo *)0x0);
        if (g_data_057ae1b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAfterReset_d__29);
          g_data_057ae1b5 = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAfterReset_d__29);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar14[1].klass = 0;
        if (pIVar14 != (Il2CppObject *)0x0) {
          pIVar14[2].monitor = __this;
          il2cpp_runtime_helper_022b4080(&pIVar14[2].monitor,__this);
          pIVar14[2].klass = __this_00;
          il2cpp_runtime_helper_022b4080(pIVar14 + 2,__this_00);
          *(undefined1 *)&pIVar14[3].klass = uVar3;
          *(undefined1 *)((long)&pIVar14[3].klass + 1) = uVar4;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar14,
                     (MethodInfo *)0x0);
          return;
        }
        goto label_04363af4;
      }
      goto label_04363aea;
    }
    if (__this_00 == (Il2CppClass *)0x0) goto label_04363ad6;
    Characters_DummyHuman__LoadSkin((Characters_DummyHuman_o *)__this_00,(MethodInfo *)0x0);
    if (g_data_057ae1b7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RestoreOriginalSkinSettings_d__31);
      g_data_057ae1b7 = '\x01';
    }
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RestoreOriginalSkinSettings_d__31);
    System_Object___ctor(pIVar14,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar14[1].klass = 0;
    if (pIVar14 != (Il2CppObject *)0x0) {
      *(undefined1 *)&pIVar14[2].klass = uVar3;
      *(undefined1 *)((long)&pIVar14[2].klass + 1) = uVar4;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar14,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04363af4:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  if (auVar20._8_4_ != 1) {
    _Unwind_Resume(auVar20._0_8_);
  }
  plVar15 = (long *)__cxa_begin_catch(auVar20._0_8_);
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar12 = il2cpp_runtime_helper_0233e000(uVar16,*(undefined8 *)*plVar15);
  if (cVar12 != '\0') {
    plVar15 = (long *)*plVar15;
    __cxa_end_catch();
    if (plVar15 != (long *)0x0) {
      pSVar17 = (System_String_o *)(**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error updating skin preview: ");
      pSVar17 = System_String__Concat_3ae5ba0(str0,pSVar17,(MethodInfo *)0x0);
      lVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar18 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar18);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar15 = (long *)0x0;
  }
  plVar19 = (long *)__cxa_allocate_exception(8);
  *plVar19 = *plVar15;
  __cxa_throw(plVar19,&PTR_PTR_05215060,0);
}


// UI.CharacterEditorSkinsPanel$$LoadSkinAfterReset
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__LoadSkinAfterReset (UI_CharacterEditorSkinsPanel_o* __this, Characters_DummyHuman_o* dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x4363d70

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__LoadSkinAfterReset
          (UI_CharacterEditorSkinsPanel_o *__this,Characters_DummyHuman_o *dummyHuman,
          bool_conflict originalGlobalEnabled,bool_conflict originalSetEnabled,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined1 extraout_DL;
  undefined1 uVar2;
  undefined4 uVar3;
  
  if (g_data_057ae1b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAfterReset_d__29);
    g_data_057ae1b5 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAfterReset_d__29);
  uVar2 = 0;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pIVar1[2].monitor,__this);
    pIVar1[2].klass = (Il2CppClass *)dummyHuman;
    il2cpp_runtime_helper_022b4080(pIVar1 + 2,dummyHuman);
    *(char *)&pIVar1[3].klass = (char)originalGlobalEnabled;
    *(char *)((long)&pIVar1[3].klass + 1) = (char)originalSetEnabled;
    return (System_Collections_IEnumerator_o *)pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RestoreOriginalSkinSettings_d__31);
    g_data_057ae1b7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RestoreOriginalSkinSettings_d__31);
  uVar3 = 0;
  pIVar1 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    *(undefined1 *)&__this_00[2].klass = uVar2;
    *(undefined1 *)((long)&__this_00[2].klass + 1) = extraout_DL;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = uVar3;
  return extraout_RAX;
}


// UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterInitialSetup
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4363050

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__ApplySkinPreviewAfterInitialSetup
          (UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Int32_array *pSVar2;
  int32_t *piVar3;
  bool_conflict bVar4;
  uint uVar5;
  UI_GlobalSkinEditPopup_o *pUVar6;
  System_String_array *pSVar7;
  UnityEngine_Coroutine_o *pUVar8;
  System_Collections_IEnumerator_o *pSVar9;
  UI_GlobalSkinEditPopup_o *x;
  uint item;
  long lVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  UI_GlobalSkinEditPopup_o *__this_01;
  MethodInfo **__this_02;
  int iVar12;
  
  if (g_data_057ae1b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
    g_data_057ae1b6 = '\x01';
  }
  pUVar6 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterInitialSetup_d__30);
  pMVar11 = (MethodInfo *)0x0;
  __this_01 = pUVar6;
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar6->fields).m_CachedPtr = 0;
  if (pUVar6 != (UI_GlobalSkinEditPopup_o *)0x0) {
    (pUVar6->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar6->fields).SinglePanel,__this);
    return (System_Collections_IEnumerator_o *)pUVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar11;
  __this_02 = (MethodInfo **)__this_01;
  if (g_data_057ae1b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntSetting_GetSelectedSetIndex);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    __this_02 = &"Custom Set:";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1b2 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if (lVar10 != 0) {
    __this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x20);
    __this_02 = (MethodInfo **)(UI_GlobalSkinEditPopup_o *)0x0;
    if (__this_00 != (Settings_SetSettingsContainer_T__o *)0x0) {
      pSVar7 = Settings_SetSettingsContainer_object___GetSetNames(__this_00,MethodInfo_String_GetSetNames);
      pUVar6 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
      method_00 = MethodInfo_List_1_System_Int32;
      __this_02 = (MethodInfo **)pUVar6;
      System_Collections_Generic_List_int____ctor
                ((System_Collections_Generic_List_int__o *)pUVar6,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
      if (pSVar7 != (System_String_array *)0x0) {
        uVar5 = (uint)pSVar7->max_length;
        pSVar9 = (System_Collections_IEnumerator_o *)(ulong)uVar5;
        if (pUVar6 == (UI_GlobalSkinEditPopup_o *)0x0) {
          if (0 < (int)uVar5) {
            lVar10 = 0;
            do {
              if ((uint)pSVar9 <= (uint)lVar10) goto label_04363550;
              __this_02 = (MethodInfo **)pSVar7->m_Items[lVar10];
              if (((UI_GlobalSkinEditPopup_o *)__this_02 == (UI_GlobalSkinEditPopup_o *)0x0) ||
                 (method_00 = "Custom Set:",
                 bVar4 = System_String__StartsWith
                                   ((System_String_o *)__this_02,(System_String_o *)"Custom Set:",
                                    (MethodInfo *)0x0), (char)bVar4 == '\0')) goto label_0436354b;
              uVar5 = (uint)pSVar7->max_length;
              pSVar9 = (System_Collections_IEnumerator_o *)(ulong)uVar5;
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < (int)uVar5);
          }
        }
        else if (0 < (int)uVar5) {
          item = 0;
          if (uVar5 != 0) {
            do {
              __this_02 = (MethodInfo **)pSVar7->m_Items[(int)item];
              if ((UI_GlobalSkinEditPopup_o *)__this_02 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
              method_00 = "Custom Set:";
              bVar4 = System_String__StartsWith
                                ((System_String_o *)__this_02,(System_String_o *)"Custom Set:",
                                 (MethodInfo *)0x0);
              lVar10 = MethodInfo_Void_Add;
              if ((char)bVar4 == '\0') {
                piVar3 = (int32_t *)((long)&(pUVar6->fields).m_CancellationTokenSource + 4);
                *piVar3 = *piVar3 + 1;
                pSVar2 = (System_Int32_array *)(pUVar6->fields).m_CachedPtr;
                if (pSVar2 == (System_Int32_array *)0x0) goto label_0436354b;
                uVar5 = *(uint *)&(pUVar6->fields).m_CancellationTokenSource;
                if ((uint)pSVar2->max_length <= uVar5) {
                  method_00 = (MethodInfo *)(ulong)item;
                  __this_02 = (MethodInfo **)pUVar6;
                  System_Collections_Generic_List_int___AddWithResize
                            ((System_Collections_Generic_List_int__o *)pUVar6,item,
                             *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  goto label_04363239;
                }
                *(uint *)&(pUVar6->fields).m_CancellationTokenSource = uVar5 + 1;
                pSVar2->m_Items[(int)uVar5] = item;
                uVar5 = (uint)pSVar7->max_length;
                pSVar9 = (System_Collections_IEnumerator_o *)(ulong)uVar5;
                if ((int)uVar5 <= (int)(item + 1)) goto label_043632f3;
              }
              else {
label_04363239:
                uVar5 = (uint)pSVar7->max_length;
                pSVar9 = (System_Collections_IEnumerator_o *)(ulong)uVar5;
                if ((int)uVar5 <= (int)(item + 1)) goto label_043632f3;
              }
              item = item + 1;
            } while (item < uVar5);
          }
          goto label_04363550;
        }
label_043632f3:
        iVar12 = (int)pMVar11;
        if (iVar12 < 0) {
          return pSVar9;
        }
        if (pUVar6 != (UI_GlobalSkinEditPopup_o *)0x0) {
          if (*(int *)&(pUVar6->fields).m_CancellationTokenSource <= iVar12) {
            return pSVar9;
          }
          method_00 = (MethodInfo *)((ulong)pMVar11 & 0xffffffff);
          uVar5 = System_Collections_Generic_List_int___get_Item
                            ((System_Collections_Generic_List_int__o *)pUVar6,iVar12,MethodInfo_Int32_get_Item);
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
          __this_02 = (MethodInfo **)pUVar6;
          if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) &&
             (__this_02 = *(MethodInfo ***)(lVar10 + 0x20),
             (UI_GlobalSkinEditPopup_o *)__this_02 != (UI_GlobalSkinEditPopup_o *)0x0)) {
            method_00 = (MethodInfo *)(ulong)uVar5;
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)__this_02,uVar5,MethodInfo_Void_set_Value);
            lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) &&
               (__this_02 = *(MethodInfo ***)(lVar10 + 0x78),
               (UI_GlobalSkinEditPopup_o *)__this_02 != (UI_GlobalSkinEditPopup_o *)0x0)) {
              method_00 = (MethodInfo *)(ulong)uVar5;
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)__this_02,uVar5,MethodInfo_Void_set_Value);
              if ((uint)pSVar7->max_length <= uVar5) goto label_04363550;
              pUVar6 = *(UI_GlobalSkinEditPopup_o **)&(__this_01->fields)._currentAnimationValue;
              if (pUVar6 == (UI_GlobalSkinEditPopup_o *)0x0) {
label_043633e4:
                x = (UI_GlobalSkinEditPopup_o *)0x0;
                iVar12 = *(int *)(TypeInfo_Object + 0xe4);
              }
              else {
                bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
                if ((pUVar6->klass->_2).naturalAligment < bVar1) goto label_043633e4;
                x = (UI_GlobalSkinEditPopup_o *)0x0;
                if ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
                  x = pUVar6;
                }
                iVar12 = *(int *)(TypeInfo_Object + 0xe4);
              }
              if (iVar12 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_00 = (MethodInfo *)0x0;
              __this_02 = (MethodInfo **)x;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (x == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                __this_02 = (MethodInfo **)x[1].fields.m_CachedPtr;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                method_00 = (MethodInfo *)0x0;
                bVar4 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar4 != '\0') {
                  pUVar6 = (UI_GlobalSkinEditPopup_o *)x[1].fields.m_CachedPtr;
                  if (pUVar6 == (UI_GlobalSkinEditPopup_o *)0x0) goto label_0436354b;
                  if ((char)(pUVar6->fields).IsActive != '\0') {
                    if ((char)(pUVar6->fields)._hasBackup != '\0') {
                      UI_GlobalSkinEditPopup__RestoreBackup(pUVar6,method_00);
                    }
                    (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6);
                  }
                }
              }
              pSVar9 = *(System_Collections_IEnumerator_o **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
              if ((*(char *)&pSVar9->klass == '\0') && (*(char *)((long)&pSVar9->klass + 1) == '\0')) {
                return pSVar9;
              }
              if (g_data_057ae1b3 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
                g_data_057ae1b3 = '\x01';
              }
              pUVar6 = (UI_GlobalSkinEditPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ApplySkinPreviewAfterGlobalSetChange_d__27);
              method_00 = (MethodInfo *)0x0;
              __this_02 = (MethodInfo **)pUVar6;
              System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
              *(int32_t *)&(pUVar6->fields).m_CachedPtr = 0;
              if (pUVar6 != (UI_GlobalSkinEditPopup_o *)0x0) {
                (pUVar6->fields).SinglePanel = (UnityEngine_Transform_o *)__this_01;
                il2cpp_runtime_helper_022b4080(&(pUVar6->fields).SinglePanel,__this_01);
                pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                   ((UnityEngine_MonoBehaviour_o *)__this_01,
                                    (System_Collections_IEnumerator_o *)pUVar6,(MethodInfo *)0x0);
                return (System_Collections_IEnumerator_o *)pUVar8;
              }
            }
          }
        }
      }
    }
  }
label_0436354b:
  il2cpp_runtime_helper_022b2c90();
label_04363550:
  il2cpp_runtime_helper_022b2ca0();
  if ((char)(((UI_GlobalSkinEditPopup_o *)__this_02)->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup((UI_GlobalSkinEditPopup_o *)__this_02,method_00);
  }
  pSVar9 = (System_Collections_IEnumerator_o *)
           (*(((UI_GlobalSkinEditPopup_o *)__this_02)->klass->vtable)._22_Hide.methodPtr)
                     (__this_02,(((UI_GlobalSkinEditPopup_o *)__this_02)->klass->vtable)._22_Hide.method);
  return pSVar9;
}


// UI.CharacterEditorSkinsPanel$$RestoreOriginalSkinSettings
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings (UI_CharacterEditorSkinsPanel_o* __this, bool originalGlobalEnabled, bool originalSetEnabled, const MethodInfo* method);
// 0x4363e10

System_Collections_IEnumerator_o *
UI_CharacterEditorSkinsPanel__RestoreOriginalSkinSettings
          (UI_CharacterEditorSkinsPanel_o *__this,bool_conflict originalGlobalEnabled,
          bool_conflict originalSetEnabled,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae1b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RestoreOriginalSkinSettings_d__31);
    g_data_057ae1b7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RestoreOriginalSkinSettings_d__31);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    *(char *)&__this_00[2].klass = (char)originalGlobalEnabled;
    *(char *)((long)&__this_00[2].klass + 1) = (char)originalSetEnabled;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.CharacterEditorSkinsPanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorSkinsPanel__OnButtonClick (UI_CharacterEditorSkinsPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4363ee0

void UI_CharacterEditorSkinsPanel__OnButtonClick
               (UI_CharacterEditorSkinsPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_MessagePopup_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  UI_TooltipPopup_o *pUVar5;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar7;
  UI_CharacterEditorMenu_o *pUVar8;
  UI_CharacterEditorMenu_o *pUVar9;
  UI_ConfirmPopup_o *pUVar10;
  
  if (g_data_057ae1b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"EditGlobalSkin");
    il2cpp_runtime_helper_023445d0(&"EditCustomSkins");
    g_data_057ae1b8 = '\x01';
  }
  bVar6 = System_String__op_Equality(name,"EditCustomSkins",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    bVar6 = System_String__op_Equality(name,"EditGlobalSkin",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 == (UI_CharacterEditorMenu_o *)0x0) {
label_04364093:
      pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar9->klass->_2).naturalAligment < bVar1) goto label_04364093;
      pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        pUVar8 = pUVar9;
      }
      iVar2 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = pUVar8;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
      pUVar10 = pUVar8[1].fields.ConfirmPopup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      pUVar3 = pUVar8[1].fields.MessagePopup;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      if (pUVar3 == (UI_MessagePopup_o *)0x0) goto label_043641dc;
      (*(pUVar3->klass->vtable)._22_Hide.methodPtr)();
      pSVar4 = pUVar8[1].fields._popups;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      if (pSVar4 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_043641dc;
      (*(pSVar4->klass->vtable)._22_Clear.methodPtr)();
      pUVar5 = pUVar8[1].fields.TooltipPopup;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      if (pUVar5 == (UI_TooltipPopup_o *)0x0) goto label_043641dc;
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)();
      pUVar10 = pUVar8[1].fields.ConfirmPopup;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      uVar7 = extraout_RDX_00;
      if (pUVar10 == (UI_ConfirmPopup_o *)0x0) goto label_043641dc;
      goto label_04364162;
    }
    goto label_043641dc;
  }
  pUVar9 = (__this->fields)._menu;
  if (pUVar9 == (UI_CharacterEditorMenu_o *)0x0) {
label_04363f73:
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar9->klass->_2).naturalAligment < bVar1) goto label_04363f73;
    pUVar8 = (UI_CharacterEditorMenu_o *)0x0;
    if ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      pUVar8 = pUVar9;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = pUVar8;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  if (pUVar8 != (UI_CharacterEditorMenu_o *)0x0) {
    pUVar3 = pUVar8[1].fields.MessagePopup;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    pUVar10 = pUVar8[1].fields.ConfirmPopup;
    pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
    if (pUVar10 != (UI_ConfirmPopup_o *)0x0) {
      (*(pUVar10->klass->vtable)._22_Hide.methodPtr)();
      pSVar4 = pUVar8[1].fields._popups;
      pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
      if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        (*(pSVar4->klass->vtable)._22_Clear.methodPtr)();
        pUVar5 = pUVar8[1].fields.TooltipPopup;
        pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
        if (pUVar5 != (UI_TooltipPopup_o *)0x0) {
          (*(pUVar5->klass->vtable)._22_Hide.methodPtr)();
          pUVar10 = (UI_ConfirmPopup_o *)pUVar8[1].fields.MessagePopup;
          uVar7 = extraout_RDX;
          if (pUVar10 != (UI_ConfirmPopup_o *)0x0) {
label_04364162:
            vtableDispatch = (pUVar10->klass->vtable)._21_Show.methodPtr;
            (*vtableDispatch)
                      (pUVar10,(pUVar10->klass->vtable)._21_Show.method,uVar7,vtableDispatch);
            return;
          }
          pUVar9 = (UI_CharacterEditorMenu_o *)0x0;
        }
      }
    }
  }
label_043641dc:
  il2cpp_runtime_helper_022b2c90();
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$.ctor
// il2cpp: void UI_CharacterEditorSkinsPanel___ctor (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x43641f0

void UI_CharacterEditorSkinsPanel___ctor(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_0
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_0 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4364200

void UI_CharacterEditorSkinsPanel___Setup_b__23_0(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"EditCustomSkins");
    g_data_057ae1b9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditCustomSkins",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_1
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_1 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4364240

void UI_CharacterEditorSkinsPanel___Setup_b__23_1(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae1ba == '\0') {
    il2cpp_runtime_helper_023445d0(&"EditGlobalSkin");
    g_data_057ae1ba = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorSkinsPanel__OnButtonClick(__this,"EditGlobalSkin",in_RDX);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_2
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_2 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x4364280

void UI_CharacterEditorSkinsPanel___Setup_b__23_2(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  UI_CharacterEditorSkinsPanel_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ae1bb == '\0') {
    __this_00 = (UI_CharacterEditorSkinsPanel_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1bb = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = (__this->fields)._globalSetDropdownSetting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    UI_CharacterEditorSkinsPanel__OnGlobalSkinSetSelected(__this,(pSVar1->fields)._value,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this_00,method);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_3
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_3 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x43642c0

void UI_CharacterEditorSkinsPanel___Setup_b__23_3(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorSkinsPanel__OnSkinPreviewToggle(__this,method);
  return;
}


// UI.CharacterEditorSkinsPanel$$<Setup>b__23_4
// il2cpp: void UI_CharacterEditorSkinsPanel___Setup_b__23_4 (UI_CharacterEditorSkinsPanel_o* __this, const MethodInfo* method);
// 0x43642d0

void UI_CharacterEditorSkinsPanel___Setup_b__23_4(UI_CharacterEditorSkinsPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  Settings_BoolSetting_o *pSVar6;
  byte *pbVar7;
  Il2CppClass *__this_00;
  Characters_DummyHuman_c *pCVar8;
  Settings_TypedSetting_bool__o *pSVar9;
  UI_CharacterEditorMenu_o *pUVar10;
  Settings_SetSettingsContainer_T__o *__this_01;
  UI_ExternalLinkPopup_o *pUVar11;
  Characters_HumanSetup_o *__this_02;
  char cVar12;
  bool_conflict bVar13;
  Settings_HumanCustomSet_o *customSet;
  Il2CppObject *pIVar14;
  long *plVar15;
  undefined8 uVar16;
  System_String_o *pSVar17;
  System_String_o *str0;
  long lVar18;
  long *plVar19;
  UI_CharacterEditorMenu_o *x;
  undefined1 auVar20 [12];
  
  if (g_data_057ae1b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorSkinsPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae1b4 = '\x01';
  }
  if ((char)(__this->fields)._isRebuildingPanel != '\0') {
    return;
  }
  pSVar6 = (__this->fields)._globalSkinPreview;
  if (pSVar6 == (Settings_BoolSetting_o *)0x0) {
label_04363a92:
    il2cpp_runtime_helper_022b2c90();
label_04363a97:
    il2cpp_runtime_helper_022b2c90();
label_04363a9c:
    il2cpp_runtime_helper_022b2c90();
label_04363aa1:
    il2cpp_runtime_helper_022b2c90();
label_04363aa6:
    il2cpp_runtime_helper_022b2c90();
label_04363aab:
    il2cpp_runtime_helper_022b2c90();
label_04363ab0:
    il2cpp_runtime_helper_022b2c90();
label_04363ab5:
    il2cpp_runtime_helper_022b2c90();
label_04363aba:
    il2cpp_runtime_helper_022b2c90();
label_04363abf:
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2c90();
label_04363ac4:
    il2cpp_runtime_helper_022b2fd0(customSet);
label_04363acc:
    il2cpp_runtime_helper_022b2c90();
label_04363ad1:
    il2cpp_runtime_helper_022b2c90();
label_04363ad6:
    il2cpp_runtime_helper_022b2c90();
label_04363adb:
    il2cpp_runtime_helper_022b2c90();
label_04363ae0:
    il2cpp_runtime_helper_022b2c90();
label_04363ae5:
    il2cpp_runtime_helper_022b2c90();
label_04363aea:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
    pbVar7 = *(byte **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8);
    *pbVar7 = bVar1;
    pSVar6 = (__this->fields)._customSkinPreview;
    if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_04363a97;
    pbVar7[1] = *(byte *)((long)&(pSVar6->fields).DefaultValue + 1);
    plVar15 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (plVar15 == (long *)0x0) {
      return;
    }
    if ((*(byte *)(*plVar15 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar15 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) != TypeInfo_CharacterEditorGameManager
       )) {
      il2cpp_runtime_helper_022b2fd0();
      goto label_04363a92;
    }
    __this_00 = (Il2CppClass *)plVar15[7];
    if (__this_00 == (Il2CppClass *)0x0) {
      return;
    }
    pCVar8 = (__this_00->_1).image;
    bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((pCVar8->_2).naturalAligment < bVar2) {
      return;
    }
    if ((pCVar8->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman) {
      return;
    }
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar18 == 0) goto label_04363a9c;
    lVar18 = *(long *)(lVar18 + 0x20);
    if (lVar18 == 0) goto label_04363aa1;
    pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar18 + 0x60);
    if (pSVar9 == (Settings_TypedSetting_bool__o *)0x0) goto label_04363aa6;
    if (*(long *)(lVar18 + 0x58) == 0) goto label_04363aab;
    uVar3 = *(undefined1 *)((long)&(pSVar9->fields).DefaultValue + 1);
    uVar4 = *(undefined1 *)(*(long *)(lVar18 + 0x58) + 0x11);
    Settings_TypedSetting_bool___set_Value(pSVar9,(uint)bVar1,MethodInfo_Void_set_Value);
    lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar18 == 0) goto label_04363ab0;
    lVar18 = *(long *)(lVar18 + 0x20);
    if (lVar18 == 0) goto label_04363ab5;
    pSVar6 = (__this->fields)._customSkinPreview;
    if (pSVar6 == (Settings_BoolSetting_o *)0x0) goto label_04363aba;
    pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar18 + 0x58);
    if (pSVar9 == (Settings_TypedSetting_bool__o *)0x0) goto label_04363abf;
    Settings_TypedSetting_bool___set_Value
              (pSVar9,(uint)*(byte *)((long)&(pSVar6->fields).DefaultValue + 1),MethodInfo_Void_set_Value);
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 == (UI_CharacterEditorMenu_o *)0x0) {
label_04363894:
      x = (UI_CharacterEditorMenu_o *)0x0;
      iVar5 = *(int *)(TypeInfo_Object + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
      if ((pUVar10->klass->_2).naturalAligment < bVar1) goto label_04363894;
      x = (UI_CharacterEditorMenu_o *)0x0;
      if ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
        x = pUVar10;
      }
      iVar5 = *(int *)(TypeInfo_Object + 0xe4);
    }
    if (iVar5 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar13 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar18 == 0) goto label_04363acc;
      __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar18 + 0x20);
      if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) goto label_04363ad1;
      customSet = (Settings_HumanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (customSet != (Settings_HumanCustomSet_o *)0x0) {
        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        if ((bVar1 <= (customSet->klass->_2).naturalAligment) &&
           ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) goto label_04363956;
        goto label_04363ac4;
      }
label_04363956:
      if (__this_00 == (Il2CppClass *)0x0) goto label_04363adb;
      if (x == (UI_CharacterEditorMenu_o *)0x0) goto label_04363ae0;
      pUVar11 = x[1].fields.ExternalLinkPopup;
      if (pUVar11 == (UI_ExternalLinkPopup_o *)0x0) goto label_04363ae5;
      __this_02 = *(Characters_HumanSetup_o **)&(__this_00->_1).this_arg.bits;
      if (__this_02 != (Characters_HumanSetup_o *)0x0) {
        Characters_HumanSetup__Load
                  (__this_02,customSet,*(int32_t *)((long)&(pUVar11->fields).m_CachedPtr + 4),0,
                   (MethodInfo *)0x0);
        if (g_data_057ae1b5 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinAfterReset_d__29);
          g_data_057ae1b5 = '\x01';
        }
        pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinAfterReset_d__29);
        System_Object___ctor(pIVar14,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar14[1].klass = 0;
        if (pIVar14 != (Il2CppObject *)0x0) {
          pIVar14[2].monitor = __this;
          il2cpp_runtime_helper_022b4080(&pIVar14[2].monitor,__this);
          pIVar14[2].klass = __this_00;
          il2cpp_runtime_helper_022b4080(pIVar14 + 2,__this_00);
          *(undefined1 *)&pIVar14[3].klass = uVar3;
          *(undefined1 *)((long)&pIVar14[3].klass + 1) = uVar4;
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar14,
                     (MethodInfo *)0x0);
          return;
        }
        goto label_04363af4;
      }
      goto label_04363aea;
    }
    if (__this_00 == (Il2CppClass *)0x0) goto label_04363ad6;
    Characters_DummyHuman__LoadSkin((Characters_DummyHuman_o *)__this_00,(MethodInfo *)0x0);
    if (g_data_057ae1b7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RestoreOriginalSkinSettings_d__31);
      g_data_057ae1b7 = '\x01';
    }
    pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RestoreOriginalSkinSettings_d__31);
    System_Object___ctor(pIVar14,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar14[1].klass = 0;
    if (pIVar14 != (Il2CppObject *)0x0) {
      *(undefined1 *)&pIVar14[2].klass = uVar3;
      *(undefined1 *)((long)&pIVar14[2].klass + 1) = uVar4;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar14,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04363af4:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  if (auVar20._8_4_ != 1) {
    _Unwind_Resume(auVar20._0_8_);
  }
  plVar15 = (long *)__cxa_begin_catch(auVar20._0_8_);
  uVar16 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar12 = il2cpp_runtime_helper_0233e000(uVar16,*(undefined8 *)*plVar15);
  if (cVar12 != '\0') {
    plVar15 = (long *)*plVar15;
    __cxa_end_catch();
    if (plVar15 != (long *)0x0) {
      pSVar17 = (System_String_o *)(**(code **)(*plVar15 + 0x188))(plVar15,*(undefined8 *)(*plVar15 + 400));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Error updating skin preview: ");
      pSVar17 = System_String__Concat_3ae5ba0(str0,pSVar17,(MethodInfo *)0x0);
      lVar18 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar18 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar18);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar15 = (long *)0x0;
  }
  plVar19 = (long *)__cxa_allocate_exception(8);
  *plVar19 = *plVar15;
  __cxa_throw(plVar19,&PTR_PTR_05215060,0);
}


