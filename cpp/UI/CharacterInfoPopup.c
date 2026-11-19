// Type: UI.CharacterInfoPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterInfoPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoPopup.cs
// --------------------------------

// UI.CharacterInfoPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterInfoPopup__get_EscapeBehavior (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d022a0

int32_t UI_CharacterInfoPopup__get_EscapeBehavior(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.CharacterInfoPopup$$get_AnimationTime
// il2cpp: float UI_CharacterInfoPopup__get_AnimationTime (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d022b0

float UI_CharacterInfoPopup__get_AnimationTime(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.CharacterInfoPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_CharacterInfoPopup__get_PopupAnimationType (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d022c0

int32_t UI_CharacterInfoPopup__get_PopupAnimationType(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CharacterInfoPopup$$Setup
// il2cpp: void UI_CharacterInfoPopup__Setup (UI_CharacterInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d022d0

void UI_CharacterInfoPopup__Setup(UI_CharacterInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **targetAddress;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Action_o *__this_00;
  System_Action_int__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Name/GuildLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Fill");
    il2cpp_codegen_initialize_runtime_metadata(&"Name/NameLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Healthbar");
    Il2CppMethodInitialized_07547d09 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._nameBackground = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameBackground);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name/GuildLabel",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pTVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
          (__this->fields)._guildLabel = pTVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._guildLabel);
          pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name/NameLabel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pTVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
              targetAddress = &(__this->fields)._nameLabel;
              (__this->fields)._nameLabel = pTVar3;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pUVar1 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find(pUVar1,"Healthbar",(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  (__this->fields)._healthbar = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbar);
                  pUVar4 = (__this->fields)._healthbar;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar1 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Fill",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar2 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_34B0830 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        (__this->fields)._healthbarFill = pUVar2;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbarFill);
                        pUVar4 = (__this->fields)._healthbar;
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar1 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar1 = UnityEngine_Transform__Find
                                               (pUVar1,"Label",(MethodInfo *)0x0);
                            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                              pTVar3 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar1,
                                                  (MethodInfo_34B0830 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI
                                                 );
                              (__this->fields)._healthbarLabel = pTVar3;
                              Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbarLabel);
                              pTVar3 = (__this->fields)._guildLabel;
                              if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_richText
                                          ((TMPro_TMP_Text_o *)pTVar3,true,(MethodInfo *)0x0);
                                pTVar3 = *targetAddress;
                                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                  method_00 = (MethodInfo *)0x1;
                                  TMPro_TMP_Text__set_richText
                                            ((TMPro_TMP_Text_o *)pTVar3,true,(MethodInfo *)0x0);
                                  UI_CharacterInfoPopup__SetupGuildBadges(__this,method_00);
                                  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action)
                                  ;
                                  System_Action___ctor
                                            (__this_00,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged
                                             ,(MethodInfo *)0x0);
                                  Settings_SettingsManager__add_OnSettingsChanged(__this_00,(MethodInfo *)0x0)
                                  ;
                                  __this_01 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_System_Action_int);
                                  System_Action_int____ctor
                                            (__this_01,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated,
                                             (MethodInfo_4A80B60 *)0x0);
                                  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor ==
                                      0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                                  }
                                  GameManagers_InGameManager__add_PlayerInfoUpdated
                                            (__this_01,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$OnDestroy
// il2cpp: void UI_CharacterInfoPopup__OnDestroy (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d02cf0

void UI_CharacterInfoPopup__OnDestroy(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_Action_o *__this_00;
  System_Action_int__o *__this_01;
  System_Action_Hashtable__o *__this_02;
  
  if (Il2CppMethodInitialized_07547d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d0a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged,(MethodInfo *)0x0);
  Settings_SettingsManager__remove_OnSettingsChanged(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
  System_Action_int____ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated,
             (MethodInfo_4A80B60 *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__remove_PlayerInfoUpdated(__this_01,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).AI == false) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                 (MethodInfo_4A81BE0 *)0x0);
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged(pCVar1,__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.CharacterInfoPopup$$InGameManager_PlayerInfoUpdated
// il2cpp: void UI_CharacterInfoPopup__InGameManager_PlayerInfoUpdated (UI_CharacterInfoPopup_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x5d02e70

void UI_CharacterInfoPopup__InGameManager_PlayerInfoUpdated
               (UI_CharacterInfoPopup_o *__this,int32_t actorNumber,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  int32_t iVar2;
  undefined4 in_register_00000034;
  
  iVar2 = actorNumber;
  pPVar1 = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)CONCAT44(in_register_00000034,actorNumber))
  ;
  if ((pPVar1 == (Photon_Realtime_Player_o *)0x0) || ((pPVar1->fields).actorNumber != actorNumber)) {
    return;
  }
  UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,iVar2));
  return;
}


// UI.CharacterInfoPopup$$Character_OnPlayerPropertiesChanged
// il2cpp: void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged (UI_CharacterInfoPopup_o* __this, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x5d03a90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d03c67: jmp 0x5d03c8d
// asm:   0x5d03d9a: jmp 0x5d03db2

void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged
               (UI_CharacterInfoPopup_o *__this,ExitGames_Client_Photon_Hashtable_o *changedProps,
               MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  bool bVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  Photon_Realtime_Player_o *pPVar8;
  
  pMVar7 = (MethodInfo *)changedProps;
  if (Il2CppMethodInitialized_07547d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_07547d0b = '\x01';
  }
  bVar5 = UI_CharacterInfoPopup__CanApplySettings(__this,pMVar7);
  if (!bVar5) {
    return;
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  if (changedProps == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
label_05d03e12:
    ThrowNullReferenceException();
  }
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                     (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar5) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar6 = (System_String_o *)
             ExitGames_Client_Photon_Hashtable__get_Item
                       (changedProps,(Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team
                        ,(MethodInfo *)0x0);
    if ((pSVar6 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar6->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
    }
    pCVar2 = (__this->fields).Character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05d03e12;
    (pCVar2->fields).Team = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pCVar2->fields).Team);
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                     (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar5) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar6 = (System_String_o *)
             ExitGames_Client_Photon_Hashtable__get_Item
                       (changedProps,(Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name
                        ,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar6->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      pCVar2 = (__this->fields).Character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05d03e12;
      pUVar3 = (pCVar2->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) {
        pPVar8 = (Photon_Realtime_Player_o *)0x0;
        uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor;
      }
      else {
        pPVar8 = (pPVar4->fields)._Owner_k__BackingField;
        uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(pPVar8,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar6 = MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
      Characters_BaseCharacter__set_Name(pCVar2,pSVar6,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pMVar7 = (MethodInfo *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild;
  bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                     (Il2CppObject *)pMVar7,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
  if (bVar5) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pMVar7 = (MethodInfo *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild;
    pSVar6 = (System_String_o *)
             ExitGames_Client_Photon_Hashtable__get_Item
                       (changedProps,(Il2CppObject *)pMVar7,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar6->klass != g_data_07556758) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      pCVar2 = (__this->fields).Character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05d03e12;
      pUVar3 = (pCVar2->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) {
        pPVar8 = (Photon_Realtime_Player_o *)0x0;
        uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor;
      }
      else {
        pPVar8 = (pPVar4->fields)._Owner_k__BackingField;
        uVar1 = (TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(pPVar8,pSVar6,(MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pMVar7 = (MethodInfo *)MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
      (pCVar2->fields).Guild = (System_String_o *)pMVar7;
      Il2CppCodeGenWriteBarrier(&(pCVar2->fields).Guild);
    }
  }
  UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,pMVar7);
  return;
}


// UI.CharacterInfoPopup$$SettingsManager_OnSettingsChanged
// il2cpp: void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d02fa0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d030c6: mov rbp, r12
// asm:   0x5d039b4: mov r15, rax
// asm:   0x5d03a66: jmp 0x5d036e0

void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged
               (UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int32_t length;
  Settings_UISettings_o *pSVar10;
  Settings_IntSetting_o *pSVar11;
  Characters_BaseCharacter_o *pCVar12;
  Settings_ColorSetting_o *pSVar13;
  Utility_Color255_o *pUVar14;
  Settings_ToggleColorSetting_o *pSVar15;
  Settings_BoolSetting_o *pSVar16;
  Settings_SettingsManager_StaticFields *pSVar17;
  Settings_InGameSet_o *pSVar18;
  Settings_InGameMiscSettings_o *pSVar19;
  UnityEngine_UI_Image_o *pUVar20;
  TMPro_TextMeshProUGUI_o *pTVar21;
  System_String_o *pSVar22;
  bool bVar23;
  UnityEngine_Color32_o UVar24;
  Settings_SettingsManager_c *pSVar25;
  System_String_o *pSVar26;
  System_String_o *pSVar27;
  System_String_array *values;
  int count;
  MethodInfo *method_00;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  UnityEngine_Color_Fields UVar31;
  UnityEngine_Color_o UVar32;
  
  if (Il2CppMethodInitialized_07547d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=");
    Il2CppMethodInitialized_07547d0c = '\x01';
  }
  bVar23 = UI_CharacterInfoPopup__CanApplySettings(__this,method);
  if (!bVar23) {
    return;
  }
  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar10 == (Settings_UISettings_o *)0x0) ||
     (pSVar11 = (pSVar10->fields).NameOverrideTarget, pSVar11 == (Settings_IntSetting_o *)0x0))
  goto label_05d03a79;
  iVar8 = (pSVar11->fields)._value;
  if (iVar8 == 0) {
    bVar23 = true;
  }
  else if (iVar8 == 2) {
    pCVar12 = (__this->fields).Character;
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
    bVar23 = Characters_BaseCharacter__IsMainCharacter(pCVar12,(MethodInfo *)0x0);
    bVar23 = !bVar23;
  }
  else if (iVar8 == 1) {
    pCVar12 = (__this->fields).Character;
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
    bVar23 = Characters_BaseCharacter__IsMainCharacter(pCVar12,(MethodInfo *)0x0);
  }
  else {
    bVar23 = false;
  }
  if (__this == (UI_CharacterInfoPopup_o *)0x0) goto label_05d03a79;
  (__this->fields)._settingsApplyToMe = bVar23;
  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar10 == (Settings_UISettings_o *)0x0) ||
     (pSVar11 = (pSVar10->fields).NameBackgroundType, pSVar11 == (Settings_IntSetting_o *)0x0))
  goto label_05d03a79;
  (__this->fields)._settingsStyleType = (pSVar11->fields)._value;
  pSVar13 = (pSVar10->fields).ForceBackgroundColor;
  if ((pSVar13 == (Settings_ColorSetting_o *)0x0) ||
     (pUVar14 = (pSVar13->fields)._value, pUVar14 == (Utility_Color255_o *)0x0)) goto label_05d03a79;
  UVar31 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
  (__this->fields)._settingsBackgroundColor.fields = UVar31;
  pSVar25 = TypeInfo_Settings_SettingsManager;
  pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar10 == (Settings_UISettings_o *)0x0) ||
      (pSVar15 = (pSVar10->fields).ForceNameColor, pSVar15 == (Settings_ToggleColorSetting_o *)0x0)) ||
     (pSVar16 = (pSVar15->fields).Enabled, pSVar16 == (Settings_BoolSetting_o *)0x0)) goto label_05d03a79;
  bVar23 = (pSVar16->fields)._value;
  (__this->fields)._forceNameColorEnabled = bVar23;
  if (bVar23 == false) {
    (__this->fields)._applyForceNameColor = false;
    fVar28 = (float)g_data_01005870;
    fVar29 = g_data_01005870._4_4_;
    uVar30 = g_data_01005870;
  }
  else {
    if (__this == (UI_CharacterInfoPopup_o *)0x0) goto label_05d03a79;
    (__this->fields)._applyForceNameColor = (__this->fields)._settingsApplyToMe;
    pSVar13 = (pSVar15->fields).Color;
    if ((pSVar13 == (Settings_ColorSetting_o *)0x0) ||
       (pUVar14 = (pSVar13->fields)._value, pUVar14 == (Utility_Color255_o *)0x0)) goto label_05d03a79;
    UVar32 = Utility_Color255__ToColor(pUVar14,(MethodInfo *)0x0);
    uVar30 = UVar32.fields._8_8_;
    fVar28 = UVar32.fields.r;
    fVar29 = UVar32.fields.g;
    pSVar25 = TypeInfo_Settings_SettingsManager;
  }
  (__this->fields)._settingsNameColor.fields.r = fVar28;
  (__this->fields)._settingsNameColor.fields.g = fVar29;
  (__this->fields)._settingsNameColor.fields.b = (float)uVar30;
  (__this->fields)._settingsNameColor.fields.a = (float)((ulong)uVar30 >> 0x20);
  pSVar17 = pSVar25->static_fields;
  pSVar18 = pSVar17->InGameCurrent;
  if (((pSVar18 == (Settings_InGameSet_o *)0x0) ||
      (pSVar19 = (pSVar18->fields).Misc, pSVar19 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar11 = (pSVar19->fields).PVP, pSVar11 == (Settings_IntSetting_o *)0x0)) goto label_05d03a79;
  (__this->fields)._teamsEnabled = (pSVar11->fields)._value == 2;
  pSVar10 = pSVar17->UISettings;
  if ((pSVar10 == (Settings_UISettings_o *)0x0) ||
     (pSVar11 = (pSVar10->fields).MinNameLength, pSVar11 == (Settings_IntSetting_o *)0x0)) goto label_05d03a79;
  (__this->fields)._minNameLength = (pSVar11->fields)._value;
  pSVar11 = (pSVar10->fields).MaxNameLength;
  if (pSVar11 == (Settings_IntSetting_o *)0x0) goto label_05d03a79;
  (__this->fields)._maxNameLength = (pSVar11->fields)._value;
  pCVar12 = (__this->fields).Character;
  if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
  targetAddress = &(__this->fields)._name;
  (__this->fields)._name = (pCVar12->fields).RichTextName;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((__this->fields)._applyForceNameColor == false) {
    pUVar20 = (__this->fields)._nameBackground;
    if ((__this->fields)._settingsApplyToMe != false) {
      if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_05d03a79;
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar20,(__this->fields)._settingsStyleType == 2,(MethodInfo *)0x0
                );
      pUVar20 = (__this->fields)._nameBackground;
      if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_05d03a79;
      (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                (pUVar20,(UnityEngine_Color_o)(__this->fields)._settingsBackgroundColor.fields,
                 (pUVar20->klass->vtable)._23_set_color.method);
      pTVar21 = (__this->fields)._nameLabel;
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
                (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
                 (pTVar21->klass->vtable)._23_set_color.method);
      pTVar21 = (__this->fields)._guildLabel;
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
                (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
                 (pTVar21->klass->vtable)._23_set_color.method);
      iVar8 = (__this->fields)._settingsStyleType;
      pTVar21 = (__this->fields)._nameLabel;
      uVar3 = (__this->fields)._settingsBackgroundColor.fields.r;
      uVar30._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
      uVar30._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
      UVar24.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar3,uVar30,0);
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar21,UVar24,(MethodInfo *)0x0);
      pTVar21 = (__this->fields)._guildLabel;
      uVar4 = (__this->fields)._settingsBackgroundColor.fields.r;
      uVar7._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
      uVar7._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
      UVar24.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar4,uVar7,0);
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar21,UVar24,(MethodInfo *)0x0);
      pTVar21 = (__this->fields)._nameLabel;
      if (iVar8 == 1) {
        fVar28 = 0.2;
      }
      else {
        fVar28 = 0.0;
      }
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,fVar28,(MethodInfo *)0x0);
      pTVar21 = (__this->fields)._guildLabel;
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,fVar28,(MethodInfo *)0x0);
      pCVar12 = (__this->fields).Character;
      if (((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
          (pSVar26 = (pCVar12->fields).VisibleName, pSVar26 == (System_String_o *)0x0)) ||
         (pSVar26 = System_String__Trim(pSVar26,(MethodInfo *)0x0), pSVar26 == (System_String_o *)0x0))
      goto label_05d03a79;
      iVar8 = (pSVar26->fields)._stringLength;
      iVar9 = (__this->fields)._minNameLength;
      count = iVar9 - iVar8;
      if (count == 0 || iVar9 < iVar8) {
        length = (__this->fields)._maxNameLength;
        if (length < iVar8) {
          pSVar26 = System_String__Substring_53042f0(pSVar26,0,length,(MethodInfo *)0x0);
        }
      }
      else {
        pSVar27 = System_String__CreateString_5309000((System_String_o *)0x0,0x25a9,count,(MethodInfo *)0x0);
        pSVar26 = System_String__Concat_52f0320(pSVar26,pSVar27,(MethodInfo *)0x0);
      }
      pCVar12 = (__this->fields).Character;
      if ((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar27 = (pCVar12->fields).VisibleName, pSVar27 == (System_String_o *)0x0)) goto label_05d03a79;
      pSVar22 = (pCVar12->fields).RichTextName;
      pSVar27 = System_String__Trim(pSVar27,(MethodInfo *)0x0);
      bVar23 = System_String__op_Equality(pSVar26,pSVar27,(MethodInfo *)0x0);
      if ((__this->fields)._teamsEnabled == false) {
        if (bVar23) {
          pSVar26 = pSVar22;
        }
        goto label_05d036e0;
      }
      pCVar12 = (__this->fields).Character;
      if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
      pSVar27 = (pCVar12->fields).Team;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar27 = GameManagers_TeamInfo__GetTeamColor(pSVar27,(MethodInfo *)0x0);
      if (bVar23) {
        pCVar12 = (__this->fields).Character;
        if ((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
           (pSVar26 = (pCVar12->fields).VisibleName, pSVar26 == (System_String_o *)0x0)) goto label_05d03a79;
        pSVar26 = System_String__Trim(pSVar26,(MethodInfo *)0x0);
      }
      goto label_05d03613;
    }
    if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_05d03a79;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar20,false,(MethodInfo *)0x0);
    pTVar21 = (__this->fields)._nameLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
              (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
               (pTVar21->klass->vtable)._23_set_color.method);
    pTVar21 = (__this->fields)._guildLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
              (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
               (pTVar21->klass->vtable)._23_set_color.method);
    pTVar21 = (__this->fields)._nameLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,0.0,(MethodInfo *)0x0);
    pTVar21 = (__this->fields)._guildLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,0.0,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).Character;
    if ((__this->fields)._teamsEnabled == false) {
      if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
      pSVar26 = (pCVar12->fields).RichTextName;
      goto label_05d036e0;
    }
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
    pSVar26 = (pCVar12->fields).Team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    pSVar26 = GameManagers_TeamInfo__GetTeamColor(pSVar26,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).Character;
    if ((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
       (pSVar27 = (pCVar12->fields).VisibleName, pSVar27 == (System_String_o *)0x0)) goto label_05d03a79;
    pSVar27 = System_String__Trim(pSVar27,(MethodInfo *)0x0);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    if (values == (System_String_array *)0x0) goto label_05d03a79;
    if ((int)values->max_length == 0) goto label_05d03a7e;
    values->m_Items[0] = "<color=";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) == 0) goto label_05d03a7e;
    values->m_Items[1] = pSVar26;
    Il2CppCodeGenWriteBarrier(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_05d03a7e;
    values->m_Items[2] = ">";
    Il2CppCodeGenWriteBarrier(values->m_Items + 2);
    if ((values->max_length & 0xfffffffc) == 0) goto label_05d03a7e;
    values->m_Items[3] = pSVar27;
    Il2CppCodeGenWriteBarrier(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_05d03a7e;
    values->m_Items[4] = "</color>";
    Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  }
  else {
    pUVar20 = (__this->fields)._nameBackground;
    if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_05d03a79;
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar20,(__this->fields)._settingsStyleType == 2,(MethodInfo *)0x0);
    if ((__this->fields)._settingsStyleType == 2) {
      pUVar20 = (__this->fields)._nameBackground;
      if (pUVar20 == (UnityEngine_UI_Image_o *)0x0) goto label_05d03a79;
      (*(pUVar20->klass->vtable)._23_set_color.methodPtr)
                (pUVar20,(UnityEngine_Color_o)(__this->fields)._settingsBackgroundColor.fields,
                 (pUVar20->klass->vtable)._23_set_color.method);
    }
    pTVar21 = (__this->fields)._nameLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
              (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
               (pTVar21->klass->vtable)._23_set_color.method);
    pTVar21 = (__this->fields)._guildLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
              (pTVar21,(UnityEngine_Color_o)(__this->fields)._settingsNameColor.fields,
               (pTVar21->klass->vtable)._23_set_color.method);
    iVar8 = (__this->fields)._settingsStyleType;
    pTVar21 = (__this->fields)._nameLabel;
    uVar1 = (__this->fields)._settingsBackgroundColor.fields.r;
    uVar5._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
    uVar5._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
    UVar24.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar1,uVar5,0);
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar21,UVar24,(MethodInfo *)0x0);
    pTVar21 = (__this->fields)._guildLabel;
    uVar2 = (__this->fields)._settingsBackgroundColor.fields.r;
    uVar6._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
    uVar6._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
    UVar24.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar2,uVar6,0);
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar21,UVar24,(MethodInfo *)0x0);
    pTVar21 = (__this->fields)._nameLabel;
    if (iVar8 == 1) {
      fVar28 = 0.2;
    }
    else {
      fVar28 = 0.0;
    }
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,fVar28,(MethodInfo *)0x0);
    pTVar21 = (__this->fields)._guildLabel;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d03a79;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar21,fVar28,(MethodInfo *)0x0);
    pCVar12 = (__this->fields).Character;
    if ((pCVar12 == (Characters_BaseCharacter_o *)0x0) ||
       (pSVar26 = (pCVar12->fields).VisibleName, pSVar26 == (System_String_o *)0x0)) goto label_05d03a79;
    pSVar26 = System_String__Trim(pSVar26,(MethodInfo *)0x0);
    if ((__this->fields)._teamsEnabled == false) goto label_05d036e0;
    pCVar12 = (__this->fields).Character;
    if (pCVar12 == (Characters_BaseCharacter_o *)0x0) goto label_05d03a79;
    pSVar27 = (pCVar12->fields).Team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    pSVar27 = GameManagers_TeamInfo__GetTeamColor(pSVar27,(MethodInfo *)0x0);
label_05d03613:
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    if (values == (System_String_array *)0x0) {
label_05d03a79:
      ThrowNullReferenceException();
    }
    if ((int)values->max_length == 0) {
label_05d03a7e:
      ThrowIndexOutOfRangeException();
    }
    values->m_Items[0] = "<color=";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) == 0) goto label_05d03a7e;
    values->m_Items[1] = pSVar27;
    Il2CppCodeGenWriteBarrier(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_05d03a7e;
    values->m_Items[2] = ">";
    Il2CppCodeGenWriteBarrier(values->m_Items + 2);
    if ((values->max_length & 0xfffffffc) == 0) goto label_05d03a7e;
    values->m_Items[3] = pSVar26;
    Il2CppCodeGenWriteBarrier(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_05d03a7e;
    values->m_Items[4] = "</color>";
    Il2CppCodeGenWriteBarrier(values->m_Items + 4);
  }
  pSVar26 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
label_05d036e0:
  (__this->fields)._name = pSVar26;
  Il2CppCodeGenWriteBarrier(targetAddress);
  UI_CharacterInfoPopup__SetName(__this,(__this->fields)._name,method_00);
  return;
}


// UI.CharacterInfoPopup$$SetName
// il2cpp: void UI_CharacterInfoPopup__SetName (UI_CharacterInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d03f10

void UI_CharacterInfoPopup__SetName(UI_CharacterInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  bool bVar5;
  Photon_Realtime_Player_o *owner;
  System_String_o *presetId;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  bool value;
  
  if (Il2CppMethodInitialized_07547d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d0d = '\x01';
  }
  (__this->fields)._name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    pSVar6 = (pCVar1->fields).Guild;
    if (pSVar6 == (System_String_o *)0x0) {
      pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    }
    owner = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)name);
    presetId = UI_CharacterInfoPopup__GuildPresetId(__this,owner,method_00);
    bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
    method_01 = extraout_RDX;
    if (bVar4) {
      pSVar6 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
      method_01 = extraout_RDX_00;
    }
    UI_CharacterInfoPopup__RefreshGuildBadges(__this,owner,method_01);
    pSVar7 = (__this->fields)._name;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar7 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar7,false,(MethodInfo *)0x0);
    pSVar6 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar6,false,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._nameLabel;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,pSVar7,(pTVar2->klass->vtable)._66_set_text.method);
      pTVar2 = (__this->fields)._guildLabel;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                  (pTVar2,pSVar6,(pTVar2->klass->vtable)._66_set_text.method);
        bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        value = true;
        if (bVar4) {
          pGVar3 = (__this->fields)._guildBadges;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          value = false;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pGVar3 = (__this->fields)._guildBadges;
            if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_05d0414a;
            value = (pGVar3->fields)._HasBadges_k__BackingField != false;
          }
        }
        x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pUVar8 = (__this->fields)._guildRow;
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05d0414a;
          UnityEngine_GameObject__SetActive(pUVar8,value,(MethodInfo *)0x0);
        }
        pTVar2 = (__this->fields)._guildLabel;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,!bVar4,(MethodInfo *)0x0);
            UI_CharacterInfoPopup__UpdateEffectOverlay(__this,pSVar6,pSVar7,presetId,in_R8);
            return;
          }
        }
      }
    }
  }
label_05d0414a:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$Load
// il2cpp: void UI_CharacterInfoPopup__Load (UI_CharacterInfoPopup_o* __this, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, float range, const MethodInfo* method);
// 0x5d01e00

void UI_CharacterInfoPopup__Load
               (UI_CharacterInfoPopup_o *__this,Characters_BaseCharacter_o *character,
               UnityEngine_Vector3_o offset,float range,MethodInfo *method)

{
  Characters_BaseCharacter_o **targetAddress;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_Action_Hashtable__o *pSVar3;
  
  if (Il2CppMethodInitialized_07547d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d0e = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).Character;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = *targetAddress;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05d01fe1;
    if ((pCVar1->fields).AI == false) {
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                 (MethodInfo_4A81BE0 *)0x0);
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged(pCVar1,pSVar3,(MethodInfo *)0x0);
    }
  }
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields).Offset.fields.x = offset.fields.x;
  (__this->fields).Offset.fields.y = offset.fields.y;
  (__this->fields).Offset.fields.z = offset.fields.z;
  (__this->fields).Range = range;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    (__this->fields)._name = (character->fields).RichTextName;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
    (__this->fields)._lastTeam = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastTeam);
    (__this->fields)._lastGuild = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastGuild);
    (__this->fields)._lastName = (System_String_o *)0x0;
    pSVar3 = (System_Action_Hashtable__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastName);
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
        System_Action_object____ctor
                  ((System_Action_object__o *)pSVar3,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                   (MethodInfo_4A81BE0 *)0x0);
        Characters_BaseCharacter__add_OnPlayerPropertiesChanged(pCVar1,pSVar3,(MethodInfo *)0x0);
      }
      UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)pSVar3);
      return;
    }
  }
label_05d01fe1:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$CanApplySettings
// il2cpp: bool UI_CharacterInfoPopup__CanApplySettings (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d03e30

bool UI_CharacterInfoPopup__CanApplySettings(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  UnityEngine_UI_Image_o *x_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d0f = '\x01';
  }
  x = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    x_00 = (__this->fields)._nameBackground;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar1 = (__this->fields)._nameLabel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pTVar1 = (__this->fields)._guildLabel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return false;
}


// UI.CharacterInfoPopup$$LateUpdate
// il2cpp: void UI_CharacterInfoPopup__LateUpdate (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d04be0

void UI_CharacterInfoPopup__LateUpdate(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *a;
  System_String_o *a_00;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d10 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (pCVar1->fields).RichTextName;
  if (a == (System_String_o *)0x0) {
    a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    a_00 = (pCVar1->fields).Guild;
  }
  else {
    a_00 = (pCVar1->fields).Guild;
  }
  if (a_00 == (System_String_o *)0x0) {
    a_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    method_00 = (MethodInfo *)(pCVar1->fields).Team;
  }
  else {
    method_00 = (MethodInfo *)(pCVar1->fields).Team;
  }
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar2 = System_String__op_Equality(a,(__this->fields)._lastName,(MethodInfo *)0x0);
  if (((bVar2) &&
      (bVar2 = System_String__op_Equality(a_00,(__this->fields)._lastGuild,(MethodInfo *)0x0), bVar2)) &&
     (bVar2 = System_String__op_Equality
                        ((System_String_o *)method_00,(__this->fields)._lastTeam,(MethodInfo *)0x0), bVar2)) {
    return;
  }
  (__this->fields)._lastName = a;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastName);
  (__this->fields)._lastGuild = a_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastGuild);
  (__this->fields)._lastTeam = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._lastTeam);
  UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,method_00);
  return;
}


// UI.CharacterInfoPopup$$ToggleName
// il2cpp: void UI_CharacterInfoPopup__ToggleName (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x5d019d0

void UI_CharacterInfoPopup__ToggleName(UI_CharacterInfoPopup_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  pUVar1 = (__this->fields)._nameBackground;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar2 == toggle) {
        return;
      }
      pUVar1 = (__this->fields)._nameBackground;
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,toggle,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$ToggleHealthbar
// il2cpp: void UI_CharacterInfoPopup__ToggleHealthbar (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x5d017f0

void UI_CharacterInfoPopup__ToggleHealthbar(UI_CharacterInfoPopup_o *__this,bool toggle,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = (__this->fields)._healthbar;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (bVar1 == toggle) {
        return;
      }
      pUVar2 = (__this->fields)._healthbar;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2,toggle,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetHealthbar
// il2cpp: void UI_CharacterInfoPopup__SetHealthbar (UI_CharacterInfoPopup_o* __this, int32_t currentHealth, int32_t maxHealth, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5d01860

void UI_CharacterInfoPopup__SetHealthbar
               (UI_CharacterInfoPopup_o *__this,int32_t currentHealth,int32_t maxHealth,
               UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  float fVar4;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar6;
  float fVar7;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar8;
  int32_t local_40;
  int32_t local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_28._8_4_ = in_XMM1_Dc;
  local_28._0_8_ = color.fields._8_8_;
  local_28._12_4_ = in_XMM1_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = color.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  local_40 = maxHealth;
  local_3c = currentHealth;
  if (Il2CppMethodInitialized_07547d11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07547d11 = '\x01';
  }
  pUVar1 = (__this->fields)._healthbarFill;
  if (maxHealth < 1) {
    fVar5 = 0.0;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05d019c6;
  }
  else {
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05d019c6;
    fVar4 = (float)currentHealth / (float)maxHealth;
    fVar5 = 1.0;
    if (fVar4 <= 1.0) {
      fVar5 = fVar4;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
  }
  UnityEngine_UI_Image__set_fillAmount(pUVar1,fVar5,(MethodInfo *)0x0);
  pTVar2 = (__this->fields)._healthbarLabel;
  pSVar3 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  str2 = System_Int32__ToString(&local_40,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_5301f10(pSVar3,"/",str2,(MethodInfo *)0x0);
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,pSVar3,(pTVar2->klass->vtable)._66_set_text.method);
    pUVar1 = (__this->fields)._healthbarFill;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      UVar8 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
      fVar5 = UVar8.fields.r - (float)local_38._0_4_;
      fVar4 = UVar8.fields.g - (float)local_38._4_4_;
      fVar6 = UVar8.fields.b - (float)local_28._0_4_;
      fVar7 = UVar8.fields.a - (float)local_28._4_4_;
      if (9.9999994e-11 <= fVar7 * fVar7 + fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6) {
        pUVar1 = (__this->fields)._healthbarFill;
        if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_05d019c6;
        UVar8.fields.b = (float)local_28._0_4_;
        UVar8.fields.a = (float)local_28._4_4_;
        UVar8.fields.r = (float)local_38._0_4_;
        UVar8.fields.g = (float)local_38._4_4_;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,UVar8,(pUVar1->klass->vtable)._23_set_color.method);
      }
      return;
    }
  }
label_05d019c6:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$UpdateEffectOverlay
// il2cpp: void UI_CharacterInfoPopup__UpdateEffectOverlay (UI_CharacterInfoPopup_o* __this, System_String_o* guild, System_String_o* nameText, System_String_o* guildPresetId, const MethodInfo* method);
// 0x5d04530

void UI_CharacterInfoPopup__UpdateEffectOverlay
               (UI_CharacterInfoPopup_o *__this,System_String_o *guild,System_String_o *nameText,
               System_String_o *guildPresetId,MethodInfo *method)

{
  PatreonEffects_ResolvedNameEffect_o effect;
  PatreonEffects_ResolvedNameEffect_o effect_00;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  Photon_Realtime_Player_o *player;
  TMPro_TMP_FontAsset_o *pTVar7;
  TMPro_TMP_FontAsset_o *preferred;
  UnityEngine_GameObject_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  TMPro_TextMeshProUGUI_o *pTVar9;
  MethodInfo *method_07;
  float in_XMM1_Da;
  float in_XMM1_Db;
  UnityEngine_Color_o fallbackColor;
  UnityEngine_Color_o color;
  UnityEngine_Color_o fallbackColor_00;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o fallbackColor_01;
  UnityEngine_Color_o fallbackColor_02;
  PatreonEffects_ResolvedNameEffect_Fields PStack_c8;
  PatreonEffects_ResolvedNameEffect_Fields PStack_78;
  
  method_07 = (MethodInfo *)guild;
  if (Il2CppMethodInitialized_07547d12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_07547d12 = '\x01';
  }
  PStack_78.ColorC.fields.b = 0.0;
  PStack_78.ColorC.fields.a = 0.0;
  PStack_78.ColorD.fields.r = 0.0;
  PStack_78.ColorD.fields.g = 0.0;
  PStack_78.ColorB.fields.b = 0.0;
  PStack_78.ColorB.fields.a = 0.0;
  PStack_78.ColorC.fields.r = 0.0;
  PStack_78.ColorC.fields.g = 0.0;
  PStack_78.ColorA.fields.b = 0.0;
  PStack_78.ColorA.fields.a = 0.0;
  PStack_78.ColorB.fields.r = 0.0;
  PStack_78.ColorB.fields.g = 0.0;
  PStack_78.Enabled = false;
  PStack_78._1_3_ = 0;
  PStack_78.Type = 0;
  PStack_78.ColorA.fields.r = 0.0;
  PStack_78.ColorA.fields.g = 0.0;
  PStack_78.ColorD.fields.b = 0.0;
  PStack_78.ColorD.fields.a = 0.0;
  PStack_c8.ColorC.fields.b = 0.0;
  PStack_c8.ColorC.fields.a = 0.0;
  PStack_c8.ColorD.fields.r = 0.0;
  PStack_c8.ColorD.fields.g = 0.0;
  PStack_c8.ColorB.fields.b = 0.0;
  PStack_c8.ColorB.fields.a = 0.0;
  PStack_c8.ColorC.fields.r = 0.0;
  PStack_c8.ColorC.fields.g = 0.0;
  PStack_c8.ColorA.fields.b = 0.0;
  PStack_c8.ColorA.fields.a = 0.0;
  PStack_c8.ColorB.fields.r = 0.0;
  PStack_c8.ColorB.fields.g = 0.0;
  PStack_c8.Enabled = false;
  PStack_c8._1_3_ = 0;
  PStack_c8.Type = 0;
  PStack_c8.ColorA.fields.r = 0.0;
  PStack_c8.ColorA.fields.g = 0.0;
  PStack_c8.ColorD.fields.b = 0.0;
  PStack_c8.ColorD.fields.a = 0.0;
  player = UI_CharacterInfoPopup__OwnerPlayer(__this,method_07);
  if (player == (Photon_Realtime_Player_o *)0x0) {
label_05d0460b:
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pTVar7 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    preferred = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    bVar1 = true;
  }
  else {
    bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0);
    if ((!bVar1) || ((__this->fields)._applyForceNameColor == true)) goto label_05d0460b;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    pTVar7 = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    bVar1 = false;
    preferred = PatreonEffects_NameFontCatalog__FontForPlayer(player,true,(MethodInfo *)0x0);
  }
  pTVar9 = (__this->fields)._nameLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar9 = (__this->fields)._nameLabel;
      pTVar7 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(nameText,pTVar7,(MethodInfo *)0x0);
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar9,pTVar7,(MethodInfo *)0x0);
    }
  }
  pTVar9 = (__this->fields)._guildLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)preferred,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pTVar9 = (__this->fields)._guildLabel;
      pTVar7 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText(guild,preferred,(MethodInfo *)0x0);
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar9,pTVar7,(MethodInfo *)0x0);
    }
  }
  PStack_78.ColorC.fields.b = 0.0;
  PStack_78.ColorC.fields.a = 0.0;
  PStack_78.ColorD.fields.r = 0.0;
  PStack_78.ColorD.fields.g = 0.0;
  PStack_78.ColorB.fields.b = 0.0;
  PStack_78.ColorB.fields.a = 0.0;
  PStack_78.ColorC.fields.r = 0.0;
  PStack_78.ColorC.fields.g = 0.0;
  PStack_78.ColorA.fields.b = 0.0;
  PStack_78.ColorA.fields.a = 0.0;
  PStack_78.ColorB.fields.r = 0.0;
  PStack_78.ColorB.fields.g = 0.0;
  PStack_78.Enabled = false;
  PStack_78._1_3_ = 0;
  PStack_78.Type = 0;
  PStack_78.ColorA.fields.r = 0.0;
  PStack_78.ColorA.fields.g = 0.0;
  PStack_78.ColorD.fields.b = 0.0;
  PStack_78.ColorD.fields.a = 0.0;
  PStack_c8.Enabled = false;
  PStack_c8._1_3_ = 0;
  PStack_c8.Type = 0;
  PStack_c8.ColorA.fields.r = 0.0;
  PStack_c8.ColorA.fields.g = 0.0;
  PStack_c8.ColorA.fields.b = 0.0;
  PStack_c8.ColorA.fields.a = 0.0;
  PStack_c8.ColorB.fields.r = 0.0;
  PStack_c8.ColorB.fields.g = 0.0;
  PStack_c8.ColorB.fields.b = 0.0;
  PStack_c8.ColorB.fields.a = 0.0;
  PStack_c8.ColorC.fields.r = 0.0;
  PStack_c8.ColorC.fields.g = 0.0;
  PStack_c8.ColorC.fields.b = 0.0;
  PStack_c8.ColorC.fields.a = 0.0;
  PStack_c8.ColorD.fields.r = 0.0;
  PStack_c8.ColorD.fields.g = 0.0;
  PStack_c8.ColorD.fields.b = 0.0;
  PStack_c8.ColorD.fields.a = 0.0;
  bVar2 = true;
  if (!bVar1) {
    bVar3 = false;
    bVar1 = false;
    if ((__this->fields)._teamsEnabled == false) {
      bVar1 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                        (player,(PatreonEffects_ResolvedNameEffect_o *)&PStack_78,(MethodInfo *)0x0);
    }
    bVar2 = bVar1 == false;
    bVar1 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar3 = PatreonEffects_NameEffectHelpers__TryGetGuildEffect
                        (player,(PatreonEffects_ResolvedNameEffect_o *)&PStack_c8,(MethodInfo *)0x0);
    }
  }
  bVar1 = System_String__IsNullOrEmpty(nameText,(MethodInfo *)0x0);
  bVar4 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
  pTVar9 = (__this->fields)._nameLabel;
  if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05d04bcd;
  UnityEngine_GameObject__SetActive(pUVar8,!bVar1,(MethodInfo *)0x0);
  bVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                    ((__this->fields)._guildPresetImage,guildPresetId,(MethodInfo *)0x0);
  UI_CharacterInfoPopup__SetGuildRowSpacing(__this,bVar5,method_00);
  pTVar9 = (__this->fields)._guildLabel;
  if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05d04bcd;
  UnityEngine_GameObject__SetActive(pUVar8,!bVar4 && !bVar5,(MethodInfo *)0x0);
  pTVar9 = (__this->fields)._guildLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (bVar5) {
      pTVar9 = (__this->fields)._guildLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
      UVar10.fields._0_8_ =
           (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                     (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      fallbackColor.fields.a = in_XMM1_Db;
      fallbackColor.fields.b = in_XMM1_Da;
      fallbackColor.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
      UI_CharacterInfoPopup__ClearEffect(pTVar9,&(__this->fields)._guildEffect,fallbackColor,method_01);
      pTVar9 = (__this->fields)._guildLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
      UVar10.fields._0_8_ =
           (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                     (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      color.fields.a = in_XMM1_Db;
      color.fields.b = in_XMM1_Da;
      color.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                ((TMPro_TMP_Text_o *)pTVar9,&(__this->fields)._guildPresetEffect,color,(MethodInfo *)0x0);
    }
    else {
      bVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(guildPresetId,(MethodInfo *)0x0);
      pTVar9 = (__this->fields)._guildLabel;
      if (bVar5) {
        if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
        UVar10.fields._0_8_ =
             (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                       (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
        fallbackColor_00.fields.a = in_XMM1_Db;
        fallbackColor_00.fields.b = in_XMM1_Da;
        fallbackColor_00.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
        UI_CharacterInfoPopup__ClearEffect(pTVar9,&(__this->fields)._guildEffect,fallbackColor_00,method_02);
        in_XMM1_Da = (float)g_data_01005870;
        in_XMM1_Db = g_data_01005870._4_4_;
        UVar10.fields.b = (float)(int)g_data_01005870;
        UVar10.fields.a = (float)g_data_01005870._4_4_;
        UVar10.fields.r = (float)(int)g_data_01005870;
        UVar10.fields.g = (float)g_data_01005870._4_4_;
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                  ((TMPro_TMP_Text_o *)(__this->fields)._guildLabel,&(__this->fields)._guildPresetEffect,
                   guildPresetId,guild,UVar10,(MethodInfo *)0x0);
      }
      else {
        if (!bVar4) {
          if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
          UVar10.fields._0_8_ =
               (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                         (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
          color_00.fields.a = in_XMM1_Db;
          color_00.fields.b = in_XMM1_Da;
          color_00.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
          Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                    ((TMPro_TMP_Text_o *)pTVar9,&(__this->fields)._guildPresetEffect,color_00,
                     (MethodInfo *)0x0);
          pTVar9 = (__this->fields)._guildLabel;
          if (bVar3 != false) {
            effect.fields.ColorA.fields.r = PStack_c8.ColorA.fields.r;
            effect.fields.ColorA.fields.g = PStack_c8.ColorA.fields.g;
            effect.fields.Enabled = PStack_c8.Enabled;
            effect.fields._1_3_ = PStack_c8._1_3_;
            effect.fields.Type = PStack_c8.Type;
            effect.fields.ColorA.fields.b = PStack_c8.ColorA.fields.b;
            effect.fields.ColorA.fields.a = PStack_c8.ColorA.fields.a;
            effect.fields.ColorB.fields.r = PStack_c8.ColorB.fields.r;
            effect.fields.ColorB.fields.g = PStack_c8.ColorB.fields.g;
            effect.fields.ColorB.fields.b = PStack_c8.ColorB.fields.b;
            effect.fields.ColorB.fields.a = PStack_c8.ColorB.fields.a;
            effect.fields.ColorC.fields.r = PStack_c8.ColorC.fields.r;
            effect.fields.ColorC.fields.g = PStack_c8.ColorC.fields.g;
            effect.fields.ColorC.fields.b = PStack_c8.ColorC.fields.b;
            effect.fields.ColorC.fields.a = PStack_c8.ColorC.fields.a;
            effect.fields.ColorD.fields.r = PStack_c8.ColorD.fields.r;
            effect.fields.ColorD.fields.g = PStack_c8.ColorD.fields.g;
            effect.fields.ColorD.fields.b = PStack_c8.ColorD.fields.b;
            effect.fields.ColorD.fields.a = PStack_c8.ColorD.fields.a;
            in_XMM1_Da = PStack_c8.ColorA.fields.b;
            in_XMM1_Db = PStack_c8.ColorA.fields.a;
            UI_CharacterInfoPopup__ApplyEffect(pTVar9,&(__this->fields)._guildEffect,effect,method_03);
            goto label_05d04af3;
          }
        }
        if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d04bcd;
        UVar10.fields._0_8_ =
             (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                       (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
        fallbackColor_01.fields.a = in_XMM1_Db;
        fallbackColor_01.fields.b = in_XMM1_Da;
        fallbackColor_01.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
        UI_CharacterInfoPopup__ClearEffect(pTVar9,&(__this->fields)._guildEffect,fallbackColor_01,method_04);
      }
    }
  }
label_05d04af3:
  pTVar9 = (__this->fields)._nameLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar9 = (__this->fields)._nameLabel;
    if ((bVar1) || (bVar2)) {
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_05d04bcd:
        ThrowNullReferenceException();
      }
      UVar10.fields._0_8_ =
           (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                     (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      fallbackColor_02.fields.a = in_XMM1_Db;
      fallbackColor_02.fields.b = in_XMM1_Da;
      fallbackColor_02.fields._0_8_ = (undefined8)UVar10.fields._0_8_;
      UI_CharacterInfoPopup__ClearEffect(pTVar9,&(__this->fields)._nameEffect,fallbackColor_02,method_06);
    }
    else {
      effect_00.fields.ColorA.fields.r = PStack_78.ColorA.fields.r;
      effect_00.fields.ColorA.fields.g = PStack_78.ColorA.fields.g;
      effect_00.fields.Enabled = PStack_78.Enabled;
      effect_00.fields._1_3_ = PStack_78._1_3_;
      effect_00.fields.Type = PStack_78.Type;
      effect_00.fields.ColorA.fields.b = PStack_78.ColorA.fields.b;
      effect_00.fields.ColorA.fields.a = PStack_78.ColorA.fields.a;
      effect_00.fields.ColorB.fields.r = PStack_78.ColorB.fields.r;
      effect_00.fields.ColorB.fields.g = PStack_78.ColorB.fields.g;
      effect_00.fields.ColorB.fields.b = PStack_78.ColorB.fields.b;
      effect_00.fields.ColorB.fields.a = PStack_78.ColorB.fields.a;
      effect_00.fields.ColorC.fields.r = PStack_78.ColorC.fields.r;
      effect_00.fields.ColorC.fields.g = PStack_78.ColorC.fields.g;
      effect_00.fields.ColorC.fields.b = PStack_78.ColorC.fields.b;
      effect_00.fields.ColorC.fields.a = PStack_78.ColorC.fields.a;
      effect_00.fields.ColorD.fields.r = PStack_78.ColorD.fields.r;
      effect_00.fields.ColorD.fields.g = PStack_78.ColorD.fields.g;
      effect_00.fields.ColorD.fields.b = PStack_78.ColorD.fields.b;
      effect_00.fields.ColorD.fields.a = PStack_78.ColorD.fields.a;
      UI_CharacterInfoPopup__ApplyEffect(pTVar9,&(__this->fields)._nameEffect,effect_00,method_05);
    }
  }
  return;
}


// UI.CharacterInfoPopup$$ClearEffect
// il2cpp: void UI_CharacterInfoPopup__ClearEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, UnityEngine_Color_o fallbackColor, const MethodInfo* method);
// 0x5d04e70

void UI_CharacterInfoPopup__ClearEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               UnityEngine_Color_o fallbackColor,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547d13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d13 = '\x01';
  }
  pPVar1 = *controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (*controller == (PatreonEffects_NameEffectController_o *)0x0) goto label_05d04f72;
    PatreonEffects_NameEffectController__Clear(*controller,(MethodInfo *)0x0);
    pPVar1 = *controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *controller = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(controller);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(tmp->klass->vtable)._23_set_color.methodPtr)
              (tmp,fallbackColor,(tmp->klass->vtable)._23_set_color.method);
    return;
  }
label_05d04f72:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$ApplyEffect
// il2cpp: void UI_CharacterInfoPopup__ApplyEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x5d04f80

void UI_CharacterInfoPopup__ApplyEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               PatreonEffects_ResolvedNameEffect_o effect,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar2;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07547d14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d14 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pPVar2 = *controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((tmp == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tmp,(MethodInfo *)0x0),
       __this == (UnityEngine_GameObject_o *)0x0)) goto label_05d051cc;
    pPVar2 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    *controller = pPVar2;
    Il2CppCodeGenWriteBarrier(controller);
  }
  if (*controller != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*controller,(MethodInfo *)0x0);
    settings = PatreonEffects_NameEffectPresets__GetPreset(effect.fields.Type,(MethodInfo *)0x0);
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      (settings->fields).gradientA.fields.r = effect.fields.ColorA.fields.r;
      (settings->fields).gradientA.fields.g = effect.fields.ColorA.fields.g;
      (settings->fields).gradientA.fields.b = effect.fields.ColorA.fields.b;
      (settings->fields).gradientA.fields.a = effect.fields.ColorA.fields.a;
      (settings->fields).gradientB.fields.r = effect.fields.ColorB.fields.r;
      (settings->fields).gradientB.fields.g = effect.fields.ColorB.fields.g;
      (settings->fields).gradientB.fields.b = effect.fields.ColorB.fields.b;
      (settings->fields).gradientB.fields.a = effect.fields.ColorB.fields.a;
      (settings->fields).gradientC.fields.r = effect.fields.ColorC.fields.r;
      (settings->fields).gradientC.fields.g = effect.fields.ColorC.fields.g;
      (settings->fields).gradientC.fields.b = effect.fields.ColorC.fields.b;
      (settings->fields).gradientC.fields.a = effect.fields.ColorC.fields.a;
      (settings->fields).gradientD.fields.r = effect.fields.ColorD.fields.r;
      (settings->fields).gradientD.fields.g = effect.fields.ColorD.fields.g;
      (settings->fields).gradientD.fields.b = effect.fields.ColorD.fields.b;
      (settings->fields).gradientD.fields.a = effect.fields.ColorD.fields.a;
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        UVar3.fields.b = 1.0;
        UVar3.fields.a = 1.0;
        UVar3.fields.r = 1.0;
        UVar3.fields.g = 1.0;
        (*(tmp->klass->vtable)._23_set_color.methodPtr)(tmp,UVar3,(tmp->klass->vtable)._23_set_color.method);
        if (*controller != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*controller,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05d051cc:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetupGuildBadges
// il2cpp: void UI_CharacterInfoPopup__SetupGuildBadges (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d02670

void UI_CharacterInfoPopup__SetupGuildBadges(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_UI_Image_o **image;
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppType *handle;
  bool bVar2;
  int32_t index;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Type_array *pSVar5;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar9;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar10;
  UnityEngine_UI_Image_o *pUVar11;
  
  if (Il2CppMethodInitialized_07547d15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GuildBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"GuildPresetImage");
    il2cpp_codegen_initialize_runtime_metadata(&"GuildBadgeRow");
    Il2CppMethodInitialized_07547d15 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Name",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pTVar1 = (__this->fields)._guildLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pTVar1 = (__this->fields)._guildLabel;
    if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
       (pUVar4 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      index = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
      pSVar5 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (pSVar5 != (System_Type_array *)0x0) {
        if ((pSVar6 != (System_Type_o *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class)
           , pIVar7 == (Il2CppObject *)0x0)) {
label_05d02cde:
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if ((int)pSVar5->max_length != 0) {
          pSVar5->m_Items[0] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
          pSVar6 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                              (MethodInfo *)0x0);
          if ((pSVar6 != (System_Type_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) goto label_05d02cde;
          if ((pSVar5->max_length & 0xfffffffe) != 0) {
            pSVar5->m_Items[1] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
            pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_691aa60(pUVar8,"GuildBadgeRow",pSVar5,(MethodInfo *)0x0);
            targetAddress = &(__this->fields)._guildRow;
            (__this->fields)._guildRow = pUVar8;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pUVar8 = (__this->fields)._guildRow;
            if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent_692d510(pUVar4,pUVar3,false,(MethodInfo *)0x0);
              if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar3 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
                if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                   (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                          (*targetAddress,
                                           (MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup
                                          ), __this_00 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0)) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,
                             (MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,4.0,
                             (MethodInfo *)0x0);
                  if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                     (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                            (*targetAddress,
                                             (MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter)
                     , __this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
                    UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
                    UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
                    if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (*targetAddress,
                                          (MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                      pTVar1 = (__this->fields)._guildLabel;
                      if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                         (pUVar9 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
                        (*(pUVar9->klass->vtable)._38_set_preferredHeight.methodPtr)
                                  (pUVar9,(pTVar1->fields).m_fontSize + 10.0,
                                   (pUVar9->klass->vtable)._38_set_preferredHeight.method);
                        pSVar5 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
                        pSVar6 = System_Type__GetTypeFromHandle
                                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,
                                            (MethodInfo *)0x0);
                        if (pSVar5 != (System_Type_array *)0x0) {
                          if ((pSVar6 != (System_Type_o *)0x0) &&
                             (pIVar7 = il2cpp_vm_Object_IsInst
                                                 ((Il2CppObject *)pSVar6,
                                                  (((pSVar5->obj).klass)->_1).element_class),
                             pIVar7 == (Il2CppObject *)0x0)) goto label_05d02cde;
                          if ((int)pSVar5->max_length != 0) {
                            pSVar5->m_Items[0] = pSVar6;
                            Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
                            pSVar6 = System_Type__GetTypeFromHandle
                                               ((System_RuntimeTypeHandle_o)
                                                TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
                            if ((pSVar6 != (System_Type_o *)0x0) &&
                               (pIVar7 = il2cpp_vm_Object_IsInst
                                                   ((Il2CppObject *)pSVar6,
                                                    (((pSVar5->obj).klass)->_1).element_class),
                               pIVar7 == (Il2CppObject *)0x0)) goto label_05d02cde;
                            if ((pSVar5->max_length & 0xfffffffe) != 0) {
                              pSVar5->m_Items[1] = pSVar6;
                              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
                              pUVar8 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                              UnityEngine_GameObject___ctor_691aa60
                                        (pUVar8,"GuildBadges",pSVar5,(MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar3 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                                if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                                   (pUVar4 = UnityEngine_GameObject__get_transform
                                                       (*targetAddress,(MethodInfo *)0x0),
                                   pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                                  UnityEngine_Transform__SetParent_692d510
                                            (pUVar3,pUVar4,false,(MethodInfo *)0x0);
                                  pGVar10 = UnityEngine_GameObject__AddComponent_object_
                                                      (pUVar8,(MethodInfo_353B6A0 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime
                                                      );
                                  (__this->fields)._guildBadges = pGVar10;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields)._guildBadges);
                                  pTVar1 = (__this->fields)._guildLabel;
                                  if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                                     (pGVar10 = (__this->fields)._guildBadges,
                                     pGVar10 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0)) {
                                    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                                              (pGVar10,(pTVar1->fields).m_fontSize,2.0,
                                               (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                                               (System_String_o *)0x0,true,(MethodInfo *)0x0);
                                    if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar3 = UnityEngine_GameObject__get_transform
                                                         (*targetAddress,(MethodInfo *)0x0);
                                      pTVar1 = (__this->fields)._guildLabel;
                                      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                        image = &(__this->fields)._guildPresetImage;
                                        pUVar11 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                                                            (pUVar3,image,"GuildPresetImage",
                                                             (pTVar1->fields).m_fontSize + 10.0,
                                                             (MethodInfo *)0x0);
                                        (__this->fields)._guildPresetImage = pUVar11;
                                        Il2CppCodeGenWriteBarrier(image);
                                        pUVar11 = (__this->fields)._guildPresetImage;
                                        if ((pUVar11 != (UnityEngine_UI_Image_o *)0x0) &&
                                           (pUVar8 = UnityEngine_Component__get_gameObject
                                                               ((UnityEngine_Component_o *)pUVar11,
                                                                (MethodInfo *)0x0),
                                           pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__SetActive(pUVar8,false,(MethodInfo *)0x0);
                                          pTVar1 = (__this->fields)._guildLabel;
                                          if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                            pUVar3 = TMPro_TMP_Text__get_transform
                                                               ((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
                                            if ((*targetAddress != (UnityEngine_GameObject_o *)0x0) &&
                                               (pUVar4 = UnityEngine_GameObject__get_transform
                                                                   (*targetAddress,(MethodInfo *)0x0),
                                               pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                                              UnityEngine_Transform__SetParent_692d510
                                                        (pUVar3,pUVar4,false,(MethodInfo *)0x0);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto label_05d02cd4;
                            }
                          }
                          goto label_05d02cd9;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_05d02cd4;
          }
        }
label_05d02cd9:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05d02cd4:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$RefreshGuildBadges
// il2cpp: void UI_CharacterInfoPopup__RefreshGuildBadges (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x5d04300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d043ea: jmp 0x5d04458

void UI_CharacterInfoPopup__RefreshGuildBadges
               (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this_00;
  Il2CppClass *pIVar4;
  System_Collections_Generic_IEnumerable_string__o *roles;
  System_String_o *json;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07547d16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547d16 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._guildBadges;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  json = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if (owner == (Photon_Realtime_Player_o *)0x0) {
label_05d04458:
    if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0
       ) {
      pCVar2 = (__this->fields).Character;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05d04522;
        bVar3 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0);
        if (bVar3) {
          pIVar4 = (Il2CppClass *)TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
          if (pIVar4 == (Il2CppClass *)0x0) goto label_05d04522;
          goto label_05d044c7;
        }
      }
    }
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d04404;
      goto label_05d04458;
    }
    __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d04458;
label_05d04404:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_00 == (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d04522;
    }
    bVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
                       (owner->fields).actorNumber,&local_38,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if (((!bVar3) || (local_38 == (Il2CppObject *)0x0)) ||
       (pIVar4 = local_38[3].klass, pIVar4 == (Il2CppClass *)0x0)) goto label_05d04458;
label_05d044c7:
    pIVar4 = (pIVar4->_1).klass;
    if (pIVar4 == (Il2CppClass *)0x0) goto label_05d04522;
    json = (pIVar4->_1).byval_arg.data;
  }
  pGVar1 = (__this->fields)._guildBadges;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  roles = PatreonEffects_RoleSpriteHelpers__GetRoles(owner,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
              (pGVar1,json,roles,(MethodInfo *)0x0);
    return;
  }
label_05d04522:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetGuildRowSpacing
// il2cpp: void UI_CharacterInfoPopup__SetGuildRowSpacing (UI_CharacterInfoPopup_o* __this, bool imageGuild, const MethodInfo* method);
// 0x5d04d80

void UI_CharacterInfoPopup__SetGuildRowSpacing
               (UI_CharacterInfoPopup_o *__this,bool imageGuild,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_07547d17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d17 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_01 = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d04e5f;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (__this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
    if (imageGuild) {
      value = 2.8;
    }
    else {
      value = 4.0;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
label_05d04e5f:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$GuildPresetId
// il2cpp: System_String_o* UI_CharacterInfoPopup__GuildPresetId (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x5d04150
// eh: try 0x5d041a6..0x5d04261 -> pad 0x5d0426f (+8 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5d04293..0x5d042e6 -> pad 0x5d042e6 (+1 call sites) cleanup
// eh: try 0x5d042e9..0x5d042ee -> pad 0x5d042f6 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d04261: jmp 0x5d0426f
// asm:   0x5d04263: jmp 0x5d0426f
// asm:   0x5d04265: jmp 0x5d0426f
// asm:   0x5d04267: jmp 0x5d0426f
// asm:   0x5d04269: jmp 0x5d0426f
// asm:   0x5d0426b: jmp 0x5d0426f
// asm:   0x5d0426d: jmp 0x5d0426f
// asm:   0x5d0426f: mov rbx, rax
// asm:   0x5d04272: cmp edx, 1
// asm:   0x5d04275: jne 0x5d042ee
// asm:   0x5d04277: mov rdi, rbx
// asm:   0x5d0427a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d0427f: mov rbx, rax
// asm:   0x5d04282: lea rax, [rip + 0x185243f]
// asm:   0x5d04289: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5d0428d: mov rax, qword ptr [rbx]
// asm:   0x5d04290: mov rsi, qword ptr [rax]
// asm:   0x5d04293: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5d04298: test al, al
// asm:   0x5d0429a: je 0x5d042c5
// asm:   0x5d0429c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d042c5: mov edi, 8
// asm:   0x5d042ca: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5d042cf: mov rcx, qword ptr [rbx]
// asm:   0x5d042d2: mov qword ptr [rax], rcx
// asm:   0x5d042d5: lea rsi, [rip + 0x1129224]
// asm:   0x5d042dc: mov rdi, rax
// asm:   0x5d042df: xor edx, edx
// asm:   0x5d042e1: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5d042e6: mov rbx, rax
// asm:   0x5d042e9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d042ee: mov rdi, rbx
// asm:   0x5d042f1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d042f6: mov rdi, rax
// asm:   0x5d042f9: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
UI_CharacterInfoPopup__GuildPresetId
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547d18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_07547d18 = '\x01';
    method = extraout_RDX;
  }
  pSVar2 = UI_CharacterInfoPopup__CharacterInfoJson(__this,owner,method);
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      a = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar3,"guildPresetId",(pSVar3->klass->vtable)._7_get_Item.method);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar3,"guildPresetId",(pSVar3->klass->vtable)._7_get_Item.method);
        if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
        return pSVar2;
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.CharacterInfoPopup$$CharacterInfoJson
// il2cpp: System_String_o* UI_CharacterInfoPopup__CharacterInfoJson (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x5d051e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d05270: jmp 0x5d052ee
// asm:   0x5d052e9: jmp 0x5d05390

System_String_o *
UI_CharacterInfoPopup__CharacterInfoJson
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Settings_ProfileSettings_o *pSVar2;
  Il2CppClass *pIVar3;
  bool bVar4;
  System_Collections_Generic_Dictionary_int__PlayerInfo__o *__this_00;
  Il2CppType *pIVar5;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_07547d19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547d19 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (owner == (Photon_Realtime_Player_o *)0x0) {
label_05d052ee:
    if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0
       ) {
      pCVar1 = (__this->fields).Character;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar1 = (__this->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05d05390;
        bVar4 = Characters_BaseCharacter__IsMainCharacter(pCVar1,(MethodInfo *)0x0);
        if (bVar4) {
          pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
          if (pSVar2 == (Settings_ProfileSettings_o *)0x0) goto label_05d05390;
          pIVar3 = (Il2CppClass *)(pSVar2->fields).CharacterInfoJson;
          goto joined_r0x05d05366;
        }
      }
    }
    pIVar5 = *(Il2CppType **)(g_data_07556758 + 0xb8);
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_00 != (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d0528a;
      goto label_05d052ee;
    }
    __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d052ee;
label_05d0528a:
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_00 == (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_05d05390;
    }
    bVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,
                       (owner->fields).actorNumber,&local_20,
                       (MethodInfo_4A114B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if (((!bVar4) || (local_20 == (Il2CppObject *)0x0)) || (local_20[3].klass == (Il2CppClass *)0x0))
    goto label_05d052ee;
    pIVar3 = ((local_20[3].klass)->_1).klass;
joined_r0x05d05366:
    if (pIVar3 == (Il2CppClass *)0x0) {
label_05d05390:
      ThrowNullReferenceException();
    }
    pIVar5 = &(pIVar3->_1).byval_arg;
  }
  return pIVar5->data;
}


// UI.CharacterInfoPopup$$OwnerPlayer
// il2cpp: Photon_Realtime_Player_o* UI_CharacterInfoPopup__OwnerPlayer (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d02ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d02f93: jmp 0x5d02f36

Photon_Realtime_Player_o *
UI_CharacterInfoPopup__OwnerPlayer(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  
  if (Il2CppMethodInitialized_07547d1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547d1a = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pPVar5 = (Photon_Realtime_Player_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (__this->fields).Character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
label_05d02f95:
      ThrowNullReferenceException();
    }
    if ((pCVar2->fields).AI == false) {
      pUVar3 = (pCVar2->fields).Cache;
      if (pUVar3 == (Utility_BaseComponentCache_o *)0x0) {
        pPVar6 = (Photon_Pun_PhotonView_o *)0x0;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        pPVar6 = (pUVar3->fields).PhotonView;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pPVar5 = (Photon_Realtime_Player_o *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar2 = (__this->fields).Character;
        if (((pCVar2 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar3 = (pCVar2->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar6 = (pUVar3->fields).PhotonView, pPVar6 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_05d02f95;
        pPVar5 = (pPVar6->fields)._Owner_k__BackingField;
      }
    }
    else {
      pPVar5 = (Photon_Realtime_Player_o *)0x0;
    }
  }
  return pPVar5;
}


// UI.CharacterInfoPopup$$.ctor
// il2cpp: void UI_CharacterInfoPopup___ctor (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x5d053a0

void UI_CharacterInfoPopup___ctor(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  (__this->fields)._settingsNameColor.fields.r = 255.0;
  (__this->fields)._settingsNameColor.fields.g = 255.0;
  (__this->fields)._settingsNameColor.fields.b = 255.0;
  (__this->fields)._settingsNameColor.fields.a = 1.0;
  (__this->fields)._settingsBackgroundColor.fields.r = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.g = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.b = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.a = 100.0;
  (__this->fields)._name = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


