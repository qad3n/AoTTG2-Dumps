// Type: UI.CharacterEditorTitanCostumePanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs
// --------------------------------

// UI.CharacterEditorTitanCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___cctor (const MethodInfo* method);
// 0x1821e84f0

void UI_CharacterEditorTitanCostumePanel___c___cctor(MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184346fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
    Il2CppMethodInitialized_184346fda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9,__this);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___ctor (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorTitanCostumePanel___c___ctor(UI_CharacterEditorTitanCostumePanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$<OnButtonClick>b__26_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__26_6 (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x1821e7fb0

void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__26_6
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  Settings_TitanCustomSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346fdb = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (pSVar1 != (Settings_TitanCustomSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._19_Load.methodPtr)(pSVar1,(pSVar1->klass->vtable)._19_Load.method);
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___ctor(UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_0$$<Setup>b__9
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___Setup_b__9 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x1821e8170

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0___Setup_b__9(UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___ctor(UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass17_1$$<Setup>b__10
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___Setup_b__10 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o* __this, const MethodInfo* method);
// 0x1821e8170

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1___Setup_b__10
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this_00,(__this->fields).button,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___ctor(UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__0 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e83f0

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__0(UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__1 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e83f0

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__1(UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__2 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e83f0

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__2(UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__3 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e83f0

void
UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__3(UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__4 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e8420

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__4
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_184346fdc = '\x01';
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,"LoadPreset",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__5 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x1821e83f0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__5
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
              (__this_00,(__this->fields).name,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23___ctor (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23___ctor(UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_IDisposable_Dispose(UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__MoveNext (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x1821e6d30
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e703c: mov r14, r8
// asm:   0x1821e7144: mov r9d, r14d
// asm:   0x1821e7147: jmp 0x1821e717c

bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__MoveNext
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
               MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar3;
  Settings_ListSetting_T__o *obj;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  GameManagers_BaseGameManager_o *pGVar6;
  Characters_BasicTitanSetup_o *pCVar7;
  bool bVar8;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_TitanCustomSet_o *pSVar9;
  Il2CppObject *value;
  Settings_TitanCustomSet_o *pSVar10;
  int iVar11;
  Characters_DummyTitan_o *pCVar12;
  
  if (Il2CppMethodInitialized_184346fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346fdd = '\x01';
  }
  iVar11 = (__this->fields).__1__state;
  if (iVar11 == 0) {
    (__this->fields).__1__state = -1;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    (__this->fields)._settings_5__2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._settings_5__2,pSVar2);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).TitanCustomSets,
        pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (obj = (pSVar3->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)) {
      __this_00 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
      pCVar12 = (Characters_DummyTitan_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        while( true ) {
          iVar11 = (int)pCVar12;
          if ((__this_00->fields)._size <= iVar11) {
            return false;
          }
          pSVar9 = (Settings_TitanCustomSet_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             (__this_00,iVar11,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
          if (pSVar9 == (Settings_TitanCustomSet_o *)0x0) goto label_1821e71d4;
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
          }
          pSVar4 = (pSVar9->fields).UniqueId;
          if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_1821e71d4;
          bVar8 = System_String__op_Equality
                            ((pSVar4->fields)._value,(__this->fields).previousProfileId,(MethodInfo *)0x0);
          if (bVar8) break;
          pCVar12 = (Characters_DummyTitan_o *)(ulonglong)(iVar11 + 1);
        }
        pSVar2 = (__this->fields)._settings_5__2;
        if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
            (pSVar3 = (pSVar2->fields).TitanCustomSets,
            pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
           (pSVar5 = (pSVar3->fields).SelectedSetIndex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          (__this->fields)._currentSelectedIndex_5__3 = (pSVar5->fields)._value;
          pSVar2 = (__this->fields)._settings_5__2;
          if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
              (pSVar3 = (pSVar2->fields).TitanCustomSets,
              pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
             (pSVar5 = (pSVar3->fields).SelectedSetIndex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar5,iVar11,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pGVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
            if (pGVar6 != (GameManagers_BaseGameManager_o *)0x0) {
              bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
              if (((pGVar6->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pGVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
                il2cpp_codegen_raise_invalid_cast_exception(pGVar6);
              }
              pCVar12 = (Characters_DummyTitan_o *)(*(uint64_t *)((char *)pGVar6 + 0x38));
              if (pCVar12 == (Characters_DummyTitan_o *)0x0) {
                (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)0x0;
                pCVar12 = (Characters_DummyTitan_o *)0x0;
              }
              else {
                bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
                if (((pCVar12->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar12->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar12);
                }
                (__this->fields)._character_5__4 = pCVar12;
                bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
                if (((pCVar12->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar12->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar12);
                }
              }
              Il2CppCodeGenWriteBarrier(&(__this->fields)._character_5__4,pCVar12);
              pCVar12 = (__this->fields)._character_5__4;
              if ((pCVar12 != (Characters_DummyTitan_o *)0x0) &&
                 (pCVar7 = (pCVar12->fields).Setup, pCVar7 != (Characters_BasicTitanSetup_o *)0x0)) {
                Characters_BasicTitanSetup__Load(pCVar7,pSVar9,(MethodInfo *)0x0);
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                value = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
                (__this->fields).__2__current = value;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
                (__this->fields).__1__state = 1;
                return true;
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar11 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).TitanCustomSets,
        pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar5 = (pSVar3->fields).SelectedSetIndex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar5,(__this->fields)._currentSelectedIndex_5__3,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields)._settings_5__2;
      if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).TitanCustomSets,
         pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar10 = (Settings_TitanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar3,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        pSVar9 = (Settings_TitanCustomSet_o *)0x0;
        if (pSVar10 != (Settings_TitanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetSetting_c *)pSVar10->klass)->_2).typeHierarchyDepth < bVar1) ||
             (pSVar9 = pSVar10,
             (((Settings_BaseSetSetting_c *)pSVar10->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
          }
        }
        pCVar12 = (__this->fields)._character_5__4;
        if ((pCVar12 != (Characters_DummyTitan_o *)0x0) &&
           (pCVar7 = (pCVar12->fields).Setup, pCVar7 != (Characters_BasicTitanSetup_o *)0x0)) {
          Characters_BasicTitanSetup__Load(pCVar7,pSVar9,(MethodInfo *)0x0);
          pCVar12 = (__this->fields)._character_5__4;
          if (pCVar12 != (Characters_DummyTitan_o *)0x0) {
            Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar12,(MethodInfo *)0x0);
            (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._character_5__4,(void *)0x0);
            return false;
          }
        }
      }
    }
  }
label_1821e71d4:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x1821e7210

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
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
                  MethodInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_get_Current(UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28___ctor (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28___ctor(UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_IDisposable_Dispose(UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, MethodInfo* method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__MoveNext (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x1821e7d50

bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__MoveNext
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184346fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346fde = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    value = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(false,(MethodInfo *)0x0);
    Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  }
  return false;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x1821e7e20

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_Reset
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
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
                  MethodInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28_System_Collections_IE
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_get_Current(UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanCostumePanel__get_Title (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821e08f0

System_String_o *
UI_CharacterEditorTitanCostumePanel__get_Title
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346fcc = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Costume","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorTitanCostumePanel$$get_Width
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Width (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821c6340

float
UI_CharacterEditorTitanCostumePanel__get_Width(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  return 380.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Height (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d6e30

float UI_CharacterEditorTitanCostumePanel__get_Height
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d1fa0

int32_t
UI_CharacterEditorTitanCostumePanel__get_VerticalPadding(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__get_ScrollBar (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_CharacterEditorTitanCostumePanel__get_ScrollBar(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.CharacterEditorTitanCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCostumePanel__Setup (UI_CharacterEditorTitanCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821df570
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821dfac3: mov qword ptr [rsp + 0x88], rax
// asm:   0x1821dfacb: jmp 0x1821dfb04
// asm:   0x1821dfb01: xor r13d, r13d
// asm:   0x1821dfc5c: nop dword ptr [rax]
// asm:   0x1821e004b: nop dword ptr [rax + rax]
// asm:   0x1821e01dc: nop dword ptr [rax]
// asm:   0x1821e01eb: nop dword ptr [rax + rax]
// asm:   0x1821e0379: nop dword ptr [rax]
// asm:   0x1821e038b: nop dword ptr [rax + rax]

void UI_CharacterEditorTitanCostumePanel__Setup
               (UI_CharacterEditorTitanCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int iVar1;
  int32_t *piVar2;
  byte bVar3;
  uint32_t uVar4;
  Settings_TitanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_IntSetting_o *setting;
  Il2CppClass *pIVar8;
  Settings_BaseSetSetting_c *setting_00;
  UI_BaseMenu_o *pUVar9;
  UI_IconPickPopup_o *pUVar10;
  Settings_BaseSetting_o *setting_01;
  Settings_InspectorSettingMetadata_o *setting_02;
  System_Collections_Specialized_OrderedDictionary_o *setting_03;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *setting_04;
  UI_ColorPickPopup_o *pUVar11;
  System_Collections_Generic_HashSet_string__o *setting_05;
  MethodInfo *pMVar12;
  System_String_o *category;
  Settings_BaseSetSetting_o *pSVar13;
  System_String_o *pSVar14;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar15;
  UnityEngine_Events_UnityAction_o *pUVar16;
  System_String_array *pSVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *object;
  UnityEngine_Transform_o *pUVar20;
  UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *object_00;
  System_String_array *pSVar21;
  System_Int32_array *pSVar22;
  longlong lVar23;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  UI_CharacterEditorMenu_o *value;
  uint uVar24;
  
  if (Il2CppMethodInitialized_184346fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_0_Setup_b__9);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_1_Setup_b__10);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"HairColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"SkinColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom set");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_184346fcd = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  value = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (value == (UI_CharacterEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
    value = (UI_CharacterEditorMenu_o *)0x0;
  }
  else {
    bVar3 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar3) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields)._menu = value;
    bVar3 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar3) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,value);
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar5 != (Settings_TitanCustomSettings_o *)0x0) &&
      (pSVar6 = (pSVar5->fields).TitanCustomSets,
      pSVar6 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)pSVar6,
                           (MethodInfo_C8EAF0 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
     pSVar13 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar3 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar13->klass->_2).typeHierarchyDepth < bVar3) ||
       ((pSVar13->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar13,TypeInfo_Settings_TitanCustomSet);
    }
    pSVar7 = (pSVar13->fields).UniqueId;
    if (pSVar7 != (Settings_StringSetting_o *)0x0) {
      pSVar14 = (pSVar7->fields)._value;
      (__this->fields)._previousProfileId = pSVar14;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId,pSVar14);
      pSVar14 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,130.0,20.0,pSVar14,(MethodInfo *)0x0);
      category = "CharacterEditor";
      pSVar14 = "Costume";
      pUVar20 = (__this->fields).BottomBar;
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      pSVar15 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
      pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar20,__this_00,pSVar15,0.0,pUVar16,(MethodInfo *)0x0);
      pUVar20 = (__this->fields).BottomBar;
      pSVar15 = UI_UIManager__GetLocale
                          (category,pSVar14,"SaveQuit","","",
                           (MethodInfo *)0x0);
      pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar20,__this_00,pSVar15,0.0,pUVar16,(MethodInfo *)0x0);
      if ((pSVar5 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).TitanCustomSets,
         pSVar6 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar6,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar13 != (Settings_BaseSetSetting_o *)0x0) {
          bVar3 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar13->klass->_2).typeHierarchyDepth < bVar3) ||
             ((pSVar13->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar13,TypeInfo_Settings_TitanCustomSet);
          }
        }
        pSVar6 = (pSVar5->fields).TitanCustomSets;
        if (pSVar6 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
          pUVar20 = (__this->fields).SinglePanel;
          setting = (pSVar6->fields).SelectedSetIndex;
          pSVar17 = Settings_SetSettingsContainer_object___GetSetNames
                              ((Settings_SetSettingsContainer_T__o *)(pSVar5->fields).TitanCustomSets,
                               (MethodInfo_C8EC20 *)
                               MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
          pUVar16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_2,(MethodInfo *)0x0)
          ;
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar20,__this_00,(Settings_BaseSetting_o *)setting,"Custom set",pSVar17,
                     "",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar16,
                     (System_Int32_array *)0x0,(MethodInfo *)0x0);
          pUVar18 = UI_ElementFactory__CreateHorizontalGroup
                              ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
          pIVar19 = SZArrayNew(TypeInfo_string_array,3);
          pSVar15 = "Create";
          if (pIVar19 != (Il2CppObject *)0x0) {
            if (*(int *)&pIVar19[1].monitor != 0) {
              pIVar19[2].klass = (Il2CppClass *)"Create";
              Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar15);
              pSVar15 = "Delete";
              if (1 < *(uint *)&pIVar19[1].monitor) {
                pIVar19[2].monitor = "Delete";
                Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar15);
                pSVar15 = "Copy";
                if (2 < *(uint *)&pIVar19[1].monitor) {
                  pIVar19[3].klass = (Il2CppClass *)"Copy";
                  Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar15);
                  for (uVar24 = 0; (int)uVar24 < *(int *)&pIVar19[1].monitor; uVar24 = uVar24 + 1) {
                    object = il2cpp_codegen_object_new
                                       ((Il2CppClass *)
                                        TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_0);
                    System_Object___ctor
                              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                               (MethodInfo *)0x0);
                    if (object == (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_0_o *)0x0)
                    goto label_1821e0846;
                    (object->fields).__4__this = __this;
                    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
                    if (*(uint *)&pIVar19[1].monitor <= uVar24) goto label_1821e0828;
                    pIVar8 = (&pIVar19[2].klass)[(int)uVar24];
                    (object->fields).button = (System_String_o *)pIVar8;
                    Il2CppCodeGenWriteBarrier(&(object->fields).button,pIVar8);
                    if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_1821e0846;
                    pUVar20 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                    pSVar15 = (object->fields).button;
                    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                    }
                    pSVar15 = UI_UIManager__GetLocaleCommon(pSVar15,(MethodInfo *)0x0);
                    pUVar16 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,(Il2CppObject *)object
                               ,(intptr_t)
                                MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_0_Setup_b__9,
                               (MethodInfo *)0x0);
                    UI_ElementFactory__CreateDefaultButton
                              (pUVar20,__this_00,pSVar15,0.0,0.0,pUVar16,(MethodInfo *)0x0);
                  }
                  pUVar18 = UI_ElementFactory__CreateHorizontalGroup
                                      ((__this->fields).SinglePanel,10.0,0,(MethodInfo *)0x0);
                  pIVar19 = SZArrayNew(TypeInfo_string_array,3);
                  pSVar15 = "Rename";
                  if (pIVar19 == (Il2CppObject *)0x0) goto label_1821e0846;
                  if (*(int *)&pIVar19[1].monitor != 0) {
                    pIVar19[2].klass = (Il2CppClass *)"Rename";
                    Il2CppCodeGenWriteBarrier(&pIVar19[2].klass,pSVar15);
                    pSVar15 = "Import";
                    if (1 < *(uint *)&pIVar19[1].monitor) {
                      pIVar19[2].monitor = "Import";
                      Il2CppCodeGenWriteBarrier(&pIVar19[2].monitor,pSVar15);
                      pSVar15 = "Export";
                      if (2 < *(uint *)&pIVar19[1].monitor) {
                        pIVar19[3].klass = (Il2CppClass *)"Export";
                        Il2CppCodeGenWriteBarrier(&pIVar19[3].klass,pSVar15);
                        for (uVar24 = 0; (int)uVar24 < *(int *)&pIVar19[1].monitor; uVar24 = uVar24 + 1) {
                          object_00 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)
                                                 TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_1
                                                );
                          System_Object___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,
                                     (MethodInfo *)0x0);
                          if (object_00 == (UI_CharacterEditorTitanCostumePanel___c__DisplayClass17_1_o *)0x0)
                          goto label_1821e0846;
                          (object_00->fields).__4__this = __this;
                          Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
                          if (*(uint *)&pIVar19[1].monitor <= uVar24) goto label_1821e0828;
                          pIVar8 = (&pIVar19[2].klass)[(int)uVar24];
                          (object_00->fields).button = (System_String_o *)pIVar8;
                          Il2CppCodeGenWriteBarrier(&(object_00->fields).button,pIVar8);
                          if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_1821e0846;
                          pUVar20 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
                          pSVar15 = (object_00->fields).button;
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pSVar15 = UI_UIManager__GetLocaleCommon(pSVar15,(MethodInfo *)0x0);
                          pUVar16 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,
                                     (Il2CppObject *)object_00,
                                     (intptr_t)
                                     MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass17_1_Setup_b__10
                                     ,(MethodInfo *)0x0);
                          UI_ElementFactory__CreateDefaultButton
                                    (pUVar20,__this_00,pSVar15,0.0,0.0,pUVar16,(MethodInfo *)0x0);
                        }
                        UI_BasePanel__CreateHorizontalDivider
                                  ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0
                                  );
                        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                        }
                        pSVar17 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                            (__this,"Head",
                                             TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount,
                                             false,(MethodInfo *)0x0);
                        if (pSVar13 != (Settings_BaseSetSetting_o *)0x0) {
                          pUVar20 = (__this->fields).SinglePanel;
                          setting_00 = (*(uint64_t *)((char *)pSVar13 + 0x48));
                          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                          }
                          pSVar15 = UI_UIManager__GetLocale
                                              (category,pSVar14,"Head","",
                                               "",(MethodInfo *)0x0);
                          pSVar21 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                              (__this,pSVar17,(MethodInfo *)0x0);
                          pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                          if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                            pUVar10 = (pUVar9->fields).IconPickPopup;
                            pUVar16 = il2cpp_codegen_object_new
                                                ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                            UnityEngine_Events_UnityAction___ctor
                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,
                                       (Il2CppObject *)__this,
                                       (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_3,
                                       (MethodInfo *)0x0);
                            if (pSVar17 != (System_String_array *)0x0) {
                              uVar4 = (uint32_t)pSVar17->max_length;
                              if (Il2CppMethodInitialized_184346fcf == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                Il2CppMethodInitialized_184346fcf = '\x01';
                              }
                              pSVar22 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar4);
                              if (0 < (int)uVar4) {
                                uVar24 = 0;
                                if (pSVar22 == (System_Int32_array *)0x0) goto label_1821e0846;
                                do {
                                  if ((uint)pSVar22->max_length <= uVar24) goto label_1821e0828;
                                  lVar23 = (longlong)(int)uVar24;
                                  iVar1 = uVar24 - 1;
                                  uVar24 = uVar24 + 1;
                                  pSVar22->m_Items[lVar23] = iVar1;
                                } while ((int)uVar24 < (int)uVar4);
                              }
                              UI_ElementFactory__CreateIconPickSetting
                                        (pUVar20,__this_00,(Settings_BaseSetting_o *)setting_00,pSVar15,
                                         pSVar17,pSVar21,pUVar10,"",
                                         (System_String_array *)0x0,170.0,40.0,pUVar16,
                                         (UI_TooltipPopup_o *)0x0,pSVar22,(MethodInfo *)0x0);
                              pSVar17 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                                  (__this,"Body",
                                                   TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                   BodyCount,false,(MethodInfo *)0x0);
                              setting_01 = (*(uint64_t *)((char *)pSVar13 + 0x50));
                              pUVar20 = (__this->fields).SinglePanel;
                              pSVar15 = UI_UIManager__GetLocale
                                                  (category,pSVar14,"Body",
                                                   "","",
                                                   (MethodInfo *)0x0);
                              pSVar21 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                  (__this,pSVar17,(MethodInfo *)0x0);
                              pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                              if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                pUVar10 = (pUVar9->fields).IconPickPopup;
                                pUVar16 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                UnityEngine_Events_UnityAction___ctor
                                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,
                                           (Il2CppObject *)__this,
                                           (intptr_t)
                                           MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_4,
                                           (MethodInfo *)0x0);
                                if (pSVar17 != (System_String_array *)0x0) {
                                  uVar4 = (uint32_t)pSVar17->max_length;
                                  if (Il2CppMethodInitialized_184346fcf == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                    Il2CppMethodInitialized_184346fcf = '\x01';
                                  }
                                  pSVar22 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar4);
                                  if (0 < (int)uVar4) {
                                    uVar24 = 0;
                                    if (pSVar22 == (System_Int32_array *)0x0) goto label_1821e0846;
                                    do {
                                      if ((uint)pSVar22->max_length <= uVar24) goto label_1821e0828;
                                      lVar23 = (longlong)(int)uVar24;
                                      iVar1 = uVar24 - 1;
                                      uVar24 = uVar24 + 1;
                                      pSVar22->m_Items[lVar23] = iVar1;
                                    } while ((int)uVar24 < (int)uVar4);
                                  }
                                  UI_ElementFactory__CreateIconPickSetting
                                            (pUVar20,__this_00,setting_01,pSVar15,pSVar17,pSVar21,pUVar10,
                                             "",(System_String_array *)0x0,170.0,40.0,
                                             pUVar16,(UI_TooltipPopup_o *)0x0,pSVar22,(MethodInfo *)0x0);
                                  pSVar17 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                                      (__this,"Eye",
                                                       TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                       EyeCount,false,(MethodInfo *)0x0);
                                  setting_02 = (*(uint64_t *)((char *)pSVar13 + 0x58));
                                  pUVar20 = (__this->fields).SinglePanel;
                                  pSVar15 = UI_UIManager__GetLocale
                                                      (category,pSVar14,"Eye",
                                                       "","",
                                                       (MethodInfo *)0x0);
                                  pSVar21 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                      (__this,pSVar17,(MethodInfo *)0x0);
                                  pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                  if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                    pUVar10 = (pUVar9->fields).IconPickPopup;
                                    pUVar16 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                    UnityEngine_Events_UnityAction___ctor
                                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar16,
                                               (Il2CppObject *)__this,
                                               (intptr_t)
                                               MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_5,
                                               (MethodInfo *)0x0);
                                    if (pSVar17 != (System_String_array *)0x0) {
                                      uVar4 = (uint32_t)pSVar17->max_length;
                                      if (Il2CppMethodInitialized_184346fcf == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                        Il2CppMethodInitialized_184346fcf = '\x01';
                                      }
                                      pSVar22 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar4);
                                      if (0 < (int)uVar4) {
                                        uVar24 = 0;
                                        if (pSVar22 == (System_Int32_array *)0x0) goto label_1821e0846;
                                        do {
                                          if ((uint)pSVar22->max_length <= uVar24) goto label_1821e0828;
                                          lVar23 = (longlong)(int)uVar24;
                                          iVar1 = uVar24 - 1;
                                          uVar24 = uVar24 + 1;
                                          pSVar22->m_Items[lVar23] = iVar1;
                                        } while ((int)uVar24 < (int)uVar4);
                                      }
                                      UI_ElementFactory__CreateIconPickSetting
                                                (pUVar20,__this_00,(Settings_BaseSetting_o *)setting_02,
                                                 pSVar15,pSVar17,pSVar21,pUVar10,"",
                                                 (System_String_array *)0x0,170.0,40.0,pUVar16,
                                                 (UI_TooltipPopup_o *)0x0,pSVar22,(MethodInfo *)0x0);
                                      if (Il2CppMethodInitialized_184346fd0 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_Characters_BasicTitanSetup);
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&MethodInfo_System_Collections_Generic_List_string_AddRange
                                                  );
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&MethodInfo_System_Collections_Generic_List_string_Add);
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&MethodInfo_System_Collections_Generic_List_string_ToArray)
                                        ;
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&MethodInfo_System_Collections_Generic_List_string_ctor);
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_System_Collections_Generic_List_string);
                                        il2cpp_codegen_initialize_runtime_metadata(&"Random");
                                        Il2CppMethodInitialized_184346fd0 = '\x01';
                                      }
                                      __this_01 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_System_Collections_Generic_List_string);
                                      System_Collections_Generic_List_object____ctor
                                                ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                                                 (MethodInfo_92A240 *)
                                                 MethodInfo_System_Collections_Generic_List_string_ctor);
                                      pSVar15 = "Random";
                                      pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
                                      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
                                        piVar2 = &(__this_01->fields)._version;
                                        *piVar2 = *piVar2 + 1;
                                        pSVar17 = (__this_01->fields)._items;
                                        if (pSVar17 != (System_String_array *)0x0) {
                                          uVar24 = (__this_01->fields)._size;
                                          if (uVar24 < (uint)pSVar17->max_length) {
                                            (__this_01->fields)._size = uVar24 + 1;
                                            if ((uint)pSVar17->max_length <= uVar24) goto label_1821e0828;
                                            pSVar17->m_Items[(int)uVar24] = pSVar15;
                                            Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar24,pSVar15);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)__this_01,
                                                       (Il2CppObject *)pSVar15,
                                                       (MethodInfo_93DD50 *)
                                                       pMVar12->klass->rgctx_data[0xe].method);
                                          }
                                          if ((TypeInfo_Characters_BasicTitanSetup->_2).
                                              cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                                          }
                                          System_Collections_Generic_List_object___AddRange
                                                    ((System_Collections_Generic_List_object__o *)__this_01,
                                                     (System_Collections_Generic_IEnumerable_T__o *)
                                                     TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                     AllHairs,(MethodInfo_93DA30 *)
                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_List_string_AddRange
                                                    );
                                          options = System_Collections_Generic_List_object___ToArray
                                                              ((System_Collections_Generic_List_T__o *)
                                                               __this_01,
                                                               (MethodInfo_929FE0 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_List_string_ToArray
                                                       );
                                          pUVar20 = (__this->fields).SinglePanel;
                                          setting_03 = (*(uint64_t *)((char *)pSVar13 + 0x60));
                                          pSVar15 = UI_UIManager__GetLocale
                                                              (category,pSVar14,"Hair",
                                                               "","",
                                                               (MethodInfo *)0x0);
                                          pSVar17 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                              (__this,(System_String_array *)options,
                                                               (MethodInfo *)0x0);
                                          pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                          if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                            pUVar10 = (pUVar9->fields).IconPickPopup;
                                            pUVar16 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_Events_UnityAction);
                                            UnityEngine_Events_UnityAction___ctor
                                                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                       pUVar16,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_6
                                                       ,(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateIconPickSetting
                                                      (pUVar20,__this_00,(Settings_BaseSetting_o *)setting_03,
                                                       pSVar15,(System_String_array *)options,pSVar17,pUVar10,
                                                       "",(System_String_array *)0x0,170.0,
                                                       40.0,pUVar16,(UI_TooltipPopup_o *)0x0,
                                                       (System_Int32_array *)0x0,(MethodInfo *)0x0);
                                            pUVar20 = (__this->fields).SinglePanel;
                                            setting_04 = (*(uint64_t *)((char *)pSVar13 + 0x68));
                                            pSVar15 = UI_UIManager__GetLocale
                                                                (category,pSVar14,"SkinColor",
                                                                 "","",
                                                                 (MethodInfo *)0x0);
                                            pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                            if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                              pUVar11 = (pUVar9->fields).ColorPickPopup;
                                              pUVar16 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_Events_UnityAction);
                                              UnityEngine_Events_UnityAction___ctor
                                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                         pUVar16,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                                                                                  
                                                       MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_7
                                                       ,(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateColorSetting
                                                        (pUVar20,__this_00,
                                                         (Settings_BaseSetting_o *)setting_04,pSVar15,pUVar11,
                                                         "",90.0,30.0,pUVar16,
                                                         (MethodInfo *)0x0);
                                              setting_05 = (*(uint64_t *)((char *)pSVar13 + 0x70));
                                              pUVar20 = (__this->fields).SinglePanel;
                                              pSVar14 = UI_UIManager__GetLocale
                                                                  (category,pSVar14,"HairColor",
                                                                   "",""
                                                                   ,(MethodInfo *)0x0);
                                              pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                              if (pUVar9 != (UI_BaseMenu_o *)0x0) {
                                                pUVar11 = (pUVar9->fields).ColorPickPopup;
                                                pUVar16 = il2cpp_codegen_object_new
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_UnityEngine_Events_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor
                                                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                           pUVar16,(Il2CppObject *)__this,
                                                           (intptr_t)
                                                                                                                      
                                                       MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_8
                                                       ,(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateColorSetting
                                                          (pUVar20,__this_00,
                                                           (Settings_BaseSetting_o *)setting_05,pSVar14,
                                                           pUVar11,"",90.0,30.0,pUVar16,
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
                        goto label_1821e0846;
                      }
                    }
                  }
                }
              }
            }
label_1821e0828:
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_1821e0846:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetOptions (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x1821ddf00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821de037: nop word ptr [rax + rax]

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  int32_t local_38 [6];
  
  if (Il2CppMethodInitialized_184346fce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346fce = '\x01';
  }
  local_38[0] = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Random";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
label_1821de0e5:
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if (includeNone) {
        System_String__Concat_1969e50(prefix,"None",(MethodInfo *)0x0);
        il2cpp_runtime_helper_180012890(__this_00);
      }
      local_38[0] = 0;
      if (0 < options) {
        do {
          pSVar5 = System_Int32__ToString(local_38,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_1969e50(prefix,pSVar5,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          pSVar3 = (__this_00->fields)._items;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          if (pSVar3 == (System_String_array *)0x0) goto label_1821de0df;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            if ((uint)pSVar3->max_length <= uVar2) goto label_1821de0e5;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                       (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          local_38[0] = local_38[0] + 1;
        } while (local_38[0] < options);
      }
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
  }
label_1821de0df:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetIntOptionValues
// il2cpp: System_Int32_array* UI_CharacterEditorTitanCostumePanel__GetIntOptionValues (UI_CharacterEditorTitanCostumePanel_o* __this, int32_t count, const MethodInfo* method);
// 0x1821dde80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821ddeb9: nop dword ptr [rax]

System_Int32_array *
UI_CharacterEditorTitanCostumePanel__GetIntOptionValues
          (UI_CharacterEditorTitanCostumePanel_o *__this,int32_t count,MethodInfo *method)

{
  int iVar1;
  System_Int32_array *pSVar2;
  longlong lVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_184346fcf = '\x01';
  }
  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,count);
  if (0 < count) {
    uVar4 = 0;
    if (pSVar2 == (System_Int32_array *)0x0) {
      ThrowNullReferenceException();
    }
    do {
      if ((uint)pSVar2->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      lVar3 = (longlong)(int)uVar4;
      iVar1 = uVar4 - 1;
      uVar4 = uVar4 + 1;
      pSVar2->m_Items[lVar3] = iVar1;
    } while ((int)uVar4 < count);
  }
  return pSVar2;
}


// UI.CharacterEditorTitanCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetHairOptions (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821ddb90

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetHairOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar5;
  
  if (Il2CppMethodInitialized_184346fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_184346fd0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  item = "Random";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs,
                 (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      pUVar5 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar5;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetIcons (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x1821ddce0

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetIcons
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"/Titans/Previews/");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Navigation/TooltipIcon");
    Il2CppMethodInitialized_184346fd1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    for (uVar4 = 0; (int)uVar4 < (int)options->max_length; uVar4 = uVar4 + 1) {
      if ((uint)options->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = options->m_Items[(int)uVar4];
      bVar1 = System_String__op_Equality(pSVar2,"Random",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = System_String__Concat_1969e50
                           (TypeInfo_Utility_ResourcePaths->static_fields->UI,"/Icons/Navigation/TooltipIcon",
                            (MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = System_String__Concat_1969b70
                           (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Titans/Previews/",
                            pSVar2,(MethodInfo *)0x0);
      }
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1821dde73;
      il2cpp_runtime_helper_180012890(__this_00,pSVar2);
    }
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar3 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar3;
    }
  }
label_1821dde73:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821df1e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821df380: mov esi, edi
// asm:   0x1821df382: jmp 0x1821df3b7

void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  UI_CharacterEditorMenu_o *pUVar4;
  System_String_o *b;
  GameManagers_BaseGameManager_o *pGVar5;
  System_String_o *value;
  UI_CharacterEditorTitanMenu_o *pUVar6;
  bool bVar7;
  Settings_BaseSetSetting_o *pSVar8;
  UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *routine;
  System_Type_o *pSVar9;
  GameManagers_BaseGameManager_o *__this_01;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (Il2CppMethodInitialized_184346fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346fd2 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).TitanCustomSets,
      __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)__this_00,
                          (MethodInfo_C8EAF0 *)
                          MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
     pSVar8 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar8,TypeInfo_Settings_TitanCustomSet);
    }
    pSVar3 = (pSVar8->fields).UniqueId;
    if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
       (pUVar4 = (__this->fields)._menu, pUVar4 != (UI_CharacterEditorMenu_o *)0x0)) {
      b = (pSVar3->fields)._value;
      pSVar9 = (System_Type_o *)CONCAT71((int7)((ulonglong)pSVar3 >> 8),1);
      (*(pUVar4->klass->vtable)._8_RebuildPanels.methodPtr)
                (pUVar4,pSVar9,(pUVar4->klass->vtable)._8_RebuildPanels.method);
      pUVar4 = (__this->fields)._menu;
      if (pUVar4 != (UI_CharacterEditorMenu_o *)0x0) {
        (*(pUVar4->klass->vtable)._9_ResetCharacter.methodPtr)
                  (pUVar4,(System_Type_o *)CONCAT71((int7)((ulonglong)pSVar9 >> 8),1),
                   (pUVar4->klass->vtable)._9_ResetCharacter.method);
        if (((__this->fields)._previousProfileId == (System_String_o *)0x0) ||
           (bVar7 = System_String__op_Inequality((__this->fields)._previousProfileId,b,(MethodInfo *)0x0),
           !bVar7)) {
          if ((__this->fields)._shouldGeneratePreviewAfterRebuild != false) {
            pUVar6 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
            (__this->fields)._shouldGeneratePreviewAfterRebuild = false;
            if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
            }
            titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
            if (pUVar6 != (UI_CharacterEditorTitanMenu_o *)0x0) {
              bVar1 = (TypeInfo_UI_CharacterEditorTitanMenu->_2).typeHierarchyDepth;
              if (((((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
                 (bVar7 = true,
                 (((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                 (Il2CppClass *)TypeInfo_UI_CharacterEditorTitanMenu)) {
                bVar7 = false;
              }
              if (bVar7) {
                titanMenu = pUVar6;
              }
            }
            Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,true,(MethodInfo *)0x0);
          }
        }
        else {
          __this_01 = (GameManagers_BaseGameManager_o *)0x0;
          pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (pGVar5 != (GameManagers_BaseGameManager_o *)0x0) {
            bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
            if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
               (__this_01 = pGVar5,
               (pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
               (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
              il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
            }
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            value = (__this->fields)._previousProfileId;
            if (Il2CppMethodInitialized_184346fd3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23
                        );
              Il2CppMethodInitialized_184346fd3 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23
                                );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).previousProfileId = value;
            Il2CppCodeGenWriteBarrier(&(routine->fields).previousProfileId,value);
            if (__this_01 == (GameManagers_BaseGameManager_o *)0x0) goto label_1821df4f9;
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
          }
        }
        (__this->fields)._previousProfileId = b;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId,b);
        return;
      }
    }
  }
label_1821df4f9:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$CapturePreviousTitanProfilePreview
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, const MethodInfo* method);
// 0x1821dda80

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23);
    Il2CppMethodInitialized_184346fd3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).previousProfileId = previousProfileId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).previousProfileId,previousProfileId);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel__OnCharacterChanged(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821ddaf0

void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorTitanMenu_o *pUVar2;
  bool bVar3;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (Il2CppMethodInitialized_184346fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_184346fd4 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
  if (pUVar2 != (UI_CharacterEditorTitanMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_CharacterEditorTitanMenu->_2).typeHierarchyDepth;
    if (((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       (bVar3 = true,
       (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_UI_CharacterEditorTitanMenu)) {
      bVar3 = false;
    }
    if (bVar3) {
      titanMenu = pUVar2;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,false,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnButtonClick (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821de0f0
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821de4d7: xor edi, edi
// asm:   0x1821de4d9: mov r9, rax
// asm:   0x1821de4dc: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1821de4e1: mov r8, rsi
// asm:   0x1821de4e4: mov rdx, r14
// asm:   0x1821de4e7: mov rcx, rbp
// asm:   0x1821de5b7: xor edi, edi
// asm:   0x1821de5b9: mov r9, rax
// asm:   0x1821de5bc: mov qword ptr [rsp + 0x28], rdi
// asm:   0x1821de5c1: mov r8, rbx
// asm:   0x1821de5c4: mov rdx, rsi
// asm:   0x1821de5c7: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1821de5cc: mov rcx, rbp
// asm:   0x1821de5cf: call 0x1821cb5d0  ; UI_SetNamePopup__Show()
// asm:   0x1821de5d4: jmp 0x1821de4ef
// asm:   0x1821de72f: xor r8d, r8d
// asm:   0x1821de732: mov rdx, rax
// asm:   0x1821de735: mov rcx, rdi
// asm:   0x1821de738: call 0x1821c13f0  ; UI_ExportPopup__Show()
// asm:   0x1821de73d: jmp 0x1821de4ef
// asm:   0x1821de79c: mov rcx, qword ptr [rip + 0x1ea589d]  ; "Copy"
// asm:   0x1821de7a3: jmp 0x1821de80a
// asm:   0x1821de803: mov rcx, qword ptr [rip + 0x1eae516]  ; "Create"
// asm:   0x1821de81a: mov rdx, qword ptr [rip + 0x1eaed7f]  ; "New set"
// asm:   0x1821de821: xor edi, edi
// asm:   0x1821de823: mov qword ptr [rsp + 0x28], rdi
// asm:   0x1821de828: mov r9, rax
// asm:   0x1821de82b: mov r8, rbx
// asm:   0x1821de82e: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1821de833: mov rcx, rbp
// asm:   0x1821de836: call 0x1821cb5d0  ; UI_SetNamePopup__Show()
// asm:   0x1821de83b: jmp 0x1821de4ef
// asm:   0x1821de91d: xor edi, edi
// asm:   0x1821de91f: mov r9, rax
// asm:   0x1821de922: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1821de927: mov r8, rsi
// asm:   0x1821de92a: mov rdx, rbp
// asm:   0x1821de92d: mov rcx, rbx
// asm:   0x1821de930: jmp 0x1821de4ea
// asm:   0x1821dea19: mov r8, qword ptr [rip + 0x1efbc98]  ; "Presets"
// asm:   0x1821dea20: xor edi, edi
// asm:   0x1821dea22: mov qword ptr [rsp + 0x30], rdi
// asm:   0x1821dea27: mov r9, rsi
// asm:   0x1821dea2a: mov qword ptr [rsp + 0x28], rdi
// asm:   0x1821dea2f: mov rdx, rbp
// asm:   0x1821dea32: mov rcx, rbx
// asm:   0x1821dea35: mov qword ptr [rsp + 0x20], rdi
// asm:   0x1821dea3a: call 0x1821ca2b0  ; UI_SelectListPopup__ShowLoad()
// asm:   0x1821dea3f: jmp 0x1821de4ef
// asm:   0x1821deb60: mov ecx, edi
// asm:   0x1821deb62: jmp 0x1821deb98
// asm:   0x1821debc5: mov rcx, qword ptr [rip + 0x1ef0fa4]  ; TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28
// asm:   0x1821debcc: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x1821debd1: xor edx, edx
// asm:   0x1821debd3: mov rcx, rax
// asm:   0x1821debd6: mov rbx, rax
// asm:   0x1821debd9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821debde: xor r8d, r8d
// asm:   0x1821debe1: mov dword ptr [rbx + 0x10], edi
// asm:   0x1821debe4: mov rdx, rbx
// asm:   0x1821debe7: mov rcx, r14
// asm:   0x1821debea: call 0x182f1cef0  ; UnityEngine_MonoBehaviour__StartCoroutine()
// asm:   0x1821debef: jmp 0x1821de4ef
// asm:   0x1821dec75: mov r9, qword ptr [rip + 0x1ea02ac]  ; ""
// asm:   0x1821dec7c: xor edi, edi
// asm:   0x1821dec7e: mov qword ptr [rsp + 0x28], rdi
// asm:   0x1821dec83: mov r8b, 1
// asm:   0x1821dec86: mov rdx, rsi
// asm:   0x1821dec89: mov qword ptr [rsp + 0x20], r9
// asm:   0x1821dec8e: mov rcx, rbx
// asm:   0x1821dec91: call 0x1821c4c20  ; UI_ImportPopup__Show()
// asm:   0x1821dec96: jmp 0x1821de4ef

void UI_CharacterEditorTitanCostumePanel__OnButtonClick
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_SetNamePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  Il2CppObject *object;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BaseSetSetting_c *pSVar6;
  UI_ExportPopup_o *__this_02;
  UI_SelectListPopup_o *__this_03;
  GameManagers_BaseGameManager_o *pGVar7;
  Characters_DummyTitan_o *__this_04;
  UI_ImportPopup_o *__this_05;
  bool bVar8;
  uint32_t uVar9;
  UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *object_00;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  System_String_o *pSVar12;
  Settings_BaseSetSetting_o *pSVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  MethodInfo *pMVar15;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  Settings_TitanCustomSet_o *pSVar16;
  UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *routine;
  Settings_TitanCustomSet_o *set;
  
  if (Il2CppMethodInitialized_184346fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CanDeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c_OnButtonClick_b__26_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__5);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"QuitWithoutSaveConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"New set");
    Il2CppMethodInitialized_184346fd5 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *)0x0) {
    (object_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).__4__this,__this);
    (object_00->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).name,name);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      pSVar10 = (object_00->fields).name;
      __this_00 = (pUVar3->fields).SetNamePopup;
      uVar9 = _PrivateImplementationDetails___ComputeStringHash(pSVar10,(MethodInfo *)0x0);
      if (uVar9 < 0x5cb46bab) {
        if (uVar9 < 0x573e0af5) {
          if (uVar9 == 0x547f6497) {
            bVar8 = System_String__op_Equality(pSVar10,"SaveQuit",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
            if (pSVar2 != (Settings_TitanCustomSettings_o *)0x0) {
              (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
              set = (Settings_TitanCustomSet_o *)0x0;
              pGVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
              if (pGVar7 != (GameManagers_BaseGameManager_o *)0x0) {
                bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
                if (((pGVar7->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pGVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pGVar7);
                }
                __this_04 = (Characters_DummyTitan_o *)(*(uint64_t *)((char *)pGVar7 + 0x38));
                if (__this_04 != (Characters_DummyTitan_o *)0x0) {
                  bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
                  if ((bVar1 <= (__this_04->klass->_2).typeHierarchyDepth) &&
                     ((__this_04->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                      (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
                    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
                    if ((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
                       (pSVar4 = (pSVar2->fields).TitanCustomSets,
                       pSVar4 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_1821dec9b;
                    pSVar16 = (Settings_TitanCustomSet_o *)
                              Settings_SetSettingsContainer_object___GetSelectedSet
                                        ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                         (MethodInfo_C8EAF0 *)
                                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet
                                        );
                    if (pSVar16 != (Settings_TitanCustomSet_o *)0x0) {
                      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
                      if (((((Settings_BaseSetSetting_c *)pSVar16->klass)->_2).typeHierarchyDepth < bVar1) ||
                         (set = pSVar16,
                         (((Settings_BaseSetSetting_c *)pSVar16->klass)->_2).typeHierarchy
                         [(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
                        il2cpp_codegen_raise_invalid_cast_exception();
                      }
                    }
                    Characters_DummyTitan__LoadSet(__this_04,set,true,(MethodInfo *)0x0);
                  }
                }
              }
              if (Il2CppMethodInitialized_184346fd7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28
                          );
                Il2CppMethodInitialized_184346fd7 = '\x01';
              }
              routine = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28
                                  );
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,
                         (MethodInfo *)0x0);
              (routine->fields).__1__state = 0;
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
              return;
            }
          }
          else {
            if (uVar9 != 0x573e0af4) {
              return;
            }
            bVar8 = System_String__op_Equality(pSVar10,"Import",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar3 != (UI_BaseMenu_o *)0x0) {
              __this_05 = (pUVar3->fields).ImportPopup;
              pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__5
                         ,(MethodInfo *)0x0);
              if (__this_05 != (UI_ImportPopup_o *)0x0) {
                UI_ImportPopup__Show
                          (__this_05,pUVar11,true,"","",
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          goto label_1821dec9b;
        }
        if (uVar9 != 0x5797ea6a) {
          if (uVar9 != 0x5cb46baa) {
            return;
          }
          bVar8 = System_String__op_Equality(pSVar10,"LoadPreset",(MethodInfo *)0x0);
          if (!bVar8) {
            return;
          }
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
          if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
             (pSVar4 = (pSVar2->fields).TitanCustomSets,
             pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
            collection = Settings_SetSettingsContainer_object___GetSetNames
                                   ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                    (MethodInfo_C8EC20 *)
                                    MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
            items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
            System_Collections_Generic_List_object____ctor_94fb10
                      ((System_Collections_Generic_List_object__o *)items,
                       (System_Collections_Generic_IEnumerable_T__o *)collection,
                       (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
            if (pUVar3 != (UI_BaseMenu_o *)0x0) {
              __this_03 = (pUVar3->fields).SelectListPopup;
              pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__4
                         ,(MethodInfo *)0x0);
              if (__this_03 != (UI_SelectListPopup_o *)0x0) {
                UI_SelectListPopup__ShowLoad
                          (__this_03,items,"Presets",pUVar11,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto label_1821dec9b;
        }
        bVar8 = System_String__op_Equality(pSVar10,"Delete",(MethodInfo *)0x0);
        if (!bVar8) {
          return;
        }
        if ((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
           (pSVar4 = (pSVar2->fields).TitanCustomSets,
           pSVar4 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_1821dec9b;
        bVar8 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)pSVar4,
                           (MethodInfo_C8E620 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CanDeleteSelectedSet);
        if (!bVar8) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1821dec9b;
        __this_01 = (pUVar3->fields).ConfirmPopup;
        pSVar10 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
        pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                   (intptr_t)
                   MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__1,
                   (MethodInfo *)0x0);
        pSVar12 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
      }
      else {
        if (uVar9 < 0x990de47e) {
          if (uVar9 == 0x658f3664) {
            bVar8 = System_String__op_Equality(pSVar10,"Copy",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                       (intptr_t)
                       MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__3,
                       (MethodInfo *)0x0);
            pSVar10 = "Copy";
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              pSVar10 = "Copy";
            }
          }
          else {
            if (uVar9 != 0x990de47d) {
              return;
            }
            bVar8 = System_String__op_Equality(pSVar10,"Create",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                       (intptr_t)
                       MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__0,
                       (MethodInfo *)0x0);
            pSVar10 = "Create";
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              pSVar10 = "Create";
            }
          }
          pSVar10 = UI_UIManager__GetLocaleCommon(pSVar10,(MethodInfo *)0x0);
          if (__this_00 != (UI_SetNamePopup_o *)0x0) {
            UI_SetNamePopup__Show
                      (__this_00,"New set",pUVar11,pSVar10,(System_String_o *)0x0,
                       (MethodInfo *)0x0);
            return;
          }
          goto label_1821dec9b;
        }
        if (uVar9 != 0xc7b3d356) {
          if (uVar9 == 0xc80631f3) {
            bVar8 = System_String__op_Equality(pSVar10,"Rename",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
                (pSVar4 = (pSVar2->fields).TitanCustomSets,
                pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
               ((pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet
                                     ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                      (MethodInfo_C8EAF0 *)
                                      MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
                pSVar13 != (Settings_BaseSetSetting_o *)0x0 &&
                (pSVar5 = (pSVar13->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0)))) {
              pSVar10 = (pSVar5->fields)._value;
              pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object_00,
                         (intptr_t)
                         MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__2
                         ,(MethodInfo *)0x0);
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar12 = UI_UIManager__GetLocaleCommon("Rename",(MethodInfo *)0x0);
              if (__this_00 != (UI_SetNamePopup_o *)0x0) {
                UI_SetNamePopup__Show
                          (__this_00,pSVar10,pUVar11,pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (uVar9 != 0xe86349d3) {
              return;
            }
            bVar8 = System_String__op_Equality(pSVar10,"Export",(MethodInfo *)0x0);
            if (!bVar8) {
              return;
            }
            if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
                (pSVar4 = (pSVar2->fields).TitanCustomSets,
                pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
               (pSVar13 = Settings_SetSettingsContainer_object___GetSelectedSet
                                    ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                     (MethodInfo_C8EAF0 *)
                                     MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
               pSVar13 != (Settings_BaseSetSetting_o *)0x0)) {
              pSVar6 = pSVar13->klass;
              bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
              if (((pSVar6->_2).typeHierarchyDepth < bVar1) ||
                 ((pSVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar13,TypeInfo_Settings_TitanCustomSet);
              }
              pSVar14 = (*(pSVar6->vtable)._5_SerializeToJsonObject.methodPtr)
                                  (pSVar13,(pSVar6->vtable)._5_SerializeToJsonObject.method);
              if (pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                bVar8 = (*(pSVar14->klass->vtable)._28_HasKey.methodPtr)
                                  (pSVar14,(MethodInfo *)"Preset");
                if (bVar8) {
                  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                  }
                  pMVar15 = (MethodInfo *)
                            SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(false,(MethodInfo *)0x0);
                  (*(pSVar14->klass->vtable)._8_set_Item.methodPtr)
                            (pSVar14,(System_Type_o *)"Preset",pMVar15);
                }
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                if (pUVar3 != (UI_BaseMenu_o *)0x0) {
                  __this_02 = (pUVar3->fields).ExportPopup;
                  pSVar10 = (*(pSVar14->klass->vtable)._30_ToString.methodPtr)
                                      (pSVar14,4,(pSVar14->klass->vtable)._30_ToString.method);
                  if (__this_02 != (UI_ExportPopup_o *)0x0) {
                    UI_ExportPopup__Show(__this_02,pSVar10,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
          goto label_1821dec9b;
        }
        bVar8 = System_String__op_Equality(pSVar10,"Quit",(MethodInfo *)0x0);
        if (!bVar8) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_1821dec9b;
        __this_01 = (pUVar3->fields).ConfirmPopup;
        pSVar10 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
        if ((TypeInfo_UI_CharacterEditorTitanCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
        }
        pUVar11 = TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9__26_6;
        if (pUVar11 == (UnityEngine_Events_UnityAction_o *)0x0) {
          if ((TypeInfo_UI_CharacterEditorTitanCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
          }
          object = (Il2CppObject *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9;
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,object,
                     (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_c_OnButtonClick_b__26_6,
                     (MethodInfo *)0x0);
          TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9__26_6 = pUVar11;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9__26_6,pUVar11);
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar12 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
      }
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,pSVar10,pUVar11,pSVar12,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1821dec9b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821decf0
// eh: try 0x1821df080..0x1821df1da -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821df173: mov rbx, qword ptr [rsp + 0x68]
// asm:   0x1821df178: test rbx, rbx
// asm:   0x1821df17b: je 0x1821df1a1
// asm:   0x1821df17d: lea rcx, [rip + 0x1ee3e44]  ; "Invalid titan preset."
// asm:   0x1821df184: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1821df189: mov rdx, rax
// asm:   0x1821df18c: xor r8d, r8d
// asm:   0x1821df18f: mov rcx, rbx
// asm:   0x1821df192: call 0x1821c4b10  ; UI_ImportPopup__ShowError()
// asm:   0x1821df197: mov r14, qword ptr [rsp + 0x50]
// asm:   0x1821df19c: jmp 0x1821deeea
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  UI_SetNamePopup_o *pUVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_ListSetting_T__o *obj;
  Settings_IntSetting_o *pSVar5;
  Settings_StringSetting_o *__this_01;
  UI_ImportPopup_o *pUVar6;
  System_String_o *value;
  Settings_BoolSetting_o *__this_02;
  bool bVar7;
  void *pvVar8;
  Settings_BaseSetSetting_o *pSVar9;
  
  if (Il2CppMethodInitialized_184346fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CopySelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CreateSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_DeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSetIndex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    Il2CppMethodInitialized_184346fd6 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((pUVar1 == (UI_BaseMenu_o *)0x0) ||
     (pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings,
     pSVar2 == (Settings_TitanCustomSettings_o *)0x0)) goto label_1821df1a1;
  pUVar3 = (pUVar1->fields).SetNamePopup;
  __this_00 = (pSVar2->fields).TitanCustomSets;
  bVar7 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if (bVar7) {
    if (((pUVar3 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar4 = (pUVar3->fields).NameSetting, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_1821df1a1;
    Settings_SetSettingsContainer_object___CreateSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar4->fields)._value,
               (MethodInfo_C8E8E0 *)MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CreateSet);
  }
  else {
    bVar7 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if (bVar7) {
      if (__this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet
                  ((Settings_SetSettingsContainer_T__o *)__this_00,
                   (MethodInfo_C8EA30 *)
                   MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_DeleteSelectedSet);
        pSVar5 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
        if (pSVar5 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar5,0,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_1821deeea;
        }
      }
      goto label_1821df1a1;
    }
    bVar7 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if (bVar7) {
      if (__this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (((pSVar9 != (Settings_BaseSetSetting_o *)0x0) && (pUVar3 != (UI_SetNamePopup_o *)0x0)) &&
           ((pSVar4 = (pUVar3->fields).NameSetting, pSVar4 != (Settings_StringSetting_o *)0x0 &&
            (__this_01 = (pSVar9->fields).Name, __this_01 != (Settings_StringSetting_o *)0x0)))) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)(pSVar4->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          goto label_1821deeea;
        }
      }
      goto label_1821df1a1;
    }
    bVar7 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if (!bVar7) {
      bVar7 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if (bVar7) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_1821df1a1;
        pUVar6 = (pUVar1->fields).ImportPopup;
        if (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pSVar9->fields).Name;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        value = (pSVar4->fields)._value;
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pUVar6 == (UI_ImportPopup_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pUVar6->fields).ImportSetting;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(pSVar9->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                  (pSVar9,(pSVar4->fields)._value,(pSVar9->klass->vtable)._9_DeserializeFromJsonString.method)
        ;
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = (pSVar9->fields).Preset;
        if (__this_02 == (Settings_BoolSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)__this_02,false,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar9 == (Settings_BaseSetSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pSVar9->fields).Name;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) {
          ThrowNullReferenceException();
        }
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
      }
      goto label_1821deeea;
    }
    if (((pUVar3 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar4 = (pUVar3->fields).NameSetting, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_1821df1a1;
    Settings_SetSettingsContainer_object___CopySelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar4->fields)._value,
               (MethodInfo_C8E740 *)MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CopySelectedSet);
  }
  obj = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
  if (obj != (Settings_ListSetting_T__o *)0x0) {
    pSVar5 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
    if (pSVar5 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar5,(int)pvVar8 + -1,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      (__this->fields)._shouldGeneratePreviewAfterRebuild = true;
label_1821deeea:
      UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_1821df1a1:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$SaveQuitCaptureCoroutineInternal
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821df520

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28);
    Il2CppMethodInitialized_184346fd7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___ctor (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821d6e20

void
UI_CharacterEditorTitanCostumePanel___ctor(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821e0860

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_184346fd8 = '\x01';
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"Quit",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821e08a0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    Il2CppMethodInitialized_184346fd9 = '\x01';
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"SaveQuit",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821e08e0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel___Setup_b__17_3(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel___Setup_b__17_4(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel___Setup_b__17_5(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel___Setup_b__17_6(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_7
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void
UI_CharacterEditorTitanCostumePanel___Setup_b__17_7(UI_CharacterEditorTitanCostumePanel_o* __this, MethodInfo* method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_8
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x1821decc0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 != (UI_CharacterEditorMenu_o *)0x0) {
    (*(pUVar1->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar1,(System_Type_o *)0x0,(pUVar1->klass->vtable)._9_ResetCharacter.method);
    return;
  }
  ThrowNullReferenceException();
}


