// Type: UI.EmoteHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/EmoteHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteHandler.cs
// --------------------------------

// UI.EmoteHandler$$Awake
// il2cpp: void UI_EmoteHandler__Awake (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182241e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182241f4c: nop dword ptr [rax]

void UI_EmoteHandler__Awake(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  UI_EmoteTextPopup_array *pUVar5;
  GameManagers_InGameManager_o *value;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_EmoteTextPopup_o *item;
  UI_EmoteEmojiPopup_o *item_00;
  UI_BasePopup_o *pUVar9;
  UnityEngine_Events_UnityAction_o *__this_00;
  int iVar10;
  
  if (Il2CppMethodInitialized_184347246 == '\0') {
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
    Il2CppMethodInitialized_184347246 = '\x01';
  }
  iVar10 = 0;
  do {
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar7,"Prefabs/InGame/EmoteTextPopup",false,
                        (MethodInfo_6ABD60 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteTextPopup);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18224223a;
    item = UnityEngine_GameObject__GetComponent_object_
                     (pUVar8,(MethodInfo_6F5650 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_EmoteTextPopup);
    pMVar6 = MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add;
    pSVar4 = (__this->fields)._emoteTextPopups;
    if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_18224223a;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto label_18224223a;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      if ((uint)pUVar5->max_length <= uVar3) goto label_182242264;
      pUVar5->m_Items[(int)uVar3] = item;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                       (pUVar7,"Prefabs/InGame/EmoteEmojiPopup",false,
                        (MethodInfo_6ABD60 *)
                        MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_EmoteEmojiPopup);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_18224223a;
    item_00 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar8,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_EmoteEmojiPopup);
    pMVar6 = MethodInfo_System_Collections_Generic_List_EmoteTextPopup_Add;
    pSVar4 = (__this->fields)._emoteEmojiPopups;
    if (pSVar4 == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) goto label_18224223a;
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar4->fields)._items;
    if (pUVar5 == (UI_EmoteTextPopup_array *)0x0) goto label_18224223a;
    uVar3 = (pSVar4->fields)._size;
    if (uVar3 < (uint)pUVar5->max_length) {
      (pSVar4->fields)._size = uVar3 + 1;
      if ((uint)pUVar5->max_length <= uVar3) {
label_182242264:
        ThrowIndexOutOfRangeException();
      }
      pUVar5->m_Items[(int)uVar3] = (UI_EmoteTextPopup_o *)item_00;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar3,item_00);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item_00,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 5);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                     (pUVar7,"Prefabs/InGame/WheelMenu",false,
                      (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar8,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_BasePopup);
    (__this->fields)._emoteWheelPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteWheelPopup,pUVar9);
    pUVar9 = (__this->fields)._emoteWheelPopup;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_EmoteHandler_Awake_b__16_0,(MethodInfo *)0x0);
    if (pUVar9 != (UI_BasePopup_o *)0x0) {
      bVar2 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if (((pUVar9->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pUVar9->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar9);
      }
      (*(uint64_t *)((char *)pUVar9 + 0xc0)) = (System_Threading_CancellationTokenSource_o *)__this_00;
      bVar2 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
      if (((pUVar9->klass->_2).typeHierarchyDepth < bVar2) ||
         ((pUVar9->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar9);
      }
      Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)pUVar9 + 0xc0)),__this_00);
      value = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (value == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._inGameManager = (GameManagers_InGameManager_o *)0x0;
      }
      else {
        bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar2) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        (__this->fields)._inGameManager = value;
        bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar2) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,value);
      return;
    }
  }
label_18224223a:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$OnEmoteTextRPC
// il2cpp: void UI_EmoteHandler__OnEmoteTextRPC (int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182243450

void UI_EmoteHandler__OnEmoteTextRPC
               (int32_t viewId,System_String_o *text,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_UISettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_HashSet_int__o *__this;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  bool bVar7;
  Characters_BaseCharacter_o *character;
  UI_EmoteHandler_o *__this_00;
  System_String_o *pSVar8;
  UI_EmoteTextPopup_o *pUVar9;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347247 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar2 == (Settings_UISettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).ShowEmotes, pSVar3 == (Settings_BoolSetting_o *)0x0)) {
label_18224371f:
      ThrowNullReferenceException();
    }
    if ((pSVar3->fields)._value != false) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pPVar4 = (info->fields).Sender;
      if ((pPVar4 == (Photon_Realtime_Player_o *)0x0) ||
         (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_18224371f;
      bVar7 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)__this,(pPVar4->fields).actorNumber,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (!bVar7) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar5 = (character->fields).Cache, pUVar5 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar6 = (pUVar5->fields).PhotonView, pPVar6 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_18224371f;
        if ((info->fields).Sender == (pPVar6->fields)._Owner_k__BackingField) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_18224371f;
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar1,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar7) {
              pSVar8 = UI_EmoteHandler__SanitizeText(text,(MethodInfo *)0x0);
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                pUVar9 = UI_EmoteHandler__GetAvailablePopup
                                   (__this_00,(__this_00->fields)._emoteTextPopups,(MethodInfo *)0x0);
                pUVar10 = UI_EmoteHandler__GetOffset(local_38,__this_00,character,(MethodInfo *)0x0);
                if (pUVar9 != (UI_EmoteTextPopup_o *)0x0) {
                  local_48.z = (pUVar10->fields).z;
                  local_48.x = (pUVar10->fields).x;
                  local_48.y = (pUVar10->fields).y;
                  (*(pUVar9->klass->vtable)._62_Load.methodPtr)
                            (pUVar9,pSVar8,3.0,character,(UnityEngine_Vector3_o *)&local_48,
                             (pUVar9->klass->vtable)._62_Load.method);
                  return;
                }
              }
              goto label_18224371f;
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
// 0x182243120

void UI_EmoteHandler__OnEmoteEmojiRPC
               (int32_t viewId,System_String_o *emoji,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  UI_BaseMenu_o *pUVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_Collections_Generic_HashSet_int__o *__this;
  Utility_BaseComponentCache_o *pUVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  UI_EmoteTextPopup_c *pUVar8;
  bool bVar9;
  Characters_BaseCharacter_o *character;
  UI_EmoteHandler_o *__this_00;
  UI_EmoteTextPopup_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347248 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar9) {
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
       (pSVar4 = (pSVar3->fields).ShowEmotes, pSVar4 == (Settings_BoolSetting_o *)0x0)) {
label_182243432:
      ThrowNullReferenceException();
    }
    if ((pSVar4->fields)._value != false) {
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pPVar5 = (info->fields).Sender;
      if ((pPVar5 == (Photon_Realtime_Player_o *)0x0) ||
         (__this = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
         __this == (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_182243432;
      bVar9 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)__this,(pPVar5->fields).actorNumber,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (!bVar9) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        if (((character == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar6 = (character->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
           (pPVar7 = (pUVar6->fields).PhotonView, pPVar7 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_182243432;
        if ((info->fields).Sender == (pPVar7->fields)._Owner_k__BackingField) {
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if (pUVar2 == (UI_BaseMenu_o *)0x0) goto label_182243432;
          __this_00 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar2,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_EmoteHandler);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar9) {
              if (__this_00 != (UI_EmoteHandler_o *)0x0) {
                if (Il2CppMethodInitialized_184347249 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EmoteEmojiPopup);
                  Il2CppMethodInitialized_184347249 = '\x01';
                }
                pUVar10 = UI_EmoteHandler__GetAvailablePopup
                                    (__this_00,(__this_00->fields)._emoteEmojiPopups,(MethodInfo *)0x0);
                pUVar11 = UI_EmoteHandler__GetOffset(local_38,__this_00,character,(MethodInfo *)0x0);
                if (pUVar10 != (UI_EmoteTextPopup_o *)0x0) {
                  pUVar8 = pUVar10->klass;
                  bVar1 = (TypeInfo_UI_EmoteEmojiPopup->_2).typeHierarchyDepth;
                  if ((bVar1 <= (pUVar8->_2).typeHierarchyDepth) &&
                     ((pUVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                      (Il2CppClass *)TypeInfo_UI_EmoteEmojiPopup)) {
                    local_48.x = (pUVar11->fields).x;
                    local_48.y = (pUVar11->fields).y;
                    local_48.z = (pUVar11->fields).z;
                    (*(pUVar8->vtable)._62_Load.methodPtr)
                              (pUVar10,emoji,3.0,character,(UnityEngine_Vector3_o *)&local_48,
                               (pUVar8->vtable)._62_Load.method);
                    return;
                  }
                  il2cpp_codegen_raise_invalid_cast_exception(pUVar10,TypeInfo_UI_EmoteEmojiPopup);
                }
              }
              goto label_182243432;
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
// 0x182244120

void UI_EmoteHandler__ShowEmoteText
               (UI_EmoteHandler_o *__this,System_String_o *text,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  UI_EmoteTextPopup_o *pUVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [2];
  
  pUVar1 = UI_EmoteHandler__GetAvailablePopup(__this,(__this->fields)._emoteTextPopups,(MethodInfo *)0x0);
  pUVar2 = UI_EmoteHandler__GetOffset(local_38,__this,character,(MethodInfo *)0x0);
  if (pUVar1 != (UI_EmoteTextPopup_o *)0x0) {
    local_48.z = (pUVar2->fields).z;
    local_48.x = (pUVar2->fields).x;
    local_48.y = (pUVar2->fields).y;
    (*(pUVar1->klass->vtable)._62_Load.methodPtr)
              (pUVar1,text,3.0,character,(UnityEngine_Vector3_o *)&local_48,
               (pUVar1->klass->vtable)._62_Load.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$ShowEmoteEmoji
// il2cpp: void UI_EmoteHandler__ShowEmoteEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x182244030

void UI_EmoteHandler__ShowEmoteEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  byte bVar1;
  UI_EmoteTextPopup_c *pUVar2;
  UI_EmoteTextPopup_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [2];
  
  if (Il2CppMethodInitialized_184347249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EmoteEmojiPopup);
    Il2CppMethodInitialized_184347249 = '\x01';
  }
  pUVar3 = UI_EmoteHandler__GetAvailablePopup(__this,(__this->fields)._emoteEmojiPopups,(MethodInfo *)0x0);
  pUVar4 = UI_EmoteHandler__GetOffset(local_38,__this,character,(MethodInfo *)0x0);
  if (pUVar3 != (UI_EmoteTextPopup_o *)0x0) {
    pUVar2 = pUVar3->klass;
    bVar1 = (TypeInfo_UI_EmoteEmojiPopup->_2).typeHierarchyDepth;
    if ((bVar1 <= (pUVar2->_2).typeHierarchyDepth) &&
       ((pUVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_EmoteEmojiPopup)) {
      local_48.x = (pUVar4->fields).x;
      local_48.y = (pUVar4->fields).y;
      local_48.z = (pUVar4->fields).z;
      (*(pUVar2->vtable)._62_Load.methodPtr)
                (pUVar3,emoji,3.0,character,(UnityEngine_Vector3_o *)&local_48,
                 (pUVar2->vtable)._62_Load.method);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pUVar3,TypeInfo_UI_EmoteEmojiPopup);
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$ShowVoiceEmoji
// il2cpp: void UI_EmoteHandler__ShowVoiceEmoji (UI_EmoteHandler_o* __this, System_String_o* emoji, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x1822441b0

void UI_EmoteHandler__ShowVoiceEmoji
               (UI_EmoteHandler_o *__this,System_String_o *emoji,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UI_EmoteTextPopup_o *pUVar5;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_18434724a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EmoteEmojiPopup);
    Il2CppMethodInitialized_18434724a = '\x01';
  }
  pUVar5 = UI_EmoteHandler__GetAvailablePopup(__this,(__this->fields)._emoteEmojiPopups,(MethodInfo *)0x0);
  if (pUVar5 != (UI_EmoteTextPopup_o *)0x0) {
    bVar3 = (TypeInfo_UI_EmoteEmojiPopup->_2).typeHierarchyDepth;
    if ((bVar3 <= (pUVar5->klass->_2).typeHierarchyDepth) &&
       ((pUVar5->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo_UI_EmoteEmojiPopup)
       ) {
      (pUVar5->fields).infinitePopup = true;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar4->upVector).fields.x;
      uVar2 = (pUVar4->upVector).fields.y;
      local_18.z = (pUVar4->upVector).fields.z;
      local_18.x = (float)uVar1 + (float)uVar1;
      local_18.y = (float)uVar2 + (float)uVar2;
      local_18.z = local_18.z + local_18.z;
      (*(pUVar5->klass->vtable)._62_Load.methodPtr)
                (pUVar5,emoji,0.1,character,(UnityEngine_Vector3_o *)&local_18,
                 (pUVar5->klass->vtable)._62_Load.method);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(pUVar5,TypeInfo_UI_EmoteEmojiPopup);
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$StopInfinitePopup
// il2cpp: void UI_EmoteHandler__StopInfinitePopup (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x1822442e0
// eh: try 0x182244380..0x1822443e0 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18224437f: nop 
// asm:   0x1822443b9: mov rdx, qword ptr [rip + 0x1e39c68]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x1822443c0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822443c5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822443ca: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822443cf: test rcx, rcx
// asm:   0x1822443d2: jne 0x1822443e0
// asm:   0x1822443e0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_EmoteHandler__StopInfinitePopup(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EmoteTextPopup__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18434724b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    Il2CppMethodInitialized_18434724b = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._emoteEmojiPopups;
  if (__this_00 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      *(undefined1 *)((longlong)&local_28.fields._current[0xd].monitor + 4) = 0;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetOffset
// il2cpp: UnityEngine_Vector3_o UI_EmoteHandler__GetOffset (UI_EmoteHandler_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x182242990

UnityEngine_Vector3_o *
UI_EmoteHandler__GetOffset
          (UnityEngine_Vector3_o *__return_storage_ptr__,UI_EmoteHandler_o *__this,
          Characters_BaseCharacter_o *character,MethodInfo *method)

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
  Characters_BaseCharacter_c *pCVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  float fVar13;
  
  if (Il2CppMethodInitialized_18434724c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_18434724c = '\x01';
  }
  if (character != (Characters_BaseCharacter_o *)0x0) {
    pCVar11 = character->klass;
    bVar10 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar10 <= (pCVar11->_2).typeHierarchyDepth) &&
       ((pCVar11->_2).typeHierarchy[(ulonglong)bVar10 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
      (__return_storage_ptr__->fields).x = (pUVar12->upVector).fields.x * 4.0;
      uVar2 = (pUVar12->upVector).fields.y;
      uVar6 = (pUVar12->upVector).fields.z;
      (__return_storage_ptr__->fields).y = (float)uVar2 * 4.0;
      (__return_storage_ptr__->fields).z = (float)uVar6 * 4.0;
      return __return_storage_ptr__;
    }
    bVar10 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar10 <= (pCVar11->_2).typeHierarchyDepth) &&
       ((pCVar11->_2).typeHierarchy[(ulonglong)bVar10 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan))
    {
      bVar10 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
      if ((bVar10 <= (pCVar11->_2).typeHierarchyDepth) &&
         ((pCVar11->_2).typeHierarchy[(ulonglong)bVar10 - 1] == (Il2CppClass *)TypeInfo_Characters_BasicTitan)
         ) {
        if ((*(uint8_t *)((char *)character + 0x298)) == false) {
          if (Il2CppMethodInitialized_18433de5c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433de5c = '\x01';
          }
          fVar1 = *(float *)&character[1].fields.field_0x1c;
          pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar3 = (pUVar12->upVector).fields.y;
          uVar7 = (pUVar12->upVector).fields.z;
          (__return_storage_ptr__->fields).x = (pUVar12->upVector).fields.x * 25.0 * fVar1;
          (__return_storage_ptr__->fields).y = (float)uVar3 * 25.0 * fVar1;
          (__return_storage_ptr__->fields).z = (float)uVar7 * 25.0 * fVar1;
          return __return_storage_ptr__;
        }
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        fVar1 = *(float *)&character[1].fields.field_0x1c;
        pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar4 = (pUVar12->upVector).fields.y;
        uVar8 = (pUVar12->upVector).fields.z;
        (__return_storage_ptr__->fields).x = (pUVar12->upVector).fields.x * 15.0 * fVar1;
        (__return_storage_ptr__->fields).y = (float)uVar4 * 15.0 * fVar1;
        (__return_storage_ptr__->fields).z = (float)uVar8 * 15.0 * fVar1;
        return __return_storage_ptr__;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character);
    }
    bVar10 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if ((bVar10 <= (pCVar11->_2).typeHierarchyDepth) &&
       ((pCVar11->_2).typeHierarchy[(ulonglong)bVar10 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter))
    {
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
      bVar10 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      uVar5 = (pUVar12->upVector).fields.y;
      uVar9 = (pUVar12->upVector).fields.z;
      if ((bVar10 <= (character->klass->_2).typeHierarchyDepth) &&
         ((character->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseShifter)) {
        fVar1 = *(float *)&character[1].fields.field_0x1c;
        (__return_storage_ptr__->fields).x = (pUVar12->upVector).fields.x * 70.0 * fVar1;
        (__return_storage_ptr__->fields).y = (float)uVar5 * 70.0 * fVar1;
        (__return_storage_ptr__->fields).z = (float)uVar9 * 70.0 * fVar1;
        return __return_storage_ptr__;
      }
      il2cpp_codegen_raise_invalid_cast_exception(character);
    }
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar13 = (pUVar12->zeroVector).fields.y;
  fVar1 = (pUVar12->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar12->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar13;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// UI.EmoteHandler$$ToggleEmoteWheel
// il2cpp: void UI_EmoteHandler__ToggleEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x1822443f0

void UI_EmoteHandler__ToggleEmoteWheel(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__SetEmoteWheel(__this,(__this->fields).IsActive == false,(MethodInfo *)0x0);
  return;
}


// UI.EmoteHandler$$SetEmoteWheel
// il2cpp: void UI_EmoteHandler__SetEmoteWheel (UI_EmoteHandler_o* __this, bool enable, const MethodInfo* method);
// 0x182243e80
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182243fe6: mov qword ptr [rsp + 0x30], 0
// asm:   0x182243fef: mov r9, rsi
// asm:   0x182243ff2: mov byte ptr [rsp + 0x28], 1
// asm:   0x182243ff7: mov r8, r14
// asm:   0x182243ffa: mov rdx, rbp
// asm:   0x182243ffd: mov qword ptr [rsp + 0x20], rax
// asm:   0x182244002: mov rcx, rdi
// asm:   0x182244005: call 0x182284450  ; UI_WheelPopup__Show()
// asm:   0x18224400a: mov byte ptr [rbx + 0x40], 1
// asm:   0x18224400e: jmp 0x182243f05

void UI_EmoteHandler__SetEmoteWheel(UI_EmoteHandler_o *__this,bool enable,MethodInfo *method)

{
  byte bVar1;
  UI_BasePopup_o *pUVar2;
  Settings_InputSettings_o *pSVar3;
  Settings_InteractionInputSettings_o *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  UI_WheelPopup_o *__this_00;
  bool bVar6;
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_18434724d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_18434724d = '\x01';
  }
  if (enable) {
    bVar6 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar6) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      if (((pSVar3 != (Settings_InputSettings_o *)0x0) &&
          (pSVar4 = (pSVar3->fields).Interaction, pSVar4 != (Settings_InteractionInputSettings_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).EmoteMenu, pSVar5 != (Settings_KeybindSetting_o *)0x0)) {
        __this_00 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
        openKey = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                            (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
        options = UI_EmoteHandler__GetEmoteWheelOptions
                            (__this,(__this->fields)._currentEmoteWheelState,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0,(MethodInfo *)0x0);
        title = UI_EmoteHandler__GetEmoteWheelTitle(__this,(MethodInfo *)0x0);
        if (__this_00 != (UI_WheelPopup_o *)0x0) {
          bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
            UI_WheelPopup__Show(__this_00,openKey,options,__this_01,title,true,(MethodInfo *)0x0);
            (__this->fields).IsActive = true;
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_WheelPopup);
        }
      }
      goto label_182244013;
    }
  }
  else {
    pUVar2 = (__this->fields)._emoteWheelPopup;
    if (pUVar2 == (UI_BasePopup_o *)0x0) {
label_182244013:
      ThrowNullReferenceException();
    }
    (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
  }
  return;
}


// UI.EmoteHandler$$NextEmoteWheel
// il2cpp: void UI_EmoteHandler__NextEmoteWheel (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182242f60

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
  System_String_o *openKey;
  System_Collections_Generic_List_string__o *options;
  UnityEngine_Events_UnityAction_o *__this_03;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_18434724e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_NextEmoteWheel_b__26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_18434724e = '\x01';
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
    (__this->fields)._currentEmoteWheelState = iVar6;
    if (2 < iVar6) {
      (__this->fields)._currentEmoteWheelState = 0;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (((pSVar2 != (Settings_InputSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Interaction, pSVar3 != (Settings_InteractionInputSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).EmoteMenu, pSVar4 != (Settings_KeybindSetting_o *)0x0)) {
      __this_01 = (UI_WheelPopup_o *)(__this->fields)._emoteWheelPopup;
      openKey = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
      options = UI_EmoteHandler__GetEmoteWheelOptions
                          (__this,(__this->fields)._currentEmoteWheelState,(MethodInfo *)0x0);
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_EmoteHandler_NextEmoteWheel_b__26_0,(MethodInfo *)0x0);
      title = UI_EmoteHandler__GetEmoteWheelTitle(__this,(MethodInfo *)0x0);
      if (__this_01 != (UI_WheelPopup_o *)0x0) {
        bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_01->klass->_2).typeHierarchyDepth) &&
           ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
          UI_WheelPopup__Show(__this_01,openKey,options,__this_03,title,true,(MethodInfo *)0x0);
          return;
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_UI_WheelPopup);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetEmoteWheelTitle
// il2cpp: System_String_o* UI_EmoteHandler__GetEmoteWheelTitle (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182242920

System_String_o * UI_EmoteHandler__GetEmoteWheelTitle(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434724f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Emotes");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Emotes");
    Il2CppMethodInitialized_18434724f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("InGameMenu.Wheel.Emotes","Emotes",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.EmoteHandler$$OnEmoteWheelSelect
// il2cpp: void UI_EmoteHandler__OnEmoteWheelSelect (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182243730
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182243b47: mov rdx, qword ptr [rip + 0x1e7efca]  ; "EmoteEmojiRPC"
// asm:   0x182243b4e: mov r9, rsi
// asm:   0x182243b51: mov qword ptr [rsp + 0x20], 0
// asm:   0x182243b5a: xor r8d, r8d
// asm:   0x182243bec: jmp 0x1822439c5
// asm:   0x182243d51: mov rdx, qword ptr [rip + 0x1e7f680]  ; "EmoteTextRPC"
// asm:   0x182243d58: mov r9, rsi
// asm:   0x182243d5b: mov qword ptr [rsp + 0x20], 0
// asm:   0x182243d64: xor r8d, r8d
// asm:   0x182243d67: jmp 0x182243b5d

void UI_EmoteHandler__OnEmoteWheelSelect(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  GameManagers_InGameManager_o *pGVar2;
  UI_BasePopup_o *pUVar3;
  Characters_BaseCharacter_o *x;
  Settings_EmoteSettings_o *pSVar4;
  Settings_ListSetting_StringSetting__o *pSVar5;
  Utility_BaseComponentCache_o *pUVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  bool bVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  System_Type_o *pSVar10;
  Settings_BaseSetting_o *pSVar11;
  System_Object_array *parameters;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  System_String_o *methodName;
  UI_BaseMenu_o *pUVar15;
  Photon_Pun_PhotonView_o *__this_00;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347250 == '\0') {
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
    Il2CppMethodInitialized_184347250 = '\x01';
  }
  if ((__this->fields)._currentEmoteWheelState != 2) {
    if (0.0 < (__this->fields)._currentEmoteCooldown) {
      pUVar3 = (__this->fields)._emoteWheelPopup;
      if (pUVar3 != (UI_BasePopup_o *)0x0) {
        (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
        (__this->fields).IsActive = false;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar15 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar15 == (UI_BaseMenu_o *)0x0) goto label_182243d6c;
        bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
        if (((pUVar15->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar15);
        }
        goto label_1822439c5;
      }
      goto label_182243d6c;
    }
    (__this->fields)._currentEmoteCooldown = 3.0;
  }
  pGVar2 = (__this->fields)._inGameManager;
  if ((pGVar2 == (GameManagers_InGameManager_o *)0x0) ||
     (pUVar3 = (__this->fields)._emoteWheelPopup, pUVar3 == (UI_BasePopup_o *)0x0)) goto label_182243d6c;
  bVar1 = (TypeInfo_UI_WheelPopup->_2).typeHierarchyDepth;
  if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_WheelPopup)) {
    il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
  }
  x = (pGVar2->fields).CurrentCharacter;
  index = *(int32_t *)((longlong)&(*(uint64_t *)((char *)pUVar3 + 0xb0)) + 4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if ((__this->fields)._currentEmoteWheelState == 0) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
      if (((pSVar4 == (Settings_EmoteSettings_o *)0x0) ||
          (pSVar5 = (pSVar4->fields).TextEmotes, pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
         (pSVar11 = Settings_ListSetting_object___GetItemAt
                              ((Settings_ListSetting_T__o *)pSVar5,index,
                               (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt),
         pSVar11 == (Settings_BaseSetting_o *)0x0)) {
label_182243dee:
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar11,TypeInfo_Settings_StringSetting);
      }
      pIVar14 = (*(uint64_t *)((char *)pSVar11 + 0x20));
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar6 = (x->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pPVar7 = (pUVar6->fields).PhotonView, pPVar7 == (Photon_Pun_PhotonView_o *)0x0)) goto label_182243dee;
      local_res8[0] = (pPVar7->fields).viewIdField;
      pIVar12 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (parameters == (System_Object_array *)0x0) goto label_182243dee;
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((parameters->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
label_182243ddc:
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar12;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar12);
      if ((pIVar14 != (Il2CppObject *)0x0) &&
         (pIVar12 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class),
         pIVar12 == (Il2CppObject *)0x0)) {
        pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
      }
      if ((uint)parameters->max_length < 2) goto label_182243ddc;
      parameters->m_Items[1] = pIVar14;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar14);
      methodName = "EmoteTextRPC";
      if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_182243dee;
    }
    else {
      if ((__this->fields)._currentEmoteWheelState != 1) {
        if ((__this->fields)._currentEmoteWheelState == 2) {
          if ((x == (Characters_BaseCharacter_o *)0x0) ||
             (pSVar9 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                                 (x,(x->klass->vtable)._59_get_EmoteActions.method),
             pSVar9 == (System_Collections_Generic_List_string__o *)0x0)) goto label_182243d6c;
          if (index < (pSVar9->fields)._size) {
            pSVar9 = (*(x->klass->vtable)._59_get_EmoteActions.methodPtr)
                               (x,(x->klass->vtable)._59_get_EmoteActions.method);
            if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto label_182243d6c;
            pSVar10 = (System_Type_o *)
                      System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar9,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_string_get_Item);
            (*(x->klass->vtable)._80_Emote.methodPtr)(x,pSVar10,(x->klass->vtable)._80_Emote.method);
          }
        }
        goto label_182243b65;
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
      if (((pSVar4 == (Settings_EmoteSettings_o *)0x0) ||
          (pSVar5 = (pSVar4->fields).EmojiEmotes, pSVar5 == (Settings_ListSetting_StringSetting__o *)0x0)) ||
         (pSVar11 = Settings_ListSetting_object___GetItemAt
                              ((Settings_ListSetting_T__o *)pSVar5,index,
                               (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_StringSetting_GetItemAt),
         pSVar11 == (Settings_BaseSetting_o *)0x0)) {
label_182243db6:
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar11,TypeInfo_Settings_StringSetting);
      }
      pIVar14 = (*(uint64_t *)((char *)pSVar11 + 0x20));
      __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (((x == (Characters_BaseCharacter_o *)0x0) ||
          (pUVar6 = (x->fields).Cache, pUVar6 == (Utility_BaseComponentCache_o *)0x0)) ||
         (pPVar7 = (pUVar6->fields).PhotonView, pPVar7 == (Photon_Pun_PhotonView_o *)0x0)) goto label_182243db6;
      local_res8[0] = (pPVar7->fields).viewIdField;
      pIVar12 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (parameters == (System_Object_array *)0x0) goto label_182243db6;
      if ((pIVar12 != (Il2CppObject *)0x0) &&
         (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((parameters->obj).klass)->_1).element_class),
         pIVar13 == (Il2CppObject *)0x0)) {
        pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
label_182243da4:
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar12;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar12);
      if ((pIVar14 != (Il2CppObject *)0x0) &&
         (pIVar12 = il2cpp_vm_Object_IsInst(pIVar14,(((parameters->obj).klass)->_1).element_class),
         pIVar12 == (Il2CppObject *)0x0)) {
        pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
      }
      if ((uint)parameters->max_length < 2) goto label_182243da4;
      parameters->m_Items[1] = pIVar14;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar14);
      methodName = "EmoteEmojiRPC";
      if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_182243db6;
    }
    Photon_Pun_PhotonView__RPC(__this_00,methodName,0,parameters,(MethodInfo *)0x0);
  }
label_182243b65:
  pUVar3 = (__this->fields)._emoteWheelPopup;
  if (pUVar3 != (UI_BasePopup_o *)0x0) {
    (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar15 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar15 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((pUVar15->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar15->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
      {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar15);
      }
label_1822439c5:
      *(undefined1 *)&(*(uint64_t *)((char *)pUVar15 + 0x168)) = 1;
      return;
    }
  }
label_182243d6c:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetEmoteWheelOptions
// il2cpp: System_Collections_Generic_List_string__o* UI_EmoteHandler__GetEmoteWheelOptions (UI_EmoteHandler_o* __this, int32_t state, const MethodInfo* method);
// 0x182242410
// eh: try 0x182242620..0x1822426b1 -> pad 0x183317f30 catch Il2CppExceptionWrapper
// eh: try 0x1822426e4..0x1822426f0 -> pad 0x180354880 cleanup
// eh: try 0x182242781..0x18224290d -> pad 0x183317fd0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822426c5: mov rdx, qword ptr [rip + 0x1e5578c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x1822426cc: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822426d1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822426d6: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822426db: test rcx, rcx
// asm:   0x1822426de: jne 0x1822428ed
// asm:   0x1822426e4: jmp 0x1822428b6
// asm:   0x18224289b: mov rdx, qword ptr [rip + 0x1e555b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose
// asm:   0x1822428a2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822428a7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822428ac: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822428b1: test rcx, rcx
// asm:   0x1822428b4: jne 0x18224290d
// asm:   0x1822428b6: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x1822428ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18224290d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_Collections_Generic_List_string__o *
UI_EmoteHandler__GetEmoteWheelOptions(UI_EmoteHandler_o *__this,int32_t state,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *pCVar4;
  Settings_EmoteSettings_o *pSVar5;
  Settings_ListSetting_StringSetting__o *pSVar6;
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppClass *pIVar8;
  System_String_array *pSVar9;
  MethodInfo *pMVar10;
  bool bVar11;
  System_Collections_Generic_List_string__o *pSVar12;
  System_String_o *pSVar13;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  System_Collections_Generic_List_Enumerator_object__o local_20;
  
  if (Il2CppMethodInitialized_184347251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    Il2CppMethodInitialized_184347251 = '\x01';
  }
  local_20.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._current = (Il2CppObject *)0x0;
  if (state == 0) {
    pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar12,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
    if (((pSVar5 != (Settings_EmoteSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).TextEmotes, pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar7 = (pSVar6->fields)._value, pSVar7 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar7,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
      local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      local_20.fields._index = local_38._8_4_;
      local_20.fields._version = local_38._12_4_;
      local_20.fields._current = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = &local_20;
      while( true ) {
        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (&local_20,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        if (!bVar11) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                     MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
          return pSVar12;
        }
        if (local_20.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar8 = local_20.fields._current[2].klass;
        if (Il2CppMethodInitialized_184347255 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
          Il2CppMethodInitialized_184347255 = '\x01';
        }
        if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
        }
        pSVar13 = Anticheat_ChatFilter__FilterBadWords((System_String_o *)pIVar8,(MethodInfo *)0x0);
        pSVar13 = Anticheat_ChatFilter__FilterSizeTag(pSVar13,(MethodInfo *)0x0);
        if (pSVar13 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (0x14 < (pSVar13->fields)._stringLength) {
          pSVar13 = System_String__Substring_1972740(pSVar13,0,0x14,(MethodInfo *)0x0);
        }
        pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (pSVar12 == (System_Collections_Generic_List_string__o *)0x0) break;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar12->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (pSVar12->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (pSVar12->fields)._size = uVar2 + 1;
          if ((uint)pSVar9->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar9->m_Items[(int)uVar2] = pSVar13;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2,pSVar13);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pSVar13,
                     (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  else if (state == 1) {
    pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar12,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
    if (((pSVar5 != (Settings_EmoteSettings_o *)0x0) &&
        (pSVar6 = (pSVar5->fields).EmojiEmotes, pSVar6 != (Settings_ListSetting_StringSetting__o *)0x0)) &&
       (pSVar7 = (pSVar6->fields)._value, pSVar7 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar7,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_StringSetting_GetEnumerator);
      local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      local_20.fields._index = local_38._8_4_;
      local_20.fields._version = local_38._12_4_;
      local_20.fields._current = local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = &local_20;
      while( true ) {
        bVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (&local_20,
                            (MethodInfo_153A2A0 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_MoveNext);
        pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (!bVar11) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                     MethodInfo_System_Collections_Generic_List_Enumerator_StringSetting_Dispose);
          return pSVar12;
        }
        if (local_20.fields._current == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar12 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar8 = local_20.fields._current[2].klass;
        piVar1 = &(pSVar12->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (pSVar12->fields)._items;
        if (pSVar9 == (System_String_array *)0x0) break;
        uVar2 = (pSVar12->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (pSVar12->fields)._size = uVar2 + 1;
          if ((uint)pSVar9->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar9->m_Items[(int)uVar2] = (System_String_o *)pIVar8;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2,pIVar8);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pIVar8,
                     (MethodInfo_93DD50 *)pMVar10->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  else {
    pGVar3 = (__this->fields)._inGameManager;
    if (pGVar3 != (GameManagers_InGameManager_o *)0x0) {
      pCVar4 = (pGVar3->fields).CurrentCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        pSVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar12,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        return pSVar12;
      }
      pGVar3 = (__this->fields)._inGameManager;
      if ((pGVar3 != (GameManagers_InGameManager_o *)0x0) &&
         (pCVar4 = (pGVar3->fields).CurrentCharacter, pCVar4 != (Characters_BaseCharacter_o *)0x0)) {
        pSVar12 = (*(pCVar4->klass->vtable)._59_get_EmoteActions.methodPtr)
                            (pCVar4,(pCVar4->klass->vtable)._59_get_EmoteActions.method);
        return pSVar12;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$GetAvailablePopup
// il2cpp: UI_EmoteTextPopup_o* UI_EmoteHandler__GetAvailablePopup (UI_EmoteHandler_o* __this, System_Collections_Generic_List_EmoteTextPopup__o* popups, const MethodInfo* method);
// 0x182242270
// eh: try 0x182242330..0x182242400 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822423aa: mov rdx, qword ptr [rip + 0x1e3bc77]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x1822423b1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822423b6: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822423bb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822423c0: test rcx, rcx
// asm:   0x1822423c3: jne 0x182242400
// asm:   0x1822423c5: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x182242400: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

UI_EmoteTextPopup_o *
UI_EmoteHandler__GetAvailablePopup
          (UI_EmoteHandler_o *__this,System_Collections_Generic_List_EmoteTextPopup__o *popups,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UI_EmoteTextPopup_o *pUVar3;
  undefined1 local_40 [16];
  UI_EmoteTextPopup_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184347252 == '\0') {
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
    Il2CppMethodInitialized_184347252 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (popups == (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
             (System_Collections_Generic_List_T__o *)popups,
             (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = (Il2CppObject *)local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
    pIVar1 = local_28.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)popups,0,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_EmoteTextPopup_get_Item);
      return pUVar3;
    }
    if ((UI_EmoteTextPopup_o *)local_28.fields._current == (UI_EmoteTextPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_28.fields._current,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  } while (bVar2);
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
             MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
  return (UI_EmoteTextPopup_o *)pIVar1;
}


// UI.EmoteHandler$$UpdatePopup
// il2cpp: void UI_EmoteHandler__UpdatePopup (UI_EmoteHandler_o* __this, UI_EmoteTextPopup_o* popup, bool inMenu, const MethodInfo* method);
// 0x182244490
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182244a14: movsd xmm0, qword ptr [rax]
// asm:   0x182244a18: lea rdx, [rbp - 0x39]
// asm:   0x182244a1c: mov eax, dword ptr [rax + 8]
// asm:   0x182244a1f: xor r8d, r8d
// asm:   0x182244a22: mov rcx, rbx
// asm:   0x182244a25: movsd qword ptr [rbp - 0x39], xmm0
// asm:   0x182244a2a: mov dword ptr [rbp - 0x31], eax
// asm:   0x182244a2d: call 0x182f5c390  ; UnityEngine_Transform__set_position()
// asm:   0x182244a32: jmp 0x18224494e
// asm:   0x182244a37: mov rax, qword ptr [rbx]
// asm:   0x182244a3a: mov rcx, rbx
// asm:   0x182244a3d: mov rdx, qword ptr [rax + 0x4e0]
// asm:   0x182244a44: call qword ptr [rax + 0x4d8]  ; vtable slot 58
// asm:   0x182244a4a: jmp 0x18224494e

void UI_EmoteHandler__UpdatePopup
               (UI_EmoteHandler_o *__this,UI_EmoteTextPopup_o *popup,bool inMenu,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  Cameras_BaseCamera_o *pCVar7;
  Characters_BaseCharacter_o *pCVar8;
  Utility_BaseComponentCache_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Camera_o *pUVar11;
  bool bVar12;
  UnityEngine_LayerMask_o layerMask;
  UnityEngine_Vector3_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_GameObject_o *__this_00;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_o local_88 [9];
  
  if (Il2CppMethodInitialized_184347253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184347253 = '\x01';
  }
  if (popup == (UI_EmoteTextPopup_o *)0x0) goto label_182244a4f;
  pCVar7 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if ((popup->fields).infinitePopup == false) {
    fVar22 = (popup->fields).ShowTimeLeft;
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (popup->fields).ShowTimeLeft = fVar22 - fVar15;
  }
  bVar12 = true;
  if (0.0 < (popup->fields).ShowTimeLeft) {
    bVar12 = inMenu;
  }
  if (bVar12 == false) {
    pCVar8 = (popup->fields).Character;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar12) {
      pCVar8 = (popup->fields).Character;
      if (((pCVar8 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar9 = (pCVar8->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar14 = (pUVar9->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
        pUVar13 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)&local_98,pUVar14,(MethodInfo *)0x0);
        uVar1 = (popup->fields).Offset.fields.x;
        uVar5 = (popup->fields).Offset.fields.y;
        uVar2 = (pUVar13->fields).x;
        uVar6 = (pUVar13->fields).y;
        fVar22 = (float)uVar1 + (float)uVar2;
        fVar15 = (float)uVar5 + (float)uVar6;
        if (((pCVar7 != (Cameras_BaseCamera_o *)0x0) &&
            (pUVar9 = (pCVar7->fields).Cache, pUVar9 != (Utility_BaseComponentCache_o *)0x0)) &&
           (pUVar14 = (pUVar9->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
          fVar23 = (popup->fields).Offset.fields.z + (pUVar13->fields).z;
          pUVar13 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_98,pUVar14,(MethodInfo *)0x0);
          fVar20 = (pUVar13->fields).x;
          fVar19 = (pUVar13->fields).y;
          fVar21 = (pUVar13->fields).z;
          if (Il2CppMethodInitialized_18433dee7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_18433dee7 = '\x01';
          }
          fVar20 = fVar20 - fVar22;
          fVar19 = fVar19 - fVar15;
          fVar21 = fVar21 - fVar23;
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar17 = (double)(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21);
          if (dVar17 < 0.0) {
            dVar17 = sqrt(dVar17);
          }
          else {
            dVar17 = SQRT(dVar17);
          }
          if (500.0 < (float)dVar17) {
            (*(popup->klass->vtable)._22_Hide.methodPtr)(popup,(popup->klass->vtable)._22_Hide.method);
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              bVar12 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
              if (!bVar12) {
                return;
              }
              pUVar14 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
              pUVar11 = (pCVar7->fields).Camera;
              if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                local_a8.y = fVar15;
                local_a8.x = fVar22;
                local_a8.z = fVar23;
                pUVar13 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                    (local_88,pUVar11,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
                if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                  local_98.x = (pUVar13->fields).x;
                  local_98.y = (pUVar13->fields).y;
                  local_98.z = (pUVar13->fields).z;
                  UnityEngine_Transform__set_position
                            (pUVar14,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          else {
            pUVar9 = (pCVar7->fields).Cache;
            if ((pUVar9 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar14 = (pUVar9->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
              pUVar13 = UnityEngine_Transform__get_position
                                  ((UnityEngine_Vector3_o *)&local_98,pUVar14,(MethodInfo *)0x0);
              fVar20 = fVar22 - (pUVar13->fields).x;
              fVar19 = fVar15 - (pUVar13->fields).y;
              fVar21 = fVar23 - (pUVar13->fields).z;
              if (Il2CppMethodInitialized_18433de5f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433de5f = '\x01';
              }
              if (Il2CppMethodInitialized_18433de59 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                Il2CppMethodInitialized_18433de59 = '\x01';
              }
              if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              }
              dVar18 = (double)(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21);
              if (dVar18 < 0.0) {
                dVar18 = sqrt(dVar18);
              }
              else {
                dVar18 = SQRT(dVar18);
              }
              fVar16 = (float)dVar18;
              if (fVar16 <= 1e-05) {
                pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
                fVar20 = (pUVar10->zeroVector).fields.x;
                fVar19 = (pUVar10->zeroVector).fields.y;
                fVar21 = (pUVar10->zeroVector).fields.z;
              }
              else {
                fVar20 = fVar20 / fVar16;
                fVar19 = fVar19 / fVar16;
                fVar21 = fVar21 / fVar16;
              }
              pUVar9 = (pCVar7->fields).Cache;
              if ((pUVar9 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar14 = (pUVar9->fields).Transform, pUVar14 != (UnityEngine_Transform_o *)0x0)) {
                local_a8.y = fVar19;
                local_a8.x = fVar20;
                local_a8.z = fVar21;
                pUVar13 = UnityEngine_Transform__get_forward(local_88,pUVar14,(MethodInfo *)0x0);
                local_98.x = (pUVar13->fields).x;
                local_98.y = (pUVar13->fields).y;
                local_98.z = (pUVar13->fields).z;
                fVar16 = (float)il2cpp_runtime_helper_181d9e200(&local_98);
                if (90.0 < fVar16) goto label_182244a37;
                pCVar8 = (popup->fields).Character;
                if (pCVar8 != (Characters_BaseCharacter_o *)0x0) {
                  bVar12 = Characters_BaseCharacter__IsMainCharacter(pCVar8,(MethodInfo *)0x0);
                  if (!bVar12) {
                    pUVar9 = (pCVar7->fields).Cache;
                    if ((pUVar9 == (Utility_BaseComponentCache_o *)0x0) ||
                       (pUVar14 = (pUVar9->fields).Transform, pUVar14 == (UnityEngine_Transform_o *)0x0))
                    goto label_182244a4f;
                    pUVar13 = UnityEngine_Transform__get_position(local_88,pUVar14,(MethodInfo *)0x0);
                    uVar3._0_4_ = (pUVar13->fields).x;
                    uVar3._4_4_ = (pUVar13->fields).y;
                    fVar16 = (pUVar13->fields).z;
                    layerMask = UnityEngine_LayerMask__op_Implicit
                                          ((__this->fields).CullMask.fields.m_Mask,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                    }
                    local_98.y = fVar19;
                    local_98.x = fVar20;
                    local_a8._0_8_ = uVar3;
                    local_a8.z = fVar16;
                    local_98.z = fVar21;
                    bVar12 = UnityEngine_Physics__Raycast_2fe4eb0
                                       ((UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Vector3_o *)&local_98,
                                        (float)dVar17,(int32_t)layerMask.fields.m_Mask,(MethodInfo *)0x0);
                    if (bVar12) goto label_182244a37;
                  }
                  pUVar11 = (pCVar7->fields).Camera;
                  if (pUVar11 != (UnityEngine_Camera_o *)0x0) {
                    local_98.y = fVar15;
                    local_98.x = fVar22;
                    local_98.z = fVar23;
                    pUVar13 = UnityEngine_Camera__WorldToScreenPoint_2ebe670
                                        (local_88,pUVar11,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0
                                        );
                    uVar4._0_4_ = (pUVar13->fields).x;
                    uVar4._4_4_ = (pUVar13->fields).y;
                    fVar22 = (pUVar13->fields).z;
                    pUVar14 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)popup,(MethodInfo *)0x0);
                    if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                      local_98._0_8_ = uVar4;
                      local_98.z = fVar22;
                      UnityEngine_Transform__set_position
                                (pUVar14,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
                      (*(popup->klass->vtable)._21_Show.methodPtr)
                                (popup,(popup->klass->vtable)._21_Show.method);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
label_182244a4f:
      ThrowNullReferenceException();
    }
  }
label_182244a37:
  (*(popup->klass->vtable)._58_HideImmediate.methodPtr)(popup,(popup->klass->vtable)._58_HideImmediate.method)
  ;
  return;
}


// UI.EmoteHandler$$LateUpdate
// il2cpp: void UI_EmoteHandler__LateUpdate (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182242cd0
// eh: try 0x182242e21..0x182242efe -> pad 0x183317f30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182242e5d: mov rdx, qword ptr [rip + 0x1e3b1c4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x182242e64: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182242e69: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182242e6e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182242e73: test rcx, rcx
// asm:   0x182242e76: jne 0x182242f41
// asm:   0x182242e7c: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x182242e84: movzx esi, byte ptr [rsp + 0x90]
// asm:   0x182242f0f: mov rdx, qword ptr [rip + 0x1e3b112]  ; MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose
// asm:   0x182242f16: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182242f1b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182242f20: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182242f25: test rcx, rcx
// asm:   0x182242f28: jne 0x182242f47
// asm:   0x182242f41: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182242f47: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void UI_EmoteHandler__LateUpdate(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined1 local_48 [16];
  UI_EmoteTextPopup_o *local_38;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  UI_EmoteTextPopup_o *local_20;
  
  if (Il2CppMethodInitialized_184347254 == '\0') {
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
    Il2CppMethodInitialized_184347254 = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (UI_EmoteTextPopup_o *)0x0;
  fVar1 = (__this->fields)._currentEmoteCooldown;
  fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._currentEmoteCooldown = fVar1 - fVar7;
  bVar5 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if (bVar5) {
    bVar5 = true;
  }
  else {
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) goto label_182242f56;
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
    }
    bVar5 = *(int *)&(*(uint64_t *)((char *)pGVar3 + 0x70)) == 0;
  }
  pSVar4 = (__this->fields)._emoteTextPopups;
  if (pSVar4 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_T__o *)pSVar4,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator);
    local_30 = (undefined1  [8])local_48._0_8_;
    pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
    local_20 = local_38;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
      if (!bVar6) break;
      UI_EmoteHandler__UpdatePopup(__this,local_20,bVar5,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
               MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
    pSVar4 = (__this->fields)._emoteEmojiPopups;
    if (pSVar4 != (System_Collections_Generic_List_EmoteTextPopup__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_T__o *)pSVar4,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_GetEnumerator)
      ;
      local_30 = (undefined1  [8])local_48._0_8_;
      pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
      local_20 = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_MoveNext);
        if (!bVar6) break;
        UI_EmoteHandler__UpdatePopup(__this,local_20,bVar5,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                 MethodInfo_System_Collections_Generic_List_Enumerator_EmoteTextPopup_Dispose);
      return;
    }
  }
label_182242f56:
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$SanitizeText
// il2cpp: System_String_o* UI_EmoteHandler__SanitizeText (System_String_o* value, const MethodInfo* method);
// 0x182243e00

System_String_o * UI_EmoteHandler__SanitizeText(System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    Il2CppMethodInitialized_184347255 = '\x01';
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  pSVar1 = Anticheat_ChatFilter__FilterBadWords(value,(MethodInfo *)0x0);
  pSVar1 = Anticheat_ChatFilter__FilterSizeTag(pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    if (0x14 < (pSVar1->fields)._stringLength) {
      pSVar1 = System_String__Substring_1972740(pSVar1,0,0x14,(MethodInfo *)0x0);
      return pSVar1;
    }
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$.ctor
// il2cpp: void UI_EmoteHandler___ctor (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182244a60

void UI_EmoteHandler___ctor(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_List_EmoteTextPopup__o *pSVar2;
  System_Int32_array *layers;
  
  if (Il2CppMethodInitialized_184347256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    Il2CppMethodInitialized_184347256 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
  (__this->fields)._emoteTextPopups = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteTextPopups,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_EmoteTextPopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar2,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_EmoteTextPopup_ctor);
  (__this->fields)._emoteEmojiPopups = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emoteEmojiPopups,pSVar2);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,3);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if ((((int)layers->max_length != 0) &&
        (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll,
        1 < (uint)layers->max_length)) &&
       (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
       2 < (uint)layers->max_length)) {
      layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).CullMask.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$<Awake>b__16_0
// il2cpp: void UI_EmoteHandler___Awake_b__16_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182244400

void UI_EmoteHandler___Awake_b__16_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_BasePopup_o *pUVar1;
  
  if (Il2CppMethodInitialized_18434724d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_SetEmoteWheel_b__25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_WheelPopup);
    Il2CppMethodInitialized_18434724d = '\x01';
  }
  pUVar1 = (__this->fields)._emoteWheelPopup;
  if (pUVar1 != (UI_BasePopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    (__this->fields).IsActive = false;
    return;
  }
  ThrowNullReferenceException();
}


// UI.EmoteHandler$$<SetEmoteWheel>b__25_0
// il2cpp: void UI_EmoteHandler___SetEmoteWheel_b__25_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182244480

void
UI_EmoteHandler___SetEmoteWheel_b__25_0(UI_EmoteHandler_o* __this, MethodInfo* method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,(MethodInfo *)0x0);
  return;
}


// UI.EmoteHandler$$<NextEmoteWheel>b__26_0
// il2cpp: void UI_EmoteHandler___NextEmoteWheel_b__26_0 (UI_EmoteHandler_o* __this, const MethodInfo* method);
// 0x182244480

void UI_EmoteHandler___NextEmoteWheel_b__26_0(UI_EmoteHandler_o *__this,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteWheelSelect(__this,(MethodInfo *)0x0);
  return;
}


