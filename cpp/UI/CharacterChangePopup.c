// Type: UI.CharacterChangePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterChangePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// --------------------------------

// UI.CharacterChangePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterChangePopup__get_EscapeBehavior (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x5cfdcc0

int32_t UI_CharacterChangePopup__get_EscapeBehavior(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.CharacterChangePopup$$SetAllowedCategories
// il2cpp: void UI_CharacterChangePopup__SetAllowedCategories (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x5cfdcd0

void UI_CharacterChangePopup__SetAllowedCategories(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *item;
  
  if (Il2CppMethodInitialized_07547cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_07547cf4 = '\x01';
  }
  item = "Human";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterChangePopup$$SetupBottomButtons
// il2cpp: void UI_CharacterChangePopup__SetupBottomButtons (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x5cfdd70

void UI_CharacterChangePopup__SetupBottomButtons(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    Il2CppMethodInitialized_07547cf5 = '\x01';
  }
  pUVar1 = (__this->fields).BottomBar;
  pGVar2 = (__this->fields).View;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Button
              (pGVar2,pUVar1,pSVar3,"ingame.character.confirm","Back",220.0,44.0,3,(MethodInfo *)0x0
              );
    pUVar1 = (__this->fields).BottomBar;
    pGVar2 = (__this->fields).View;
    pSVar3 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgInGameView__Button
                (pGVar2,pUVar1,pSVar3,"ingame.character.confirm","Join",220.0,44.0,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterChangePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterChangePopup__OnBottomBarButtonClick (UI_CharacterChangePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5cfdea0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfdee6: jmp 0x5cfe2bc
// asm:   0x5cfe18c: jmp 0x5cfe222

void UI_CharacterChangePopup__OnBottomBarButtonClick
               (UI_CharacterChangePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  UI_BaseMenu_o *pUVar4;
  GameManagers_InGameManager_o *__this_00;
  Settings_IntSetting_o *__this_01;
  GameManagers_BaseGameManager_o *pGVar5;
  UnityEngine_Object_o *x;
  Characters_Human_o *__this_02;
  CustomLogic_CustomLogicEvaluator_o *pCVar6;
  Settings_InGameSet_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Settings_FloatSetting_o *pSVar9;
  bool bVar10;
  Settings_InGameCharacterSettings_o *pSVar11;
  
  if (Il2CppMethodInitialized_07547cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    Il2CppMethodInitialized_07547cf6 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_05cfdfa6;
label_05cfded2:
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_05cfded2;
label_05cfdfa6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (pUVar4 == (UI_BaseMenu_o *)0x0) goto label_05cfe2bc;
  bVar3 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((pUVar4->klass->_2).typeHierarchyDepth < bVar3) ||
     ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  *(undefined1 *)&(*(uint64_t *)((char *)pUVar4 + 0x158)) = 1;
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar10 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar10) goto label_05cfe26b;
  bVar10 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if (!bVar10) {
    return;
  }
  pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar11 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (__this_01 = (pSVar11->fields).ChooseStatus, __this_01 == (Settings_IntSetting_o *)0x0))
  goto label_05cfe2bc;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this_01,2,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_05cfe2bc;
  bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar5->klass->_2).typeHierarchyDepth < bVar3) ||
     ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
  }
  x = (*(uint64_t *)((char *)pGVar5 + 0x80));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar10) && (__this_02 = (*(uint64_t *)((char *)pGVar5 + 0x80)), __this_02 != (Characters_Human_o *)0x0)) {
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((__this_02->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_05cfe16e;
    if (((__this_02->fields).Dead == false) && ((__this_02->fields)._state != 7)) {
      if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_05cfe2bc;
      pSVar11 = GameManagers_InGameManager__GetSetHumanSettings(__this_00,(MethodInfo *)0x0);
      Characters_Human__ReloadHuman(__this_02,pSVar11,(MethodInfo *)0x0);
    }
  }
  else {
label_05cfe16e:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    else {
      bVar10 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    }
    if (!bVar10) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((((pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
           pSVar7 == (Settings_InGameSet_o *)0x0)) ||
          (pSVar8 = (pSVar7->fields).Misc, pSVar8 == (Settings_InGameMiscSettings_o *)0x0)) ||
         (pSVar9 = (pSVar8->fields).AllowSpawnTime, pSVar9 == (Settings_FloatSetting_o *)0x0))
      goto label_05cfe2bc;
      fVar2 = (pSVar9->fields)._value;
      pfVar1 = &(pCVar6->fields).CurrentTime;
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto label_05cfe241;
    }
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_05cfe2bc:
      ThrowNullReferenceException();
    }
    if ((__this_00->fields).HasSpawned == false) {
      GameManagers_InGameManager__SpawnPlayer(__this_00,false,(MethodInfo *)0x0);
    }
  }
label_05cfe241:
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter((UI_CharacterPopup_o *)__this,(MethodInfo *)0x0);
label_05cfe26b:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterChangePopup$$.ctor
// il2cpp: void UI_CharacterChangePopup___ctor (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x5cfe2e0

void UI_CharacterChangePopup___ctor(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  UI_CharacterPopup___ctor((UI_CharacterPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


