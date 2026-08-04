// Type: UI.CharacterEditorMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorMenu.cs
// --------------------------------

// UI.CharacterEditorMenu$$Setup
// il2cpp: void UI_CharacterEditorMenu__Setup (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4361540

void UI_CharacterEditorMenu__Setup(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_TooltipPopup_o *pUVar4;
  UI_MessagePopup_o *pUVar5;
  UI_ConfirmPopup_o *pUVar6;
  UI_ExternalLinkPopup_o *pUVar7;
  UI_BaseMenu_o *__this_00;
  
  if (g_data_057ae1aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1aa = '\x01';
  }
  UI_BaseMenu__Setup((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_CharacterEditorGameManager;
  __this_00 = *(UI_BaseMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 == (UI_BaseMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)0x0;
label_043615f5:
    il2cpp_runtime_helper_022b4080(&(__this->fields)._gameManager);
    (*(__this->klass->vtable)._8_RebuildPanels.methodPtr)
              (__this,1,(__this->klass->vtable)._8_RebuildPanels.method);
    vtableDispatch = (__this->klass->vtable)._9_ResetCharacter.methodPtr;
    (*vtableDispatch)(__this,0,(__this->klass->vtable)._9_ResetCharacter.method,vtableDispatch);
    return;
  }
  bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
  if ((bVar1 <= (((GameManagers_CharacterEditorGameManager_c *)__this_00->klass)->_2).naturalAligment) &&
     ((((GameManagers_CharacterEditorGameManager_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      TypeInfo_CharacterEditorGameManager)) {
    (__this->fields)._gameManager = (GameManagers_CharacterEditorGameManager_o *)__this_00;
    if ((bVar1 <= (((GameManagers_CharacterEditorGameManager_c *)__this_00->klass)->_2).naturalAligment) &&
       ((((GameManagers_CharacterEditorGameManager_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
        == pIVar2)) goto label_043615f5;
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae1a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSkinEditPop);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
    g_data_057ae1a5 = '\x01';
  }
  UI_BaseMenu__SetupPopups(__this_00,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pUVar4 = (UI_TooltipPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar3,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
  __this_00[1].fields.TooltipPopup = pUVar4;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.TooltipPopup);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pUVar5 = (UI_MessagePopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar3,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
  __this_00[1].fields.MessagePopup = pUVar5;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.MessagePopup);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pUVar6 = (UI_ConfirmPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar3,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
  __this_00[1].fields.ConfirmPopup = pUVar6;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.ConfirmPopup);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  pUVar7 = (UI_ExternalLinkPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(pUVar3,0,MethodInfo_GlobalSkinEditPopup_CreateDefaultPopup_GlobalSkinEditPop);
  __this_00[1].fields.ExternalLinkPopup = pUVar7;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields.ExternalLinkPopup,pUVar7);
  return;
}


// UI.CharacterEditorMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorMenu__IsPopupActive (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4361800

bool_conflict UI_CharacterEditorMenu__IsPopupActive(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  byte bVar2;
  UI_SelectListPopup_o *pUVar3;
  UI_IconPickPopup_o *pUVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  long lVar6;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  char cVar7;
  bool_conflict extraout_EAX;
  bool_conflict bVar8;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  System_Collections_Generic_List_object__o *__this_02;
  undefined8 in_RAX;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Component_o *pUVar11;
  UI_CharacterEditorMenu_c *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *pUVar14;
  System_Collections_Generic_List_BasePopup__o *pSVar15;
  UI_TooltipPopup_o *pUVar16;
  UI_MessagePopup_o *pUVar17;
  Settings_HumanCustomSet_o *customSet;
  Settings_IntSetting_o *__this_03;
  Characters_DummyHuman_o *__this_04;
  Characters_DummyCharacter_o *unaff_RBP;
  Il2CppClass *pIVar18;
  Characters_DummyHuman_c *__this_05;
  UI_BasePanel_o *__this_06;
  
  pUVar3 = (__this->fields).SelectListPopup;
  if (pUVar3 != (UI_SelectListPopup_o *)0x0) {
    if ((char)(pUVar3->fields).IsActive != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
    pUVar4 = (__this->fields).IconPickPopup;
    if (pUVar4 != (UI_IconPickPopup_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pUVar4 >> 8),(char)(pUVar4->fields).IsActive != '\0');
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
  pUVar12 = __this[1].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar18 = (Il2CppClass *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04361a22:
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pIVar18 = (Il2CppClass *)0x1;
    pUVar11 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(pUVar10,1,MethodInfo_CharacterEditorCostumePanel_CreateHeadedPanel_CharacterE);
    if (pUVar11 != (UnityEngine_Component_o *)0x0) {
      pUVar12 = (UI_CharacterEditorMenu_c *)UnityEngine_Component__GetComponent_object_(pUVar11,MethodInfo_CharacterEditorCostumePanel_GetComponent_CharacterEditor);
      __this[1].klass = pUVar12;
      il2cpp_runtime_helper_022b4080(__this + 1);
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pIVar18 = (Il2CppClass *)0x1;
      pUVar11 = (UnityEngine_Component_o *)
                UI_ElementFactory__CreateHeadedPanel_object_(pUVar10,1,MethodInfo_CharacterEditorStatsPanel_CreateHeadedPanel_CharacterEdi);
      if (pUVar11 != (UnityEngine_Component_o *)0x0) {
        pIVar13 = UnityEngine_Component__GetComponent_object_(pUVar11,MethodInfo_CharacterEditorStatsPanel_GetComponent_CharacterEditorSt);
        __this[1].monitor = pIVar13;
        il2cpp_runtime_helper_022b4080(&__this[1].monitor);
        pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pIVar18 = (Il2CppClass *)0x1;
        pUVar11 = (UnityEngine_Component_o *)
                  UI_ElementFactory__CreateHeadedPanel_object_(pUVar10,1,MethodInfo_CharacterEditorSkinsPanel_CreateHeadedPanel_CharacterEdi);
        if (pUVar11 != (UnityEngine_Component_o *)0x0) {
          pIVar13 = UnityEngine_Component__GetComponent_object_(pUVar11,MethodInfo_CharacterEditorSkinsPanel_GetComponent_CharacterEditorSk);
          __this[1].fields.m_CachedPtr = (intptr_t)pIVar13;
          il2cpp_runtime_helper_022b4080(&__this[1].fields);
          pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pIVar18 = (Il2CppClass *)0x1;
          pUVar11 = (UnityEngine_Component_o *)
                    UI_ElementFactory__CreateHeadedPanel_object_(pUVar10,1,MethodInfo_CharacterEditorHumanCategoryPanel_CreateHeadedPanel_Char);
          if (pUVar11 != (UnityEngine_Component_o *)0x0) {
            pIVar18 = (Il2CppClass *)UnityEngine_Component__GetComponent_object_(pUVar11,MethodInfo_CharacterEditorHumanCategoryPanel_GetComponent_Character);
            ppSVar1 = &__this[1].fields.m_CancellationTokenSource;
            __this[1].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)pIVar18
            ;
            il2cpp_runtime_helper_022b4080(ppSVar1);
            pUVar10 = (UnityEngine_Transform_o *)0x0;
            if (__this[1].klass != (UI_CharacterEditorMenu_c *)0x0) {
              pUVar14 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this[1].klass,(MethodInfo *)0x0);
              pIVar18 = (Il2CppClass *)0x0;
              UI_ElementFactory__SetAnchor
                        (pUVar14,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
              pUVar11 = __this[1].monitor;
              pUVar10 = (UnityEngine_Transform_o *)0x0;
              if (pUVar11 != (UnityEngine_Component_o *)0x0) {
                pUVar14 = UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
                pIVar18 = (Il2CppClass *)0x2;
                UI_ElementFactory__SetAnchor
                          (pUVar14,2,2,(UnityEngine_Vector2_o)0xc3be0000c1a00000,(MethodInfo *)0x0);
                pUVar11 = (UnityEngine_Component_o *)__this[1].fields.m_CachedPtr;
                pUVar10 = (UnityEngine_Transform_o *)0x0;
                if (pUVar11 != (UnityEngine_Component_o *)0x0) {
                  pUVar14 = UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
                  pIVar18 = (Il2CppClass *)0x2;
                  UI_ElementFactory__SetAnchor
                            (pUVar14,2,2,(UnityEngine_Vector2_o)0xc43e0000c1a00000,(MethodInfo *)0x0);
                  pSVar5 = *ppSVar1;
                  pUVar10 = (UnityEngine_Transform_o *)0x0;
                  if (pSVar5 != (System_Threading_CancellationTokenSource_o *)0x0) {
                    pUVar14 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0);
                    UI_ElementFactory__SetAnchor
                              (pUVar14,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
                    pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pSVar15 = (System_Collections_Generic_List_BasePopup__o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterEditorEditStatsPopup_CreateDefaultPopup_Charact);
                    __this[1].fields._popups = pSVar15;
                    il2cpp_runtime_helper_022b4080(&__this[1].fields._popups);
                    pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar16 = (UI_TooltipPopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_CharacterEditorEditPerksPopup_CreateDefaultPopup_Charact);
                    __this[1].fields.TooltipPopup = pUVar16;
                    il2cpp_runtime_helper_022b4080(&__this[1].fields.TooltipPopup);
                    pUVar10 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar17 = (UI_MessagePopup_o *)
                              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_PresetSkinEditPopup_CreateDefaultPopup_PresetSkinEditPop);
                    __this[1].fields.MessagePopup = pUVar17;
                    bVar8 = il2cpp_runtime_helper_022b4080(&__this[1].fields.MessagePopup,pUVar17);
                    return bVar8;
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
    pUVar12 = __this[1].klass;
    pUVar10 = (UnityEngine_Transform_o *)0x0;
    if (pUVar12 != (UI_CharacterEditorMenu_c *)0x0) {
      pUVar9 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar18 = (Il2CppClass *)0x0;
      UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
      pUVar10 = (UnityEngine_Transform_o *)0x0;
      if (__this[1].monitor != (UnityEngine_Component_o *)0x0) {
        pUVar9 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject(__this[1].monitor,(MethodInfo *)0x0);
        pIVar18 = (Il2CppClass *)0x0;
        UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
        pUVar11 = (UnityEngine_Component_o *)__this[1].fields.m_CachedPtr;
        pUVar10 = (UnityEngine_Transform_o *)0x0;
        if (pUVar11 != (UnityEngine_Component_o *)0x0) {
          pUVar9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
          pIVar18 = (Il2CppClass *)0x0;
          UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
          pSVar5 = __this[1].fields.m_CancellationTokenSource;
          pUVar10 = (UnityEngine_Transform_o *)0x0;
          if (pSVar5 != (System_Threading_CancellationTokenSource_o *)0x0) {
            pUVar9 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pSVar5,(MethodInfo *)0x0);
            pIVar18 = (Il2CppClass *)0x0;
            UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
            pSVar15 = __this[1].fields._popups;
            pUVar10 = (UnityEngine_Transform_o *)0x0;
            if (pSVar15 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
              pUVar9 = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pSVar15,(MethodInfo *)0x0);
              pIVar18 = (Il2CppClass *)0x0;
              UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
              pUVar16 = __this[1].fields.TooltipPopup;
              pUVar10 = (UnityEngine_Transform_o *)0x0;
              if (pUVar16 != (UI_TooltipPopup_o *)0x0) {
                pUVar9 = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0);
                pIVar18 = (Il2CppClass *)0x0;
                UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
                pUVar17 = __this[1].fields.MessagePopup;
                pUVar10 = (UnityEngine_Transform_o *)0x0;
                if (pUVar17 != (UI_MessagePopup_o *)0x0) {
                  pUVar9 = (UnityEngine_Object_o *)
                           UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
                  UnityEngine_Object__Destroy_4e01c60(pUVar9,(MethodInfo *)0x0);
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
  cVar7 = (char)pIVar18;
  if (g_data_057ae1a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1a7 = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar6 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar6 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_04361e24;
  pIVar18 = MethodInfo_BaseSetSetting_GetSelectedSet;
  customSet = (Settings_HumanCustomSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        (__this_00,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
  if (customSet == (Settings_HumanCustomSet_o *)0x0) {
label_04361da7:
    if ((pUVar10[6].monitor == (void *)0x0) ||
       (unaff_RBP = *(Characters_DummyCharacter_o **)((long)pUVar10[6].monitor + 0x38),
       unaff_RBP == (Characters_DummyCharacter_o *)0x0)) {
label_04361e24:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
      pIVar18 = TypeInfo_DummyHuman;
      if ((bVar2 <= (unaff_RBP->klass->_2).naturalAligment) &&
         ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_DummyHuman)) {
        if ((pUVar10[9].monitor != (void *)0x0) && (unaff_RBP[1].monitor != (Characters_HumanSetup_o *)0x0)) {
          Characters_HumanSetup__Load
                    (unaff_RBP[1].monitor,customSet,*(int32_t *)((long)pUVar10[9].monitor + 0x14),0,
                     (MethodInfo *)0x0);
          if (cVar7 != '\0') {
            Characters_DummyCharacter__Idle(unaff_RBP,(MethodInfo *)0x0);
            return extraout_EAX_01;
          }
          return extraout_EAX_00;
        }
        goto label_04361e24;
      }
    }
    customSet = (Settings_HumanCustomSet_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    pIVar18 = TypeInfo_HumanCustomSet;
    if ((bVar2 <= (customSet->klass->_2).naturalAligment) &&
       ((customSet->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_HumanCustomSet)) goto label_04361da7;
  }
  il2cpp_runtime_helper_022b2fd0(customSet);
  __this_04 = (Characters_DummyHuman_o *)((ulong)pIVar18 & 0xffffffff);
  if (g_data_057ae1a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DummyHuman);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae1a8 = '\x01';
  }
  __this_01 = *(GameManagers_CharacterEditorGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
    bVar2 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CharacterEditorGameManager)) {
      il2cpp_runtime_helper_022b2fd0();
    }
    else {
      if ((char)__this_04 != '\0') {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
      __this_04 = (Characters_DummyHuman_o *)(__this_01->fields).Character;
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        bVar2 = (TypeInfo_DummyHuman->_2).naturalAligment;
        if (((__this_04->klass->_2).naturalAligment < bVar2) ||
           ((__this_04->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_DummyHuman)) goto label_04361f52;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return bVar8;
      }
      if (__this_04 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_04,(MethodInfo *)0x0);
        return extraout_EAX_03;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04361f52:
  bVar8 = il2cpp_runtime_helper_022b2fd0();
  __this_05 = __this_04[2].klass;
  if (__this_05 != (Characters_DummyHuman_c *)0x0) {
    UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_05,(MethodInfo *)0x0);
    return bVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_06 = __this_05->static_fields;
  if (__this_06 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(__this_06,(MethodInfo *)0x0);
    return extraout_EAX_04;
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
  return extraout_EAX;
}


// UI.CharacterEditorMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorMenu__RebuildPanels (UI_CharacterEditorMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x4362070

void UI_CharacterEditorMenu__RebuildPanels
               (UI_CharacterEditorMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorMenu__ResetCharacter (UI_CharacterEditorMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4362080

void UI_CharacterEditorMenu__ResetCharacter
               (UI_CharacterEditorMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  return;
}


// UI.CharacterEditorMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMinMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4362090

float UI_CharacterEditorMenu__GetMinMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.CharacterEditorMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorMenu__GetMaxMouseX (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x43620a0

float UI_CharacterEditorMenu__GetMaxMouseX(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  return (float)iVar1;
}


// UI.CharacterEditorMenu$$.ctor
// il2cpp: void UI_CharacterEditorMenu___ctor (UI_CharacterEditorMenu_o* __this, const MethodInfo* method);
// 0x4362060

void UI_CharacterEditorMenu___ctor(UI_CharacterEditorMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
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


