// Type: GameManagers.MainMenuGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/MainMenuGameManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/MainMenuGameManager.cs
// --------------------------------

// GameManagers.MainMenuGameManager$$OnJoinedLobby
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedLobby (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x594b360

void GameManagers_MainMenuGameManager__OnJoinedLobby
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  GameManagers_MainMenuGameManager_StaticFields *pGVar1;
  Settings_MultiplayerSettings_o *__this_00;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this_01;
  UI_MainMenu_o *pUVar4;
  
  if (Il2CppMethodInitialized_07545870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545870 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  pGVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields;
  pGVar1->RoomList = __this_01;
  Il2CppCodeGenWriteBarrier(&pGVar1->RoomList);
  pGVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields;
  pGVar1->RoomListReceived = false;
  if (pGVar1->JustLeftRoom == false) {
    if (Il2CppMethodInitialized_075458ae == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_HeadlessManager);
      Il2CppMethodInitialized_075458ae = '\x01';
    }
    if (TypeInfo_ApplicationManagers_HeadlessManager->static_fields->_IsHeadless_k__BackingField != false) {
      ApplicationManagers_HeadlessManager__OnJoinedLobby((MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgQuickPlay);
    }
    bVar3 = Gisketch_Aottg2UI_Game_AottgQuickPlay__get_IsRunning((MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar2 != (UI_BaseMenu_o *)0x0) {
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar2,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_MainMenu);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
          if ((pUVar2 != (UI_BaseMenu_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar2,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_MainMenu
                                 ), pUVar4 != (UI_MainMenu_o *)0x0)) {
            UI_MainMenu__ShowMultiplayerRoomList(pUVar4,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_0594b5eb;
      }
    }
  }
  else {
    __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
    if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) {
label_0594b5eb:
      ThrowNullReferenceException();
    }
    Settings_MultiplayerSettings__Disconnect(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
    }
    TypeInfo_GameManagers_MainMenuGameManager->static_fields->JustLeftRoom = false;
  }
  return;
}


// GameManagers.MainMenuGameManager$$OnConnectedToMaster
// il2cpp: void GameManagers_MainMenuGameManager__OnConnectedToMaster (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x594b5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594b60d: cmp byte ptr [rip + 0x1bf96ae], 0

void GameManagers_MainMenuGameManager__OnConnectedToMaster
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  
  if (Il2CppMethodInitialized_07545871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07545871 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__JoinLobby((MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__JoinLobby((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$Update
// il2cpp: void GameManagers_MainMenuGameManager__Update (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x594b6c0

void GameManagers_MainMenuGameManager__Update(GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedRoom (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x594b6d0

void GameManagers_MainMenuGameManager__OnJoinedRoom
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07545872 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_GameManagers_InGameManager;
  }
  TypeInfo_GameManagers_InGameManager = (GameManagers_InGameManager_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    GameManagers_InGameManager__OnJoinRoom((MethodInfo *)klass);
    return;
  }
  GameManagers_InGameManager__OnJoinRoom((MethodInfo *)klass);
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x594b730

void GameManagers_MainMenuGameManager__OnJoinRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_07545873 = '\x01';
  }
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  GameManagers_MainMenuGameManager__OnRoomEntryFailed(returnCode,message,false,method);
  return;
}


// GameManagers.MainMenuGameManager$$OnCreateRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnCreateRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x594b810

void GameManagers_MainMenuGameManager__OnCreateRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,System_String_o *message,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_07545874 = '\x01';
  }
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  GameManagers_MainMenuGameManager__OnRoomEntryFailed(returnCode,message,true,method);
  return;
}


// GameManagers.MainMenuGameManager$$OnRoomEntryFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnRoomEntryFailed (int16_t returnCode, System_String_o* message, bool creating, const MethodInfo* method);
// 0x594b780

void GameManagers_MainMenuGameManager__OnRoomEntryFailed
               (int16_t returnCode,System_String_o *message,bool creating,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  
  if (Il2CppMethodInitialized_07545875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545875 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  __this = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if (__this == (Settings_MultiplayerSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_MultiplayerSettings__OnRoomEntryFailed(__this,(MethodInfo *)0x0);
  ApplicationManagers_AottgNetworkNotifications__ReportRoomEntryFailed(returnCode,creating,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$UpdateCachedRoomList
// il2cpp: void GameManagers_MainMenuGameManager__UpdateCachedRoomList (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x594b870
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x594b936: jmp 0x594b9bb
// asm:   0x594b954: jmp 0x594b9ca

void GameManagers_MainMenuGameManager__UpdateCachedRoomList
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Photon_Realtime_RoomInfo_o *value;
  int index;
  
  if (Il2CppMethodInitialized_07545876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_07545876 = '\x01';
  }
  if (roomList == (System_Collections_Generic_List_RoomInfo__o *)0x0) {
label_0594b9ca:
    ThrowNullReferenceException();
  }
  if (0 < (roomList->fields)._size) {
    index = 0;
    do {
      while( true ) {
        value = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)roomList,index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_RoomInfo_get_Item)
        ;
        if (value == (Photon_Realtime_RoomInfo_o *)0x0) goto label_0594b9ca;
        uVar1 = (TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor;
        if ((value->fields).RemovedFromList == false) break;
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0594b9ca;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)(value->fields).name,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_Remove);
        index = index + 1;
        if ((roomList->fields)._size <= index) {
          return;
        }
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
      }
      else {
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomList;
      }
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0594b9ca;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar2,(Il2CppObject *)(value->fields).name,(Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_set_Item);
      index = index + 1;
    } while (index < (roomList->fields)._size);
  }
  return;
}


// GameManagers.MainMenuGameManager$$OnRoomListUpdate
// il2cpp: void GameManagers_MainMenuGameManager__OnRoomListUpdate (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x594b9d0

void GameManagers_MainMenuGameManager__OnRoomListUpdate
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  GameManagers_MainMenuGameManager_c **ppGVar1;
  
  if (g_data_07545877 == '\0') {
    ppGVar1 = &TypeInfo_GameManagers_MainMenuGameManager;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    g_data_07545877 = '\x01';
    method = extraout_RDX;
    __this = (GameManagers_MainMenuGameManager_o *)ppGVar1;
  }
  GameManagers_MainMenuGameManager__UpdateCachedRoomList(__this,roomList,method);
  if ((TypeInfo_GameManagers_MainMenuGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_MainMenuGameManager);
  }
  TypeInfo_GameManagers_MainMenuGameManager->static_fields->RoomListReceived = true;
  ApplicationManagers_HeadlessManager__OnRoomListUpdate((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.ctor
// il2cpp: void GameManagers_MainMenuGameManager___ctor (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x594ba30

void GameManagers_MainMenuGameManager___ctor(GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.cctor
// il2cpp: void GameManagers_MainMenuGameManager___cctor (const MethodInfo* method);
// 0x594ba40

void GameManagers_MainMenuGameManager___cctor(MethodInfo *method)

{
  GameManagers_MainMenuGameManager_StaticFields *pGVar1;
  System_Collections_Generic_Dictionary_string__RoomInfo__o *__this;
  
  if (Il2CppMethodInitialized_07545878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MainMenuGameManager);
    Il2CppMethodInitialized_07545878 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_RoomInfo);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_RoomInfo_ctor);
  pGVar1 = TypeInfo_GameManagers_MainMenuGameManager->static_fields;
  pGVar1->RoomList = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->RoomList);
  return;
}


