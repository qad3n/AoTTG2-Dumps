// Type: UI.CharacterInfoPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterInfoPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoPopup.cs
// --------------------------------

// UI.CharacterInfoPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_CharacterInfoPopup__get_EscapeBehavior (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_CharacterInfoPopup__get_EscapeBehavior(UI_CharacterInfoPopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.CharacterInfoPopup$$get_AnimationTime
// il2cpp: float UI_CharacterInfoPopup__get_AnimationTime (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x1822258b0

float
UI_CharacterInfoPopup__get_AnimationTime(UI_CharacterInfoPopup_o* __this, MethodInfo* method)

{
  return 0.25;
}


// UI.CharacterInfoPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_CharacterInfoPopup__get_PopupAnimationType (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_CharacterInfoPopup__get_PopupAnimationType(UI_CharacterInfoPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.CharacterInfoPopup$$Setup
// il2cpp: void UI_CharacterInfoPopup__Setup (UI_CharacterInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182224c50

void UI_CharacterInfoPopup__Setup(UI_CharacterInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Action_o *__this_00;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  
  if (Il2CppMethodInitialized_18434719a == '\0') {
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
    Il2CppMethodInitialized_18434719a = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._nameBackground = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._nameBackground,pUVar2);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name/GuildLabel",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pTVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)
                              MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
          (__this->fields)._guildLabel = pTVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._guildLabel,pTVar3);
          pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            pUVar1 = UnityEngine_Transform__Find(pUVar1,"Name/NameLabel",(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pTVar3 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI);
              (__this->fields)._nameLabel = pTVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._nameLabel,pTVar3);
              pUVar1 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find(pUVar1,"Healthbar",(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar4 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  (__this->fields)._healthbar = pUVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbar,pUVar4);
                  pUVar4 = (__this->fields)._healthbar;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar1 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = UnityEngine_Transform__Find(pUVar1,"Fill",(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                        pUVar2 = UnityEngine_Component__GetComponent_object_
                                           ((UnityEngine_Component_o *)pUVar1,
                                            (MethodInfo_6651A0 *)
                                            MethodInfo_UnityEngine_Component_GetComponent_Image);
                        (__this->fields)._healthbarFill = pUVar2;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbarFill,pUVar2);
                        pUVar4 = (__this->fields)._healthbar;
                        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar1 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                            pUVar1 = UnityEngine_Transform__Find
                                               (pUVar1,"Label",(MethodInfo *)0x0);
                            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                              pTVar3 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar1,
                                                  (MethodInfo_6651A0 *)
                                                  MethodInfo_UnityEngine_Component_GetComponent_TextMeshProUGUI
                                                 );
                              (__this->fields)._healthbarLabel = pTVar3;
                              Il2CppCodeGenWriteBarrier(&(__this->fields)._healthbarLabel,pTVar3);
                              pTVar3 = (__this->fields)._guildLabel;
                              if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_richText
                                          ((TMPro_TMP_Text_o *)pTVar3,true,(MethodInfo *)0x0);
                                pTVar3 = (__this->fields)._nameLabel;
                                if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                  TMPro_TMP_Text__set_richText
                                            ((TMPro_TMP_Text_o *)pTVar3,true,(MethodInfo *)0x0);
                                  UI_CharacterInfoPopup__SetupGuildBadges(__this,(MethodInfo *)0x0);
                                  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action)
                                  ;
                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,
                                             (Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged
                                             ,(MethodInfo *)0x0);
                                  Settings_SettingsManager__add_OnSettingsChanged(__this_00,(MethodInfo *)0x0)
                                  ;
                                  __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
                                              il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_System_Action_int);
                                  System_Action_int____ctor
                                            (__this_01,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated,
                                             (MethodInfo *)0x0);
                                  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor ==
                                      0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
                                  }
                                  GameManagers_InGameManager__add_PlayerInfoUpdated
                                            ((System_Action_int__o *)__this_01,(MethodInfo *)0x0);
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
// 0x182223160

void UI_CharacterInfoPopup__OnDestroy(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_Action_o *__this_00;
  UnityEngine_AudioClip_PCMSetPositionCallback_o *__this_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  
  if (Il2CppMethodInitialized_18434719b == '\0') {
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
    Il2CppMethodInitialized_18434719b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterInfoPopup_SettingsManager_OnSettingsChanged,(MethodInfo *)0x0);
  Settings_SettingsManager__remove_OnSettingsChanged(__this_00,(MethodInfo *)0x0);
  __this_01 = (UnityEngine_AudioClip_PCMSetPositionCallback_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_int);
  System_Action_int____ctor
            (__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_CharacterInfoPopup_InGameManager_PlayerInfoUpdated,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__remove_PlayerInfoUpdated((System_Action_int__o *)__this_01,(MethodInfo *)0x0);
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
      __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
      System_Action_object____ctor
                (__this_02,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                 (MethodInfo *)0x0);
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
                (pCVar1,(System_Action_Hashtable__o *)__this_02,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.CharacterInfoPopup$$InGameManager_PlayerInfoUpdated
// il2cpp: void UI_CharacterInfoPopup__InGameManager_PlayerInfoUpdated (UI_CharacterInfoPopup_o* __this, int32_t actorNumber, const MethodInfo* method);
// 0x182222dc0

void UI_CharacterInfoPopup__InGameManager_PlayerInfoUpdated
               (UI_CharacterInfoPopup_o *__this,int32_t actorNumber,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)0x0);
  if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) && ((pPVar1->fields).actorNumber == actorNumber)) {
    UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.CharacterInfoPopup$$Character_OnPlayerPropertiesChanged
// il2cpp: void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged (UI_CharacterInfoPopup_o* __this, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x182222600

void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged
               (UI_CharacterInfoPopup_o *__this,ExitGames_Client_Photon_Hashtable_o *changedProps,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Photon_Realtime_Player_o *pPVar7;
  
  if (Il2CppMethodInitialized_18434719c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_18434719c = '\x01';
  }
  bVar4 = UI_CharacterInfoPopup__CanApplySettings(__this,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    if (changedProps == (ExitGames_Client_Photon_Hashtable_o *)0x0) {
label_182222987:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)changedProps,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar5 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,
                          (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Team,
                          (MethodInfo *)0x0);
      pSVar6 = (System_String_o *)0x0;
      if (pSVar5 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar5->klass == g_data_184354e50) {
          pSVar6 = pSVar5;
        }
        if (pSVar6 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar5,g_data_184354e50);
        }
      }
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_182222987;
      (pCVar1->fields).Team = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Team,pSVar6);
    }
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)changedProps,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar6 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,
                          (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Name,
                          (MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar5 = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
          pSVar5 = pSVar6;
        }
        if (pSVar5 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
        pCVar1 = (__this->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_182222987;
        pUVar2 = (pCVar1->fields).Cache;
        if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
           (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
          pPVar7 = (Photon_Realtime_Player_o *)0x0;
        }
        else {
          pPVar7 = (pPVar3->fields)._Owner_k__BackingField;
        }
        if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        }
        pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(pPVar7,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar6 = MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
        Characters_BaseCharacter__set_Name(pCVar1,pSVar6,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)changedProps,
                       (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
      }
      pSVar6 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,
                          (Il2CppObject *)TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                          (MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        pSVar5 = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
          pSVar5 = pSVar6;
        }
        if (pSVar5 == (System_String_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
        pCVar1 = (__this->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_182222987;
        pUVar2 = (pCVar1->fields).Cache;
        if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
           (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
          pPVar7 = (Photon_Realtime_Player_o *)0x0;
        }
        else {
          pPVar7 = (pPVar3->fields)._Owner_k__BackingField;
        }
        if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        }
        pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(pPVar7,pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
        }
        pSVar6 = MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
        (pCVar1->fields).Guild = pSVar6;
        Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Guild,pSVar6);
      }
    }
    UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.CharacterInfoPopup$$SettingsManager_OnSettingsChanged
// il2cpp: void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x182223ae0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182224069: mov rax, rsi
// asm:   0x18222428e: mov r14, rax
// asm:   0x182224318: jmp 0x182223f84
// asm:   0x182224324: jmp 0x182224069

void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged
               (UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t length;
  Settings_UISettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_BaseCharacter_o *pCVar4;
  Settings_ColorSetting_o *pSVar5;
  Utility_Color255_o *pUVar6;
  Settings_ToggleColorSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_InGameSet_o *pSVar9;
  Settings_InGameMiscSettings_o *pSVar10;
  UnityEngine_UI_Image_o *pUVar11;
  TMPro_TextMeshProUGUI_o *pTVar12;
  bool bVar13;
  char cVar14;
  UnityEngine_Color32_o UVar15;
  UnityEngine_Color_o *pUVar16;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  System_String_array *values;
  System_String_o *pSVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434719d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=");
    Il2CppMethodInitialized_18434719d = '\x01';
  }
  bVar13 = UI_CharacterInfoPopup__CanApplySettings(__this,(MethodInfo *)0x0);
  if (!bVar13) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).NameOverrideTarget, pSVar3 == (Settings_IntSetting_o *)0x0))
  goto label_182224578;
  iVar1 = (pSVar3->fields)._value;
  if (iVar1 == 0) {
label_182223bec:
    bVar13 = true;
  }
  else {
    if (iVar1 == 1) {
      pCVar4 = (__this->fields).Character;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
      bVar13 = Characters_BaseCharacter__IsMainCharacter(pCVar4,(MethodInfo *)0x0);
      if (bVar13) goto label_182223bec;
    }
    else if (iVar1 == 2) {
      pCVar4 = (__this->fields).Character;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
      bVar13 = Characters_BaseCharacter__IsMainCharacter(pCVar4,(MethodInfo *)0x0);
      bVar13 = !bVar13;
      goto label_182223bee;
    }
    bVar13 = false;
  }
label_182223bee:
  if (__this == (UI_CharacterInfoPopup_o *)0x0) goto label_182224578;
  (__this->fields)._settingsApplyToMe = bVar13;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).NameBackgroundType, pSVar3 == (Settings_IntSetting_o *)0x0))
  goto label_182224578;
  (__this->fields)._settingsStyleType = (pSVar3->fields)._value;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     ((pSVar5 = (pSVar2->fields).ForceBackgroundColor, pSVar5 == (Settings_ColorSetting_o *)0x0 ||
      (pUVar6 = (pSVar5->fields)._value, pUVar6 == (Utility_Color255_o *)0x0)))) goto label_182224578;
  pUVar16 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,pUVar6,(MethodInfo *)0x0);
  fVar23 = (pUVar16->fields).g;
  fVar20 = (pUVar16->fields).b;
  fVar21 = (pUVar16->fields).a;
  (__this->fields)._settingsBackgroundColor.fields.r = (pUVar16->fields).r;
  (__this->fields)._settingsBackgroundColor.fields.g = fVar23;
  (__this->fields)._settingsBackgroundColor.fields.b = fVar20;
  (__this->fields)._settingsBackgroundColor.fields.a = fVar21;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     ((pSVar7 = (pSVar2->fields).ForceNameColor, pSVar7 == (Settings_ToggleColorSetting_o *)0x0 ||
      (pSVar8 = (pSVar7->fields).Enabled, pSVar8 == (Settings_BoolSetting_o *)0x0)))) goto label_182224578;
  bVar13 = (pSVar8->fields)._value;
  (__this->fields)._forceNameColorEnabled = bVar13;
  if (bVar13 == false) {
    cVar14 = '\0';
  }
  else {
    cVar14 = (__this->fields)._settingsApplyToMe;
  }
  (__this->fields)._applyForceNameColor = cVar14 != '\0';
  if ((__this->fields)._forceNameColorEnabled == false) {
    fVar23 = 1.0;
    fVar20 = 1.0;
    fVar21 = 1.0;
    fVar22 = 1.0;
  }
  else {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((((pSVar2 == (Settings_UISettings_o *)0x0) ||
         (pSVar7 = (pSVar2->fields).ForceNameColor, pSVar7 == (Settings_ToggleColorSetting_o *)0x0)) ||
        (pSVar5 = (pSVar7->fields).Color, pSVar5 == (Settings_ColorSetting_o *)0x0)) ||
       (pUVar6 = (pSVar5->fields)._value, pUVar6 == (Utility_Color255_o *)0x0)) goto label_182224578;
    pUVar16 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,pUVar6,(MethodInfo *)0x0);
    fVar23 = (pUVar16->fields).r;
    fVar20 = (pUVar16->fields).g;
    fVar21 = (pUVar16->fields).b;
    fVar22 = (pUVar16->fields).a;
  }
  (__this->fields)._settingsNameColor.fields.r = fVar23;
  (__this->fields)._settingsNameColor.fields.g = fVar20;
  (__this->fields)._settingsNameColor.fields.b = fVar21;
  (__this->fields)._settingsNameColor.fields.a = fVar22;
  pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar9 == (Settings_InGameSet_o *)0x0) ||
      (pSVar10 = (pSVar9->fields).Misc, pSVar10 == (Settings_InGameMiscSettings_o *)0x0)) ||
     (pSVar3 = (pSVar10->fields).PVP, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_182224578;
  (__this->fields)._teamsEnabled = (pSVar3->fields)._value == 2;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).MinNameLength, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_182224578;
  (__this->fields)._minNameLength = (pSVar3->fields)._value;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).MaxNameLength, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_182224578;
  pCVar4 = (__this->fields).Character;
  (__this->fields)._maxNameLength = (pSVar3->fields)._value;
  if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
  pSVar17 = (pCVar4->fields).RichTextName;
  (__this->fields)._name = pSVar17;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar17);
  pUVar11 = (__this->fields)._nameBackground;
  if ((__this->fields)._applyForceNameColor == false) {
    if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182224578;
    if ((__this->fields)._settingsApplyToMe == false) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar11,false,(MethodInfo *)0x0);
      pTVar12 = (__this->fields)._nameLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
      local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
      local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
      local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
      pTVar12 = (__this->fields)._guildLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
      local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
      local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
      local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
      pTVar12 = (__this->fields)._nameLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,0.0,(MethodInfo *)0x0);
      pTVar12 = (__this->fields)._guildLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,0.0,(MethodInfo *)0x0);
      pCVar4 = (__this->fields).Character;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
      if ((__this->fields)._teamsEnabled == false) {
        pSVar17 = (pCVar4->fields).RichTextName;
        goto label_18222406c;
      }
      pSVar17 = (pCVar4->fields).Team;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar17 = GameManagers_TeamInfo__GetTeamColor(pSVar17,(MethodInfo *)0x0);
label_182223f84:
      pCVar4 = (__this->fields).Character;
      if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar18 = (pCVar4->fields).VisibleName, pSVar18 == (System_String_o *)0x0)) goto label_182224578;
      pSVar18 = System_String__Trim(pSVar18,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar11,(__this->fields)._settingsStyleType == 2,(MethodInfo *)0x0
                );
      pUVar11 = (__this->fields)._nameBackground;
      if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
      local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
      local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
      local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
      (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                (pUVar11,(UnityEngine_Color_o *)local_28,(pUVar11->klass->vtable)._23_set_color.method);
      pTVar12 = (__this->fields)._nameLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
      local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
      local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
      local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
      pTVar12 = (__this->fields)._guildLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
      local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
      local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
      local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
      local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
      local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
      local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
      local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
      iVar1 = (__this->fields)._settingsStyleType;
      pTVar12 = (__this->fields)._nameLabel;
      UVar15 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar12,UVar15,(MethodInfo *)0x0);
      local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
      local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
      local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
      local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
      pTVar12 = (__this->fields)._guildLabel;
      UVar15 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar12,UVar15,(MethodInfo *)0x0);
      fVar23 = 0.2;
      if (iVar1 == 1) {
        fVar20 = 0.2;
      }
      else {
        fVar20 = 0.0;
      }
      pTVar12 = (__this->fields)._nameLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,fVar20,(MethodInfo *)0x0);
      if (iVar1 != 1) {
        fVar23 = 0.0;
      }
      pTVar12 = (__this->fields)._guildLabel;
      if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,fVar23,(MethodInfo *)0x0);
      pCVar4 = (__this->fields).Character;
      if (((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
          (pSVar17 = (pCVar4->fields).VisibleName, pSVar17 == (System_String_o *)0x0)) ||
         (pSVar18 = System_String__Trim(pSVar17,(MethodInfo *)0x0), pSVar18 == (System_String_o *)0x0))
      goto label_182224578;
      iVar1 = (pSVar18->fields)._stringLength;
      if (iVar1 < (__this->fields)._minNameLength) {
        pSVar17 = System_String__CreateString_196aec0
                            ((System_String_o *)0x0,0x25a9,(__this->fields)._minNameLength - iVar1,
                             (MethodInfo *)0x0);
        pSVar18 = System_String__Concat_1969e50(pSVar18,pSVar17,(MethodInfo *)0x0);
      }
      else {
        length = (__this->fields)._maxNameLength;
        if (length < (pSVar18->fields)._stringLength) {
          pSVar18 = System_String__Substring_1972740(pSVar18,0,length,(MethodInfo *)0x0);
        }
      }
      pCVar4 = (__this->fields).Character;
      if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar19 = (pCVar4->fields).VisibleName, pSVar19 == (System_String_o *)0x0)) goto label_182224578;
      pSVar17 = (pCVar4->fields).RichTextName;
      pSVar19 = System_String__Trim(pSVar19,(MethodInfo *)0x0);
      bVar13 = System_String__op_Equality(pSVar18,pSVar19,(MethodInfo *)0x0);
      if ((__this->fields)._teamsEnabled == false) {
        if (!bVar13) {
          pSVar17 = pSVar18;
        }
        goto label_18222406c;
      }
      pCVar4 = (__this->fields).Character;
      if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
      pSVar17 = (pCVar4->fields).Team;
      if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
      }
      pSVar17 = GameManagers_TeamInfo__GetTeamColor(pSVar17,(MethodInfo *)0x0);
      if (bVar13) goto label_182223f84;
    }
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar19 = "<color=";
    if (values == (System_String_array *)0x0) {
label_182224578:
      ThrowNullReferenceException();
    }
    if ((int)values->max_length == 0) goto label_18222457e;
    values->m_Items[0] = "<color=";
    Il2CppCodeGenWriteBarrier(values->m_Items,pSVar19);
    if ((uint)values->max_length < 2) goto label_18222457e;
    values->m_Items[1] = pSVar17;
    Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar17);
    pSVar17 = ">";
    if ((uint)values->max_length < 3) goto label_18222457e;
    values->m_Items[2] = ">";
    Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar17);
    if ((uint)values->max_length < 4) goto label_18222457e;
    values->m_Items[3] = pSVar18;
  }
  else {
    if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182224578;
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pUVar11,(__this->fields)._settingsStyleType == 2,(MethodInfo *)0x0);
    if ((__this->fields)._settingsStyleType == 2) {
      pUVar11 = (__this->fields)._nameBackground;
      if (pUVar11 == (UnityEngine_UI_Image_o *)0x0) goto label_182224578;
      local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
      local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
      local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
      local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
      (*(pUVar11->klass->vtable)._23_set_color.methodPtr)
                (pUVar11,(UnityEngine_Color_o *)local_28,(pUVar11->klass->vtable)._23_set_color.method);
    }
    pTVar12 = (__this->fields)._nameLabel;
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
    local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
    local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
    local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
              (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
    pTVar12 = (__this->fields)._guildLabel;
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    local_28[0].r = (__this->fields)._settingsNameColor.fields.r;
    local_28[0].g = (__this->fields)._settingsNameColor.fields.g;
    local_28[0].b = (__this->fields)._settingsNameColor.fields.b;
    local_28[0].a = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
              (pTVar12,(UnityEngine_Color_o *)local_28,(pTVar12->klass->vtable)._23_set_color.method);
    local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
    local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
    local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
    local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
    iVar1 = (__this->fields)._settingsStyleType;
    pTVar12 = (__this->fields)._nameLabel;
    UVar15 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar12,UVar15,(MethodInfo *)0x0);
    local_28[0].r = (__this->fields)._settingsBackgroundColor.fields.r;
    local_28[0].g = (__this->fields)._settingsBackgroundColor.fields.g;
    local_28[0].b = (__this->fields)._settingsBackgroundColor.fields.b;
    local_28[0].a = (__this->fields)._settingsBackgroundColor.fields.a;
    pTVar12 = (__this->fields)._guildLabel;
    UVar15 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar12,UVar15,(MethodInfo *)0x0);
    fVar23 = 0.2;
    if (iVar1 == 1) {
      fVar20 = 0.2;
    }
    else {
      fVar20 = 0.0;
    }
    pTVar12 = (__this->fields)._nameLabel;
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,fVar20,(MethodInfo *)0x0);
    if (iVar1 != 1) {
      fVar23 = 0.0;
    }
    pTVar12 = (__this->fields)._guildLabel;
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182224578;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar12,fVar23,(MethodInfo *)0x0);
    pCVar4 = (__this->fields).Character;
    if ((pCVar4 == (Characters_BaseCharacter_o *)0x0) ||
       (pSVar17 = (pCVar4->fields).VisibleName, pSVar17 == (System_String_o *)0x0)) goto label_182224578;
    pSVar18 = System_String__Trim(pSVar17,(MethodInfo *)0x0);
    pSVar17 = pSVar18;
    if ((__this->fields)._teamsEnabled == false) goto label_18222406c;
    pCVar4 = (__this->fields).Character;
    if (pCVar4 == (Characters_BaseCharacter_o *)0x0) goto label_182224578;
    pSVar17 = (pCVar4->fields).Team;
    if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
    }
    pSVar19 = GameManagers_TeamInfo__GetTeamColor(pSVar17,(MethodInfo *)0x0);
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar17 = "<color=";
    if (values == (System_String_array *)0x0) goto label_182224578;
    if ((int)values->max_length == 0) goto label_18222457e;
    values->m_Items[0] = "<color=";
    Il2CppCodeGenWriteBarrier(values->m_Items,pSVar17);
    if ((uint)values->max_length < 2) goto label_18222457e;
    values->m_Items[1] = pSVar19;
    Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar19);
    pSVar17 = ">";
    if ((uint)values->max_length < 3) goto label_18222457e;
    values->m_Items[2] = ">";
    Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar17);
    if ((uint)values->max_length < 4) goto label_18222457e;
    values->m_Items[3] = pSVar18;
  }
  Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar18);
  pSVar17 = "</color>";
  if (4 < (uint)values->max_length) {
    values->m_Items[4] = "</color>";
    Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar17);
    pSVar17 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
label_18222406c:
    (__this->fields)._name = pSVar17;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._name,pSVar17);
    UI_CharacterInfoPopup__SetName(__this,(__this->fields)._name,(MethodInfo *)0x0);
    return;
  }
label_18222457e:
  ThrowIndexOutOfRangeException();
}


// UI.CharacterInfoPopup$$SetName
// il2cpp: void UI_CharacterInfoPopup__SetName (UI_CharacterInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822238b0

void UI_CharacterInfoPopup__SetName(UI_CharacterInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  char cVar5;
  bool bVar6;
  System_String_o **ppSVar7;
  Photon_Realtime_Player_o *owner;
  System_String_o *presetId;
  System_String_o *value;
  UnityEngine_GameObject_o *pUVar8;
  
  if (Il2CppMethodInitialized_18434719e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434719e = '\x01';
  }
  (__this->fields)._name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,name);
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    ppSVar7 = &(pCVar1->fields).Guild;
    if (*ppSVar7 == (System_String_o *)0x0) {
      ppSVar7 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    value = *ppSVar7;
    owner = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)0x0);
    presetId = UI_CharacterInfoPopup__GuildPresetId(__this,owner,(MethodInfo *)0x0);
    bVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
    if (bVar4) {
      value = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
    }
    UI_CharacterInfoPopup__RefreshGuildBadges(__this,owner,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._nameLabel;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,(__this->fields)._name,(pTVar2->klass->vtable)._66_set_text.method);
      pTVar2 = (__this->fields)._guildLabel;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                  (pTVar2,value,(pTVar2->klass->vtable)._66_set_text.method);
        bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar4) {
          pGVar3 = (__this->fields)._guildBadges;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pGVar3 = (__this->fields)._guildBadges;
            if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) goto label_182223acb;
            cVar5 = (pGVar3->fields)._HasBadges_k__BackingField;
          }
          else {
            cVar5 = '\0';
          }
        }
        else {
          cVar5 = '\x01';
        }
        x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pUVar8 = (__this->fields)._guildRow;
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182223acb;
          UnityEngine_GameObject__SetActive(pUVar8,cVar5 != '\0',(MethodInfo *)0x0);
        }
        pTVar2 = (__this->fields)._guildLabel;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar8,!bVar4,(MethodInfo *)0x0);
            UI_CharacterInfoPopup__UpdateEffectOverlay
                      (__this,value,(__this->fields)._name,presetId,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_182223acb:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$Load
// il2cpp: void UI_CharacterInfoPopup__Load (UI_CharacterInfoPopup_o* __this, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, float range, const MethodInfo* method);
// 0x182222f80

void UI_CharacterInfoPopup__Load
               (UI_CharacterInfoPopup_o *__this,Characters_BaseCharacter_o *character,
               UnityEngine_Vector3_o *offset,float range,MethodInfo *method)

{
  float fVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_String_o *value;
  float fVar3;
  bool bVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar5;
  
  if (Il2CppMethodInitialized_18434719f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434719f = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar2 = (__this->fields).Character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_18222314b;
    if ((pCVar2->fields).AI == false) {
      pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
      System_Action_object____ctor
                (pUVar5,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                 (MethodInfo *)0x0);
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
                (pCVar2,(System_Action_Hashtable__o *)pUVar5,(MethodInfo *)0x0);
    }
  }
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character,character);
  fVar3 = (offset->fields).y;
  fVar1 = (offset->fields).z;
  (__this->fields).Offset.fields.x = (offset->fields).x;
  (__this->fields).Offset.fields.y = fVar3;
  (__this->fields).Offset.fields.z = fVar1;
  (__this->fields).Range = range;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    value = (character->fields).RichTextName;
    (__this->fields)._name = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._name,value);
    (__this->fields)._lastTeam = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastTeam,(void *)0x0);
    (__this->fields)._lastGuild = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastGuild,(void *)0x0);
    (__this->fields)._lastName = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lastName,(void *)0x0);
    pCVar2 = (__this->fields).Character;
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      if ((pCVar2->fields).AI == false) {
        pUVar5 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Hashtable);
        System_Action_object____ctor
                  (pUVar5,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_CharacterInfoPopup_Character_OnPlayerPropertiesChanged,
                   (MethodInfo *)0x0);
        Characters_BaseCharacter__add_OnPlayerPropertiesChanged
                  (pCVar2,(System_Action_Hashtable__o *)pUVar5,(MethodInfo *)0x0);
      }
      UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)0x0);
      return;
    }
  }
label_18222314b:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$CanApplySettings
// il2cpp: bool UI_CharacterInfoPopup__CanApplySettings (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x182222340

bool UI_CharacterInfoPopup__CanApplySettings(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *x;
  UnityEngine_UI_Image_o *x_00;
  TMPro_TextMeshProUGUI_o *pTVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843471a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471a0 = '\x01';
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
// 0x182222e00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182222f56: mov rbp, qword ptr [rsp + 0x30]
// asm:   0x182222f5b: mov rsi, qword ptr [rsp + 0x38]

void UI_CharacterInfoPopup__LateUpdate(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *a;
  System_String_o *a_00;
  System_String_o *a_01;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_1843471a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471a1 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppSVar4 = &(pCVar1->fields).RichTextName;
    if (*ppSVar4 == (System_String_o *)0x0) {
      ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    ppSVar3 = &(((__this->fields).Character)->fields).Guild;
    if (*ppSVar3 == (System_String_o *)0x0) {
      ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    a = *ppSVar3;
    ppSVar3 = &(((__this->fields).Character)->fields).Team;
    a_00 = *ppSVar4;
    if (*ppSVar3 == (System_String_o *)0x0) {
      ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    a_01 = *ppSVar3;
    bVar2 = System_String__op_Equality(a_00,(__this->fields)._lastName,(MethodInfo *)0x0);
    if (((!bVar2) ||
        (bVar2 = System_String__op_Equality(a,(__this->fields)._lastGuild,(MethodInfo *)0x0), !bVar2)) ||
       (bVar2 = System_String__op_Equality(a_01,(__this->fields)._lastTeam,(MethodInfo *)0x0), !bVar2)) {
      (__this->fields)._lastName = a_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lastName,a_00);
      (__this->fields)._lastGuild = a;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lastGuild,a);
      (__this->fields)._lastTeam = a_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._lastTeam,a_01);
      UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.CharacterInfoPopup$$ToggleName
// il2cpp: void UI_CharacterInfoPopup__ToggleName (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x182225050

void UI_CharacterInfoPopup__ToggleName(UI_CharacterInfoPopup_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  pUVar1 = (__this->fields)._nameBackground;
  if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar2 == toggle) {
      return;
    }
    pUVar1 = (__this->fields)._nameBackground;
    if ((pUVar1 != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,toggle,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$ToggleHealthbar
// il2cpp: void UI_CharacterInfoPopup__ToggleHealthbar (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x182224fe0

void UI_CharacterInfoPopup__ToggleHealthbar(UI_CharacterInfoPopup_o *__this,bool toggle,MethodInfo *method)

{
  UnityEngine_LowLevelPhysics2D_PhysicsMask_o UVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  UVar1.fields.bitMask = (UnityEngine_LowLevelPhysics2D_PhysicsMask_Fields)(__this->fields)._healthbar;
  if ((UVar1.fields.bitMask != 0) &&
     (pUVar3 = (UnityEngine_GameObject_o *)
               UnityEngine_LowLevelPhysics2D_PhysicsMask__op_Implicit(UVar1,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar2 == toggle) {
      return;
    }
    UVar1.fields.bitMask = (UnityEngine_LowLevelPhysics2D_PhysicsMask_Fields)(__this->fields)._healthbar;
    if ((UVar1.fields.bitMask != 0) &&
       (pUVar3 = (UnityEngine_GameObject_o *)
                 UnityEngine_LowLevelPhysics2D_PhysicsMask__op_Implicit(UVar1,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,toggle,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetHealthbar
// il2cpp: void UI_CharacterInfoPopup__SetHealthbar (UI_CharacterInfoPopup_o* __this, int32_t currentHealth, int32_t maxHealth, UnityEngine_Color_o color, const MethodInfo* method);
// 0x182223700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18222377f: jmp 0x18222378d

void UI_CharacterInfoPopup__SetHealthbar
               (UI_CharacterInfoPopup_o *__this,int32_t currentHealth,int32_t maxHealth,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t local_res10 [2];
  int32_t local_res18 [4];
  UnityEngine_Color_Fields local_28;
  
  local_res10[0] = currentHealth;
  local_res18[0] = maxHealth;
  if (Il2CppMethodInitialized_1843471a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843471a2 = '\x01';
  }
  pUVar1 = (__this->fields)._healthbarFill;
  if (local_res18[0] < 1) {
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1822238a8;
    fVar5 = 0.0;
  }
  else {
    fVar6 = (float)local_res10[0] / (float)local_res18[0];
    fVar5 = 0.0;
    if ((0.0 <= fVar6) && (fVar5 = 1.0, fVar6 <= 1.0)) {
      fVar5 = fVar6;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1822238a8;
  }
  UnityEngine_UI_Image__set_fillAmount(pUVar1,fVar5,(MethodInfo *)0x0);
  pTVar2 = (__this->fields)._healthbarLabel;
  pSVar3 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969b70(pSVar3,"/",str2,(MethodInfo *)0x0);
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,pSVar3,(pTVar2->klass->vtable)._66_set_text.method);
    pUVar1 = (__this->fields)._healthbarFill;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      pUVar4 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_28,pUVar1,
                          (pUVar1->klass->vtable)._22_get_color.method);
      fVar7 = *(float *)&(pUVar4->fields).m_Ptr - (color->fields).r;
      fVar8 = *(float *)((longlong)&(pUVar4->fields).m_Ptr + 4) - (color->fields).g;
      fVar5 = (float)(pUVar4->fields).m_Count - (color->fields).b;
      fVar6 = *(float *)&(pUVar4->fields).field_0xc - (color->fields).a;
      if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6) {
        pUVar1 = (__this->fields)._healthbarFill;
        if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1822238a8;
        local_28.r = (color->fields).r;
        local_28.g = (color->fields).g;
        local_28.b = (color->fields).b;
        local_28.a = (color->fields).a;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (pUVar1,(UnityEngine_Color_o *)&local_28,(pUVar1->klass->vtable)._23_set_color.method);
      }
      return;
    }
  }
label_1822238a8:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$UpdateEffectOverlay
// il2cpp: void UI_CharacterInfoPopup__UpdateEffectOverlay (UI_CharacterInfoPopup_o* __this, System_String_o* guild, System_String_o* nameText, System_String_o* guildPresetId, const MethodInfo* method);
// 0x1822250c0

void UI_CharacterInfoPopup__UpdateEffectOverlay
               (UI_CharacterInfoPopup_o *__this,System_String_o *guild,System_String_o *nameText,
               System_String_o *guildPresetId,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Object_o *x;
  TMPro_TextMeshProUGUI_c *pTVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  Photon_Realtime_Player_o *player;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_FontAsset_o *value_00;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_Color_o *pUVar11;
  float value_01;
  UnityEngine_Color_Fields local_138;
  PatreonEffects_ResolvedNameEffect_Fields local_128;
  PatreonEffects_ResolvedNameEffect_Fields local_d8;
  PatreonEffects_ResolvedNameEffect_Fields local_88;
  
  if (Il2CppMethodInitialized_1843471a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_NameFontCatalog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    Il2CppMethodInitialized_1843471a3 = '\x01';
  }
  local_d8.ColorD.fields.b = 0.0;
  local_d8.ColorD.fields.a = 0.0;
  local_128.ColorD.fields.b = 0.0;
  local_128.ColorD.fields.a = 0.0;
  local_d8.Enabled = false;
  local_d8._1_3_ = 0;
  local_d8.Type = 0;
  local_d8.ColorA.fields.r = 0.0;
  local_d8.ColorA.fields.g = 0.0;
  local_d8.ColorA.fields.b = 0.0;
  local_d8.ColorA.fields.a = 0.0;
  local_d8.ColorB.fields.r = 0.0;
  local_d8.ColorB.fields.g = 0.0;
  local_d8.ColorB.fields.b = 0.0;
  local_d8.ColorB.fields.a = 0.0;
  local_d8.ColorC.fields.r = 0.0;
  local_d8.ColorC.fields.g = 0.0;
  local_d8.ColorC.fields.b = 0.0;
  local_d8.ColorC.fields.a = 0.0;
  local_d8.ColorD.fields.r = 0.0;
  local_d8.ColorD.fields.g = 0.0;
  local_128.Enabled = false;
  local_128._1_3_ = 0;
  local_128.Type = 0;
  local_128.ColorA.fields.r = 0.0;
  local_128.ColorA.fields.g = 0.0;
  local_128.ColorA.fields.b = 0.0;
  local_128.ColorA.fields.a = 0.0;
  local_128.ColorB.fields.r = 0.0;
  local_128.ColorB.fields.g = 0.0;
  local_128.ColorB.fields.b = 0.0;
  local_128.ColorB.fields.a = 0.0;
  local_128.ColorC.fields.r = 0.0;
  local_128.ColorC.fields.g = 0.0;
  local_128.ColorC.fields.b = 0.0;
  local_128.ColorC.fields.a = 0.0;
  local_128.ColorD.fields.r = 0.0;
  local_128.ColorD.fields.g = 0.0;
  player = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)0x0);
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar4 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0), !bVar4)) {
    bVar4 = false;
label_1822251e3:
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    value = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    value_00 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
  }
  else {
    bVar5 = (__this->fields)._applyForceNameColor;
    bVar4 = bVar5 == false;
    if (bVar5 != false) goto label_1822251e3;
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    value = PatreonEffects_NameFontCatalog__FontForPlayer(player,false,(MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_NameFontCatalog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_NameFontCatalog);
    }
    value_00 = PatreonEffects_NameFontCatalog__FontForPlayer(player,true,(MethodInfo *)0x0);
  }
  pTVar1 = (__this->fields)._nameLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar1 = (__this->fields)._nameLabel;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,value,(MethodInfo *)0x0);
    }
  }
  pTVar1 = (__this->fields)._guildLabel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pTVar1 = (__this->fields)._guildLabel;
      if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar1,value_00,(MethodInfo *)0x0);
    }
  }
  local_d8.ColorD.fields.b = 0.0;
  local_d8.ColorD.fields.a = 0.0;
  local_128.ColorD.fields.b = 0.0;
  local_128.ColorD.fields.a = 0.0;
  local_d8.Enabled = false;
  local_d8._1_3_ = 0;
  local_d8.Type = 0;
  local_d8.ColorA.fields.r = 0.0;
  local_d8.ColorA.fields.g = 0.0;
  local_d8.ColorA.fields.b = 0.0;
  local_d8.ColorA.fields.a = 0.0;
  local_d8.ColorB.fields.r = 0.0;
  local_d8.ColorB.fields.g = 0.0;
  local_d8.ColorB.fields.b = 0.0;
  local_d8.ColorB.fields.a = 0.0;
  local_d8.ColorC.fields.r = 0.0;
  local_d8.ColorC.fields.g = 0.0;
  local_d8.ColorC.fields.b = 0.0;
  local_d8.ColorC.fields.a = 0.0;
  local_d8.ColorD.fields.r = 0.0;
  local_d8.ColorD.fields.g = 0.0;
  local_128.Enabled = false;
  local_128._1_3_ = 0;
  local_128.Type = 0;
  local_128.ColorA.fields.r = 0.0;
  local_128.ColorA.fields.g = 0.0;
  local_128.ColorA.fields.b = 0.0;
  local_128.ColorA.fields.a = 0.0;
  local_128.ColorB.fields.r = 0.0;
  local_128.ColorB.fields.g = 0.0;
  local_128.ColorB.fields.b = 0.0;
  local_128.ColorB.fields.a = 0.0;
  local_128.ColorC.fields.r = 0.0;
  local_128.ColorC.fields.g = 0.0;
  local_128.ColorC.fields.b = 0.0;
  local_128.ColorC.fields.a = 0.0;
  local_128.ColorD.fields.r = 0.0;
  local_128.ColorD.fields.g = 0.0;
  if (bVar4) {
    if ((__this->fields)._teamsEnabled == false) {
      bVar4 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                        (player,(PatreonEffects_ResolvedNameEffect_o *)&local_d8,(MethodInfo *)0x0);
    }
    else {
      bVar4 = false;
    }
    bVar5 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
    if (bVar5) goto label_182225393;
    bVar5 = PatreonEffects_NameEffectHelpers__TryGetGuildEffect
                      (player,(PatreonEffects_ResolvedNameEffect_o *)&local_128,(MethodInfo *)0x0);
  }
  else {
    bVar4 = false;
label_182225393:
    bVar5 = false;
  }
  bVar6 = System_String__IsNullOrEmpty(nameText,(MethodInfo *)0x0);
  bVar7 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._nameLabel;
  if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
     (pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar10,!bVar6,(MethodInfo *)0x0);
    bVar8 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                      ((__this->fields)._guildPresetImage,guildPresetId,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_1843471a8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843471a8 = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      pUVar10 = (__this->fields)._guildRow;
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_182225826;
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar10,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    }
    else {
      __this_00 = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      if (bVar8) {
        value_01 = 2.8;
      }
      else {
        value_01 = 4.0;
      }
      if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_182225826;
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,value_01,(MethodInfo *)0x0);
    }
    pTVar1 = (__this->fields)._guildLabel;
    if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar1,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar10,!bVar7 && !bVar8,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._guildLabel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar9) {
          if (bVar8) {
            pTVar1 = (__this->fields)._guildLabel;
            if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
            pUVar11 = (*(pTVar1->klass->vtable)._22_get_color.methodPtr)
                                ((UnityEngine_Color_o *)&local_138,pTVar1,
                                 (pTVar1->klass->vtable)._22_get_color.method);
            local_138.r = (pUVar11->fields).r;
            local_138.g = (pUVar11->fields).g;
            local_138.b = (pUVar11->fields).b;
            local_138.a = (pUVar11->fields).a;
            UI_CharacterInfoPopup__ClearEffect
                      (pTVar1,&(__this->fields)._guildEffect,(UnityEngine_Color_o *)&local_138,
                       (MethodInfo *)0x0);
            pTVar1 = (__this->fields)._guildLabel;
            if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
            pUVar11 = (*(pTVar1->klass->vtable)._22_get_color.methodPtr)
                                ((UnityEngine_Color_o *)&local_138,pTVar1,
                                 (pTVar1->klass->vtable)._22_get_color.method);
            local_138.r = (pUVar11->fields).r;
            local_138.g = (pUVar11->fields).g;
            local_138.b = (pUVar11->fields).b;
            local_138.a = (pUVar11->fields).a;
            Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                      ((TMPro_TMP_Text_o *)pTVar1,&(__this->fields)._guildPresetEffect,
                       (UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
          }
          else {
            bVar8 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(guildPresetId,(MethodInfo *)0x0);
            pTVar1 = (__this->fields)._guildLabel;
            if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
            pTVar2 = pTVar1->klass;
            pMVar3 = (pTVar2->vtable)._22_get_color.method;
            if (bVar8) {
              pUVar11 = (*(pTVar2->vtable)._22_get_color.methodPtr)
                                  ((UnityEngine_Color_o *)&local_138,pTVar1,pMVar3);
              local_138.r = (pUVar11->fields).r;
              local_138.g = (pUVar11->fields).g;
              local_138.b = (pUVar11->fields).b;
              local_138.a = (pUVar11->fields).a;
              UI_CharacterInfoPopup__ClearEffect
                        (pTVar1,&(__this->fields)._guildEffect,(UnityEngine_Color_o *)&local_138,
                         (MethodInfo *)0x0);
              local_138.r = 1.0;
              local_138.g = 1.0;
              local_138.b = 1.0;
              local_138.a = 1.0;
              Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                        ((TMPro_TMP_Text_o *)(__this->fields)._guildLabel,&(__this->fields)._guildPresetEffect
                         ,guildPresetId,guild,(UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
            }
            else {
              pUVar11 = (*(pTVar2->vtable)._22_get_color.methodPtr)
                                  ((UnityEngine_Color_o *)&local_138,pTVar1,pMVar3);
              local_138.r = (pUVar11->fields).r;
              local_138.g = (pUVar11->fields).g;
              local_138.b = (pUVar11->fields).b;
              local_138.a = (pUVar11->fields).a;
              if (bVar7) {
                UI_CharacterInfoPopup__ClearEffect
                          (pTVar1,&(__this->fields)._guildEffect,(UnityEngine_Color_o *)&local_138,
                           (MethodInfo *)0x0);
              }
              else {
                Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                          ((TMPro_TMP_Text_o *)pTVar1,&(__this->fields)._guildPresetEffect,
                           (UnityEngine_Color_o *)&local_138,(MethodInfo *)0x0);
                pTVar1 = (__this->fields)._guildLabel;
                if (bVar5 == false) {
                  if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
                  pUVar11 = (*(pTVar1->klass->vtable)._22_get_color.methodPtr)
                                      ((UnityEngine_Color_o *)&local_138,pTVar1,
                                       (pTVar1->klass->vtable)._22_get_color.method);
                  local_138.r = (pUVar11->fields).r;
                  local_138.g = (pUVar11->fields).g;
                  local_138.b = (pUVar11->fields).b;
                  local_138.a = (pUVar11->fields).a;
                  UI_CharacterInfoPopup__ClearEffect
                            (pTVar1,&(__this->fields)._guildEffect,(UnityEngine_Color_o *)&local_138,
                             (MethodInfo *)0x0);
                }
                else {
                  local_88.Enabled = local_128.Enabled;
                  local_88._1_3_ = local_128._1_3_;
                  local_88.Type = local_128.Type;
                  local_88.ColorA.fields.r = local_128.ColorA.fields.r;
                  local_88.ColorA.fields.g = local_128.ColorA.fields.g;
                  local_88.ColorB.fields.b = local_128.ColorB.fields.b;
                  local_88.ColorB.fields.a = local_128.ColorB.fields.a;
                  local_88.ColorC.fields.r = local_128.ColorC.fields.r;
                  local_88.ColorC.fields.g = local_128.ColorC.fields.g;
                  local_88.ColorA.fields.b = local_128.ColorA.fields.b;
                  local_88.ColorA.fields.a = local_128.ColorA.fields.a;
                  local_88.ColorB.fields.r = local_128.ColorB.fields.r;
                  local_88.ColorB.fields.g = local_128.ColorB.fields.g;
                  local_88.ColorD.fields.b = local_128.ColorD.fields.b;
                  local_88.ColorD.fields.a = local_128.ColorD.fields.a;
                  local_88.ColorC.fields.b = local_128.ColorC.fields.b;
                  local_88.ColorC.fields.a = local_128.ColorC.fields.a;
                  local_88.ColorD.fields.r = local_128.ColorD.fields.r;
                  local_88.ColorD.fields.g = local_128.ColorD.fields.g;
                  UI_CharacterInfoPopup__ApplyEffect
                            (pTVar1,&(__this->fields)._guildEffect,
                             (PatreonEffects_ResolvedNameEffect_o *)&local_88,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
        pTVar1 = (__this->fields)._nameLabel;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          pTVar1 = (__this->fields)._nameLabel;
          if ((bVar6) || (bVar4 == false)) {
            if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_182225826;
            pUVar11 = (*(pTVar1->klass->vtable)._22_get_color.methodPtr)
                                ((UnityEngine_Color_o *)&local_138,pTVar1,
                                 (pTVar1->klass->vtable)._22_get_color.method);
            local_138.r = (pUVar11->fields).r;
            local_138.g = (pUVar11->fields).g;
            local_138.b = (pUVar11->fields).b;
            local_138.a = (pUVar11->fields).a;
            UI_CharacterInfoPopup__ClearEffect
                      (pTVar1,&(__this->fields)._nameEffect,(UnityEngine_Color_o *)&local_138,
                       (MethodInfo *)0x0);
          }
          else {
            local_88.Enabled = local_d8.Enabled;
            local_88._1_3_ = local_d8._1_3_;
            local_88.Type = local_d8.Type;
            local_88.ColorA.fields.r = local_d8.ColorA.fields.r;
            local_88.ColorA.fields.g = local_d8.ColorA.fields.g;
            local_88.ColorB.fields.b = local_d8.ColorB.fields.b;
            local_88.ColorB.fields.a = local_d8.ColorB.fields.a;
            local_88.ColorC.fields.r = local_d8.ColorC.fields.r;
            local_88.ColorC.fields.g = local_d8.ColorC.fields.g;
            local_88.ColorA.fields.b = local_d8.ColorA.fields.b;
            local_88.ColorA.fields.a = local_d8.ColorA.fields.a;
            local_88.ColorB.fields.r = local_d8.ColorB.fields.r;
            local_88.ColorB.fields.g = local_d8.ColorB.fields.g;
            local_88.ColorD.fields.b = local_d8.ColorD.fields.b;
            local_88.ColorD.fields.a = local_d8.ColorD.fields.a;
            local_88.ColorC.fields.b = local_d8.ColorC.fields.b;
            local_88.ColorC.fields.a = local_d8.ColorC.fields.a;
            local_88.ColorD.fields.r = local_d8.ColorD.fields.r;
            local_88.ColorD.fields.g = local_d8.ColorD.fields.g;
            UI_CharacterInfoPopup__ApplyEffect
                      (pTVar1,&(__this->fields)._nameEffect,(PatreonEffects_ResolvedNameEffect_o *)&local_88,
                       (MethodInfo *)0x0);
          }
        }
        return;
      }
    }
  }
label_182225826:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$ClearEffect
// il2cpp: void UI_CharacterInfoPopup__ClearEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, UnityEngine_Color_o fallbackColor, const MethodInfo* method);
// 0x1822229b0

void UI_CharacterInfoPopup__ClearEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               UnityEngine_Color_o *fallbackColor,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool bVar2;
  UnityEngine_Color_o local_38;
  
  if (Il2CppMethodInitialized_1843471a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471a4 = '\x01';
  }
  pPVar1 = *controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (*controller == (PatreonEffects_NameEffectController_o *)0x0) goto label_182222aa2;
    PatreonEffects_NameEffectController__Clear(*controller,(MethodInfo *)0x0);
    pPVar1 = *controller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *controller = (PatreonEffects_NameEffectController_o *)0x0;
    Il2CppCodeGenWriteBarrier(controller,(void *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (tmp == (TMPro_TextMeshProUGUI_o *)0x0) {
label_182222aa2:
      ThrowNullReferenceException();
    }
    local_38.fields.r = (fallbackColor->fields).r;
    local_38.fields.g = (fallbackColor->fields).g;
    local_38.fields.b = (fallbackColor->fields).b;
    local_38.fields.a = (fallbackColor->fields).a;
    (*(tmp->klass->vtable)._23_set_color.methodPtr)(tmp,&local_38,(tmp->klass->vtable)._23_set_color.method);
  }
  return;
}


// UI.CharacterInfoPopup$$ApplyEffect
// il2cpp: void UI_CharacterInfoPopup__ApplyEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x182222130

void UI_CharacterInfoPopup__ApplyEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               PatreonEffects_ResolvedNameEffect_o *effect,MethodInfo *method)

{
  undefined4 type;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar5;
  PatreonEffects_NameEffectSettings_o *settings;
  UnityEngine_Color_Fields local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_1843471a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471a5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pPVar5 = *controller;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((tmp == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tmp,(MethodInfo *)0x0),
       __this == (UnityEngine_GameObject_o *)0x0)) goto label_182222335;
    pPVar5 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_NameEffectController);
    *controller = pPVar5;
    Il2CppCodeGenWriteBarrier(controller,pPVar5);
  }
  if (*controller != (PatreonEffects_NameEffectController_o *)0x0) {
    PatreonEffects_NameEffectController__AutoConfigure(*controller,(MethodInfo *)0x0);
    local_68._0_4_ = (effect->fields).ColorA.fields.b;
    local_68._4_4_ = (effect->fields).ColorA.fields.a;
    uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
    uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
    type = (effect->fields).Type;
    local_58._0_4_ = (effect->fields).ColorB.fields.b;
    local_58._4_4_ = (effect->fields).ColorB.fields.a;
    uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
    uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
    local_48._0_4_ = (effect->fields).ColorC.fields.b;
    local_48._4_4_ = (effect->fields).ColorC.fields.a;
    uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
    uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
    local_38._0_4_ = (effect->fields).ColorD.fields.b;
    local_38._4_4_ = (effect->fields).ColorD.fields.a;
    settings = PatreonEffects_NameEffectPresets__GetPreset(type,(MethodInfo *)0x0);
    local_78._0_1_ = (effect->fields).Enabled;
    local_78._1_3_ = *(undefined3 *)&(effect->fields).field_0x1;
    local_78._4_4_ = (effect->fields).Type;
    uStack_70._0_4_ = (effect->fields).ColorA.fields.r;
    uStack_70._4_4_ = (effect->fields).ColorA.fields.g;
    uVar1._0_4_ = (effect->fields).ColorA.fields.b;
    uVar1._4_4_ = (effect->fields).ColorA.fields.a;
    uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
    uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
    local_58._0_4_ = (effect->fields).ColorB.fields.b;
    local_58._4_4_ = (effect->fields).ColorB.fields.a;
    uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
    uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
    local_48._0_4_ = (effect->fields).ColorC.fields.b;
    local_48._4_4_ = (effect->fields).ColorC.fields.a;
    uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
    uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
    local_38._0_4_ = (effect->fields).ColorD.fields.b;
    local_38._4_4_ = (effect->fields).ColorD.fields.a;
    local_68 = uVar1;
    if (settings != (PatreonEffects_NameEffectSettings_o *)0x0) {
      local_68._0_4_ = (effect->fields).ColorA.fields.b;
      local_68._4_4_ = (effect->fields).ColorA.fields.a;
      uStack_60._0_4_ = (effect->fields).ColorB.fields.r;
      uStack_60._4_4_ = (effect->fields).ColorB.fields.g;
      (settings->fields).gradientA.fields.r = (float)(undefined4)uStack_70;
      (settings->fields).gradientA.fields.g = (float)uStack_70._4_4_;
      (settings->fields).gradientA.fields.b = (float)(undefined4)uVar1;
      (settings->fields).gradientA.fields.a = (float)uVar1._4_4_;
      fVar2 = (effect->fields).ColorB.fields.b;
      fVar3 = (effect->fields).ColorB.fields.a;
      local_58._0_4_ = (effect->fields).ColorB.fields.b;
      local_58._4_4_ = (effect->fields).ColorB.fields.a;
      uStack_50._0_4_ = (effect->fields).ColorC.fields.r;
      uStack_50._4_4_ = (effect->fields).ColorC.fields.g;
      (settings->fields).gradientB.fields.r = (float)(undefined4)uStack_60;
      (settings->fields).gradientB.fields.g = (float)uStack_60._4_4_;
      (settings->fields).gradientB.fields.b = fVar2;
      (settings->fields).gradientB.fields.a = fVar3;
      local_38._0_4_ = (effect->fields).ColorD.fields.b;
      local_38._4_4_ = (effect->fields).ColorD.fields.a;
      fVar2 = (effect->fields).ColorC.fields.b;
      fVar3 = (effect->fields).ColorC.fields.a;
      (settings->fields).gradientC.fields.r = (float)(undefined4)uStack_50;
      (settings->fields).gradientC.fields.g = (float)uStack_50._4_4_;
      (settings->fields).gradientC.fields.b = fVar2;
      (settings->fields).gradientC.fields.a = fVar3;
      local_48._0_4_ = (effect->fields).ColorC.fields.b;
      local_48._4_4_ = (effect->fields).ColorC.fields.a;
      uStack_40._0_4_ = (effect->fields).ColorD.fields.r;
      uStack_40._4_4_ = (effect->fields).ColorD.fields.g;
      (settings->fields).gradientD.fields.r = (float)(undefined4)uStack_40;
      (settings->fields).gradientD.fields.g = (float)uStack_40._4_4_;
      (settings->fields).gradientD.fields.b = (float)(undefined4)local_38;
      (settings->fields).gradientD.fields.a = (float)local_38._4_4_;
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        local_88.r = 1.0;
        local_88.g = 1.0;
        local_88.b = 1.0;
        local_88.a = 1.0;
        (*(tmp->klass->vtable)._23_set_color.methodPtr)
                  (tmp,(UnityEngine_Color_o *)&local_88,(tmp->klass->vtable)._23_set_color.method);
        if (*controller != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*controller,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_182222335:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetupGuildBadges
// il2cpp: void UI_CharacterInfoPopup__SetupGuildBadges (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x182224590

void UI_CharacterInfoPopup__SetupGuildBadges(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_GameObject_o *__this_00;
  Il2CppType *handle;
  bool bVar2;
  int32_t index;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Type_array *pSVar5;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_UI_ContentSizeFitter_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar9;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar10;
  UnityEngine_UI_Image_o *pUVar11;
  
  if (Il2CppMethodInitialized_1843471a6 == '\0') {
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
    Il2CppMethodInitialized_1843471a6 = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_182224bf7;
  pUVar3 = UnityEngine_Transform__Find(pUVar3,"Name",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pTVar1 = (__this->fields)._guildLabel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pTVar1 = (__this->fields)._guildLabel;
      if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
         (pUVar4 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_Transform_o *)0x0)) {
        index = UnityEngine_Transform__GetSiblingIndex(pUVar4,(MethodInfo *)0x0);
        pSVar5 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,2);
        handle = TypeRef_UnityEngine_RectTransform;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (pSVar5 != (System_Type_array *)0x0) {
          if ((pSVar6 != (System_Type_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)pSVar5->max_length != 0) {
            pSVar5->m_Items[0] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar6);
            pSVar6 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,
                                (MethodInfo *)0x0);
            if ((pSVar6 != (System_Type_o *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar6,(((pSVar5->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
            if (1 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[1] = pSVar6;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar6);
              pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_2f1abe0(pUVar8,"GuildBadgeRow",pSVar5,(MethodInfo *)0x0);
              (__this->fields)._guildRow = pUVar8;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._guildRow,pUVar8);
              pUVar8 = (__this->fields)._guildRow;
              if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,pUVar3,false,(MethodInfo *)0x0);
                pUVar8 = (__this->fields)._guildRow;
                if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar3 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
                   pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
                  pUVar8 = (__this->fields)._guildRow;
                  if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                     (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                            (pUVar8,(MethodInfo_6F4D60 *)
                                                    MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup
                                            ), __this_01 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0)) {
                    UnityEngine_UI_LayoutGroup__set_childAlignment
                              ((UnityEngine_UI_LayoutGroup_o *)__this_01,4,(MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,
                               (MethodInfo *)0x0);
                    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,4.0,
                               (MethodInfo *)0x0);
                    pUVar8 = (__this->fields)._guildRow;
                    if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                       (__this_02 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar8,(MethodInfo_6F4D60 *)
                                                      MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter
                                              ), __this_02 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
                      UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_02,2,(MethodInfo *)0x0);
                      UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_02,2,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields)._guildRow;
                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar8,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                                           );
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
                               pIVar7 == (Il2CppObject *)0x0)) {
                              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                            }
                            if ((int)pSVar5->max_length != 0) {
                              pSVar5->m_Items[0] = pSVar6;
                              Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pSVar6);
                              pSVar6 = System_Type__GetTypeFromHandle
                                                 ((System_RuntimeTypeHandle_o)
                                                  TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0);
                              if ((pSVar6 != (System_Type_o *)0x0) &&
                                 (pIVar7 = il2cpp_vm_Object_IsInst
                                                     ((Il2CppObject *)pSVar6,
                                                      (((pSVar5->obj).klass)->_1).element_class),
                                 pIVar7 == (Il2CppObject *)0x0)) {
                                pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                              }
                              if (1 < (uint)pSVar5->max_length) {
                                pSVar5->m_Items[1] = pSVar6;
                                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar6);
                                pUVar8 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
                                UnityEngine_GameObject___ctor_2f1abe0
                                          (pUVar8,"GuildBadges",pSVar5,(MethodInfo *)0x0);
                                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar3 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
                                  __this_00 = (__this->fields)._guildRow;
                                  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
                                     (pUVar4 = UnityEngine_GameObject__get_transform
                                                         (__this_00,(MethodInfo *)0x0),
                                     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                                    UnityEngine_Transform__SetParent_2f5a7e0
                                              (pUVar3,pUVar4,false,(MethodInfo *)0x0);
                                    pGVar10 = UnityEngine_GameObject__AddComponent_object_
                                                        (pUVar8,(MethodInfo_6F4D60 *)
                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_AottgBadgeIconRowRuntime
                                                       );
                                    (__this->fields)._guildBadges = pGVar10;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields)._guildBadges,pGVar10);
                                    pTVar1 = (__this->fields)._guildLabel;
                                    if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                                       (pGVar10 = (__this->fields)._guildBadges,
                                       pGVar10 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0)) {
                                      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                                                (pGVar10,(pTVar1->fields).m_fontSize,2.0,
                                                 (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                                                 (System_String_o *)0x0,true,(MethodInfo *)0x0);
                                      pUVar8 = (__this->fields)._guildRow;
                                      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar3 = UnityEngine_GameObject__get_transform
                                                           (pUVar8,(MethodInfo *)0x0);
                                        pTVar1 = (__this->fields)._guildLabel;
                                        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                          pUVar11 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                                                              (pUVar3,&(__this->fields)._guildPresetImage,
                                                               "GuildPresetImage",
                                                               (pTVar1->fields).m_fontSize + 10.0,
                                                               (MethodInfo *)0x0);
                                          (__this->fields)._guildPresetImage = pUVar11;
                                          Il2CppCodeGenWriteBarrier
                                                    (&(__this->fields)._guildPresetImage,pUVar11);
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
                                                                 ((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0
                                                                 );
                                              pUVar8 = (__this->fields)._guildRow;
                                              if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                                                 (pUVar4 = UnityEngine_GameObject__get_transform
                                                                     (pUVar8,(MethodInfo *)0x0),
                                                 pUVar3 != (UnityEngine_Transform_o *)0x0)) {
                                                UnityEngine_Transform__SetParent_2f5a7e0
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
                                goto label_182224bf7;
                              }
                            }
                            goto label_182224c3d;
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto label_182224bf7;
            }
          }
label_182224c3d:
          ThrowIndexOutOfRangeException();
        }
      }
label_182224bf7:
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.CharacterInfoPopup$$RefreshGuildBadges
// il2cpp: void UI_CharacterInfoPopup__RefreshGuildBadges (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x1822233d0

void UI_CharacterInfoPopup__RefreshGuildBadges
               (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Characters_BaseCharacter_o *pCVar2;
  Settings_ProfileSettings_o *pSVar3;
  bool bVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_string__o *roles;
  System_String_o *json;
  Il2CppObject *local_res8;
  
  if (Il2CppMethodInitialized_1843471a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471a7 = '\x01';
  }
  pGVar1 = (__this->fields)._guildBadges;
  local_res8 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  json = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (owner == (Photon_Realtime_Player_o *)0x0) {
label_182223529:
    if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0
       ) {
      pCVar2 = (__this->fields).Character;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_1822235fc;
        bVar4 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0);
        if (bVar4) {
          pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
          if (pSVar3 == (Settings_ProfileSettings_o *)0x0) goto label_1822235fc;
          pIVar5 = (Il2CppClass *)(pSVar3->fields).CharacterInfoJson;
          goto label_1822235a7;
        }
      }
    }
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo ==
        (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_182223529;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1822235fc;
    bVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this_00,(owner->fields).actorNumber,&local_res8,
                       (MethodInfo_141F4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if (((!bVar4) || (local_res8 == (Il2CppObject *)0x0)) || (local_res8[3].klass == (Il2CppClass *)0x0))
    goto label_182223529;
    if ((local_res8 == (Il2CppObject *)0x0) || (local_res8[3].klass == (Il2CppClass *)0x0))
    goto label_1822235fc;
    pIVar5 = ((local_res8[3].klass)->_1).klass;
label_1822235a7:
    if (pIVar5 == (Il2CppClass *)0x0) goto label_1822235fc;
    json = (pIVar5->_1).byval_arg.data;
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
label_1822235fc:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$SetGuildRowSpacing
// il2cpp: void UI_CharacterInfoPopup__SetGuildRowSpacing (UI_CharacterInfoPopup_o* __this, bool imageGuild, const MethodInfo* method);
// 0x182223610

void UI_CharacterInfoPopup__SetGuildRowSpacing
               (UI_CharacterInfoPopup_o *__this,bool imageGuild,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  float value;
  
  if (Il2CppMethodInitialized_1843471a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471a8 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1822236f6;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  }
  else {
    __this_01 = (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (imageGuild) {
      value = 2.8;
    }
    else {
      value = 4.0;
    }
    if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
label_1822236f6:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
  }
  return;
}


// UI.CharacterInfoPopup$$GuildPresetId
// il2cpp: System_String_o* UI_CharacterInfoPopup__GuildPresetId (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x182222ab0
// eh: try 0x182222c9c..0x182222db1 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182222d67: mov rax, qword ptr [rip + 0x21320e2]
// asm:   0x182222d6e: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x182222d75: mov rax, qword ptr [rcx]
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

System_String_o *
UI_CharacterInfoPopup__GuildPresetId
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Il2CppClass *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  Settings_ProfileSettings_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_Xml_Schema_XmlSchema_c *pSVar5;
  bool bVar6;
  Il2CppType *pIVar7;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppObject *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843471a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"guildPresetId");
    Il2CppMethodInitialized_1843471a9 = '\x01';
  }
  if (Il2CppMethodInitialized_1843471aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471aa = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  if (owner != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo !=
        (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_182222d9f;
      bVar6 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                        (__this_00,(owner->fields).actorNumber,local_res10,
                         (MethodInfo_141F4E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
      if (((bVar6) && (local_res10[0] != (Il2CppObject *)0x0)) &&
         (local_res10[0][3].klass != (Il2CppClass *)0x0)) {
        if (((local_res10[0] == (Il2CppObject *)0x0) || (local_res10[0][3].klass == (Il2CppClass *)0x0)) ||
           (pIVar1 = ((local_res10[0][3].klass)->_1).klass, pIVar1 == (Il2CppClass *)0x0)) goto label_182222d9f;
        pIVar7 = &(pIVar1->_1).byval_arg;
        goto label_182222c87;
      }
    }
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings != (Settings_ProfileSettings_o *)0x0)
  {
    pCVar2 = (__this->fields).Character;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pCVar2 = (__this->fields).Character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
label_182222d9f:
        ThrowNullReferenceException();
      }
      bVar6 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0);
      if (bVar6) {
        pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
        if ((pSVar3 == (Settings_ProfileSettings_o *)0x0) ||
           (pSVar4 = (pSVar3->fields).CharacterInfoJson, pSVar4 == (Settings_StringSetting_o *)0x0))
        goto label_182222d9f;
        pIVar7 = (Il2CppType *)&(pSVar4->fields)._value;
        goto label_182222c87;
      }
    }
  }
  pIVar7 = *(Il2CppType **)(g_data_184354e50 + 0xb8);
label_182222c87:
  pSVar9 = pIVar7->data;
  bVar6 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0);
  if (bVar6) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  a = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"guildPresetId");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar8 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"guildPresetId");
      if (pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar5 = pSVar8->klass;
        pSVar9 = (System_String_o *)
                 (*(pSVar5->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar8,(UnityEngine_GameObject_o *)
                                   (pSVar5->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar5);
        return pSVar9;
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.CharacterInfoPopup$$CharacterInfoJson
// il2cpp: System_String_o* UI_CharacterInfoPopup__CharacterInfoJson (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x182222440

System_String_o *
UI_CharacterInfoPopup__CharacterInfoJson
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843471aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843471aa = '\x01';
  }
  local_res10[0] = (Il2CppObject *)0x0;
  if (owner == (Photon_Realtime_Player_o *)0x0) {
label_182222560:
    if (TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings == (Settings_ProfileSettings_o *)0x0
       ) {
label_1822225d0:
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pCVar1 = (__this->fields).Character;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_1822225d0;
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_1822225ec;
    bVar2 = Characters_BaseCharacter__IsMainCharacter(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) goto label_1822225d0;
    pIVar3 = (Il2CppClass *)TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  }
  else {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if (TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo ==
        (System_Collections_Generic_Dictionary_int__PlayerInfo__o *)0x0) goto label_182222560;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_1822225ec;
    bVar2 = System_Collections_Generic_Dictionary_int__object___TryGetValue
                      (__this_00,(owner->fields).actorNumber,local_res10,
                       (MethodInfo_141F4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_TryGetValue);
    if (((!bVar2) || (local_res10[0] == (Il2CppObject *)0x0)) ||
       (local_res10[0][3].klass == (Il2CppClass *)0x0)) goto label_182222560;
    if (local_res10[0] == (Il2CppObject *)0x0) goto label_1822225ec;
    pIVar3 = local_res10[0][3].klass;
  }
  if ((pIVar3 != (Il2CppClass *)0x0) && (pIVar3 = (pIVar3->_1).klass, pIVar3 != (Il2CppClass *)0x0)) {
    return (pIVar3->_1).byval_arg.data;
  }
label_1822225ec:
  ThrowNullReferenceException();
}


// UI.CharacterInfoPopup$$OwnerPlayer
// il2cpp: Photon_Realtime_Player_o* UI_CharacterInfoPopup__OwnerPlayer (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x1822232e0

Photon_Realtime_Player_o *
UI_CharacterInfoPopup__OwnerPlayer(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  
  if (Il2CppMethodInitialized_1843471ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843471ab = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_1822233bf:
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).AI == false) {
      pUVar2 = (pCVar1->fields).Cache;
      if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) {
        pPVar4 = (Photon_Pun_PhotonView_o *)0x0;
      }
      else {
        pPVar4 = (pUVar2->fields).PhotonView;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pPVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__this->fields).Character;
        if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
            (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pPVar4 = (pUVar2->fields).PhotonView, pPVar4 != (Photon_Pun_PhotonView_o *)0x0)) {
          return (pPVar4->fields)._Owner_k__BackingField;
        }
        goto label_1822233bf;
      }
    }
  }
  return (Photon_Realtime_Player_o *)0x0;
}


// UI.CharacterInfoPopup$$.ctor
// il2cpp: void UI_CharacterInfoPopup___ctor (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x182225830

void UI_CharacterInfoPopup___ctor(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  System_String_o *value;
  
  (__this->fields)._settingsNameColor.fields.r = 255.0;
  (__this->fields)._settingsBackgroundColor.fields.g = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.b = 0.0;
  (__this->fields)._settingsNameColor.fields.g = 255.0;
  (__this->fields)._settingsNameColor.fields.b = 255.0;
  *(undefined8 *)&(__this->fields)._settingsNameColor.fields.a = 0x3f800000;
  (__this->fields)._settingsBackgroundColor.fields.a = 100.0;
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__this->fields)._name = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._name,value);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


