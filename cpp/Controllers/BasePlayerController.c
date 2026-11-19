// Type: Controllers.BasePlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Controllers/BasePlayerController.cs
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasePlayerController.cs
// --------------------------------

// Controllers.BasePlayerController$$Awake
// il2cpp: void Controllers_BasePlayerController__Awake (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x5b9a060
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9a1b2: lea rdi, [rbx + 0x30]
// asm:   0x5b9a1b6: jmp 0x5b9a1dc

void Controllers_BasePlayerController__Awake(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Characters_BaseCharacter_o *pCVar3;
  GameManagers_InGameManager_c *pGVar4;
  UI_InGameMenu_o *pUVar5;
  
  if (Il2CppMethodInitialized_0754745b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754745b = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 == (Settings_InputSettings_o *)0x0) {
label_05b9a268:
    ThrowNullReferenceException();
  }
  (__this->fields)._generalInput = (pSVar2->fields).General;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._generalInput);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (pSVar2 == (Settings_InputSettings_o *)0x0) goto label_05b9a268;
  (__this->fields)._interactionInput = (pSVar2->fields).Interaction;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._interactionInput);
  pCVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._character);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar5 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar5 != (UI_InGameMenu_o *)0x0) goto label_05b9a15b;
label_05b9a1d0:
    (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
  }
  else {
    pUVar5 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar5 == (UI_InGameMenu_o *)0x0) goto label_05b9a1d0;
label_05b9a15b:
    pGVar4 = (GameManagers_InGameManager_c *)TypeInfo_UI_InGameMenu;
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_InGameMenu)) goto label_05b9a242;
    (__this->fields)._inGameMenu = pUVar5;
    if (((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)pGVar4)) goto label_05b9a242;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameMenu);
  pGVar4 = TypeInfo_GameManagers_InGameManager;
  pUVar5 = (UI_InGameMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar5 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
label_05b9a255:
    Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
    return;
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchyDepth) &&
     ((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    (__this->fields)._gameManager = (GameManagers_InGameManager_o *)pUVar5;
    if ((bVar1 <= (((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchyDepth) &&
       ((((GameManagers_BaseGameManager_c *)pUVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)pGVar4)) goto label_05b9a255;
  }
label_05b9a242:
  il2cpp_codegen_raise_invalid_cast_exception(pUVar5,pGVar4);
}


// Controllers.BasePlayerController$$Start
// il2cpp: void Controllers_BasePlayerController__Start (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x5b9e1c0

void Controllers_BasePlayerController__Start(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$Update
// il2cpp: void Controllers_BasePlayerController__Update (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x5b9e1d0

void Controllers_BasePlayerController__Update(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754745c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754745c = '\x01';
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
      bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    }
    else {
      bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    }
    if (!bVar2) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      bVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene;
      (*(__this->klass->vtable)._8_UpdateMovementInput.methodPtr)
                (__this,bVar2,(__this->klass->vtable)._8_UpdateMovementInput.method);
      Controllers_BasePlayerController__UpdateMenuInput(__this,false,method_01);
      bVar3 = true;
      if (bVar2 == false) {
        bVar3 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      }
      goto label_05b9e268;
    }
  }
  (*(__this->klass->vtable)._8_UpdateMovementInput.methodPtr)
            (__this,true,(__this->klass->vtable)._8_UpdateMovementInput.method);
  Controllers_BasePlayerController__UpdateMenuInput(__this,false,method_00);
  bVar3 = true;
label_05b9e268:
  (*(__this->klass->vtable)._7_UpdateActionInput.methodPtr)
            (__this,bVar3,(__this->klass->vtable)._7_UpdateActionInput.method);
  (*(__this->klass->vtable)._9_UpdateUI.methodPtr)(__this,bVar3,(__this->klass->vtable)._9_UpdateUI.method);
  return;
}


// Controllers.BasePlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasePlayerController__UpdateActionInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5b9a8d0

void Controllers_BasePlayerController__UpdateActionInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  bool *pbVar1;
  byte bVar2;
  uint uVar3;
  Characters_BaseCharacter_o *pCVar4;
  Settings_InputSettings_o *pSVar5;
  Settings_InteractionInputSettings_o *pSVar6;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_List_BaseUseable__o *pSVar7;
  Settings_GeneralInputSettings_o *pSVar8;
  bool bVar9;
  System_String_array *pSVar10;
  Settings_KeybindSetting_o *pSVar11;
  ulong uVar12;
  
  if (Il2CppMethodInitialized_0754745d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754745d = '\x01';
  }
  if (inMenu) {
    return;
  }
  pCVar4 = (__this->fields)._character;
  if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
    if ((pCVar4->fields).Dead != false) {
      return;
    }
    pSVar10 = (__this->fields)._quickSelectOptions;
    if (pSVar10 != (System_String_array *)0x0) {
      uVar12 = 0;
      while (uVar3 = (uint)pSVar10->max_length, (long)uVar12 < (long)(int)uVar3) {
        if (uVar3 <= uVar12) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if ((((pSVar5 == (Settings_InputSettings_o *)0x0) ||
             (pSVar6 = (pSVar5->fields).Interaction, pSVar6 == (Settings_InteractionInputSettings_o *)0x0)) ||
            (__this_00 = (pSVar6->fields).Settings,
            __this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
           (pSVar11 = (Settings_KeybindSetting_o *)
                      System_Collections_Specialized_OrderedDictionary__get_Item
                                (__this_00,(Il2CppObject *)pSVar10->m_Items[uVar12],(MethodInfo *)0x0),
           pSVar11 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9aa7d;
        bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
        if (((pSVar11->klass->_2).typeHierarchyDepth < bVar2) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
        }
        bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar11,false,(MethodInfo *)0x0);
        if (bVar9) {
          pCVar4 = (__this->fields)._character;
          if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
             (pSVar7 = (pCVar4->fields).Items, pSVar7 == (System_Collections_Generic_List_BaseUseable__o *)0x0
             )) goto label_05b9aa7d;
          if ((long)uVar12 < (long)(pSVar7->fields)._size) {
            (*(pCVar4->klass->vtable)._85_UseItem.methodPtr)
                      (pCVar4,(int32_t)uVar12,(pCVar4->klass->vtable)._85_UseItem.method);
          }
        }
        uVar12 = uVar12 + 1;
        pSVar10 = (__this->fields)._quickSelectOptions;
        if (pSVar10 == (System_String_array *)0x0) goto label_05b9aa7d;
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar5 != (Settings_InputSettings_o *)0x0) &&
          (pSVar8 = (pSVar5->fields).General, pSVar8 != (Settings_GeneralInputSettings_o *)0x0)) &&
         (pSVar11 = (pSVar8->fields).HideCursor, pSVar11 != (Settings_KeybindSetting_o *)0x0)) {
        bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar11,false,(MethodInfo *)0x0);
        if (bVar9) {
          pbVar1 = &(__this->fields).HideCursor;
          *pbVar1 = (bool)(*pbVar1 ^ 1);
          return;
        }
        return;
      }
    }
  }
label_05b9aa7d:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$UpdateMovementInput
// il2cpp: void Controllers_BasePlayerController__UpdateMovementInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5b9e570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9e7b4: jmp 0x5b9e6b2

void Controllers_BasePlayerController__UpdateMovementInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  bool *pbVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Cameras_BaseCamera_o *pCVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  Characters_BaseCharacter_o *pCVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o euler;
  float fStack_44;
  UnityEngine_Quaternion_o UStack_38;
  
  if (Il2CppMethodInitialized_0754745e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754745e = '\x01';
  }
  if (inMenu) {
    if ((__this->fields)._autorun != false) {
      return;
    }
    pCVar11 = (__this->fields)._character;
  }
  else {
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Autorun, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9e7b9;
    bVar7 = Settings_KeybindSetting__GetKeyDown(pSVar3,false,(MethodInfo *)0x0);
    if (bVar7) {
      pbVar1 = &(__this->fields)._autorun;
      *pbVar1 = (bool)(*pbVar1 ^ 1);
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Forward, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9e7b9;
    bVar7 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
    if (bVar7) {
      iVar12 = 1;
      bVar7 = true;
    }
    else {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9e7b9;
      bVar7 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
      iVar12 = -(uint)bVar7;
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Left, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9e7b9;
    bVar8 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
    uVar6 = 0xffffffff;
    if (bVar8) {
label_05b9e6aa:
      uVar9 = uVar6;
      (__this->fields)._autorun = false;
      bVar7 = true;
label_05b9e6b2:
      uVar13 = uVar9;
    }
    else {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Right, pSVar3 == (Settings_KeybindSetting_o *)0x0)) goto label_05b9e7b9;
      uVar13 = 0;
      bVar8 = Settings_KeybindSetting__GetKey(pSVar3,false,(MethodInfo *)0x0);
      uVar9 = (uint)bVar8;
      uVar6 = (uint)bVar8;
      if ((bVar7 | bVar8) == 1) goto label_05b9e6aa;
      bVar7 = (__this->fields)._autorun == false;
      if (bVar7) goto label_05b9e6b2;
    }
    iVar10 = 1;
    if (bVar7) {
      iVar10 = iVar12;
    }
    pCVar11 = (__this->fields)._character;
    if (iVar10 != 0 || uVar13 != 0) {
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar5 = (pCVar4->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
         (__this_00 = (pUVar5->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_05b9e7b9;
      UStack_38 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      UVar15 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_38,(MethodInfo *)0x0);
      euler.fields.x = UVar15.fields.x * 57.29578;
      euler.fields.y = UVar15.fields.y * 57.29578;
      euler.fields.z = UVar15.fields.z * 57.29578;
      UVar15 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar14 = atan2f((float)iVar10,(float)(int)uVar13);
      if (pCVar11 == (Characters_BaseCharacter_o *)0x0) goto label_05b9e7b9;
      fStack_44 = UVar15.fields.y;
      (pCVar11->fields).TargetAngle = fVar14 * -57.29578 + fStack_44 + 90.0;
      pCVar11 = (__this->fields)._character;
      bVar7 = true;
      if (pCVar11 == (Characters_BaseCharacter_o *)0x0) goto label_05b9e7b9;
      goto label_05b9e792;
    }
  }
  if (pCVar11 == (Characters_BaseCharacter_o *)0x0) {
label_05b9e7b9:
    ThrowNullReferenceException();
  }
  bVar7 = false;
label_05b9e792:
  (pCVar11->fields).HasDirection = bVar7;
  return;
}


// Controllers.BasePlayerController$$UpdateMenuInput
// il2cpp: void Controllers_BasePlayerController__UpdateMenuInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5b9e310
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9e33e: jmp 0x5b9e3cf
// asm:   0x5b9e3a5: jmp 0x5b9e3bc

void Controllers_BasePlayerController__UpdateMenuInput
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  char cVar1;
  Characters_BaseCharacter_o *pCVar2;
  UI_InGameMenu_o *pUVar3;
  UI_EmoteHandler_o *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_ActionHandler_o *pUVar6;
  Settings_InteractionInputSettings_o *pSVar7;
  Settings_KeybindSetting_o *pSVar8;
  bool bVar9;
  
  if (Il2CppMethodInitialized_0754745f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754745f = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b9e375;
label_05b9e333:
    bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b9e333;
label_05b9e375:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar9 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
  }
  if (!bVar9) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      cVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene;
    }
    else {
      cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x48);
    }
    if (cVar1 == '\0') {
      pCVar2 = (__this->fields)._character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05b9e563;
      if ((pCVar2->fields).Dead == false) {
        pSVar7 = (__this->fields)._interactionInput;
        if ((pSVar7 != (Settings_InteractionInputSettings_o *)0x0) &&
           (pSVar8 = (pSVar7->fields).EmoteMenu, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
          bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar8,false,(MethodInfo *)0x0);
          if (bVar9) {
            pUVar3 = (__this->fields)._inGameMenu;
            if ((pUVar3 == (UI_InGameMenu_o *)0x0) ||
               (pUVar4 = (pUVar3->fields).EmoteHandler, pUVar4 == (UI_EmoteHandler_o *)0x0))
            goto label_05b9e563;
            UI_EmoteHandler__ToggleEmoteWheel(pUVar4,(MethodInfo *)0x0);
          }
          pSVar7 = (__this->fields)._interactionInput;
          if ((pSVar7 != (Settings_InteractionInputSettings_o *)0x0) &&
             (pSVar8 = (pSVar7->fields).ItemMenu, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
            bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar8,false,(MethodInfo *)0x0);
            if (bVar9) {
              pUVar3 = (__this->fields)._inGameMenu;
              if ((pUVar3 == (UI_InGameMenu_o *)0x0) ||
                 (pUVar5 = (pUVar3->fields).ItemHandler, pUVar5 == (UI_ItemHandler_o *)0x0))
              goto label_05b9e563;
              UI_ItemHandler__ToggleItemWheel(pUVar5,(MethodInfo *)0x0);
            }
            pSVar7 = (__this->fields)._interactionInput;
            if ((pSVar7 != (Settings_InteractionInputSettings_o *)0x0) &&
               (pSVar8 = (pSVar7->fields).ActionMenu, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
              bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar8,false,(MethodInfo *)0x0);
              if (bVar9) {
                pUVar3 = (__this->fields)._inGameMenu;
                if ((pUVar3 == (UI_InGameMenu_o *)0x0) ||
                   (pUVar6 = (pUVar3->fields).ActionHandler, pUVar6 == (UI_ActionHandler_o *)0x0))
                goto label_05b9e563;
                UI_ActionHandler__ToggleActionWheel(pUVar6,(MethodInfo *)0x0);
              }
              pSVar7 = (__this->fields)._interactionInput;
              if ((pSVar7 != (Settings_InteractionInputSettings_o *)0x0) &&
                 (pSVar8 = (pSVar7->fields).MenuNext, pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
                bVar9 = Settings_KeybindSetting__GetKeyDown(pSVar8,false,(MethodInfo *)0x0);
                if (!bVar9) {
                  return;
                }
                pUVar3 = (__this->fields)._inGameMenu;
                if ((pUVar3 != (UI_InGameMenu_o *)0x0) &&
                   (pUVar4 = (pUVar3->fields).EmoteHandler, pUVar4 != (UI_EmoteHandler_o *)0x0)) {
                  UI_EmoteHandler__NextEmoteWheel(pUVar4,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto label_05b9e563;
      }
    }
  }
  pUVar3 = (__this->fields)._inGameMenu;
  if ((pUVar3 != (UI_InGameMenu_o *)0x0) &&
     (pUVar4 = (pUVar3->fields).EmoteHandler, pUVar4 != (UI_EmoteHandler_o *)0x0)) {
    UI_EmoteHandler__SetEmoteWheel(pUVar4,false,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._inGameMenu;
    if ((pUVar3 != (UI_InGameMenu_o *)0x0) &&
       (pUVar5 = (pUVar3->fields).ItemHandler, pUVar5 != (UI_ItemHandler_o *)0x0)) {
      UI_ItemHandler__SetItemWheel(pUVar5,false,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._inGameMenu;
      if ((pUVar3 != (UI_InGameMenu_o *)0x0) &&
         (pUVar6 = (pUVar3->fields).ActionHandler, pUVar6 != (UI_ActionHandler_o *)0x0)) {
        UI_ActionHandler__SetActionWheel(pUVar6,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05b9e563:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$UpdateUI
// il2cpp: void Controllers_BasePlayerController__UpdateUI (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x5b9e7c0

void Controllers_BasePlayerController__UpdateUI
               (Controllers_BasePlayerController_o *__this,bool inMenu,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, int32_t forward, int32_t right, const MethodInfo* method);
// 0x5b9e7d0

float Controllers_BasePlayerController__GetTargetAngle
                (Controllers_BasePlayerController_o *__this,int32_t forward,int32_t right,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_20;
  
  if (Il2CppMethodInitialized_07547460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547460 = '\x01';
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (((pCVar1 == (Cameras_BaseCamera_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_20 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
  UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_20,(MethodInfo *)0x0);
  euler.fields.x = UVar4.fields.x * 57.29578;
  euler.fields.y = UVar4.fields.y * 57.29578;
  euler.fields.z = UVar4.fields.z * 57.29578;
  UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  fVar3 = atan2f((float)forward,(float)right);
  return (UVar4.fields.y + 90.0) - fVar3 * 57.29578;
}


// Controllers.BasePlayerController$$GetAimAngles
// il2cpp: System_Single_array* Controllers_BasePlayerController__GetAimAngles (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x5b9ad80

System_Single_array *
Controllers_BasePlayerController__GetAimAngles(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint32_t uVar3;
  int iVar4;
  Cameras_BaseCamera_o *pCVar5;
  UnityEngine_Camera_o *__this_00;
  Characters_BaseCharacter_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  undefined1 auVar8 [16];
  System_Single_array *pSVar9;
  UnityEngine_Vector3_StaticFields *__return_storage_ptr__;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  float local_58;
  float fStack_54;
  UnityEngine_Vector3_Fields local_30;
  ulong local_24;
  float local_1c;
  
  if (Il2CppMethodInitialized_07547461 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    Il2CppMethodInitialized_07547461 = '\x01';
  }
  pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar5 == (Cameras_BaseCamera_o *)0x0) goto label_05b9b143;
  __this_00 = (pCVar5->fields).Camera;
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UVar16 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto label_05b9b143;
  __return_storage_ptr__ = (UnityEngine_Vector3_StaticFields *)&local_30;
  UnityEngine_Camera__ScreenPointToRay_68c1290
            ((UnityEngine_Ray_o *)__return_storage_ptr__,__this_00,UVar16,(MethodInfo *)0x0);
  local_58 = (float)local_24;
  fStack_54 = (float)(local_24 >> 0x20);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_30.x = 0.0;
    local_30.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05b9ae55;
label_05b9b105:
    local_30.x = 0.0;
    local_30.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_30.x = 0.0;
    local_30.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05b9b105;
label_05b9ae55:
    local_30.x = 0.0;
    local_30.y = 0.0;
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar12 = 0;
  fVar10 = local_1c * local_1c + fStack_54 * fStack_54 + local_58 * local_58;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar12 = extraout_XMM0_Db;
    if (fVar10 <= 1e-05) goto label_05b9ae9f;
label_05b9aecb:
    fVar14 = local_1c / fVar10;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_24;
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar10;
    auVar13._8_4_ = uVar12;
    auVar13._12_4_ = uVar12;
    auVar13 = divps(auVar8,auVar13);
    local_30.x = auVar13._0_4_;
    local_30.y = auVar13._4_4_;
  }
  else {
    fVar10 = SQRT(fVar10);
    if (1e-05 < fVar10) goto label_05b9aecb;
label_05b9ae9f:
    __return_storage_ptr__ = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar14 = (((UnityEngine_Ray_Fields *)&__return_storage_ptr__->zeroVector)->m_Origin).fields.z;
  }
  uVar1 = (__return_storage_ptr__->zeroVector).fields.x;
  uVar2 = (__return_storage_ptr__->zeroVector).fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar10 = (float)uVar1 * 1000.0;
  fVar15 = (float)uVar2 * 1000.0;
  fVar14 = fVar14 * 1000.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar11 = fVar14 * fVar14 + fVar15 * fVar15 + fVar10 * fVar10;
  if (fVar11 < 0.0) {
    fVar11 = sqrtf(fVar11);
  }
  else {
    fVar11 = SQRT(fVar11);
  }
  fVar15 = asinf(fVar15 / fVar11);
  fVar10 = atan2f(fVar14,fVar10);
  pCVar6 = (__this->fields)._character;
  if (((pCVar6 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar7 = (pCVar6->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_01 = (pUVar7->fields).Transform, __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar16 = UnityEngine_Transform__get_eulerAngles(__this_01,(MethodInfo *)0x0);
    fVar10 = UVar16.fields.y + -90.0 + fVar10 * 57.29578;
    fVar14 = floorf(fVar10 / 360.0);
    pSVar9 = (System_Single_array *)SZArrayNew(TypeInfo_float_array,2);
    if (pSVar9 != (System_Single_array *)0x0) {
      iVar4 = (int)pSVar9->max_length;
      if (iVar4 != 0) {
        fVar10 = fVar10 + fVar14 * -360.0;
        fVar14 = 360.0;
        if (fVar10 <= 360.0) {
          fVar14 = fVar10;
        }
        fVar14 = (float)(-(uint)(0.0 <= fVar10) & (uint)fVar14);
        pSVar9->m_Items[0] =
             -(float)(~-(uint)(180.0 < fVar14) & (uint)fVar14 |
                     (uint)(fVar14 + -360.0) & -(uint)(180.0 < fVar14));
        if (iVar4 != 1) {
          pSVar9->m_Items[1] = fVar15 * 57.29578;
          return pSVar9;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05b9b143:
  ThrowNullReferenceException();
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5b9e8a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b9e8c4: mov qword ptr [rsp + 0x10], 0
// asm:   0x5b9e8cd: cmp byte ptr [rip + 0x199fe55], 0
// asm:   0x5b9e8d4: je 0x5b9ea52
// asm:   0x5b9e941: jmp 0x5b9e984

float Controllers_BasePlayerController__GetTargetAngle_5a9e8a0
                (Controllers_BasePlayerController_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method
                )

{
  float fVar1;
  float fVar2;
  uint32_t uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_Fields local_48;
  undefined1 local_38 [16];
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_Fields local_18;
  
  uVar6 = (undefined4)((ulong)register0x00001240 >> 0x20);
  fVar5 = direction.fields.z;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = direction.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  local_18 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_48.x = 0.0;
    local_48.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    local_48.x = 0.0;
    local_48.y = 0.0;
    uVar3 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar6 = 0;
  }
  fVar1 = fVar5 * fVar5 + (float)local_38._0_4_ * (float)local_38._0_4_ + 0.0;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    uVar6 = extraout_XMM0_Db;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (fVar1 <= 1e-05) {
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar5 = (pUVar4->zeroVector).fields.z;
    fVar1 = (pUVar4->zeroVector).fields.x;
    fVar2 = (pUVar4->zeroVector).fields.y;
  }
  else {
    fVar5 = fVar5 / fVar1;
    auVar7._4_4_ = fVar1;
    auVar7._0_4_ = fVar1;
    auVar7._8_4_ = uVar6;
    auVar7._12_4_ = uVar6;
    auVar7 = divps(ZEXT416((uint)local_38._0_4_),auVar7);
    local_48._0_8_ = auVar7._0_8_;
    fVar1 = auVar7._0_4_;
    fVar2 = auVar7._4_4_;
  }
  if (g_data_0753e72c == '\0') {
    local_38._4_4_ = fVar2;
    local_38._0_4_ = fVar1;
    local_38._8_8_ = 0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    g_data_0753e72c = '\x01';
    fVar1 = (float)local_38._0_4_;
    fVar2 = (float)local_38._4_4_;
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_28.x = (pUVar4->upVector).fields.x;
  local_28.y = (pUVar4->upVector).fields.y;
  local_28.z = (pUVar4->upVector).fields.z;
  local_48.y = fVar2;
  local_48.x = fVar1;
  local_48.z = fVar5;
  local_18 = (UnityEngine_Quaternion_Fields)
             UnityEngine_Quaternion__Internal_LookRotation
                       ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_28,
                        (MethodInfo *)0x0);
  UVar8 = UnityEngine_Quaternion__Internal_ToEulerRad((UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0)
  ;
  euler.fields.x = UVar8.fields.x * 57.29578;
  euler.fields.y = UVar8.fields.y * 57.29578;
  euler.fields.z = UVar8.fields.z * 57.29578;
  UVar8 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  return UVar8.fields.y;
}


// Controllers.BasePlayerController$$.ctor
// il2cpp: void Controllers_BasePlayerController___ctor (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x5b9b160

void Controllers_BasePlayerController___ctor(Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_07547462 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect5");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect2");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect1");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect3");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect4");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect8");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect6");
    il2cpp_codegen_initialize_runtime_metadata(&"QuickSelect7");
    Il2CppMethodInitialized_07547462 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "QuickSelect1";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "QuickSelect2";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "QuickSelect3";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "QuickSelect4";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = "QuickSelect5";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            if (5 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[5] = "QuickSelect6";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
              if (6 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[6] = "QuickSelect7";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                if ((pSVar1->max_length & 0xfffffff8) != 0) {
                  pSVar1->m_Items[7] = "QuickSelect8";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 7);
                  (__this->fields)._quickSelectOptions = pSVar1;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._quickSelectOptions);
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


