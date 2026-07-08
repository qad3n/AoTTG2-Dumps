// Type: UI.CharacterEditorTitanMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorTitanMenu$$Setup
// il2cpp: void UI_CharacterEditorTitanMenu__Setup (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405bcf0

void UI_CharacterEditorTitanMenu__Setup(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_BaseSetSetting_o *pSVar3;
  
  if (DAT_05704461 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704461 = '\x01';
  }
  UI_CharacterEditorMenu__Setup((UI_CharacterEditorMenu_o *)__this,method);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar3 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar3 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
         ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar3);
      }
      if (pSVar3[1].monitor != (void *)0x0) {
        (__this->fields)._currentBodyType = *(int32_t *)((long)pSVar3[1].monitor + 0x14);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorTitanMenu__SetupPopups (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405bdc0

void UI_CharacterEditorTitanMenu__SetupPopups
               (UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorTitanMenu__IsPopupActive (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405bdd0

bool_conflict
UI_CharacterEditorTitanMenu__IsPopupActive(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  undefined8 in_RAX;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    if ((char)(pUVar1->fields).IsActive != '\0') {
      return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
    }
    pUVar2 = (__this->fields).IconPickPopup;
    if (pUVar2 != (UI_IconPickPopup_o *)0x0) {
      return (bool_conflict)
             CONCAT71((int7)((ulong)pUVar2 >> 8),(char)(pUVar2->fields).IsActive != '\0');
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorTitanMenu__RebuildPanels (UI_CharacterEditorTitanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x405be10

void UI_CharacterEditorTitanMenu__RebuildPanels
               (UI_CharacterEditorTitanMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o **ppUVar1;
  UI_CharacterEditorTitanCategoryPanel_o **ppUVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Component_o *pUVar6;
  UI_CharacterEditorTitanCostumePanel_o *pUVar7;
  UI_CharacterEditorTitanCategoryPanel_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  
  if (DAT_05704462 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_C);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_Ch);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPa);
    il2cpp_init_method_metadata(&MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPan);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704462 = '\x01';
  }
  pUVar7 = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar7 = *ppUVar1;
    if (pUVar7 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto LAB_0405bff1;
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar8 = (__this->fields)._categoryPanel;
    if (pUVar8 == (UI_CharacterEditorTitanCategoryPanel_o *)0x0) goto LAB_0405bff1;
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar6 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel<object>(pUVar5,1,MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPan);
  if (pUVar6 != (UnityEngine_Component_o *)0x0) {
    pUVar7 = (UI_CharacterEditorTitanCostumePanel_o *)
             UnityEngine_Component__GetComponent<object>(pUVar6,MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_Ch);
    (__this->fields)._costumePanel = pUVar7;
    il2cpp_runtime_glue(ppUVar1);
    pUVar5 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel<object>(pUVar5,1,MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPa);
    if (pUVar6 != (UnityEngine_Component_o *)0x0) {
      pUVar8 = (UI_CharacterEditorTitanCategoryPanel_o *)
               UnityEngine_Component__GetComponent<object>(pUVar6,MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_C);
      ppUVar2 = &(__this->fields)._categoryPanel;
      (__this->fields)._categoryPanel = pUVar8;
      il2cpp_runtime_glue(ppUVar2);
      pUVar7 = (__this->fields)._costumePanel;
      if (pUVar7 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
        pUVar9 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
        UI_ElementFactory__SetAnchor
                  (pUVar9,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
        pUVar8 = *ppUVar2;
        if (pUVar8 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
          pUVar9 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor
                    (pUVar9,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0405bff1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorTitanMenu__ResetCharacter (UI_CharacterEditorTitanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x405c000

void UI_CharacterEditorTitanMenu__ResetCharacter
               (UI_CharacterEditorTitanMenu_o *__this,bool_conflict fullReset,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  Characters_DummyTitan_o *pCVar3;
  Characters_BasicTitanSetup_o *__this_02;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  Settings_TitanCustomSet_o *set;
  
  if (DAT_05704463 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704463 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar2 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_0405c1aa;
  set = (Settings_TitanCustomSet_o *)
        Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (set != (Settings_TitanCustomSet_o *)0x0) {
    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((set->klass->_2).naturalAligment < bVar1) ||
       ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(set);
    }
  }
  __this_01 = (__this->fields)._gameManager;
  if ((char)fullReset == '\0') {
    if ((set == (Settings_TitanCustomSet_o *)0x0) ||
       (pSVar4 = (set->fields).Body, pSVar4 == (Settings_IntSetting_o *)0x0)) goto LAB_0405c1aa;
    if ((__this->fields)._currentBodyType == (pSVar4->fields)._value) {
      if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
        pCVar3 = (__this_01->fields).Titan;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        pCVar3 = (__this_01->fields).Titan;
        if ((pCVar3 != (Characters_DummyTitan_o *)0x0) &&
           (__this_02 = (pCVar3->fields).Setup, __this_02 != (Characters_BasicTitanSetup_o *)0x0)) {
          Characters_BasicTitanSetup__Load(__this_02,set,(MethodInfo *)0x0);
          pCVar3 = (__this_01->fields).Titan;
          if (pCVar3 != (Characters_DummyTitan_o *)0x0) {
            Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar3,(MethodInfo *)0x0)
            ;
            return;
          }
        }
      }
      goto LAB_0405c1aa;
    }
  }
  else if (set == (Settings_TitanCustomSet_o *)0x0) goto LAB_0405c1aa;
  pSVar4 = (set->fields).Body;
  if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
     ((__this->fields)._currentBodyType = (pSVar4->fields)._value,
     __this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
    GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
    return;
  }
LAB_0405c1aa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMinMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405c1c0

float UI_CharacterEditorTitanMenu__GetMinMouseX
                (UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._costumePanel;
  if (__this_00 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    fVar1 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return fVar1 + 20.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMaxMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405c1f0

float UI_CharacterEditorTitanMenu__GetMaxMouseX
                (UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCategoryPanel_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_00 = (__this->fields)._categoryPanel;
  if (__this_00 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorTitanMenu$$.ctor
// il2cpp: void UI_CharacterEditorTitanMenu___ctor (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x405c240

void UI_CharacterEditorTitanMenu___ctor(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  (__this->fields)._currentBodyType = -1;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


