// Type: UI.CharacterInfoPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterInfoPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/CharacterInfoPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterInfoPopup$$get_AnimationTime
// il2cpp: float UI_CharacterInfoPopup__get_AnimationTime (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4092fc0

float UI_CharacterInfoPopup__get_AnimationTime(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  return 0.25;
}


// UI.CharacterInfoPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_CharacterInfoPopup__get_PopupAnimationType (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4092fd0

int32_t UI_CharacterInfoPopup__get_PopupAnimationType
                  (UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.CharacterInfoPopup$$Setup
// il2cpp: void UI_CharacterInfoPopup__Setup (UI_CharacterInfoPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4092fe0

void UI_CharacterInfoPopup__Setup
               (UI_CharacterInfoPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o **ppTVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Action_o *value;
  MethodInfo *method_00;
  
  if (DAT_05704598 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_SettingsManager_OnSettingsChanged);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"Name/GuildLabel");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Fill");
    il2cpp_init_method_metadata(&"Name/NameLabel");
    il2cpp_init_method_metadata(&"Healthbar");
    DAT_05704598 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__Find(pUVar2,"Name",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = (UnityEngine_UI_Image_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar2,MethodInfo_Image_GetComponent_Image);
      (__this->fields)._nameBackground = pUVar3;
      il2cpp_runtime_glue(&(__this->fields)._nameBackground);
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(pUVar2,"Name/GuildLabel",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pTVar4 = (TMPro_TextMeshProUGUI_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
          (__this->fields)._guildLabel = pTVar4;
          il2cpp_runtime_glue(&(__this->fields)._guildLabel);
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = UnityEngine_Transform__Find(pUVar2,"Name/NameLabel",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pTVar4 = (TMPro_TextMeshProUGUI_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              ppTVar1 = &(__this->fields)._nameLabel;
              (__this->fields)._nameLabel = pTVar4;
              il2cpp_runtime_glue(ppTVar1);
              pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar2 = UnityEngine_Transform__Find(pUVar2,"Healthbar",(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                  (__this->fields)._healthbar = pUVar5;
                  il2cpp_runtime_glue(&(__this->fields)._healthbar);
                  pUVar5 = (__this->fields)._healthbar;
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                      pUVar2 = UnityEngine_Transform__Find(pUVar2,"Fill",(MethodInfo *)0x0);
                      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                        pUVar3 = (UnityEngine_UI_Image_o *)
                                 UnityEngine_Component__GetComponent<object>
                                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_Image_GetComponent_Image);
                        (__this->fields)._healthbarFill = pUVar3;
                        il2cpp_runtime_glue(&(__this->fields)._healthbarFill);
                        pUVar5 = (__this->fields)._healthbar;
                        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar2 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
                          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                            pUVar2 = UnityEngine_Transform__Find
                                               (pUVar2,"Label",(MethodInfo *)0x0);
                            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                              pTVar4 = (TMPro_TextMeshProUGUI_o *)
                                       UnityEngine_Component__GetComponent<object>
                                                 ((UnityEngine_Component_o *)pUVar2,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
                              (__this->fields)._healthbarLabel = pTVar4;
                              il2cpp_runtime_glue(&(__this->fields)._healthbarLabel,pTVar4);
                              pTVar4 = (__this->fields)._guildLabel;
                              if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                TMPro_TMP_Text__set_richText
                                          ((TMPro_TMP_Text_o *)pTVar4,1,(MethodInfo *)0x0);
                                pTVar4 = *ppTVar1;
                                if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                  method_00 = (MethodInfo *)0x1;
                                  TMPro_TMP_Text__set_richText
                                            ((TMPro_TMP_Text_o *)pTVar4,1,(MethodInfo *)0x0);
                                  UI_CharacterInfoPopup__SetupGuildBadges(__this,method_00);
                                  value = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
                                  System_Action___ctor();
                                  Settings_SettingsManager__add_OnSettingsChanged
                                            (value,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$OnDestroy
// il2cpp: void UI_CharacterInfoPopup__OnDestroy (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4093970

void UI_CharacterInfoPopup__OnDestroy(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool_conflict bVar2;
  System_Action_o *value;
  System_Action_Hashtable__o *value_00;
  
  if (DAT_05704599 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Hashtable);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void_Character_OnPlayerPropertiesChanged);
    il2cpp_init_method_metadata(&MethodInfo_Void_SettingsManager_OnSettingsChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704599 = '\x01';
  }
  value = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
  System_Action___ctor();
  Settings_SettingsManager__remove_OnSettingsChanged(value,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).Character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pCVar1->fields).CustomDamage == '\0') {
      value_00 = (System_Action_Hashtable__o *)il2cpp_runtime_glue(TypeInfo_Action_Hashtable);
      System_Action<object>___ctor();
      Characters_BaseCharacter__remove_OnPlayerPropertiesChanged(pCVar1,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.CharacterInfoPopup$$Character_OnPlayerPropertiesChanged
// il2cpp: void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged (UI_CharacterInfoPopup_o* __this, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x4093a80

void UI_CharacterInfoPopup__Character_OnPlayerPropertiesChanged
               (UI_CharacterInfoPopup_o *__this,ExitGames_Client_Photon_Hashtable_o *changedProps,
               MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  Photon_Realtime_Player_o *pPVar7;
  
  if (DAT_0570459a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_0570459a = '\x01';
    iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PlayerProperty + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (changedProps != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                       *(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar5 = ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,*(Il2CppObject **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x40),
                          (MethodInfo *)0x0);
      if ((pIVar5 != (Il2CppObject *)0x0) && (pIVar5->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar5);
      }
      pCVar2 = (__this->fields).Character;
      if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_04093df7;
      *(Il2CppObject **)&(pCVar2->fields).AI = pIVar5;
      il2cpp_runtime_glue(&(pCVar2->fields).AI,pIVar5);
    }
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                       (Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,(Il2CppObject *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                          (MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar6->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar6);
        }
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_04093df7;
        lVar3 = *(long *)&(pCVar2->fields).Dead;
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) {
          pPVar7 = (Photon_Realtime_Player_o *)0x0;
          iVar1 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
        }
        else {
          pPVar7 = *(Photon_Realtime_Player_o **)(lVar3 + 0x80);
          iVar1 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                           (pPVar7,pSVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
        Characters_BaseCharacter__set_Name(pCVar2,pSVar6,(MethodInfo *)0x0);
      }
    }
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = *(MethodInfo **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8);
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)changedProps,
                       (Il2CppObject *)method_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = *(MethodInfo **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8);
      pSVar6 = (System_String_o *)
               ExitGames_Client_Photon_Hashtable__get_Item
                         (changedProps,(Il2CppObject *)method_00,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) {
        if ((Il2CppClass *)pSVar6->klass != DAT_057110b0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar6);
        }
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_04093df7;
        lVar3 = *(long *)&(pCVar2->fields).Dead;
        if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) {
          pPVar7 = (Photon_Realtime_Player_o *)0x0;
          iVar1 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
        }
        else {
          pPVar7 = *(Photon_Realtime_Player_o **)(lVar3 + 0x80);
          iVar1 = *(int *)(TypeInfo_RoleSpriteHelpers + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        pSVar6 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                           (pPVar7,pSVar6,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)MiscExtensions__StripIllegalRichText(pSVar6,(MethodInfo *)0x0);
        *(MethodInfo **)&(pCVar2->fields).HasExplicitNameTag = method_00;
        il2cpp_runtime_glue(&(pCVar2->fields).HasExplicitNameTag);
      }
    }
    UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,method_00);
    return;
  }
LAB_04093df7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$SettingsManager_OnSettingsChanged
// il2cpp: void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4093e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged
               (UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  int32_t length;
  long lVar22;
  Characters_BaseCharacter_o *pCVar23;
  Utility_Color255_o *pUVar24;
  UnityEngine_UI_Image_o *pUVar25;
  TMPro_TextMeshProUGUI_o *pTVar26;
  System_String_o *pSVar27;
  undefined8 uVar28;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar29;
  UnityEngine_Object_o *x;
  undefined4 uVar30;
  bool_conflict bVar31;
  uint uVar32;
  long lVar33;
  System_String_o *pSVar34;
  System_String_o *pSVar35;
  System_String_array *values;
  Photon_Realtime_Player_o *owner;
  UnityEngine_GameObject_o *pUVar36;
  int count;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar37;
  UnityEngine_Color32_o value;
  UnityEngine_Color32_o value_00;
  MethodInfo *in_R8;
  byte bVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  UnityEngine_Color_Fields UVar43;
  UnityEngine_Color_o UVar44;
  
  if (DAT_0570459b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_TeamInfo);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    il2cpp_init_method_metadata(&"<color=");
    DAT_0570459b = '\x01';
  }
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0xf8), lVar22 == 0)) goto LAB_040947f1;
  iVar20 = *(int *)(lVar22 + 0x14);
  if (iVar20 == 0) {
    bVar38 = 1;
  }
  else if (iVar20 == 2) {
    pCVar23 = (__this->fields).Character;
    if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
    bVar31 = Characters_BaseCharacter__IsMainCharacter(pCVar23,(MethodInfo *)0x0);
    bVar38 = (byte)bVar31 ^ 1;
  }
  else if (iVar20 == 1) {
    pCVar23 = (__this->fields).Character;
    if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
    bVar31 = Characters_BaseCharacter__IsMainCharacter(pCVar23,(MethodInfo *)0x0);
    bVar38 = (byte)bVar31;
  }
  else {
    bVar38 = 0;
  }
  if (__this == (UI_CharacterInfoPopup_o *)0x0) goto LAB_040947f1;
  *(byte *)((long)&(__this->fields)._forceNameColorEnabled + 2) = bVar38;
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar22 == 0) || (*(long *)(lVar22 + 0x100) == 0)) goto LAB_040947f1;
  (__this->fields)._settingsStyleType = *(int32_t *)(*(long *)(lVar22 + 0x100) + 0x14);
  if ((*(long *)(lVar22 + 0x110) == 0) ||
     (pUVar24 = *(Utility_Color255_o **)(*(long *)(lVar22 + 0x110) + 0x18),
     pUVar24 == (Utility_Color255_o *)0x0)) goto LAB_040947f1;
  UVar43 = (UnityEngine_Color_Fields)Utility_Color255__ToColor(pUVar24,(MethodInfo *)0x0);
  (__this->fields)._settingsBackgroundColor.fields = UVar43;
  lVar33 = TypeInfo_SettingsManager;
  lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (((lVar22 == 0) || (lVar22 = *(long *)(lVar22 + 0x108), lVar22 == 0)) ||
     (*(long *)(lVar22 + 0x10) == 0)) goto LAB_040947f1;
  cVar19 = *(char *)(*(long *)(lVar22 + 0x10) + 0x11);
  *(char *)&(__this->fields)._forceNameColorEnabled = cVar19;
  if (cVar19 == '\0') {
    *(undefined1 *)((long)&(__this->fields)._forceNameColorEnabled + 1) = 0;
    fVar40 = (float)DAT_00ccd980;
    fVar41 = DAT_00ccd980._4_4_;
    uVar42 = DAT_00ccd980;
  }
  else {
    *(undefined1 *)((long)&(__this->fields)._forceNameColorEnabled + 1) =
         *(undefined1 *)((long)&(__this->fields)._forceNameColorEnabled + 2);
    if ((*(long *)(lVar22 + 0x18) == 0) ||
       (pUVar24 = *(Utility_Color255_o **)(*(long *)(lVar22 + 0x18) + 0x18),
       pUVar24 == (Utility_Color255_o *)0x0)) goto LAB_040947f1;
    UVar44 = Utility_Color255__ToColor(pUVar24,(MethodInfo *)0x0);
    uVar42 = UVar44.fields._8_8_;
    fVar40 = UVar44.fields.r;
    fVar41 = UVar44.fields.g;
    lVar33 = TypeInfo_SettingsManager;
  }
  (__this->fields)._settingsNameColor.fields.r = fVar40;
  (__this->fields)._settingsNameColor.fields.g = fVar41;
  (__this->fields)._settingsNameColor.fields.b = (float)uVar42;
  (__this->fields)._settingsNameColor.fields.a = (float)((ulong)uVar42 >> 0x20);
  lVar22 = *(long *)(lVar33 + 0xb8);
  lVar33 = *(long *)(lVar22 + 0x50);
  if (((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x58), lVar33 == 0)) ||
     (lVar33 = *(long *)(lVar33 + 0x20), lVar33 == 0)) goto LAB_040947f1;
  *(bool *)((long)&(__this->fields)._forceNameColorEnabled + 3) = *(int *)(lVar33 + 0x14) == 2;
  lVar22 = *(long *)(lVar22 + 0x28);
  if ((lVar22 == 0) || (*(long *)(lVar22 + 0x118) == 0)) goto LAB_040947f1;
  (__this->fields)._teamsEnabled = *(bool_conflict *)(*(long *)(lVar22 + 0x118) + 0x14);
  if (*(long *)(lVar22 + 0x120) == 0) goto LAB_040947f1;
  *(undefined4 *)&(__this->fields).field_0x144 = *(undefined4 *)(*(long *)(lVar22 + 0x120) + 0x14);
  pCVar23 = (__this->fields).Character;
  if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
  uVar30 = *(undefined4 *)&(pCVar23->fields).field_0x2c;
  pbVar1 = &(__this->fields)._applyForceNameColor;
  (__this->fields)._applyForceNameColor = (bool_conflict)(pCVar23->fields)._disableKinematicTimeLeft
  ;
  (__this->fields)._settingsApplyToMe = uVar30;
  il2cpp_runtime_glue(pbVar1);
  if (*(char *)((long)&(__this->fields)._forceNameColorEnabled + 1) == '\0') {
    pUVar25 = (__this->fields)._nameBackground;
    if (*(char *)((long)&(__this->fields)._forceNameColorEnabled + 2) != '\0') {
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040947f1;
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar25,(uint)((__this->fields)._settingsStyleType == 2)
                 ,(MethodInfo *)0x0);
      pUVar25 = (__this->fields)._nameBackground;
      if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040947f1;
      uVar4 = (__this->fields)._settingsBackgroundColor.fields.r;
      uVar42._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
      uVar42._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
      (*(pUVar25->klass->vtable)._23_set_color.methodPtr)
                (uVar4,uVar42,pUVar25,(pUVar25->klass->vtable)._23_set_color.method);
      pTVar26 = (__this->fields)._nameLabel;
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      uVar5 = (__this->fields)._settingsNameColor.fields.r;
      uVar13._0_4_ = (__this->fields)._settingsNameColor.fields.b;
      uVar13._4_4_ = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar26->klass->vtable)._23_set_color.methodPtr)
                (uVar5,uVar13,pTVar26,(pTVar26->klass->vtable)._23_set_color.method);
      pTVar26 = (__this->fields)._guildLabel;
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      uVar6 = (__this->fields)._settingsNameColor.fields.r;
      uVar14._0_4_ = (__this->fields)._settingsNameColor.fields.b;
      uVar14._4_4_ = (__this->fields)._settingsNameColor.fields.a;
      (*(pTVar26->klass->vtable)._23_set_color.methodPtr)
                (uVar6,uVar14,pTVar26,(pTVar26->klass->vtable)._23_set_color.method);
      iVar20 = (__this->fields)._settingsStyleType;
      pTVar26 = (__this->fields)._nameLabel;
      uVar7 = (__this->fields)._settingsBackgroundColor.fields.r;
      uVar15._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
      uVar15._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
      uVar32 = il2cpp_glue_03ad8d60(uVar7,uVar15,0);
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      value.fields.r = '\0';
      value.fields.g = '\0';
      value.fields.b = '\0';
      value.fields.a = '\0';
      value.fields.rgba = uVar32;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar26,value,(MethodInfo *)0x0);
      pTVar26 = (__this->fields)._guildLabel;
      uVar8 = (__this->fields)._settingsBackgroundColor.fields.r;
      uVar16._0_4_ = (__this->fields)._settingsBackgroundColor.fields.b;
      uVar16._4_4_ = (__this->fields)._settingsBackgroundColor.fields.a;
      uVar32 = il2cpp_glue_03ad8d60(uVar8,uVar16,0);
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      value_00.fields.r = '\0';
      value_00.fields.g = '\0';
      value_00.fields.b = '\0';
      value_00.fields.a = '\0';
      value_00.fields.rgba = uVar32;
      TMPro_TMP_Text__set_outlineColor((TMPro_TMP_Text_o *)pTVar26,value_00,(MethodInfo *)0x0);
      pTVar26 = (__this->fields)._nameLabel;
      if (iVar20 == 1) {
        fVar40 = 0.2;
      }
      else {
        fVar40 = 0.0;
      }
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,fVar40,(MethodInfo *)0x0);
      pTVar26 = (__this->fields)._guildLabel;
      if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
      TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,fVar40,(MethodInfo *)0x0);
      pCVar23 = (__this->fields).Character;
      if (((pCVar23 == (Characters_BaseCharacter_o *)0x0) ||
          (pSVar34 = (pCVar23->fields).RichTextName, pSVar34 == (System_String_o *)0x0)) ||
         (pSVar34 = System_String__Trim(pSVar34,(MethodInfo *)0x0),
         pSVar34 == (System_String_o *)0x0)) goto LAB_040947f1;
      iVar20 = (pSVar34->fields)._stringLength;
      iVar21 = (__this->fields)._teamsEnabled;
      count = iVar21 - iVar20;
      if (count == 0 || iVar21 < iVar20) {
        length = *(int32_t *)&(__this->fields).field_0x144;
        if (length < iVar20) {
          pSVar34 = System_String__Substring(pSVar34,0,length,(MethodInfo *)0x0);
        }
      }
      else {
        pSVar35 = System_String__CreateString((System_String_o *)0x0,0x25a9,count,(MethodInfo *)0x0)
        ;
        pSVar34 = System_String__Concat(pSVar34,pSVar35,(MethodInfo *)0x0);
      }
      pCVar23 = (__this->fields).Character;
      if ((pCVar23 == (Characters_BaseCharacter_o *)0x0) ||
         (pSVar35 = (pCVar23->fields).RichTextName, pSVar35 == (System_String_o *)0x0))
      goto LAB_040947f1;
      pSVar27 = *(System_String_o **)&(pCVar23->fields)._disableKinematicTimeLeft;
      pSVar35 = System_String__Trim(pSVar35,(MethodInfo *)0x0);
      bVar31 = System_String__op_Equality(pSVar34,pSVar35,(MethodInfo *)0x0);
      if (*(char *)((long)&(__this->fields)._forceNameColorEnabled + 3) != '\0') {
        pCVar23 = (__this->fields).Character;
        if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
        pSVar35 = *(System_String_o **)&(pCVar23->fields).AI;
        if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar35 = GameManagers_TeamInfo__GetTeamColor(pSVar35,(MethodInfo *)0x0);
        if ((char)bVar31 != '\0') {
          pCVar23 = (__this->fields).Character;
          if ((pCVar23 == (Characters_BaseCharacter_o *)0x0) ||
             (pSVar34 = (pCVar23->fields).RichTextName, pSVar34 == (System_String_o *)0x0))
          goto LAB_040947f1;
          pSVar34 = System_String__Trim(pSVar34,(MethodInfo *)0x0);
        }
        goto LAB_0409423d;
      }
      if ((char)bVar31 != '\0') {
        pSVar34 = pSVar27;
      }
      goto LAB_04094304;
    }
    if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040947f1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar25,0,(MethodInfo *)0x0);
    pTVar26 = (__this->fields)._nameLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    uVar9 = (__this->fields)._settingsNameColor.fields.r;
    uVar17._0_4_ = (__this->fields)._settingsNameColor.fields.b;
    uVar17._4_4_ = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar26->klass->vtable)._23_set_color.methodPtr)
              (uVar9,uVar17,pTVar26,(pTVar26->klass->vtable)._23_set_color.method);
    pTVar26 = (__this->fields)._guildLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    uVar10 = (__this->fields)._settingsNameColor.fields.r;
    uVar18._0_4_ = (__this->fields)._settingsNameColor.fields.b;
    uVar18._4_4_ = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar26->klass->vtable)._23_set_color.methodPtr)(uVar10,uVar18);
    pTVar26 = (__this->fields)._nameLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,0.0,(MethodInfo *)0x0);
    pTVar26 = (__this->fields)._guildLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,0.0,(MethodInfo *)0x0);
    pCVar23 = (__this->fields).Character;
    if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
    cVar19 = *(char *)((long)&(__this->fields)._forceNameColorEnabled + 3);
    uVar30 = *(undefined4 *)&(pCVar23->fields).field_0x2c;
    (__this->fields)._applyForceNameColor =
         (bool_conflict)(pCVar23->fields)._disableKinematicTimeLeft;
    (__this->fields)._settingsApplyToMe = uVar30;
    il2cpp_runtime_glue(pbVar1);
    if (cVar19 != '\0') {
      pCVar23 = (__this->fields).Character;
      if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
      pSVar34 = *(System_String_o **)&(pCVar23->fields).AI;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar34 = GameManagers_TeamInfo__GetTeamColor(pSVar34,(MethodInfo *)0x0);
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      if (values == (System_String_array *)0x0) goto LAB_040947f1;
      if ((int)values->max_length == 0) goto LAB_040947f6;
      values->m_Items[0] = "<color=";
      il2cpp_runtime_glue(values->m_Items);
      if ((uint)values->max_length < 2) goto LAB_040947f6;
      values->m_Items[1] = pSVar34;
      il2cpp_runtime_glue(values->m_Items + 1,pSVar34);
      if ((uint)values->max_length < 3) goto LAB_040947f6;
      values->m_Items[2] = ">";
      il2cpp_runtime_glue(values->m_Items + 2);
      if ((uint)values->max_length < 4) goto LAB_040947f6;
      values->m_Items[3] = *(System_String_o **)pbVar1;
      il2cpp_runtime_glue(values->m_Items + 3);
      if ((uint)values->max_length < 5) goto LAB_040947f6;
      values->m_Items[4] = "</color>";
      il2cpp_runtime_glue(values->m_Items + 4);
      goto LAB_040942fa;
    }
  }
  else {
    pUVar25 = (__this->fields)._nameBackground;
    if (pUVar25 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040947f1;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar25,0,(MethodInfo *)0x0);
    pTVar26 = (__this->fields)._nameLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    uVar2 = (__this->fields)._settingsNameColor.fields.r;
    uVar11._0_4_ = (__this->fields)._settingsNameColor.fields.b;
    uVar11._4_4_ = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar26->klass->vtable)._23_set_color.methodPtr)
              (uVar2,uVar11,pTVar26,(pTVar26->klass->vtable)._23_set_color.method);
    pTVar26 = (__this->fields)._guildLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    uVar3 = (__this->fields)._settingsNameColor.fields.r;
    uVar12._0_4_ = (__this->fields)._settingsNameColor.fields.b;
    uVar12._4_4_ = (__this->fields)._settingsNameColor.fields.a;
    (*(pTVar26->klass->vtable)._23_set_color.methodPtr)(uVar3,uVar12);
    pTVar26 = (__this->fields)._nameLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,0.0,(MethodInfo *)0x0);
    pTVar26 = (__this->fields)._guildLabel;
    if (pTVar26 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040947f1;
    TMPro_TMP_Text__set_outlineWidth((TMPro_TMP_Text_o *)pTVar26,0.0,(MethodInfo *)0x0);
    pCVar23 = (__this->fields).Character;
    if ((pCVar23 == (Characters_BaseCharacter_o *)0x0) ||
       (pSVar34 = (pCVar23->fields).RichTextName, pSVar34 == (System_String_o *)0x0))
    goto LAB_040947f1;
    pSVar34 = System_String__Trim(pSVar34,(MethodInfo *)0x0);
    if (*(char *)((long)&(__this->fields)._forceNameColorEnabled + 3) != '\0') {
      pCVar23 = (__this->fields).Character;
      if (pCVar23 == (Characters_BaseCharacter_o *)0x0) goto LAB_040947f1;
      pSVar35 = *(System_String_o **)&(pCVar23->fields).AI;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar35 = GameManagers_TeamInfo__GetTeamColor(pSVar35,(MethodInfo *)0x0);
LAB_0409423d:
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      if (values == (System_String_array *)0x0) {
LAB_040947f1:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((int)values->max_length == 0) {
LAB_040947f6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[0] = "<color=";
      il2cpp_runtime_glue(values->m_Items);
      if ((uint)values->max_length < 2) goto LAB_040947f6;
      values->m_Items[1] = pSVar35;
      il2cpp_runtime_glue(values->m_Items + 1,pSVar35);
      if ((uint)values->max_length < 3) goto LAB_040947f6;
      values->m_Items[2] = ">";
      il2cpp_runtime_glue(values->m_Items + 2);
      if ((uint)values->max_length < 4) goto LAB_040947f6;
      values->m_Items[3] = pSVar34;
      il2cpp_runtime_glue(values->m_Items + 3,pSVar34);
      if ((uint)values->max_length < 5) goto LAB_040947f6;
      values->m_Items[4] = "</color>";
      il2cpp_runtime_glue(values->m_Items + 4);
LAB_040942fa:
      pSVar34 = System_String__Concat(values,(MethodInfo *)0x0);
    }
LAB_04094304:
    *(System_String_o **)pbVar1 = pSVar34;
    il2cpp_runtime_glue(pbVar1,pSVar34);
  }
  pMVar37 = *(MethodInfo **)&(__this->fields)._applyForceNameColor;
  if (DAT_0570459c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570459c = '\x01';
  }
  *(MethodInfo **)&(__this->fields)._applyForceNameColor = pMVar37;
  il2cpp_runtime_glue(&(__this->fields)._applyForceNameColor);
  pCVar23 = (__this->fields).Character;
  if (pCVar23 != (Characters_BaseCharacter_o *)0x0) {
    pSVar34 = *(System_String_o **)&(pCVar23->fields).HasExplicitNameTag;
    if (pSVar34 == (System_String_o *)0x0) {
      pSVar34 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    }
    owner = UI_CharacterInfoPopup__OwnerPlayer(__this,pMVar37);
    pSVar35 = UI_CharacterInfoPopup__GuildPresetId(__this,owner,method_00);
    bVar31 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(pSVar35,(MethodInfo *)0x0);
    pMVar37 = extraout_RDX;
    if ((char)bVar31 != '\0') {
      pSVar34 = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(pSVar35,(MethodInfo *)0x0);
      pMVar37 = extraout_RDX_00;
    }
    UI_CharacterInfoPopup__RefreshGuildBadges(__this,owner,pMVar37);
    pTVar26 = (__this->fields)._nameLabel;
    if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
      uVar28._0_4_ = (__this->fields)._applyForceNameColor;
      uVar28._4_4_ = (__this->fields)._settingsApplyToMe;
      (*(pTVar26->klass->vtable)._66_set_text.methodPtr)
                (pTVar26,uVar28,(pTVar26->klass->vtable)._66_set_text.method);
      pTVar26 = (__this->fields)._guildLabel;
      if (pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar26->klass->vtable)._66_set_text.methodPtr)
                  (pTVar26,pSVar34,(pTVar26->klass->vtable)._66_set_text.method);
        bVar31 = System_String__IsNullOrEmpty(pSVar34,(MethodInfo *)0x0);
        bVar38 = (byte)bVar31 ^ 1;
        bVar39 = true;
        if (bVar38 == 0) {
          pGVar29 = (__this->fields)._guildBadges;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar39 = false;
          bVar31 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)pGVar29,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar31 != '\0') {
            pGVar29 = (__this->fields)._guildBadges;
            if (pGVar29 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0)
            goto LAB_040949f2;
            bVar39 = *(char *)((long)&(pGVar29->fields)._controlsActive + 1) != '\0';
          }
        }
        x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar31 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar31 != '\0') {
          pUVar36 = (__this->fields)._guildRow;
          if (pUVar36 == (UnityEngine_GameObject_o *)0x0) goto LAB_040949f2;
          UnityEngine_GameObject__SetActive(pUVar36,(uint)bVar39,(MethodInfo *)0x0);
        }
        pTVar26 = (__this->fields)._guildLabel;
        if ((pTVar26 != (TMPro_TextMeshProUGUI_o *)0x0) &&
           (pUVar36 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar26,(MethodInfo *)0x0),
           pUVar36 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar36,(uint)bVar38,(MethodInfo *)0x0);
          UI_CharacterInfoPopup__UpdateEffectOverlay
                    (__this,pSVar34,*(System_String_o **)&(__this->fields)._applyForceNameColor,
                     pSVar35,in_R8);
          return;
        }
      }
    }
  }
LAB_040949f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$SetName
// il2cpp: void UI_CharacterInfoPopup__SetName (UI_CharacterInfoPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4094800

void UI_CharacterInfoPopup__SetName
               (UI_CharacterInfoPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  undefined8 uVar3;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar4;
  UnityEngine_Object_o *x;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *owner;
  System_String_o *presetId;
  System_String_o *value;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  byte bVar7;
  bool bVar8;
  
  if (DAT_0570459c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570459c = '\x01';
    method = extraout_RDX;
  }
  *(System_String_o **)&(__this->fields)._applyForceNameColor = name;
  il2cpp_runtime_glue(&(__this->fields)._applyForceNameColor,name,method);
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    value = *(System_String_o **)&(pCVar1->fields).HasExplicitNameTag;
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    }
    owner = UI_CharacterInfoPopup__OwnerPlayer(__this,(MethodInfo *)name);
    presetId = UI_CharacterInfoPopup__GuildPresetId(__this,owner,method_00);
    bVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset(presetId,(MethodInfo *)0x0);
    method_01 = extraout_RDX_00;
    if ((char)bVar5 != '\0') {
      value = Gisketch_Aottg2UI_Game_AottgGuildPresetCatalog__Label(presetId,(MethodInfo *)0x0);
      method_01 = extraout_RDX_01;
    }
    UI_CharacterInfoPopup__RefreshGuildBadges(__this,owner,method_01);
    pTVar2 = (__this->fields)._nameLabel;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      uVar3._0_4_ = (__this->fields)._applyForceNameColor;
      uVar3._4_4_ = (__this->fields)._settingsApplyToMe;
      (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                (pTVar2,uVar3,(pTVar2->klass->vtable)._66_set_text.method);
      pTVar2 = (__this->fields)._guildLabel;
      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                  (pTVar2,value,(pTVar2->klass->vtable)._66_set_text.method);
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        bVar7 = (byte)bVar5 ^ 1;
        bVar8 = true;
        if (bVar7 == 0) {
          pGVar4 = (__this->fields)._guildBadges;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar8 = false;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pGVar4 = (__this->fields)._guildBadges;
            if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0)
            goto LAB_040949f2;
            bVar8 = *(char *)((long)&(pGVar4->fields)._controlsActive + 1) != '\0';
          }
        }
        x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pUVar6 = (__this->fields)._guildRow;
          if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040949f2;
          UnityEngine_GameObject__SetActive(pUVar6,(uint)bVar8,(MethodInfo *)0x0);
        }
        pTVar2 = (__this->fields)._guildLabel;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          pUVar6 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pTVar2,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar6,(uint)bVar7,(MethodInfo *)0x0);
            UI_CharacterInfoPopup__UpdateEffectOverlay
                      (__this,value,*(System_String_o **)&(__this->fields)._applyForceNameColor,
                       presetId,in_R8);
            return;
          }
        }
      }
    }
  }
LAB_040949f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$Load
// il2cpp: void UI_CharacterInfoPopup__Load (UI_CharacterInfoPopup_o* __this, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, float range, const MethodInfo* method);
// 0x4092bc0

void UI_CharacterInfoPopup__Load
               (UI_CharacterInfoPopup_o *__this,Characters_BaseCharacter_o *character,
               UnityEngine_Vector3_o offset,float range,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  undefined4 uVar1;
  System_Action_Hashtable__o *value;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570459d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Hashtable);
    il2cpp_init_method_metadata(&MethodInfo_Void_Character_OnPlayerPropertiesChanged);
    DAT_0570459d = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Character = character;
  il2cpp_runtime_glue(&(__this->fields).Character,character,method);
  (__this->fields).Offset.fields.x = (float)(int)offset.fields._0_8_;
  (__this->fields).Offset.fields.y = (float)(int)((ulong)offset.fields._0_8_ >> 0x20);
  (__this->fields).Offset.fields.z = offset.fields.z;
  (__this->fields).Range = range;
  if (character != (Characters_BaseCharacter_o *)0x0) {
    uVar1 = *(undefined4 *)&(character->fields).field_0x2c;
    (__this->fields)._applyForceNameColor =
         (bool_conflict)(character->fields)._disableKinematicTimeLeft;
    (__this->fields)._settingsApplyToMe = uVar1;
    il2cpp_runtime_glue(&(__this->fields)._applyForceNameColor);
    (__this->fields)._lastName = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._lastName);
    (__this->fields)._minNameLength = 0;
    (__this->fields)._maxNameLength = 0;
    il2cpp_runtime_glue(&(__this->fields)._minNameLength);
    (__this->fields)._name = (System_String_o *)0x0;
    value = (System_Action_Hashtable__o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._name);
    __this_00 = (__this->fields).Character;
    if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
      if ((char)(__this_00->fields).CustomDamage == '\0') {
        value = (System_Action_Hashtable__o *)il2cpp_runtime_glue(TypeInfo_Action_Hashtable);
        System_Action<object>___ctor();
        Characters_BaseCharacter__add_OnPlayerPropertiesChanged(__this_00,value,(MethodInfo *)0x0);
      }
      UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,(MethodInfo *)value);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$LateUpdate
// il2cpp: void UI_CharacterInfoPopup__LateUpdate (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x40955d0

void UI_CharacterInfoPopup__LateUpdate(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *a;
  System_String_o *a_00;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_0570459e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570459e = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = *(System_String_o **)&(pCVar1->fields)._disableKinematicTimeLeft;
  if (a == (System_String_o *)0x0) {
    a = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    a_00 = *(System_String_o **)&(pCVar1->fields).HasExplicitNameTag;
  }
  else {
    a_00 = *(System_String_o **)&(pCVar1->fields).HasExplicitNameTag;
  }
  if (a_00 == (System_String_o *)0x0) {
    a_00 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    method_00 = *(MethodInfo **)&(pCVar1->fields).AI;
  }
  else {
    method_00 = *(MethodInfo **)&(pCVar1->fields).AI;
  }
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar2 = System_String__op_Equality(a,(__this->fields)._name,(MethodInfo *)0x0);
  if ((((char)bVar2 != '\0') &&
      (bVar2 = System_String__op_Equality
                         (a_00,*(System_String_o **)&(__this->fields)._minNameLength,
                          (MethodInfo *)0x0), (char)bVar2 != '\0')) &&
     (bVar2 = System_String__op_Equality
                        ((System_String_o *)method_00,(__this->fields)._lastName,(MethodInfo *)0x0),
     (char)bVar2 != '\0')) {
    return;
  }
  (__this->fields)._name = a;
  il2cpp_runtime_glue(&(__this->fields)._name,a);
  *(System_String_o **)&(__this->fields)._minNameLength = a_00;
  il2cpp_runtime_glue(&(__this->fields)._minNameLength,a_00);
  (__this->fields)._lastName = (System_String_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields)._lastName);
  UI_CharacterInfoPopup__SettingsManager_OnSettingsChanged(__this,method_00);
  return;
}


// UI.CharacterInfoPopup$$ToggleName
// il2cpp: void UI_CharacterInfoPopup__ToggleName (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x40927f0

void UI_CharacterInfoPopup__ToggleName
               (UI_CharacterInfoPopup_o *__this,bool_conflict toggle,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  pUVar1 = (__this->fields)._nameBackground;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((byte)((byte)bVar2 ^ (byte)toggle) != 1) {
        return;
      }
      pUVar1 = (__this->fields)._nameBackground;
      if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
        pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,toggle & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$ToggleHealthbar
// il2cpp: void UI_CharacterInfoPopup__ToggleHealthbar (UI_CharacterInfoPopup_o* __this, bool toggle, const MethodInfo* method);
// 0x4092610

void UI_CharacterInfoPopup__ToggleHealthbar
               (UI_CharacterInfoPopup_o *__this,bool_conflict toggle,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar2 = (__this->fields)._healthbar;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if ((byte)((byte)bVar1 ^ (byte)toggle) != 1) {
        return;
      }
      pUVar2 = (__this->fields)._healthbar;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar2,toggle & 0xff,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$SetHealthbar
// il2cpp: void UI_CharacterInfoPopup__SetHealthbar (UI_CharacterInfoPopup_o* __this, int32_t currentHealth, int32_t maxHealth, UnityEngine_Color_o color, const MethodInfo* method);
// 0x4092680

void UI_CharacterInfoPopup__SetHealthbar
               (UI_CharacterInfoPopup_o *__this,int32_t currentHealth,int32_t maxHealth,
               UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar7;
  float fVar8;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  int32_t local_40;
  int32_t local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  fVar7 = color.fields.b;
  fVar8 = color.fields.a;
  local_28._8_4_ = in_XMM1_Dc;
  local_28._0_8_ = color.fields._8_8_;
  local_28._12_4_ = in_XMM1_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = color.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  local_40 = maxHealth;
  local_3c = currentHealth;
  if (DAT_0570459f == '\0') {
    il2cpp_init_method_metadata(&"/");
    DAT_0570459f = '\x01';
  }
  pUVar1 = (__this->fields)._healthbarFill;
  if (maxHealth < 1) {
    fVar4 = 0.0;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040927e6;
  }
  else {
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040927e6;
    fVar4 = (float)currentHealth / (float)maxHealth;
    fVar8 = 0.0;
    fVar7 = 1.0;
    if (fVar4 <= 1.0) {
      fVar7 = fVar4;
    }
    fVar4 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar7);
  }
  UnityEngine_UI_Image__set_fillAmount(pUVar1,fVar4,(MethodInfo *)0x0);
  pTVar2 = (__this->fields)._healthbarLabel;
  pSVar3 = System_Int32__ToString((int32_t)&local_3c,(MethodInfo *)0x0);
  str2 = System_Int32__ToString((int32_t)&local_40,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(pSVar3,"/",str2,(MethodInfo *)0x0);
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,pSVar3,(pTVar2->klass->vtable)._66_set_text.method);
    pUVar1 = (__this->fields)._healthbarFill;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      uVar5 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                        (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
      fVar4 = (float)uVar5 - (float)local_38._0_4_;
      fVar6 = (float)((ulong)uVar5 >> 0x20) - (float)local_38._4_4_;
      if (9.9999994e-11 <=
          (fVar8 - (float)local_28._4_4_) * (fVar8 - (float)local_28._4_4_) +
          fVar6 * fVar6 + fVar4 * fVar4 +
          (fVar7 - (float)local_28._0_4_) * (fVar7 - (float)local_28._0_4_)) {
        pUVar1 = (__this->fields)._healthbarFill;
        if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto LAB_040927e6;
        (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                  (local_38._0_4_,local_28._0_4_,pUVar1,(pUVar1->klass->vtable)._23_set_color.method
                  );
      }
      return;
    }
  }
LAB_040927e6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$UpdateEffectOverlay
// il2cpp: void UI_CharacterInfoPopup__UpdateEffectOverlay (UI_CharacterInfoPopup_o* __this, System_String_o* guild, System_String_o* nameText, System_String_o* guildPresetId, const MethodInfo* method);
// 0x4094f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UI_CharacterInfoPopup__UpdateEffectOverlay
               (UI_CharacterInfoPopup_o *__this,System_String_o *guild,System_String_o *nameText,
               System_String_o *guildPresetId,MethodInfo *method)

{
  PatreonEffects_ResolvedNameEffect_o effect;
  PatreonEffects_ResolvedNameEffect_o effect_00;
  bool_conflict bVar1;
  uint uVar2;
  bool_conflict bVar3;
  uint uVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_o *player;
  TMPro_TMP_FontAsset_o *value;
  TMPro_TMP_FontAsset_o *value_00;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  MethodInfo *method_04;
  MethodInfo *method_05;
  byte bVar8;
  TMPro_TextMeshProUGUI_o *pTVar9;
  PatreonEffects_NameEffectController_o **controller;
  undefined8 uVar10;
  float in_XMM1_Da;
  float in_XMM1_Db;
  UnityEngine_Color_o fallbackColor;
  UnityEngine_Color_o color;
  UnityEngine_Color_o fallbackColor_00;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o fallbackColor_01;
  UnityEngine_Color_o fallbackColor_02;
  PatreonEffects_ResolvedNameEffect_Fields local_c8;
  PatreonEffects_ResolvedNameEffect_Fields local_78;
  
  pMVar7 = (MethodInfo *)guild;
  if (DAT_057045a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Normal");
    DAT_057045a0 = '\x01';
  }
  local_78.ColorC.fields.b = 0.0;
  local_78.ColorC.fields.a = 0.0;
  local_78.ColorD.fields.r = 0.0;
  local_78.ColorD.fields.g = 0.0;
  local_78.ColorB.fields.b = 0.0;
  local_78.ColorB.fields.a = 0.0;
  local_78.ColorC.fields.r = 0.0;
  local_78.ColorC.fields.g = 0.0;
  local_78.ColorA.fields.b = 0.0;
  local_78.ColorA.fields.a = 0.0;
  local_78.ColorB.fields.r = 0.0;
  local_78.ColorB.fields.g = 0.0;
  local_78.Enabled = 0;
  local_78.Type = 0;
  local_78.ColorA.fields.r = 0.0;
  local_78.ColorA.fields.g = 0.0;
  local_78.ColorD.fields.b = 0.0;
  local_78.ColorD.fields.a = 0.0;
  local_c8.ColorC.fields.b = 0.0;
  local_c8.ColorC.fields.a = 0.0;
  local_c8.ColorD.fields.r = 0.0;
  local_c8.ColorD.fields.g = 0.0;
  local_c8.ColorB.fields.b = 0.0;
  local_c8.ColorB.fields.a = 0.0;
  local_c8.ColorC.fields.r = 0.0;
  local_c8.ColorC.fields.g = 0.0;
  local_c8.ColorA.fields.b = 0.0;
  local_c8.ColorA.fields.a = 0.0;
  local_c8.ColorB.fields.r = 0.0;
  local_c8.ColorB.fields.g = 0.0;
  local_c8.Enabled = 0;
  local_c8.Type = 0;
  local_c8.ColorA.fields.r = 0.0;
  local_c8.ColorA.fields.g = 0.0;
  local_c8.ColorD.fields.b = 0.0;
  local_c8.ColorD.fields.a = 0.0;
  player = UI_CharacterInfoPopup__OwnerPlayer(__this,pMVar7);
  bVar8 = 0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = PatreonEffects_PatreonHelper__HasNameEffectAccess(player,(MethodInfo *)0x0);
    bVar8 = 0;
    if ((char)bVar1 != '\0') {
      bVar8 = *(byte *)((long)&(__this->fields)._forceNameColorEnabled + 1) ^ 1;
    }
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
    if (bVar8 == 0) goto LAB_04095065;
LAB_04095025:
    value = PatreonEffects_NameFontCatalog__FontForPlayer(player,0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto LAB_04095040;
LAB_04095085:
    il2cpp_init_class();
    if (bVar8 == 0) goto LAB_04095094;
LAB_0409504a:
    value_00 = PatreonEffects_NameFontCatalog__FontForPlayer(player,1,(MethodInfo *)0x0);
  }
  else {
    if (bVar8 != 0) goto LAB_04095025;
LAB_04095065:
    value = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto LAB_04095085;
LAB_04095040:
    if (bVar8 != 0) goto LAB_0409504a;
LAB_04095094:
    value_00 = PatreonEffects_NameFontCatalog__Load("Normal",(MethodInfo *)0x0);
  }
  pTVar9 = (__this->fields)._nameLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pTVar9 = (__this->fields)._nameLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar9,value,(MethodInfo *)0x0);
    }
  }
  pTVar9 = (__this->fields)._guildLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pTVar9 = (__this->fields)._guildLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar9,value_00,(MethodInfo *)0x0);
    }
  }
  local_78.ColorC.fields.b = 0.0;
  local_78.ColorC.fields.a = 0.0;
  local_78.ColorD.fields.r = 0.0;
  local_78.ColorD.fields.g = 0.0;
  local_78.ColorB.fields.b = 0.0;
  local_78.ColorB.fields.a = 0.0;
  local_78.ColorC.fields.r = 0.0;
  local_78.ColorC.fields.g = 0.0;
  local_78.ColorA.fields.b = 0.0;
  local_78.ColorA.fields.a = 0.0;
  local_78.ColorB.fields.r = 0.0;
  local_78.ColorB.fields.g = 0.0;
  local_78.Enabled = 0;
  local_78.Type = 0;
  local_78.ColorA.fields.r = 0.0;
  local_78.ColorA.fields.g = 0.0;
  local_78.ColorD.fields.b = 0.0;
  local_78.ColorD.fields.a = 0.0;
  local_c8.Enabled = 0;
  local_c8.Type = 0;
  local_c8.ColorA.fields.r = 0.0;
  local_c8.ColorA.fields.g = 0.0;
  local_c8.ColorA.fields.b = 0.0;
  local_c8.ColorA.fields.a = 0.0;
  local_c8.ColorB.fields.r = 0.0;
  local_c8.ColorB.fields.g = 0.0;
  local_c8.ColorB.fields.b = 0.0;
  local_c8.ColorB.fields.a = 0.0;
  local_c8.ColorC.fields.r = 0.0;
  local_c8.ColorC.fields.g = 0.0;
  local_c8.ColorC.fields.b = 0.0;
  local_c8.ColorC.fields.a = 0.0;
  local_c8.ColorD.fields.r = 0.0;
  local_c8.ColorD.fields.g = 0.0;
  local_c8.ColorD.fields.b = 0.0;
  local_c8.ColorD.fields.a = 0.0;
  if (bVar8 == 0) {
    uVar2 = 0;
    bVar8 = 1;
  }
  else {
    uVar2 = 0;
    bVar1 = PatreonEffects_NameEffectHelpers__TryGetNameEffect
                      (player,(PatreonEffects_ResolvedNameEffect_o *)&local_78,(MethodInfo *)0x0);
    bVar8 = (byte)bVar1 ^ 1;
    bVar1 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      uVar2 = PatreonEffects_NameEffectHelpers__TryGetGuildEffect
                        (player,(PatreonEffects_ResolvedNameEffect_o *)&local_c8,(MethodInfo *)0x0);
      uVar2 = uVar2 & 0xff;
    }
  }
  bVar1 = System_String__IsNullOrEmpty(nameText,(MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(guild,(MethodInfo *)0x0);
  pTVar9 = (__this->fields)._nameLabel;
  if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040955c0;
  UnityEngine_GameObject__SetActive(pUVar6,(uint)(byte)((byte)bVar1 ^ 1),(MethodInfo *)0x0);
  uVar4 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyImage
                    ((__this->fields)._guildPresetImage,guildPresetId,(MethodInfo *)0x0);
  UI_CharacterInfoPopup__SetGuildRowSpacing(__this,uVar4 & 0xff,method_00);
  pTVar9 = (__this->fields)._guildLabel;
  if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto LAB_040955c0;
  UnityEngine_GameObject__SetActive
            (pUVar6,(uint)(byte)(((byte)bVar3 | (byte)uVar4) ^ 1),(MethodInfo *)0x0);
  pTVar9 = (__this->fields)._guildLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if ((byte)uVar4 == 0) {
      bVar5 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__IsPreset
                        (guildPresetId,(MethodInfo *)0x0);
      pTVar9 = (__this->fields)._guildLabel;
      if ((char)bVar5 == '\0') {
        if ((byte)bVar3 == 0) {
          if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
          uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                             (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
          color_01.fields.a = in_XMM1_Db;
          color_01.fields.b = in_XMM1_Da;
          color_01.fields.r = (float)(int)uVar10;
          color_01.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
          Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                    ((TMPro_TMP_Text_o *)pTVar9,&(__this->fields)._guildPresetEffect,color_01,
                     (MethodInfo *)0x0);
          pTVar9 = (__this->fields)._guildLabel;
          if (uVar2 != 0) {
            effect.fields.ColorA.fields.r = local_c8.ColorA.fields.r;
            effect.fields.ColorA.fields.g = local_c8.ColorA.fields.g;
            effect.fields.Enabled = local_c8.Enabled;
            effect.fields.Type = local_c8.Type;
            effect.fields.ColorA.fields.b = local_c8.ColorA.fields.b;
            effect.fields.ColorA.fields.a = local_c8.ColorA.fields.a;
            effect.fields.ColorB.fields.r = local_c8.ColorB.fields.r;
            effect.fields.ColorB.fields.g = local_c8.ColorB.fields.g;
            effect.fields.ColorB.fields.b = local_c8.ColorB.fields.b;
            effect.fields.ColorB.fields.a = local_c8.ColorB.fields.a;
            effect.fields.ColorC.fields.r = local_c8.ColorC.fields.r;
            effect.fields.ColorC.fields.g = local_c8.ColorC.fields.g;
            effect.fields.ColorC.fields.b = local_c8.ColorC.fields.b;
            effect.fields.ColorC.fields.a = local_c8.ColorC.fields.a;
            effect.fields.ColorD.fields.r = local_c8.ColorD.fields.r;
            effect.fields.ColorD.fields.g = local_c8.ColorD.fields.g;
            effect.fields.ColorD.fields.b = local_c8.ColorD.fields.b;
            effect.fields.ColorD.fields.a = local_c8.ColorD.fields.a;
            in_XMM1_Da = local_c8.ColorA.fields.b;
            in_XMM1_Db = local_c8.ColorA.fields.a;
            UI_CharacterInfoPopup__ApplyEffect
                      (pTVar9,&(__this->fields)._guildEffect,effect,method_03);
            goto LAB_040954f1;
          }
          if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
          uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                             (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
          pMVar7 = extraout_RDX_00;
        }
        else {
          if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
          uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                             (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
          pMVar7 = extraout_RDX;
        }
        fallbackColor_01.fields.a = in_XMM1_Db;
        fallbackColor_01.fields.b = in_XMM1_Da;
        fallbackColor_01.fields.r = (float)(int)uVar10;
        fallbackColor_01.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
        UI_CharacterInfoPopup__ClearEffect
                  (pTVar9,&(__this->fields)._guildEffect,fallbackColor_01,pMVar7);
      }
      else {
        if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
        uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                           (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
        fallbackColor_00.fields.a = in_XMM1_Db;
        fallbackColor_00.fields.b = in_XMM1_Da;
        fallbackColor_00.fields.r = (float)(int)uVar10;
        fallbackColor_00.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
        UI_CharacterInfoPopup__ClearEffect
                  (pTVar9,&(__this->fields)._guildEffect,fallbackColor_00,method_02);
        in_XMM1_Da = (float)DAT_00ccd980;
        in_XMM1_Db = DAT_00ccd980._4_4_;
        uVar10 = DAT_00ccd980;
        color_00.fields.b = (float)(int)uVar10;
        color_00.fields.a = (float)(int)((ulong)uVar10 >> 0x20);
        color_00.fields.r = (float)(int)uVar10;
        color_00.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
        Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ApplyText
                  ((TMPro_TMP_Text_o *)(__this->fields)._guildLabel,
                   &(__this->fields)._guildPresetEffect,guildPresetId,guild,color_00,
                   (MethodInfo *)0x0);
      }
    }
    else {
      pTVar9 = (__this->fields)._guildLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
      uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                         (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      fallbackColor.fields.a = in_XMM1_Db;
      fallbackColor.fields.b = in_XMM1_Da;
      fallbackColor.fields.r = (float)(int)uVar10;
      fallbackColor.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
      UI_CharacterInfoPopup__ClearEffect
                (pTVar9,&(__this->fields)._guildEffect,fallbackColor,method_01);
      pTVar9 = (__this->fields)._guildLabel;
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_040955c0;
      uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                         (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      color.fields.a = in_XMM1_Db;
      color.fields.b = in_XMM1_Da;
      color.fields.r = (float)(int)uVar10;
      color.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
      Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__ClearEffect
                ((TMPro_TMP_Text_o *)pTVar9,&(__this->fields)._guildPresetEffect,color,
                 (MethodInfo *)0x0);
    }
  }
LAB_040954f1:
  pTVar9 = (__this->fields)._nameLabel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pTVar9 = (__this->fields)._nameLabel;
    controller = &(__this->fields)._nameEffect;
    if (((byte)bVar1 == 0) && (bVar8 == 0)) {
      effect_00.fields.ColorA.fields.r = local_78.ColorA.fields.r;
      effect_00.fields.ColorA.fields.g = local_78.ColorA.fields.g;
      effect_00.fields.Enabled = local_78.Enabled;
      effect_00.fields.Type = local_78.Type;
      effect_00.fields.ColorA.fields.b = local_78.ColorA.fields.b;
      effect_00.fields.ColorA.fields.a = local_78.ColorA.fields.a;
      effect_00.fields.ColorB.fields.r = local_78.ColorB.fields.r;
      effect_00.fields.ColorB.fields.g = local_78.ColorB.fields.g;
      effect_00.fields.ColorB.fields.b = local_78.ColorB.fields.b;
      effect_00.fields.ColorB.fields.a = local_78.ColorB.fields.a;
      effect_00.fields.ColorC.fields.r = local_78.ColorC.fields.r;
      effect_00.fields.ColorC.fields.g = local_78.ColorC.fields.g;
      effect_00.fields.ColorC.fields.b = local_78.ColorC.fields.b;
      effect_00.fields.ColorC.fields.a = local_78.ColorC.fields.a;
      effect_00.fields.ColorD.fields.r = local_78.ColorD.fields.r;
      effect_00.fields.ColorD.fields.g = local_78.ColorD.fields.g;
      effect_00.fields.ColorD.fields.b = local_78.ColorD.fields.b;
      effect_00.fields.ColorD.fields.a = local_78.ColorD.fields.a;
      UI_CharacterInfoPopup__ApplyEffect(pTVar9,controller,effect_00,method_04);
    }
    else {
      if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_040955c0:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar10 = (*(pTVar9->klass->vtable)._22_get_color.methodPtr)
                         (pTVar9,(pTVar9->klass->vtable)._22_get_color.method);
      fallbackColor_02.fields.a = in_XMM1_Db;
      fallbackColor_02.fields.b = in_XMM1_Da;
      fallbackColor_02.fields.r = (float)(int)uVar10;
      fallbackColor_02.fields.g = (float)(int)((ulong)uVar10 >> 0x20);
      UI_CharacterInfoPopup__ClearEffect(pTVar9,controller,fallbackColor_02,method_05);
    }
  }
  return;
}


// UI.CharacterInfoPopup$$ClearEffect
// il2cpp: void UI_CharacterInfoPopup__ClearEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, UnityEngine_Color_o fallbackColor, const MethodInfo* method);
// 0x4095860

void UI_CharacterInfoPopup__ClearEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               UnityEngine_Color_o fallbackColor,MethodInfo *method)

{
  PatreonEffects_NameEffectController_o *pPVar1;
  bool_conflict bVar2;
  float local_48;
  float local_38;
  
  if (DAT_057045a1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045a1 = '\x01';
  }
  pPVar1 = *controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*controller == (PatreonEffects_NameEffectController_o *)0x0) goto LAB_04095962;
    PatreonEffects_NameEffectController__Clear(*controller,(MethodInfo *)0x0);
    pPVar1 = *controller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)pPVar1,(MethodInfo *)0x0);
    *controller = (PatreonEffects_NameEffectController_o *)0x0;
    il2cpp_runtime_glue(controller);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
    local_48 = fallbackColor.fields.r;
    local_38 = fallbackColor.fields.b;
    (*(tmp->klass->vtable)._23_set_color.methodPtr)
              (local_48,local_38,tmp,(tmp->klass->vtable)._23_set_color.method);
    return;
  }
LAB_04095962:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$ApplyEffect
// il2cpp: void UI_CharacterInfoPopup__ApplyEffect (TMPro_TextMeshProUGUI_o* tmp, PatreonEffects_NameEffectController_o** controller, PatreonEffects_ResolvedNameEffect_o effect, const MethodInfo* method);
// 0x4095970

void UI_CharacterInfoPopup__ApplyEffect
               (TMPro_TextMeshProUGUI_o *tmp,PatreonEffects_NameEffectController_o **controller,
               PatreonEffects_ResolvedNameEffect_o effect,MethodInfo *method)

{
  PatreonEffects_ResolvedNameEffect_o PVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this;
  PatreonEffects_NameEffectController_o *pPVar3;
  PatreonEffects_NameEffectSettings_o *settings;
  
  PVar1.fields = effect.fields;
  if (DAT_057045a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045a2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)tmp,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pPVar3 = *controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((tmp == (TMPro_TextMeshProUGUI_o *)0x0) ||
       (__this = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)tmp,(MethodInfo *)0x0),
       __this == (UnityEngine_GameObject_o *)0x0)) goto LAB_04095bcb;
    pPVar3 = (PatreonEffects_NameEffectController_o *)
             UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_NameEffectController_AddComponent_NameEffectCont);
    *controller = pPVar3;
    il2cpp_runtime_glue(controller);
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
      (settings->fields).gradientB.fields.b = (float)(int)PVar1.fields.ColorB.fields._8_8_;
      (settings->fields).gradientB.fields.a =
           (float)(int)((ulong)PVar1.fields.ColorB.fields._8_8_ >> 0x20);
      (settings->fields).gradientC.fields.r = (float)(int)PVar1.fields.ColorC.fields._0_8_;
      (settings->fields).gradientC.fields.g =
           (float)(int)((ulong)PVar1.fields.ColorC.fields._0_8_ >> 0x20);
      (settings->fields).gradientC.fields.b = (float)(int)PVar1.fields.ColorC.fields._8_8_;
      (settings->fields).gradientC.fields.a =
           (float)(int)((ulong)PVar1.fields.ColorC.fields._8_8_ >> 0x20);
      (settings->fields).gradientD.fields.r = (float)(int)PVar1.fields.ColorD.fields._0_8_;
      (settings->fields).gradientD.fields.g =
           (float)(int)((ulong)PVar1.fields.ColorD.fields._0_8_ >> 0x20);
      (settings->fields).gradientD.fields.b = effect.fields.ColorD.fields.b;
      (settings->fields).gradientD.fields.a = effect.fields.ColorD.fields.a;
      if (tmp != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(tmp->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,tmp,(tmp->klass->vtable)._23_set_color.method);
        if (*controller != (PatreonEffects_NameEffectController_o *)0x0) {
          PatreonEffects_NameEffectController__Apply(*controller,settings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_04095bcb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$SetupGuildBadges
// il2cpp: void UI_CharacterInfoPopup__SetupGuildBadges (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4093300

void UI_CharacterInfoPopup__SetupGuildBadges(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_UI_Image_o **image;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  int32_t index;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  Il2CppObject *pIVar10;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar11;
  UnityEngine_UI_Image_o *pUVar12;
  undefined8 uVar13;
  
  if (DAT_057045a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge);
    il2cpp_init_method_metadata(&MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter);
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"GuildBadges");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"GuildPresetImage");
    il2cpp_init_method_metadata(&"GuildBadgeRow");
    DAT_057045a3 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"Name",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pTVar2 = (__this->fields)._guildLabel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pTVar2 = (__this->fields)._guildLabel;
    if ((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
       (pUVar5 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      index = UnityEngine_Transform__GetSiblingIndex(pUVar5,(MethodInfo *)0x0);
      pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
      handle = TypeRef_RectTransform;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar6 != (System_Type_array *)0x0) {
        if ((pSVar7 != (System_Type_o *)0x0) &&
           (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class), lVar8 == 0
           )) {
LAB_04093960:
          uVar13 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar13,0);
        }
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = pSVar7;
          il2cpp_runtime_glue(pSVar6->m_Items);
          pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
          if ((pSVar7 != (System_Type_o *)0x0) &&
             (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).element_class),
             lVar8 == 0)) goto LAB_04093960;
          if (1 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[1] = pSVar7;
            il2cpp_runtime_glue(pSVar6->m_Items + 1,pSVar7);
            pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor(pUVar9,"GuildBadgeRow",pSVar6,(MethodInfo *)0x0);
            ppUVar1 = &(__this->fields)._guildRow;
            (__this->fields)._guildRow = pUVar9;
            il2cpp_runtime_glue(ppUVar1);
            pUVar9 = (__this->fields)._guildRow;
            if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar5 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_Transform_o *)0x0)) {
              UnityEngine_Transform__SetParent(pUVar5,pUVar4,0,(MethodInfo *)0x0);
              if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar4 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0),
                 pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetSiblingIndex(pUVar4,index,(MethodInfo *)0x0);
                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                   (__this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                                UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLay),
                   __this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) {
                  UnityEngine_UI_LayoutGroup__set_childAlignment
                            ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
                            (__this_00,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
                            (__this_00,1,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                            (__this_00,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                            (__this_00,0,(MethodInfo *)0x0);
                  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                            (__this_00,4.0,(MethodInfo *)0x0);
                  if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                     (__this_01 = (UnityEngine_UI_ContentSizeFitter_o *)
                                  UnityEngine_GameObject__AddComponent<object>
                                            (*ppUVar1,MethodInfo_ContentSizeFitter_AddComponent_ContentSizeFitter),
                     __this_01 != (UnityEngine_UI_ContentSizeFitter_o *)0x0)) {
                    UnityEngine_UI_ContentSizeFitter__set_horizontalFit
                              (__this_01,2,(MethodInfo *)0x0);
                    UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0)
                    ;
                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar10 = UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                      pTVar2 = (__this->fields)._guildLabel;
                      if ((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                         (pIVar10 != (Il2CppObject *)0x0)) {
                        (*pIVar10->klass->vtable[0x26].methodPtr)
                                  (*(float *)&(pTVar2->fields).m_spriteColor.fields.r + 10.0,pIVar10
                                   ,pIVar10->klass->vtable[0x26].method);
                        pSVar6 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                        pSVar7 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                        if (pSVar6 != (System_Type_array *)0x0) {
                          if ((pSVar7 != (System_Type_o *)0x0) &&
                             (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).
                                                                element_class), lVar8 == 0))
                          goto LAB_04093960;
                          if ((int)pSVar6->max_length != 0) {
                            pSVar6->m_Items[0] = pSVar7;
                            il2cpp_runtime_glue(pSVar6->m_Items);
                            pSVar7 = System_Type__GetTypeFromHandle(TypeRef_LayoutElement,(MethodInfo *)0x0);
                            if ((pSVar7 != (System_Type_o *)0x0) &&
                               (lVar8 = il2cpp_runtime_glue(pSVar7,(((pSVar6->obj).klass)->_1).
                                                                  element_class), lVar8 == 0))
                            goto LAB_04093960;
                            if (1 < (uint)pSVar6->max_length) {
                              pSVar6->m_Items[1] = pSVar7;
                              il2cpp_runtime_glue(pSVar6->m_Items + 1,pSVar7);
                              pUVar9 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                              UnityEngine_GameObject___ctor
                                        (pUVar9,"GuildBadges",pSVar6,(MethodInfo *)0x0);
                              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar4 = UnityEngine_GameObject__get_transform
                                                   (pUVar9,(MethodInfo *)0x0);
                                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                   (pUVar5 = UnityEngine_GameObject__get_transform
                                                       (*ppUVar1,(MethodInfo *)0x0),
                                   pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                                  UnityEngine_Transform__SetParent
                                            (pUVar4,pUVar5,0,(MethodInfo *)0x0);
                                  pGVar11 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)
                                            UnityEngine_GameObject__AddComponent<object>
                                                      (pUVar9,MethodInfo_AottgBadgeIconRowRuntime_AddComponent_AottgBadge);
                                  (__this->fields)._guildBadges = pGVar11;
                                  il2cpp_runtime_glue(&(__this->fields)._guildBadges);
                                  pTVar2 = (__this->fields)._guildLabel;
                                  if ((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                                     (pGVar11 = (__this->fields)._guildBadges,
                                     pGVar11 !=
                                     (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0)) {
                                    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
                                              (pGVar11,*(float *)&(pTVar2->fields).m_spriteColor.
                                                                  fields.r,2.0,
                                               (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                                               (System_String_o *)0x0,1,(MethodInfo *)0x0);
                                    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar4 = UnityEngine_GameObject__get_transform
                                                         (*ppUVar1,(MethodInfo *)0x0);
                                      pTVar2 = (__this->fields)._guildLabel;
                                      if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                        image = &(__this->fields)._guildPresetImage;
                                        pUVar12 = Gisketch_Aottg2UI_Game_AottgGuildPresetVisual__EnsureImage
                                                            (pUVar4,image,"GuildPresetImage",
                                                             *(float *)&(pTVar2->fields).
                                                                        m_spriteColor.fields.r +
                                                             10.0,(MethodInfo *)0x0);
                                        *image = pUVar12;
                                        il2cpp_runtime_glue(image);
                                        if ((*image != (UnityEngine_UI_Image_o *)0x0) &&
                                           (pUVar9 = UnityEngine_Component__get_gameObject
                                                               ((UnityEngine_Component_o *)*image,
                                                                (MethodInfo *)0x0),
                                           pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
                                          UnityEngine_GameObject__SetActive
                                                    (pUVar9,0,(MethodInfo *)0x0);
                                          pTVar2 = (__this->fields)._guildLabel;
                                          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
                                            pUVar4 = TMPro_TMP_Text__get_transform
                                                               ((TMPro_TMP_Text_o *)pTVar2,
                                                                (MethodInfo *)0x0);
                                            if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                               (pUVar5 = UnityEngine_GameObject__get_transform
                                                                   (*ppUVar1,(MethodInfo *)0x0),
                                               pUVar4 != (UnityEngine_Transform_o *)0x0)) {
                                              UnityEngine_Transform__SetParent
                                                        (pUVar4,pUVar5,0,(MethodInfo *)0x0);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto LAB_04093956;
                            }
                          }
                          goto LAB_0409395b;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_04093956;
          }
        }
LAB_0409395b:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_04093956:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$RefreshGuildBadges
// il2cpp: void UI_CharacterInfoPopup__RefreshGuildBadges (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x4094d00

void UI_CharacterInfoPopup__RefreshGuildBadges
               (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *pGVar1;
  Characters_BaseCharacter_o *pCVar2;
  void *pvVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_string__o *roles;
  System_String_o *json;
  Il2CppObject *local_38;
  
  if (DAT_057045a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057045a4 = '\x01';
  }
  local_38 = (Il2CppObject *)0x0;
  pGVar1 = (__this->fields)._guildBadges;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  json = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (owner == (Photon_Realtime_Player_o *)0x0) {
LAB_04094e5c:
    if (*(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8) != 0) {
      pCVar2 = (__this->fields).Character;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_04094f26;
        bVar4 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          pIVar5 = *(Il2CppClass **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
          if (pIVar5 == (Il2CppClass *)0x0) goto LAB_04094f26;
          goto LAB_04094ecb;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
      goto LAB_04094dea;
      goto LAB_04094e5c;
    }
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_04094e5c;
LAB_04094dea:
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
      goto LAB_04094f26;
    }
    bVar4 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                      (__this_00,(owner->fields).actorNumber,&local_38,MethodInfo_Boolean_TryGetValue);
    if (((local_38 == (Il2CppObject *)0x0) || ((char)bVar4 == '\0')) ||
       (pIVar5 = local_38[2].klass, pIVar5 == (Il2CppClass *)0x0)) goto LAB_04094e5c;
LAB_04094ecb:
    pvVar3 = (pIVar5->_1).generic_class;
    if (pvVar3 == (void *)0x0) goto LAB_04094f26;
    json = *(System_String_o **)((long)pvVar3 + 0x18);
  }
  pGVar1 = (__this->fields)._guildBadges;
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  roles = PatreonEffects_RoleSpriteHelpers__GetRoles(owner,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
              (pGVar1,json,roles,(MethodInfo *)0x0);
    return;
  }
LAB_04094f26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$SetGuildRowSpacing
// il2cpp: void UI_CharacterInfoPopup__SetGuildRowSpacing (UI_CharacterInfoPopup_o* __this, bool imageGuild, const MethodInfo* method);
// 0x4095770

void UI_CharacterInfoPopup__SetGuildRowSpacing
               (UI_CharacterInfoPopup_o *__this,bool_conflict imageGuild,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_01;
  float value;
  
  if (DAT_057045a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045a5 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._guildRow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._guildRow;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0409584f;
    __this_01 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLay);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar1 == '\0') {
    return;
  }
  if (__this_01 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
    if ((char)imageGuild == '\0') {
      value = 4.0;
    }
    else {
      value = 2.8;
    }
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this_01,value,(MethodInfo *)0x0);
    return;
  }
LAB_0409584f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterInfoPopup$$GuildPresetId
// il2cpp: System_String_o* UI_CharacterInfoPopup__GuildPresetId (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x4094b00

System_String_o *
UI_CharacterInfoPopup__GuildPresetId
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_057045a6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"guildPresetId");
    DAT_057045a6 = '\x01';
    method = extraout_RDX;
  }
  pSVar2 = UI_CharacterInfoPopup__CharacterInfoJson(__this,owner,method);
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    a = SimpleJSONFixed_JSON__Parse(pSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      a_00 = (SimpleJSONFixed_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,"guildPresetId",(a->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        plVar3 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,"guildPresetId",(a->klass->vtable)._7_get_Item.method);
        if (plVar3 != (long *)0x0) {
          pSVar2 = (System_String_o *)
                   (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          return pSVar2;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.CharacterInfoPopup$$CharacterInfoJson
// il2cpp: System_String_o* UI_CharacterInfoPopup__CharacterInfoJson (UI_CharacterInfoPopup_o* __this, Photon_Realtime_Player_o* owner, const MethodInfo* method);
// 0x4095bd0

System_String_o *
UI_CharacterInfoPopup__CharacterInfoJson
          (UI_CharacterInfoPopup_o *__this,Photon_Realtime_Player_o *owner,MethodInfo *method)

{
  void *pvVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 *puVar5;
  Il2CppObject *local_20;
  
  if (DAT_057045a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_057045a7 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (owner == (Photon_Realtime_Player_o *)0x0) {
LAB_04095ce4:
    if (*(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8) != 0) {
      pCVar2 = (__this->fields).Character;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar2 = (__this->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto LAB_04095d86;
        bVar4 = Characters_BaseCharacter__IsMainCharacter(pCVar2,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 8);
          if (lVar3 == 0) goto LAB_04095d86;
          pvVar1 = *(void **)(lVar3 + 0x60);
          goto joined_r0x04095d5c;
        }
      }
    }
    puVar5 = *(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)
      goto LAB_04095c64;
      goto LAB_04095ce4;
    }
    __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                 (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_04095ce4;
LAB_04095c64:
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if (__this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)
      goto LAB_04095d86;
    }
    bVar4 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                      (__this_00,(owner->fields).actorNumber,&local_20,MethodInfo_Boolean_TryGetValue);
    if (((local_20 == (Il2CppObject *)0x0) || ((char)bVar4 == '\0')) ||
       (local_20[2].klass == (Il2CppClass *)0x0)) goto LAB_04095ce4;
    pvVar1 = ((local_20[2].klass)->_1).generic_class;
joined_r0x04095d5c:
    if (pvVar1 == (void *)0x0) {
LAB_04095d86:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    puVar5 = (undefined8 *)((long)pvVar1 + 0x18);
  }
  return (System_String_o *)*puVar5;
}


// UI.CharacterInfoPopup$$OwnerPlayer
// il2cpp: Photon_Realtime_Player_o* UI_CharacterInfoPopup__OwnerPlayer (UI_CharacterInfoPopup_o* __this, const MethodInfo* method);
// 0x4094a00

Photon_Realtime_Player_o *
UI_CharacterInfoPopup__OwnerPlayer(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  long lVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  UnityEngine_Object_o *x;
  
  if (DAT_057045a8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057045a8 = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar5 = (Photon_Realtime_Player_o *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pCVar2 = (__this->fields).Character;
    if (pCVar2 == (Characters_BaseCharacter_o *)0x0) {
LAB_04094aec:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pCVar2->fields).CustomDamage == '\0') {
      lVar3 = *(long *)&(pCVar2->fields).Dead;
      if (lVar3 == 0) {
        x = (UnityEngine_Object_o *)0x0;
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        x = *(UnityEngine_Object_o **)(lVar3 + 0x20);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      pPVar5 = (Photon_Realtime_Player_o *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pCVar2 = (__this->fields).Character;
        if (((pCVar2 == (Characters_BaseCharacter_o *)0x0) ||
            (lVar3 = *(long *)&(pCVar2->fields).Dead, lVar3 == 0)) ||
           (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) goto LAB_04094aec;
        pPVar5 = *(Photon_Realtime_Player_o **)(lVar3 + 0x80);
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
// 0x4095d90

void UI_CharacterInfoPopup___ctor(UI_CharacterInfoPopup_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  
  (__this->fields)._settingsNameColor.fields.r = 255.0;
  (__this->fields)._settingsNameColor.fields.g = 255.0;
  (__this->fields)._settingsNameColor.fields.b = 255.0;
  (__this->fields)._settingsNameColor.fields.a = 1.0;
  (__this->fields)._settingsBackgroundColor.fields.r = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.g = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.b = 0.0;
  (__this->fields)._settingsBackgroundColor.fields.a = 100.0;
  uVar1 = **(undefined8 **)(DAT_057110b0 + 0xb8);
  (__this->fields)._applyForceNameColor = (int)uVar1;
  (__this->fields)._settingsApplyToMe = (int)((ulong)uVar1 >> 0x20);
  il2cpp_runtime_glue(&(__this->fields)._applyForceNameColor);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


