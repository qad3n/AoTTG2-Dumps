// Type: UI.CharacterEditorHumanMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanMenu.cs
// --------------------------------

// UI.CharacterEditorHumanMenu$$Setup
// il2cpp: void UI_CharacterEditorHumanMenu__Setup (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821da5d0

void UI_CharacterEditorHumanMenu__Setup(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu__Setup((UI_CharacterEditorMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorHumanMenu__SetupPopups (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821da4b0

void UI_CharacterEditorHumanMenu__SetupPopups(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_CharacterEditorEditStatsPopup_o *value;
  UI_CharacterEditorEditPerksPopup_o *value_00;
  UI_PresetSkinEditPopup_o *value_01;
  UI_GlobalSkinEditPopup_o *value_02;
  
  if (Il2CppMethodInitialized_184346fa8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditPerksPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditStatsPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalSkinEditPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_PresetSkinEditPopup);
    Il2CppMethodInitialized_184346fa8 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value = UI_ElementFactory__CreateHeadedPanel_object_
                    (pUVar1,false,
                     (MethodInfo_6ABA40 *)
                     MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditStatsPopup);
  (__this->fields)._editStatsPopup = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._editStatsPopup,value);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_00 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar1,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditPerksPopup);
  (__this->fields)._editPerksPopup = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._editPerksPopup,value_00);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_01 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar1,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_PresetSkinEditPopup);
  (__this->fields)._editPresetSkinPopup = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._editPresetSkinPopup,value_01);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  value_02 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar1,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateDefaultPopup_GlobalSkinEditPopup);
  (__this->fields)._editGlobalSkinPopup = value_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._editGlobalSkinPopup,value_02);
  return;
}


// UI.CharacterEditorHumanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorHumanMenu__IsPopupActive (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821d9c60

bool UI_CharacterEditorHumanMenu__IsPopupActive(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  UI_CharacterEditorEditStatsPopup_o *pUVar3;
  UI_CharacterEditorEditPerksPopup_o *pUVar4;
  UI_PresetSkinEditPopup_o *pUVar5;
  UI_GlobalSkinEditPopup_o *pUVar6;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    if ((pUVar1->fields).IsActive != false) {
      return true;
    }
    pUVar2 = (__this->fields).IconPickPopup;
    if (pUVar2 != (UI_IconPickPopup_o *)0x0) {
      if ((pUVar2->fields).IsActive != false) {
        return true;
      }
      pUVar3 = (__this->fields)._editStatsPopup;
      if (pUVar3 != (UI_CharacterEditorEditStatsPopup_o *)0x0) {
        if ((pUVar3->fields).IsActive != false) {
          return true;
        }
        pUVar4 = (__this->fields)._editPerksPopup;
        if (pUVar4 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
          if ((pUVar4->fields).IsActive != false) {
            return true;
          }
          pUVar5 = (__this->fields)._editPresetSkinPopup;
          if (pUVar5 != (UI_PresetSkinEditPopup_o *)0x0) {
            if ((pUVar5->fields).IsActive != false) {
              return true;
            }
            pUVar6 = (__this->fields)._editGlobalSkinPopup;
            if (pUVar6 != (UI_GlobalSkinEditPopup_o *)0x0) {
              return (pUVar6->fields).IsActive;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorHumanMenu__RebuildPanels (UI_CharacterEditorHumanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x1821d9cf0

void UI_CharacterEditorHumanMenu__RebuildPanels
               (UI_CharacterEditorHumanMenu_o *__this,bool costumePopup,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_CharacterEditorCostumePanel_o *pUVar4;
  UI_CharacterEditorStatsPanel_o *pUVar5;
  UI_CharacterEditorSkinsPanel_o *pUVar6;
  UI_CharacterEditorHumanCategoryPanel_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_CharacterEditorEditStatsPopup_o *pUVar9;
  UI_CharacterEditorEditPerksPopup_o *pUVar10;
  UI_PresetSkinEditPopup_o *pUVar11;
  
  if (Il2CppMethodInitialized_184346fa9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorCostumePanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorHumanCategoryPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorStatsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditPerksPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditStatsPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_PresetSkinEditPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorCostumePanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorHumanCategoryPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorStatsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346fa9 = '\x01';
  }
  pUVar4 = (__this->fields)._costumePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._costumePanel;
    if (pUVar4 == (UI_CharacterEditorCostumePanel_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._statsPanel;
    if (pUVar5 == (UI_CharacterEditorStatsPanel_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._skinsPanel;
    if (pUVar6 == (UI_CharacterEditorSkinsPanel_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._categoryPanel;
    if (pUVar7 == (UI_CharacterEditorHumanCategoryPanel_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._editStatsPopup;
    if (pUVar9 == (UI_CharacterEditorEditStatsPopup_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._editPerksPopup;
    if (pUVar10 == (UI_CharacterEditorEditPerksPopup_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._editPresetSkinPopup;
    if (pUVar11 == (UI_PresetSkinEditPopup_o *)0x0) goto label_1821da19b;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar3,true,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorCostumePanel);
  if (pUVar4 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorCostumePanel);
    (__this->fields)._costumePanel = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._costumePanel,pUVar4);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar3,true,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorStatsPanel);
    if (pUVar5 != (UI_CharacterEditorStatsPanel_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorStatsPanel);
      (__this->fields)._statsPanel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._statsPanel,pUVar5);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar6 = UI_ElementFactory__CreateHeadedPanel_object_
                         (pUVar3,true,
                          (MethodInfo_6ABA40 *)
                          MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorSkinsPanel);
      if (pUVar6 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
        pUVar6 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar6,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorSkinsPanel);
        (__this->fields)._skinsPanel = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._skinsPanel,pUVar6);
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                           (pUVar3,true,
                            (MethodInfo_6ABA40 *)
                            MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorHumanCategoryPanel);
        if (pUVar7 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
          pUVar7 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar7,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorHumanCategoryPanel)
          ;
          (__this->fields)._categoryPanel = pUVar7;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryPanel,pUVar7);
          pUVar4 = (__this->fields)._costumePanel;
          if (pUVar4 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar8,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
            pUVar5 = (__this->fields)._statsPanel;
            if (pUVar5 != (UI_CharacterEditorStatsPanel_o *)0x0) {
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar8,2,2,(UnityEngine_Vector2_o)0xc3be0000c1a00000,(MethodInfo *)0x0);
              pUVar6 = (__this->fields)._skinsPanel;
              if (pUVar6 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar8,2,2,(UnityEngine_Vector2_o)0xc43e0000c1a00000,(MethodInfo *)0x0);
                pUVar7 = (__this->fields)._categoryPanel;
                if (pUVar7 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                  UI_ElementFactory__SetAnchor
                            (pUVar8,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                                     (pUVar3,false,
                                      (MethodInfo_6ABA40 *)
                                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditStatsPopup
                                     );
                  (__this->fields)._editStatsPopup = pUVar9;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._editStatsPopup,pUVar9);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar10 = UI_ElementFactory__CreateHeadedPanel_object_
                                      (pUVar3,false,
                                       (MethodInfo_6ABA40 *)
                                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_CharacterEditorEditPerksPopup
                                      );
                  (__this->fields)._editPerksPopup = pUVar10;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._editPerksPopup,pUVar10);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar11 = UI_ElementFactory__CreateHeadedPanel_object_
                                      (pUVar3,false,
                                       (MethodInfo_6ABA40 *)
                                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_PresetSkinEditPopup);
                  (__this->fields)._editPresetSkinPopup = pUVar11;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._editPresetSkinPopup,pUVar11);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1821da19b:
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacter (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x1821da330

void UI_CharacterEditorHumanMenu__ResetCharacter
               (UI_CharacterEditorHumanMenu_o *__this,bool fullReset,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  Characters_DummyCharacter_o *__this_01;
  Settings_IntSetting_o *pSVar4;
  Settings_HumanCustomSet_o *customSet;
  
  if (Il2CppMethodInitialized_184346faa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346faa = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_00,
                           (MethodInfo_C8EAF0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(customSet);
      }
    }
    pGVar3 = (__this->fields)._gameManager;
    if ((pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (__this_01 = (pGVar3->fields).Character, __this_01 != (Characters_DummyCharacter_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      pSVar4 = (__this->fields).Weapon;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) && ((*(uint64_t *)((char *)__this_01 + 0x38)) != (Characters_HumanSetup_o *)0x0)
         ) {
        Characters_HumanSetup__Load
                  ((*(uint64_t *)((char *)__this_01 + 0x38)),customSet,(pSVar4->fields)._value,false,(MethodInfo *)0x0);
        if (fullReset) {
          Characters_DummyCharacter__Idle(__this_01,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$ResetCharacterWithSkins
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x1821da1b0

void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins
               (UI_CharacterEditorHumanMenu_o *__this,bool fullReset,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Characters_DummyHuman_o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346fab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346fab = '\x01';
  }
  if (fullReset) {
    __this_01 = (GameManagers_CharacterEditorGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,true,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_GameManagers_CharacterEditorGameManager);
    }
  }
  else {
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2);
      }
      __this_00 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar2 + 0x38));
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMinMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821d9c30

float
UI_CharacterEditorHumanMenu__GetMinMouseX(UI_CharacterEditorHumanMenu_o* __this, MethodInfo* method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._costumePanel;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    fVar1 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return fVar1 + 20.0;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMaxMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821d9bd0

float UI_CharacterEditorHumanMenu__GetMaxMouseX(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorHumanCategoryPanel_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_00 = (__this->fields)._categoryPanel;
  if (__this_00 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) - 20.0;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanMenu$$.ctor
// il2cpp: void UI_CharacterEditorHumanMenu___ctor (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x1821da5e0

void UI_CharacterEditorHumanMenu___ctor(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184346fac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_184346fac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(__this_00,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Weapon = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Weapon,__this_00);
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


