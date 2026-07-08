// Type: Controllers.BasePlayerController
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Controllers/BasePlayerController.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Controllers/BasePlayerController.cs  [CHANGED since prior version]
// --------------------------------

// Controllers.BasePlayerController$$Awake
// il2cpp: void Controllers_BasePlayerController__Awake (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x3f7cd40

void Controllers_BasePlayerController__Awake
               (Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Characters_BaseCharacter_o *pCVar3;
  Il2CppClass *pIVar4;
  UI_InGameMenu_o *pUVar5;
  
  if (DAT_05703f55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703f55 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 == 0) {
LAB_03f7cf48:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields)._generalInput = *(Settings_GeneralInputSettings_o **)(lVar2 + 0x20);
  il2cpp_runtime_glue(&(__this->fields)._generalInput);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (lVar2 == 0) goto LAB_03f7cf48;
  (__this->fields)._interactionInput = *(Settings_InteractionInputSettings_o **)(lVar2 + 0x48);
  il2cpp_runtime_glue(&(__this->fields)._interactionInput);
  pCVar3 = (Characters_BaseCharacter_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
  (__this->fields)._character = pCVar3;
  il2cpp_runtime_glue(&(__this->fields)._character,pCVar3);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar5 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar5 != (UI_InGameMenu_o *)0x0) goto LAB_03f7ce3b;
LAB_03f7ceb0:
    (__this->fields)._inGameMenu = (UI_InGameMenu_o *)0x0;
  }
  else {
    pUVar5 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar5 == (UI_InGameMenu_o *)0x0) goto LAB_03f7ceb0;
LAB_03f7ce3b:
    pIVar4 = TypeInfo_InGameMenu;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((pUVar5->klass->_2).naturalAligment < bVar1) ||
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto LAB_03f7cf22;
    (__this->fields)._inGameMenu = pUVar5;
    if (((pUVar5->klass->_2).naturalAligment < bVar1) ||
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar4)) goto LAB_03f7cf22;
  }
  il2cpp_runtime_glue(&(__this->fields)._inGameMenu);
  pIVar4 = TypeInfo_InGameManager;
  pUVar5 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pUVar5 == (UI_InGameMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
LAB_03f7cf35:
    il2cpp_runtime_glue(&(__this->fields)._gameManager);
    return;
  }
  bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
  if ((bVar1 <= (pUVar5->klass->_2).naturalAligment) &&
     ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
    (__this->fields)._gameManager = (GameManagers_InGameManager_o *)pUVar5;
    if ((bVar1 <= (pUVar5->klass->_2).naturalAligment) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar4)) goto LAB_03f7cf35;
  }
LAB_03f7cf22:
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pUVar5,pIVar4);
}


// Controllers.BasePlayerController$$Start
// il2cpp: void Controllers_BasePlayerController__Start (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x3f7e5b0

void Controllers_BasePlayerController__Start
               (Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$Update
// il2cpp: void Controllers_BasePlayerController__Update (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x3f7e5c0

void Controllers_BasePlayerController__Update
               (Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  MethodInfo *method_00;
  bool bVar3;
  
  if (DAT_05703f56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata();
    DAT_05703f56 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
    if (*(char *)((long)&(pGVar1->fields)._gameSettingsLoaded + 2) != '\0') {
      return;
    }
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    bVar3 = true;
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) != '\0';
      }
    }
    (*(__this->klass->vtable)._8_UpdateMovementInput.methodPtr)
              (__this,(ulong)(uint)bVar3,(__this->klass->vtable)._8_UpdateMovementInput.method);
    Controllers_BasePlayerController__UpdateMenuInput(__this,0,method_00);
    (*(__this->klass->vtable)._7_UpdateActionInput.methodPtr)
              (__this,(ulong)(uint)bVar3,(__this->klass->vtable)._7_UpdateActionInput.method);
    vtable_dispatch = (__this->klass->vtable)._9_UpdateUI.methodPtr;
    (*vtable_dispatch)
              (__this,(ulong)bVar3,(__this->klass->vtable)._9_UpdateUI.method,vtable_dispatch)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasePlayerController$$UpdateActionInput
// il2cpp: void Controllers_BasePlayerController__UpdateActionInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f7d720

void Controllers_BasePlayerController__UpdateActionInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  Characters_BaseCharacter_o *pCVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  long lVar5;
  bool_conflict bVar6;
  System_String_array *pSVar7;
  Settings_KeybindSetting_o *pSVar8;
  ulong uVar9;
  
  if (DAT_05703f57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703f57 = '\x01';
  }
  if ((char)inMenu != '\0') {
    return;
  }
  pCVar4 = (__this->fields)._character;
  if (pCVar4 != (Characters_BaseCharacter_o *)0x0) {
    if (*(char *)&(pCVar4->fields).FeedVictimName != '\0') {
      return;
    }
    pSVar7 = (__this->fields)._quickSelectOptions;
    if (pSVar7 != (System_String_array *)0x0) {
      uVar9 = 0;
      uVar3 = (uint)pSVar7->max_length;
      if (0 < (int)uVar3) {
        do {
          if (uVar3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          if ((((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) ||
              (__this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar5 + 0x10),
              __this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
             (pSVar8 = (Settings_KeybindSetting_o *)
                       System_Collections_Specialized_OrderedDictionary__get_Item
                                 (__this_00,(Il2CppObject *)pSVar7->m_Items[uVar9],(MethodInfo *)0x0
                                 ), pSVar8 == (Settings_KeybindSetting_o *)0x0)) goto LAB_03f7d8de;
          bVar2 = (TypeInfo_KeybindSetting->_2).naturalAligment;
          if (((pSVar8->klass->_2).naturalAligment < bVar2) ||
             ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_KeybindSetting)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar8);
          }
          bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pCVar4 = (__this->fields)._character;
            if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
               (lVar5 = *(long *)&(pCVar4->fields).CurrentHealth, lVar5 == 0)) goto LAB_03f7d8de;
            if ((long)uVar9 < (long)*(int *)(lVar5 + 0x18)) {
              (*(pCVar4->klass->vtable)._75_UseItem.methodPtr)
                        (pCVar4,uVar9 & 0xffffffff,(pCVar4->klass->vtable)._75_UseItem.method);
            }
          }
          uVar9 = uVar9 + 1;
          pSVar7 = (__this->fields)._quickSelectOptions;
          if (pSVar7 == (System_String_array *)0x0) goto LAB_03f7d8de;
          uVar3 = (uint)pSVar7->max_length;
        } while ((long)uVar9 < (long)(int)uVar3);
      }
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) &&
         (pSVar8 = *(Settings_KeybindSetting_o **)(lVar5 + 0xa0),
         pSVar8 != (Settings_KeybindSetting_o *)0x0)) {
        bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar8,0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        pbVar1 = (byte *)((long)&(__this->fields)._autorun + 1);
        *pbVar1 = *pbVar1 ^ 1;
        return;
      }
    }
  }
LAB_03f7d8de:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasePlayerController$$UpdateMovementInput
// il2cpp: void Controllers_BasePlayerController__UpdateMovementInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f7e8e0

void Controllers_BasePlayerController__UpdateMovementInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  bool_conflict *pbVar1;
  Settings_GeneralInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  long lVar4;
  UnityEngine_Transform_o *__this_00;
  undefined1 uVar5;
  bool_conflict bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  Characters_BaseCharacter_o *pCVar10;
  int iVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float fStack_34;
  
  if (DAT_05703f58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703f58 = '\x01';
  }
  if ((char)inMenu == '\0') {
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Autorun, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f7eaf8;
    bVar6 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pbVar1 = &(__this->fields)._autorun;
      *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Forward, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f7eaf8;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    iVar9 = 1;
    if ((char)bVar6 == '\0') {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f7eaf8;
      uVar7 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
      iVar9 = -(uVar7 & 0xff);
    }
    pSVar2 = (__this->fields)._generalInput;
    if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Left, pSVar3 == (Settings_KeybindSetting_o *)0x0))
    goto LAB_03f7eaf8;
    bVar6 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
    uVar7 = 0xffffffff;
    if ((char)bVar6 == '\0') {
      pSVar2 = (__this->fields)._generalInput;
      if ((pSVar2 == (Settings_GeneralInputSettings_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Right, pSVar3 == (Settings_KeybindSetting_o *)0x0))
      goto LAB_03f7eaf8;
      uVar8 = Settings_KeybindSetting__GetKey(pSVar3,0,(MethodInfo *)0x0);
      uVar7 = uVar8 & 0xff;
      if ((iVar9 != 0) || ((char)uVar8 != '\0')) goto LAB_03f7e9d3;
      iVar11 = 1;
      uVar7 = 0;
      if ((char)(__this->fields)._autorun == '\0') goto LAB_03f7e9d7;
    }
    else {
LAB_03f7e9d3:
      *(undefined1 *)&(__this->fields)._autorun = 0;
LAB_03f7e9d7:
      iVar11 = iVar9;
    }
    pCVar10 = (__this->fields)._character;
    if (iVar11 != 0 || uVar7 != 0) {
      lVar4 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x28), lVar4 == 0)) ||
         (__this_00 = *(UnityEngine_Transform_o **)(lVar4 + 0x10),
         __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f7eaf8;
      rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      UVar13 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar13.fields.x * 57.29578;
      euler.fields.y = UVar13.fields.y * 57.29578;
      euler.fields.z = UVar13.fields.z * 57.29578;
      UVar13 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar12 = atan2f((float)iVar11,(float)(int)uVar7);
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f7eaf8;
      fStack_34 = UVar13.fields.y;
      *(float *)&(pCVar10->fields).Detection = fVar12 * -57.29578 + fStack_34 + 90.0;
      pCVar10 = (__this->fields)._character;
      uVar5 = 1;
      if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f7eaf8;
      goto LAB_03f7eaa0;
    }
  }
  else {
    if ((char)(__this->fields)._autorun != '\0') {
      return;
    }
    pCVar10 = (__this->fields)._character;
  }
  if (pCVar10 == (Characters_BaseCharacter_o *)0x0) {
LAB_03f7eaf8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar5 = 0;
LAB_03f7eaa0:
  *(undefined1 *)((long)&(pCVar10->fields).Detection + 4) = uVar5;
  return;
}


// Controllers.BasePlayerController$$UpdateMenuInput
// il2cpp: void Controllers_BasePlayerController__UpdateMenuInput (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f7e6c0

void Controllers_BasePlayerController__UpdateMenuInput
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Settings_InteractionInputSettings_o *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  UI_InGameMenu_o *pUVar4;
  UI_EmoteHandler_o *pUVar5;
  UI_ItemHandler_o *pUVar6;
  char cVar7;
  bool_conflict bVar8;
  
  if (DAT_05703f59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703f59 = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_03f7e6eb;
LAB_03f7e85b:
    il2cpp_init_class();
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto LAB_03f7e85b;
LAB_03f7e6eb:
    bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      cVar7 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    }
    else {
      cVar7 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    }
    if (cVar7 == '\0') {
      pCVar1 = (__this->fields)._character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f7e8d5;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        pSVar2 = (__this->fields)._interactionInput;
        if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
           (pSVar3 = (pSVar2->fields).EmoteMenu, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
          bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            pUVar4 = (__this->fields)._inGameMenu;
            if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
               (pUVar5 = (pUVar4->fields).EmoteHandler, pUVar5 == (UI_EmoteHandler_o *)0x0))
            goto LAB_03f7e8d5;
            UI_EmoteHandler__ToggleEmoteWheel(pUVar5,(MethodInfo *)0x0);
          }
          pSVar2 = (__this->fields)._interactionInput;
          if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
             (pSVar3 = (pSVar2->fields).ItemMenu, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
            bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              pUVar4 = (__this->fields)._inGameMenu;
              if ((pUVar4 == (UI_InGameMenu_o *)0x0) ||
                 (pUVar6 = (pUVar4->fields).ItemHandler, pUVar6 == (UI_ItemHandler_o *)0x0))
              goto LAB_03f7e8d5;
              UI_ItemHandler__ToggleItemWheel(pUVar6,(MethodInfo *)0x0);
            }
            pSVar2 = (__this->fields)._interactionInput;
            if ((pSVar2 != (Settings_InteractionInputSettings_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).MenuNext, pSVar3 != (Settings_KeybindSetting_o *)0x0)) {
              bVar8 = Settings_KeybindSetting__GetKeyDown(pSVar3,0,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
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
        goto LAB_03f7e8d5;
      }
    }
  }
  pUVar4 = (__this->fields)._inGameMenu;
  if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
     (pUVar5 = (pUVar4->fields).EmoteHandler, pUVar5 != (UI_EmoteHandler_o *)0x0)) {
    UI_EmoteHandler__SetEmoteWheel(pUVar5,0,(MethodInfo *)0x0);
    pUVar4 = (__this->fields)._inGameMenu;
    if ((pUVar4 != (UI_InGameMenu_o *)0x0) &&
       (pUVar6 = (pUVar4->fields).ItemHandler, pUVar6 != (UI_ItemHandler_o *)0x0)) {
      UI_ItemHandler__SetItemWheel(pUVar6,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03f7e8d5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasePlayerController$$UpdateUI
// il2cpp: void Controllers_BasePlayerController__UpdateUI (Controllers_BasePlayerController_o* __this, bool inMenu, const MethodInfo* method);
// 0x3f7eb00

void Controllers_BasePlayerController__UpdateUI
               (Controllers_BasePlayerController_o *__this,bool_conflict inMenu,MethodInfo *method)

{
  return;
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, int32_t forward, int32_t right, const MethodInfo* method);
// 0x3f7eb10

float Controllers_BasePlayerController__GetTargetAngle
                (Controllers_BasePlayerController_o *__this,int32_t forward,int32_t right,
                MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  if (DAT_05703f5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703f5a = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x28), lVar1 != 0)) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
    UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
    euler.fields.x = UVar3.fields.x * 57.29578;
    euler.fields.y = UVar3.fields.y * 57.29578;
    euler.fields.z = UVar3.fields.z * 57.29578;
    UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    fVar2 = atan2f((float)forward,(float)right);
    return (UVar3.fields.y + 90.0) - fVar2 * 57.29578;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasePlayerController$$GetAimAngles
// il2cpp: System_Single_array* Controllers_BasePlayerController__GetAimAngles (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x3f7dbf0

System_Single_array *
Controllers_BasePlayerController__GetAimAngles
          (Controllers_BasePlayerController_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UnityEngine_Camera_o *__this_00;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Transform_o *__this_01;
  undefined1 auVar4 [16];
  System_Single_array *pSVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Ray_o local_28;
  undefined8 uVar10;
  
  if (DAT_05703f5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_float);
    DAT_05703f5b = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar2 == 0) goto LAB_03f7df92;
  __this_00 = *(UnityEngine_Camera_o **)(lVar2 + 0x20);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar14 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Camera_o *)0x0) goto LAB_03f7df92;
  UnityEngine_Camera__ScreenPointToRay(&local_28,__this_00,UVar14,(MethodInfo *)0x0);
  auVar11._8_8_ = 0;
  auVar11._0_4_ = local_28.fields.m_Direction.fields.x;
  auVar11._4_4_ = local_28.fields.m_Direction.fields.y;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uVar8 = 0;
  uVar9 = 0;
  fVar6 = local_28.fields.m_Direction.fields.z * local_28.fields.m_Direction.fields.z +
          local_28.fields.m_Direction.fields.y * local_28.fields.m_Direction.fields.y +
          local_28.fields.m_Direction.fields.x * local_28.fields.m_Direction.fields.x;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    uVar8 = extraout_XMM0_Dc;
    uVar9 = extraout_XMM0_Dd;
    if (fVar6 <= 1e-05) goto LAB_03f7dcf3;
LAB_03f7dd44:
    fVar12 = local_28.fields.m_Direction.fields.z / fVar6;
    auVar4._4_4_ = fVar6;
    auVar4._0_4_ = fVar6;
    auVar4._8_4_ = uVar8;
    auVar4._12_4_ = uVar9;
    auVar11 = divps(auVar11,auVar4);
    uVar10 = auVar11._0_8_;
  }
  else {
    fVar6 = SQRT(fVar6);
    if (1e-05 < fVar6) goto LAB_03f7dd44;
LAB_03f7dcf3:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar10 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar12 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  fVar6 = (float)uVar10 * 1000.0;
  fVar13 = (float)((ulong)uVar10 >> 0x20) * 1000.0;
  fVar12 = fVar12 * 1000.0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar7 = fVar12 * fVar12 + fVar13 * fVar13 + fVar6 * fVar6;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  fVar13 = asinf(fVar13 / fVar7);
  fVar6 = atan2f(fVar12,fVar6);
  pCVar3 = (__this->fields)._character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar3->fields).Dead, lVar2 != 0)) &&
     (__this_01 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UVar14 = UnityEngine_Transform__get_eulerAngles(__this_01,(MethodInfo *)0x0);
    fVar6 = UVar14.fields.y + -90.0 + fVar6 * 57.29578;
    fVar12 = floorf(fVar6 / 360.0);
    pSVar5 = (System_Single_array *)il2cpp_glue_02274930(TypeInfo_float,2);
    if (pSVar5 != (System_Single_array *)0x0) {
      iVar1 = (int)pSVar5->max_length;
      if (iVar1 != 0) {
        fVar6 = fVar6 - fVar12 * 360.0;
        fVar12 = 360.0;
        if (fVar6 <= 360.0) {
          fVar12 = fVar6;
        }
        fVar12 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar12);
        pSVar5->m_Items[0] =
             -(float)(~-(uint)(180.0 < fVar12) & (uint)fVar12 |
                     (uint)(fVar12 + -360.0) & -(uint)(180.0 < fVar12));
        if (iVar1 != 1) {
          pSVar5->m_Items[1] = fVar13 * 57.29578;
          return pSVar5;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f7df92:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Controllers.BasePlayerController$$GetTargetAngle
// il2cpp: float Controllers_BasePlayerController__GetTargetAngle (Controllers_BasePlayerController_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x3f7ebd0

float Controllers_BasePlayerController__GetTargetAngle
                (Controllers_BasePlayerController_o *__this,UnityEngine_Vector3_o direction,
                MethodInfo *method)

{
  int iVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar3;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  float local_18;
  undefined8 uVar4;
  
  fVar3 = direction.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
  }
  local_18 = direction.fields.x;
  fVar2 = fVar3 * fVar3 + local_18 * local_18 + 0.0;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
    in_XMM1_Dc = extraout_XMM0_Dc;
    in_XMM1_Dd = extraout_XMM0_Dd;
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata();
      DAT_056fdd15 = '\x01';
    }
    uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  else {
    auVar5._0_8_ = direction.fields._0_8_ & 0xffffffff;
    auVar5._8_4_ = in_XMM0_Dc;
    auVar5._12_4_ = in_XMM0_Dd;
    fVar3 = fVar3 / fVar2;
    auVar6._4_4_ = fVar2;
    auVar6._0_4_ = fVar2;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar6 = divps(auVar5,auVar6);
    uVar4 = auVar6._0_8_;
  }
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fde1f = '\x01';
  }
  UVar7.fields.z = fVar3;
  UVar7.fields.x = (float)(int)uVar4;
  UVar7.fields.y = (float)(int)((ulong)uVar4 >> 0x20);
  rotation = UnityEngine_Quaternion__LookRotation
                       (UVar7,(UnityEngine_Vector3_o)
                              *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18)
                        ,(MethodInfo *)0x0);
  UVar7 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar7.fields.x * 57.29578;
  euler.fields.y = UVar7.fields.y * 57.29578;
  euler.fields.z = UVar7.fields.z * 57.29578;
  UVar7 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  return UVar7.fields.y;
}


// Controllers.BasePlayerController$$.ctor
// il2cpp: void Controllers_BasePlayerController___ctor (Controllers_BasePlayerController_o* __this, const MethodInfo* method);
// 0x3f7dfb0

void Controllers_BasePlayerController___ctor
               (Controllers_ErenShifterPlayerController_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_05703f5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"QuickSelect5");
    il2cpp_init_method_metadata(&"QuickSelect2");
    il2cpp_init_method_metadata(&"QuickSelect1");
    il2cpp_init_method_metadata(&"QuickSelect3");
    il2cpp_init_method_metadata(&"QuickSelect4");
    il2cpp_init_method_metadata(&"QuickSelect8");
    il2cpp_init_method_metadata(&"QuickSelect6");
    il2cpp_init_method_metadata(&"QuickSelect7");
    DAT_05703f5c = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,8);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "QuickSelect1";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "QuickSelect2";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "QuickSelect3";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "QuickSelect4";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "QuickSelect5";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "QuickSelect6";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "QuickSelect7";
                  il2cpp_runtime_glue(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = "QuickSelect8";
                    il2cpp_runtime_glue(pSVar1->m_Items + 7);
                    (__this->fields)._quickSelectOptions = pSVar1;
                    il2cpp_runtime_glue(&(__this->fields)._quickSelectOptions);
                    UnityEngine_MonoBehaviour___ctor
                              ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


