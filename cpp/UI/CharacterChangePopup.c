// Type: UI.CharacterChangePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterChangePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterChangePopup.cs
// --------------------------------

// UI.CharacterChangePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterChangePopup__get_EscapeBehavior (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_CharacterChangePopup__get_EscapeBehavior(UI_CharacterChangePopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.CharacterChangePopup$$SetAllowedCategories
// il2cpp: void UI_CharacterChangePopup__SetAllowedCategories (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x18221e6e0

void UI_CharacterChangePopup__SetAllowedCategories(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_array *pSVar3;
  System_String_o *item;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_184347187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    Il2CppMethodInitialized_184347187 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  item = "Human";
  __this_00 = (__this->fields)._allowedCategories;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterChangePopup$$SetupBottomButtons
// il2cpp: void UI_CharacterChangePopup__SetupBottomButtons (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x18221e790

void UI_CharacterChangePopup__SetupBottomButtons(UI_CharacterChangePopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgInGameView_o *pGVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347188 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.character.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    Il2CppMethodInitialized_184347188 = '\x01';
  }
  pGVar1 = (__this->fields).View;
  pUVar2 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Button
              (pGVar1,pUVar2,pSVar3,"ingame.character.confirm","Back",220.0,44.0,3,(MethodInfo *)0x0
              );
    pGVar1 = (__this->fields).View;
    pUVar2 = (__this->fields).BottomBar;
    pSVar3 = UI_UIManager__GetLocaleCommon("Join",(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgInGameView__Button
                (pGVar1,pUVar2,pSVar3,"ingame.character.confirm","Join",220.0,44.0,0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterChangePopup$$OnBottomBarButtonClick
// il2cpp: void UI_CharacterChangePopup__OnBottomBarButtonClick (UI_CharacterChangePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18221e290

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
  GameManagers_BaseGameManager_c *pGVar6;
  void *pvVar7;
  Characters_Human_c *pCVar8;
  CustomLogic_CustomLogicEvaluator_o *pCVar9;
  Settings_InGameSet_o *pSVar10;
  Settings_InGameMiscSettings_o *pSVar11;
  Settings_FloatSetting_o *pSVar12;
  bool bVar13;
  Settings_InGameCharacterSettings_o *pSVar14;
  
  if (Il2CppMethodInitialized_184347189 == '\0') {
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
    Il2CppMethodInitialized_184347189 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar4 == (UI_BaseMenu_o *)0x0) goto label_18221e6b3;
  bVar3 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
  if (((pUVar4->klass->_2).typeHierarchyDepth < bVar3) ||
     ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
  }
  *(undefined1 *)&(*(uint64_t *)((char *)pUVar4 + 0x168)) = 1;
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar13 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar13) goto label_18221e690;
  bVar13 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
  if (!bVar13) {
    return;
  }
  pSVar14 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
  if ((pSVar14 == (Settings_InGameCharacterSettings_o *)0x0) ||
     (__this_01 = (pSVar14->fields).ChooseStatus, __this_01 == (Settings_IntSetting_o *)0x0))
  goto label_18221e6b3;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this_01,2,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_18221e6b3;
  bVar3 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar5->klass->_2).typeHierarchyDepth < bVar3) ||
     ((pGVar5->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception(pGVar5);
  }
  pGVar6 = (*(uint64_t *)((char *)pGVar5 + 0x78));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar13) && ((*(uint64_t *)((char *)pGVar5 + 0x78)) != (GameManagers_BaseGameManager_c *)0x0)) {
    pvVar7 = (((*(Il2CppClass **)((char *)pGVar5 + 0x78)))->_1).image;
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((*(byte *)((longlong)pvVar7 + 0x130) < bVar3) ||
       (*(Characters_Human_c **)(*(longlong *)((longlong)pvVar7 + 200) + -8 + (ulonglong)bVar3 * 8) !=
        TypeInfo_Characters_Human)) goto label_18221e5b2;
    pGVar6 = (*(uint64_t *)((char *)pGVar5 + 0x78));
    if (pGVar6 == (GameManagers_BaseGameManager_c *)0x0) goto label_18221e6b3;
    pCVar8 = (pGVar6->_1).image;
    bVar3 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((pCVar8->_2).typeHierarchyDepth < bVar3) ||
       ((pCVar8->_2).typeHierarchy[(ulonglong)bVar3 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar6,TypeInfo_Characters_Human);
    }
    if ((*(bool *)&(pGVar6->_1).interopData == false) && (*(int *)&(pGVar6->vtable)._3_ToString.method != 7))
    {
      if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_18221e6b3;
      pSVar14 = GameManagers_InGameManager__GetSetHumanSettings(__this_00,(MethodInfo *)0x0);
      Characters_Human__ReloadHuman((Characters_Human_o *)pGVar6,pSVar14,(MethodInfo *)0x0);
    }
  }
  else {
label_18221e5b2:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar13 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar13) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((((pCVar9 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
           (pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,
           pSVar10 == (Settings_InGameSet_o *)0x0)) ||
          (pSVar11 = (pSVar10->fields).Misc, pSVar11 == (Settings_InGameMiscSettings_o *)0x0)) ||
         (pSVar12 = (pSVar11->fields).AllowSpawnTime, pSVar12 == (Settings_FloatSetting_o *)0x0))
      goto label_18221e6b3;
      fVar2 = (pSVar12->fields)._value;
      pfVar1 = &(pCVar9->fields).CurrentTime;
      if (fVar2 < *pfVar1 || fVar2 == *pfVar1) goto label_18221e663;
    }
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
label_18221e6b3:
      ThrowNullReferenceException();
    }
    if ((__this_00->fields).HasSpawned == false) {
      GameManagers_InGameManager__SpawnPlayer(__this_00,false,(MethodInfo *)0x0);
    }
  }
label_18221e663:
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__UpdateRoundPlayerProperties((MethodInfo *)0x0);
  GameManagers_InGameManager__OnCharacterChosen((MethodInfo *)0x0);
  UI_CharacterPopup__SaveLastCharacter((UI_CharacterPopup_o *)__this,(MethodInfo *)0x0);
label_18221e690:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.CharacterChangePopup$$.ctor
// il2cpp: void UI_CharacterChangePopup___ctor (UI_CharacterChangePopup_o* __this, const MethodInfo* method);
// 0x18221e8f0

void
UI_CharacterChangePopup___ctor(UI_CharacterChangePopup_o* __this, MethodInfo* method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_string__InGameCharacterSettings__o *__this_01;
  
  if (Il2CppMethodInitialized_1843471bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    Il2CppMethodInitialized_1843471bc = '\x01';
  }
  (__this->fields).LocaleCategory = "CharacterPopup";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"CharacterPopup");
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._allowedCategories = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._allowedCategories,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_InGameCharacterSettings_ctor);
  (__this->fields)._choices = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._choices,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


