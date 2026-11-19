// Type: UI.EmoteHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/EmoteHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs
// --------------------------------

// UI.EmoteHandler$$Awake
// il2cpp: void UI_EmoteHandler__Awake (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d1e380

void UI_EmoteHandler__Awake(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  UI_EmoteTextPopup_array *pUVar5;
  Il2CppClass **ppIVar6;
  GameManagers_InGameManager_o *pGVar7;
  GameManagers_InGameManager_c *pGVar8;
  UI_WheelPopup_c *pUVar9;
  MethodInfo *pMVar10;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UI_EmoteTextPopup_o *item;
  UI_EmoteEmojiPopup_o *item_00;
  UI_BasePopup_o *pUVar13;
  UnityEngine_Events_UnityAction_o *__this_00;
  int iVar14;
  
  if (Il2CppMethodInitialized_07547db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteEmojiPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteTextPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_Awake_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_EmoteEmojiPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_EmoteTextPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/EmoteTextPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/EmoteEmojiPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/WheelMenu");
    Il2CppMethodInitialized_07547db9 = '\x01';
  }
  iVar14 = 5;
  do {
    while( true ) {
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          (pUVar11,"Prefabs/InGame/EmoteTextPopup",false,
                           (MethodInfo_34D7620 *)
                           MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteTextPopup);
      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d1e734;
      item = UnityEngine_GameObject__GetComponent_object_
                       (pUVar12,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_EmoteTextPopup);
      pMVar10 = MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add;
      pSVar4 = (__this->fields)._emoteTextPopups;
      if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_05d1e734;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto label_05d1e734;
      uVar3 = (pSVar4->fields)._size;
      if (uVar3 < (uint)pUVar5->max_length) {
        (pSVar4->fields)._size = uVar3 + 1;
        pUVar5->m_Items[(int)uVar3] = item;
        Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
      }
      pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                          (pUVar11,"Prefabs/InGame/EmoteEmojiPopup",false,
                           (MethodInfo_34D7620 *)
                           MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteEmojiPopup);
      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05d1e734;
      item_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar12,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_EmoteEmojiPopup);
      pMVar10 = MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add;
      pSVar4 = (__this->fields)._emoteEmojiPopups;
      if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_05d1e734;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar4->fields)._items;
      if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto label_05d1e734;
      uVar3 = (pSVar4->fields)._size;
      if ((uint)pUVar5->max_length <= uVar3) break;
      (pSVar4->fields)._size = uVar3 + 1;
      pUVar5->m_Items[(int)uVar3] = (UI_EmoteTextPopup_o *)item_00;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3);
      iVar14 = iVar14 + -1;
      if (iVar14 == 0) goto label_05d1e5c7;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item_00,
               (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
label_05d1e5c7:
  pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar12 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                      (pUVar11,"Prefabs/InGame/WheelMenu",false,
                       (MethodInfo_34D7620 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup)
  ;
  if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
    pUVar13 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar12,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._emoteWheelPopup = pUVar13;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteWheelPopup);
    pUVar13 = (__this->fields)._emoteWheelPopup;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_EmoteHandler_Awake_b__16_0,
               (MethodInfo *)0x0);
    pUVar9 = TypeInfo_UI_WheelPopup;
    if (pUVar13 != (UI_BasePopup_o *)0x0) {
      bVar2 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if ((((pUVar13->klass->_2).typeHierarchyDepth < bVar2) ||
          (ppIVar6 = (pUVar13->klass->_2).typeHierarchy,
          ppIVar6[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) ||
         ((*(uint64_t *)((char *)pUVar13 + 0xc0)) =
               (System_Threading_CancellationTokenSource_o *)__this_00,
         ppIVar6[(ulong)bVar2 - 1] != (Il2CppClass *)pUVar9)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar13);
      }
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pUVar13 + 0xc0)));
      pGVar8 = TypeInfo_GameManagers_InGameManager;
      pGVar7 = (GameManagers_InGameManager_o *)
               TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar7 == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
label_05d1e71a:
        Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
        return;
      }
      bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar2 <= (pGVar7->klass->_2).typeHierarchyDepth) &&
         ((pGVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        (__this->fields)._inGameManager = pGVar7;
        if ((bVar2 <= (pGVar7->klass->_2).typeHierarchyDepth) &&
           ((pGVar7->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)pGVar8)) goto label_05d1e71a;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pGVar7,pGVar8);
    }
  }
label_05d1e734:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$OnEmoteTextRPC
// il2cpp: void UI_EmoteHandler__OnEmoteTextRPC (int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5d1e750

void UI_EmoteHandler__OnEmoteTextRPC
               (int32_t viewId,System_String_o *text,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  bool bVar6;
  Characters_BaseCharacter_o *character;
  UI_EmoteHandler_o *__this_00;
  System_String_o *text_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547dba = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).ShowEmotes, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
label_05d1e9c5:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._value != false) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
         (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05d1e9c5;
      bVar6 = System_Collections_Generic_HashSet_int___Contains
                        (__this,((info.fields.Sender)->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (!bVar6) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar4 = (character->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar5 = (pUVar4->fields).PhotonView, pPVar5 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_05d1e9c5;
        if (info.fields.Sender == (pPVar5->fields)._Owner_k__BackingField) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_05d1e9c5;
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar1,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            method_00 = (MethodInfo *)0x0;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar6) {
              text_00 = UI_EmoteHandler__SanitizeText(text,method_00);
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                UI_EmoteHandler__ShowEmoteText(__this_00,text_00,character,in_RCX);
                return;
              }
              goto label_05d1e9c5;
            }
          }
        }
      }
    }
  }
  return;
}


// UI.EmoteHandler$$OnEmoteEmojiRPC
// il2cpp: void UI_EmoteHandler__OnEmoteEmojiRPC (int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5d1eaa0

void UI_EmoteHandler__OnEmoteEmojiRPC
               (int32_t viewId,System_String_o *emoji,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_Collections_Generic_HashSet_int__o *__this;
  Utility_BaseComponentCache_o *pUVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  bool bVar6;
  Characters_BaseCharacter_o *character;
  UI_EmoteHandler_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547dbb = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).ShowEmotes, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
label_05d1ed0d:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._value != false) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      if ((info.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
         (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_05d1ed0d;
      bVar6 = System_Collections_Generic_HashSet_int___Contains
                        (__this,((info.fields.Sender)->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (!bVar6) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar4 = (character->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar5 = (pUVar4->fields).PhotonView, pPVar5 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_05d1ed0d;
        if (info.fields.Sender == (pPVar5->fields)._Owner_k__BackingField) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_05d1ed0d;
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar1,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar6) {
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                UI_EmoteHandler__ShowEmoteEmoji(__this_00,emoji,character,in_RCX);
                return;
              }
              goto label_05d1ed0d;
            }
          }
        }
      }
    }
  }
  return;
}


// UI.EmoteHandler$$ShowEmoteText
// il2cpp: void UI_EmoteHandler__ShowEmoteText (UI_EmoteHandler_o* __this, System_String_o* text, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d1ea40

void UI_EmoteHandler__ShowEmoteText
               (UI_EmoteHandler_o *__this,System_String_o *text,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  UI_EmoteTextPopup_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar2;
  
  pUVar1 = UI_EmoteHandler__GetAvailablePopup
                     (__this,(__this->fields)._emoteTextPopups,(MethodInfo *)character);
  UVar2 = UI_EmoteHandler__GetOffset(__this,character,method_00);
  if (pUVar1 == (UI_EmoteTextPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._62_Load.methodPtr)
            (pUVar1,text,3.0,character,UVar2,(pUVar1->klass->vtable)._62_Load.method);
  return;
}


// UI.EmoteHandler$$ShowEmoteEmoji
// il2cpp: void UI_EmoteHandler__ShowEmoteEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d1ed20

void UI_EmoteHandler__ShowEmoteEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  UI_EmoteTextPopup_c *pUVar2;
  UI_EmoteTextPopup_o *pUVar3;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  MethodInfo *method_01;
  UI_EmoteEmojiPopup_c **__this_00;
  UnityEngine_Vector3_o UVar4;
  
  method_00 = character;
  __this_00 = (UI_EmoteEmojiPopup_c **)__this;
  if (g_data_07547dbc == '\0') {
    __this_00 = &TypeInfo_UI_EmoteEmojiPopup;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EmoteEmojiPopup);
    g_data_07547dbc = '\x01';
    method_00 = extraout_RDX;
  }
  pUVar3 = UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_00,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  UVar4 = UI_EmoteHandler__GetOffset((UI_EmoteHandler_o *)__this_00,character,method_01);
  if (pUVar3 == (UI_EmoteTextPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = pUVar3->klass;
  bVar1 = (TypeInfo_UI_EmoteEmojiPopup->_2).typeHierarchyDepth;
  if (((pUVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_EmoteEmojiPopup)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
  }
  (*(pUVar2->vtable)._62_Load.methodPtr)(pUVar3,emoji,3.0,character,UVar4,(pUVar2->vtable)._62_Load.method);
  return;
}


// UI.EmoteHandler$$ShowVoiceEmoji
// il2cpp: void UI_EmoteHandler__ShowVoiceEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d1f200

void UI_EmoteHandler__ShowVoiceEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UI_EmoteTextPopup_o *pUVar6;
  UI_EmoteTextPopup_c *pUVar7;
  Characters_BaseCharacter_o *extraout_RDX;
  Characters_BaseCharacter_o *method_00;
  UI_EmoteEmojiPopup_c **__this_00;
  UnityEngine_Vector3_o UVar8;
  
  method_00 = character;
  __this_00 = (UI_EmoteEmojiPopup_c **)__this;
  if (g_data_07547dbd == '\0') {
    __this_00 = &TypeInfo_UI_EmoteEmojiPopup;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EmoteEmojiPopup);
    g_data_07547dbd = '\x01';
    method_00 = extraout_RDX;
  }
  pUVar6 = UI_EmoteHandler__GetAvailablePopup
                     ((UI_EmoteHandler_o *)__this_00,(__this->fields)._emoteEmojiPopups,
                      (MethodInfo *)method_00);
  if (pUVar6 == (UI_EmoteTextPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar7 = pUVar6->klass;
  bVar4 = (TypeInfo_UI_EmoteEmojiPopup->_2).typeHierarchyDepth;
  if (((pUVar7->_2).typeHierarchyDepth < bVar4) ||
     ((pUVar7->_2).typeHierarchy[(ulong)bVar4 - 1] != (Il2CppClass *)TypeInfo_UI_EmoteEmojiPopup)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
  }
  (pUVar6->fields).infinitePopup = true;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
    pUVar7 = pUVar6->klass;
  }
  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar2 = (pUVar5->upVector).fields.x;
  uVar3 = (pUVar5->upVector).fields.y;
  fVar1 = (pUVar5->upVector).fields.z;
  UVar8.fields.x = (float)uVar2 + (float)uVar2;
  UVar8.fields.y = (float)uVar3 + (float)uVar3;
  UVar8.fields.z = fVar1 + fVar1;
  (*(pUVar7->vtable)._62_Load.methodPtr)(pUVar6,emoji,0.1,character,UVar8,(pUVar7->vtable)._62_Load.method);
  return;
}


// UI.EmoteHandler$$StopInfinitePopup
// il2cpp: void UI_EmoteHandler__StopInfinitePopup (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d1f2f0
// eh: try 0x5d1f383..0x5d1f3c1 -> pad 0x5d1f3c8 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1f3e0..0x5d1f3e5 -> pad 0x5d1f404 cleanup
// eh: try 0x5d1f407..0x5d1f411 -> pad 0x5d1f419 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1f37d: nop dword ptr [rax]
// asm:   0x5d1f3c6: jmp 0x5d1f3c8
// asm:   0x5d1f3c8: mov rbx, rax
// asm:   0x5d1f3cb: cmp edx, 1
// asm:   0x5d1f3ce: jne 0x5d1f407
// asm:   0x5d1f3d0: mov rdi, rbx
// asm:   0x5d1f3d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1f3d8: mov rbx, qword ptr [rax]
// asm:   0x5d1f3db: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d1f3e0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1f3e5: lea rax, [rip + 0x156e83c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x5d1f3ec: mov rsi, qword ptr [rax]
// asm:   0x5d1f3ef: mov rdi, rsp
// asm:   0x5d1f3f2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1f3f7: test rbx, rbx
// asm:   0x5d1f3fa: je 0x5d1f3b4
// asm:   0x5d1f3fc: mov rdi, rbx
// asm:   0x5d1f3ff: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1f404: mov rbx, rax
// asm:   0x5d1f407: lea rdi, [rsp + 0x18]
// asm:   0x5d1f40c: call 0x2fdbf20  ; il2cpp_runtime_helper_02fdbf20()
// asm:   0x5d1f411: mov rdi, rbx
// asm:   0x5d1f414: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1f419: mov rdi, rax
// asm:   0x5d1f41c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_EmoteHandler__StopInfinitePopup(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EmoteTextPopup__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07547dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    Il2CppMethodInitialized_07547dbe = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emoteEmojiPopups;
  if (__this_00 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
      return;
    }
    if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
    *(undefined1 *)((long)&SStack_38.fields._current[0xd].monitor + 4) = 0;
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetOffset
// il2cpp: UnityEngine_Vector3_o UI_EmoteHandler__GetOffset (UI_EmoteHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5d1ef70

UnityEngine_Vector3_o
UI_EmoteHandler__GetOffset(UI_EmoteHandler_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  Characters_BaseCharacter_c *pCVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  
  if (Il2CppMethodInitialized_07547dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_07547dbf = '\x01';
  }
  if (character == (Characters_BaseCharacter_o *)0x0) {
label_05d1f039:
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  }
  pCVar13 = character->klass;
  bVar10 = (pCVar13->_2).typeHierarchyDepth;
  bVar11 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar11 <= bVar10) &&
     ((pCVar13->_2).typeHierarchy[(ulong)bVar11 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar2 = (pUVar12->upVector).fields.x;
    uVar6 = (pUVar12->upVector).fields.y;
    UVar17.fields.x = (float)uVar2 * 4.0;
    UVar17.fields.y = (float)uVar6 * 4.0;
    UVar17.fields.z = (pUVar12->upVector).fields.z * 4.0;
    return (UnityEngine_Vector3_o)UVar17.fields;
  }
  bVar11 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
  if ((bVar10 < bVar11) ||
     ((pCVar13->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_BasicTitan)) {
    bVar11 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar10 < bVar11) ||
       ((pCVar13->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter))
    goto label_05d1f039;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
      pCVar13 = character->klass;
      bVar10 = (pCVar13->_2).typeHierarchyDepth;
      bVar11 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    }
    if ((bVar10 < bVar11) ||
       ((pCVar13->_2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
      il2cpp_codegen_raise_invalid_cast_exception(character);
    }
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar4 = (pUVar12->upVector).fields.x;
    uVar8 = (pUVar12->upVector).fields.y;
    fVar15 = (float)uVar4 * 70.0;
    fVar16 = (float)uVar8 * 70.0;
    fVar14 = (pUVar12->upVector).fields.z * 70.0;
  }
  else if ((*(uint8_t *)((char *)character + 0x2b0)) == false) {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5 = (pUVar12->upVector).fields.x;
    uVar9 = (pUVar12->upVector).fields.y;
    fVar14 = (pUVar12->upVector).fields.z * 25.0;
    fVar15 = (float)uVar5 * 25.0;
    fVar16 = (float)uVar9 * 25.0;
  }
  else {
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar3 = (pUVar12->upVector).fields.x;
    uVar7 = (pUVar12->upVector).fields.y;
    fVar14 = (pUVar12->upVector).fields.z * 15.0;
    fVar15 = (float)uVar3 * 15.0;
    fVar16 = (float)uVar7 * 15.0;
  }
  fVar1 = *(float *)((long)&(*(uint64_t *)((char *)character + 0x138)) + 4);
  UVar18.fields.z = fVar14 * fVar1;
  UVar18.fields.x = fVar1 * fVar15;
  UVar18.fields.y = fVar1 * fVar16;
  return (UnityEngine_Vector3_o)UVar18.fields;
}


// UI.EmoteHandler$$ToggleEmoteWheel
// il2cpp: void UI_EmoteHandler__ToggleEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d1f430

void UI_EmoteHandler__ToggleEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_EmoteHandler__SetEmoteWheel(__this,(__this->fields).IsActive == false,in_RDX);
  return;
}


// UI.EmoteHandler$$SetEmoteWheel
// il2cpp: void UI_EmoteHandler__SetEmoteWheel (UI_EmoteHandler_o* __this, bool enable, const MethodInfo* method);
// 0x5d1f440

void UI_EmoteHandler__SetEmoteWheel(UI_EmoteHandler_o *__this,bool enable,MethodInfo *method)

{
  byte bVar1;
  Settings_InputSettings_o *pSVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  UI_WheelPopup_o *__this_00;
  UI_BasePopup_o *pUVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  UI_WheelPopup_c **method_00;
  undefined1 auVar7 [16];
  
  method_00 = (UI_WheelPopup_c **)__this;
  if (Il2CppMethodInitialized_07547dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    method_00 = &TypeInfo_UI_WheelPopup;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_07547dc0 = '\x01';
  }
  if (enable) {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)method_00);
    if (bVar6) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Interaction, pSVar3 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).EmoteMenu, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      __this_00 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
      auVar7 = (undefined1  [16])
               (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      options = UI_EmoteHandler__GetEmoteWheelOptions
                          (__this,(__this->fields)._currentEmoteWheelState,auVar7._8_8_);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07547dc2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"Common.Emotes");
        Il2CppMethodInitialized_07547dc2 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.Emotes",(MethodInfo *)0x0);
      if (__this_00 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup))
        {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        UI_WheelPopup__Show(__this_00,auVar7._0_8_,options,__this_01,title,true,(MethodInfo *)0x0);
        bVar6 = true;
        goto label_05d1f5ed;
      }
    }
  }
  else {
    pUVar5 = (__this->fields)._emoteWheelPopup;
    if (pUVar5 != (UI_BasePopup_o *)0x0) {
      (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
      bVar6 = false;
label_05d1f5ed:
      (__this->fields).IsActive = bVar6;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$NextEmoteWheel
// il2cpp: void UI_EmoteHandler__NextEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d1fe20

void UI_EmoteHandler__NextEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_BasePopup_o *__this_00;
  Settings_InputSettings_o *pSVar2;
  Settings_InteractionInputSettings_o *pSVar3;
  Settings_KeybindSetting_o *pSVar4;
  UI_WheelPopup_o *__this_01;
  bool bVar5;
  int iVar6;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *title;
  int iVar7;
  undefined1 auVar8 [16];
  
  if (Il2CppMethodInitialized_07547dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_NextEmoteWheel_b__26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_07547dc1 = '\x01';
  }
  __this_00 = (__this->fields)._emoteWheelPopup;
  if ((__this_00 != (UI_BasePopup_o *)0x0) &&
     (__this_02 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_02 != (UnityEngine_GameObject_o *)0x0)) {
    bVar5 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
    if ((!bVar5) || ((__this->fields).IsActive == false)) {
      return;
    }
    iVar6 = (__this->fields)._currentEmoteWheelState + 1;
    iVar7 = 0;
    if (iVar6 < 3) {
      iVar7 = iVar6;
    }
    (__this->fields)._currentEmoteWheelState = iVar7;
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Interaction, pSVar3 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).EmoteMenu, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      __this_01 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
      auVar8 = (undefined1  [16])
               (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                         (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      options = UI_EmoteHandler__GetEmoteWheelOptions
                          (__this,(__this->fields)._currentEmoteWheelState,auVar8._8_8_);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_03,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_EmoteHandler_NextEmoteWheel_b__26_0,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07547dc2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"Common.Emotes");
        Il2CppMethodInitialized_07547dc2 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                        ("Common.Emotes",(MethodInfo *)0x0);
      if (__this_01 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup))
        {
          il2cpp_codegen_raise_invalid_cast_exception(__this_01);
        }
        UI_WheelPopup__Show(__this_01,auVar8._0_8_,options,__this_03,title,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetEmoteWheelTitle
// il2cpp: System_String_o* UI_EmoteHandler__GetEmoteWheelTitle (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d1fdc0

System_String_o * UI_EmoteHandler__GetEmoteWheelTitle(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Emotes");
    Il2CppMethodInitialized_07547dc2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Emotes",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.EmoteHandler$$OnEmoteWheelSelect
// il2cpp: void UI_EmoteHandler__OnEmoteWheelSelect (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d20000

void UI_EmoteHandler__OnEmoteWheelSelect(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  int iVar2;
  GameManagers_InGameManager_o *pGVar3;
  UI_BasePopup_o *pUVar4;
  Characters_BaseCharacter_o *x;
  Settings_EmoteSettings_o *pSVar5;
  Settings_ListSetting_StringSetting__o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  UI_BaseMenu_o *pUVar9;
  bool bVar10;
  Settings_BaseSetting_o *pSVar11;
  System_Object_array *parameters;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  System_String_o **ppSVar14;
  System_Collections_Generic_List_string__o *pSVar15;
  System_String_o *pSVar16;
  Il2CppObject *pIVar17;
  Photon_Pun_PhotonView_o *__this_00;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07547dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteEmojiRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"EmoteTextRPC");
    Il2CppMethodInitialized_07547dc3 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if ((__this->fields)._currentEmoteCooldown <= 0.0) {
      (__this->fields)._currentEmoteCooldown = 3.0;
      goto label_05d200e9;
    }
    goto label_05d2051c;
  }
label_05d200e9:
  pGVar3 = (__this->fields)._inGameManager;
  if ((pGVar3 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar4 = (__this->fields)._emoteWheelPopup, pUVar4 == (UI_BasePopup_o *)0x0)) goto label_05d205a2;
  bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
  if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup))
  goto label_05d205a7;
  x = (pGVar3->fields).CurrentCharacter;
  index = *(int32_t *)((long)&(*(uint64_t *)((char *)pUVar4 + 0xb0)) + 4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    iVar2 = (__this->fields)._currentEmoteWheelState;
    if (iVar2 == 2) {
      if (x == (Characters_BaseCharacter_o *)0x0) goto label_05d205a2;
      pSVar15 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                          (x,(x->klass->vtable)._59_get_EmoteActions.method);
      if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d205a2;
      if (index < (pSVar15->fields)._size) {
        pSVar15 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                            (x,(x->klass->vtable)._59_get_EmoteActions.method);
        if (pSVar15 == (System_Collections_Generic_List_string__o *)0x0) goto label_05d205a2;
        pSVar16 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar15,index,
                             (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
        ;
        (*(x->klass->vtable)._80_Emote.methodPtr)(x,pSVar16,(x->klass->vtable)._80_Emote.method);
      }
    }
    else {
      if (iVar2 == 1) {
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
        if ((pSVar5 == (Settings_EmoteSettings_o *)0x0) ||
           (pSVar6 = (pSVar5->fields).EmojiEmotes, pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0))
        goto label_05d205a2;
        pSVar11 = Settings_ListSetting_object___GetItemAt
                            ((Settings_ListSetting_T__o *)pSVar6,index,
                             (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
        if (pSVar11 == (Settings_BaseSetting_o *)0x0) goto label_05d205a2;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
label_05d205ac:
          il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
        }
        pIVar17 = (*(uint64_t *)((char *)pSVar11 + 0x20));
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if ((x == (Characters_BaseCharacter_o *)0x0) ||
           ((pUVar7 = (x->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0 ||
            (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 == (Photon_Pun_PhotonView_o *)0x0))))
        goto label_05d205a2;
        iStack_30 = (pPVar8->fields).viewIdField;
        pIVar12 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
        if (parameters == (System_Object_array *)0x0) goto label_05d205a2;
        if (pIVar12 != (Il2CppObject *)0x0) {
          pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((parameters->obj).klass)->_1).element_class);
          if (pIVar13 == (Il2CppObject *)0x0) goto label_05d205b9;
        }
        if ((int)parameters->max_length == 0) {
label_05d205b4:
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar12;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (pIVar17 != (Il2CppObject *)0x0) {
          pIVar12 = il2cpp_vm_Object_IsInst(pIVar17,(((parameters->obj).klass)->_1).element_class);
          if (pIVar12 == (Il2CppObject *)0x0) {
label_05d205b9:
            pIVar17 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar17,(MethodInfo *)0x0);
          }
        }
        if ((parameters->max_length & 0xfffffffe) == 0) goto label_05d205b4;
        parameters->m_Items[1] = pIVar17;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
        if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05d205a2;
        ppSVar14 = &"EmoteEmojiRPC";
      }
      else {
        if (iVar2 != 0) goto label_05d2051c;
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
        if ((pSVar5 == (Settings_EmoteSettings_o *)0x0) ||
           (pSVar6 = (pSVar5->fields).TextEmotes, pSVar6 == (Settings_ListSetting_StringSetting__o *)0x0))
        goto label_05d205a2;
        pSVar11 = Settings_ListSetting_object___GetItemAt
                            ((Settings_ListSetting_T__o *)pSVar6,index,
                             (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt);
        if (pSVar11 == (Settings_BaseSetting_o *)0x0) goto label_05d205a2;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05d205ac;
        pIVar17 = (*(uint64_t *)((char *)pSVar11 + 0x20));
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (((x == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar7 = (x->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_05d205a2;
        iStack_2c = (pPVar8->fields).viewIdField;
        pIVar12 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
        if (parameters == (System_Object_array *)0x0) goto label_05d205a2;
        if (pIVar12 != (Il2CppObject *)0x0) {
          pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((parameters->obj).klass)->_1).element_class);
          if (pIVar13 == (Il2CppObject *)0x0) goto label_05d205b9;
        }
        if ((int)parameters->max_length == 0) goto label_05d205b4;
        parameters->m_Items[0] = pIVar12;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (pIVar17 != (Il2CppObject *)0x0) {
          pIVar12 = il2cpp_vm_Object_IsInst(pIVar17,(((parameters->obj).klass)->_1).element_class);
          if (pIVar12 == (Il2CppObject *)0x0) goto label_05d205b9;
        }
        if ((parameters->max_length & 0xfffffffe) == 0) goto label_05d205b4;
        parameters->m_Items[1] = pIVar17;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
        if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05d205a2;
        ppSVar14 = &"EmoteTextRPC";
      }
      Photon_Pun_PhotonView__RPC(__this_00,*ppSVar14,0,parameters,(MethodInfo *)0x0);
    }
  }
label_05d2051c:
  pUVar4 = (__this->fields)._emoteWheelPopup;
  if (pUVar4 != (UI_BasePopup_o *)0x0) {
    (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar9 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar9 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if ((bVar1 <= (pUVar9->klass->_2).typeHierarchyDepth) &&
         ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        *(undefined1 *)&(*(uint64_t *)((char *)pUVar9 + 0x158)) = 1;
        return;
      }
label_05d205a7:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
label_05d205a2:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetEmoteWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_EmoteHandler__GetEmoteWheelOptions (UI_EmoteHandler_o* __this, int32_t state, const MethodInfo* method);
// 0x5d1f880
// eh: try 0x5d1fa2f..0x5d1fd23 -> pad 0x5d1fd63 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1fd4d..0x5d1fd52 -> pad 0x5d1fd54 cleanup
// eh: try 0x5d1fd57..0x5d1fd61 -> pad 0x5d1fdb8 catch (...) [compiler noexcept guard]
// eh: try 0x5d1fd7b..0x5d1fd80 -> pad 0x5d1fda3 cleanup
// eh: try 0x5d1fda6..0x5d1fdb0 -> pad 0x5d1fdb8 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1fa0c: lea r14, [rip + 0x156f11d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext
// asm:   0x5d1fa13: mov rbp, rsp
// asm:   0x5d1fa16: lea r15, [rip + 0x1576f3b]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5d1fa1d: jmp 0x5d1fa3a
// asm:   0x5d1fb3d: lea r14, [rip + 0x156efec]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext
// asm:   0x5d1fb44: mov rbp, rsp
// asm:   0x5d1fb47: lea r15, [rip + 0x1576e0a]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5d1fb4e: jmp 0x5d1fb67
// asm:   0x5d1fd23: jmp 0x5d1fd63
// asm:   0x5d1fd25: jmp 0x5d1fd35
// asm:   0x5d1fd27: jmp 0x5d1fd63
// asm:   0x5d1fd29: jmp 0x5d1fd35
// asm:   0x5d1fd2b: jmp 0x5d1fd63
// asm:   0x5d1fd2d: jmp 0x5d1fd63
// asm:   0x5d1fd2f: jmp 0x5d1fd35
// asm:   0x5d1fd31: jmp 0x5d1fd35
// asm:   0x5d1fd33: jmp 0x5d1fd63
// asm:   0x5d1fd35: mov r14, rax
// asm:   0x5d1fd38: cmp edx, 1
// asm:   0x5d1fd3b: jne 0x5d1fd57
// asm:   0x5d1fd3d: mov rdi, r14
// asm:   0x5d1fd40: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1fd45: mov rbp, qword ptr [rax]
// asm:   0x5d1fd48: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5d1fd4d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1fd52: jmp 0x5d1fd80
// asm:   0x5d1fd54: mov r14, rax
// asm:   0x5d1fd57: lea rdi, [rsp + 0x20]
// asm:   0x5d1fd5c: call 0x2fdbf80  ; il2cpp_runtime_helper_02fdbf80()
// asm:   0x5d1fd61: jmp 0x5d1fdb0
// asm:   0x5d1fd63: mov r14, rax
// asm:   0x5d1fd66: cmp edx, 1
// asm:   0x5d1fd69: jne 0x5d1fda6
// asm:   0x5d1fd6b: mov rdi, r14
// asm:   0x5d1fd6e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1fd73: mov rbp, qword ptr [rax]
// asm:   0x5d1fd76: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5d1fd7b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1fd80: lea rax, [rip + 0x156eda1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x5d1fd87: mov rsi, qword ptr [rax]
// asm:   0x5d1fd8a: mov rdi, rsp
// asm:   0x5d1fd8d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1fd92: test rbp, rbp
// asm:   0x5d1fd95: je 0x5d1fcf0
// asm:   0x5d1fd9b: mov rdi, rbp
// asm:   0x5d1fd9e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1fda3: mov r14, rax
// asm:   0x5d1fda6: lea rdi, [rsp + 0x20]
// asm:   0x5d1fdab: call 0x2fdbf50  ; il2cpp_runtime_helper_02fdbf50()
// asm:   0x5d1fdb0: mov rdi, r14
// asm:   0x5d1fdb3: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1fdb8: mov rdi, rax
// asm:   0x5d1fdbb: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_string__o *
UI_EmoteHandler__GetEmoteWheelOptions(UI_EmoteHandler_o *__this,int32_t state,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_EmoteSettings_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_String_array *pSVar6;
  Il2CppClass *item;
  GameManagers_InGameManager_o *pGVar7;
  Characters_BaseCharacter_o *pCVar8;
  bool bVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  System_String_o *item_00;
  System_Converter_TInput__TOutput__o *__this_00;
  MethodInfo *pMVar11;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_07547dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Converter_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_ActionLabel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ConvertAll_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_07547dc4 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (state == 1) {
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar10,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
    if (((pSVar3 != (Settings_EmoteSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).EmojiEmotes, pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
       pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar5,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator)
      ;
      local_58.fields._current = local_28;
      local_58.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      local_58.fields._index = local_38._8_4_;
      local_58.fields._version = local_38._12_4_;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = &local_58;
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
        local_38._8_8_ = &local_58;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (bVar9) {
          if (local_58.fields._current != (Il2CppObject *)0x0) {
label_05d1fd10:
            ThrowNullReferenceException();
          }
label_05d1fd0b:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_58,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext
                                 ), pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add, bVar9) {
          if (local_58.fields._current == (Il2CppObject *)0x0) goto label_05d1fd0b;
          item = local_58.fields._current[2].klass;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar10->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) goto label_05d1fd10;
          uVar2 = (pSVar10->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (pSVar10->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = (System_String_o *)item;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
          }
        }
      }
label_05d1fcde:
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
      return pSVar10;
    }
  }
  else if (state == 0) {
    pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar10,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
    if (((pSVar3 != (Settings_EmoteSettings_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).TextEmotes, pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar5 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
       pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar5,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator)
      ;
      local_58.fields._current = local_28;
      local_58.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      local_58.fields._index = local_38._8_4_;
      local_58.fields._version = local_38._12_4_;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = &local_58;
      if (pSVar10 == (System_Collections_Generic_List_string__o *)0x0) {
        pMVar11 = MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext;
        local_38._8_8_ = &local_58;
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (bVar9) {
          if (local_58.fields._current != (Il2CppObject *)0x0) {
            UI_EmoteHandler__SanitizeText((System_String_o *)local_58.fields._current[2].klass,pMVar11);
label_05d1fd1e:
            ThrowNullReferenceException();
          }
label_05d1fcc3:
          ThrowNullReferenceException();
        }
      }
      else {
        while (pMVar11 = MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext,
              bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (&local_58,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext)
              , bVar9) {
          if (local_58.fields._current == (Il2CppObject *)0x0) goto label_05d1fcc3;
          item_00 = UI_EmoteHandler__SanitizeText
                              ((System_String_o *)local_58.fields._current[2].klass,pMVar11);
          pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar10->fields)._items;
          if (pSVar6 == (System_String_array *)0x0) goto label_05d1fd1e;
          uVar2 = (pSVar10->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (pSVar10->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = item_00;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)item_00,
                       (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
          }
        }
      }
      goto label_05d1fcde;
    }
  }
  else {
    pGVar7 = (__this->fields)._inGameManager;
    if (pGVar7 != (GameManagers_InGameManager_o *)0x0) {
      pCVar8 = (pGVar7->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        pSVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)pSVar10,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        return pSVar10;
      }
      pGVar7 = (__this->fields)._inGameManager;
      if ((pGVar7 != (GameManagers_InGameManager_o *)0x0) &&
         (pCVar8 = (pGVar7->fields).CurrentCharacter, pCVar8 != (Characters_BaseCharacter_o *)0x0)) {
        pSVar10 = (*(pCVar8->klass->vtable)._59_get_EmoteActions.methodPtr)
                            (pCVar8,(pCVar8->klass->vtable)._59_get_EmoteActions.method);
        __this_00 = (System_Converter_TInput__TOutput__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_string);
        System_Converter_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)MethodInfo_UI_EmoteHandler_ActionLabel,
                   (MethodInfo_494A3F0 *)0x0);
        if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
          pSVar10 = (System_Collections_Generic_List_string__o *)
                    System_Collections_Generic_List_object___ConvertAll_object_
                              ((System_Collections_Generic_List_object__o *)pSVar10,
                               (System_Converter_T__TOutput__o *)__this_00,
                               (MethodInfo_31D7BB0 *)
                               MethodInfo_System_Collections_Generic_List_string_ConvertAll_string);
          return pSVar10;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$ActionLabel
// il2cpp: System_String_o* UI_EmoteHandler__ActionLabel (System_String_o* action, const MethodInfo* method);
// 0x5d205d0

System_String_o * UI_EmoteHandler__ActionLabel(System_String_o *action,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547dc5 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("InGame","Emote",action,"",action,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.EmoteHandler$$GetAvailablePopup
// il2cpp: UI_EmoteTextPopup_o* UI_EmoteHandler__GetAvailablePopup (UI_EmoteHandler_o* __this, System_Collections_Generic_List_EmoteTextPopup__o* popups, const MethodInfo* method);
// 0x5d1edd0
// eh: try 0x5d1ee74..0x5d1eefd -> pad 0x5d1ef0a (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d1ef22..0x5d1ef27 -> pad 0x5d1ef46 cleanup
// eh: try 0x5d1ef49..0x5d1ef53 -> pad 0x5d1ef5b catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1ef02: jmp 0x5d1ef0a
// asm:   0x5d1ef04: jmp 0x5d1ef0a
// asm:   0x5d1ef06: jmp 0x5d1ef0a
// asm:   0x5d1ef08: jmp 0x5d1ef0a
// asm:   0x5d1ef0a: mov rbx, rax
// asm:   0x5d1ef0d: cmp edx, 1
// asm:   0x5d1ef10: jne 0x5d1ef49
// asm:   0x5d1ef12: mov rdi, rbx
// asm:   0x5d1ef15: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d1ef1a: mov rbx, qword ptr [rax]
// asm:   0x5d1ef1d: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5d1ef22: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d1ef27: lea rax, [rip + 0x156ecfa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x5d1ef2e: mov rsi, qword ptr [rax]
// asm:   0x5d1ef31: mov rdi, rsp
// asm:   0x5d1ef34: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d1ef39: test rbx, rbx
// asm:   0x5d1ef3c: je 0x5d1eecd
// asm:   0x5d1ef3e: mov rdi, rbx
// asm:   0x5d1ef41: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d1ef46: mov rbx, rax
// asm:   0x5d1ef49: lea rdi, [rsp + 0x18]
// asm:   0x5d1ef4e: call 0x2fdbfb0  ; il2cpp_runtime_helper_02fdbfb0()
// asm:   0x5d1ef53: mov rdi, rbx
// asm:   0x5d1ef56: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d1ef5b: mov rdi, rax
// asm:   0x5d1ef5e: call 0x2ab61e0  ; __clang_call_terminate()

UI_EmoteTextPopup_o *
UI_EmoteHandler__GetAvailablePopup
          (UI_EmoteHandler_o *__this,System_Collections_Generic_List_EmoteTextPopup__o *popups,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_EmoteTextPopup_o *pUVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07547dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_get_Item);
    Il2CppMethodInitialized_07547dc6 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (popups == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)popups,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    pIVar1 = local_48.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
      pUVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)popups,0,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_EmoteTextPopup_get_Item);
      return pUVar3;
    }
    if ((UI_EmoteTextPopup_o *)local_48.fields._current == (UI_EmoteTextPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_48.fields._current,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  } while (bVar2);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
  return (UI_EmoteTextPopup_o *)pIVar1;
}


// UI.EmoteHandler$$UpdatePopup
// il2cpp: void UI_EmoteHandler__UpdatePopup (UI_EmoteHandler_o* __this, UI_EmoteTextPopup_o* popup, bool inMenu, const MethodInfo* method);
// 0x5d20660
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d206d8: xorps xmm0, xmm0
// asm:   0x5d206db: ucomiss xmm0, xmm1
// asm:   0x5d206de: jb 0x5d20709
// asm:   0x5d206e0: jmp 0x5d2073d
// asm:   0x5d20b35: jmp 0x5d20c23

void UI_EmoteHandler__UpdatePopup
               (UI_EmoteHandler_o *__this,UI_EmoteTextPopup_o *popup,bool inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Cameras_BaseCamera_o *pCVar5;
  Characters_BaseCharacter_o *pCVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Camera_o *pUVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  int32_t layerMask;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  _func_8 *vtableDispatch;
  MethodInfo *pMVar14;
  Il2CppClass *klass;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar16;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o origin;
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  undefined8 local_78;
  undefined1 local_40 [12];
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547dc7 = '\x01';
  }
  if (popup == (UI_EmoteTextPopup_o *)0x0) goto label_05d20d19;
  pCVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  fVar15 = (popup->fields).ShowTimeLeft;
  if ((popup->fields).infinitePopup == false) {
    fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar15 = fVar15 - fVar17;
    (popup->fields).ShowTimeLeft = fVar15;
  }
  if ((0.0 < fVar15) && (uVar16 = 0, !inMenu)) {
    pCVar6 = (popup->fields).Character;
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar11) {
      pCVar6 = (popup->fields).Character;
      if (((pCVar6 == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar7 = (pCVar6->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar13 = (pUVar7->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05d20d19;
      UVar22 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      if (((pCVar5 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar7 = (pCVar5->fields).Cache, pUVar7 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pUVar13 = (pUVar7->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05d20d19;
      uVar1 = (popup->fields).Offset.fields.x;
      uVar3 = (popup->fields).Offset.fields.y;
      position.fields.z = UVar22.fields.z + (popup->fields).Offset.fields.z;
      UVar23 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e7b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7b7 = '\x01';
      }
      local_78._0_4_ = UVar22.fields.x;
      local_78._4_4_ = UVar22.fields.y;
      local_78._0_4_ = (float)local_78 + (float)uVar1;
      local_78._4_4_ = local_78._4_4_ + (float)uVar3;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar15 = UVar23.fields.y - local_78._4_4_;
      fVar17 = UVar23.fields.z - position.fields.z;
      fVar19 = UVar23.fields.x - (float)local_78;
      fVar15 = fVar15 * fVar15 + fVar19 * fVar19 + fVar17 * fVar17;
      if (fVar15 < 0.0) {
        fVar15 = sqrtf(fVar15);
      }
      else {
        fVar15 = SQRT(fVar15);
      }
      if (500.0 < fVar15) {
        (*(popup->klass->vtable)._22_Hide.methodPtr)(popup,(popup->klass->vtable)._22_Hide.method);
        __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          bVar11 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
          if (!bVar11) {
            return;
          }
          pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
          pUVar8 = (pCVar5->fields).Camera;
          if ((pUVar8 != (UnityEngine_Camera_o *)0x0) &&
             (position.fields.x = (float)local_78, position.fields.y = local_78._4_4_,
             UVar22 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar8,position,(MethodInfo *)0x0),
             pUVar13 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_position(pUVar13,UVar22,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_05d20d19;
      }
      pUVar7 = (pCVar5->fields).Cache;
      if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar13 = (pUVar7->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05d20d19;
      UVar22 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72d = '\x01';
      }
      local_40._0_4_ = 0.0;
      local_40._4_4_ = 0.0;
      if (Il2CppMethodInitialized_0753e729 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e729 = '\x01';
      }
      auVar20._0_4_ = (float)local_78 - UVar22.fields.x;
      auVar20._4_4_ = local_78._4_4_ - UVar22.fields.y;
      auVar20._8_4_ = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
      auVar20._12_4_ = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
      fVar17 = position.fields.z - UVar22.fields.z;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      fVar19 = fVar17 * fVar17 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
        uVar16 = extraout_XMM0_Db;
        if (1e-05 < fVar19) goto label_05d20a5b;
label_05d20987:
        pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar17 = (pUVar12->zeroVector).fields.z;
      }
      else {
        fVar19 = SQRT(fVar19);
        if (fVar19 <= 1e-05) goto label_05d20987;
label_05d20a5b:
        fVar17 = fVar17 / fVar19;
        auVar9._4_4_ = fVar19;
        auVar9._0_4_ = fVar19;
        auVar9._8_4_ = uVar16;
        auVar9._12_4_ = uVar16;
        auVar20 = divps(auVar20,auVar9);
        local_40._0_4_ = auVar20._0_4_;
        local_40._4_4_ = auVar20._4_4_;
        pUVar12 = (UnityEngine_Vector3_StaticFields *)local_40;
      }
      pUVar7 = (pCVar5->fields).Cache;
      if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar13 = (pUVar7->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0)) goto label_05d20d19;
      uVar2 = (pUVar12->zeroVector).fields.x;
      uVar4 = (pUVar12->zeroVector).fields.y;
      UVar23.fields.y = (float)uVar4;
      UVar23.fields.x = (float)uVar2;
      UVar22 = UnityEngine_Transform__get_forward(pUVar13,(MethodInfo *)0x0);
      fVar18 = UVar22.fields.z;
      unique0x10000292 = extraout_XMM0_Dc_01;
      unique0x1000028a = UVar22.fields._0_8_;
      unique0x10000296 = extraout_XMM0_Dd_01;
      fVar19 = UVar22.fields.x;
      fVar21 = UVar22.fields.y;
      if (Il2CppMethodInitialized_075450a4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_075450a4 = '\x01';
        fVar19 = (float)local_40._8_4_;
        fVar21 = fStack_34;
      }
      fVar21 = fVar18 * fVar18 + fVar21 * fVar21 + fVar19 * fVar19;
      fVar19 = fVar17 * fVar17 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        if (fVar19 * fVar21 < 0.0) goto label_05d20b7a;
label_05d20b24:
        fVar19 = SQRT(fVar19 * fVar21);
        klass = (Il2CppClass *)TypeInfo_System_Math;
      }
      else {
        if (0.0 <= fVar19 * fVar21) goto label_05d20b24;
label_05d20b7a:
        fVar19 = sqrtf(fVar19 * fVar21);
        klass = (Il2CppClass *)TypeInfo_System_Math;
      }
      TypeInfo_System_Math = (System_Math_c *)klass;
      if (1e-15 <= fVar19) {
        fVar19 = (fVar18 * fVar17 + fStack_34 * (float)uVar4 + (float)local_40._8_4_ * (float)uVar2) / fVar19;
        fVar21 = 1.0;
        if (fVar19 <= 1.0) {
          fVar21 = fVar19;
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        dVar10 = acos((double)(float)(~-(uint)(-1.0 <= fVar19) & 0xbf800000 |
                                     (uint)fVar21 & -(uint)(-1.0 <= fVar19)),(MethodInfo *)klass);
        if (90.0 < (float)dVar10 * 57.29578) goto label_05d2073d;
      }
      pCVar6 = (popup->fields).Character;
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_05d20d19;
      bVar11 = Characters_BaseCharacter__IsMainCharacter(pCVar6,(MethodInfo *)0x0);
      if (!bVar11) {
        pUVar7 = (pCVar5->fields).Cache;
        if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
           (pUVar13 = (pUVar7->fields).Transform, pUVar13 == (UnityEngine_Transform_o *)0x0))
        goto label_05d20d19;
        UVar22 = UnityEngine_Transform__get_position(pUVar13,(MethodInfo *)0x0);
        local_40._8_4_ = UVar22.fields.z;
        layerMask = UnityEngine_LayerMask__op_Implicit
                              ((UnityEngine_LayerMask_o)(__this->fields).CullMask.fields.m_Mask,
                               (MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        origin.fields.z = (float)local_40._8_4_;
        origin.fields.x = UVar22.fields.x;
        origin.fields.y = UVar22.fields.y;
        UVar23.fields.z = fVar17;
        bVar11 = UnityEngine_Physics__Raycast_69d96f0(origin,UVar23,fVar15,layerMask,(MethodInfo *)0x0);
        if (bVar11) goto label_05d2073d;
      }
      pUVar8 = (pCVar5->fields).Camera;
      if (pUVar8 == (UnityEngine_Camera_o *)0x0) {
label_05d20d19:
        ThrowNullReferenceException();
      }
      UVar22.fields.z = position.fields.z;
      UVar22.fields.x = (float)local_78;
      UVar22.fields.y = local_78._4_4_;
      UVar22 = UnityEngine_Camera__WorldToScreenPoint_68c0c30(pUVar8,UVar22,(MethodInfo *)0x0);
      pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_05d20d19;
      UnityEngine_Transform__set_position(pUVar13,UVar22,(MethodInfo *)0x0);
      vtableDispatch = (popup->klass->vtable)._21_Show.methodPtr;
      pMVar14 = (popup->klass->vtable)._21_Show.method;
      goto label_05d2074e;
    }
  }
label_05d2073d:
  vtableDispatch = (popup->klass->vtable)._58_HideImmediate.methodPtr;
  pMVar14 = (popup->klass->vtable)._58_HideImmediate.method;
label_05d2074e:
  (*vtableDispatch)(popup,pMVar14);
  return;
}


// UI.EmoteHandler$$LateUpdate
// il2cpp: void UI_EmoteHandler__LateUpdate (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d20d20
// eh: try 0x5d20e64..0x5d20eef -> pad 0x5d20f6c (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5d20f39..0x5d20f3e -> pad 0x5d20f5f cleanup
// eh: try 0x5d20f62..0x5d20f6a -> pad 0x5d20fc0 catch (...) [compiler noexcept guard]
// eh: try 0x5d20f83..0x5d20f88 -> pad 0x5d20fad cleanup
// eh: try 0x5d20fb0..0x5d20fb8 -> pad 0x5d20fc0 catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d20e5e: nop 
// asm:   0x5d20f1e: jmp 0x5d20f22
// asm:   0x5d20f20: jmp 0x5d20f6c
// asm:   0x5d20f22: mov r15, rax
// asm:   0x5d20f25: cmp edx, 1
// asm:   0x5d20f28: jne 0x5d20f62
// asm:   0x5d20f2a: mov rdi, r15
// asm:   0x5d20f2d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d20f32: mov rbx, qword ptr [rax]
// asm:   0x5d20f35: mov qword ptr [rsp], rbx
// asm:   0x5d20f39: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d20f3e: lea rax, [rip + 0x156cce3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x5d20f45: mov rsi, qword ptr [rax]
// asm:   0x5d20f48: lea rdi, [rsp + 0x20]
// asm:   0x5d20f4d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d20f52: test rbx, rbx
// asm:   0x5d20f55: je 0x5d20f05
// asm:   0x5d20f57: mov rdi, rbx
// asm:   0x5d20f5a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d20f5f: mov r15, rax
// asm:   0x5d20f62: mov rdi, rsp
// asm:   0x5d20f65: call 0x2fdc010  ; il2cpp_runtime_helper_02fdc010()
// asm:   0x5d20f6a: jmp 0x5d20fb8
// asm:   0x5d20f6c: mov r15, rax
// asm:   0x5d20f6f: cmp edx, 1
// asm:   0x5d20f72: jne 0x5d20fb0
// asm:   0x5d20f74: mov rdi, r15
// asm:   0x5d20f77: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5d20f7c: mov r15, qword ptr [rax]
// asm:   0x5d20f7f: mov qword ptr [rsp], r15
// asm:   0x5d20f83: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5d20f88: lea rax, [rip + 0x156cc99]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x5d20f8f: mov rsi, qword ptr [rax]
// asm:   0x5d20f92: lea rdi, [rsp + 0x20]
// asm:   0x5d20f97: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5d20f9c: test r15, r15
// asm:   0x5d20f9f: je 0x5d20e95
// asm:   0x5d20fa5: mov rdi, r15
// asm:   0x5d20fa8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5d20fad: mov r15, rax
// asm:   0x5d20fb0: mov rdi, rsp
// asm:   0x5d20fb3: call 0x2fdbfe0  ; il2cpp_runtime_helper_02fdbfe0()
// asm:   0x5d20fb8: mov rdi, r15
// asm:   0x5d20fbb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5d20fc0: mov rdi, rax
// asm:   0x5d20fc3: call 0x2ab61e0  ; __clang_call_terminate()

void UI_EmoteHandler__LateUpdate(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar3;
  bool bVar4;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  bool inMenu;
  float fVar5;
  undefined1 auStack_68 [16];
  UI_EmoteTextPopup_o *pUStack_58;
  float fStack_4c;
  undefined1 auStack_48 [16];
  UI_EmoteTextPopup_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547dc8 = '\x01';
  }
  fStack_4c = (__this->fields)._currentEmoteCooldown;
  method_00 = (MethodInfo *)0x0;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentEmoteCooldown = fStack_4c - fVar5;
  bVar4 = UI_InGameMenu__InMenu(method_00);
  inMenu = true;
  if (!bVar4) {
    pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar2 == (GameManagers_BaseGameManager_o *)0x0) goto label_05d20f14;
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    in_RCX = (MethodInfo *)(ulong)bVar1;
    if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar2->klass->_2).typeHierarchy[(long)&in_RCX[-1].field_0x57] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    inMenu = *(int *)&(*(uint64_t *)((char *)pGVar2 + 0x78)) == 0;
  }
  pSVar3 = (__this->fields)._emoteTextPopups;
  if (pSVar3 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
               (System_Collections_Generic_List_object__o *)pSVar3,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    pUStack_38 = pUStack_58;
    auStack_48._0_8_ = auStack_68._0_8_;
    auStack_48._8_8_ = auStack_68._8_8_;
    auStack_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
      if (!bVar4) break;
      UI_EmoteHandler__UpdatePopup(__this,pUStack_38,inMenu,in_RCX);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    pSVar3 = (__this->fields)._emoteEmojiPopups;
    if (pSVar3 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator
                );
      pUStack_38 = pUStack_58;
      auStack_48._0_8_ = auStack_68._0_8_;
      auStack_48._8_8_ = auStack_68._8_8_;
      auStack_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_68._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
        if (!bVar4) break;
        UI_EmoteHandler__UpdatePopup(__this,pUStack_38,inMenu,in_RCX);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
      return;
    }
  }
label_05d20f14:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$SanitizeText
// il2cpp: System_String_o* UI_EmoteHandler__SanitizeText (System_String_o* value, const MethodInfo* method);
// 0x5d1e9d0

System_String_o * UI_EmoteHandler__SanitizeText(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    Il2CppMethodInitialized_07547dc9 = '\x01';
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar1 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  pSVar1 = Anticheat_ChatFilter__FilterSizeTag(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._stringLength < 0x15) {
    return pSVar1;
  }
  pSVar1 = System_String__Substring_53042f0(pSVar1,0,0x14,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.EmoteHandler$$.ctor
// il2cpp: void UI_EmoteHandler___ctor (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d20fd0

void UI_EmoteHandler___ctor(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_07547dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_07547dca = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
  (__this->fields)._emoteTextPopups = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteTextPopups);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
  (__this->fields)._emoteEmojiPopups = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteEmojiPopups);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->MapObjectAll;
    if ((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) {
      layers->m_Items[2] = pUVar2->TitanMovebox;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.EmoteHandler$$<Awake>b__16_0
// il2cpp: void UI_EmoteHandler___Awake_b__16_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d21110

void UI_EmoteHandler___Awake_b__16_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_07547dc0 = '\x01';
  }
  pUVar1 = (__this->fields)._emoteWheelPopup;
  if (pUVar1 == (UI_BasePopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
  (__this->fields).IsActive = false;
  return;
}


// UI.EmoteHandler$$<SetEmoteWheel>b__25_0
// il2cpp: void UI_EmoteHandler___SetEmoteWheel_b__25_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d21180

void UI_EmoteHandler___SetEmoteWheel_b__25_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,method);
  return;
}


// UI.EmoteHandler$$<NextEmoteWheel>b__26_0
// il2cpp: void UI_EmoteHandler___NextEmoteWheel_b__26_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x5d21190

void UI_EmoteHandler___NextEmoteWheel_b__26_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,method);
  return;
}


