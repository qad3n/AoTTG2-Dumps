// Type: UI.CharacterEditorTitanCostumePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanCostumePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs
// --------------------------------

// UI.CharacterEditorTitanCostumePanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___cctor (const MethodInfo* method);
// 0x5cdd8f0

void UI_CharacterEditorTitanCostumePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547bdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
    Il2CppMethodInitialized_07547bdb = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9 =
       (UI_CharacterEditorTitanCostumePanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields->__9);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___ctor (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x5cdd960

void UI_CharacterEditorTitanCostumePanel___c___ctor
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c$$<OnButtonClick>b__26_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__26_6 (UI_CharacterEditorTitanCostumePanel___c_o* __this, const MethodInfo* method);
// 0x5cdd970

void UI_CharacterEditorTitanCostumePanel___c___OnButtonClick_b__26_6
               (UI_CharacterEditorTitanCostumePanel___c_o *__this,MethodInfo *method)

{
  Settings_TitanCustomSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547bdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547bdc = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews((MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (pSVar1 == (Settings_TitanCustomSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pSVar1->klass->vtable)._19_Load.methodPtr)(pSVar1,(pSVar1->klass->vtable)._19_Load.method);
  ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___ctor (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdcff0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___ctor
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__0 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdda00

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__0
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__1 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdda20

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__1
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__2 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdda40

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__2
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__3 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdda60

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__3
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__4 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cdda80

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__4
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadPreset");
    Il2CppMethodInitialized_07547bdd = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,"LoadPreset",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__5 (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5cddac0

void UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0___OnButtonClick_b__5
               (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish(__this_00,(__this->fields).name,in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23___ctor (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cdc250

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23___ctor
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x5cddae0

void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__MoveNext (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x5cddaf0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdddd7: mov qword ptr [rsp], rbp
// asm:   0x5cddddb: lea rbp, [rip + 0x15b59de]  ; MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item
// asm:   0x5cddde2: lea r15, [rip + 0x159fd1f]  ; TypeInfo_Settings_TitanCustomSet
// asm:   0x5cddde9: nop dword ptr [rax]
// asm:   0x5cddf63: lea rbx, [r14 + 0x38]
// asm:   0x5cddf67: jmp 0x5cddf75

bool UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__MoveNext
               (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
               MethodInfo *method)

{
  Settings_TitanCustomSettings_o **targetAddress;
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar3;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_DummyTitan_o *pCVar8;
  Characters_BasicTitanSetup_o *pCVar9;
  Characters_DummyTitan_c *pCVar10;
  bool bVar11;
  VirtualInvokeData *pVVar12;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_TitanCustomSet_o *pSVar13;
  Il2CppObject *pIVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  Settings_TitanCustomSet_o *pSVar18;
  Characters_DummyTitan_o **ppCVar19;
  
  if (Il2CppMethodInitialized_07547bde == '\0') {
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
    Il2CppMethodInitialized_07547bde = '\x01';
  }
  iVar16 = (__this->fields).__1__state;
  if (iVar16 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).TitanCustomSets,
        pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
       (pSVar7 = (pSVar3->fields).SelectedSetIndex, pSVar7 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(__this->fields)._currentSelectedIndex_5__3,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar2 = (__this->fields)._settings_5__2;
      if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).TitanCustomSets,
         pSVar3 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar13 = (Settings_TitanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar3,
                             (MethodInfo_40477A0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar13 != (Settings_TitanCustomSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar13->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
          }
        }
        pCVar8 = (__this->fields)._character_5__4;
        if ((pCVar8 != (Characters_DummyTitan_o *)0x0) &&
           (pCVar9 = (pCVar8->fields).Setup, pCVar9 != (Characters_BasicTitanSetup_o *)0x0)) {
          ppCVar19 = &(__this->fields)._character_5__4;
          Characters_BasicTitanSetup__Load(pCVar9,pSVar13,(MethodInfo *)0x0);
          if (*ppCVar19 != (Characters_DummyTitan_o *)0x0) {
            iVar16 = 0;
            Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)*ppCVar19,(MethodInfo *)0x0);
            *ppCVar19 = (Characters_DummyTitan_o *)0x0;
            Il2CppCodeGenWriteBarrier(ppCVar19);
            goto label_05cdde60;
          }
        }
      }
    }
    goto label_05cddfdb;
  }
  if (iVar16 == 0) {
    (__this->fields).__1__state = -1;
    targetAddress = &(__this->fields)._settings_5__2;
    (__this->fields)._settings_5__2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar2 = (__this->fields)._settings_5__2;
    if (((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
        (pSVar3 = (pSVar2->fields).TitanCustomSets,
        pSVar3 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
       (obj = (pSVar3->fields).Sets, obj == (Settings_ListSetting_T__o *)0x0)) {
label_05cddfdb:
      ThrowNullReferenceException();
    }
    pIVar4 = (Il2CppClass *)obj->klass;
    uVar15 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar15 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar5->interfaceType + lVar17) ==
            TypeInfo_Settings_IListSetting) {
          pVVar12 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar17) + 2);
          goto label_05cdddb6;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar15 * 0x10 != lVar17);
    }
    pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05cdddb6:
    __this_00 = (System_Collections_Generic_List_object__o *)
                (*pVVar12->methodPtr)((Il2CppObject *)obj,pVVar12->method);
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05cddfdb;
    iVar16 = 0;
    if ((__this_00->fields)._size < 1) goto label_05cdde60;
    do {
      pSVar13 = (Settings_TitanCustomSet_o *)
                System_Collections_Generic_List_object___get_Item
                          (__this_00,iVar16,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_BaseSetting_get_Item);
      if (pSVar13 == (Settings_TitanCustomSet_o *)0x0) goto label_05cddfdb;
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar13->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        pSVar18 = pSVar13;
label_05cddfe3:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar18);
      }
      pSVar6 = (pSVar13->fields).UniqueId;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05cddfdb;
      bVar11 = System_String__op_Equality
                         ((pSVar6->fields)._value,(__this->fields).previousProfileId,(MethodInfo *)0x0);
      if (bVar11) {
        pSVar2 = *targetAddress;
        if (((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
            (pSVar3 = (pSVar2->fields).TitanCustomSets,
            pSVar3 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
           (pSVar7 = (pSVar3->fields).SelectedSetIndex, pSVar7 == (Settings_IntSetting_o *)0x0))
        goto label_05cddfdb;
        (__this->fields)._currentSelectedIndex_5__3 = (pSVar7->fields)._value;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)pSVar7,iVar16,
                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pCVar10 = TypeInfo_Characters_DummyTitan;
        pSVar18 = (Settings_TitanCustomSet_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
        if (pSVar18 == (Settings_TitanCustomSet_o *)0x0) goto label_05cddfdb;
        bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
        if (((((GameManagers_BaseGameManager_c *)pSVar18->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((GameManagers_BaseGameManager_c *)pSVar18->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) goto label_05cddfe3;
        pCVar8 = (Characters_DummyTitan_o *)(pSVar18->fields).Preset;
        if (pCVar8 == (Characters_DummyTitan_o *)0x0) {
          (__this->fields)._character_5__4 = (Characters_DummyTitan_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
          if (((((Settings_BoolSetting_c *)pCVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BoolSetting_c *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
label_05cddff0:
            il2cpp_codegen_raise_invalid_cast_exception(pCVar8,pCVar10);
          }
          (__this->fields)._character_5__4 = pCVar8;
          if (((((Settings_BoolSetting_c *)pCVar8->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BoolSetting_c *)pCVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)pCVar10)) goto label_05cddff0;
        }
        ppCVar19 = &(__this->fields)._character_5__4;
        Il2CppCodeGenWriteBarrier(ppCVar19);
        pCVar8 = *ppCVar19;
        if ((pCVar8 == (Characters_DummyTitan_o *)0x0) ||
           (pCVar9 = (pCVar8->fields).Setup, pCVar9 == (Characters_BasicTitanSetup_o *)0x0))
        goto label_05cddfdb;
        Characters_BasicTitanSetup__Load(pCVar9,pSVar13,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pIVar14 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        iVar16 = 1;
        goto label_05cdde60;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < (__this_00->fields)._size);
  }
  iVar16 = 0;
label_05cdde60:
  return SUB41(iVar16,0);
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x5cde000

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o* __this, const MethodInfo* method);
// 0x5cde010

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
// 0x5cde050

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28___ctor (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cdd710

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28___ctor
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_IDisposable_Dispose (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x5cde060

void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_IDisposable_Dispose
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$MoveNext
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__MoveNext (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x5cde070

bool UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__MoveNext
               (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547bdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547bdf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar2 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(false,(MethodInfo *)0x0);
    Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk((MethodInfo *)0x0);
    ApplicationManagers_SceneLoader__LoadScene(1,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x5cde140

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_Reset (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o* __this, const MethodInfo* method);
// 0x5cde150

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
// 0x5cde190

Il2CppObject *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28__System_Collections_IEnumerator_get_Current
          (UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.CharacterEditorTitanCostumePanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorTitanCostumePanel__get_Title (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda120

System_String_o *
UI_CharacterEditorTitanCostumePanel__get_Title
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547bcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547bcd = '\x01';
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
// 0x5cda1c0

float UI_CharacterEditorTitanCostumePanel__get_Width
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_Height
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_Height (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda1d0

float UI_CharacterEditorTitanCostumePanel__get_Height
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 1020.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda1e0

float UI_CharacterEditorTitanCostumePanel__get_VerticalSpacing
                (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.CharacterEditorTitanCostumePanel$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda1f0

int32_t UI_CharacterEditorTitanCostumePanel__get_HorizontalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda200

int32_t UI_CharacterEditorTitanCostumePanel__get_VerticalPadding
                  (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return 0x19;
}


// UI.CharacterEditorTitanCostumePanel$$get_ScrollBar
// il2cpp: bool UI_CharacterEditorTitanCostumePanel__get_ScrollBar (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cda210

bool UI_CharacterEditorTitanCostumePanel__get_ScrollBar
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.CharacterEditorTitanCostumePanel$$Setup
// il2cpp: void UI_CharacterEditorTitanCostumePanel__Setup (UI_CharacterEditorTitanCostumePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cda220
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cda4bf: lea rdi, [rbx + 0x80]
// asm:   0x5cda4c6: jmp 0x5cda4f3
// asm:   0x5cdab29: nop dword ptr [rax]
// asm:   0x5cdad19: nop dword ptr [rax]
// asm:   0x5cdaf09: nop dword ptr [rax]
// asm:   0x5cdb208: mov rdi, rax

void UI_CharacterEditorTitanCostumePanel__Setup
               (UI_CharacterEditorTitanCostumePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  Settings_TitanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  Settings_IntSetting_o *setting;
  Settings_BaseSetSetting_c *setting_00;
  UI_BaseMenu_o *pUVar7;
  UI_IconPickPopup_o *pUVar8;
  Settings_BaseSetting_o *setting_01;
  Settings_InspectorSettingMetadata_o *setting_02;
  System_Collections_Specialized_OrderedDictionary_o *setting_03;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *setting_04;
  UI_ColorPickPopup_o *pUVar9;
  System_Collections_Generic_HashSet_string__o *setting_05;
  UI_CharacterEditorMenu_c *pUVar10;
  System_String_o *subCategory;
  Settings_BaseSetSetting_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *__this_00;
  System_String_o *pSVar13;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_String_array *pSVar15;
  System_String_array *pSVar16;
  System_Action_string__o *__this_01;
  System_Int32_array *pSVar17;
  ulong uVar18;
  MethodInfo *method_00;
  ulong uVar19;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  uint32_t uVar20;
  UI_CharacterEditorMenu_o *pUVar21;
  ulong uVar22;
  UI_CharacterEditorTitanCostumePanel_o *pUVar23;
  UI_CharacterEditorTitanCostumePanel_o *pUVar24;
  ulong uVar25;
  MethodInfo *in_R8;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  MethodInfo *in_stack_ffffffffffffff78;
  MethodInfo *pMVar30;
  
  if (Il2CppMethodInitialized_07547bce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorTitanCostumePanel_OnButtonClick);
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"CustomSet");
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
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_07547bce = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar21 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar21 == (UI_CharacterEditorMenu_o *)0x0) goto label_05cda4e1;
label_05cda465:
    pUVar10 = TypeInfo_UI_CharacterEditorMenu;
    bVar2 = (TypeInfo_UI_CharacterEditorMenu->_2).typeHierarchyDepth;
    if (((pUVar21->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar21->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_CharacterEditorMenu
       )) {
label_05cdb1fd:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar21,pUVar10);
    }
    (__this->fields)._menu = pUVar21;
    if (((pUVar21->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pUVar21->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pUVar10)) goto label_05cdb1fd;
  }
  else {
    pUVar21 = (UI_CharacterEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar21 != (UI_CharacterEditorMenu_o *)0x0) goto label_05cda465;
label_05cda4e1:
    (__this->fields)._menu = (UI_CharacterEditorMenu_o *)0x0;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).TitanCustomSets,
      pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (pSVar11 = Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)pSVar4,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
     pSVar11 != (Settings_BaseSetSetting_o *)0x0)) {
    bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar11->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
label_05cdb20b:
      il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
    }
    pSVar5 = (pSVar11->fields).UniqueId;
    if (pSVar5 != (Settings_StringSetting_o *)0x0) {
      (__this->fields)._previousProfileId = (pSVar5->fields)._value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._previousProfileId);
      pSVar12 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,130.0,20.0,pSVar12,(MethodInfo *)0x0);
      subCategory = "Costume";
      pSVar12 = "CharacterEditor";
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      pUVar6 = (__this->fields).BottomBar;
      pSVar13 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
      pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar14,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar6,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,pUVar14,in_R8);
      pUVar6 = (__this->fields).BottomBar;
      pMVar30 = (MethodInfo *)"";
      pSVar13 = UI_UIManager__GetLocale
                          (pSVar12,subCategory,"SaveQuit","",
                           "",(MethodInfo *)0x0);
      pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar14,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_1,(MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(pUVar6,(UI_ElementStyle_o *)__this_00,pSVar13,0.0,pUVar14,pMVar30);
      if ((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar4 = (pSVar3->fields).TitanCustomSets,
         pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar11 = Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)pSVar4,
                             (MethodInfo_40477A0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar11 != (Settings_BaseSetSetting_o *)0x0) {
          bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar11->klass->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) goto label_05cdb20b;
        }
        pSVar4 = (pSVar3->fields).TitanCustomSets;
        if (pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
          pUVar6 = (__this->fields).SinglePanel;
          setting = (pSVar4->fields).SelectedSetIndex;
          pSVar13 = UI_UIManager__GetLocale
                              (pSVar12,subCategory,"CustomSet","",
                               "",(MethodInfo *)0x0);
          pSVar4 = (pSVar3->fields).TitanCustomSets;
          if (pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
            pSVar15 = Settings_SetSettingsContainer_object___GetSetNames
                                ((Settings_SetSettingsContainer_T__o *)pSVar4,
                                 (MethodInfo_40482D0 *)
                                 MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
            pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar14,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_2,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateDropdownSetting
                      (pUVar6,(UI_ElementStyle_o *)__this_00,(Settings_BaseSetting_o *)setting,pSVar13,pSVar15
                       ,"",170.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar14,
                       (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,
                       in_stack_ffffffffffffff78);
            pUVar6 = (__this->fields).SinglePanel;
            pSVar16 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
            if (pSVar16 != (System_String_array *)0x0) {
              if ((int)pSVar16->max_length != 0) {
                pSVar16->m_Items[0] = "Create";
                Il2CppCodeGenWriteBarrier(pSVar16->m_Items);
                if ((pSVar16->max_length & 0xfffffffe) != 0) {
                  pSVar16->m_Items[1] = "Delete";
                  Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 1);
                  if (2 < (uint)pSVar16->max_length) {
                    pSVar16->m_Items[2] = "Copy";
                    Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 2);
                    if ((pSVar16->max_length & 0xfffffffc) != 0) {
                      pSVar16->m_Items[3] = "Rename";
                      Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 3);
                      if (4 < (uint)pSVar16->max_length) {
                        pSVar16->m_Items[4] = "Import";
                        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 4);
                        if (5 < (uint)pSVar16->max_length) {
                          pSVar16->m_Items[5] = "Export";
                          Il2CppCodeGenWriteBarrier(pSVar16->m_Items + 5);
                          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
                          System_Action_object____ctor
                                    ((System_Action_object__o *)__this_01,(Il2CppObject *)__this,
                                     (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_OnButtonClick,
                                     (MethodInfo_4A81BE0 *)0x0);
                          UI_ElementFactory__CreateSetActionButtons
                                    (pUVar6,(UI_ElementStyle_o *)__this_00,pSVar16,__this_01,36.0,
                                     (MethodInfo *)pSVar15);
                          UI_BasePanel__CreateHorizontalDivider
                                    ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,
                                     (MethodInfo *)0x0);
                          if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
                          }
                          pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                              ((UI_CharacterEditorTitanCostumePanel_o *)
                                               TypeInfo_Characters_BasicTitanSetup,"Head",
                                               TypeInfo_Characters_BasicTitanSetup->static_fields->HeadCount,
                                               false,(MethodInfo *)pSVar15);
                          if (pSVar11 != (Settings_BaseSetSetting_o *)0x0) {
                            pUVar24 = (UI_CharacterEditorTitanCostumePanel_o *)(__this->fields).SinglePanel;
                            setting_00 = (*(uint64_t *)((char *)pSVar11 + 0x48));
                            pUVar23 = (UI_CharacterEditorTitanCostumePanel_o *)pSVar12;
                            pSVar13 = UI_UIManager__GetLocale
                                                (pSVar12,subCategory,"Head",
                                                 "","",(MethodInfo *)0x0
                                                );
                            pSVar16 = UI_CharacterEditorTitanCostumePanel__GetIcons(pUVar23,pSVar15,method_00)
                            ;
                            pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                            if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                              pUVar8 = (pUVar7->fields).IconPickPopup;
                              pUVar14 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        (pUVar14,(Il2CppObject *)__this,
                                         (intptr_t)
                                         MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_3,
                                         (MethodInfo *)0x0);
                              if (pSVar15 != (System_String_array *)0x0) {
                                uVar19 = pSVar15->max_length;
                                if (Il2CppMethodInitialized_07547bd0 == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                  Il2CppMethodInitialized_07547bd0 = '\x01';
                                }
                                uVar20 = (uint32_t)uVar19;
                                pSVar17 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar20);
                                if (0 < (int)uVar20) {
                                  if (pSVar17 == (System_Int32_array *)0x0) goto label_05cdb1f8;
                                  uVar18 = (ulong)(uint)pSVar17->max_length;
                                  uVar19 = uVar19 & 0xffffffff;
                                  uVar22 = uVar19 - 1;
                                  if (uVar18 <= uVar22) {
                                    uVar22 = uVar18;
                                  }
                                  if (uVar22 < 8) {
                                    uVar22 = 0;
                                  }
                                  else {
                                    uVar22 = uVar22 + 1;
                                    uVar25 = 8;
                                    if ((uVar22 & 7) != 0) {
                                      uVar25 = (ulong)((uint)uVar22 & 7);
                                    }
                                    uVar22 = uVar22 - uVar25;
                                    iVar26 = 0;
                                    iVar27 = 1;
                                    iVar28 = 2;
                                    iVar29 = 3;
                                    uVar25 = 0;
                                    do {
                                      piVar1 = pSVar17->m_Items + uVar25;
                                      *piVar1 = iVar26 + -1;
                                      piVar1[1] = iVar27 + -1;
                                      piVar1[2] = iVar28 + -1;
                                      piVar1[3] = iVar29 + -1;
                                      piVar1 = pSVar17->m_Items + uVar25 + 4;
                                      *piVar1 = iVar26 + 3;
                                      piVar1[1] = iVar27 + 3;
                                      piVar1[2] = iVar28 + 3;
                                      piVar1[3] = iVar29 + 3;
                                      uVar25 = uVar25 + 8;
                                      iVar26 = iVar26 + 8;
                                      iVar27 = iVar27 + 8;
                                      iVar28 = iVar28 + 8;
                                      iVar29 = iVar29 + 8;
                                    } while (uVar22 != uVar25);
                                  }
                                  do {
                                    if (uVar18 == uVar22) goto label_05cdb1f3;
                                    pSVar17->m_Items[uVar22] = (int)uVar22 + -1;
                                    uVar22 = uVar22 + 1;
                                  } while (uVar19 != uVar22);
                                }
                                UI_ElementFactory__CreateIconPickSetting
                                          ((UnityEngine_Transform_o *)pUVar24,(UI_ElementStyle_o *)__this_00,
                                           (Settings_BaseSetting_o *)setting_00,pSVar13,pSVar15,pSVar16,pUVar8
                                           ,"",(System_String_array *)0x0,170.0,40.0,
                                           pUVar14,(UI_TooltipPopup_o *)0x0,pSVar17,in_stack_ffffffffffffff78)
                                ;
                                pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                                    (pUVar24,"Body",
                                                     TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                     BodyCount,false,(MethodInfo *)pSVar15);
                                pUVar24 = (UI_CharacterEditorTitanCostumePanel_o *)
                                          (__this->fields).SinglePanel;
                                setting_01 = (*(uint64_t *)((char *)pSVar11 + 0x50));
                                pUVar23 = (UI_CharacterEditorTitanCostumePanel_o *)pSVar12;
                                pSVar13 = UI_UIManager__GetLocale
                                                    (pSVar12,subCategory,"Body",
                                                     "","",
                                                     (MethodInfo *)0x0);
                                pSVar16 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                    (pUVar23,pSVar15,method_01);
                                pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                                  pUVar8 = (pUVar7->fields).IconPickPopup;
                                  pUVar14 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction)
                                  ;
                                  UnityEngine_Events_UnityAction___ctor
                                            (pUVar14,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_4,
                                             (MethodInfo *)0x0);
                                  if (pSVar15 != (System_String_array *)0x0) {
                                    uVar19 = pSVar15->max_length;
                                    if (Il2CppMethodInitialized_07547bd0 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                      Il2CppMethodInitialized_07547bd0 = '\x01';
                                    }
                                    uVar20 = (uint32_t)uVar19;
                                    pSVar17 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar20);
                                    if (0 < (int)uVar20) {
                                      if (pSVar17 == (System_Int32_array *)0x0) goto label_05cdb1f8;
                                      uVar18 = (ulong)(uint)pSVar17->max_length;
                                      uVar19 = uVar19 & 0xffffffff;
                                      uVar22 = uVar19 - 1;
                                      if (uVar18 <= uVar22) {
                                        uVar22 = uVar18;
                                      }
                                      if (uVar22 < 8) {
                                        uVar22 = 0;
                                      }
                                      else {
                                        uVar22 = uVar22 + 1;
                                        uVar25 = 8;
                                        if ((uVar22 & 7) != 0) {
                                          uVar25 = (ulong)((uint)uVar22 & 7);
                                        }
                                        uVar22 = uVar22 - uVar25;
                                        iVar26 = 0;
                                        iVar27 = 1;
                                        iVar28 = 2;
                                        iVar29 = 3;
                                        uVar25 = 0;
                                        do {
                                          piVar1 = pSVar17->m_Items + uVar25;
                                          *piVar1 = iVar26 + -1;
                                          piVar1[1] = iVar27 + -1;
                                          piVar1[2] = iVar28 + -1;
                                          piVar1[3] = iVar29 + -1;
                                          piVar1 = pSVar17->m_Items + uVar25 + 4;
                                          *piVar1 = iVar26 + 3;
                                          piVar1[1] = iVar27 + 3;
                                          piVar1[2] = iVar28 + 3;
                                          piVar1[3] = iVar29 + 3;
                                          uVar25 = uVar25 + 8;
                                          iVar26 = iVar26 + 8;
                                          iVar27 = iVar27 + 8;
                                          iVar28 = iVar28 + 8;
                                          iVar29 = iVar29 + 8;
                                        } while (uVar22 != uVar25);
                                      }
                                      do {
                                        if (uVar18 == uVar22) goto label_05cdb1f3;
                                        pSVar17->m_Items[uVar22] = (int)uVar22 + -1;
                                        uVar22 = uVar22 + 1;
                                      } while (uVar19 != uVar22);
                                    }
                                    UI_ElementFactory__CreateIconPickSetting
                                              ((UnityEngine_Transform_o *)pUVar24,
                                               (UI_ElementStyle_o *)__this_00,setting_01,pSVar13,pSVar15,
                                               pSVar16,pUVar8,"",(System_String_array *)0x0
                                               ,170.0,40.0,pUVar14,(UI_TooltipPopup_o *)0x0,pSVar17,
                                               in_stack_ffffffffffffff78);
                                    pSVar15 = UI_CharacterEditorTitanCostumePanel__GetOptions
                                                        (pUVar24,"Eye",
                                                         TypeInfo_Characters_BasicTitanSetup->static_fields->
                                                         EyeCount,false,(MethodInfo *)pSVar15);
                                    pUVar24 = (UI_CharacterEditorTitanCostumePanel_o *)
                                              (__this->fields).SinglePanel;
                                    setting_02 = (*(uint64_t *)((char *)pSVar11 + 0x58));
                                    pUVar23 = (UI_CharacterEditorTitanCostumePanel_o *)pSVar12;
                                    pSVar13 = UI_UIManager__GetLocale
                                                        (pSVar12,subCategory,"Eye",
                                                         "","",
                                                         (MethodInfo *)0x0);
                                    pSVar16 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                        (pUVar23,pSVar15,method_02);
                                    pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                    if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                                      pUVar8 = (pUVar7->fields).IconPickPopup;
                                      pUVar14 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_UnityEngine_Events_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor
                                                (pUVar14,(Il2CppObject *)__this,
                                                 (intptr_t)
                                                 MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_5,
                                                 (MethodInfo *)0x0);
                                      if (pSVar15 != (System_String_array *)0x0) {
                                        uVar19 = pSVar15->max_length;
                                        if (Il2CppMethodInitialized_07547bd0 == '\0') {
                                          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
                                          Il2CppMethodInitialized_07547bd0 = '\x01';
                                        }
                                        uVar20 = (uint32_t)uVar19;
                                        pSVar17 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,uVar20);
                                        if (0 < (int)uVar20) {
                                          if (pSVar17 == (System_Int32_array *)0x0) goto label_05cdb1f8;
                                          uVar18 = (ulong)(uint)pSVar17->max_length;
                                          uVar19 = uVar19 & 0xffffffff;
                                          uVar22 = uVar19 - 1;
                                          if (uVar18 <= uVar22) {
                                            uVar22 = uVar18;
                                          }
                                          if (uVar22 < 8) {
                                            uVar22 = 0;
                                          }
                                          else {
                                            uVar22 = uVar22 + 1;
                                            uVar25 = 8;
                                            if ((uVar22 & 7) != 0) {
                                              uVar25 = (ulong)((uint)uVar22 & 7);
                                            }
                                            uVar22 = uVar22 - uVar25;
                                            iVar26 = 0;
                                            iVar27 = 1;
                                            iVar28 = 2;
                                            iVar29 = 3;
                                            uVar25 = 0;
                                            do {
                                              piVar1 = pSVar17->m_Items + uVar25;
                                              *piVar1 = iVar26 + -1;
                                              piVar1[1] = iVar27 + -1;
                                              piVar1[2] = iVar28 + -1;
                                              piVar1[3] = iVar29 + -1;
                                              piVar1 = pSVar17->m_Items + uVar25 + 4;
                                              *piVar1 = iVar26 + 3;
                                              piVar1[1] = iVar27 + 3;
                                              piVar1[2] = iVar28 + 3;
                                              piVar1[3] = iVar29 + 3;
                                              uVar25 = uVar25 + 8;
                                              iVar26 = iVar26 + 8;
                                              iVar27 = iVar27 + 8;
                                              iVar28 = iVar28 + 8;
                                              iVar29 = iVar29 + 8;
                                            } while (uVar22 != uVar25);
                                          }
                                          do {
                                            if (uVar18 == uVar22) goto label_05cdb1f3;
                                            pSVar17->m_Items[uVar22] = (int)uVar22 + -1;
                                            uVar22 = uVar22 + 1;
                                          } while (uVar19 != uVar22);
                                        }
                                        pMVar30 = __this_00;
                                        UI_ElementFactory__CreateIconPickSetting
                                                  ((UnityEngine_Transform_o *)pUVar24,
                                                   (UI_ElementStyle_o *)__this_00,
                                                   (Settings_BaseSetting_o *)setting_02,pSVar13,pSVar15,
                                                   pSVar16,pUVar8,"",
                                                   (System_String_array *)0x0,170.0,40.0,pUVar14,
                                                   (UI_TooltipPopup_o *)0x0,pSVar17,in_stack_ffffffffffffff78)
                                        ;
                                        pSVar15 = UI_CharacterEditorTitanCostumePanel__GetHairOptions
                                                            (pUVar24,pMVar30);
                                        pUVar6 = (__this->fields).SinglePanel;
                                        setting_03 = (*(uint64_t *)((char *)pSVar11 + 0x60));
                                        pUVar24 = (UI_CharacterEditorTitanCostumePanel_o *)pSVar12;
                                        pSVar13 = UI_UIManager__GetLocale
                                                            (pSVar12,subCategory,"Hair",
                                                             "","",
                                                             (MethodInfo *)0x0);
                                        pSVar16 = UI_CharacterEditorTitanCostumePanel__GetIcons
                                                            (pUVar24,pSVar15,method_03);
                                        pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                        if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                                          pUVar8 = (pUVar7->fields).IconPickPopup;
                                          pUVar14 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                               TypeInfo_UnityEngine_Events_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor
                                                    (pUVar14,(Il2CppObject *)__this,
                                                     (intptr_t)
                                                     MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_6
                                                     ,(MethodInfo *)0x0);
                                          UI_ElementFactory__CreateIconPickSetting
                                                    (pUVar6,(UI_ElementStyle_o *)__this_00,
                                                     (Settings_BaseSetting_o *)setting_03,pSVar13,pSVar15,
                                                     pSVar16,pUVar8,"",
                                                     (System_String_array *)0x0,170.0,40.0,pUVar14,
                                                     (UI_TooltipPopup_o *)0x0,(System_Int32_array *)0x0,
                                                     in_stack_ffffffffffffff78);
                                          pUVar6 = (__this->fields).SinglePanel;
                                          setting_04 = (*(uint64_t *)((char *)pSVar11 + 0x68));
                                          pSVar13 = UI_UIManager__GetLocale
                                                              (pSVar12,subCategory,"SkinColor",
                                                               "","",
                                                               (MethodInfo *)0x0);
                                          pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                          if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                                            pUVar9 = (pUVar7->fields).ColorPickPopup;
                                            pUVar14 = il2cpp_codegen_object_new
                                                                ((Il2CppClass *)
                                                                 TypeInfo_UnityEngine_Events_UnityAction);
                                            pMVar30 = (MethodInfo *)0x5cdb0f4;
                                            UnityEngine_Events_UnityAction___ctor
                                                      (pUVar14,(Il2CppObject *)__this,
                                                       (intptr_t)
                                                       MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_7
                                                       ,(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateColorSetting
                                                      (pUVar6,(UI_ElementStyle_o *)__this_00,
                                                       (Settings_BaseSetting_o *)setting_04,pSVar13,pUVar9,
                                                       "",90.0,30.0,pUVar14,pMVar30);
                                            pUVar6 = (__this->fields).SinglePanel;
                                            setting_05 = (*(uint64_t *)((char *)pSVar11 + 0x70));
                                            pSVar12 = UI_UIManager__GetLocale
                                                                (pSVar12,subCategory,"HairColor",
                                                                 "","",
                                                                 (MethodInfo *)0x0);
                                            pUVar7 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
                                            if (pUVar7 != (UI_BaseMenu_o *)0x0) {
                                              pUVar9 = (pUVar7->fields).ColorPickPopup;
                                              pUVar14 = il2cpp_codegen_object_new
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_UnityEngine_Events_UnityAction);
                                              pMVar30 = (MethodInfo *)0x5cdb1ad;
                                              UnityEngine_Events_UnityAction___ctor
                                                        (pUVar14,(Il2CppObject *)__this,
                                                         (intptr_t)
                                                                                                                  
                                                       MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_8
                                                       ,(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateColorSetting
                                                        (pUVar6,(UI_ElementStyle_o *)__this_00,
                                                         (Settings_BaseSetting_o *)setting_05,pSVar12,pUVar9,
                                                         "",90.0,30.0,pUVar14,pMVar30);
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
                          goto label_05cdb1f8;
                        }
                      }
                    }
                  }
                }
              }
label_05cdb1f3:
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
label_05cdb1f8:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetOptions (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* prefix, int32_t options, bool includeNone, const MethodInfo* method);
// 0x5cdb690
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdb77c: jmp 0x5cdb7ea
// asm:   0x5cdb7ea: mov dword ptr [rsp + 4], 0
// asm:   0x5cdb7f2: test r12d, r12d
// asm:   0x5cdb7f5: jle 0x5cdb8b1

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *prefix,int32_t options,
          bool includeNone,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  uint in_EAX;
  int iVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547bcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547bcf = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Random";
  pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      if (includeNone) {
        pSVar5 = System_String__Concat_52f0320(prefix,"None",(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_00->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05cdb8d2;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
      }
      uStack_38 = uStack_38 & 0xffffffff;
      if (0 < options) {
        do {
          pSVar5 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_52f0320(prefix,pSVar5,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_00->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) goto label_05cdb8d2;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          iVar4 = uStack_38._4_4_ + 1;
          uStack_38 = CONCAT44(iVar4,(uint)uStack_38);
        } while (iVar4 < options);
      }
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar6;
    }
  }
label_05cdb8d2:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetIntOptionValues
// il2cpp: System_Int32_array* UI_CharacterEditorTitanCostumePanel__GetIntOptionValues (UI_CharacterEditorTitanCostumePanel_o* __this, int32_t count, const MethodInfo* method);
// 0x5cdbae0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdbb6d: nop dword ptr [rax]
// asm:   0x5cdbb99: nop dword ptr [rax]

System_Int32_array *
UI_CharacterEditorTitanCostumePanel__GetIntOptionValues
          (UI_CharacterEditorTitanCostumePanel_o *__this,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  System_Int32_array *pSVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (Il2CppMethodInitialized_07547bd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_07547bd0 = '\x01';
  }
  pSVar2 = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,count);
  if (0 < count) {
    if (pSVar2 == (System_Int32_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar3 = (ulong)(uint)pSVar2->max_length;
    uVar4 = (ulong)(uint)count - 1;
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    if (uVar4 < 8) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 + 1;
      uVar5 = 8;
      if ((uVar4 & 7) != 0) {
        uVar5 = (ulong)((uint)uVar4 & 7);
      }
      uVar4 = uVar4 - uVar5;
      iVar6 = 0;
      iVar7 = 1;
      iVar8 = 2;
      iVar9 = 3;
      uVar5 = 0;
      do {
        piVar1 = pSVar2->m_Items + uVar5;
        *piVar1 = iVar6 + -1;
        piVar1[1] = iVar7 + -1;
        piVar1[2] = iVar8 + -1;
        piVar1[3] = iVar9 + -1;
        piVar1 = pSVar2->m_Items + uVar5 + 4;
        *piVar1 = iVar6 + 3;
        piVar1[1] = iVar7 + 3;
        piVar1[2] = iVar8 + 3;
        piVar1[3] = iVar9 + 3;
        uVar5 = uVar5 + 8;
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 8;
      } while (uVar4 != uVar5);
    }
    do {
      if (uVar3 == uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2->m_Items[uVar4] = (int)uVar4 + -1;
      uVar4 = uVar4 + 1;
    } while ((uint)count != uVar4);
  }
  return pSVar2;
}


// UI.CharacterEditorTitanCostumePanel$$GetHairOptions
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetHairOptions (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdbca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdbd8d: jmp 0x5cdbdb9

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetHairOptions
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  MethodInfo *pMVar4;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar5;
  
  if (Il2CppMethodInitialized_07547bd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07547bd1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  item = "Random";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
        uVar3 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar3 = (TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
      }
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 TypeInfo_Characters_BasicTitanSetup->static_fields->AllHairs,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
      pSVar5 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$GetIcons
// il2cpp: System_String_array* UI_CharacterEditorTitanCostumePanel__GetIcons (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5cdb8e0

System_String_array *
UI_CharacterEditorTitanCostumePanel__GetIcons
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  ulong uVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_07547bd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"/Titans/Previews/");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Navigation/TooltipIcon");
    Il2CppMethodInitialized_07547bd2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    if (0 < (int)options->max_length) {
      uVar6 = options->max_length & 0xffffffff;
      uVar9 = 0;
      do {
        if (uVar6 <= uVar9) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = options->m_Items[uVar9];
        bVar5 = System_String__op_Equality(pSVar7,"Random",(MethodInfo *)0x0);
        uVar2 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        if (bVar5) {
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar7 = System_String__Concat_52f0320
                             (TypeInfo_Utility_ResourcePaths->static_fields->UI,"/Icons/Navigation/TooltipIcon",
                              (MethodInfo *)0x0);
        }
        else {
          if (uVar2 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar7 = System_String__Concat_5301f10
                             (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Titans/Previews/",
                              pSVar7,(MethodInfo *)0x0);
        }
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05cdbad5;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (__this_00->fields)._items;
        if (pSVar8 == (System_String_array *)0x0) goto label_05cdbad5;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar8->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar8->m_Items[(int)uVar3] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar7,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        uVar9 = uVar9 + 1;
        uVar3 = (uint)options->max_length;
        uVar6 = (ulong)uVar3;
      } while ((long)uVar9 < (long)(int)uVar3);
    }
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar8;
    }
  }
label_05cdbad5:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$OnCustomSetSelected
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdbed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdc163: jmp 0x5cdc18b

void UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar3;
  UI_CharacterEditorMenu_o *pUVar4;
  System_String_o *b;
  System_String_o *pSVar5;
  GameManagers_BaseGameManager_o *__this_01;
  UI_CharacterEditorTitanMenu_o *pUVar6;
  bool bVar7;
  Settings_BaseSetSetting_o *pSVar8;
  UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this_02;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (Il2CppMethodInitialized_07547bd3 == '\0') {
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
    Il2CppMethodInitialized_07547bd3 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
      (__this_00 = (pSVar2->fields).TitanCustomSets,
      __this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
     (pSVar8 = Settings_SetSettingsContainer_object___GetSelectedSet
                         ((Settings_SetSettingsContainer_T__o *)__this_00,
                          (MethodInfo_40477A0 *)
                          MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
     pSVar8 == (Settings_BaseSetSetting_o *)0x0)) {
label_05cdc1c4:
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
  if (((pSVar8->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_TitanCustomSet))
  {
    il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
  }
  pSVar3 = (pSVar8->fields).UniqueId;
  if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
     (pUVar4 = (__this->fields)._menu, pUVar4 == (UI_CharacterEditorMenu_o *)0x0)) goto label_05cdc1c4;
  b = (pSVar3->fields)._value;
  (*(pUVar4->klass->vtable)._9_RebuildPanels.methodPtr)
            (pUVar4,true,(pUVar4->klass->vtable)._9_RebuildPanels.method);
  pUVar4 = (__this->fields)._menu;
  if (pUVar4 == (UI_CharacterEditorMenu_o *)0x0) goto label_05cdc1c4;
  (*(pUVar4->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar4,true,(pUVar4->klass->vtable)._10_ResetCharacter.method);
  targetAddress = &(__this->fields)._previousProfileId;
  pSVar5 = (__this->fields)._previousProfileId;
  if ((pSVar5 != (System_String_o *)0x0) &&
     (bVar7 = System_String__op_Inequality(pSVar5,b,(MethodInfo *)0x0), bVar7)) {
    __this_01 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_01 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pSVar5 = *targetAddress;
      if (Il2CppMethodInitialized_07547bd4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23);
        Il2CppMethodInitialized_07547bd4 = '\x01';
      }
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23
                            );
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      (__this_02->fields).__1__state = 0;
      (__this_02->fields).previousProfileId = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).previousProfileId);
      if (__this_01 == (GameManagers_BaseGameManager_o *)0x0) goto label_05cdc1c4;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)__this_02,
                 (MethodInfo *)0x0);
    }
    goto label_05cdc1ad;
  }
  if ((__this->fields)._shouldGeneratePreviewAfterRebuild == false) goto label_05cdc1ad;
  (__this->fields)._shouldGeneratePreviewAfterRebuild = false;
  pUVar6 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    if (pUVar6 != (UI_CharacterEditorTitanMenu_o *)0x0) goto label_05cdc16f;
label_05cdc18b:
    titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
  }
  else {
    if (pUVar6 == (UI_CharacterEditorTitanMenu_o *)0x0) goto label_05cdc18b;
label_05cdc16f:
    bVar1 = (TypeInfo_UI_CharacterEditorTitanMenu->_2).typeHierarchyDepth;
    if ((((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).typeHierarchyDepth < bVar1) goto label_05cdc18b;
    titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
    if ((((UI_CharacterEditorMenu_c *)pUVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorTitanMenu) {
      titanMenu = pUVar6;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,true,(MethodInfo *)0x0);
label_05cdc1ad:
  *targetAddress = b;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$CapturePreviousTitanProfilePreview
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* previousProfileId, System_String_o* currentProfileId, const MethodInfo* method);
// 0x5cdc1e0

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview
          (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *previousProfileId,
          System_String_o *currentProfileId,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__CapturePreviousTitanProfilePreview_d__23_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23);
    Il2CppMethodInitialized_07547bd4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).previousProfileId = previousProfileId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).previousProfileId);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$OnCharacterChanged
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdc270

void UI_CharacterEditorTitanCostumePanel__OnCharacterChanged
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$GeneratePreviewForCurrentSet
// il2cpp: void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdc2a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdc2e6: test rbx, rbx
// asm:   0x5cdc2e9: jne 0x5cdc2f7
// asm:   0x5cdc2eb: jmp 0x5cdc313

void UI_CharacterEditorTitanCostumePanel__GeneratePreviewForCurrentSet
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CharacterEditorTitanMenu_o *pUVar2;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  
  if (Il2CppMethodInitialized_07547bd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorTitanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_07547bd5 = '\x01';
  }
  pUVar2 = (UI_CharacterEditorTitanMenu_o *)(__this->fields)._menu;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  if (pUVar2 != (UI_CharacterEditorTitanMenu_o *)0x0) {
    bVar1 = (((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanMenu)->_2).typeHierarchyDepth;
    if (bVar1 <= (((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth) {
      titanMenu = (UI_CharacterEditorTitanMenu_o *)0x0;
      if ((((UI_CharacterEditorMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UI_CharacterEditorTitanMenu) {
        titanMenu = pUVar2;
      }
      Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,false,(MethodInfo *)0x0);
      return;
    }
  }
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
            ((UI_CharacterEditorTitanMenu_o *)0x0,false,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$OnButtonClick
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnButtonClick (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cdc340
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdca0a: jmp 0x5cdcfd4
// asm:   0x5cdcfd9: mov rdi, rax

void UI_CharacterEditorTitanCostumePanel__OnButtonClick
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  UI_SetNamePopup_o *__this_00;
  UI_ImportPopup_o *__this_01;
  UI_SelectListPopup_o *__this_02;
  Settings_BaseSetSetting_c *pSVar4;
  Characters_DummyTitan_o *__this_03;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  UI_ExportPopup_o *__this_04;
  Il2CppObject *object;
  bool bVar7;
  uint32_t uVar8;
  UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *__this_05;
  UnityEngine_Events_UnityAction_o *pUVar9;
  MethodInfo **ppMVar10;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *items;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  Settings_TitanCustomSet_o *set;
  UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this_06;
  System_String_o *pSVar14;
  Settings_BaseSetSetting_o *pSVar15;
  UI_CharacterEditorTitanCostumePanel___c_StaticFields *pUVar16;
  System_String_o **ppSVar17;
  UI_ConfirmPopup_o *__this_07;
  
  if (Il2CppMethodInitialized_07547bd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
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
    il2cpp_codegen_initialize_runtime_metadata(&"NewSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
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
    Il2CppMethodInitialized_07547bd6 = '\x01';
  }
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0);
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  if (__this_05 == (UI_CharacterEditorTitanCostumePanel___c__DisplayClass26_0_o *)0x0) goto label_05cdcfd4;
  (__this_05->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_05->fields).__4__this);
  ppSVar17 = &(__this_05->fields).name;
  (__this_05->fields).name = name;
  Il2CppCodeGenWriteBarrier(ppSVar17);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05cdcfd4;
  __this_00 = (pUVar3->fields).SetNamePopup;
  pSVar11 = *ppSVar17;
  uVar8 = _PrivateImplementationDetails___ComputeStringHash(pSVar11,(MethodInfo *)0x0);
  if (uVar8 < 0x5cb46bab) {
    if (uVar8 < 0x573e0af5) {
      if (uVar8 == 0x547f6497) {
        bVar7 = System_String__op_Equality(pSVar11,"SaveQuit",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
        if (pSVar2 != (Settings_TitanCustomSettings_o *)0x0) {
          (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
          set = (Settings_TitanCustomSet_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
          if (set != (Settings_TitanCustomSet_o *)0x0) {
            bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
            if (((((GameManagers_BaseGameManager_c *)set->klass)->_2).typeHierarchyDepth < bVar1) ||
               ((((GameManagers_BaseGameManager_c *)set->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
label_05cdcfdc:
              il2cpp_codegen_raise_invalid_cast_exception(set);
            }
            __this_03 = (Characters_DummyTitan_o *)(set->fields).Preset;
            if (__this_03 != (Characters_DummyTitan_o *)0x0) {
              bVar1 = (TypeInfo_Characters_DummyTitan->_2).typeHierarchyDepth;
              if ((bVar1 <= (__this_03->klass->_2).typeHierarchyDepth) &&
                 ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_Characters_DummyTitan)) {
                pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
                if ((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
                   (pSVar5 = (pSVar2->fields).TitanCustomSets,
                   pSVar5 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05cdcfd4;
                set = (Settings_TitanCustomSet_o *)
                      Settings_SetSettingsContainer_object___GetSelectedSet
                                ((Settings_SetSettingsContainer_T__o *)pSVar5,
                                 (MethodInfo_40477A0 *)
                                 MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
                if (set != (Settings_TitanCustomSet_o *)0x0) {
                  bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
                  if (((set->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) goto label_05cdcfdc;
                }
                Characters_DummyTitan__LoadSet(__this_03,set,true,(MethodInfo *)0x0);
              }
            }
          }
          if (Il2CppMethodInitialized_07547bd8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28);
            Il2CppMethodInitialized_07547bd8 = '\x01';
          }
          __this_06 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28
                                );
          System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
          (__this_06->fields).__1__state = 0;
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_06,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        if (uVar8 != 0x573e0af4) {
          return;
        }
        bVar7 = System_String__op_Equality(pSVar11,"Import",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          __this_01 = (pUVar3->fields).ImportPopup;
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar9,(Il2CppObject *)__this_05,
                     (intptr_t)
                     MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__5,
                     (MethodInfo *)0x0);
          if (__this_01 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show
                      (__this_01,pUVar9,true,"","",(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05cdcfd4;
    }
    if (uVar8 != 0x5797ea6a) {
      if ((uVar8 != 0x5cb46baa) ||
         (bVar7 = System_String__op_Equality(pSVar11,"LoadPreset",(MethodInfo *)0x0), !bVar7)) {
        return;
      }
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
         (pSVar5 = (pSVar2->fields).TitanCustomSets,
         pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        collection = Settings_SetSettingsContainer_object___GetSetNames
                               ((Settings_SetSettingsContainer_T__o *)pSVar5,
                                (MethodInfo_40482D0 *)
                                MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
        items = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor_395ca70
                  ((System_Collections_Generic_List_object__o *)items,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          __this_02 = (pUVar3->fields).SelectListPopup;
          pSVar11 = UI_UIManager__GetLocale
                              ("CharacterEditor","Costume","Presets",
                               "","",(MethodInfo *)0x0);
          pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    (pUVar9,(Il2CppObject *)__this_05,
                     (intptr_t)
                     MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__4,
                     (MethodInfo *)0x0);
          if (__this_02 != (UI_SelectListPopup_o *)0x0) {
            UI_SelectListPopup__ShowLoad
                      (__this_02,items,pSVar11,pUVar9,(UnityEngine_Events_UnityAction_o *)0x0,
                       (System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05cdcfd4;
    }
    bVar7 = System_String__op_Equality(pSVar11,"Delete",(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    if ((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
       (pSVar5 = (pSVar2->fields).TitanCustomSets,
       pSVar5 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05cdcfd4;
    bVar7 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)pSVar5,
                       (MethodInfo_4047B80 *)
                       MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CanDeleteSelectedSet);
    if (!bVar7) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05cdcfd4;
    __this_07 = (pUVar3->fields).ConfirmPopup;
    pSVar11 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
    pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (pUVar9,(Il2CppObject *)__this_05,
               (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__1
               ,(MethodInfo *)0x0);
    pSVar14 = "Delete";
  }
  else {
    if (uVar8 < 0x990de47e) {
      if (uVar8 == 0x990de47d) {
        ppSVar17 = &"Create";
        bVar7 = System_String__op_Equality(pSVar11,"Create",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar11 = UI_UIManager__GetLocale
                            ("CharacterEditor","Costume","NewSet",
                             "","",(MethodInfo *)0x0);
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        ppMVar10 = &MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__0;
      }
      else {
        if (uVar8 != 0x658f3664) {
          return;
        }
        ppSVar17 = &"Copy";
        bVar7 = System_String__op_Equality(pSVar11,"Copy",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar11 = UI_UIManager__GetLocale
                            ("CharacterEditor","Costume","NewSet",
                             "","",(MethodInfo *)0x0);
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        ppMVar10 = &MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__3;
      }
      UnityEngine_Events_UnityAction___ctor
                (pUVar9,(Il2CppObject *)__this_05,(intptr_t)*ppMVar10,(MethodInfo *)0x0);
label_05cdcc46:
      pSVar14 = UI_UIManager__GetLocaleCommon(*ppSVar17,(MethodInfo *)0x0);
      if (__this_00 != (UI_SetNamePopup_o *)0x0) {
        UI_SetNamePopup__Show(__this_00,pSVar11,pUVar9,pSVar14,(System_String_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      goto label_05cdcfd4;
    }
    if (uVar8 != 0xc7b3d356) {
      if (uVar8 == 0xc80631f3) {
        ppSVar17 = &"Rename";
        bVar7 = System_String__op_Equality(pSVar11,"Rename",(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        if ((((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
             (pSVar5 = (pSVar2->fields).TitanCustomSets,
             pSVar5 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
            (pSVar15 = Settings_SetSettingsContainer_object___GetSelectedSet
                                 ((Settings_SetSettingsContainer_T__o *)pSVar5,
                                  (MethodInfo_40477A0 *)
                                  MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
            pSVar15 == (Settings_BaseSetSetting_o *)0x0)) ||
           (pSVar6 = (pSVar15->fields).Name, pSVar6 == (Settings_StringSetting_o *)0x0)) goto label_05cdcfd4;
        pSVar11 = (pSVar6->fields)._value;
        pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar9,(Il2CppObject *)__this_05,
                   (intptr_t)
                   MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__2,
                   (MethodInfo *)0x0);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        goto label_05cdcc46;
      }
      if (uVar8 != 0xe86349d3) {
        return;
      }
      bVar7 = System_String__op_Equality(pSVar11,"Export",(MethodInfo *)0x0);
      if (!bVar7) {
        return;
      }
      if (((pSVar2 == (Settings_TitanCustomSettings_o *)0x0) ||
          (pSVar5 = (pSVar2->fields).TitanCustomSets,
          pSVar5 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
         (set = (Settings_TitanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)pSVar5,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
         set == (Settings_TitanCustomSet_o *)0x0)) goto label_05cdcfd4;
      pSVar4 = (Settings_BaseSetSetting_c *)set->klass;
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_TitanCustomSet))
      goto label_05cdcfdc;
      pSVar12 = (*(pSVar4->vtable)._5_SerializeToJsonObject.methodPtr)
                          (set,(pSVar4->vtable)._5_SerializeToJsonObject.method);
      if (pSVar12 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05cdcfd4;
      bVar7 = (*(pSVar12->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar12,"Preset",(pSVar12->klass->vtable)._28_HasKey.method);
      if (bVar7) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_5764070(false,(MethodInfo *)0x0);
        (*(pSVar12->klass->vtable)._8_set_Item.methodPtr)
                  (pSVar12,"Preset",pSVar13,(pSVar12->klass->vtable)._8_set_Item.method);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05cdcee2;
label_05cdc9ee:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      else {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05cdc9ee;
label_05cdcee2:
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      }
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        __this_04 = (pUVar3->fields).ExportPopup;
        pSVar11 = (*(pSVar12->klass->vtable)._30_ToString.methodPtr)
                            (pSVar12,4,(pSVar12->klass->vtable)._30_ToString.method);
        if (__this_04 != (UI_ExportPopup_o *)0x0) {
          UI_ExportPopup__Show(__this_04,pSVar11,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_05cdcfd4;
    }
    bVar7 = System_String__op_Equality(pSVar11,"Quit",(MethodInfo *)0x0);
    if (!bVar7) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 == (UI_BaseMenu_o *)0x0) goto label_05cdcfd4;
    __this_07 = (pUVar3->fields).ConfirmPopup;
    pSVar11 = UI_UIManager__GetLocaleCommon("QuitWithoutSaveConfirm",(MethodInfo *)0x0);
    if ((TypeInfo_UI_CharacterEditorTitanCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
      pUVar16 = TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields;
      pUVar9 = pUVar16->__9__26_6;
      if (pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) goto label_05cdcdd1;
label_05cdcf53:
      if ((TypeInfo_UI_CharacterEditorTitanCostumePanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterEditorTitanCostumePanel_c);
        pUVar16 = TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields;
      }
      object = (Il2CppObject *)pUVar16->__9;
      pUVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (pUVar9,object,
                 (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_c_OnButtonClick_b__26_6,
                 (MethodInfo *)0x0);
      pUVar16 = TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields;
      pUVar16->__9__26_6 = pUVar9;
      Il2CppCodeGenWriteBarrier(&pUVar16->__9__26_6);
      uVar8 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      pUVar16 = TypeInfo_UI_CharacterEditorTitanCostumePanel_c->static_fields;
      pUVar9 = pUVar16->__9__26_6;
      if (pUVar9 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_05cdcf53;
label_05cdcdd1:
      uVar8 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar8 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar14 = "Quit";
  }
  pSVar14 = UI_UIManager__GetLocaleCommon(pSVar14,(MethodInfo *)0x0);
  if (__this_07 != (UI_ConfirmPopup_o *)0x0) {
    UI_ConfirmPopup__Show(__this_07,pSVar11,pUVar9,pSVar14,(MethodInfo *)0x0);
    return;
  }
label_05cdcfd4:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$OnCostumeSetOperationFinish
// il2cpp: void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish (UI_CharacterEditorTitanCostumePanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cdd050
// eh: try 0x5cdd4e4..0x5cdd5e9 -> pad 0x5cdd5ff (+17 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5cdd627..0x5cdd6ef -> pad 0x5cdd6ef (+1 call sites) cleanup
// eh: try 0x5cdd6f2..0x5cdd6f7 -> pad 0x5cdd6ff catch (...) [compiler noexcept guard]
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cdd095: jmp 0x5cdd6c9
// asm:   0x5cdd26c: nop dword ptr [rax]
// asm:   0x5cdd42f: jmp 0x5cdd283
// asm:   0x5cdd5e9: jmp 0x5cdd5ff
// asm:   0x5cdd5eb: jmp 0x5cdd5ff
// asm:   0x5cdd5ed: jmp 0x5cdd5ff
// asm:   0x5cdd5ef: jmp 0x5cdd5ff
// asm:   0x5cdd5f1: jmp 0x5cdd5ff
// asm:   0x5cdd5f3: jmp 0x5cdd5ff
// asm:   0x5cdd5f5: jmp 0x5cdd5ff
// asm:   0x5cdd5f7: jmp 0x5cdd5ff
// asm:   0x5cdd5f9: jmp 0x5cdd5ff
// asm:   0x5cdd5fb: jmp 0x5cdd5ff
// asm:   0x5cdd5fd: jmp 0x5cdd5ff
// asm:   0x5cdd5ff: mov rbx, rax
// asm:   0x5cdd602: cmp edx, 1
// asm:   0x5cdd605: jne 0x5cdd6f7
// asm:   0x5cdd60b: mov rdi, rbx
// asm:   0x5cdd60e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cdd613: mov rbx, rax
// asm:   0x5cdd616: lea rax, [rip + 0x18790ab]
// asm:   0x5cdd61d: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5cdd621: mov rax, qword ptr [rbx]
// asm:   0x5cdd624: mov rsi, qword ptr [rax]
// asm:   0x5cdd627: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5cdd62c: test al, al
// asm:   0x5cdd62e: je 0x5cdd6ce
// asm:   0x5cdd634: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cdd639: lea rdi, [rip + 0x15a0928]  ; TypeInfo_UI_UIManager
// asm:   0x5cdd640: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd645: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5cdd64c: jne 0x5cdd656
// asm:   0x5cdd64e: mov rdi, rax
// asm:   0x5cdd651: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5cdd656: lea rdi, [rip + 0x15fa693]  ; "Common"
// asm:   0x5cdd65d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd662: mov qword ptr [rsp], rax
// asm:   0x5cdd666: lea rdi, [rip + 0x16025db]  ; "InvalidPreset"
// asm:   0x5cdd66d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd672: mov r13, rax
// asm:   0x5cdd675: lea rbx, [rip + 0x15f03ac]  ; ""
// asm:   0x5cdd67c: mov rdi, rbx
// asm:   0x5cdd67f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd684: mov rbp, rax
// asm:   0x5cdd687: mov rdi, rbx
// asm:   0x5cdd68a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd68f: mov r12, rax
// asm:   0x5cdd692: mov rdi, rbx
// asm:   0x5cdd695: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5cdd69a: mov rdi, qword ptr [rsp]
// asm:   0x5cdd69e: mov rsi, r13
// asm:   0x5cdd6a1: mov rdx, rbp
// asm:   0x5cdd6a4: mov rcx, r12
// asm:   0x5cdd6a7: mov r8, rax
// asm:   0x5cdd6aa: xor r9d, r9d
// asm:   0x5cdd6ad: call 0x5d94190  ; UI_UIManager__GetLocale()
// asm:   0x5cdd6b2: test r14, r14
// asm:   0x5cdd6b5: je 0x5cdd6c9
// asm:   0x5cdd6b7: mov rdi, r14
// asm:   0x5cdd6ba: mov rsi, rax
// asm:   0x5cdd6bd: xor edx, edx
// asm:   0x5cdd6bf: call 0x5cc0bb0  ; UI_ImportPopup__ShowError()
// asm:   0x5cdd6c4: jmp 0x5cdd477
// asm:   0x5cdd6ce: mov edi, 8
// asm:   0x5cdd6d3: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5cdd6d8: mov rcx, qword ptr [rbx]
// asm:   0x5cdd6db: mov qword ptr [rax], rcx
// asm:   0x5cdd6de: lea rsi, [rip + 0x114fe1b]
// asm:   0x5cdd6e5: mov rdi, rax
// asm:   0x5cdd6e8: xor edx, edx
// asm:   0x5cdd6ea: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5cdd6ef: mov rbx, rax
// asm:   0x5cdd6f2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cdd6f7: mov rdi, rbx
// asm:   0x5cdd6fa: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cdd6ff: mov rdi, rax
// asm:   0x5cdd702: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterEditorTitanCostumePanel__OnCostumeSetOperationFinish
               (UI_CharacterEditorTitanCostumePanel_o *__this,System_String_o *name,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  UI_SetNamePopup_o *pUVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *__this_01;
  UI_ImportPopup_o *pUVar5;
  System_String_o *value;
  Settings_BoolSetting_o *__this_02;
  bool bVar6;
  int32_t iVar7;
  VirtualInvokeData *pVVar8;
  Settings_BaseSetSetting_o *pSVar9;
  Settings_ListSetting_T__c *pSVar10;
  ulong uVar11;
  Il2CppRuntimeInterfaceOffsetPair *pIVar12;
  Settings_ListSetting_T__o *obj;
  MethodInfo *method_00;
  long lVar13;
  Settings_IntSetting_o *pSVar14;
  
  if (Il2CppMethodInitialized_07547bd7 == '\0') {
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
    Il2CppMethodInitialized_07547bd7 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05cdd19c;
label_05cdd081:
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05cdd081;
label_05cdd19c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if ((pUVar1 == (UI_BaseMenu_o *)0x0) ||
     (pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings,
     pSVar2 == (Settings_TitanCustomSettings_o *)0x0)) goto label_05cdd6c9;
  pUVar3 = (pUVar1->fields).SetNamePopup;
  __this_00 = (pSVar2->fields).TitanCustomSets;
  bVar6 = System_String__op_Equality(name,"Create",(MethodInfo *)0x0);
  if (bVar6) {
    if (((pUVar3 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar4 = (pUVar3->fields).NameSetting, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05cdd6c9;
    Settings_SetSettingsContainer_object___CreateSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar4->fields)._value,
               (MethodInfo_40478C0 *)MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CreateSet);
    obj = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) goto label_05cdd6c9;
    pSVar14 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pSVar10 = obj->klass;
    uVar11 = (ulong)(pSVar10->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar12 = (pSVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar12->interfaceType + lVar13) ==
            TypeInfo_Settings_IListSetting) goto label_05cdd434;
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
  }
  else {
    bVar6 = System_String__op_Equality(name,"Delete",(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
        Settings_SetSettingsContainer_object___DeleteSelectedSet
                  ((Settings_SetSettingsContainer_T__o *)__this_00,
                   (MethodInfo_4047C80 *)
                   MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_DeleteSelectedSet);
        pSVar14 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
        if (pSVar14 != (Settings_IntSetting_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar14,0,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)0x0);
          goto label_05cdd477;
        }
      }
      goto label_05cdd6c9;
    }
    bVar6 = System_String__op_Equality(name,"Rename",(MethodInfo *)0x0);
    if (bVar6) {
      if ((((__this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) &&
           (pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                               ((Settings_SetSettingsContainer_T__o *)__this_00,
                                (MethodInfo_40477A0 *)
                                MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
           pSVar9 != (Settings_BaseSetSetting_o *)0x0)) && (pUVar3 != (UI_SetNamePopup_o *)0x0)) &&
         ((pSVar4 = (pUVar3->fields).NameSetting, pSVar4 != (Settings_StringSetting_o *)0x0 &&
          (__this_01 = (pSVar9->fields).Name, __this_01 != (Settings_StringSetting_o *)0x0)))) {
        method_00 = (MethodInfo *)(pSVar4->fields)._value;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)method_00,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        goto label_05cdd477;
      }
      goto label_05cdd6c9;
    }
    bVar6 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
    if (!bVar6) {
      method_00 = (MethodInfo *)"Import";
      bVar6 = System_String__op_Equality(name,"Import",(MethodInfo *)0x0);
      if (bVar6) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_05cdd6c9;
        pUVar5 = (pUVar1->fields).ImportPopup;
        if (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_40477A0 *)
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
                            (MethodInfo_40477A0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pUVar5 == (UI_ImportPopup_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (pUVar5->fields).ImportSetting;
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
                            (MethodInfo_40477A0 *)
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
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar9 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_40477A0 *)
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
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        method_00 = (pUVar5->klass->vtable)._22_Hide.method;
        (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,method_00);
      }
      goto label_05cdd477;
    }
    if (((pUVar3 == (UI_SetNamePopup_o *)0x0) ||
        (pSVar4 = (pUVar3->fields).NameSetting, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
       (__this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05cdd6c9;
    Settings_SetSettingsContainer_object___CopySelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,(pSVar4->fields)._value,
               (MethodInfo_40479F0 *)MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_CopySelectedSet);
    obj = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->Sets;
    if (obj == (Settings_ListSetting_T__o *)0x0) goto label_05cdd6c9;
    pSVar14 = ((Settings_SetSettingsContainer_T__Fields *)&__this_00->fields)->SelectedSetIndex;
    pSVar10 = obj->klass;
    uVar11 = (ulong)(pSVar10->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar12 = (pSVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar12->interfaceType + lVar13) ==
            TypeInfo_Settings_IListSetting) goto label_05cdd434;
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
  }
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,0);
  goto label_05cdd447;
label_05cdd434:
  pVVar8 = &(pSVar10->vtable)._0_Equals + *(int *)((long)&pIVar12->offset + lVar13);
label_05cdd447:
  iVar7 = (*pVVar8->methodPtr)((Il2CppObject *)obj,pVVar8->method);
  if (pSVar14 != (Settings_IntSetting_o *)0x0) {
    method_00 = (MethodInfo *)(ulong)(iVar7 - 1U);
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar14,iVar7 - 1U,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    (__this->fields)._shouldGeneratePreviewAfterRebuild = true;
label_05cdd477:
    UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method_00);
    return;
  }
label_05cdd6c9:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanCostumePanel$$SaveQuitCaptureCoroutineInternal
// il2cpp: System_Collections_IEnumerator_o* UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd000

System_Collections_IEnumerator_o *
UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal
          (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__SaveQuitCaptureCoroutineInternal_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28);
    Il2CppMethodInitialized_07547bd8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.CharacterEditorTitanCostumePanel$$.ctor
// il2cpp: void UI_CharacterEditorTitanCostumePanel___ctor (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd730

void UI_CharacterEditorTitanCostumePanel___ctor
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_0
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd740

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_0
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_07547bd9 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_1
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd780

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_1
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SaveQuit");
    Il2CppMethodInitialized_07547bda = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorTitanCostumePanel__OnButtonClick(__this,"SaveQuit",in_RDX);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_2
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd7c0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_2
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel__OnCustomSetSelected(__this,method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_3
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd7d0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_3
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_4
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd800

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_4
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_5
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd830

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_5
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_6
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd860

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_6
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_7
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd890

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_7
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_8
// il2cpp: void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8 (UI_CharacterEditorTitanCostumePanel_o* __this, const MethodInfo* method);
// 0x5cdd8c0

void UI_CharacterEditorTitanCostumePanel___Setup_b__17_8
               (UI_CharacterEditorTitanCostumePanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu_o *pUVar1;
  
  pUVar1 = (__this->fields)._menu;
  if (pUVar1 == (UI_CharacterEditorMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._10_ResetCharacter.methodPtr)
            (pUVar1,false,(pUVar1->klass->vtable)._10_ResetCharacter.method);
  return;
}


