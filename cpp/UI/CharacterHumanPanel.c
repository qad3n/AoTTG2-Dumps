// Type: UI.CharacterHumanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterHumanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// --------------------------------

// UI.CharacterHumanPanel.<>c$$.cctor
// il2cpp: void UI_CharacterHumanPanel___c___cctor (const MethodInfo* method);
// 0x5d000d0

void UI_CharacterHumanPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547cff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterHumanPanel_c);
    Il2CppMethodInitialized_07547cff = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterHumanPanel_c->static_fields->__9 = (UI_CharacterHumanPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterHumanPanel_c->static_fields->__9);
  return;
}


// UI.CharacterHumanPanel.<>c$$.ctor
// il2cpp: void UI_CharacterHumanPanel___c___ctor (UI_CharacterHumanPanel___c_o* __this, const MethodInfo* method);
// 0x5d00140

void UI_CharacterHumanPanel___c___ctor(UI_CharacterHumanPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel.<>c$$<GetSpecialTooltips>b__8_0
// il2cpp: System_String_o* UI_CharacterHumanPanel___c___GetSpecialTooltips_b__8_0 (UI_CharacterHumanPanel___c_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5d00150

System_String_o *
UI_CharacterHumanPanel___c___GetSpecialTooltips_b__8_0
          (UI_CharacterHumanPanel___c_o *__this,System_String_o *option,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547d00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d00 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterPopup","SpecialTooltip",option,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterHumanPanel.<>c__DisplayClass1_0$$.ctor
// il2cpp: void UI_CharacterHumanPanel___c__DisplayClass1_0___ctor (UI_CharacterHumanPanel___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x5cfebe0

void UI_CharacterHumanPanel___c__DisplayClass1_0___ctor
               (UI_CharacterHumanPanel___c__DisplayClass1_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel.<>c__DisplayClass1_0$$<Setup>b__0
// il2cpp: System_String_o* UI_CharacterHumanPanel___c__DisplayClass1_0___Setup_b__0 (UI_CharacterHumanPanel___c__DisplayClass1_0_o* __this, System_String_o* costume, int32_t index, const MethodInfo* method);
// 0x5d001e0

System_String_o *
UI_CharacterHumanPanel___c__DisplayClass1_0___Setup_b__0
          (UI_CharacterHumanPanel___c__DisplayClass1_0_o *__this,System_String_o *costume,int32_t index,
          MethodInfo *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  int iStack_1c;
  
  if (Il2CppMethodInitialized_07547d01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeOption");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_07547d01 = '\x01';
  }
  pSVar3 = (__this->fields).sub;
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  iStack_1c = index + 1;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_1c);
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((args->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)args->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  args->m_Items[0] = pIVar1;
  Il2CppCodeGenWriteBarrier(args->m_Items);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleFormatted
                     ("CharacterPopup",pSVar3,"CostumeOption",args,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.CharacterHumanPanel$$Setup
// il2cpp: void UI_CharacterHumanPanel__Setup (UI_CharacterHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cfe2f0

void UI_CharacterHumanPanel__Setup(UI_CharacterHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_SettingsManager_StaticFields *pSVar2;
  Settings_InGameCharacterSettings_o *__this_00;
  Settings_InGameMiscSettings_o *pSVar3;
  Settings_InGameCharacterSettings_o *source;
  Settings_StringSetting_o *pSVar4;
  UI_CharacterPopup_o *__this_01;
  Settings_BoolSetting_o *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  bool bVar7;
  UI_CharacterHumanPanel___c__DisplayClass1_0_o *__this_02;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_o *pSVar8;
  UI_CharacterHumanPanel_o *pUVar9;
  System_String_array *pSVar10;
  System_String_array *pSVar11;
  System_Action_o *pSVar12;
  System_Func_T1__T2__TResult__o *__this_04;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  MethodInfo *method_00;
  System_String_array *tooltips;
  System_String_array *labels;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *pMVar13;
  UI_CharacterHumanPanel_o *pUVar14;
  Settings_IntSetting_o *pSVar15;
  MethodInfo *in_stack_ffffffffffffff80;
  
  if (Il2CppMethodInitialized_07547cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_OnLoadoutClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_SyncStatBars);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_string_71a8948);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterHumanPanel_c__DisplayClass1_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterHumanPanel_c__DisplayClass1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume3");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume2");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume1");
    il2cpp_codegen_initialize_runtime_metadata(&"Special");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547cf7 = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c__DisplayClass1_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,method_01);
  if (__this_02 != (UI_CharacterHumanPanel___c__DisplayClass1_0_o *)0x0) {
    (__this_02->fields).sub = "General";
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).sub);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields;
    if ((pSVar2->InGameCurrent != (Settings_InGameSet_o *)0x0) &&
       (pSVar2->InGameSettings != (Settings_InGameSettings_o *)0x0)) {
      __this_00 = pSVar2->InGameCharacterSettings;
      if (__this_00 != (Settings_InGameCharacterSettings_o *)0x0) {
        pSVar3 = (pSVar2->InGameCurrent->fields).Misc;
        source = (pSVar2->InGameSettings->fields).LastCharacter;
        pSVar4 = (__this_00->fields).CharacterType;
        if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
        }
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,
                     (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
          }
          __this_03 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07547ce5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
            Il2CppMethodInitialized_07547ce5 = '\x01';
          }
          __this_01 = (UI_CharacterPopup_o *)(__this->fields).Parent;
          if (__this_01 != (UI_CharacterPopup_o *)0x0) {
            bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
            if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
               ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
              il2cpp_codegen_raise_invalid_cast_exception();
            }
            bVar7 = UI_CharacterPopup__RestoreChoices
                              (__this_01,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                               (MethodInfo *)0x0);
            if (!bVar7) {
              if ((source == (Settings_InGameCharacterSettings_o *)0x0) ||
                 (pSVar4 = (source->fields).CharacterType, pSVar4 == (Settings_StringSetting_o *)0x0))
              goto label_05cfebc6;
              pSVar8 = (pSVar4->fields)._value;
              if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
              }
              bVar7 = System_String__op_Equality
                                (pSVar8,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                                 (MethodInfo *)0x0);
              if (bVar7) {
                Settings_InGameCharacterSettings__CopyHumanChoices(__this_00,source,(MethodInfo *)0x0);
              }
            }
            pSVar4 = (__this_00->fields).Loadout;
            if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
               (__this_03 != (System_Collections_Generic_List_string__o *)0x0)) {
              bVar7 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this_03,
                                 (Il2CppObject *)(pSVar4->fields)._value,
                                 (MethodInfo_395D6D0 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              if (!bVar7) {
                pSVar4 = (__this_00->fields).Loadout;
                pSVar8 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_03,0,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
                if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_05cfebc6;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar8,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
              pSVar4 = (__this_00->fields).Loadout;
              if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
                 (pSVar3 != (Settings_InGameMiscSettings_o *)0x0)) {
                pSVar5 = (pSVar3->fields).AllowShifterSpecials;
                if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                  pSVar8 = (pSVar4->fields)._value;
                  bVar7 = (pSVar5->fields)._value;
                  if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
                  }
                  pUVar9 = (UI_CharacterHumanPanel_o *)
                           Characters_HumanSpecials__GetSpecialNames(pSVar8,bVar7,(MethodInfo *)0x0);
                  pSVar4 = (__this_00->fields).Special;
                  if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
                     (pUVar9 != (UI_CharacterHumanPanel_o *)0x0)) {
                    pMVar13 = (MethodInfo *)(pSVar4->fields)._value;
                    pUVar14 = pUVar9;
                    bVar7 = System_Collections_Generic_List_object___Contains
                                      ((System_Collections_Generic_List_object__o *)pUVar9,
                                       (Il2CppObject *)pMVar13,
                                       (MethodInfo_395D6D0 *)
                                       MethodInfo_System_Collections_Generic_List_string_Contains);
                    if (!bVar7) {
                      pUVar14 = (UI_CharacterHumanPanel_o *)(__this_00->fields).Special;
                      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
                      }
                      if (pUVar14 == (UI_CharacterHumanPanel_o *)0x0) goto label_05cfebc6;
                      pMVar13 = (MethodInfo *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial
                      ;
                      Settings_TypedSetting_object___set_Value
                                ((Settings_TypedSetting_T__o *)pUVar14,(Il2CppObject *)pMVar13,
                                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                    }
                    pSVar10 = UI_CharacterHumanPanel__GetCharOptions(pUVar14,pMVar13);
                    pSVar15 = (__this_00->fields).CustomSet;
                    if ((pSVar15 != (Settings_IntSetting_o *)0x0) && (pSVar10 != (System_String_array *)0x0))
                    {
                      if ((int)pSVar10->max_length <= (pSVar15->fields)._value) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar15,0,
                                   (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                        pSVar15 = (__this_00->fields).CustomSet;
                      }
                      pUVar6 = (__this->fields).DoublePanelLeft;
                      pSVar8 = (__this_02->fields).sub;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pUVar14 = (UI_CharacterHumanPanel_o *)"CharacterPopup";
                      pSVar8 = UI_UIManager__GetLocale
                                         ("CharacterPopup",pSVar8,"Character",
                                          "","",(MethodInfo *)0x0);
                      pSVar11 = UI_CharacterHumanPanel__GetCharIcons(pUVar14,pSVar10,method_02);
                      pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                (pSVar12,(Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars,(MethodInfo *)0x0);
                      pMVar13 = (MethodInfo *)0x0;
                      UI_CharacterCategoryPanel__IconPicker
                                ((UI_CharacterCategoryPanel_o *)__this,pUVar6,
                                 (Settings_BaseSetting_o *)pSVar15,pSVar8,pSVar10,pSVar11,pSVar12,
                                 (System_String_array *)0x0,144.0,(System_String_array *)0x0,
                                 in_stack_ffffffffffffff80);
                      pSVar10 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                      if (pSVar10 != (System_String_array *)0x0) {
                        if ((int)pSVar10->max_length != 0) {
                          pSVar10->m_Items[0] = "Costume1";
                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
                          if ((pSVar10->max_length & 0xfffffffe) != 0) {
                            pSVar10->m_Items[1] = "Costume2";
                            Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1);
                            if (2 < (uint)pSVar10->max_length) {
                              pSVar10->m_Items[2] = "Costume3";
                              Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 2);
                              pUVar6 = (__this->fields).DoublePanelLeft;
                              pSVar15 = (__this_00->fields).Costume;
                              pSVar8 = UI_UIManager__GetLocale
                                                 ("CharacterPopup",(__this_02->fields).sub,
                                                  "Costume","",
                                                  "",(MethodInfo *)0x0);
                              pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                              System_Action___ctor
                                        (pSVar12,(Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars,
                                         (MethodInfo *)0x0);
                              __this_04 = (System_Func_T1__T2__TResult__o *)
                                          il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_System_Func_string_int_string);
                              System_Func_object__int__object____ctor
                                        (__this_04,(Il2CppObject *)__this_02,
                                         (intptr_t)
                                         MethodInfo_UI_CharacterHumanPanel_c__DisplayClass1_0_Setup_b__0,
                                         (MethodInfo_4F20870 *)0x0);
                              source_00 = System_Linq_Enumerable__Select_object__object__34f63f0
                                                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                     pSVar10,(System_Func_TSource__int__TResult__o *)__this_04
                                                     ,(MethodInfo_34F63F0 *)
                                                      MethodInfo_System_Linq_Enumerable_Select_string_string_71a8948
                                                    );
                              pSVar11 = (System_String_array *)
                                        System_Linq_Enumerable__ToArray_object_
                                                  ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                   source_00,
                                                   (MethodInfo_34FEA80 *)
                                                   MethodInfo_System_Linq_Enumerable_ToArray_string);
                              UI_CharacterCategoryPanel__Choice
                                        ((UI_CharacterCategoryPanel_o *)__this,pUVar6,
                                         (Settings_BaseSetting_o *)pSVar15,pSVar8,pSVar10,pSVar12,pSVar11,
                                         pMVar13);
                              pUVar6 = (__this->fields).DoublePanelLeft;
                              pSVar4 = (__this_00->fields).Loadout;
                              pSVar8 = UI_UIManager__GetLocale
                                                 ("CharacterPopup",(__this_02->fields).sub,
                                                  "Loadout","",
                                                  "",(MethodInfo *)0x0);
                              pSVar10 = (System_String_array *)
                                        System_Collections_Generic_List_object___ToArray
                                                  ((System_Collections_Generic_List_object__o *)__this_03,
                                                   (MethodInfo_395F5A0 *)
                                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
                              pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                              System_Action___ctor
                                        (pSVar12,(Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_CharacterHumanPanel_OnLoadoutClick,
                                         (MethodInfo *)0x0);
                              pSVar11 = UI_CharacterCategoryPanel__Labels
                                                  ("Loadout",
                                                   (System_Collections_Generic_IEnumerable_string__o *)
                                                   __this_03,method_03);
                              UI_CharacterCategoryPanel__Choice
                                        ((UI_CharacterCategoryPanel_o *)__this,pUVar6,
                                         (Settings_BaseSetting_o *)pSVar4,pSVar8,pSVar10,pSVar12,pSVar11,
                                         pMVar13);
                              pSVar10 = (System_String_array *)
                                        System_Collections_Generic_List_object___ToArray
                                                  ((System_Collections_Generic_List_object__o *)pUVar9,
                                                   (MethodInfo_395F5A0 *)
                                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
                              pMVar13 = (MethodInfo *)(__this->fields).DoublePanelLeft;
                              pSVar4 = (__this_00->fields).Special;
                              pUVar9 = (UI_CharacterHumanPanel_o *)"CharacterPopup";
                              method_00 = (MethodInfo *)
                                          UI_UIManager__GetLocale
                                                    ("CharacterPopup",(__this_02->fields).sub,
                                                     "Special","",
                                                     "",(MethodInfo *)0x0);
                              pSVar11 = UI_CharacterHumanPanel__GetSpecialIcons(pUVar9,pSVar10,method_04);
                              tooltips = UI_CharacterHumanPanel__GetSpecialTooltips(pUVar9,pSVar10,method_05);
                              labels = UI_CharacterCategoryPanel__Labels
                                                 ("Special",
                                                  (System_Collections_Generic_IEnumerable_string__o *)pSVar10,
                                                  method_06);
                              UI_CharacterCategoryPanel__IconPicker
                                        ((UI_CharacterCategoryPanel_o *)__this,
                                         (UnityEngine_Transform_o *)pMVar13,(Settings_BaseSetting_o *)pSVar4,
                                         (System_String_o *)method_00,pSVar10,pSVar11,(System_Action_o *)0x0,
                                         tooltips,96.0,labels,in_stack_ffffffffffffff80);
                              pSVar15 = (pSVar3->fields).PVP;
                              if (pSVar15 != (Settings_IntSetting_o *)0x0) {
                                if ((pSVar15->fields)._value == 2) {
                                  pMVar13 = (MethodInfo *)(__this->fields).DoublePanelRight;
                                  UI_CharacterCategoryPanel__TeamChoice
                                            ((UI_CharacterCategoryPanel_o *)__this,
                                             (UnityEngine_Transform_o *)pMVar13,
                                             (Settings_BaseSetting_o *)(__this_00->fields).Team,method_00);
                                }
                                UI_CharacterHumanPanel__SyncStatBars(__this,pMVar13);
                                return;
                              }
                              goto label_05cfebc6;
                            }
                          }
                        }
                        ThrowIndexOutOfRangeException();
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
label_05cfebc6:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$OnLoadoutClick
// il2cpp: void UI_CharacterHumanPanel__OnLoadoutClick (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x5cffdb0

void UI_CharacterHumanPanel__OnLoadoutClick(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).Parent;
  if (__this_00 == (UI_BasePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$SyncStatBars
// il2cpp: void UI_CharacterHumanPanel__SyncStatBars (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x5cff840
// eh: try 0x5cff9d0..0x5cffd3b -> pad 0x5cffd44 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cffd5c..0x5cffd61 -> pad 0x5cffd84 cleanup
// eh: try 0x5cffd87..0x5cffd91 -> pad 0x5cffd99 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cffd40: jmp 0x5cffd44
// asm:   0x5cffd42: jmp 0x5cffd44
// asm:   0x5cffd44: mov rbx, rax
// asm:   0x5cffd47: cmp edx, 1
// asm:   0x5cffd4a: jne 0x5cffd87
// asm:   0x5cffd4c: mov rdi, rbx
// asm:   0x5cffd4f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cffd54: mov rbx, qword ptr [rax]
// asm:   0x5cffd57: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5cffd5c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cffd61: lea rax, [rip + 0x158e010]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5cffd68: mov rsi, qword ptr [rax]
// asm:   0x5cffd6b: mov rdi, rsp
// asm:   0x5cffd6e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cffd73: test rbx, rbx
// asm:   0x5cffd76: je 0x5cffa2a
// asm:   0x5cffd7c: mov rdi, rbx
// asm:   0x5cffd7f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cffd84: mov rbx, rax
// asm:   0x5cffd87: lea rdi, [rsp + 0x20]
// asm:   0x5cffd8c: call 0x2fdba20  ; il2cpp_runtime_helper_02fdba20()
// asm:   0x5cffd91: mov rdi, rbx
// asm:   0x5cffd94: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cffd99: mov rdi, rax
// asm:   0x5cffd9c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CharacterHumanPanel__SyncStatBars(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int index;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  Settings_HumanCustomSettings_o *pSVar5;
  Settings_InGameCharacterSettings_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  Settings_ListSetting_T__o *pSVar9;
  System_String_o *subCategory;
  UnityEngine_Object_o *obj;
  bool bVar10;
  int32_t iVar11;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar12;
  Settings_BaseSetting_o *pSVar13;
  Characters_HumanStats_o *pCVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  MethodInfo *pMVar17;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_07547cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ammunition");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547cf8 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  pSVar4 = (__this->fields)._statBars;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05cffd3b;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar4,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_58 = local_38;
  local_68 = (undefined1  [8])local_48._0_8_;
  puStack_60 = (undefined1 *)local_48._8_8_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = local_68;
  while( true ) {
    bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                       ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                        (MethodInfo_4C45C50 *)
                        MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    obj = local_58;
    if (!bVar10) break;
    if (local_58 == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)local_58,false,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  pSVar4 = (__this->fields)._statBars;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05cffd3b;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar11 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar11) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar11,(MethodInfo *)0x0);
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
        (pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
        pSVar6 == (Settings_InGameCharacterSettings_o *)0x0)) ||
       (pSVar7 = (pSVar6->fields).CustomSet, pSVar7 == (Settings_IntSetting_o *)0x0)) ||
      ((pSVar8 = (pSVar6->fields).Costume, pSVar8 == (Settings_IntSetting_o *)0x0 ||
       (pSVar12 = (pSVar5->fields).Costume1Sets,
       pSVar12 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)))) ||
     (pSVar9 = (pSVar12->fields).Sets, pSVar9 == (Settings_ListSetting_T__o *)0x0)) goto label_05cffd3b;
  pSVar12 = (pSVar5->fields).CustomSets;
  index = (pSVar7->fields)._value;
  iVar3 = (pSVar8->fields)._value;
  iVar11 = Settings_ListSetting_object___GetCount
                     (pSVar9,(MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
  if (index < iVar11) {
    if (iVar3 == 2) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar5 == (Settings_HumanCustomSettings_o *)0x0) goto label_05cffd3b;
      pSVar12 = (pSVar5->fields).Costume3Sets;
    }
    else if (iVar3 == 1) {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar5 == (Settings_HumanCustomSettings_o *)0x0) goto label_05cffd3b;
      pSVar12 = (pSVar5->fields).Costume2Sets;
    }
    else {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar5 == (Settings_HumanCustomSettings_o *)0x0) goto label_05cffd3b;
      pSVar12 = (pSVar5->fields).Costume1Sets;
    }
    if ((pSVar12 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (pSVar9 = (pSVar12->fields).Sets, pSVar9 == (Settings_ListSetting_T__o *)0x0)) goto label_05cffd3b;
    pSVar13 = Settings_ListSetting_object___GetItemAt
                        (pSVar9,index,
                         (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    if (pSVar13 == (Settings_BaseSetting_o *)0x0) goto label_05cffbd6;
label_05cffb38:
    bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar13->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pSVar13->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
    }
  }
  else {
    if ((pSVar12 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (pSVar9 = (pSVar12->fields).Sets, pSVar9 == (Settings_ListSetting_T__o *)0x0)) goto label_05cffd3b;
    pSVar13 = Settings_ListSetting_object___GetItemAt
                        (pSVar9,index - iVar11,
                         (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    if (pSVar13 != (Settings_BaseSetting_o *)0x0) goto label_05cffb38;
label_05cffbd6:
    pSVar13 = (Settings_BaseSetting_o *)0x0;
  }
  pCVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
  Characters_HumanStats___ctor(pCVar14,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((pSVar13 != (Settings_BaseSetting_o *)0x0) && (pSVar13[0xb].klass != (Settings_BaseSetting_c *)0x0)) {
    pSVar16 = ((pSVar13[0xb].klass)->_1).byval_arg.data;
    if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
    }
    pCVar14 = Characters_HumanStats__Deserialize(pCVar14,pSVar16,(MethodInfo *)0x0);
    subCategory = "Stats";
    pSVar16 = "CharacterEditor";
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pMVar17 = (MethodInfo *)"";
    pSVar15 = UI_UIManager__GetLocale
                        (pSVar16,subCategory,"Acceleration","",""
                         ,(MethodInfo *)0x0);
    if (pCVar14 != (Characters_HumanStats_o *)0x0) {
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar15,(pCVar14->fields).Acceleration,pMVar17);
      pMVar17 = (MethodInfo *)"";
      pSVar15 = UI_UIManager__GetLocale
                          (pSVar16,subCategory,"Speed","",
                           "",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar15,(pCVar14->fields).Speed,pMVar17);
      pMVar17 = (MethodInfo *)"";
      pSVar15 = UI_UIManager__GetLocale
                          (pSVar16,subCategory,"Gas","",
                           "",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar15,(pCVar14->fields).Gas,pMVar17);
      pMVar17 = (MethodInfo *)"";
      pSVar16 = UI_UIManager__GetLocale
                          (pSVar16,subCategory,"Ammunition","",
                           "",(MethodInfo *)0x0);
      UI_CharacterHumanPanel__CreateStatBar(__this,pSVar16,(pCVar14->fields).Ammunition,pMVar17);
      return;
    }
  }
label_05cffd3b:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$CreateStatBar
// il2cpp: void UI_CharacterHumanPanel__CreateStatBar (UI_CharacterHumanPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x5cffdd0

void UI_CharacterHumanPanel__CreateStatBar
               (UI_CharacterHumanPanel_o *__this,System_String_o *title,int32_t value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar3;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  MethodInfo *pMVar5;
  int32_t iVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *parent;
  System_String_o *text;
  UnityEngine_RectTransform_o *fill;
  UnityEngine_GameObject_o *item;
  int32_t local_3c;
  System_Nullable_float__Fields local_38;
  
  local_3c = value;
  if (Il2CppMethodInitialized_07547cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_07547cf9 = '\x01';
  }
  pUVar7 = (__this->fields).DoublePanelRight;
  pGVar3 = (__this->fields).View;
  local_38.hasValue = false;
  local_38._1_3_ = 0;
  local_38.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_38,4.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (pGVar3,pUVar7,"clear",440.0,48.0,false,
                        (System_Nullable_float__o)local_38,(MethodInfo *)0x0);
    pGVar3 = (__this->fields).View;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      parent = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                         (pGVar3,pUVar7,"clear",440.0,30.0,true,(System_Nullable_float__o)0x0,
                          (MethodInfo *)0x0);
      pGVar3 = (__this->fields).View;
      if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgInGameView__Text
                  (pGVar3,parent,title,370.0,30.0,"inGameInfo",(MethodInfo *)0x0);
        pGVar3 = (__this->fields).View;
        text = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgInGameView__Text
                    (pGVar3,parent,text,70.0,30.0,"inGameText",(MethodInfo *)0x0);
          pGVar3 = (__this->fields).View;
          if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            fill = Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
                             (pGVar3,pUVar7,440.0,10.0,(MethodInfo *)0x0);
            iVar6 = local_3c;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress
                      (fill,((float)iVar6 + -50.0) / 50.0,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              __this_00 = (__this->fields)._statBars;
              item = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              pMVar5 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
              if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar4 = (__this_00->fields)._items;
                if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
                  uVar2 = (__this_00->fields)._size;
                  if (uVar2 < (uint)pUVar4->max_length) {
                    (__this_00->fields)._size = uVar2 + 1;
                    pUVar4->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
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
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetCharOptions
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharOptions (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x5cfebf0

System_String_array *
UI_CharacterHumanPanel__GetCharOptions(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07547cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547cfa = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar1 != (Settings_HumanCustomSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Costume1Sets, pSVar2 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
     )) {
    pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)pSVar2,
                        (MethodInfo_40482D0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((pSVar1 != (Settings_HumanCustomSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CustomSets, pSVar2 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
       )) {
      pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)pSVar2,
                          (MethodInfo_40482D0 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
                   (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        pSVar3 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5cfed20
// eh: try 0x5cff104..0x5cff41f -> pad 0x5cff429 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cff443..0x5cff448 -> pad 0x5cff49f cleanup
// eh: try 0x5cff4a2..0x5cff4ac -> pad 0x5cff4b4 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cff0a3: jmp 0x5cff495
// asm:   0x5cff421: jmp 0x5cff42b
// asm:   0x5cff423: jmp 0x5cff42b
// asm:   0x5cff425: jmp 0x5cff42b
// asm:   0x5cff427: jmp 0x5cff42b
// asm:   0x5cff429: jmp 0x5cff42b
// asm:   0x5cff42b: mov rbx, rax
// asm:   0x5cff42e: cmp edx, 1
// asm:   0x5cff431: jne 0x5cff4a2
// asm:   0x5cff433: mov rdi, rbx
// asm:   0x5cff436: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cff43b: mov rbx, qword ptr [rax]
// asm:   0x5cff43e: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5cff443: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cff448: lea rax, [rip + 0x158e359]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5cff44f: mov rsi, qword ptr [rax]
// asm:   0x5cff452: mov rdi, r15
// asm:   0x5cff455: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cff45a: test rbx, rbx
// asm:   0x5cff45d: je 0x5cff352
// asm:   0x5cff463: mov rdi, rbx
// asm:   0x5cff466: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cff49f: mov rbx, rax
// asm:   0x5cff4a2: lea rdi, [rsp + 0x18]
// asm:   0x5cff4a7: call 0x2fdba50  ; il2cpp_runtime_helper_02fdba50()
// asm:   0x5cff4ac: mov rdi, rbx
// asm:   0x5cff4af: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cff4b4: mov rdi, rax
// asm:   0x5cff4b7: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
UI_CharacterHumanPanel__GetCharIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  System_String_o **ppSVar1;
  int32_t *piVar2;
  byte bVar3;
  uint uVar4;
  Settings_HumanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar6;
  Settings_ListSetting_T__o *obj;
  Il2CppClass *pIVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_o *path1;
  Il2CppObject *pIVar9;
  bool bVar10;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar11;
  System_Collections_Generic_List_string__o *__this_01;
  VirtualInvokeData *pVVar12;
  System_Collections_Generic_List_object__o *pSVar13;
  ulong uVar14;
  System_String_o *key;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar15;
  int iVar16;
  MethodInfo *pMVar17;
  long lVar18;
  ulong uVar19;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_50;
  Il2CppObject *local_48;
  System_Collections_Generic_List_object__o *local_38;
  
  if (Il2CppMethodInitialized_07547cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPreview_Human_");
    il2cpp_codegen_initialize_runtime_metadata(&"/Human/Previews/PresetNone");
    il2cpp_codegen_initialize_runtime_metadata(&"/Human/Previews/Preset");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_07547cfb = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
     (pSVar6 = (pSVar5->fields).Costume1Sets, pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
     )) {
    pSVar11 = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)pSVar6,
                         (MethodInfo_40482D0 *)
                         MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar11,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
       ((pSVar6 = (pSVar5->fields).CustomSets,
        pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0 &&
        (obj = (pSVar6->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)))) {
      pIVar7 = (Il2CppClass *)obj->klass;
      uVar14 = (ulong)(pIVar7->_2).interface_offsets_count;
      if (uVar14 != 0) {
        pIVar8 = (pIVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar8->interfaceType + lVar18) ==
              TypeInfo_Settings_IListSetting) {
            pVVar12 = pIVar7->vtable + (*(int *)((long)&pIVar8->offset + lVar18) + 2);
            goto label_05cfefb9;
          }
          lVar18 = lVar18 + 0x10;
        } while (uVar14 * 0x10 != lVar18);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05cfefb9:
      pSVar13 = (System_Collections_Generic_List_object__o *)
                (*pVVar12->methodPtr)((Il2CppObject *)obj,pVVar12->method);
      if (options != (System_String_array *)0x0) {
        iVar16 = (int)options->max_length;
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          if (0 < iVar16) goto label_05cff495;
        }
        else {
          local_38 = pSVar13;
          if (0 < iVar16) {
            uVar14 = options->max_length & 0xffffffff;
            uVar19 = 0;
            do {
              if (uVar14 <= uVar19) {
                ThrowIndexOutOfRangeException();
              }
              pSVar15 = options->m_Items[uVar19];
              bVar10 = System_Collections_Generic_List_object___Contains
                                 ((System_Collections_Generic_List_object__o *)__this_01,
                                  (Il2CppObject *)pSVar15,
                                  (MethodInfo_395D6D0 *)
                                  MethodInfo_System_Collections_Generic_List_string_Contains);
              if (bVar10) {
                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                }
                key = System_String__Concat_5301f10
                                (TypeInfo_Utility_ResourcePaths->static_fields->Characters,
                                 "/Human/Previews/Preset",pSVar15,(MethodInfo *)0x0);
                if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05cff495;
label_05cff395:
                pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
                piVar2 = &(__this_00->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar11 = (__this_00->fields)._items;
                if (pSVar11 == (System_String_array *)0x0) goto label_05cff495;
                uVar4 = (__this_00->fields)._size;
                if ((uint)pSVar11->max_length <= uVar4) {
                  pMVar17 = pMVar17->klass->rgctx_data[0xe].method;
                  goto label_05cff015;
                }
                (__this_00->fields)._size = uVar4 + 1;
                ppSVar1 = pSVar11->m_Items + (long)(int)uVar4 + -4;
                pSVar11->m_Items[(int)uVar4] = key;
label_05cff3d8:
                Il2CppCodeGenWriteBarrier(ppSVar1 + 4);
              }
              else {
                if (local_38 == (System_Collections_Generic_List_object__o *)0x0) goto label_05cff495;
                System_Collections_Generic_List_object___GetEnumerator
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_70,local_38,
                           (MethodInfo_395E050 *)
                           MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
                local_48 = local_60;
                local_58 = (undefined1  [8])local_70._0_8_;
                pSStack_50 = (System_Collections_Generic_List_Enumerator_object__o *)local_70._8_8_;
                local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
                local_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_58;
                do {
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
                                     );
                  pIVar9 = local_48;
                  if (!bVar10) {
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                               (MethodInfo_4C45C40 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
                    goto label_05cff352;
                  }
                  if (local_48 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar3 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
                  if (((local_48->klass->_2).typeHierarchyDepth < bVar3) ||
                     ((local_48->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                      (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                    il2cpp_codegen_raise_invalid_cast_exception(local_48);
                  }
                  if (local_48[3].klass == (Il2CppClass *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar10 = System_String__op_Equality
                                     (((local_48[3].klass)->_1).byval_arg.data,pSVar15,(MethodInfo *)0x0);
                } while (!bVar10);
                if (pIVar9[4].klass == (Il2CppClass *)0x0) {
                  ThrowNullReferenceException();
                }
                pSVar15 = ((pIVar9[4].klass)->_1).byval_arg.data;
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
                if (pSVar15 == (System_String_o *)0x0) {
label_05cff352:
                  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                  }
                  key = System_String__Concat_52f0320
                                  (TypeInfo_Utility_ResourcePaths->static_fields->Characters,
                                   "/Human/Previews/PresetNone",(MethodInfo *)0x0);
                  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) goto label_05cff395;
                  goto label_05cff495;
                }
                key = System_String__Concat_52f0320("CharacterPreview_Human_",pSVar15,(MethodInfo *)0x0);
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar10 = UnityEngine_Object__op_Equality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar10) {
                  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
                  }
                  path1 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
                  pSVar15 = System_String__Concat_5301f10
                                      ("Preset",pSVar15,".png",(MethodInfo *)0x0);
                  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
                  }
                  pSVar15 = System_IO_Path__Combine_548d180
                                      (path1,"Human",pSVar15,(MethodInfo *)0x0);
                  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                  }
                  x = ApplicationManagers_ResourceManager__LoadExternalTexture
                                (pSVar15,key,true,(MethodInfo *)0x0);
                }
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar10 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                pMVar17 = MethodInfo_System_Collections_Generic_List_string_Add;
                if (!bVar10) goto label_05cff352;
                if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05cff495;
                piVar2 = &(__this_00->fields)._version;
                *piVar2 = *piVar2 + 1;
                pSVar11 = (__this_00->fields)._items;
                if (pSVar11 == (System_String_array *)0x0) goto label_05cff495;
                uVar4 = (__this_00->fields)._size;
                if (uVar4 < (uint)pSVar11->max_length) {
                  (__this_00->fields)._size = uVar4 + 1;
                  ppSVar1 = pSVar11->m_Items + (long)(int)uVar4 + -4;
                  pSVar11->m_Items[(int)uVar4] = key;
                  goto label_05cff3d8;
                }
                pMVar17 = pMVar17->klass->rgctx_data[0xe].method;
label_05cff015:
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)key,
                           (MethodInfo_395D230 *)pMVar17);
              }
              uVar19 = uVar19 + 1;
              uVar4 = (uint)options->max_length;
              uVar14 = (ulong)uVar4;
            } while ((long)uVar19 < (long)(int)uVar4);
          }
        }
        if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar11 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                              );
          return pSVar11;
        }
      }
    }
  }
label_05cff495:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetSpecialIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5cff4c0

System_String_array *
UI_CharacterHumanPanel__GetSpecialIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  int iVar5;
  System_Collections_Generic_List_string__o *__this_00;
  ulong uVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_07547cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Specials/");
    Il2CppMethodInitialized_07547cfc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    iVar5 = (int)options->max_length;
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar5) {
        uVar6 = options->max_length & 0xffffffff;
        uVar9 = 0;
        do {
          if (uVar6 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          pSVar7 = options->m_Items[uVar9];
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
          if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
          }
          pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat_5301f10(pSVar3,"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_00->fields)._items;
          if (pSVar8 == (System_String_array *)0x0) goto label_05cff6fa;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar8->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar8->m_Items[(int)uVar2] = pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar7,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)options->max_length;
          uVar6 = (ulong)uVar2;
        } while ((long)uVar9 < (long)(int)uVar2);
      }
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar8;
    }
    if (0 < iVar5) {
      pSVar7 = options->m_Items[0];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      pSVar7 = Characters_HumanSpecials__GetSpecialIcon(pSVar7,(MethodInfo *)0x0);
      System_String__Concat_5301f10(pSVar3,"/Icons/Specials/",pSVar7,(MethodInfo *)0x0);
    }
  }
label_05cff6fa:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetSpecialTooltips
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialTooltips (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x5cff700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cff73c: jmp 0x5cff7ae

System_String_array *
UI_CharacterHumanPanel__GetSpecialTooltips
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  UI_CharacterHumanPanel___c_StaticFields *pUVar2;
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_07547cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_c_GetSpecialTooltips_b__8_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterHumanPanel_c);
    Il2CppMethodInitialized_07547cfd = '\x01';
    uVar1 = (TypeInfo_UI_CharacterHumanPanel_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_CharacterHumanPanel_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c);
    pUVar2 = TypeInfo_UI_CharacterHumanPanel_c->static_fields;
    __this_00 = pUVar2->__9__8_0;
  }
  else {
    pUVar2 = ((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c)->static_fields;
    __this_00 = pUVar2->__9__8_0;
  }
  if (__this_00 == (System_Func_string__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterHumanPanel_c);
      pUVar2 = TypeInfo_UI_CharacterHumanPanel_c->static_fields;
    }
    object = (Il2CppObject *)pUVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_00,object,
               (intptr_t)MethodInfo_UI_CharacterHumanPanel_c_GetSpecialTooltips_b__8_0,
               (MethodInfo_4F19B50 *)0x0);
    pUVar2 = TypeInfo_UI_CharacterHumanPanel_c->static_fields;
    pUVar2->__9__8_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__8_0);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                      (System_Func_TSource__TResult__o *)__this_00,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// UI.CharacterHumanPanel$$.ctor
// il2cpp: void UI_CharacterHumanPanel___ctor (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x5d00050

void UI_CharacterHumanPanel___ctor(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547cfe = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._statBars = (System_Collections_Generic_List_GameObject__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._statBars);
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,method_00);
  return;
}


