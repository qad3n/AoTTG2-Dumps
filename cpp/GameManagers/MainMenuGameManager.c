// Type: GameManagers.MainMenuGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/MainMenuGameManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/MainMenuGameManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.MainMenuGameManager$$OnJoinedLobby
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedLobby (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4234600

void GameManagers_MainMenuGameManager__OnJoinedLobby
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *pUVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UI_MainMenu_o *__this_01;
  
  if (DAT_0570513e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MainMenu_GetComponent_MainMenu);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomI);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__RoomInfo);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570513e = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__RoomInfo);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomI);
  if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8)
       = __this_00;
  il2cpp_runtime_glue();
  if (**(char **)(TypeInfo_MainMenuGameManager + 0xb8) == '\0') {
    if (DAT_05704d93 == '\0') {
      il2cpp_init_method_metadata();
      DAT_05704d93 = '\x01';
    }
    if (**(char **)(TypeInfo_HeadlessManager + 0xb8) != '\0') {
      ApplicationManagers_HeadlessManager__OnJoinedLobby((MethodInfo *)0x0);
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar1 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (pUVar1 != (UnityEngine_Component_o *)0x0) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>(pUVar1,MethodInfo_MainMenu_GetComponent_MainMenu);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar1 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((pUVar1 != (UnityEngine_Component_o *)0x0) &&
           (__this_01 = (UI_MainMenu_o *)
                        UnityEngine_Component__GetComponent<object>(pUVar1,MethodInfo_MainMenu_GetComponent_MainMenu),
           __this_01 != (UI_MainMenu_o *)0x0)) {
          UI_MainMenu__ShowMultiplayerRoomListPopup(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_04234858;
    }
  }
  else {
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
        (Settings_MultiplayerSettings_o *)0x0) {
LAB_04234858:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_MultiplayerSettings__Disconnect
              ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined1 **)(TypeInfo_MainMenuGameManager + 0xb8) = 0;
  }
  return;
}


// GameManagers.MainMenuGameManager$$OnConnectedToMaster
// il2cpp: void GameManagers_MainMenuGameManager__OnConnectedToMaster (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4234860

void GameManagers_MainMenuGameManager__OnConnectedToMaster
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  
  if (DAT_0570513f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_0570513f = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__JoinLobby((MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Photon_Pun_PhotonNetwork__JoinLobby((MethodInfo *)0x0);
    return;
  }
  return;
}


// GameManagers.MainMenuGameManager$$Update
// il2cpp: void GameManagers_MainMenuGameManager__Update (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4234930

void GameManagers_MainMenuGameManager__Update
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinedRoom
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinedRoom (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4234940

void GameManagers_MainMenuGameManager__OnJoinedRoom
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05705140 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705140 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 != 0) {
    GameManagers_InGameManager__OnJoinRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__OnJoinRoom((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnJoinRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnJoinRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x42349a0

void GameManagers_MainMenuGameManager__OnJoinRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,
               System_String_o *message,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05705141 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_05705141 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$OnCreateRoomFailed
// il2cpp: void GameManagers_MainMenuGameManager__OnCreateRoomFailed (GameManagers_MainMenuGameManager_o* __this, int16_t returnCode, System_String_o* message, const MethodInfo* method);
// 0x4234a10

void GameManagers_MainMenuGameManager__OnCreateRoomFailed
               (GameManagers_MainMenuGameManager_o *__this,int16_t returnCode,
               System_String_o *message,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05705142 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_05705142 = '\x01';
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$UpdateCachedRoomList
// il2cpp: void GameManagers_MainMenuGameManager__UpdateCachedRoomList (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x4234a80

void GameManagers_MainMenuGameManager__UpdateCachedRoomList
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  char cVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value;
  int index;
  
  if (DAT_05705143 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_RoomInfo_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    DAT_05705143 = '\x01';
  }
  if (roomList != (System_Collections_Generic_List_RoomInfo__o *)0x0) {
    if (0 < (roomList->fields)._size) {
      index = 0;
      do {
        while( true ) {
          value = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)roomList,index,
                             MethodInfo_RoomInfo_get_Item);
          if (value == (Il2CppObject *)0x0) goto LAB_04234b8b;
          cVar1 = *(char *)&value[1].klass;
          if (*(int *)(TypeInfo_MainMenuGameManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                       (*(long *)(TypeInfo_MainMenuGameManager + 0xb8) + 8);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto LAB_04234b8b;
          if (cVar1 == '\0') break;
          System_Collections_Generic_Dictionary<object__object>__Remove
                    (__this_00,(Il2CppObject *)value[4].klass,MethodInfo_Boolean_Remove);
          index = index + 1;
          if ((roomList->fields)._size <= index) {
            return;
          }
        }
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (__this_00,(Il2CppObject *)value[4].klass,value,MethodInfo_Void_set_Item);
        index = index + 1;
      } while (index < (roomList->fields)._size);
    }
    return;
  }
LAB_04234b8b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.MainMenuGameManager$$OnRoomListUpdate
// il2cpp: void GameManagers_MainMenuGameManager__OnRoomListUpdate (GameManagers_MainMenuGameManager_o* __this, System_Collections_Generic_List_RoomInfo__o* roomList, const MethodInfo* method);
// 0x4234b90

void GameManagers_MainMenuGameManager__OnRoomListUpdate
               (GameManagers_MainMenuGameManager_o *__this,
               System_Collections_Generic_List_RoomInfo__o *roomList,MethodInfo *method)

{
  GameManagers_MainMenuGameManager__UpdateCachedRoomList(__this,roomList,method);
  ApplicationManagers_HeadlessManager__OnRoomListUpdate((MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.ctor
// il2cpp: void GameManagers_MainMenuGameManager___ctor (GameManagers_MainMenuGameManager_o* __this, const MethodInfo* method);
// 0x4234ba0

void GameManagers_MainMenuGameManager___ctor
               (GameManagers_MainMenuGameManager_o *__this,MethodInfo *method)

{
  GameManagers_BaseGameManager___ctor((GameManagers_BaseGameManager_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.MainMenuGameManager$$.cctor
// il2cpp: void GameManagers_MainMenuGameManager___cctor (const MethodInfo* method);
// 0x4234bb0

void GameManagers_MainMenuGameManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (DAT_05705144 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomI);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__RoomInfo);
    il2cpp_init_method_metadata(&TypeInfo_MainMenuGameManager);
    DAT_05705144 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__RoomInfo);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_Photon_Realtime_RoomI);
  lVar1 = *(long *)(TypeInfo_MainMenuGameManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = __this;
  il2cpp_runtime_glue(lVar1 + 8,__this);
  return;
}


