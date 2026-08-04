// Type: UI.CharacterEditorTitanMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// --------------------------------

// UI.CharacterEditorTitanMenu$$Setup
// il2cpp: void UI_CharacterEditorTitanMenu__Setup (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x4369b70

void UI_CharacterEditorTitanMenu__Setup(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  UI_ExternalLinkPopup_o *pUVar3;
  UI_BaseMenu_o *__this_01;
  
  if (g_data_057ae1db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1db = '\x01';
  }
  UI_CharacterEditorMenu__Setup((UI_CharacterEditorMenu_o *)__this,method);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_01 = (UI_BaseMenu_o *)Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet)
    ;
    if (__this_01 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)__this_01->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_TitanCustomSet)) goto label_04369c36;
      pUVar3 = (__this_01->fields).ExternalLinkPopup;
      if (pUVar3 != (UI_ExternalLinkPopup_o *)0x0) {
        (__this->fields)._currentBodyType = *(int32_t *)((long)&(pUVar3->fields).m_CachedPtr + 4);
        return;
      }
    }
  }
  __this_01 = (UI_BaseMenu_o *)il2cpp_runtime_helper_022b2c90();
label_04369c36:
  il2cpp_runtime_helper_022b2fd0();
  UI_BaseMenu__SetupPopups(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorTitanMenu__SetupPopups (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x4369c40

void UI_CharacterEditorTitanMenu__SetupPopups(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorTitanMenu__IsPopupActive (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x4369c50

bool_conflict
UI_CharacterEditorTitanMenu__IsPopupActive(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o **ppUVar1;
  byte bVar2;
  UI_SelectListPopup_o *pUVar3;
  UI_IconPickPopup_o *pUVar4;
  long lVar5;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  Characters_DummyTitan_o *pCVar6;
  Characters_BasicTitanSetup_o *__this_02;
  Settings_IntSetting_o *pSVar7;
  bool_conflict extraout_EAX;
  bool_conflict bVar8;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  System_Collections_Generic_List_object__o *__this_03;
  undefined8 in_RAX;
  UI_CharacterEditorTitanCostumePanel_o *set;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent;
  UnityEngine_Component_o *pUVar9;
  UI_CharacterEditorTitanCostumePanel_o *pUVar10;
  UI_CharacterEditorTitanCategoryPanel_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  char cVar13;
  UI_BasePanel_o *pUVar14;
  
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
  if (g_data_057ae1dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_Character);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_CharacterE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPanel_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPanel_Chara);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1dc = '\x01';
  }
  set = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  cVar13 = '\0';
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)set,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
label_04369d71:
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    cVar13 = '\x01';
    pUVar9 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(parent,1,MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPanel_Chara);
    if (pUVar9 != (UnityEngine_Component_o *)0x0) {
      pUVar10 = (UI_CharacterEditorTitanCostumePanel_o *)
                UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_CharacterE);
      (__this->fields)._costumePanel = pUVar10;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      cVar13 = '\x01';
      pUVar9 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(parent,1,MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPanel_Char);
      if (pUVar9 != (UnityEngine_Component_o *)0x0) {
        pUVar11 = (UI_CharacterEditorTitanCategoryPanel_o *)
                  UnityEngine_Component__GetComponent_object_(pUVar9,MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_Character);
        set = (UI_CharacterEditorTitanCostumePanel_o *)&(__this->fields)._categoryPanel;
        (__this->fields)._categoryPanel = pUVar11;
        il2cpp_runtime_helper_022b4080(set);
        cVar13 = (char)pUVar11;
        pUVar10 = (__this->fields)._costumePanel;
        parent = (UnityEngine_Transform_o *)0x0;
        if (pUVar10 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
          cVar13 = '\0';
          UI_ElementFactory__SetAnchor
                    (pUVar12,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
          parent = (UnityEngine_Transform_o *)0x0;
          if (*(UI_CharacterEditorTitanCategoryPanel_o **)set != (UI_CharacterEditorTitanCategoryPanel_o *)0x0
             ) {
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)*(UI_CharacterEditorTitanCategoryPanel_o **)set,
                                 (MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar12,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
  }
  else {
    pUVar10 = *ppUVar1;
    parent = (UnityEngine_Transform_o *)0x0;
    if (pUVar10 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
      set = (UI_CharacterEditorTitanCostumePanel_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar13 = '\0';
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)set,(MethodInfo *)0x0);
      pUVar11 = (__this->fields)._categoryPanel;
      parent = (UnityEngine_Transform_o *)0x0;
      if (pUVar11 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
        UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
        goto label_04369d71;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1dd = '\x01';
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar5 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar5 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    set = (UI_CharacterEditorTitanCostumePanel_o *)
          Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
      bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((set->klass->_2).naturalAligment < bVar2) ||
         ((set->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) goto label_0436a02f;
    }
    __this_01 = parent[6].monitor;
    if (cVar13 == '\0') {
      if ((set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) &&
         (pSVar7 = (Settings_IntSetting_o *)(set->fields)._currentCategoryPanel,
         pSVar7 != (Settings_IntSetting_o *)0x0)) {
        if (*(int *)&parent[7].monitor != (pSVar7->fields)._value) goto label_04369ff3;
        if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          pCVar6 = (__this_01->fields).Titan;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return bVar8;
          }
          pCVar6 = (__this_01->fields).Titan;
          if ((pCVar6 != (Characters_DummyTitan_o *)0x0) &&
             (__this_02 = (pCVar6->fields).Setup, __this_02 != (Characters_BasicTitanSetup_o *)0x0)) {
            Characters_BasicTitanSetup__Load(__this_02,(Settings_TitanCustomSet_o *)set,(MethodInfo *)0x0);
            pCVar6 = (__this_01->fields).Titan;
            if (pCVar6 != (Characters_DummyTitan_o *)0x0) {
              Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar6,(MethodInfo *)0x0);
              return extraout_EAX_01;
            }
          }
        }
      }
    }
    else if (set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
label_04369ff3:
      pSVar7 = (Settings_IntSetting_o *)(set->fields)._currentCategoryPanel;
      if ((pSVar7 != (Settings_IntSetting_o *)0x0) &&
         (*(int32_t *)&parent[7].monitor = (pSVar7->fields)._value,
         __this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0436a02f:
  bVar8 = il2cpp_runtime_helper_022b2fd0();
  pUVar14 = (UI_BasePanel_o *)((UnityEngine_Object_Fields *)&set[1].monitor)->m_CachedPtr;
  if (pUVar14 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar14,(MethodInfo *)0x0);
    return bVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar14 = (UI_BasePanel_o *)pUVar14[1].fields._currentCategoryPanel;
  if (pUVar14 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&pUVar14[1].fields._currentCategoryPanelName = 0xffffffff;
    if (g_data_057ae015 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      g_data_057ae015 = '\x01';
    }
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UI_BasePopup);
    (pUVar14->fields).SinglePanel = (UnityEngine_Transform_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pUVar14->fields).SinglePanel);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar14,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  UI_BasePanel__GetPhysicalWidth(pUVar14,(MethodInfo *)0x0);
  return extraout_EAX_03;
}


// UI.CharacterEditorTitanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorTitanMenu__RebuildPanels (UI_CharacterEditorTitanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x4369c90

void UI_CharacterEditorTitanMenu__RebuildPanels
               (UI_CharacterEditorTitanMenu_o *__this,bool_conflict costumePopup,MethodInfo *method)

{
  UI_CharacterEditorTitanCostumePanel_o **ppUVar1;
  byte bVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  Characters_DummyTitan_o *pCVar4;
  Characters_BasicTitanSetup_o *__this_02;
  Settings_IntSetting_o *pSVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_03;
  UI_CharacterEditorTitanCostumePanel_o *set;
  UnityEngine_Object_o *obj;
  UnityEngine_Transform_o *parent;
  UnityEngine_Component_o *pUVar7;
  UI_CharacterEditorTitanCostumePanel_o *pUVar8;
  UI_CharacterEditorTitanCategoryPanel_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  char cVar11;
  UI_BasePanel_o *pUVar12;
  
  if (g_data_057ae1dc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_Character);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_CharacterE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPanel_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPanel_Chara);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1dc = '\x01';
  }
  set = (__this->fields)._costumePanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._costumePanel;
  cVar11 = '\0';
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)set,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
label_04369d71:
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    cVar11 = '\x01';
    pUVar7 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(parent,1,MethodInfo_CharacterEditorTitanCostumePanel_CreateHeadedPanel_Chara);
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      pUVar8 = (UI_CharacterEditorTitanCostumePanel_o *)
               UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_CharacterEditorTitanCostumePanel_GetComponent_CharacterE);
      (__this->fields)._costumePanel = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      cVar11 = '\x01';
      pUVar7 = (UnityEngine_Component_o *)UI_ElementFactory__CreateHeadedPanel_object_(parent,1,MethodInfo_CharacterEditorTitanCategoryPanel_CreateHeadedPanel_Char);
      if (pUVar7 != (UnityEngine_Component_o *)0x0) {
        pUVar9 = (UI_CharacterEditorTitanCategoryPanel_o *)
                 UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_CharacterEditorTitanCategoryPanel_GetComponent_Character);
        set = (UI_CharacterEditorTitanCostumePanel_o *)&(__this->fields)._categoryPanel;
        (__this->fields)._categoryPanel = pUVar9;
        il2cpp_runtime_helper_022b4080(set);
        cVar11 = (char)pUVar9;
        pUVar8 = (__this->fields)._costumePanel;
        parent = (UnityEngine_Transform_o *)0x0;
        if (pUVar8 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
          pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
          ;
          cVar11 = '\0';
          UI_ElementFactory__SetAnchor
                    (pUVar10,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0);
          parent = (UnityEngine_Transform_o *)0x0;
          if (*(UI_CharacterEditorTitanCategoryPanel_o **)set != (UI_CharacterEditorTitanCategoryPanel_o *)0x0
             ) {
            pUVar10 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)*(UI_CharacterEditorTitanCategoryPanel_o **)set,
                                 (MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar10,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pUVar8 = *ppUVar1;
    parent = (UnityEngine_Transform_o *)0x0;
    if (pUVar8 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
      set = (UI_CharacterEditorTitanCostumePanel_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      cVar11 = '\0';
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)set,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._categoryPanel;
      parent = (UnityEngine_Transform_o *)0x0;
      if (pUVar9 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
        UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
        goto label_04369d71;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1dd = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar3 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    set = (UI_CharacterEditorTitanCostumePanel_o *)
          Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
      bVar2 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((set->klass->_2).naturalAligment < bVar2) ||
         ((set->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_TitanCustomSet)) goto label_0436a02f;
    }
    __this_01 = parent[6].monitor;
    if (cVar11 == '\0') {
      if ((set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) &&
         (pSVar5 = (Settings_IntSetting_o *)(set->fields)._currentCategoryPanel,
         pSVar5 != (Settings_IntSetting_o *)0x0)) {
        if (*(int *)&parent[7].monitor != (pSVar5->fields)._value) goto label_04369ff3;
        if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          pCVar4 = (__this_01->fields).Titan;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            return;
          }
          pCVar4 = (__this_01->fields).Titan;
          if ((pCVar4 != (Characters_DummyTitan_o *)0x0) &&
             (__this_02 = (pCVar4->fields).Setup, __this_02 != (Characters_BasicTitanSetup_o *)0x0)) {
            Characters_BasicTitanSetup__Load(__this_02,(Settings_TitanCustomSet_o *)set,(MethodInfo *)0x0);
            pCVar4 = (__this_01->fields).Titan;
            if (pCVar4 != (Characters_DummyTitan_o *)0x0) {
              Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if (set != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
label_04369ff3:
      pSVar5 = (Settings_IntSetting_o *)(set->fields)._currentCategoryPanel;
      if ((pSVar5 != (Settings_IntSetting_o *)0x0) &&
         (*(int32_t *)&parent[7].monitor = (pSVar5->fields)._value,
         __this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0436a02f:
  il2cpp_runtime_helper_022b2fd0();
  pUVar12 = (UI_BasePanel_o *)((UnityEngine_Object_Fields *)&set[1].monitor)->m_CachedPtr;
  if (pUVar12 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar12 = (UI_BasePanel_o *)pUVar12[1].fields._currentCategoryPanel;
  if (pUVar12 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&pUVar12[1].fields._currentCategoryPanelName = 0xffffffff;
    if (g_data_057ae015 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      g_data_057ae015 = '\x01';
    }
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UI_BasePopup);
    (pUVar12->fields).SinglePanel = (UnityEngine_Transform_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pUVar12->fields).SinglePanel);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar12,(MethodInfo *)0x0);
    return;
  }
  UI_BasePanel__GetPhysicalWidth(pUVar12,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorTitanMenu__ResetCharacter (UI_CharacterEditorTitanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x4369e80

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
  System_Collections_Generic_List_object__o *__this_03;
  Settings_TitanCustomSet_o *unaff_RBX;
  UI_BasePanel_o *pUVar6;
  
  if (g_data_057ae1dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae1dd = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    unaff_RBX = (Settings_TitanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (unaff_RBX != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((unaff_RBX->klass->_2).naturalAligment < bVar1) ||
         ((unaff_RBX->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_0436a02f;
    }
    __this_01 = (__this->fields)._gameManager;
    if ((char)fullReset == '\0') {
      if ((unaff_RBX != (Settings_TitanCustomSet_o *)0x0) &&
         (pSVar4 = (unaff_RBX->fields).Body, pSVar4 != (Settings_IntSetting_o *)0x0)) {
        if ((__this->fields)._currentBodyType != (pSVar4->fields)._value) goto label_04369ff3;
        if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
          pCVar3 = (__this_01->fields).Titan;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            return;
          }
          pCVar3 = (__this_01->fields).Titan;
          if ((pCVar3 != (Characters_DummyTitan_o *)0x0) &&
             (__this_02 = (pCVar3->fields).Setup, __this_02 != (Characters_BasicTitanSetup_o *)0x0)) {
            Characters_BasicTitanSetup__Load(__this_02,unaff_RBX,(MethodInfo *)0x0);
            pCVar3 = (__this_01->fields).Titan;
            if (pCVar3 != (Characters_DummyTitan_o *)0x0) {
              Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    else if (unaff_RBX != (Settings_TitanCustomSet_o *)0x0) {
label_04369ff3:
      pSVar4 = (unaff_RBX->fields).Body;
      if ((pSVar4 != (Settings_IntSetting_o *)0x0) &&
         ((__this->fields)._currentBodyType = (pSVar4->fields)._value,
         __this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0436a02f:
  il2cpp_runtime_helper_022b2fd0();
  pUVar6 = (UI_BasePanel_o *)unaff_RBX[1].fields.Head;
  if (pUVar6 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__GetPhysicalWidth(pUVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  pUVar6 = (UI_BasePanel_o *)pUVar6[1].fields._currentCategoryPanel;
  if (pUVar6 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&pUVar6[1].fields._currentCategoryPanelName = 0xffffffff;
    if (g_data_057ae015 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      g_data_057ae015 = '\x01';
    }
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UI_BasePopup);
    (pUVar6->fields).SinglePanel = (UnityEngine_Transform_o *)__this_03;
    il2cpp_runtime_helper_022b4080(&(pUVar6->fields).SinglePanel);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar6,(MethodInfo *)0x0);
    return;
  }
  UI_BasePanel__GetPhysicalWidth(pUVar6,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMinMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x436a040

float UI_CharacterEditorTitanMenu__GetMinMouseX(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UI_CharacterEditorTitanCostumePanel_o *__this_01;
  UI_BasePanel_o *__this_02;
  float extraout_XMM0_Da;
  float fVar2;
  
  __this_01 = (__this->fields)._costumePanel;
  if (__this_01 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
    return fVar2 + 20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_02 = (UI_BasePanel_o *)__this_01[1].fields.m_CachedPtr;
  if (__this_02 != (UI_BasePanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth(__this_02,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_02[1].fields._currentCategoryPanelName = 0xffffffff;
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


// UI.CharacterEditorTitanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMaxMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x436a070

float UI_CharacterEditorTitanMenu__GetMaxMouseX(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_object__o *__this_00;
  UI_CharacterEditorTitanCategoryPanel_o *__this_01;
  float extraout_XMM0_Da;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_01 = (__this->fields)._categoryPanel;
  if (__this_01 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_01,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) + -20.0;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&__this_01[1].fields.m_CancellationTokenSource = 0xffffffff;
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this_01->fields).SinglePanel = (UnityEngine_Transform_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).SinglePanel);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// UI.CharacterEditorTitanMenu$$.ctor
// il2cpp: void UI_CharacterEditorTitanMenu___ctor (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x436a0c0

void UI_CharacterEditorTitanMenu___ctor(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  (__this->fields)._currentBodyType = -1;
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


