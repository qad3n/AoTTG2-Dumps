// Type: UI.CharacterChangePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterChangePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// --------------------------------

// UI.CharacterChangePopup$$SetAllowedCategories
// il2cpp: void UI_CharacterChangePopup__SetAllowedCategories (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x439b920

void UI_CharacterChangePopup__SetAllowedCategories(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  long lVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar7;
  System_Collections_Generic_List_string__o *__this_01;
  
  if (g_data_057ae2fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"Human");
    g_data_057ae2fd = '\x01';
  }
  pSVar6 = "Human";
  lVar5 = MethodInfo_Void_Add;
  __this_01 = (__this->fields)._allowedCategories;
  if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar6,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__1_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__1_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae2fe = '\x01';
  }
  fontSize = (*__this_01->klass[1]._1.generic_class)(__this_01,__this_01->klass[1]._1.typeMetadataHandle);
  pSVar6 = (System_String_o *)
           (*(((System_Collections_Generic_List_object__VTable *)&__this_01->klass->vtable)->_4_unknown).
             methodPtr)(__this_01,
                        (((System_Collections_Generic_List_object__VTable *)&__this_01->klass->vtable)->
                        _4_unknown).method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pUVar4 = *(UnityEngine_Transform_o **)&__this_01[2].fields._size;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar4,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  pUVar4 = *(UnityEngine_Transform_o **)&__this_01[2].fields._size;
  pSVar6 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar4,__this_00,pSVar6,0.0,pUVar7,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$SetupBottomButtons
// il2cpp: void UI_CharacterChangePopup__SetupBottomButtons (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x439b9c0

void UI_CharacterChangePopup__SetupBottomButtons(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (g_data_057ae2fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__1_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__1_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae2fe = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterChangePopup__OnBottomBarButtonClick (UI_CharacterChangePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x439bb70

void UI_CharacterChangePopup__OnBottomBarButtonClick
               (UI_CharacterChangePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  Settings_TypedSetting_int__o *__this_00;
  UnityEngine_Object_o *x;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  MethodInfo *method_00;
  long lVar8;
  System_Collections_Generic_List_object__o *__this_01;
  long *plVar9;
  UI_CharacterPopup_o *__this_02;
  MethodInfo_2A23FA0 **ppMVar10;
  Characters_Human_o *pCVar11;
  Settings_TypedSetting_T__o *__this_03;
  GameManagers_InGameManager_o *unaff_R15;
  
  if (g_data_057ae2ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae2ff = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0439bba2;
label_0439bc76:
    il2cpp_runtime_helper_02337ed0();
    plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar9 == (long *)0x0) goto label_0439bf94;
label_0439bc93:
    if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu)
       ) goto label_0439bf99;
    *(undefined1 *)(plVar9 + 0x2f) = 1;
    unaff_R15 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (unaff_R15 != (GameManagers_InGameManager_o *)0x0) {
      bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar3 <= (unaff_R15->klass->_2).naturalAligment) &&
         ((unaff_R15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) goto label_0439bd1a;
      goto label_0439bf9e;
    }
label_0439bd1a:
    bVar7 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_0439bf36;
    bVar7 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar5 == 0) ||
       (__this_00 = *(Settings_TypedSetting_int__o **)(lVar5 + 0x20),
       __this_00 == (Settings_TypedSetting_int__o *)0x0)) goto label_0439bf94;
    Settings_TypedSetting_int___set_Value(__this_00,2,MethodInfo_Void_set_Value);
    name = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if ((Characters_Human_o *)name == (Characters_Human_o *)0x0) goto label_0439bf94;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (((Characters_Human_o *)name)->klass->_2).naturalAligment) &&
       ((((Characters_Human_o *)name)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      x = *(UnityEngine_Object_o **)&(((Characters_Human_o *)name)->fields).Dead;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar7 == '\0') ||
         (name = *(System_String_o **)&(((Characters_Human_o *)name)->fields).Dead,
         (Characters_Human_o *)name == (Characters_Human_o *)0x0)) {
label_0439be38:
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        else {
          bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
        }
        if (cVar6 == '\0') {
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          name = (System_String_o *)&TypeInfo_CustomLogicManager;
          if ((((lVar5 == 0) || (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50), lVar8 == 0)) ||
              (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) || (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0))
          goto label_0439bf94;
          fVar2 = *(float *)(lVar8 + 0x14);
          pfVar1 = (float *)(lVar5 + 0x20);
          if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto label_0439bf11;
        }
        if (unaff_R15 == (GameManagers_InGameManager_o *)0x0) goto label_0439bf94;
        if (*(char *)((long)&(unaff_R15->fields)._gameSettingsLoaded + 1) == '\0') {
          method_00 = (MethodInfo *)0x0;
          GameManagers_InGameManager__SpawnPlayer(unaff_R15,0,(MethodInfo *)0x0);
        }
label_0439bf11:
        iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
      }
      else {
        bVar3 = (TypeInfo_Human->_2).naturalAligment;
        if (((((Characters_Human_o *)name)->klass->_2).naturalAligment < bVar3) ||
           ((((Characters_Human_o *)name)->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_Human))
        goto label_0439be38;
        if ((*(char *)&(((Characters_Human_o *)name)->fields).FeedVictimName != '\0') ||
           ((((Characters_Human_o *)name)->fields).FinishSetup == 7)) goto label_0439bf11;
        if (unaff_R15 == (GameManagers_InGameManager_o *)0x0) goto label_0439bf94;
        method_00 = (MethodInfo *)GameManagers_InGameManager__GetSetHumanSettings(unaff_R15,(MethodInfo *)0x0)
        ;
        Characters_Human__ReloadHuman
                  ((Characters_Human_o *)name,(Settings_InGameCharacterSettings_o *)method_00,
                   (MethodInfo *)0x0);
        iVar4 = *(int *)&(TypeInfo_InGameManager->_2).field_0x1c;
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
      __this_02 = (UI_CharacterPopup_o *)0x0;
      GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
      UI_CharacterPopup__SaveLastCharacter(__this_02,method_00);
label_0439bf36:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0439bc76;
label_0439bba2:
    plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar9 != (long *)0x0) goto label_0439bc93;
label_0439bf94:
    il2cpp_runtime_helper_022b2c90();
label_0439bf99:
    il2cpp_runtime_helper_022b2fd0();
label_0439bf9e:
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae32c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    ppMVar10 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae32c = '\x01';
    name = (System_String_o *)ppMVar10;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  if (((lVar5 == 0) || (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70), lVar8 == 0)) ||
     (*(long *)(lVar8 + 0x28) == 0)) goto label_0439c27c;
  lVar5 = *(long *)(lVar5 + 0x28);
  name = *(System_String_o **)(*(long *)(lVar8 + 0x28) + 0x18);
  if ((TypeInfo_PlayerCharacter->fields)._stepPhase == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = System_String__op_Equality
                    (name,(System_String_o *)((TypeInfo_PlayerCharacter->fields).MovementSync)->klass,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(long *)(lVar8 + 0x28) == 0) goto label_0439c27c;
    name = *(System_String_o **)(*(long *)(lVar8 + 0x28) + 0x18);
    if ((TypeInfo_PlayerCharacter->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = System_String__op_Equality(name,((TypeInfo_PlayerCharacter->fields).MovementSync)->monitor,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    if (lVar5 == 0) goto label_0439c27c;
    pCVar11 = *(Characters_Human_o **)(lVar5 + 0x28);
    name = (System_String_o *)TypeInfo_PlayerCharacter;
    if ((TypeInfo_PlayerCharacter->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar11 == (Characters_Human_o *)0x0) goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pCVar11,((TypeInfo_PlayerCharacter->fields).MovementSync)->monitor,
               MethodInfo_Void_set_Value);
    name = (System_String_o *)pCVar11;
    if ((*(long *)(lVar8 + 0x40) == 0) ||
       (name = *(System_String_o **)(lVar5 + 0x40), (Characters_Human_o *)name == (Characters_Human_o *)0x0))
    goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)name,*(int32_t *)(*(long *)(lVar8 + 0x40) + 0x14),MethodInfo_Void_set_Value)
    ;
    lVar8 = *(long *)(lVar8 + 0x30);
    if (lVar8 == 0) goto label_0439c27c;
    __this_03 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x30);
    name = (System_String_o *)0x0;
    if (__this_03 == (Settings_TypedSetting_T__o *)0x0) goto label_0439c27c;
  }
  else {
    if (lVar5 == 0) goto label_0439c27c;
    pCVar11 = *(Characters_Human_o **)(lVar5 + 0x28);
    name = (System_String_o *)TypeInfo_PlayerCharacter;
    if ((TypeInfo_PlayerCharacter->fields)._stepPhase == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pCVar11 == (Characters_Human_o *)0x0) goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pCVar11,
               (Il2CppObject *)((TypeInfo_PlayerCharacter->fields).MovementSync)->klass,MethodInfo_Void_set_Value);
    name = (System_String_o *)pCVar11;
    if ((*(long *)(lVar8 + 0x48) == 0) ||
       (name = *(System_String_o **)(lVar5 + 0x48), (Characters_Human_o *)name == (Characters_Human_o *)0x0))
    goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)name,*(int32_t *)(*(long *)(lVar8 + 0x48) + 0x14),MethodInfo_Void_set_Value)
    ;
    if ((*(long *)(lVar8 + 0x40) == 0) ||
       (name = *(System_String_o **)(lVar5 + 0x40), (Characters_Human_o *)name == (Characters_Human_o *)0x0))
    goto label_0439c27c;
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)name,*(int32_t *)(*(long *)(lVar8 + 0x40) + 0x14),MethodInfo_Void_set_Value)
    ;
    if ((*(long *)(lVar8 + 0x30) == 0) ||
       (name = *(System_String_o **)(lVar5 + 0x30), (Characters_Human_o *)name == (Characters_Human_o *)0x0))
    goto label_0439c27c;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)name,*(Il2CppObject **)(*(long *)(lVar8 + 0x30) + 0x18),
               MethodInfo_Void_set_Value);
    lVar8 = *(long *)(lVar8 + 0x38);
    if (lVar8 == 0) goto label_0439c27c;
    __this_03 = *(Settings_TypedSetting_T__o **)(lVar5 + 0x38);
    if (__this_03 == (Settings_TypedSetting_T__o *)0x0) {
      name = (System_String_o *)(Characters_Human_o *)0x0;
      goto label_0439c27c;
    }
  }
  Settings_TypedSetting_object___set_Value(__this_03,*(Il2CppObject **)(lVar8 + 0x18),MethodInfo_Void_set_Value);
  plVar9 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x40);
  name = (System_String_o *)(Characters_Human_o *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
    return;
  }
label_0439c27c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae32d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae32d = '\x01';
  }
  (((Characters_Human_o *)name)->fields)._inGameManager = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&(((Characters_Human_o *)name)->fields)._inGameManager);
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_String);
  *(System_Collections_Generic_List_object__o **)&(((Characters_Human_o *)name)->fields)._cameraFPS =
       __this_01;
  il2cpp_runtime_helper_022b4080(&(((Characters_Human_o *)name)->fields)._cameraFPS);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$.ctor
// il2cpp: void UI_CharacterChangePopup___ctor (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x439c290

void UI_CharacterChangePopup___ctor(UI_CharacterPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (g_data_057ae32d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"CharacterPopup");
    g_data_057ae32d = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._allowedCategories = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._allowedCategories);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterChangePopup$$<SetupBottomButtons>b__1_0
// il2cpp: void UI_CharacterChangePopup___SetupBottomButtons_b__1_0 (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x439c350

void UI_CharacterChangePopup___SetupBottomButtons_b__1_0(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae300 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae300 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterChangePopup__OnBottomBarButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.CharacterChangePopup$$<SetupBottomButtons>b__1_1
// il2cpp: void UI_CharacterChangePopup___SetupBottomButtons_b__1_1 (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x439c390

void UI_CharacterChangePopup___SetupBottomButtons_b__1_1(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae301 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Join");
    g_data_057ae301 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterChangePopup__OnBottomBarButtonClick(__this,"Join",in_RDX);
  return;
}


