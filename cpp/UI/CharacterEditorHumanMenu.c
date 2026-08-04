// Type: UI.CharacterEditorHumanMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanMenu.cs
// --------------------------------

// UI.CharacterEditorHumanMenu$$Setup
// il2cpp: void UI_CharacterEditorHumanMenu__Setup (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361530

void UI_CharacterEditorHumanMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorMenu__Setup(__this,method);
  return;
}


// UI.CharacterEditorHumanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorHumanMenu__SetupPopups (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361640

void UI_CharacterEditorHumanMenu__SetupPopups(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UI_CharacterEditorEditStatsPopup_o *pUVar2;
  UI_CharacterEditorEditPerksPopup_o *pUVar3;
  UI_PresetSkinEditPopup_o *pUVar4;
  UI_GlobalSkinEditPopup_o *pUVar5;
  
  if (g_data_057ae1a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSkinEditPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
    g_data_057ae1a5 = '\x01';
  }
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (UI_CharacterEditorEditStatsPopup_o *)
           UI_ElementFactory__CreateDefaultPopup_object_(pUVar1,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
  (__this->fields)._editStatsPopup = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._editStatsPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = (UI_CharacterEditorEditPerksPopup_o *)
           UI_ElementFactory__CreateDefaultPopup_object_(pUVar1,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
  (__this->fields)._editPerksPopup = pUVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._editPerksPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = (UI_PresetSkinEditPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar1,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
  (__this->fields)._editPresetSkinPopup = pUVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._editPresetSkinPopup);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar5 = (UI_GlobalSkinEditPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar1,0,MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSkinEditPop);
  (__this->fields)._editGlobalSkinPopup = pUVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._editGlobalSkinPopup,pUVar5);
  return;
}


// UI.CharacterEditorHumanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorHumanMenu__IsPopupActive (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361770

bool_conflict
UI_CharacterEditorHumanMenu__IsPopupActive(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o **ppUVar1;
  UI_CharacterEditorStatsPanel_o **ppUVar2;
  UI_CharacterEditorSkinsPanel_o **ppUVar3;
  UI_CharacterEditorHumanCategoryPanel_o **ppUVar4;
  byte bVar5;
  UI_SelectListPopup_o *pUVar6;
  UI_IconPickPopup_o *pUVar7;
  UI_GlobalSkinEditPopup_o *pUVar8;
  UI_CharacterEditorHumanCategoryPanel_o *pUVar9;
  long lVar10;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  char cVar11;
  bool_conflict extraout_EAX;
  bool_conflict bVar12;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  System_Collections_Generic_List_object__o *__this_02;
  undefined8 in_RAX;
  undefined8 uVar13;
  UnityEngine_Object_o *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  UnityEngine_Component_o *pUVar16;
  UI_CharacterEditorCostumePanel_o *pUVar17;
  UI_CharacterEditorStatsPanel_o *pUVar18;
  UI_CharacterEditorSkinsPanel_o *pUVar19;
  UnityEngine_GameObject_o *pUVar20;
  UI_CharacterEditorEditStatsPopup_o *pUVar21;
  UI_CharacterEditorEditPerksPopup_o *pUVar22;
  UI_PresetSkinEditPopup_o *pUVar23;
  Settings_HumanCustomSet_o *customSet;
  Settings_IntSetting_o *__this_03;
  Characters_DummyHuman_o *__this_04;
  Characters_DummyCharacter_o *unaff_RBP;
  Il2CppClass *pIVar24;
  Characters_DummyHuman_c *__this_05;
  UI_BasePanel_o *__this_06;
  
  pUVar6 = (__this->fields).SelectListPopup;
  if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
    bVar12 = (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    if ((char)(pUVar6->fields).IsActive != '\0') {
      return bVar12;
    }
    pUVar7 = (__this->fields).IconPickPopup;
    if (pUVar7 != (UI_IconPickPopup_o *)0x0) {
      if ((char)(pUVar7->fields).IsActive != '\0') {
        return bVar12;
      }
      pUVar21 = (__this->fields)._editStatsPopup;
      if (pUVar21 != (UI_CharacterEditorEditStatsPopup_o *)0x0) {
        if ((char)(pUVar21->fields).IsActive != '\0') {
          return bVar12;
        }
        pUVar22 = (__this->fields)._editPerksPopup;
        if (pUVar22 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
          if ((char)(pUVar22->fields).IsActive != '\0') {
            return bVar12;
          }
          pUVar23 = (__this->fields)._editPresetSkinPopup;
          if (pUVar23 != (UI_PresetSkinEditPopup_o *)0x0) {
            if ((char)(pUVar23->fields).IsActive != '\0') {
              return bVar12;
            }
            pUVar8 = (__this->fields)._editGlobalSkinPopup;
            if (pUVar8 != (UI_GlobalSkinEditPopup_o *)0x0) {
              return (bool_conflict)
                     CONCAT71((int7)((ulong)pUVar8 >> 8),(char)(pUVar8->fields).IsActive != '\0');
            }
          }
        }
      }
    }
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  pUVar6 = (__this->fields).SelectListPopup;
  if (pUVar6 != (UI_SelectListPopup_o *)0x0) {
    if ((char)(pUVar6->fields).IsActive != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)uVar13 >> 8),1);
    }
    pUVar7 = (__this->fields).IconPickPopup;
    if (pUVar7 != (UI_IconPickPopup_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar7 >> 8),(char)(pUVar7->fields).IsActive != '\0');
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorCostumePanel_GetComponent_CharacterEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_Character);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorSkinsPanel_GetComponent_CharacterEditorSk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorStatsPanel_GetComponent_CharacterEditorSt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_CharacterE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPanel_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_CharacterEdi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_CharacterEdi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1a6 = '\x01';
  }
  pUVar17 = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  pIVar24 = (Il2CppClass *)0x0;
  bVar12 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_04361a22:
    pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pIVar24 = (Il2CppClass *)0x1;
    pUVar16 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,1,MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_CharacterE);
    if (pUVar16 != (UnityEngine_Component_o *)0x0) {
      pUVar17 = (UI_CharacterEditorCostumePanel_o *)
                UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CharacterEditorCostumePanel_GetComponent_CharacterEditor);
      (__this->fields)._costumePanel = pUVar17;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pIVar24 = (Il2CppClass *)0x1;
      pUVar16 = (UnityEngine_Component_o *)
                UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,1,MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_CharacterEdi);
      if (pUVar16 != (UnityEngine_Component_o *)0x0) {
        pUVar18 = (UI_CharacterEditorStatsPanel_o *)
                  UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CharacterEditorStatsPanel_GetComponent_CharacterEditorSt);
        ppUVar2 = &(__this->fields)._statsPanel;
        (__this->fields)._statsPanel = pUVar18;
        il2cpp_runtime_helper_022b4080(ppUVar2);
        pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pIVar24 = (Il2CppClass *)0x1;
        pUVar16 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,1,MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_CharacterEdi);
        if (pUVar16 != (UnityEngine_Component_o *)0x0) {
          pUVar19 = (UI_CharacterEditorSkinsPanel_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CharacterEditorSkinsPanel_GetComponent_CharacterEditorSk);
          ppUVar3 = &(__this->fields)._skinsPanel;
          (__this->fields)._skinsPanel = pUVar19;
          il2cpp_runtime_helper_022b4080(ppUVar3);
          pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pIVar24 = (Il2CppClass *)0x1;
          pUVar16 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_(pUVar15,1,MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPanel_Char);
          if (pUVar16 != (UnityEngine_Component_o *)0x0) {
            pIVar24 = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(pUVar16,MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_Character);
            ppUVar4 = &(__this->fields)._categoryPanel;
            (__this->fields)._categoryPanel = (UI_CharacterEditorHumanCategoryPanel_o *)pIVar24;
            il2cpp_runtime_helper_022b4080(ppUVar4);
            pUVar17 = (__this->fields)._costumePanel;
            pUVar15 = (UnityEngine_Transform_o *)0x0;
            if (pUVar17 != (UI_CharacterEditorCostumePanel_o *)0x0) {
              pUVar20 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
              pIVar24 = (Il2CppClass *)0x0;
              UI_ElementFactory__SetAnchor
                        (pUVar20,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
              pUVar18 = *ppUVar2;
              pUVar15 = (UnityEngine_Transform_o *)0x0;
              if (pUVar18 != (UI_CharacterEditorStatsPanel_o *)0x0) {
                pUVar20 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                pIVar24 = (Il2CppClass *)0x2;
                UI_ElementFactory__SetAnchor
                          (pUVar20,2,2,(UnityEngine_Vector2_o)0xc3be0000c1a00000,(MethodInfo *)0x0);
                pUVar19 = *ppUVar3;
                pUVar15 = (UnityEngine_Transform_o *)0x0;
                if (pUVar19 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
                  pUVar20 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                  pIVar24 = (Il2CppClass *)0x2;
                  UI_ElementFactory__SetAnchor
                            (pUVar20,2,2,(UnityEngine_Vector2_o)0xc43e0000c1a00000,(MethodInfo *)0x0);
                  pUVar9 = *ppUVar4;
                  pUVar15 = (UnityEngine_Transform_o *)0x0;
                  if (pUVar9 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
                    pUVar20 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar20,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
                    pUVar15 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar21 = (UI_CharacterEditorEditStatsPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
                    (__this->fields)._editStatsPopup = pUVar21;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._editStatsPopup);
                    pUVar15 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar22 = (UI_CharacterEditorEditPerksPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
                    (__this->fields)._editPerksPopup = pUVar22;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._editPerksPopup);
                    pUVar15 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar23 = (UI_PresetSkinEditPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar15,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
                    (__this->fields)._editPresetSkinPopup = pUVar23;
                    bVar12 = il2cpp_runtime_helper_022b4080(&(__this->fields)._editPresetSkinPopup,pUVar23);
                    return bVar12;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    pUVar17 = *ppUVar1;
    pUVar15 = (UnityEngine_Transform_o *)0x0;
    if (pUVar17 != (UI_CharacterEditorCostumePanel_o *)0x0) {
      pUVar14 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar24 = (Il2CppClass *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
      pUVar18 = (__this->fields)._statsPanel;
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      if (pUVar18 != (UI_CharacterEditorStatsPanel_o *)0x0) {
        pUVar14 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
        pIVar24 = (Il2CppClass *)0x0;
        UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
        pUVar19 = (__this->fields)._skinsPanel;
        pUVar15 = (UnityEngine_Transform_o *)0x0;
        if (pUVar19 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
          pUVar14 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
          pIVar24 = (Il2CppClass *)0x0;
          UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
          pUVar9 = (__this->fields)._categoryPanel;
          pUVar15 = (UnityEngine_Transform_o *)0x0;
          if (pUVar9 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
            pUVar14 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            pIVar24 = (Il2CppClass *)0x0;
            UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
            pUVar21 = (__this->fields)._editStatsPopup;
            pUVar15 = (UnityEngine_Transform_o *)0x0;
            if (pUVar21 != (UI_CharacterEditorEditStatsPopup_o *)0x0) {
              pUVar14 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar21,(MethodInfo *)0x0);
              pIVar24 = (Il2CppClass *)0x0;
              UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
              pUVar22 = (__this->fields)._editPerksPopup;
              pUVar15 = (UnityEngine_Transform_o *)0x0;
              if (pUVar22 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
                pUVar14 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar22,(MethodInfo *)0x0);
                pIVar24 = (Il2CppClass *)0x0;
                UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
                pUVar23 = (__this->fields)._editPresetSkinPopup;
                pUVar15 = (UnityEngine_Transform_o *)0x0;
                if (pUVar23 != (UI_PresetSkinEditPopup_o *)0x0) {
                  pUVar14 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar23,(MethodInfo *)0x0);
                  UnityEngine_Object__Destroy_4e01c60(pUVar14,(MethodInfo *)0x0);
                  goto label_04361a22;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cVar11 = (char)pIVar24;
  if (g_data_057ae1a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1a7 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar10 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar10 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_04361e24;
  pIVar24 = MethodInfo_BaseSetSetting_GetSelectedSet;
  customSet = (Settings_HumanCustomSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
  if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_04361da7:
    if ((pUVar15[6].monitor == (void *)0x0) ||
       (unaff_RBP = *(Characters_DummyCharacter_o **)((long)pUVar15[6].monitor + 0x38),
       unaff_RBP == (Characters_DummyCharacter_o *)0x0)) {
label_04361e24:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar5 = (TypeInfo_DummyHuman->_2).naturalAligment;
      pIVar24 = TypeInfo_DummyHuman;
      if ((bVar5 <= (unaff_RBP->klass->_2).naturalAligment) &&
         ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_DummyHuman)) {
        if ((pUVar15[9].monitor != (void *)0x0) && (unaff_RBP[1].monitor != (Characters_HumanSetup_o *)0x0)) {
          Characters_HumanSetup__Load
                    (unaff_RBP[1].monitor,customSet,*(int32_t *)((long)pUVar15[9].monitor + 0x14),0,
                     (MethodInfo *)0x0);
          if (cVar11 == '\0') {
            return extraout_EAX_00;
          }
          Characters_DummyCharacter__Idle(unaff_RBP,(MethodInfo *)0x0);
          return extraout_EAX_01;
        }
        goto label_04361e24;
      }
    }
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
    bVar5 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar24 = TypeInfo_HumanCustomSet;
    if ((bVar5 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_HumanCustomSet)) goto label_04361da7;
  }
  il2cpp_runtime_helper_022b2fd0(customSet);
  __this_04 = (Characters_DummyHuman_o *)((ulong)pIVar24 & 0xffffffff);
  if (g_data_057ae1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1a8 = '\x01';
  }
  __this_01 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar5 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar5) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_CharacterEditorGameManager)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      if ((char)__this_04 != '\0') {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
      __this_04 = (Characters_DummyHuman_o *)(__this_01->fields).Character;
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        bVar5 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (((__this_04->klass->_2).naturalAligment < bVar5) ||
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_DummyHuman)) goto label_04361f52;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return bVar12;
      }
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_04,(MethodInfo *)0x0);
        return extraout_EAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04361f52:
  bVar12 = il2cpp_runtime_helper_022b2fd0();
  __this_05 = __this_04[2].klass;
  if (__this_05 != (Characters_DummyHuman_c *)0x0) {
    UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_05,(MethodInfo *)0x0);
    return bVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_06 = __this_05->static_fields;
  if (__this_06 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae1a9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      g_data_057ae1a9 = '\x01';
    }
    __this_03 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
    Settings_IntSetting___ctor_40f39a0(__this_03,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
    __this_06[2].fields.m_CachedPtr = (intptr_t)__this_03;
    il2cpp_runtime_helper_022b4080(&__this_06[2].fields,__this_03);
    if (g_data_057ae015 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      g_data_057ae015 = '\x01';
    }
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UI_BasePopup);
    (__this_06->fields).SinglePanel = (UnityEngine_Transform_o *)__this_02;
    il2cpp_runtime_helper_022b4080(&(__this_06->fields).SinglePanel);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  UI_BasePanel__GetPhysicalWidth(__this_06,(MethodInfo *)0x0);
  return extraout_EAX_04;
}


// UI.CharacterEditorHumanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorHumanMenu__RebuildPanels (UI_CharacterEditorHumanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x4361840

void UI_CharacterEditorHumanMenu__RebuildPanels
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  UI_CharacterEditorCostumePanel_o **ppUVar1;
  UI_CharacterEditorStatsPanel_o **ppUVar2;
  UI_CharacterEditorSkinsPanel_o **ppUVar3;
  UI_CharacterEditorHumanCategoryPanel_o **ppUVar4;
  byte bVar5;
  UI_CharacterEditorHumanCategoryPanel_o *pUVar6;
  long lVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  char cVar8;
  bool_conflict bVar9;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Component_o *pUVar12;
  UI_CharacterEditorCostumePanel_o *pUVar13;
  UI_CharacterEditorStatsPanel_o *pUVar14;
  UI_CharacterEditorSkinsPanel_o *pUVar15;
  UnityEngine_GameObject_o *pUVar16;
  UI_CharacterEditorEditStatsPopup_o *pUVar17;
  UI_CharacterEditorEditPerksPopup_o *pUVar18;
  UI_PresetSkinEditPopup_o *pUVar19;
  Settings_HumanCustomSet_o *customSet;
  Settings_IntSetting_o *__this_03;
  Characters_DummyHuman_o *__this_04;
  Characters_DummyCharacter_o *unaff_RBP;
  Il2CppClass *pIVar20;
  Characters_DummyHuman_c *__this_05;
  UI_BasePanel_o *__this_06;
  
  if (g_data_057ae1a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorCostumePanel_GetComponent_CharacterEditor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_Character);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorSkinsPanel_GetComponent_CharacterEditorSk);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorStatsPanel_GetComponent_CharacterEditorSt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_CharacterE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPanel_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_CharacterEdi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_CharacterEdi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1a6 = '\x01';
  }
  pUVar13 = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  pIVar20 = (Il2CppClass *)0x0;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_04361a22:
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pIVar20 = (Il2CppClass *)0x1;
    pUVar12 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,1,MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_CharacterE);
    if (pUVar12 != (UnityEngine_Component_o *)0x0) {
      pUVar13 = (UI_CharacterEditorCostumePanel_o *)
                UnityEngine_Component__GetComponent_object_(pUVar12,MethodInfo_CharacterEditorCostumePanel_GetComponent_CharacterEditor);
      (__this->fields)._costumePanel = pUVar13;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pIVar20 = (Il2CppClass *)0x1;
      pUVar12 = (UnityEngine_Component_o *)
                UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,1,MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_CharacterEdi);
      if (pUVar12 != (UnityEngine_Component_o *)0x0) {
        pUVar14 = (UI_CharacterEditorStatsPanel_o *)
                  UnityEngine_Component__GetComponent_object_(pUVar12,MethodInfo_CharacterEditorStatsPanel_GetComponent_CharacterEditorSt);
        ppUVar2 = &(__this->fields)._statsPanel;
        (__this->fields)._statsPanel = pUVar14;
        il2cpp_runtime_helper_022b4080(ppUVar2);
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pIVar20 = (Il2CppClass *)0x1;
        pUVar12 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,1,MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_CharacterEdi);
        if (pUVar12 != (UnityEngine_Component_o *)0x0) {
          pUVar15 = (UI_CharacterEditorSkinsPanel_o *)
                    UnityEngine_Component__GetComponent_object_(pUVar12,MethodInfo_CharacterEditorSkinsPanel_GetComponent_CharacterEditorSk);
          ppUVar3 = &(__this->fields)._skinsPanel;
          (__this->fields)._skinsPanel = pUVar15;
          il2cpp_runtime_helper_022b4080(ppUVar3);
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pIVar20 = (Il2CppClass *)0x1;
          pUVar12 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_(pUVar11,1,MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPanel_Char);
          if (pUVar12 != (UnityEngine_Component_o *)0x0) {
            pIVar20 = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(pUVar12,MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_Character);
            ppUVar4 = &(__this->fields)._categoryPanel;
            (__this->fields)._categoryPanel = (UI_CharacterEditorHumanCategoryPanel_o *)pIVar20;
            il2cpp_runtime_helper_022b4080(ppUVar4);
            pUVar13 = (__this->fields)._costumePanel;
            pUVar11 = (UnityEngine_Transform_o *)0x0;
            if (pUVar13 != (UI_CharacterEditorCostumePanel_o *)0x0) {
              pUVar16 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
              pIVar20 = (Il2CppClass *)0x0;
              UI_ElementFactory__SetAnchor
                        (pUVar16,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
              pUVar14 = *ppUVar2;
              pUVar11 = (UnityEngine_Transform_o *)0x0;
              if (pUVar14 != (UI_CharacterEditorStatsPanel_o *)0x0) {
                pUVar16 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
                pIVar20 = (Il2CppClass *)0x2;
                UI_ElementFactory__SetAnchor
                          (pUVar16,2,2,(UnityEngine_Vector2_o)0xc3be0000c1a00000,(MethodInfo *)0x0);
                pUVar15 = *ppUVar3;
                pUVar11 = (UnityEngine_Transform_o *)0x0;
                if (pUVar15 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
                  pUVar16 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                  pIVar20 = (Il2CppClass *)0x2;
                  UI_ElementFactory__SetAnchor
                            (pUVar16,2,2,(UnityEngine_Vector2_o)0xc43e0000c1a00000,(MethodInfo *)0x0);
                  pUVar6 = *ppUVar4;
                  pUVar11 = (UnityEngine_Transform_o *)0x0;
                  if (pUVar6 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
                    pUVar16 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar16,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar17 = (UI_CharacterEditorEditStatsPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
                    (__this->fields)._editStatsPopup = pUVar17;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._editStatsPopup);
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar18 = (UI_CharacterEditorEditPerksPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
                    (__this->fields)._editPerksPopup = pUVar18;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._editPerksPopup);
                    pUVar11 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar19 = (UI_PresetSkinEditPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar11,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
                    (__this->fields)._editPresetSkinPopup = pUVar19;
                    il2cpp_runtime_helper_022b4080(&(__this->fields)._editPresetSkinPopup,pUVar19);
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
  else {
    pUVar13 = *ppUVar1;
    pUVar11 = (UnityEngine_Transform_o *)0x0;
    if (pUVar13 != (UI_CharacterEditorCostumePanel_o *)0x0) {
      pUVar10 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = (Il2CppClass *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
      pUVar14 = (__this->fields)._statsPanel;
      pUVar11 = (UnityEngine_Transform_o *)0x0;
      if (pUVar14 != (UI_CharacterEditorStatsPanel_o *)0x0) {
        pUVar10 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
        pIVar20 = (Il2CppClass *)0x0;
        UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
        pUVar15 = (__this->fields)._skinsPanel;
        pUVar11 = (UnityEngine_Transform_o *)0x0;
        if (pUVar15 != (UI_CharacterEditorSkinsPanel_o *)0x0) {
          pUVar10 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
          pIVar20 = (Il2CppClass *)0x0;
          UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
          pUVar6 = (__this->fields)._categoryPanel;
          pUVar11 = (UnityEngine_Transform_o *)0x0;
          if (pUVar6 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
            pUVar10 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
            pIVar20 = (Il2CppClass *)0x0;
            UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
            pUVar17 = (__this->fields)._editStatsPopup;
            pUVar11 = (UnityEngine_Transform_o *)0x0;
            if (pUVar17 != (UI_CharacterEditorEditStatsPopup_o *)0x0) {
              pUVar10 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
              pIVar20 = (Il2CppClass *)0x0;
              UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
              pUVar18 = (__this->fields)._editPerksPopup;
              pUVar11 = (UnityEngine_Transform_o *)0x0;
              if (pUVar18 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
                pUVar10 = (UnityEngine_Object_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar18,(MethodInfo *)0x0);
                pIVar20 = (Il2CppClass *)0x0;
                UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
                pUVar19 = (__this->fields)._editPresetSkinPopup;
                pUVar11 = (UnityEngine_Transform_o *)0x0;
                if (pUVar19 != (UI_PresetSkinEditPopup_o *)0x0) {
                  pUVar10 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar19,(MethodInfo *)0x0);
                  UnityEngine_Object__Destroy_4e01c60(pUVar10,(MethodInfo *)0x0);
                  goto label_04361a22;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  cVar8 = (char)pIVar20;
  if (g_data_057ae1a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1a7 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar7 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar7 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_04361e24;
  pIVar20 = MethodInfo_BaseSetSetting_GetSelectedSet;
  customSet = (Settings_HumanCustomSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
  if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_04361da7:
    if ((pUVar11[6].monitor == (void *)0x0) ||
       (unaff_RBP = *(Characters_DummyCharacter_o **)((long)pUVar11[6].monitor + 0x38),
       unaff_RBP == (Characters_DummyCharacter_o *)0x0)) {
label_04361e24:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar5 = (TypeInfo_DummyHuman->_2).naturalAligment;
      pIVar20 = TypeInfo_DummyHuman;
      if ((bVar5 <= (unaff_RBP->klass->_2).naturalAligment) &&
         ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_DummyHuman)) {
        if ((pUVar11[9].monitor != (void *)0x0) && (unaff_RBP[1].monitor != (Characters_HumanSetup_o *)0x0)) {
          Characters_HumanSetup__Load
                    (unaff_RBP[1].monitor,customSet,*(int32_t *)((long)pUVar11[9].monitor + 0x14),0,
                     (MethodInfo *)0x0);
          if (cVar8 != '\0') {
            Characters_DummyCharacter__Idle(unaff_RBP,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        goto label_04361e24;
      }
    }
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
    bVar5 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar20 = TypeInfo_HumanCustomSet;
    if ((bVar5 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_HumanCustomSet)) goto label_04361da7;
  }
  il2cpp_runtime_helper_022b2fd0(customSet);
  __this_04 = (Characters_DummyHuman_o *)((ulong)pIVar20 & 0xffffffff);
  if (g_data_057ae1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1a8 = '\x01';
  }
  __this_01 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar5 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar5) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_CharacterEditorGameManager)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      if ((char)__this_04 != '\0') {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return;
      }
      __this_04 = (Characters_DummyHuman_o *)(__this_01->fields).Character;
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        bVar5 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (((__this_04->klass->_2).naturalAligment < bVar5) ||
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_DummyHuman)) goto label_04361f52;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_04,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04361f52:
  il2cpp_runtime_helper_022b2fd0();
  __this_05 = __this_04[2].klass;
  if (__this_05 != (Characters_DummyHuman_c *)0x0) {
    UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_05,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_06 = __this_05->static_fields;
  if (__this_06 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(__this_06,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  __this_03 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_03,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  __this_06[2].fields.m_CachedPtr = (intptr_t)__this_03;
  il2cpp_runtime_helper_022b4080(&__this_06[2].fields,__this_03);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UI_BasePopup);
  (__this_06->fields).SinglePanel = (UnityEngine_Transform_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_06->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacter (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4361ce0

void UI_CharacterEditorHumanMenu__ResetCharacter
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_HumanCustomSet_o *customSet;
  Settings_IntSetting_o *pSVar5;
  Characters_DummyHuman_o *__this_02;
  Characters_DummyCharacter_o *unaff_RBP;
  Il2CppClass *pIVar6;
  Characters_DummyHuman_c *__this_03;
  UI_BasePanel_o *__this_04;
  
  pIVar6 = (Il2CppClass *)(ulong)(uint)fullReset;
  if (g_data_057ae1a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1a7 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_04361e24;
  pIVar6 = MethodInfo_BaseSetSetting_GetSelectedSet;
  customSet = (Settings_HumanCustomSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
  if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_04361da7:
    pGVar3 = (__this->fields)._gameManager;
    if ((pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
       (unaff_RBP = (pGVar3->fields).Character, unaff_RBP == (Characters_DummyCharacter_o *)0x0)) {
label_04361e24:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
      pIVar6 = TypeInfo_DummyHuman;
      if ((bVar1 <= (unaff_RBP->klass->_2).naturalAligment) &&
         ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman)) {
        pSVar5 = (__this->fields).Weapon;
        if ((pSVar5 != (Settings_IntSetting_o *)0x0) &&
           (unaff_RBP[1].monitor != (Characters_HumanSetup_o *)0x0)) {
          Characters_HumanSetup__Load
                    (unaff_RBP[1].monitor,customSet,(pSVar5->fields)._value,0,(MethodInfo *)0x0);
          if ((char)fullReset != '\0') {
            Characters_DummyCharacter__Idle(unaff_RBP,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        goto label_04361e24;
      }
    }
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar6 = TypeInfo_HumanCustomSet;
    if ((bVar1 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_HumanCustomSet)) goto label_04361da7;
  }
  il2cpp_runtime_helper_022b2fd0(customSet);
  __this_02 = (Characters_DummyHuman_o *)((ulong)pIVar6 & 0xffffffff);
  if (g_data_057ae1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1a8 = '\x01';
  }
  pGVar3 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((pGVar3->klass->_2).naturalAligment < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      if ((char)__this_02 != '\0') {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(pGVar3,(MethodInfo *)0x0);
        return;
      }
      __this_02 = (Characters_DummyHuman_o *)(pGVar3->fields).Character;
      if (__this_02 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (((__this_02->klass->_2).naturalAligment < bVar1) ||
           ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) goto label_04361f52;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (__this_02 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_02,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04361f52:
  il2cpp_runtime_helper_022b2fd0();
  __this_03 = __this_02[2].klass;
  if (__this_03 != (Characters_DummyHuman_c *)0x0) {
    UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_04 = __this_03->static_fields;
  if (__this_04 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(__this_04,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  pSVar5 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar5,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  __this_04[2].fields.m_CachedPtr = (intptr_t)pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_04[2].fields,pSVar5);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UI_BasePopup);
  (__this_04->fields).SinglePanel = (UnityEngine_Transform_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanMenu$$ResetCharacterWithSkins
// il2cpp: void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins (UI_CharacterEditorHumanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4361e40

void UI_CharacterEditorHumanMenu__ResetCharacterWithSkins
               (UI_CharacterEditorHumanMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  byte bVar1;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_01;
  Settings_IntSetting_o *__this_02;
  Characters_DummyHuman_o *__this_03;
  Characters_DummyHuman_c *__this_04;
  UI_BasePanel_o *__this_05;
  
  __this_03 = (Characters_DummyHuman_o *)(ulong)(uint)fullReset;
  if (g_data_057ae1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1a8 = '\x01';
  }
  __this_00 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      if ((char)fullReset != '\0') {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,(MethodInfo *)0x0);
        return;
      }
      __this_03 = (Characters_DummyHuman_o *)(__this_00->fields).Character;
      if (__this_03 != (Characters_DummyHuman_o *)0x0) {
        bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (((__this_03->klass->_2).naturalAligment < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_DummyHuman)) goto label_04361f52;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (__this_03 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_03,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04361f52:
  il2cpp_runtime_helper_022b2fd0();
  __this_04 = __this_03[2].klass;
  if (__this_04 != (Characters_DummyHuman_c *)0x0) {
    UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_04,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_05 = __this_04->static_fields;
  if (__this_05 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(__this_05,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  __this_02 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_02,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  __this_05[2].fields.m_CachedPtr = (intptr_t)__this_02;
  il2cpp_runtime_helper_022b4080(&__this_05[2].fields,__this_02);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UI_BasePopup);
  (__this_05->fields).SinglePanel = (UnityEngine_Transform_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_05,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMinMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361f60

float UI_CharacterEditorHumanMenu__GetMinMouseX(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *__this_01;
  UI_CharacterEditorCostumePanel_o *__this_02;
  UI_BasePanel_o *__this_03;
  float extraout_XMM0_Da;
  float fVar2;
  
  __this_02 = (__this->fields)._costumePanel;
  if (__this_02 != (UI_CharacterEditorCostumePanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_02,(MethodInfo *)0x0);
    return fVar2 + 20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_03 = (UI_BasePanel_o *)__this_02[1].fields.m_CancellationTokenSource;
  if (__this_03 != (UI_BasePanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth(__this_03,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  __this_01 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_01,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  __this_03[2].fields.m_CachedPtr = (intptr_t)__this_01;
  il2cpp_runtime_helper_022b4080(&__this_03[2].fields,__this_01);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_03->fields).SinglePanel = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.CharacterEditorHumanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorHumanMenu__GetMaxMouseX (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361f90

float UI_CharacterEditorHumanMenu__GetMaxMouseX(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_IntSetting_o *__this_01;
  UI_CharacterEditorHumanCategoryPanel_o *__this_02;
  float extraout_XMM0_Da;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_02 = (__this->fields)._categoryPanel;
  if (__this_02 != (UI_CharacterEditorHumanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_02,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  __this_01 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_01,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  __this_02[1].fields._currentCategoryPanel = (UnityEngine_GameObject_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&__this_02[1].fields._currentCategoryPanel,__this_01);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_02->fields).SinglePanel = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.CharacterEditorHumanMenu$$.ctor
// il2cpp: void UI_CharacterEditorHumanMenu___ctor (UI_CharacterEditorHumanMenu_o* __this, const MethodInfo* method);
// 0x4361fe0

void UI_CharacterEditorHumanMenu___ctor(UI_CharacterEditorHumanMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_IntSetting_o *__this_01;
  
  if (g_data_057ae1a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    g_data_057ae1a9 = '\x01';
  }
  __this_01 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(__this_01,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Weapon = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Weapon,__this_01);
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


