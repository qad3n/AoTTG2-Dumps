// Type: UI.CharacterTitanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterTitanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterTitanPanel.cs
// --------------------------------

// UI.CharacterTitanPanel.<>c__DisplayClass1_0$$.ctor
// il2cpp: void UI_CharacterTitanPanel___c__DisplayClass1_0___ctor (UI_CharacterTitanPanel___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x5d07ce0

void UI_CharacterTitanPanel___c__DisplayClass1_0___ctor
               (UI_CharacterTitanPanel___c__DisplayClass1_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterTitanPanel.<>c__DisplayClass1_0$$<Setup>b__0
// il2cpp: System_String_o* UI_CharacterTitanPanel___c__DisplayClass1_0___Setup_b__0 (UI_CharacterTitanPanel___c__DisplayClass1_0_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5d08560

System_String_o *
UI_CharacterTitanPanel___c__DisplayClass1_0___Setup_b__0
          (UI_CharacterTitanPanel___c__DisplayClass1_0_o *__this,System_String_o *option,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d33 = '\x01';
  }
  bVar1 = System_String__op_Equality(option,"Random",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields).sub;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar2 = UI_UIManager__GetLocale
                       ("CharacterPopup",pSVar2,"Random","",
                        "",(MethodInfo *)0x0);
    return pSVar2;
  }
  return option;
}


// UI.CharacterTitanPanel$$Setup
// il2cpp: void UI_CharacterTitanPanel__Setup (UI_CharacterTitanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d075f0

void UI_CharacterTitanPanel__Setup(UI_CharacterTitanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_SettingsManager_StaticFields *pSVar3;
  Settings_InGameCharacterSettings_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_InGameCharacterSettings_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_IntSetting_o *__this_00;
  Settings_StringSetting_o *__this_01;
  UnityEngine_Transform_o *pUVar8;
  bool bVar9;
  UI_CharacterTitanPanel___c__DisplayClass1_0_o *__this_02;
  UI_CharacterTitanPanel_o *__this_03;
  UI_CharacterPopup_o *__this_04;
  MethodInfo *pMVar10;
  System_String_array *pSVar11;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  System_Func_string__string__o *__this_05;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *labels;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UI_CharacterTitanPanel_o *pUVar14;
  Settings_IntSetting_o *pSVar15;
  
  if (Il2CppMethodInitialized_07547d30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterTitanPanel_c__DisplayClass1_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterTitanPanel_c__DisplayClass1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Large");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Small");
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    Il2CppMethodInitialized_07547d30 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterTitanPanel_c__DisplayClass1_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (__this_02 != (UI_CharacterTitanPanel___c__DisplayClass1_0_o *)0x0) {
    (__this_02->fields).sub = "General";
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).sub);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields;
    if (((pSVar3->InGameCurrent != (Settings_InGameSet_o *)0x0) &&
        (pSVar3->InGameSettings != (Settings_InGameSettings_o *)0x0)) &&
       (pSVar4 = pSVar3->InGameCharacterSettings, pSVar4 != (Settings_InGameCharacterSettings_o *)0x0)) {
      pSVar5 = (pSVar3->InGameCurrent->fields).Misc;
      pSVar6 = (pSVar3->InGameSettings->fields).LastCharacter;
      pSVar7 = (pSVar4->fields).CharacterType;
      if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      }
      if (pSVar7 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar7,
                   (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_03 = (UI_CharacterTitanPanel_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_03,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        pSVar12 = "Small";
        pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_03 != (UI_CharacterTitanPanel_o *)0x0) {
          piVar1 = (int32_t *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
          *piVar1 = *piVar1 + 1;
          pSVar11 = (System_String_array *)(__this_03->fields).m_CachedPtr;
          if (pSVar11 != (System_String_array *)0x0) {
            uVar2 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
            if (uVar2 < (uint)pSVar11->max_length) {
              *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar2 + 1;
              pSVar11->m_Items[(int)uVar2] = pSVar12;
              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar12,
                         (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
            }
            pSVar12 = "Medium";
            pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = (int32_t *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
            *piVar1 = *piVar1 + 1;
            pSVar11 = (System_String_array *)(__this_03->fields).m_CachedPtr;
            if (pSVar11 != (System_String_array *)0x0) {
              uVar2 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
              if (uVar2 < (uint)pSVar11->max_length) {
                *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar2 + 1;
                pSVar11->m_Items[(int)uVar2] = pSVar12;
                Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar12,
                           (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              pSVar12 = "Large";
              pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = (int32_t *)((long)&(__this_03->fields).m_CancellationTokenSource + 4);
              *piVar1 = *piVar1 + 1;
              pSVar11 = (System_String_array *)(__this_03->fields).m_CachedPtr;
              if (pSVar11 != (System_String_array *)0x0) {
                uVar2 = *(uint *)&(__this_03->fields).m_CancellationTokenSource;
                if (uVar2 < (uint)pSVar11->max_length) {
                  *(uint *)&(__this_03->fields).m_CancellationTokenSource = uVar2 + 1;
                  pSVar11->m_Items[(int)uVar2] = pSVar12;
                  Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar12,
                             (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
                }
                __this_04 = UI_CharacterCategoryPanel__get_Popup
                                      ((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
                if (__this_04 != (UI_CharacterPopup_o *)0x0) {
                  bVar9 = UI_CharacterPopup__RestoreChoices
                                    (__this_04,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                                     method_00);
                  if (!bVar9) {
                    if ((pSVar6 == (Settings_InGameCharacterSettings_o *)0x0) ||
                       (pSVar7 = (pSVar6->fields).CharacterType, pSVar7 == (Settings_StringSetting_o *)0x0))
                    goto label_05d07ccd;
                    pSVar12 = (pSVar7->fields)._value;
                    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
                    }
                    bVar9 = System_String__op_Equality
                                      (pSVar12,TypeInfo_GameManagers_PlayerCharacter->static_fields->Titan,
                                       (MethodInfo *)0x0);
                    if (bVar9) {
                      pSVar15 = (pSVar6->fields).CustomSet;
                      if (pSVar15 == (Settings_IntSetting_o *)0x0) goto label_05d07ccd;
                      __this_00 = (pSVar4->fields).CustomSet;
                      if (__this_00 == (Settings_IntSetting_o *)0x0) goto label_05d07ccd;
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)__this_00,(pSVar15->fields)._value,
                                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      pSVar7 = (pSVar6->fields).Loadout;
                      if ((pSVar7 == (Settings_StringSetting_o *)0x0) ||
                         (__this_01 = (pSVar4->fields).Loadout, __this_01 == (Settings_StringSetting_o *)0x0))
                      goto label_05d07ccd;
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)__this_01,
                                 (Il2CppObject *)(pSVar7->fields)._value,
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                  }
                  pSVar7 = (pSVar4->fields).Loadout;
                  if (pSVar7 != (Settings_StringSetting_o *)0x0) {
                    pMVar10 = (MethodInfo *)(pSVar7->fields)._value;
                    pUVar14 = __this_03;
                    bVar9 = System_Collections_Generic_List_object___Contains
                                      ((System_Collections_Generic_List_object__o *)__this_03,
                                       (Il2CppObject *)pMVar10,
                                       (MethodInfo_395D6D0 *)
                                       MethodInfo_System_Collections_Generic_List_string_Contains);
                    if (!bVar9) {
                      pUVar14 = (UI_CharacterTitanPanel_o *)(pSVar4->fields).Loadout;
                      pMVar10 = (MethodInfo *)
                                System_Collections_Generic_List_object___get_Item
                                          ((System_Collections_Generic_List_object__o *)__this_03,
                                           *(int *)&(__this_03->fields).m_CancellationTokenSource + -1,
                                           (MethodInfo_395CF20 *)
                                           MethodInfo_System_Collections_Generic_List_string_get_Item);
                      if (pUVar14 == (UI_CharacterTitanPanel_o *)0x0) goto label_05d07ccd;
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pUVar14,(Il2CppObject *)pMVar10,
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    pSVar11 = UI_CharacterTitanPanel__GetCharOptions(pUVar14,pMVar10);
                    pSVar15 = (pSVar4->fields).CustomSet;
                    if ((pSVar15 != (Settings_IntSetting_o *)0x0) && (pSVar11 != (System_String_array *)0x0))
                    {
                      if ((int)pSVar11->max_length <= (pSVar15->fields)._value) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar15,0,
                                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pSVar15 = (pSVar4->fields).CustomSet;
                      }
                      pUVar8 = (__this->fields).DoublePanelLeft;
                      pSVar12 = (__this_02->fields).sub;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pUVar14 = (UI_CharacterTitanPanel_o *)"CharacterPopup";
                      pSVar12 = UI_UIManager__GetLocale
                                          ("CharacterPopup",pSVar12,"Character",
                                           "","",(MethodInfo *)0x0);
                      pSVar13 = UI_CharacterTitanPanel__GetCharIcons(pUVar14,pSVar11,method_01);
                      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string)
                      ;
                      System_Func_object__object____ctor
                                ((System_Func_object__object__o *)__this_05,(Il2CppObject *)__this_02,
                                 (intptr_t)MethodInfo_UI_CharacterTitanPanel_c__DisplayClass1_0_Setup_b__0,
                                 (MethodInfo_4F19B50 *)0x0);
                      source = System_Linq_Enumerable__Select_object__object_
                                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar11,
                                          (System_Func_TSource__TResult__o *)__this_05,
                                          (MethodInfo_34F60F0 *)
                                          MethodInfo_System_Linq_Enumerable_Select_string_string);
                      labels = (System_String_array *)
                               System_Linq_Enumerable__ToArray_object_
                                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                          (MethodInfo_34FEA80 *)
                                          MethodInfo_System_Linq_Enumerable_ToArray_string);
                      UI_CharacterCategoryPanel__IconPicker
                                ((UI_CharacterCategoryPanel_o *)__this,pUVar8,
                                 (Settings_BaseSetting_o *)pSVar15,pSVar12,pSVar11,pSVar13,
                                 (System_Action_o *)0x0,(System_String_array *)0x0,144.0,labels,
                                 (MethodInfo *)0x0);
                      pUVar8 = (__this->fields).DoublePanelLeft;
                      pSVar7 = (pSVar4->fields).Loadout;
                      pSVar12 = UI_UIManager__GetLocale
                                          ("CharacterPopup",(__this_02->fields).sub,"Size"
                                           ,"","",(MethodInfo *)0x0);
                      pSVar11 = (System_String_array *)
                                System_Collections_Generic_List_object___ToArray
                                          ((System_Collections_Generic_List_object__o *)__this_03,
                                           (MethodInfo_395F5A0 *)
                                           MethodInfo_System_Collections_Generic_List_string_ToArray);
                      pSVar13 = UI_CharacterCategoryPanel__Labels
                                          ("Size",
                                           (System_Collections_Generic_IEnumerable_string__o *)__this_03,
                                           (MethodInfo *)0x0);
                      UI_CharacterCategoryPanel__Choice
                                ((UI_CharacterCategoryPanel_o *)__this,pUVar8,(Settings_BaseSetting_o *)pSVar7
                                 ,pSVar12,pSVar11,(System_Action_o *)0x0,pSVar13,(MethodInfo *)0x0);
                      if ((pSVar5 != (Settings_InGameMiscSettings_o *)0x0) &&
                         (pSVar15 = (pSVar5->fields).PVP, pSVar15 != (Settings_IntSetting_o *)0x0)) {
                        if ((pSVar15->fields)._value == 2) {
                          UI_CharacterCategoryPanel__TeamChoice
                                    ((UI_CharacterCategoryPanel_o *)__this,(__this->fields).DoublePanelRight,
                                     (Settings_BaseSetting_o *)(pSVar4->fields).Team,(MethodInfo *)0x0);
                          return;
                        }
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
label_05d07ccd:
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharOptions (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x5d07cf0

System_String_array *
UI_CharacterTitanPanel__GetCharOptions(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  Settings_TitanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  System_String_array *pSVar2;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (Il2CppMethodInitialized_07547d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_07547d31 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((pSVar1 != (Settings_TitanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).TitanCustomSets,
     __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
    pSVar2 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40482D0 *)
                        MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar2,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)__this_01,0,
                 (Il2CppObject *)"Random",
                 (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_string_Insert);
      pSVar2 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterTitanPanel__GetCharIcons (UI_CharacterTitanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5d07e00
// eh: try 0x5d0815a..0x5d0849d -> pad 0x5d084b2 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d084cc..0x5d084d1 -> pad 0x5d08524 cleanup
// eh: try 0x5d08527..0x5d08531 -> pad 0x5d08539 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d08149: nop dword ptr [rax]
// asm:   0x5d083cb: mov r15, qword ptr [rsp + 8]
// asm:   0x5d084a2: mov rbp, rax
// asm:   0x5d084a5: lea r15, [rsp + 0x10]
// asm:   0x5d084aa: jmp 0x5d084b7
// asm:   0x5d084ac: jmp 0x5d084b4
// asm:   0x5d084ae: jmp 0x5d084b4
// asm:   0x5d084b0: jmp 0x5d084b4
// asm:   0x5d084b2: jmp 0x5d084b4
// asm:   0x5d084b4: mov rbp, rax
// asm:   0x5d084b7: cmp edx, 1
// asm:   0x5d084ba: jne 0x5d08527
// asm:   0x5d084bc: mov rdi, rbp
// asm:   0x5d084bf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d084c4: mov rbx, qword ptr [rax]
// asm:   0x5d084c7: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5d084cc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d084d1: lea rax, [rip + 0x15852d0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5d084d8: mov rsi, qword ptr [rax]
// asm:   0x5d084db: mov rdi, r15
// asm:   0x5d084de: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d084e3: test rbx, rbx
// asm:   0x5d084e6: je 0x5d083b2
// asm:   0x5d084ec: mov rdi, rbx
// asm:   0x5d084ef: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d08524: mov rbp, rax
// asm:   0x5d08527: lea rdi, [rsp + 0x30]
// asm:   0x5d0852c: call 0x2fdbba0  ; il2cpp_runtime_helper_02fdbba0()
// asm:   0x5d08531: mov rdi, rbp
// asm:   0x5d08534: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d08539: mov rdi, rax
// asm:   0x5d0853c: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
UI_CharacterTitanPanel__GetCharIcons
          (UI_CharacterTitanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_TitanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar5;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Il2CppObject *pIVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *__this_00;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  System_String_o **ppSVar12;
  UnityEngine_Texture2D_o *x;
  System_String_o *path3;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  System_String_array *pSVar15;
  MethodInfo *pMVar16;
  long lVar17;
  ulong uVar18;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  Il2CppObject *local_68;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  System_String_o *local_40;
  System_Collections_Generic_List_object__o *local_38;
  
  if (Il2CppMethodInitialized_07547d32 == '\0') {
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
    Il2CppMethodInitialized_07547d32 = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar4 != (Settings_TitanCustomSettings_o *)0x0) &&
      (pSVar5 = (pSVar4->fields).TitanCustomSets,
      pSVar5 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (obj = (pSVar5->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)) {
    pIVar6 = (Il2CppClass *)obj->klass;
    uVar11 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar17) ==
            TypeInfo_Settings_IListSetting) {
          pVVar10 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar17) + 2);
          goto label_05d08029;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar11 * 0x10 != lVar17);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                        ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05d08029:
    local_38 = (System_Collections_Generic_List_object__o *)
               (*pVVar10->methodPtr)((Il2CppObject *)obj,pVVar10->method);
    if (options != (System_String_array *)0x0) {
      if (0 < (int)options->max_length) {
        uVar11 = options->max_length & 0xffffffff;
        uVar18 = 0;
        do {
          if (uVar11 <= uVar18) {
            ThrowIndexOutOfRangeException();
          }
          pSVar14 = options->m_Items[uVar18];
          bVar9 = System_String__op_Equality(pSVar14,"Random",(MethodInfo *)0x0);
          if (bVar9) {
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar14 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
            ppSVar12 = &"/Icons/Navigation/TooltipIcon";
label_05d083e2:
            pSVar14 = System_String__Concat_52f0320(pSVar14,*ppSVar12,(MethodInfo *)0x0);
            pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d0851a;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_00->fields)._items;
            if (pSVar15 == (System_String_array *)0x0) goto label_05d0851a;
            uVar3 = (__this_00->fields)._size;
            if ((uint)pSVar15->max_length <= uVar3) {
              pMVar16 = pMVar16->klass->rgctx_data[0xe].method;
              goto label_05d08085;
            }
            (__this_00->fields)._size = uVar3 + 1;
            ppSVar12 = pSVar15->m_Items + (long)(int)uVar3 + -4;
            pSVar15->m_Items[(int)uVar3] = pSVar14;
label_05d08438:
            Il2CppCodeGenWriteBarrier(ppSVar12 + 4);
          }
          else {
            if (local_38 == (System_Collections_Generic_List_object__o *)0x0) goto label_05d0851a;
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)local_58,local_38,
                       (MethodInfo_395E050 *)
                       MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
            local_68 = local_48;
            local_78 = (undefined1  [8])local_58._0_8_;
            pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
            local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
            local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
            do {
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
              pIVar8 = local_68;
              if (!bVar9) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
                goto label_05d083b5;
              }
              if (local_68 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              bVar2 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
              if (((local_68->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((local_68->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(local_68);
              }
              if (local_68[3].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              bVar9 = System_String__op_Equality
                                (((local_68[3].klass)->_1).byval_arg.data,pSVar14,(MethodInfo *)0x0);
            } while (!bVar9);
            if (pIVar8[4].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar14 = ((pIVar8[4].klass)->_1).byval_arg.data;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                       (MethodInfo_4C45C40 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
            if (pSVar14 == (System_String_o *)0x0) {
label_05d083b5:
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
label_05d083d0:
              pSVar14 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              ppSVar12 = &"/Human/Previews/PresetNone";
              goto label_05d083e2;
            }
            local_40 = pSVar14;
            pSVar14 = System_String__Concat_52f0320("CharacterPreview_Titans_",pSVar14,(MethodInfo *)0x0);
            if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
            }
            x = ApplicationManagers_ResourceManager__GetExternalTexture(pSVar14,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar9) {
              if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
              }
              pSVar13 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
              path3 = System_String__Concat_5301f10
                                ("Preset",local_40,".png",(MethodInfo *)0x0);
              if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
              }
              pSVar13 = System_IO_Path__Combine_548d180(pSVar13,"Titans",path3,(MethodInfo *)0x0)
              ;
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              x = ApplicationManagers_ResourceManager__LoadExternalTexture
                            (pSVar13,pSVar14,true,(MethodInfo *)0x0);
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar16 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (!bVar9) {
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              goto label_05d083d0;
            }
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d0851a;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar15 = (__this_00->fields)._items;
            if (pSVar15 == (System_String_array *)0x0) goto label_05d0851a;
            uVar3 = (__this_00->fields)._size;
            if (uVar3 < (uint)pSVar15->max_length) {
              (__this_00->fields)._size = uVar3 + 1;
              ppSVar12 = pSVar15->m_Items + (long)(int)uVar3 + -4;
              pSVar15->m_Items[(int)uVar3] = pSVar14;
              goto label_05d08438;
            }
            pMVar16 = pMVar16->klass->rgctx_data[0xe].method;
label_05d08085:
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar14,
                       (MethodInfo_395D230 *)pMVar16);
          }
          uVar18 = uVar18 + 1;
          uVar3 = (uint)options->max_length;
          uVar11 = (ulong)uVar3;
        } while ((long)uVar18 < (long)(int)uVar3);
      }
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar15 = (System_String_array *)
                  System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar15;
      }
    }
  }
label_05d0851a:
  ThrowNullReferenceException();
}


// UI.CharacterTitanPanel$$.ctor
// il2cpp: void UI_CharacterTitanPanel___ctor (UI_CharacterTitanPanel_o* __this, const MethodInfo* method);
// 0x5d08550

void UI_CharacterTitanPanel___ctor(UI_CharacterTitanPanel_o *__this,MethodInfo *method)

{
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


