// Type: Controllers.BasePlayerController
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Controllers/BasePlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasePlayerController.cs
// --------------------------------

// Controllers.BasePlayerController$$Awake
// il2cpp: void Controllers_BasePlayerController__Awake (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x1820f2af0

void Controllers_BasePlayerController__Awake(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_GeneralInputSettings_o *value;
  Settings_InteractionInputSettings_o *value_00;
  UI_InGameMenu_o *value_01;
  GameManagers_InGameManager_o *value_02;
  Characters_BaseCharacter_o *value_03;
  
  if (Il2CppMethodInitialized_184346a8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346a8f = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 != (Settings_InputSettings_o *)0x0) {
    value = (pSVar2->fields).General;
    (__this->fields)._generalInput = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._generalInput,value);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar2 != (Settings_InputSettings_o *)0x0) {
      value_00 = (pSVar2->fields).Interaction;
      (__this->fields)._interactionInput = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._interactionInput,value_00);
      value_03 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      (__this->fields)._character = value_03;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._character,value_03);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      value_01 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (value_01 == (UI_InGameMenu_o *)0x0) {
        (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          il2cpp_codegen_raise_invalid_cast_exception(value_01);
        }
        (__this->fields)._inGameMenu = value_01;
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchyDepth < bVar1) ||
           ((((UI_BaseMenu_c *)value_01->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
          il2cpp_codegen_raise_invalid_cast_exception(value_01);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameMenu,value_01);
      value_02 = (GameManagers_InGameManager_o *)
                 TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (value_02 == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,(void *)0x0);
        return;
      }
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (value_02->klass->_2).typeHierarchyDepth) &&
         ((value_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        (__this->fields)._gameManager = value_02;
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if ((bVar1 <= (value_02->klass->_2).typeHierarchyDepth) &&
           ((value_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value_02);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(value_02);
      }
      il2cpp_codegen_raise_invalid_cast_exception(value_02);
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$Start
// il2cpp: void Controllers_BasePlayerController__Start (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x180547020

void
Controllers_BasePlayerController__Start(Controllers_BasePlayerController_o* __this, MethodInfo* method)

{
  return;
}


// Controllers.BasePlayerController$$Update
// il2cpp: void Controllers_BasePlayerController__Update (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x1820f3970

void Controllers_BasePlayerController__Update(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  bool bVar2;
  char cVar3;
  
  if (Il2CppMethodInitialized_184346a90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346a90 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pGVar1->fields).GlobalPause != false) {
    return;
  }
  bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      cVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene;
      goto label_1820f3a21;
    }
  }
  cVar3 = '\x01';
label_1820f3a21:
  (*(__this->klass->vtable)._8_UpdateMovementInput.methodPtr)
            (__this,cVar3 != '\0',(__this->klass->vtable)._8_UpdateMovementInput.method);
  Controllers_BasePlayerController__UpdateMenuInput(__this,cVar3 != '\0',(MethodInfo *)0x0);
  if (cVar3 == '\0') {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  }
  else {
    bVar2 = true;
  }
  (*(__this->klass->vtable)._7_UpdateActionInput.methodPtr)
            (__this,bVar2,(__this->klass->vtable)._7_UpdateActionInput.method);
  (*(__this->klass->vtable)._9_UpdateUI.methodPtr)
            (__this,(System_Type_o *)(ulonglong)bVar2,(__this->klass->vtable)._9_UpdateUI.method);
  return;
}


// Controllers.BasePlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasePlayerController__UpdateActionInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x1820f32d0

void Controllers_BasePlayerController__UpdateActionInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_List_BaseUseable__o *pSVar5;
  Settings_GeneralInputSettings_o *pSVar6;
  bool bVar7;
  System_String_array *pSVar8;
  Settings_KeybindSetting_o *pSVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184346a91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184346a91 = '\x01';
  }
  if (inMenu) {
    return;
  }
  pCVar2 = (__this->fields)._character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    if ((pCVar2->fields).Dead != false) {
      return;
    }
    pSVar8 = (__this->fields)._quickSelectOptions;
    uVar10 = 0;
    if (pSVar8 != (System_String_array *)0x0) {
      for (; (int)uVar10 < (int)pSVar8->max_length; uVar10 = uVar10 + 1) {
        pSVar8 = (__this->fields)._quickSelectOptions;
        if (pSVar8 == (System_String_array *)0x0) goto label_1820f348a;
        if ((uint)pSVar8->max_length <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if ((((pSVar3 == (Settings_InputSettings_o *)0x0) ||
             (pSVar4 = (pSVar3->fields).Interaction, pSVar4 == (Settings_InteractionInputSettings_o *)0x0)) ||
            (__this_00 = (pSVar4->fields).Settings,
            __this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
           (pSVar9 = (Settings_KeybindSetting_o *)
                     System_Collections_Specialized_OrderedDictionary__get_Item
                               (__this_00,(Il2CppObject *)pSVar8->m_Items[(int)uVar10],(MethodInfo *)0x0),
           pSVar9 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f348a;
        bVar1 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
        if (((pSVar9->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar9->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar9,TypeInfo_Settings_KeybindSetting);
        }
        bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
        if (bVar7) {
          pCVar2 = (__this->fields)._character;
          if ((pCVar2 == (Characters_BaseCharacter_o *)0x0) ||
             (pSVar5 = (pCVar2->fields).Items, pSVar5 == (System_Collections_Generic_List_BaseUseable__o *)0x0
             )) goto label_1820f348a;
          if ((int)uVar10 < (pSVar5->fields)._size) {
            (*(pCVar2->klass->vtable)._85_UseItem.methodPtr)
                      (pCVar2,uVar10,(pCVar2->klass->vtable)._85_UseItem.method);
          }
        }
        pSVar8 = (__this->fields)._quickSelectOptions;
        if (pSVar8 == (System_String_array *)0x0) goto label_1820f348a;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
          (pSVar6 = (pSVar3->fields).General, pSVar6 != (Settings_GeneralInputSettings_o *)0x0)) &&
         (pSVar9 = (pSVar6->fields).HideCursor, pSVar9 != (Settings_KeybindSetting_o *)0x0)) {
        bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar9,false,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        (__this->fields).HideCursor = (__this->fields).HideCursor == false;
        return;
      }
    }
  }
label_1820f348a:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$UpdateMovementInput
// il2cpp: void Controllers_BasePlayerController__UpdateMovementInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x1820f36f0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820f3831: xor edi, edi
// asm:   0x1820f3833: jmp 0x1820f3843
// asm:   0x1820f3841: mov ebp, esi
// asm:   0x1820f3953: mov byte ptr [rax + 0xd4], 0
// asm:   0x1820f395a: jmp 0x1820f392c

void Controllers_BasePlayerController__UpdateMovementInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Settings_GeneralInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  Cameras_BaseCamera_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_00;
  Characters_BaseCharacter_o *pCVar8;
  bool bVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346a92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346a92 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if (inMenu) {
    if ((__this->fields)._autorun != false) {
      return;
    }
  }
  else {
    pSVar4 = (__this->fields)._generalInput;
    if ((pSVar4 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Autorun, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f395c;
    bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar5,false,(MethodInfo *)0x0);
    if (bVar9) {
      (__this->fields)._autorun = (__this->fields)._autorun == false;
    }
    pSVar4 = (__this->fields)._generalInput;
    if ((pSVar4 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Forward, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f395c;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
    iVar13 = -1;
    if (bVar9) {
      iVar12 = 1;
    }
    else {
      pSVar4 = (__this->fields)._generalInput;
      if ((pSVar4 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).Back, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f395c;
      iVar12 = 0;
      bVar9 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
      if (bVar9) {
        iVar12 = -1;
      }
    }
    pSVar4 = (__this->fields)._generalInput;
    if ((pSVar4 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Left, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f395c;
    bVar9 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
    if (!bVar9) {
      pSVar4 = (__this->fields)._generalInput;
      if ((pSVar4 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar5 = (pSVar4->fields).Right, pSVar5 == (Settings_KeybindSetting_o *)0x0)) goto label_1820f395c;
      iVar13 = 0;
      bVar9 = Settings_KeybindSetting__GetKey(pSVar5,false,(MethodInfo *)0x0);
      if (bVar9) {
        iVar13 = 1;
      }
    }
    if ((iVar12 != 0) || (iVar13 != 0)) {
      (__this->fields)._autorun = false;
    }
    if ((((__this->fields)._autorun != false) || (iVar12 != 0)) || (iVar13 != 0)) {
      pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar6 != (Cameras_BaseCamera_o *)0x0) &&
          (pUVar7 = (pCVar6->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_00 = (pUVar7->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
        pCVar8 = (__this->fields)._character;
        pUVar10 = UnityEngine_Transform__get_rotation(&local_38,__this_00,(MethodInfo *)0x0);
        local_28[0].x = (pUVar10->fields).x;
        local_28[0].y = (pUVar10->fields).y;
        local_28[0].z = (pUVar10->fields).z;
        local_28[0].w = (pUVar10->fields).w;
        pUVar11 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                             (MethodInfo *)0x0);
        uVar2 = (pUVar11->fields).x;
        uVar3 = (pUVar11->fields).y;
        local_48.x = (float)uVar2 * 57.29578;
        local_48.y = (float)uVar3 * 57.29578;
        local_48.z = (pUVar11->fields).z * 57.29578;
        pUVar11 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                             (MethodInfo *)0x0);
        if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
          fVar1 = (pUVar11->fields).y;
          fVar14 = (float)il2cpp_runtime_helper_1804f3c50();
          (pCVar8->fields).TargetAngle = (fVar1 + 90.0) - fVar14 * 57.29578;
          pCVar8 = (__this->fields)._character;
          if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
            (pCVar8->fields).HasDirection = true;
            return;
          }
        }
      }
      goto label_1820f395c;
    }
  }
  pCVar8 = (__this->fields)._character;
  if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar8->fields).HasDirection = false;
    return;
  }
label_1820f395c:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$UpdateMenuInput
// il2cpp: void Controllers_BasePlayerController__UpdateMenuInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x1820f34b0

void Controllers_BasePlayerController__UpdateMenuInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Settings_InteractionInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  UI_InGameMenu_o *pUVar4;
  UI_EmoteHandler_o *pUVar5;
  UI_ItemHandler_o *pUVar6;
  UI_ActionHandler_o *pUVar7;
  bool bVar8;
  
  if (Il2CppMethodInitialized_184346a93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184346a93 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  if (!bVar8) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false) {
      pCVar1 = (__this->fields)._character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_1820f36e5;
      if ((pCVar1->fields).Dead == false) {
        pSVar2 = (__this->fields)._interactionInput;
        if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
           (pSVar3 = (pSVar2->fields).EmoteMenu, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
          if (bVar8) {
            pUVar4 = (__this->fields)._inGameMenu;
            if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
               (pUVar5 = (pUVar4->fields).EmoteHandler, pUVar5 == (UI_EmoteHandler_o *)0x0))
            goto label_1820f36e5;
            UI_EmoteHandler__ToggleEmoteWheel(pUVar5,(MethodInfo *)0x0);
          }
          pSVar2 = (__this->fields)._interactionInput;
          if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).ItemMenu, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
            if (bVar8) {
              pUVar4 = (__this->fields)._inGameMenu;
              if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
                 (pUVar6 = (pUVar4->fields).ItemHandler, pUVar6 == (UI_ItemHandler_o *)0x0))
              goto label_1820f36e5;
              UI_ItemHandler__ToggleItemWheel(pUVar6,(MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields)._interactionInput;
            if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).ActionMenu, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
              if (bVar8) {
                pUVar4 = (__this->fields)._inGameMenu;
                if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
                   (pUVar7 = (pUVar4->fields).ActionHandler, pUVar7 == (UI_ActionHandler_o *)0x0))
                goto label_1820f36e5;
                UI_ActionHandler__ToggleActionWheel(pUVar7,(MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields)._interactionInput;
              if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
                 (pSVar3 = (pSVar2->fields).MenuNext, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
                bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
                if (!bVar8) {
                  return;
                }
                pUVar4 = (__this->fields)._inGameMenu;
                if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
                   (pUVar5 = (pUVar4->fields).EmoteHandler, pUVar5 != (UI_EmoteHandler_o *)0x0)) {
                  UI_EmoteHandler__NextEmoteWheel(pUVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto label_1820f36e5;
      }
    }
  }
  pUVar4 = (__this->fields)._inGameMenu;
  if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).EmoteHandler, pUVar5 != (UI_EmoteHandler_o *)0x0)) {
    UI_EmoteHandler__SetEmoteWheel(pUVar5,false,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._inGameMenu;
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
       (pUVar6 = (pUVar4->fields).ItemHandler, pUVar6 != (UI_ItemHandler_o *)0x0)) {
      UI_ItemHandler__SetItemWheel(pUVar6,false,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._inGameMenu;
      if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
         (pUVar7 = (pUVar4->fields).ActionHandler, pUVar7 != (UI_ActionHandler_o *)0x0)) {
        UI_ActionHandler__SetActionWheel(pUVar7,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1820f36e5:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$UpdateUI
// il2cpp: void Controllers_BasePlayerController__UpdateUI (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x180547020

void
Controllers_BasePlayerController__UpdateUI(Controllers_BasePlayerController_o* __this, bool inMenu, MethodInfo* method)

{
  return;
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, int32_t forward, int32_t right, const MethodInfo* method);
// 0x1820f3040

float Controllers_BasePlayerController__GetTargetAngle
                (Controllers_BasePlayerController_o *__this,int32_t forward,int32_t right,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Cameras_BaseCamera_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346a94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346a94 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar4 != (Cameras_BaseCamera_o *)0x0) &&
      (pUVar5 = (pCVar4->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar5->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar6 = UnityEngine_Transform__get_rotation(&local_38,__this_00,(MethodInfo *)0x0);
    local_28[0].x = (pUVar6->fields).x;
    local_28[0].y = (pUVar6->fields).y;
    local_28[0].z = (pUVar6->fields).z;
    local_28[0].w = (pUVar6->fields).w;
    pUVar7 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                        (MethodInfo *)0x0);
    uVar2 = (pUVar7->fields).x;
    uVar3 = (pUVar7->fields).y;
    local_48.x = (float)uVar2 * 57.29578;
    local_48.y = (float)uVar3 * 57.29578;
    local_48.z = (pUVar7->fields).z * 57.29578;
    pUVar7 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        (MethodInfo *)0x0);
    fVar1 = (pUVar7->fields).y;
    fVar8 = (float)il2cpp_runtime_helper_1804f3c50();
    return (fVar1 + 90.0) - fVar8 * 57.29578;
  }
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$GetAimAngles
// il2cpp: System_Single_array* Controllers_BasePlayerController__GetAimAngles (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x1820f2d40

System_Single_array *
Controllers_BasePlayerController__GetAimAngles(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Ray_o *pUVar6;
  System_Single_array *pSVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Ray_o local_68 [4];
  
  if (Il2CppMethodInitialized_184346a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_184346a95 = '\x01';
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar1->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar5 = UI_CursorManager__GetInGameMousePosition((UnityEngine_Vector3_o *)local_68,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      local_78.x = (pUVar5->fields).x;
      local_78.y = (pUVar5->fields).y;
      local_78.z = (pUVar5->fields).z;
      pUVar6 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (local_68,__this_00,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
      pUVar5 = &(pUVar6->fields).m_Direction;
      fVar11 = (pUVar5->fields).x;
      fVar10 = (pUVar6->fields).m_Direction.fields.y;
      local_78.x = (pUVar5->fields).x;
      local_78.y = (pUVar5->fields).y;
      fVar12 = (pUVar6->fields).m_Direction.fields.z;
      local_78.z = fVar12;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
      if (fVar8 <= 1e-05) {
        pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar11 = (pUVar2->zeroVector).fields.x;
        fVar10 = (pUVar2->zeroVector).fields.y;
        fVar12 = (pUVar2->zeroVector).fields.z;
      }
      else {
        fVar11 = fVar11 / fVar8;
        fVar10 = fVar10 / fVar8;
        fVar12 = fVar12 / fVar8;
      }
      fVar10 = fVar10 * 1000.0;
      fVar12 = fVar12 * 1000.0;
      if (Il2CppMethodInitialized_18433de59 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433de59 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar9 = (double)(fVar10 * fVar10 + fVar11 * 1000.0 * fVar11 * 1000.0 + fVar12 * fVar12);
      if (dVar9 < 0.0) {
        dVar9 = sqrt(dVar9);
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      fVar11 = (float)il2cpp_runtime_helper_1804fa840(fVar10 / (float)dVar9);
      pCVar3 = (__this->fields)._character;
      if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_01 = (pUVar4->fields).Transform, __this_01 != (UnityEngine_Transform_o *)0x0)) {
        pUVar5 = UnityEngine_Transform__get_eulerAngles
                           ((UnityEngine_Vector3_o *)local_68,__this_01,(MethodInfo *)0x0);
        fVar10 = (pUVar5->fields).y;
        fVar12 = (float)il2cpp_runtime_helper_1804f3c50(fVar12);
        fVar12 = (fVar10 - 90.0) - -fVar12 * 57.29578;
        fVar10 = (float)il2cpp_runtime_helper_1804f4110(fVar12 / 360.0);
        fVar12 = fVar12 - fVar10 * 360.0;
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        else if (360.0 < fVar12) {
          fVar12 = 360.0;
        }
        if (180.0 < fVar12) {
          fVar12 = fVar12 - 360.0;
        }
        pSVar7 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,2);
        if (pSVar7 != (System_Single_array *)0x0) {
          if (((int)pSVar7->max_length != 0) && (pSVar7->m_Items[0] = -fVar12, 1 < (uint)pSVar7->max_length))
          {
            pSVar7->m_Items[1] = fVar11 * 57.29578;
            return pSVar7;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x1820f3150

float Controllers_BasePlayerController__GetTargetAngle_20f3150
                (Controllers_BasePlayerController_o *__this,UnityEngine_Vector3_o *direction,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Vector3_c *pUVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Quaternion_Fields local_58;
  UnityEngine_Quaternion_o local_48 [4];
  
  fVar9 = (direction->fields).x;
  fVar10 = (direction->fields).z;
  local_58.x = 0.0;
  local_58.y = 0.0;
  local_58.z = 0.0;
  local_58.w = 0.0;
  local_78.y = 0.0;
  local_78.x = fVar9;
  local_78.z = fVar10;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_78,0);
  pUVar6 = TypeInfo_UnityEngine_Vector3;
  if (fVar8 <= 1e-05) {
    pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar9 = (pUVar3->zeroVector).fields.x;
    fVar11 = (pUVar3->zeroVector).fields.y;
    fVar10 = (pUVar3->zeroVector).fields.z;
  }
  else {
    fVar9 = fVar9 / fVar8;
    fVar11 = 0.0 / fVar8;
    fVar10 = fVar10 / fVar8;
  }
  bVar7 = g_data_18433de5c == '\0';
  (direction->fields).x = fVar9;
  (direction->fields).y = fVar11;
  (direction->fields).z = fVar10;
  if (bVar7) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_18433de5c = '\x01';
    pUVar6 = TypeInfo_UnityEngine_Vector3;
  }
  pUVar3 = pUVar6->static_fields;
  local_68.y = fVar11;
  local_68.x = fVar9;
  local_78.x = (pUVar3->upVector).fields.x;
  local_78.y = (pUVar3->upVector).fields.y;
  local_78.z = (pUVar3->upVector).fields.z;
  local_68.z = (direction->fields).z;
  pUVar4 = UnityEngine_Quaternion__Internal_LookRotation
                     (local_48,(UnityEngine_Vector3_o *)&local_68,(UnityEngine_Vector3_o *)&local_78,
                      (MethodInfo *)0x0);
  local_58.x = (pUVar4->fields).x;
  local_58.y = (pUVar4->fields).y;
  local_58.z = (pUVar4->fields).z;
  local_58.w = (pUVar4->fields).w;
  pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                     ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)&local_58,
                      (MethodInfo *)0x0);
  uVar1 = (pUVar5->fields).x;
  uVar2 = (pUVar5->fields).y;
  local_68.y = (float)uVar2 * 57.29578;
  local_68.x = (float)uVar1 * 57.29578;
  local_68.z = (pUVar5->fields).z * 57.29578;
  pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                     ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0)
  ;
  return (pUVar5->fields).y;
}


// Controllers.BasePlayerController$$.ctor
// il2cpp: void Controllers_BasePlayerController___ctor (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x1820f3aa0

void Controllers_BasePlayerController___ctor(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184346a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_184346a96 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  pSVar1 = "QuickSelect1";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "QuickSelect1";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "QuickSelect2";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "QuickSelect2";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "QuickSelect3";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "QuickSelect3";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "QuickSelect4";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "QuickSelect4";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "QuickSelect5";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "QuickSelect5";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              pSVar1 = "QuickSelect6";
              if (5 < (uint)value->max_length) {
                value->m_Items[5] = "QuickSelect6";
                Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar1);
                pSVar1 = "QuickSelect7";
                if (6 < (uint)value->max_length) {
                  value->m_Items[6] = "QuickSelect7";
                  Il2CppCodeGenWriteBarrier(value->m_Items + 6,pSVar1);
                  pSVar1 = "QuickSelect8";
                  if (7 < (uint)value->max_length) {
                    value->m_Items[7] = "QuickSelect8";
                    Il2CppCodeGenWriteBarrier(value->m_Items + 7,pSVar1);
                    (__this->fields)._quickSelectOptions = value;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._quickSelectOptions,value);
                    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


