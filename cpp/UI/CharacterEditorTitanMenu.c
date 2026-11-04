// Type: UI.CharacterEditorTitanMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterEditorTitanMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanMenu.cs
// --------------------------------

// UI.CharacterEditorTitanMenu$$Setup
// il2cpp: void UI_CharacterEditorTitanMenu__Setup (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821e0e70

void UI_CharacterEditorTitanMenu__Setup(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  int32_t iVar3;
  Settings_TitanCustomSet_o *__this_01;
  
  if (Il2CppMethodInitialized_184346fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    Il2CppMethodInitialized_184346fdf = '\x01';
  }
  UI_CharacterEditorMenu__Setup((UI_CharacterEditorMenu_o *)__this,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).TitanCustomSets,
     __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
    __this_01 = (Settings_TitanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this_00,
                           (MethodInfo_C8EAF0 *)
                           MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    if (__this_01 != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        iVar3 = Settings_TitanCustomSet__GetBody(__this_01,(MethodInfo *)0x0);
        (__this->fields)._currentBodyType = iVar3;
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_Settings_TitanCustomSet);
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanMenu$$SetupPopups
// il2cpp: void UI_CharacterEditorTitanMenu__SetupPopups (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821e0e60

void UI_CharacterEditorTitanMenu__SetupPopups(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_BaseMenu__SetupPopups((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorTitanMenu$$IsPopupActive
// il2cpp: bool UI_CharacterEditorTitanMenu__IsPopupActive (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821da690

bool UI_CharacterEditorTitanMenu__IsPopupActive(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_SelectListPopup_o *pUVar1;
  UI_IconPickPopup_o *pUVar2;
  
  pUVar1 = (__this->fields).SelectListPopup;
  if (pUVar1 != (UI_SelectListPopup_o *)0x0) {
    if ((pUVar1->fields).IsActive != false) {
      return true;
    }
    pUVar2 = (__this->fields).IconPickPopup;
    if (pUVar2 != (UI_IconPickPopup_o *)0x0) {
      return (pUVar2->fields).IsActive;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanMenu$$RebuildPanels
// il2cpp: void UI_CharacterEditorTitanMenu__RebuildPanels (UI_CharacterEditorTitanMenu_o* __this, bool costumePopup, const MethodInfo* method);
// 0x1821e09f0

void UI_CharacterEditorTitanMenu__RebuildPanels
               (UI_CharacterEditorTitanMenu_o *__this,bool costumePopup,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_CharacterEditorTitanCostumePanel_o *pUVar4;
  UI_CharacterEditorTitanCategoryPanel_o *pUVar5;
  UI_CharacterEditorTitanSkinsPanel_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if (Il2CppMethodInitialized_184346fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanCategoryPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanCostumePanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanCategoryPanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanCostumePanel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346fe0 = '\x01';
  }
  pUVar4 = (__this->fields)._costumePanel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._costumePanel;
    if (pUVar4 == (UI_CharacterEditorTitanCostumePanel_o *)0x0) goto label_1821e0cb1;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._categoryPanel;
    if (pUVar5 == (UI_CharacterEditorTitanCategoryPanel_o *)0x0) goto label_1821e0cb1;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._skinsPanel;
    if (pUVar6 == (UI_CharacterEditorTitanSkinsPanel_o *)0x0) goto label_1821e0cb1;
    pUVar2 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    UnityEngine_Object__Destroy_2f1ff70(pUVar2,(MethodInfo *)0x0);
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar3,true,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanCostumePanel);
  if (pUVar4 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanCostumePanel);
    (__this->fields)._costumePanel = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._costumePanel,pUVar4);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar5 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar3,true,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanCategoryPanel);
    if (pUVar5 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
      pUVar5 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar5,
                          (MethodInfo_6651A0 *)
                          MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanCategoryPanel);
      (__this->fields)._categoryPanel = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._categoryPanel,pUVar5);
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar6 = UI_ElementFactory__CreateHeadedPanel_object_
                         (pUVar3,true,
                          (MethodInfo_6ABA40 *)
                          MethodInfo_UI_ElementFactory_CreateHeadedPanel_CharacterEditorTitanSkinsPanel);
      if (pUVar6 != (UI_CharacterEditorTitanSkinsPanel_o *)0x0) {
        pUVar6 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar6,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_CharacterEditorTitanSkinsPanel);
        (__this->fields)._skinsPanel = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._skinsPanel,pUVar6);
        pUVar4 = (__this->fields)._costumePanel;
        if (pUVar4 != (UI_CharacterEditorTitanCostumePanel_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
          UI_ElementFactory__SetAnchor(pUVar7,0,0,(UnityEngine_Vector2_o)0xc1a0000041a00000,(MethodInfo *)0x0)
          ;
          pUVar5 = (__this->fields)._categoryPanel;
          if (pUVar5 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
            pUVar7 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
            UI_ElementFactory__SetAnchor
                      (pUVar7,2,2,(UnityEngine_Vector2_o)0xc1a00000c1a00000,(MethodInfo *)0x0);
            pUVar6 = (__this->fields)._skinsPanel;
            if (pUVar6 != (UI_CharacterEditorTitanSkinsPanel_o *)0x0) {
              pUVar7 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
              UI_ElementFactory__SetAnchor
                        (pUVar7,2,2,(UnityEngine_Vector2_o)0xc3a00000c1a00000,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1821e0cb1:
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanMenu$$ResetCharacter
// il2cpp: void UI_CharacterEditorTitanMenu__ResetCharacter (UI_CharacterEditorTitanMenu_o* __this, bool fullReset, const MethodInfo* method);
// 0x1821e0cc0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e0e34: xor r8d, r8d
// asm:   0x1821e0e37: mov dl, 1
// asm:   0x1821e0e39: mov rcx, rdi
// asm:   0x1821e0e3c: call 0x181e32920  ; GameManagers_CharacterEditorGameManager__ReinstantiateCharacter()
// asm:   0x1821e0e41: jmp 0x1821e0e0a

void UI_CharacterEditorTitanMenu__ResetCharacter
               (UI_CharacterEditorTitanMenu_o *__this,bool fullReset,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Settings_TitanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  GameManagers_CharacterEditorGameManager_o *__this_01;
  Characters_DummyTitan_o *pCVar4;
  bool bVar5;
  int32_t iVar6;
  Settings_TitanCustomSet_o *__this_02;
  
  if (Il2CppMethodInitialized_184346fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    Il2CppMethodInitialized_184346fe1 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if (((pSVar3 != (Settings_TitanCustomSettings_o *)0x0) &&
      (__this_00 = (pSVar3->fields).TitanCustomSets,
      __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) &&
     (__this_02 = (Settings_TitanCustomSet_o *)
                  Settings_SetSettingsContainer_object___GetSelectedSet
                            ((Settings_SetSettingsContainer_T__o *)__this_00,
                             (MethodInfo_C8EAF0 *)
                             MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet),
     __this_02 != (Settings_TitanCustomSet_o *)0x0)) {
    bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
    if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Settings_TitanCustomSet);
    }
    __this_01 = (__this->fields)._gameManager;
    if ((fullReset) ||
       (iVar2 = (__this->fields)._currentBodyType,
       iVar6 = Settings_TitanCustomSet__GetBody(__this_02,(MethodInfo *)0x0), iVar2 != iVar6)) {
      iVar6 = Settings_TitanCustomSet__GetBody(__this_02,(MethodInfo *)0x0);
      (__this->fields)._currentBodyType = iVar6;
      if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
        GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_01,true,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_01 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
      pCVar4 = (__this_01->fields).Titan;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pCVar4 = (__this_01->fields).Titan;
      if (pCVar4 != (Characters_DummyTitan_o *)0x0) {
        Characters_DummyTitan__LoadSet(pCVar4,__this_02,true,(MethodInfo *)0x0);
        pCVar4 = (__this_01->fields).Titan;
        if (pCVar4 != (Characters_DummyTitan_o *)0x0) {
          Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanMenu$$GetMinMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMinMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821d9c30

float UI_CharacterEditorTitanMenu__GetMinMouseX(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

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


// UI.CharacterEditorTitanMenu$$GetMaxMouseX
// il2cpp: float UI_CharacterEditorTitanMenu__GetMaxMouseX (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821e0990

float UI_CharacterEditorTitanMenu__GetMaxMouseX(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  UI_CharacterEditorTitanCategoryPanel_o *__this_00;
  int32_t iVar1;
  float fVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  __this_00 = (__this->fields)._categoryPanel;
  if (__this_00 != (UI_CharacterEditorTitanCategoryPanel_o *)0x0) {
    fVar2 = UI_BasePanel__GetPhysicalWidth((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return ((float)iVar1 - fVar2) - 20.0;
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorTitanMenu$$.ctor
// il2cpp: void UI_CharacterEditorTitanMenu___ctor (UI_CharacterEditorTitanMenu_o* __this, const MethodInfo* method);
// 0x1821e0f40

void UI_CharacterEditorTitanMenu___ctor(UI_CharacterEditorTitanMenu_o *__this,MethodInfo *method)

{
  (__this->fields)._currentBodyType = -1;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


