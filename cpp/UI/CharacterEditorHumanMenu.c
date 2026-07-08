// Type: UI.CharacterEditorHumanMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorHumanMenu$$Setup
// il2cpp: void UI_CharacterEditorHumanMenu__Setup (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x40536b0

void UI_CharacterEditorHumanMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu__Setup(__this,method);
  return;
}


// UI.CharacterEditorHumanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorHumanMenu__SetupPopups (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x40537c0

void UI_CharacterEditorHumanMenu__SetupPopups
               (UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_CharacterEditorEditStatsPopup_o *pUVar2;
  UI_CharacterEditorEditPerksPopup_o *pUVar3;
  UI_PresetSkinEditPopup_o *pUVar4;
  UI_GlobalSkinEditPopup_o *pUVar5;
  
  if (DAT_0570442b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup);
    il2cpp_init_method_metadata(&MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSki);
    il2cpp_init_method_metadata(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSki);
    DAT_0570442b = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = (UI_CharacterEditorEditStatsPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup);
  (__this->fields)._editStatsPopup = pUVar2;
  il2cpp_runtime_glue(&(__this->fields)._editStatsPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar3 = (UI_CharacterEditorEditPerksPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup);
  (__this->fields)._editPerksPopup = pUVar3;
  il2cpp_runtime_glue(&(__this->fields)._editPerksPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar4 = (UI_PresetSkinEditPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSki);
  (__this->fields)._editPresetSkinPopup = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._editPresetSkinPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar5 = (UI_GlobalSkinEditPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar1,0,MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSki);
  (__this->fields)._editGlobalSkinPopup = pUVar5;
  il2cpp_runtime_glue(&(__this->fields)._editGlobalSkinPopup,pUVar5);
  return;
}


// UI.CharacterEditorHumanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorHumanMenu__IsPopupActive (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x40538f0

bool_conflict
UI_CharacterEditorHumanMenu__IsPopupActive(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  UI_CharacterEditorEditStatsPopup_o *pUVar3;
  UI_CharacterEditorEditPerksPopup_o *pUVar4;
  UI_PresetSkinEditPopup_o *pUVar5;
  UI_GlobalSkinEditPopup_o *pUVar6;
  bool_conflict bVar7;
  undefined8 in_RAX;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    bVar7 = (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    if ((char)(pUVar1->fields).IsActive == '\0') {
      pUVar2 = (__this->fields).IconPickPopup;
      if (pUVar2 == (UI_IconPickPopup_o *)0x0) goto LAB_04053971;
      if ((char)(pUVar2->fields).IsActive == '\0') {
        pUVar3 = (__this->fields)._editStatsPopup;
        if (pUVar3 == (UI_CharacterEditorEditStatsPopup_o *)0x0) goto LAB_04053971;
        if ((char)(pUVar3->fields).IsActive == '\0') {
          pUVar4 = (__this->fields)._editPerksPopup;
          if (pUVar4 == (UI_CharacterEditorEditPerksPopup_o *)0x0) goto LAB_04053971;
          if ((char)(pUVar4->fields).IsActive == '\0') {
            pUVar5 = (__this->fields)._editPresetSkinPopup;
            if (pUVar5 == (UI_PresetSkinEditPopup_o *)0x0) goto LAB_04053971;
            if ((char)(pUVar5->fields).IsActive == '\0') {
              pUVar6 = (__this->fields)._editGlobalSkinPopup;
              if (pUVar6 == (UI_GlobalSkinEditPopup_o *)0x0) goto LAB_04053971;
              bVar7 = (bool_conflict)
                      CONCAT71((int7)((ulong)pUVar6 >> 8),(char)(pUVar6->fields).IsActive != '\0');
            }
          }
        }
      }
    }
    return bVar7;
  }
LAB_04053971:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorHumanMenu__RebuildPanels (UI_CharacterEditorHumanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x40539c0

void UI_CharacterEditorHumanMenu__RebuildPanels
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o **ppUVar1;
  UI_CharacterEditorStatsPanel_o **ppUVar2;
  UI_CharacterEditorSkinsPanel_o **ppUVar3;
  UI_CharacterEditorHumanCategoryPanel_o **ppUVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Component_o *pUVar8;
  UI_CharacterEditorCostumePanel_o *pUVar9;
  UI_CharacterEditorStatsPanel_o *pUVar10;
  UI_CharacterEditorSkinsPanel_o *pUVar11;
  UI_CharacterEditorHumanCategoryPanel_o *pUVar12;
  UnityEngine_GameObject_o *pUVar13;
  UI_CharacterEditorEditStatsPopup_o *pUVar14;
  UI_CharacterEditorEditPerksPopup_o *pUVar15;
  UI_PresetSkinEditPopup_o *pUVar16;
  
  if (DAT_0570442c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorCostumePanel_GetComponent_Charact);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_C);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorSkinsPanel_GetComponent_Character);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorStatsPanel_GetComponent_Character);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup);
    il2cpp_init_method_metadata(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSki);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_Ch);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPa);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_Char);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_Char);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570442c = '\x01';
  }
  pUVar9 = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar9 = *ppUVar1;
    if (pUVar9 == (UI_CharacterEditorCostumePanel_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._statsPanel;
    if (pUVar10 == (UI_CharacterEditorStatsPanel_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar11 = (__this->fields)._skinsPanel;
    if (pUVar11 == (UI_CharacterEditorSkinsPanel_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar12 = (__this->fields)._categoryPanel;
    if (pUVar12 == (UI_CharacterEditorHumanCategoryPanel_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar14 = (__this->fields)._editStatsPopup;
    if (pUVar14 == (UI_CharacterEditorEditStatsPopup_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar15 = (__this->fields)._editPerksPopup;
    if (pUVar15 == (UI_CharacterEditorEditPerksPopup_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
    pUVar16 = (__this->fields)._editPresetSkinPopup;
    if (pUVar16 == (UI_PresetSkinEditPopup_o *)0x0) goto LAB_04053e50;
    pUVar6 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar6,(MethodInfo *)0x0);
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar8 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,1,MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_Ch);
  if (pUVar8 != (UnityEngine_Component_o *)0x0) {
    pUVar9 = (UI_CharacterEditorCostumePanel_o *)
             UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_CharacterEditorCostumePanel_GetComponent_Charact);
    (__this->fields)._costumePanel = pUVar9;
    il2cpp_runtime_glue(ppUVar1);
    pUVar7 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,1,MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_Char);
    if (pUVar8 != (UnityEngine_Component_o *)0x0) {
      pUVar10 = (UI_CharacterEditorStatsPanel_o *)
                UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_CharacterEditorStatsPanel_GetComponent_Character);
      ppUVar2 = &(__this->fields)._statsPanel;
      (__this->fields)._statsPanel = pUVar10;
      il2cpp_runtime_glue(ppUVar2);
      pUVar7 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar8 = (UnityEngine_Component_o *)
               UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,1,MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_Char);
      if (pUVar8 != (UnityEngine_Component_o *)0x0) {
        pUVar11 = (UI_CharacterEditorSkinsPanel_o *)
                  UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_CharacterEditorSkinsPanel_GetComponent_Character);
        ppUVar3 = &(__this->fields)._skinsPanel;
        (__this->fields)._skinsPanel = pUVar11;
        il2cpp_runtime_glue(ppUVar3);
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Component_o *)
                 UI_ElementFactory__CreateHeadedPanel<object>(pUVar7,1,MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPa);
        if (pUVar8 != (UnityEngine_Component_o *)0x0) {
          pUVar12 = (UI_CharacterEditorHumanCategoryPanel_o *)
                    UnityEngine_Component__GetComponent<object>(pUVar8,MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_C);
          ppUVar4 = &(__this->fields)._categoryPanel;
          (__this->fields)._categoryPanel = pUVar12;
          il2cpp_runtime_glue(ppUVar4);
          pUVar9 = (__this->fields)._costumePanel;
          if (pUVar9 != (UI_CharacterEditorCostumePanel_o *)0x0) {
            pUVar13 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar13,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
            pUVar10 = *ppUVar2;
            if (pUVar10 != (UI_CharacterEditorStatsPanel_o *)0x0) {
              pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar13,2,2,(UnityEngine_Vector2_o)0xc3be0000c1a00000,(MethodInfo *)0x0);
              pUVar11 = *ppUVar3;
              if (pUVar11 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
                pUVar13 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar13,2,2,(UnityEngine_Vector2_o)0xc43e0000c1a00000,(MethodInfo *)0x0);
                pUVar12 = *ppUVar4;
                if (pUVar12 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
                  pUVar13 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
                  UI_ElementFactory__SetAnchor
                            (pUVar13,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0
                            );
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar14 = (UI_CharacterEditorEditStatsPopup_o *)
                            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup);
                  (__this->fields)._editStatsPopup = pUVar14;
                  il2cpp_runtime_glue(&(__this->fields)._editStatsPopup);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar15 = (UI_CharacterEditorEditPerksPopup_o *)
                            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup);
                  (__this->fields)._editPerksPopup = pUVar15;
                  il2cpp_runtime_glue(&(__this->fields)._editPerksPopup);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar16 = (UI_PresetSkinEditPopup_o *)
                            UI_ElementFactory__CreateDefaultPopup<object>(pUVar7,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSki);
                  (__this->fields)._editPresetSkinPopup = pUVar16;
                  il2cpp_runtime_glue(&(__this->fields)._editPresetSkinPopup,pUVar16);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04053e50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacter (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4053e60

void UI_CharacterEditorHumanMenu__ResetCharacter
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  Characters_DummyCharacter_o *__this_01;
  Settings_IntSetting_o *pSVar4;
  Settings_HumanCustomSet_o *customSet;
  
  if (DAT_0570442d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570442d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((customSet->klass->_2).naturalAligment < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(customSet);
      }
    }
    pGVar3 = (__this->fields)._gameManager;
    if ((pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
       (__this_01 = (pGVar3->fields).Character, __this_01 != (Characters_DummyCharacter_o *)0x0)) {
      bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_01);
      }
      pSVar4 = (__this->fields).Weapon;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         (__this_01[1].monitor != (Characters_HumanSetup_o *)0x0)) {
        Characters_HumanSetup__Load
                  (__this_01[1].monitor,customSet,(pSVar4->fields)._value,0,(MethodInfo *)0x0);
        if ((char)fullReset != '\0') {
          Characters_DummyCharacter__Idle(__this_01,(MethodInfo *)0x0);
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$ResetCharacterWithSkins
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4053fc0

void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  Characters_DummyHuman_o *__this_01;
  bool_conflict bVar2;
  
  if (DAT_0570442e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570442e = '\x01';
  }
  __this_00 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10)
  ;
  if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    if ((char)fullReset != '\0') {
      GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (Characters_DummyHuman_o *)(__this_00->fields).Character;
    if (__this_01 != (Characters_DummyHuman_o *)0x0) {
      bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_01);
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (__this_01 != (Characters_DummyHuman_o *)0x0) {
      Characters_DummyHuman__LoadSkin(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMinMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x40540e0

float UI_CharacterEditorHumanMenu__GetMinMouseX
                (UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._costumePanel;
  if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    fVar1 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return fVar1 + 20.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMaxMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4054110

float UI_CharacterEditorHumanMenu__GetMaxMouseX
                (UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorHumanCategoryPanel_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_00 = (__this->fields)._categoryPanel;
  if (__this_00 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanMenu$$.ctor
// il2cpp: void UI_CharacterEditorHumanMenu___ctor (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4054160

void UI_CharacterEditorHumanMenu___ctor(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  
  if (DAT_0570442f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    DAT_0570442f = '\x01';
  }
  __this_00 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(__this_00,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Weapon = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Weapon);
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


