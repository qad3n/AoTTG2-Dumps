// Type: UI.CharacterHumanPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterHumanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterHumanPanel.cs
// --------------------------------

// UI.CharacterHumanPanel$$Setup
// il2cpp: void UI_CharacterHumanPanel__Setup (UI_CharacterHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18221f710

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
  Settings_HumanCustomSettings_o *pSVar6;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  UnityEngine_Transform_o *pUVar9;
  bool bVar10;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar11;
  System_Collections_Generic_List_string__o *__this_03;
  System_String_array *pSVar12;
  System_Collections_Generic_List_string__o *__this_04;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar13;
  System_Action_o *pSVar14;
  System_String_o *title;
  System_String_o *pSVar15;
  System_Func_string__string__o *__this_05;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_String_array *tooltips;
  
  if (Il2CppMethodInitialized_18434718a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_OnLoadoutClick);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_SyncStatBars);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume3");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume2");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume1");
    il2cpp_codegen_initialize_runtime_metadata(&"Special");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434718a = '\x01';
  }
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar15 = "General";
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields;
  if (((pSVar2->InGameCurrent != (Settings_InGameSet_o *)0x0) &&
      (pSVar2->InGameSettings != (Settings_InGameSettings_o *)0x0)) &&
     (__this_00 = pSVar2->InGameCharacterSettings, __this_00 != (Settings_InGameCharacterSettings_o *)0x0)) {
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
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      __this_02 = GameManagers_HumanLoadout__GetAllowed((MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18434717c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
        Il2CppMethodInitialized_18434717c = '\x01';
      }
      __this_01 = (UI_CharacterPopup_o *)(__this->fields).Parent;
      if (__this_01 != (UI_CharacterPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_CharacterPopup);
        }
        bVar10 = UI_CharacterPopup__RestoreChoices
                           (__this_01,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                            (MethodInfo *)0x0);
        if (!bVar10) {
          if ((source == (Settings_InGameCharacterSettings_o *)0x0) ||
             (pSVar4 = (source->fields).CharacterType, pSVar4 == (Settings_StringSetting_o *)0x0))
          goto label_182220153;
          pSVar11 = (pSVar4->fields)._value;
          if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
          }
          bVar10 = System_String__op_Equality
                             (pSVar11,TypeInfo_GameManagers_PlayerCharacter->static_fields->Human,
                              (MethodInfo *)0x0);
          if (bVar10) {
            Settings_InGameCharacterSettings__CopyHumanChoices(__this_00,source,(MethodInfo *)0x0);
          }
        }
        pSVar4 = (__this_00->fields).Loadout;
        if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
           (__this_02 != (System_Collections_Generic_List_string__o *)0x0)) {
          bVar10 = System_Collections_Generic_List_object___Contains
                             ((System_Collections_Generic_List_object__o *)__this_02,
                              (Il2CppObject *)(pSVar4->fields)._value,
                              (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains)
          ;
          if (!bVar10) {
            pSVar4 = (__this_00->fields).Loadout;
            pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,0,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_string_get_Item);
            if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_182220153;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar11,
                       (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          }
          pSVar4 = (__this_00->fields).Loadout;
          if (((pSVar4 != (Settings_StringSetting_o *)0x0) && (pSVar3 != (Settings_InGameMiscSettings_o *)0x0)
              ) && (pSVar5 = (pSVar3->fields).AllowShifterSpecials, pSVar5 != (Settings_BoolSetting_o *)0x0))
          {
            pSVar11 = (pSVar4->fields)._value;
            bVar10 = (pSVar5->fields)._value;
            if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
            }
            __this_03 = Characters_HumanSpecials__GetSpecialNames(pSVar11,bVar10,(MethodInfo *)0x0);
            pSVar4 = (__this_00->fields).Special;
            if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
               (__this_03 != (System_Collections_Generic_List_string__o *)0x0)) {
              bVar10 = System_Collections_Generic_List_object___Contains
                                 ((System_Collections_Generic_List_object__o *)__this_03,
                                  (Il2CppObject *)(pSVar4->fields)._value,
                                  (MethodInfo_93FC70 *)
                                  MethodInfo_System_Collections_Generic_List_string_Contains);
              if (!bVar10) {
                pSVar4 = (__this_00->fields).Special;
                if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
                }
                if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_182220153;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar4,
                           (Il2CppObject *)TypeInfo_Characters_HumanSpecials->static_fields->DefaultSpecial,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
              if (Il2CppMethodInitialized_18434718d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_string_AddRange);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_string_ToArray);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                Il2CppMethodInitialized_18434718d = '\x01';
              }
              pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
              if ((pSVar6 != (Settings_HumanCustomSettings_o *)0x0) &&
                 (pSVar7 = (pSVar6->fields).Costume1Sets,
                 pSVar7 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
                pSVar12 = Settings_SetSettingsContainer_object___GetSetNames
                                    ((Settings_SetSettingsContainer_T__o *)pSVar7,
                                     (MethodInfo_C8EC20 *)
                                     MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
                __this_04 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
                System_Collections_Generic_List_object____ctor_94fb10
                          ((System_Collections_Generic_List_object__o *)__this_04,
                           (System_Collections_Generic_IEnumerable_T__o *)pSVar12,
                           (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80
                          );
                pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
                if ((pSVar6 != (Settings_HumanCustomSettings_o *)0x0) &&
                   (pSVar7 = (pSVar6->fields).CustomSets,
                   pSVar7 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
                  pSVar12 = Settings_SetSettingsContainer_object___GetSetNames
                                      ((Settings_SetSettingsContainer_T__o *)pSVar7,
                                       (MethodInfo_C8EC20 *)
                                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
                  if (__this_04 != (System_Collections_Generic_List_string__o *)0x0) {
                    System_Collections_Generic_List_object___AddRange
                              ((System_Collections_Generic_List_object__o *)__this_04,
                               (System_Collections_Generic_IEnumerable_T__o *)pSVar12,
                               (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange
                              );
                    pUVar13 = System_Collections_Generic_List_object___ToArray
                                        ((System_Collections_Generic_List_T__o *)__this_04,
                                         (MethodInfo_929FE0 *)
                                         MethodInfo_System_Collections_Generic_List_string_ToArray);
                    pSVar8 = (__this_00->fields).CustomSet;
                    if ((pSVar8 != (Settings_IntSetting_o *)0x0) &&
                       (pUVar13 !=
                        (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                         *)0x0)) {
                      if ((int)pUVar13->max_length <= (pSVar8->fields)._value) {
                        Settings_TypedSetting_int___set_Value
                                  ((Settings_TypedSetting_int__o *)pSVar8,0,
                                   (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      }
                      pSVar8 = (__this_00->fields).CustomSet;
                      pUVar9 = (__this->fields).DoublePanelLeft;
                      pSVar11 = (__this->fields).LocaleCategory;
                      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                      }
                      pSVar11 = UI_UIManager__GetLocale
                                          (pSVar11,pSVar15,"Character","",
                                           "",(MethodInfo *)0x0);
                      pSVar12 = UI_CharacterHumanPanel__GetCharIcons
                                          (__this,(System_String_array *)pUVar13,(MethodInfo *)0x0);
                      pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                      System_Action___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar14,
                                 (Il2CppObject *)__this,
                                 (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars,(MethodInfo *)0x0);
                      UI_CharacterCategoryPanel__IconPicker
                                ((UI_CharacterCategoryPanel_o *)__this,pUVar9,(Settings_BaseSetting_o *)pSVar8
                                 ,pSVar11,(System_String_array *)pUVar13,pSVar12,pSVar14,
                                 (System_String_array *)0x0,144.0,(MethodInfo *)0x0);
                      pUVar9 = (__this->fields).DoublePanelLeft;
                      pSVar8 = (__this_00->fields).Costume;
                      title = UI_UIManager__GetLocale
                                        ((__this->fields).LocaleCategory,pSVar15,"Costume",
                                         "","",(MethodInfo *)0x0);
                      pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                      pSVar11 = "Costume1";
                      if (pSVar12 != (System_String_array *)0x0) {
                        if ((int)pSVar12->max_length != 0) {
                          pSVar12->m_Items[0] = "Costume1";
                          Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar11);
                          pSVar11 = "Costume2";
                          if (1 < (uint)pSVar12->max_length) {
                            pSVar12->m_Items[1] = "Costume2";
                            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar11);
                            pSVar11 = "Costume3";
                            if (2 < (uint)pSVar12->max_length) {
                              pSVar12->m_Items[2] = "Costume3";
                              Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 2,pSVar11);
                              pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                              System_Action___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar14,
                                         (Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_CharacterHumanPanel_SyncStatBars,
                                         (MethodInfo *)0x0);
                              UI_CharacterCategoryPanel__Choice
                                        ((UI_CharacterCategoryPanel_o *)__this,pUVar9,
                                         (Settings_BaseSetting_o *)pSVar8,title,pSVar12,pSVar14,
                                         (MethodInfo *)0x0);
                              pUVar9 = (__this->fields).DoublePanelLeft;
                              pSVar4 = (__this_00->fields).Loadout;
                              pSVar11 = UI_UIManager__GetLocale
                                                  ((__this->fields).LocaleCategory,pSVar15,
                                                   "Loadout","",
                                                   "",(MethodInfo *)0x0);
                              pUVar13 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                                  ((System_Collections_Generic_List_T__o *)__this_02,
                                                   (MethodInfo_929FE0 *)
                                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
                              pSVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                              System_Action___ctor
                                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pSVar14,
                                         (Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_CharacterHumanPanel_OnLoadoutClick,
                                         (MethodInfo *)0x0);
                              UI_CharacterCategoryPanel__Choice
                                        ((UI_CharacterCategoryPanel_o *)__this,pUVar9,
                                         (Settings_BaseSetting_o *)pSVar4,pSVar11,
                                         (System_String_array *)pUVar13,pSVar14,(MethodInfo *)0x0);
                              pUVar13 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                                  ((System_Collections_Generic_List_T__o *)__this_03,
                                                   (MethodInfo_929FE0 *)
                                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
                              pUVar9 = (__this->fields).DoublePanelLeft;
                              pSVar4 = (__this_00->fields).Special;
                              pSVar15 = UI_UIManager__GetLocale
                                                  ((__this->fields).LocaleCategory,pSVar15,
                                                   "Special","",
                                                   "",(MethodInfo *)0x0);
                              pSVar12 = UI_CharacterHumanPanel__GetSpecialIcons
                                                  (__this,(System_String_array *)pUVar13,(MethodInfo *)0x0);
                              if (Il2CppMethodInitialized_184347190 == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_UI_CharacterHumanPanel_GetSpecialTooltips_b__9_0);
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_System_Linq_Enumerable_Select_string_string);
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&MethodInfo_System_Linq_Enumerable_ToArray_string);
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_System_Func_string_string);
                                Il2CppMethodInitialized_184347190 = '\x01';
                              }
                              __this_05 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_System_Func_string_string);
                              System_Func_object__object____ctor
                                        ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_05,
                                         (Il2CppObject *)__this,
                                         (intptr_t)MethodInfo_UI_CharacterHumanPanel_GetSpecialTooltips_b__9_0
                                         ,(MethodInfo_16E67D0 *)0x0);
                              source_00 = System_Linq_Enumerable__Select_Vector3__object_
                                                    ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                     pUVar13,(System_Func_TSource__TResult__o *)__this_05,
                                                     (MethodInfo_6C2170 *)
                                                     MethodInfo_System_Linq_Enumerable_Select_string_string);
                              tooltips = (System_String_array *)
                                         System_Linq_Enumerable__ToArray_object_
                                                   ((System_Collections_Generic_IEnumerable_TSource__o *)
                                                    source_00,
                                                    (MethodInfo_6C7D90 *)
                                                    MethodInfo_System_Linq_Enumerable_ToArray_string);
                              UI_CharacterCategoryPanel__IconPicker
                                        ((UI_CharacterCategoryPanel_o *)__this,pUVar9,
                                         (Settings_BaseSetting_o *)pSVar4,pSVar15,
                                         (System_String_array *)pUVar13,pSVar12,(System_Action_o *)0x0,
                                         tooltips,96.0,(MethodInfo *)0x0);
                              pSVar8 = (pSVar3->fields).PVP;
                              if (pSVar8 != (Settings_IntSetting_o *)0x0) {
                                if ((pSVar8->fields)._value != 2) {
label_18222011b:
                                  UI_CharacterHumanPanel__SyncStatBars(__this,(MethodInfo *)0x0);
                                  return;
                                }
                                pUVar9 = (__this->fields).DoublePanelRight;
                                pSVar4 = (__this_00->fields).Team;
                                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                                }
                                pSVar15 = UI_UIManager__GetLocaleCommon
                                                    ("Team",(MethodInfo *)0x0);
                                pSVar12 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
                                }
                                if (pSVar12 != (System_String_array *)0x0) {
                                  if ((int)pSVar12->max_length != 0) {
                                    pSVar11 = TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
                                    pSVar12->m_Items[0] = pSVar11;
                                    Il2CppCodeGenWriteBarrier(pSVar12->m_Items,pSVar11);
                                    if (1 < (uint)pSVar12->max_length) {
                                      pSVar11 = TypeInfo_GameManagers_TeamInfo->static_fields->Red;
                                      pSVar12->m_Items[1] = pSVar11;
                                      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + 1,pSVar11);
                                      UI_CharacterCategoryPanel__Choice
                                                ((UI_CharacterCategoryPanel_o *)__this,pUVar9,
                                                 (Settings_BaseSetting_o *)pSVar4,pSVar15,pSVar12,
                                                 (System_Action_o *)0x0,(MethodInfo *)0x0);
                                      goto label_18222011b;
                                    }
                                  }
                                  goto label_182220159;
                                }
                              }
                              goto label_182220153;
                            }
                          }
                        }
label_182220159:
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
label_182220153:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$OnLoadoutClick
// il2cpp: void UI_CharacterHumanPanel__OnLoadoutClick (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x18221f6f0

void UI_CharacterHumanPanel__OnLoadoutClick(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).Parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$SyncStatBars
// il2cpp: void UI_CharacterHumanPanel__SyncStatBars (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x182220170
// eh: try 0x1822202f2..0x182220343 -> pad 0x183315a20 catch Il2CppExceptionWrapper
// eh: try 0x182220489..0x1822205c9 -> pad 0x1802302b0 (+1 call sites) cleanup
// eh: try 0x182220789..0x18222078f -> pad 0x183315a20 catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182220354: mov rdx, qword ptr [rip + 0x1e6018d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x18222035b: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182220360: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182220365: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18222036a: test rcx, rcx
// asm:   0x18222036d: jne 0x18222078f
// asm:   0x182220373: xor esi, esi
// asm:   0x182220375: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18222044e: mov rbx, rsi
// asm:   0x182220451: jmp 0x18222060e
// asm:   0x182220489: jmp 0x18222060e
// asm:   0x182220522: jmp 0x18222060e
// asm:   0x18222059b: jmp 0x18222060e
// asm:   0x18222078f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

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
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar9;
  Settings_ListSetting_T__o *pSVar10;
  System_String_o *category;
  UnityEngine_Object_o *obj;
  bool bVar11;
  int32_t iVar12;
  Settings_BaseSetting_o *pSVar13;
  Settings_BaseSetting_o *pSVar14;
  Characters_HumanStats_o *pCVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  undefined1 local_50 [16];
  UnityEngine_Object_o *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  UnityEngine_Object_o *local_28;
  
  if (Il2CppMethodInitialized_18434718b == '\0') {
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
    Il2CppMethodInitialized_18434718b = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (UnityEngine_Object_o *)0x0;
  pSVar4 = (__this->fields)._statBars;
  if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_T__o *)pSVar4,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = (undefined1  [8])local_50._0_8_;
    pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
    local_28 = local_40;
    pSVar14 = (Settings_BaseSetting_o *)0x0;
    local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
    while (bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                               (MethodInfo_153A2A0 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          obj = local_28, bVar11) {
      if (local_28 == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)local_28,false,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    pSVar4 = (__this->fields)._statBars;
    if (pSVar4 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar12 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar12) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar12,(MethodInfo *)0x0);
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (((((pSVar5 != (Settings_HumanCustomSettings_o *)0x0) &&
            (pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,
            pSVar6 != (Settings_InGameCharacterSettings_o *)0x0)) &&
           (pSVar7 = (pSVar6->fields).CustomSet, pSVar7 != (Settings_IntSetting_o *)0x0)) &&
          ((pSVar8 = (pSVar6->fields).Costume, pSVar8 != (Settings_IntSetting_o *)0x0 &&
           (pSVar9 = (pSVar5->fields).Costume1Sets,
           pSVar9 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)))) &&
         (pSVar10 = (pSVar9->fields).Sets, pSVar10 != (Settings_ListSetting_T__o *)0x0)) {
        pSVar9 = (pSVar5->fields).CustomSets;
        index = (pSVar7->fields)._value;
        iVar3 = (pSVar8->fields)._value;
        iVar12 = Settings_ListSetting_object___GetCount
                           (pSVar10,(MethodInfo_182B100 *)
                                    MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
        if (index < iVar12) {
          pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
          if (iVar3 == 1) {
            if (((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
                (pSVar9 = (pSVar5->fields).Costume2Sets,
                pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
               (pSVar10 = (pSVar9->fields).Sets, pSVar10 == (Settings_ListSetting_T__o *)0x0))
            goto label_182220783;
            pSVar14 = Settings_ListSetting_object___GetItemAt
                                (pSVar10,index,
                                 (MethodInfo_182B120 *)
                                 MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
            if (pSVar14 == (Settings_BaseSetting_o *)0x0) {
              pSVar14 = (Settings_BaseSetting_o *)0x0;
            }
            else {
              bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((pSVar14->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pSVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
              }
            }
          }
          else if (iVar3 == 2) {
            if (((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
                (pSVar9 = (pSVar5->fields).Costume3Sets,
                pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
               (pSVar10 = (pSVar9->fields).Sets, pSVar10 == (Settings_ListSetting_T__o *)0x0))
            goto label_182220783;
            pSVar14 = Settings_ListSetting_object___GetItemAt
                                (pSVar10,index,
                                 (MethodInfo_182B120 *)
                                 MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
            if (pSVar14 == (Settings_BaseSetting_o *)0x0) {
              pSVar14 = (Settings_BaseSetting_o *)0x0;
            }
            else {
              bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((pSVar14->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pSVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
              }
            }
          }
          else {
            if (((pSVar5 == (Settings_HumanCustomSettings_o *)0x0) ||
                (pSVar9 = (pSVar5->fields).Costume1Sets,
                pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
               (pSVar10 = (pSVar9->fields).Sets, pSVar10 == (Settings_ListSetting_T__o *)0x0))
            goto label_182220783;
            pSVar14 = Settings_ListSetting_object___GetItemAt
                                (pSVar10,index,
                                 (MethodInfo_182B120 *)
                                 MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
            if (pSVar14 == (Settings_BaseSetting_o *)0x0) {
              pSVar14 = (Settings_BaseSetting_o *)0x0;
            }
            else {
              bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if (((pSVar14->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pSVar14->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(pSVar14);
              }
            }
          }
        }
        else {
          if ((pSVar9 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
             (pSVar10 = (pSVar9->fields).Sets, pSVar10 == (Settings_ListSetting_T__o *)0x0))
          goto label_182220783;
          pSVar13 = Settings_ListSetting_object___GetItemAt
                              (pSVar10,index - iVar12,
                               (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt)
          ;
          if (pSVar13 != (Settings_BaseSetting_o *)0x0) {
            bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
            if (((pSVar13->klass->_2).typeHierarchyDepth < bVar2) ||
               (pSVar14 = pSVar13,
               (pSVar13->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
               (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar13);
            }
          }
        }
        pCVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
        Characters_HumanStats___ctor(pCVar15,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
        if ((pSVar14 != (Settings_BaseSetting_o *)0x0) &&
           (pSVar14[0xb].klass != (Settings_BaseSetting_c *)0x0)) {
          pSVar17 = ((pSVar14[0xb].klass)->_1).byval_arg.data;
          if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
          }
          pCVar15 = Characters_HumanStats__Deserialize(pCVar15,pSVar17,(MethodInfo *)0x0);
          category = "CharacterEditor";
          pSVar17 = "Stats";
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar16 = UI_UIManager__GetLocale
                              (category,pSVar17,"Acceleration","",
                               "",(MethodInfo *)0x0);
          if (pCVar15 != (Characters_HumanStats_o *)0x0) {
            UI_CharacterHumanPanel__CreateStatBar
                      (__this,pSVar16,(pCVar15->fields).Acceleration,(MethodInfo *)0x0);
            pSVar16 = UI_UIManager__GetLocale
                                (category,pSVar17,"Speed","",
                                 "",(MethodInfo *)0x0);
            UI_CharacterHumanPanel__CreateStatBar(__this,pSVar16,(pCVar15->fields).Speed,(MethodInfo *)0x0);
            pSVar16 = UI_UIManager__GetLocale
                                (category,pSVar17,"Gas","",
                                 "",(MethodInfo *)0x0);
            UI_CharacterHumanPanel__CreateStatBar(__this,pSVar16,(pCVar15->fields).Gas,(MethodInfo *)0x0);
            pSVar17 = UI_UIManager__GetLocale
                                (category,pSVar17,"Ammunition","",
                                 "",(MethodInfo *)0x0);
            UI_CharacterHumanPanel__CreateStatBar
                      (__this,pSVar17,(pCVar15->fields).Ammunition,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_182220783:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$CreateStatBar
// il2cpp: void UI_CharacterHumanPanel__CreateStatBar (UI_CharacterHumanPanel_o* __this, System_String_o* title, int32_t value, const MethodInfo* method);
// 0x18221e9f0

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
  System_Nullable_float__Fields local_res8;
  int32_t local_res18 [2];
  
  local_res18[0] = value;
  if (Il2CppMethodInitialized_18434718c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameInfo");
    Il2CppMethodInitialized_18434718c = '\x01';
  }
  pGVar3 = (__this->fields).View;
  pUVar7 = (__this->fields).DoublePanelRight;
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_res8,4.0,
             (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    pUVar7 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (pGVar3,pUVar7,"clear",440.0,48.0,false,
                        (System_Nullable_float__o)local_res8,(MethodInfo *)0x0);
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
        text = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgInGameView__Text
                    (pGVar3,parent,text,70.0,30.0,"inGameText",(MethodInfo *)0x0);
          pGVar3 = (__this->fields).View;
          if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            fill = Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
                             (pGVar3,pUVar7,440.0,10.0,(MethodInfo *)0x0);
            iVar6 = local_res18[0];
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress
                      (fill,((float)iVar6 - 50.0) / 50.0,(MethodInfo *)0x0);
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
                    if ((uint)pUVar4->max_length <= uVar2) {
                      ThrowIndexOutOfRangeException();
                    }
                    pUVar4->m_Items[(int)uVar2] = item;
                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2,item);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                               (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
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
// 0x18221f330

System_String_array *
UI_CharacterHumanPanel__GetCharOptions(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSettings_o *pSVar1;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  
  if (Il2CppMethodInitialized_18434718d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434718d = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar1 != (Settings_HumanCustomSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Costume1Sets, pSVar2 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
     )) {
    pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                       ((Settings_SetSettingsContainer_T__o *)pSVar2,
                        (MethodInfo_C8EC20 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((pSVar1 != (Settings_HumanCustomSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).CustomSets, pSVar2 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
       )) {
      pSVar3 = Settings_SetSettingsContainer_object___GetSetNames
                         ((Settings_SetSettingsContainer_T__o *)pSVar2,
                          (MethodInfo_C8EC20 *)
                          MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
                   (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_string_AddRange);
        pUVar4 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetCharIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetCharIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x18221ecb0
// eh: try 0x18221efb2..0x18221f31d -> pad 0x183326990 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221f067: mov rdx, qword ptr [rip + 0x1e5746a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x18221f06e: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18221f073: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18221f078: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18221f07d: test rcx, rcx
// asm:   0x18221f080: jne 0x18221f31d
// asm:   0x18221f086: mov rsi, qword ptr [rsp + 0x58]
// asm:   0x18221f08b: mov r13, qword ptr [rsp + 0x60]
// asm:   0x18221f090: mov r12, qword ptr [rsp + 0x68]
// asm:   0x18221f095: mov r14d, dword ptr [rsp + 0xd8]
// asm:   0x18221f09d: mov rdi, qword ptr [rsp + 0x28]
// asm:   0x18221f0a2: test rdi, rdi
// asm:   0x18221f0a5: je 0x18221f1d1
// asm:   0x18221f31d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183326990: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183326995: push rbp
// asm:   0x183326996: sub rsp, 0x20
// asm:   0x18332699a: mov rbp, rdx
// asm:   0x18332699d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x1833269a1: mov rcx, qword ptr [rax]
// asm:   0x1833269a4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833269a8: movabs rax, 0
// asm:   0x1833269b2: add rsp, 0x20
// asm:   0x1833269b6: pop rbp
// asm:   0x1833269b7: ret 

System_String_array *
UI_CharacterHumanPanel__GetCharIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *obj;
  System_String_o *path1;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *collection;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  System_String_o *key;
  UnityEngine_Texture2D_o *x;
  System_String_o *pSVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  uint uVar9;
  System_Collections_Generic_List_Enumerator_object__o local_78;
  System_Collections_Generic_List_string__o *local_60;
  System_Collections_Generic_List_string__o *local_58;
  System_String_array *local_50;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if (Il2CppMethodInitialized_18434718e == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
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
    Il2CppMethodInitialized_18434718e = '\x01';
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).Costume1Sets, pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
     )) {
    collection = Settings_SetSettingsContainer_object___GetSetNames
                           ((Settings_SetSettingsContainer_T__o *)pSVar4,
                            (MethodInfo_C8EC20 *)
                            MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSetNames);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
       ((pSVar4 = (pSVar3->fields).CustomSets,
        pSVar4 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0 &&
        (obj = (pSVar4->fields).Sets, obj != (Settings_ListSetting_T__o *)0x0)))) {
      local_60 = __this_00;
      local_58 = __this_01;
      __this_02 = InterfaceInvoker0_Invoke
                            (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)obj);
      uVar9 = 0;
      local_50 = options;
      if (options != (System_String_array *)0x0) {
label_18221ef24:
        do {
          uVar1 = (uint)options->max_length;
          if ((int)uVar1 <= (int)uVar9) goto label_18221f2c7;
          if (uVar1 <= uVar9) {
            ThrowIndexOutOfRangeException();
          }
          if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
          pSVar7 = options->m_Items[(int)uVar9];
          bVar6 = System_Collections_Generic_List_object___Contains
                            ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar7,
                             (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
          if (!bVar6) {
            if (__this_02 == (System_Collections_Generic_List_T__o *)0x0) break;
            System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                      (&local_40,__this_02,
                       (MethodInfo_91F180 *)
                       MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
            local_78.fields._list = local_40.fields._list;
            local_78.fields._index = local_40.fields._index;
            local_78.fields._version = local_40.fields._version;
            local_78.fields._current = local_40.fields._current;
            do {
              bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (&local_78,
                                 (MethodInfo_153A2A0 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
              pIVar5 = local_78.fields._current;
              if (!bVar6) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_78,
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
                goto label_18221f1d1;
              }
              if (local_78.fields._current == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              bVar2 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
              if ((((local_78.fields._current)->klass->_2).typeHierarchyDepth < bVar2) ||
                 (((local_78.fields._current)->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
                il2cpp_codegen_raise_invalid_cast_exception(local_78.fields._current);
              }
              if (local_78.fields._current[3].klass == (Il2CppClass *)0x0) {
                ThrowNullReferenceException();
              }
              bVar6 = System_String__op_Equality
                                (((local_78.fields._current[3].klass)->_1).byval_arg.data,pSVar7,
                                 (MethodInfo *)0x0);
            } while (!bVar6);
            if (pIVar5[4].klass == (Il2CppClass *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar7 = ((pIVar5[4].klass)->_1).byval_arg.data;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_78,
                       MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
            if (pSVar7 != (System_String_o *)0x0) {
              key = System_String__Concat_1969e50("CharacterPreview_Human_",pSVar7,(MethodInfo *)0x0);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
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
                pSVar7 = System_IO_Path__Combine_1af2760(path1,"Human",pSVar7,(MethodInfo *)0x0)
                ;
                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                }
                x = ApplicationManagers_ResourceManager__LoadExternalTexture
                              (pSVar7,key,true,(MethodInfo *)0x0);
              }
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar6) {
                if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
                il2cpp_runtime_helper_180012890(__this_00,key,MethodInfo_System_Collections_Generic_List_string_Add);
                uVar9 = uVar9 + 1;
                goto label_18221ef24;
              }
            }
label_18221f1d1:
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pSVar7 = System_String__Concat_1969e50
                               (TypeInfo_Utility_ResourcePaths->static_fields->Characters,
                                "/Human/Previews/PresetNone",(MethodInfo *)0x0);
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
            il2cpp_runtime_helper_180012890(__this_00,pSVar7,MethodInfo_System_Collections_Generic_List_string_Add);
            uVar9 = uVar9 + 1;
            goto label_18221ef24;
          }
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar7 = System_String__Concat_1969b70
                             (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Human/Previews/Preset",
                              pSVar7,(MethodInfo *)0x0);
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) break;
          il2cpp_runtime_helper_180012890(__this_00,pSVar7,MethodInfo_System_Collections_Generic_List_string_Add);
          uVar9 = uVar9 + 1;
        } while( true );
      }
    }
  }
label_18221f2f8:
  ThrowNullReferenceException();
label_18221f2c7:
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    pUVar8 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_T__o *)__this_00,
                        (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    return (System_String_array *)pUVar8;
  }
  goto label_18221f2f8;
}


// UI.CharacterHumanPanel$$GetSpecialIcons
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialIcons (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x18221f460

System_String_array *
UI_CharacterHumanPanel__GetSpecialIcons
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *str0;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_18434718f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSpecials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Icons/Specials/");
    Il2CppMethodInitialized_18434718f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (options != (System_String_array *)0x0) {
    uVar7 = 0;
    while ((int)uVar7 < (int)options->max_length) {
      if ((uint)options->max_length <= uVar7) {
label_18221f632:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = options->m_Items[(int)uVar7];
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      str0 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
      if ((TypeInfo_Characters_HumanSpecials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSpecials);
      }
      pSVar5 = Characters_HumanSpecials__GetSpecialIcon(pSVar5,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969b70(str0,"/Icons/Specials/",pSVar5,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18221f62c;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) goto label_18221f62c;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_18221f632;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar5);
        uVar7 = uVar7 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar7 = uVar7 + 1;
      }
    }
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar6;
    }
  }
label_18221f62c:
  ThrowNullReferenceException();
}


// UI.CharacterHumanPanel$$GetSpecialTooltips
// il2cpp: System_String_array* UI_CharacterHumanPanel__GetSpecialTooltips (UI_CharacterHumanPanel_o* __this, System_String_array* options, const MethodInfo* method);
// 0x18221f640

System_String_array *
UI_CharacterHumanPanel__GetSpecialTooltips
          (UI_CharacterHumanPanel_o *__this,System_String_array *options,MethodInfo *method)

{
  System_Func_string__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_184347190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterHumanPanel_GetSpecialTooltips_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    Il2CppMethodInitialized_184347190 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterHumanPanel_GetSpecialTooltips_b__9_0,(MethodInfo_16E67D0 *)0x0);
  source = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                      (System_Func_TSource__TResult__o *)__this_00,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  pSVar1 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar1;
}


// UI.CharacterHumanPanel$$.ctor
// il2cpp: void UI_CharacterHumanPanel___ctor (UI_CharacterHumanPanel_o* __this, const MethodInfo* method);
// 0x182220860

void UI_CharacterHumanPanel___ctor(UI_CharacterHumanPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184347191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_184347191 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._statBars = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._statBars,__this_00);
  (__this->fields).LocaleCategory = "CharacterPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"CharacterPopup");
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterHumanPanel$$<GetSpecialTooltips>b__9_0
// il2cpp: System_String_o* UI_CharacterHumanPanel___GetSpecialTooltips_b__9_0 (UI_CharacterHumanPanel_o* __this, System_String_o* option, const MethodInfo* method);
// 0x1822207c0

System_String_o *
UI_CharacterHumanPanel___GetSpecialTooltips_b__9_0
          (UI_CharacterHumanPanel_o *__this,System_String_o *option,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SpecialTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347192 = '\x01';
  }
  pSVar1 = (__this->fields).LocaleCategory;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     (pSVar1,"SpecialTooltip",option,"","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


