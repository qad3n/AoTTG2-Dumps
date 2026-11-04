// Type: GameManagers.MainMenuGameManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/MainMenuGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// --------------------------------

// GameManagers.MainMenuGameManager$$OnJoinedLobby
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedLobby (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x181e68730

void GameManagers_MainMenuGameManager__OnJoinedLobby
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this_01;
  UI_MainMenu_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344ed5 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList,__this_01);
  if (TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom == false) {
    if (Il2CppMethodInitialized_184344f91 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_184344f91 = '\x01';
    }
    if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
      ApplicationManagers_HeadlessManager__OnJoinedLobby((MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      pUVar3 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MainMenu);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MainMenu),
         pUVar3 != (UI_MainMenu_o *)0x0)) {
        UI_MainMenu__ShowMultiplayerRoomListPopup(pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__Disconnect(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
      }
      TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MainMenuGameManager$$OnConnectedToMaster
// il2cpp: void GameManagers_MainMenuGameManager__OnConnectedToMaster (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x181e685f0

void GameManagers_MainMenuGameManager__OnConnectedToMaster
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344ed6 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__JoinLobby((MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.MainMenuGameManager$$Update
// il2cpp: void GameManagers_MainMenuGameManager__Update (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x180547020

void
GameManagers_MainMenuGameManager__Update(GameManagers_MainMenuGameManager_o* __this, MethodInfo* method)

{
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedRoom (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x181e689c0

void GameManagers_MainMenuGameManager__OnJoinedRoom
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344ed7 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__OnJoinRoom((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x181e686e0

void GameManagers_MainMenuGameManager__OnJoinRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184344ed8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnCreateRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnCreateRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x181e68690

void GameManagers_MainMenuGameManager__OnCreateRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184344ed9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$UpdateCachedRoomList
// il2cpp: void GameManagers_MainMenuGameManager__UpdateCachedRoomList (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x181e68b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e68bbb: nop dword ptr [rax + rax]

void GameManagers_MainMenuGameManager__UpdateCachedRoomList
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Photon_Realtime_RoomInfo_o *value;
  int index;
  
  if (Il2CppMethodInitialized_184344eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_184344eda = '\x01';
  }
  index = 0;
  if (roomList != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    while( true ) {
      if ((roomList->fields)._size <= index) {
        return;
      }
      value = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)roomList,index,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
      if (value == (Photon_Realtime_RoomInfo_o *)0x0) break;
      if ((value->fields).RemovedFromList == false) {
        if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)(value->fields).name,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
        index = index + 1;
      }
      else {
        if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)(value->fields).name,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
        index = index + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MainMenuGameManager$$OnRoomListUpdate
// il2cpp: void GameManagers_MainMenuGameManager__OnRoomListUpdate (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x181e68a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e68a6b: nop dword ptr [rax + rax]

void GameManagers_MainMenuGameManager__OnRoomListUpdate
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Photon_Realtime_RoomInfo_o *value;
  int index;
  
  if (Il2CppMethodInitialized_184344eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_184344eda = '\x01';
  }
  index = 0;
  if (roomList != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    while( true ) {
      if ((roomList->fields)._size <= index) {
        ApplicationManagers_HeadlessManager__OnRoomListUpdate((MethodInfo *)0x0);
        return;
      }
      value = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)roomList,index,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
      if (value == (Photon_Realtime_RoomInfo_o *)0x0) break;
      if ((value->fields).RemovedFromList == false) {
        if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)(value->fields).name,(Il2CppObject *)value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
        index = index + 1;
      }
      else {
        if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)(value->fields).name,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
        index = index + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.MainMenuGameManager$$.ctor
// il2cpp: void GameManagers_MainMenuGameManager___ctor (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x181e68d20

void GameManagers_MainMenuGameManager___ctor(GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager___ctor
            ((Photon_Voice_PUN_UtilityScripts_VoiceDebugScript_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.cctor
// il2cpp: void GameManagers_MainMenuGameManager___cctor (const MethodInfo* method);
// 0x181e68c90

void GameManagers_MainMenuGameManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this;
  
  if (Il2CppMethodInitialized_184344edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_184344edb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
  TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList,__this);
  return;
}


