// Type: UI.CharacterTitanPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterTitanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs
// --------------------------------

// UI.CharacterTitanPanel$$Setup
// il2cpp: void UI_CharacterTitanPanel__Setup (UI_CharacterTitanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822280f0

void UI_CharacterTitanPanel__Setup(UI_CharacterTitanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_SettingsManager_StaticFields *pSVar4;
  Settings_InGameCharacterSettings_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_InGameCharacterSettings_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  UI_CharacterPopup_o *__this_00;
  Settings_IntSetting_o *pSVar9;
  Settings_IntSetting_o *__this_01;
  Settings_StringSetting_o *__this_02;
  Settings_TitanCustomSettings_o *pSVar10;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_03;
  UnityEngine_Transform_o *pUVar11;
  MethodInfo *pMVar12;
  bool bVar13;
  System_Collections_Generic_List_string__o *__this_04;
  System_String_o *pSVar14;
  System_String_array *pSVar15;
  System_Collections_Generic_List_string__o *__this_05;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar16;
  System_String_o *pSVar17;
  
  if (Il2CppMethodInitialized_1843471c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_1843471c0 = '\x01';
  }
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar17 = "General";
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields;
  if (((pSVar4->InGameCurrent != (Settings_InGameSet_o *)0x0) &&
      (pSVar4->InGameSettings != (Settings_InGameSettings_o *)0x0)) &&
     (pSVar5 = pSVar4->InGameCharacterSettings, pSVar5 != (Settings_InGameCharacterSettings_o *)0x0)) {
    pSVar6 = (pSVar4->InGameCurrent->fields).Misc;
    pSVar7 = (pSVar4->InGameSettings->fields).LastCharacter;
    pSVar8 = (pSVar5->fields).CharacterType;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (pSVar8 == (Settings_StringSetting_o *)0x0) goto label_182228909;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar8,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar14 = "Small";
    if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) goto label_182228909;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (__this_04->fields)._items;
    if (pSVar15 == (System_String_array *)0x0) goto label_182228909;
    uVar3 = (__this_04->fields)._size;
    if (uVar3 < (uint)pSVar15->max_length) {
      (__this_04->fields)._size = uVar3 + 1;
      if ((uint)pSVar15->max_length <= uVar3) goto label_182228918;
      pSVar15->m_Items[(int)uVar3] = pSVar14;
      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar3,pSVar14);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar14,
                 (MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar14 = "Medium";
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (__this_04->fields)._items;
    if (pSVar15 == (System_String_array *)0x0) goto label_182228909;
    uVar3 = (__this_04->fields)._size;
    if (uVar3 < (uint)pSVar15->max_length) {
      (__this_04->fields)._size = uVar3 + 1;
      if ((uint)pSVar15->max_length <= uVar3) goto label_182228918;
      pSVar15->m_Items[(int)uVar3] = pSVar14;
      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar3,pSVar14);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar14,
                 (MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    pSVar14 = "Large";
    pMVar12 = MethodInfo_System_Collections_Generic_List_string_Add;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (__this_04->fields)._items;
    if (pSVar15 == (System_String_array *)0x0) goto label_182228909;
    uVar3 = (__this_04->fields)._size;
    if (uVar3 < (uint)pSVar15->max_length) {
      (__this_04->fields)._size = uVar3 + 1;
      if ((uint)pSVar15->max_length <= uVar3) goto label_182228918;
      pSVar15->m_Items[(int)uVar3] = pSVar14;
      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar3,pSVar14);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar14,
                 (MethodInfo_93DD50 *)pMVar12->klass->rgctx_data[0xe].method);
    }
    if (Il2CppMethodInitialized_18434717c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
      Il2CppMethodInitialized_18434717c = '\x01';
    }
    __this_00 = (UI_CharacterPopup_o *)(__this->fields).Parent;
    if (__this_00 != (UI_CharacterPopup_o *)0x0) {
      bVar2 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_CharacterPopup);
      }
      bVar13 = UI_CharacterPopup__RestoreChoices
                         (__this_00,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                          (MethodInfo *)0x0);
      if (!bVar13) {
        if ((pSVar7 == (Settings_InGameCharacterSettings_o *)0x0) ||
           (pSVar8 = (pSVar7->fields).CharacterType, pSVar8 == (Settings_StringSetting_o *)0x0))
        goto label_182228909;
        pSVar14 = (pSVar8->fields)._value;
        if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
        }
        bVar13 = System_String__op_Equality
                           (pSVar14,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                            (MethodInfo *)0x0);
        if (bVar13) {
          pSVar9 = (pSVar7->fields).CustomSet;
          if ((pSVar9 == (Settings_IntSetting_o *)0x0) ||
             (__this_01 = (pSVar5->fields).CustomSet, __this_01 == (Settings_IntSetting_o *)0x0))
          goto label_182228909;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_01,(pSVar9->fields)._value,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar8 = (pSVar7->fields).Loadout;
          if ((pSVar8 == (Settings_StringSetting_o *)0x0) ||
             (__this_02 = (pSVar5->fields).Loadout, __this_02 == (Settings_StringSetting_o *)0x0))
          goto label_182228909;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)(pSVar8->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
      }
      pSVar8 = (pSVar5->fields).Loadout;
      if (pSVar8 != (Settings_StringSetting_o *)0x0) {
        bVar13 = System_Collections_Generic_List_object___Contains
                           ((System_Collections_Generic_List_object__o *)__this_04,
                            (Il2CppObject *)(pSVar8->fields)._value,
                            (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        if (!bVar13) {
          pSVar8 = (pSVar5->fields).Loadout;
          pSVar14 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this_04,
                               (__this_04->fields)._size + -1,
                               (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item
                              );
          if (pSVar8 == (Settings_StringSetting_o *)0x0) goto label_182228909;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)pSVar14,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        if (Il2CppMethodInitialized_1843471c1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_string_Insert);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_string_ToArray);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
          il2cpp_codegen_initialize_runtime_metadata(&"Random");
          Il2CppMethodInitialized_1843471c1 = '\x01';
        }
        pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
        if ((pSVar10 != (Settings_TitanCustomSettings_o *)0x0) &&
           (__this_03 = (pSVar10->fields).TitanCustomSets,
           __this_03 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
          pSVar15 = Settings_SetSettingsContainer_object___GetSetNames
                              ((Settings_SetSettingsContainer_T__o *)__this_03,
                               (MethodInfo_C8EC20 *)
                               MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
          __this_05 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor_94fb10
                    ((System_Collections_Generic_List_object__o *)__this_05,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar15,
                     (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
          if (__this_05 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___Insert
                      ((System_Collections_Generic_List_object__o *)__this_05,0,
                       (Il2CppObject *)"Random",
                       (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
            pUVar16 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_T__o *)__this_05,
                                 (MethodInfo_929FE0 *)
                                 MethodInfo_System_Collections_Generic_List_string_ToArray);
            pSVar9 = (pSVar5->fields).CustomSet;
            if ((pSVar9 != (Settings_IntSetting_o *)0x0) &&
               (pUVar16 !=
                (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                 *)0x0)) {
              if ((int)pUVar16->max_length <= (pSVar9->fields)._value) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar9,0,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              }
              pUVar11 = (__this->fields).DoublePanelLeft;
              pSVar9 = (pSVar5->fields).CustomSet;
              pSVar14 = (__this->fields).LocaleCategory;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar14 = UI_UIManager__GetLocale
                                  (pSVar14,pSVar17,"Character","",
                                   "",(MethodInfo *)0x0);
              pSVar15 = UI_CharacterTitanPanel__GetCharIcons
                                  (__this,(System_String_array *)pUVar16,(MethodInfo *)0x0);
              UI_CharacterCategoryPanel__IconPicker
                        ((UI_CharacterCategoryPanel_o *)__this,pUVar11,(Settings_BaseSetting_o *)pSVar9,
                         pSVar14,(System_String_array *)pUVar16,pSVar15,(System_Action_o *)0x0,
                         (System_String_array *)0x0,144.0,(MethodInfo *)0x0);
              pUVar11 = (__this->fields).DoublePanelLeft;
              pSVar8 = (pSVar5->fields).Loadout;
              pSVar17 = UI_UIManager__GetLocale
                                  ((__this->fields).LocaleCategory,pSVar17,"Size",
                                   "","",(MethodInfo *)0x0);
              pUVar16 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_T__o *)__this_04,
                                   (MethodInfo_929FE0 *)
                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
              UI_CharacterCategoryPanel__Choice
                        ((UI_CharacterCategoryPanel_o *)__this,pUVar11,(Settings_BaseSetting_o *)pSVar8,
                         pSVar17,(System_String_array *)pUVar16,(System_Action_o *)0x0,(MethodInfo *)0x0);
              if ((pSVar6 != (Settings_InGameMiscSettings_o *)0x0) &&
                 (pSVar9 = (pSVar6->fields).PVP, pSVar9 != (Settings_IntSetting_o *)0x0)) {
                if ((pSVar9->fields)._value != 2) {
                  return;
                }
                pUVar11 = (__this->fields).DoublePanelRight;
                pSVar8 = (pSVar5->fields).Team;
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar17 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
                pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                }
                if (pSVar15 != (System_String_array *)0x0) {
                  if ((int)pSVar15->max_length != 0) {
                    pSVar14 = TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
                    pSVar15->m_Items[0] = pSVar14;
                    Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar14);
                    if (1 < (uint)pSVar15->max_length) {
                      pSVar14 = TypeInfo_GameManagers_TeamInfo->static_fields->Red;
                      pSVar15->m_Items[1] = pSVar14;
                      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + 1,pSVar14);
                      UI_CharacterCategoryPanel__Choice
                                ((UI_CharacterCategoryPanel_o *)__this,pUVar11,
                                 (Settings_BaseSetting_o *)pSVar8,pSVar17,pSVar15,(System_Action_o *)0x0,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
label_182228918:
                  ThrowIndexOutOfRangeException();
                }
              }
            }
          }
        }
      }
    }
  }
label_182228909:
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharOptions (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x182227fe0

System_String_array *
UI_CharacterTitanPanel__GetCharOptions(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  Settings_TitanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_01;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar2;
  
  if (Il2CppMethodInitialized_1843471c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_1843471c1 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((pSVar1 != (Settings_TitanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).TitanCustomSets,
     __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
    collection = Settings_SetSettingsContainer_object___GetSetNames
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EC20 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)__this_01,0,
                 (Il2CppObject *)"Random",
                 (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
      pUVar2 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_01,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharIcons (UI_CharacterTitanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x182227a00
// eh: try 0x182227c90..0x182227fcf -> pad 0x18333a320 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182227bf6: nop word ptr [rax + rax]
// asm:   0x182227d42: mov rdx, qword ptr [rip + 0x1e4e78f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x182227d49: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182227d4e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182227d53: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182227d58: test rcx, rcx
// asm:   0x182227d5b: jne 0x182227fcf
// asm:   0x182227d61: mov rsi, qword ptr [rsp + 0x50]
// asm:   0x182227d66: mov r13, qword ptr [rsp + 0x58]
// asm:   0x182227d6b: mov r12, qword ptr [rsp + 0x60]
// asm:   0x182227d70: mov r14d, dword ptr [rsp + 0xd8]
// asm:   0x182227d78: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x182227d7d: test rdi, rdi
// asm:   0x182227d80: jne 0x182227db5
// asm:   0x182227f0f: test rsi, rsi
// asm:   0x182227f12: je 0x182227faa
// asm:   0x182227f18: mov rdx, r15
// asm:   0x182227f1b: jmp 0x182227f5a
// asm:   0x182227f57: mov rdx, rax
// asm:   0x182227fcf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333a320: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333a325: push rbp
// asm:   0x18333a326: sub rsp, 0x20
// asm:   0x18333a32a: mov rbp, rdx
// asm:   0x18333a32d: mov rax, qword ptr [rbp + 0x68]
// asm:   0x18333a331: mov rcx, qword ptr [rax]
// asm:   0x18333a334: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18333a338: movabs rax, 0
// asm:   0x18333a342: add rsp, 0x20
// asm:   0x18333a346: pop rbp
// asm:   0x18333a347: ret 

System_String_array *
UI_CharacterTitanPanel__GetCharIcons
          (UI_CharacterTitanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Settings_TitanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  System_String_o *path1;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_T__o *__this_01;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  uint uVar10;
  System_Collections_Generic_List_Enumerator_object__o local_80;
  System_Collections_Generic_List_string__o *local_68;
  System_Collections_Generic_List_T__o *local_60;
  System_String_array *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_1843471c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"/Human/Previews/PresetNone");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Navigation/TooltipIcon");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPreview_Titans_");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_1843471c2 = '\x01';
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).TitanCustomSets,
      pSVar4 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (obj = (pSVar4->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)) {
    local_68 = __this_00;
    __this_01 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
    uVar10 = 0;
    local_60 = __this_01;
    local_58 = options;
    if (options != (System_String_array *)0x0) {
      for (; uVar1 = (uint)options->max_length, (int)uVar10 < (int)uVar1; uVar10 = uVar10 + 1) {
        if (uVar1 <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pSVar7 = options->m_Items[(int)uVar10];
        bVar6 = System_String__op_Equality(pSVar7,"Random",(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
          pSVar8 = "/Icons/Navigation/TooltipIcon";
label_182227f4a:
          pSVar8 = System_String__Concat_1969e50(pSVar7,pSVar8,(MethodInfo *)0x0);
        }
        else {
          if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) goto label_182227faa;
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    (&local_48,__this_01,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator
                    );
          local_80.fields._list = local_48.fields._list;
          local_80.fields._index = local_48.fields._index;
          local_80.fields._version = local_48.fields._version;
          local_80.fields._current = local_48.fields._current;
          do {
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (&local_80,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
            pIVar5 = local_80.fields._current;
            if (!bVar6) {
              System_Collections_Generic_List_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
              goto label_182227d82;
            }
            if (local_80.fields._current == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
            if ((((local_80.fields._current)->klass->_2).typeHierarchyDepth < bVar2) ||
               (((local_80.fields._current)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(local_80.fields._current);
            }
            if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            bVar6 = System_String__op_Equality
                              (((local_80.fields._current[3].klass)->_1).byval_arg.data,pSVar7,
                               (MethodInfo *)0x0);
          } while (!bVar6);
          if (pIVar5[4].klass == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = ((pIVar5[4].klass)->_1).byval_arg.data;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          if (pSVar7 == (System_String_o *)0x0) {
label_182227d82:
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
label_182227d9e:
            pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
            pSVar8 = "/Human/Previews/PresetNone";
            goto label_182227f4a;
          }
          pSVar8 = System_String__Concat_1969e50("CharacterPreview_Titans_",pSVar7,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          x = ApplicationManagers_ResourceManager__GetExternalTexture(pSVar8,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
            }
            path1 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
            pSVar7 = System_String__Concat_1969b70
                               ("Preset",pSVar7,".png",(MethodInfo *)0x0);
            if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
            }
            pSVar7 = System_IO_Path__Combine_1af2760(path1,"Titans",pSVar7,(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            x = ApplicationManagers_ResourceManager__LoadExternalTexture(pSVar7,pSVar8,true,(MethodInfo *)0x0)
            ;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar6) {
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              pSVar8 = "/Human/Previews/PresetNone";
              goto label_182227f4a;
            }
            goto label_182227d9e;
          }
        }
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_182227faa;
        il2cpp_runtime_helper_180012890(__this_00,pSVar8);
      }
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar9 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar9;
      }
    }
  }
label_182227faa:
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$.ctor
// il2cpp: void UI_CharacterTitanPanel___ctor (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x182228920

void UI_CharacterTitanPanel___ctor(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843471c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_1843471c3 = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"CharacterPopup");
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


