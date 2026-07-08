// Type: Settings.MultiplayerSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/MultiplayerSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/MultiplayerSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.MultiplayerSettings.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass19_0___ctor (Settings_MultiplayerSettings___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x3f089f0

void Settings_MultiplayerSettings_<>c__DisplayClass19_0___ctor
               (Settings_MultiplayerSettings___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass19_0$$<ConnectServer>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass19_0___ConnectServer_b__0 (Settings_MultiplayerSettings___c__DisplayClass19_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x3f0a6d0

void Settings_MultiplayerSettings_<>c__DisplayClass19_0__<ConnectServer>b__0
               (Settings_MultiplayerSettings___c__DisplayClass19_0_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  undefined4 in_register_00000034;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
    Settings_MultiplayerSettings__ConnectServerInternal
              (__this_00,(__this->fields).region,(MethodInfo *)error);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(0,CONCAT44(in_register_00000034,success));
}


// Settings.MultiplayerSettings$$get_FileName
// il2cpp: System_String_o* Settings_MultiplayerSettings__get_FileName (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f08790

System_String_o *
Settings_MultiplayerSettings__get_FileName
          (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c54 == '\0') {
    il2cpp_init_method_metadata(&"Multiplayer.json");
    DAT_05703c54 = '\x01';
  }
  return "Multiplayer.json";
}


// Settings.MultiplayerSettings$$IsConnectedToPublic
// il2cpp: bool Settings_MultiplayerSettings__IsConnectedToPublic (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f087c0

bool_conflict
Settings_MultiplayerSettings__IsConnectedToPublic
          (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (DAT_05703c55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType == 2) {
    pSVar1 = (__this->fields).LobbyMode;
    if (pSVar1 != (Settings_IntSetting_o *)0x0) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields)._value == 0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// Settings.MultiplayerSettings$$Disconnect
// il2cpp: void Settings_MultiplayerSettings__Disconnect (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f08810

void Settings_MultiplayerSettings__Disconnect
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  long lVar1;
  Photon_Realtime_LoadBalancingClient_o *__this_00;
  Photon_Voice_VoiceFollowClient_o *__this_01;
  bool_conflict bVar2;
  
  if (DAT_05703c56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05703c56 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__Disconnect((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Realtime_LoadBalancingClient_o **)(lVar1 + 0x48),
     __this_00 != (Photon_Realtime_LoadBalancingClient_o *)0x0)) {
    bVar2 = Photon_Realtime_LoadBalancingClient__get_IsConnected(__this_00,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
    if (__this_01 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
      Photon_Voice_VoiceFollowClient__Disconnect(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$ConnectServer
// il2cpp: void Settings_MultiplayerSettings__ConnectServer (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x3f088d0

void Settings_MultiplayerSettings__ConnectServer
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  MethodInfo *method_00;
  char cVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703c57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void__ConnectServer_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass19_0);
    DAT_05703c57 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass19_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_00 + 1,__this);
  *(int32_t *)&__this_00[1].monitor = region;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = extraout_RDX_00;
  }
  else {
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    method_00 = extraout_RDX;
  }
  if (cVar1 != '\0') {
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,1,(MethodInfo *)0x0);
    return;
  }
  Settings_MultiplayerSettings__ConnectServerInternal
            (__this,*(int32_t *)&__this_00[1].monitor,method_00);
  return;
}


// Settings.MultiplayerSettings$$ConnectServerInternal
// il2cpp: void Settings_MultiplayerSettings__ConnectServerInternal (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x3f08a00

void Settings_MultiplayerSettings__ConnectServerInternal
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  int iVar1;
  int32_t port;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  long *plVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_Net_NetworkCredential_o *pSVar9;
  Photon_Realtime_AppSettings_o *pPVar10;
  Photon_Realtime_AuthenticationValues_o *__this_00;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long lVar12;
  undefined4 in_register_00000034;
  MethodInfo *method_04;
  Settings_MultiplayerSettings_o *__this_01;
  
  method_04 = (MethodInfo *)CONCAT44(in_register_00000034,region);
  __this_01 = __this;
  if (DAT_05703c58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_AppSettings);
    il2cpp_init_method_metadata(&TypeInfo_AuthenticationValues);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    __this_01 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_init_method_metadata();
    DAT_05703c58 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_01,method_04);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__set_AuthValues
            ((Photon_Realtime_AuthenticationValues_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).AppIdMode;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto LAB_03f08fd3;
  if ((pSVar2->fields)._value != 0) {
    pSVar3 = (__this->fields).CloudAddresses;
    if (pSVar3 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      pSVar8 = (System_String_o *)
               System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,region,
                          MethodInfo_String_get_Item);
      (__this->fields).CurrentMultiplayerServerType = 1;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = (__this->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
         (lVar12 = **(long **)(TypeInfo_PhotonNetwork + 0xb8), lVar12 == 0)) goto LAB_03f08fd3;
      *(System_String_o **)(lVar12 + 0x20) = (pSVar4->fields)._value;
      il2cpp_runtime_glue(lVar12 + 0x20);
      lVar12 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_00);
      if (lVar12 == 0) goto LAB_03f08fd3;
      *(System_Net_NetworkCredential_o **)(lVar12 + 0x18) = pSVar9;
      il2cpp_runtime_glue(lVar12 + 0x18);
      Photon_Pun_PhotonNetwork__ConnectToRegion(pSVar8,(MethodInfo *)0x0);
      pPVar10 = (Photon_Realtime_AppSettings_o *)il2cpp_runtime_glue(TypeInfo_AppSettings);
      Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
         (pPVar10 == (Photon_Realtime_AppSettings_o *)0x0)) goto LAB_03f08fd3;
      (pPVar10->fields).AppIdVoice = (pSVar4->fields)._value;
      il2cpp_runtime_glue(&(pPVar10->fields).AppIdVoice);
      (pPVar10->fields).FixedRegion = pSVar8;
      il2cpp_runtime_glue(&(pPVar10->fields).FixedRegion,pSVar8);
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar5 = *(long **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
      if (plVar5 == (long *)0x0) goto LAB_03f08fd3;
      (**(code **)(*plVar5 + 0x1a8))(plVar5,pPVar10,*(undefined8 *)(*plVar5 + 0x1b0));
      lVar12 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_03f08fd3;
      lVar12 = *(long *)(lVar12 + 0x48);
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_01);
      if (lVar12 == 0) goto LAB_03f08fd3;
      goto LAB_03f08ef3;
    }
    goto LAB_03f08fd3;
  }
  pSVar3 = (__this->fields).PublicAddresses;
  if (pSVar3 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0)
  goto LAB_03f08fd3;
  pSVar8 = (System_String_o *)
           System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,region,
                      MethodInfo_String_get_Item);
  (__this->fields).CurrentMultiplayerServerType = 2;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if (cVar6 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05703cf1 == '\0') goto LAB_03f08f26;
LAB_03f08cb9:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (DAT_05703cf1 != '\0') goto LAB_03f08cb9;
LAB_03f08f26:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05703cf1 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar7 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78),
                       (MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      __this_00 = (Photon_Realtime_AuthenticationValues_o *)il2cpp_runtime_glue(TypeInfo_AuthenticationValues);
      Photon_Realtime_AuthenticationValues___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto LAB_03f08fd3;
      (__this_00->fields).authType = '\0';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
        (__this_00->fields)._UserId_k__BackingField = pSVar11;
        il2cpp_runtime_glue(&(__this_00->fields)._UserId_k__BackingField,pSVar11);
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_03f08f91;
LAB_03f08d47:
        if (DAT_05703cf1 != '\0') goto LAB_03f08d54;
LAB_03f08fa3:
        il2cpp_init_method_metadata(&TypeInfo_AccountManager);
        DAT_05703cf1 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_03f08d47;
LAB_03f08f91:
        il2cpp_init_class();
        if (DAT_05703cf1 == '\0') goto LAB_03f08fa3;
LAB_03f08d54:
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      (*(__this_00->klass->vtable)._7_AddAuthParameter.methodPtr)
                (__this_00,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78));
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Photon_Pun_PhotonNetwork__set_AuthValues(__this_00,(MethodInfo *)0x0);
    }
  }
  port = (__this->fields).DefaultPort;
  pSVar11 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar8,port,pSVar11,(MethodInfo *)0x0);
  lVar12 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
  pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,1,method_02);
  if (lVar12 != 0) {
    *(System_Net_NetworkCredential_o **)(lVar12 + 0x18) = pSVar9;
    il2cpp_runtime_glue(lVar12 + 0x18);
    pPVar10 = (Photon_Realtime_AppSettings_o *)il2cpp_runtime_glue(TypeInfo_AppSettings);
    Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
    if (pPVar10 != (Photon_Realtime_AppSettings_o *)0x0) {
      (pPVar10->fields).Server = pSVar8;
      il2cpp_runtime_glue(&(pPVar10->fields).Server,pSVar8);
      (pPVar10->fields).Port = (__this->fields).DefaultPort;
      *(undefined1 *)&(pPVar10->fields).UseNameServer = 0;
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar5 = *(long **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x1a8))(plVar5,pPVar10,*(undefined8 *)(*plVar5 + 0x1b0));
        lVar12 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
        if (lVar12 != 0) {
          lVar12 = *(long *)(lVar12 + 0x48);
          pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,1,method_03);
          if (lVar12 != 0) {
LAB_03f08ef3:
            *(System_Net_NetworkCredential_o **)(lVar12 + 0x18) = pSVar9;
            il2cpp_runtime_glue(lVar12 + 0x18,pSVar9);
            return;
          }
        }
      }
    }
  }
LAB_03f08fd3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$ConnectLAN
// il2cpp: void Settings_MultiplayerSettings__ConnectLAN (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f090f0

void Settings_MultiplayerSettings__ConnectLAN
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  int32_t port;
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *masterServerAddress;
  System_String_o *appID;
  long lVar3;
  bool_conflict bVar4;
  System_Net_NetworkCredential_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Settings_MultiplayerSettings_o *__this_00;
  
  __this_00 = __this;
  if (DAT_05703c59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    __this_00 = (Settings_MultiplayerSettings_o *)&MethodInfo_Int32_get_Value;
    il2cpp_init_method_metadata();
    DAT_05703c59 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_00,method);
  pSVar1 = (__this->fields).LanIP;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (pSVar2 = (__this->fields).LanPort, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    masterServerAddress = (pSVar1->fields)._value;
    port = (pSVar2->fields)._value;
    appID = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = Photon_Pun_PhotonNetwork__ConnectToMaster
                      (masterServerAddress,port,appID,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      lVar3 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      pSVar5 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_00);
      if (lVar3 == 0) goto LAB_03f091ec;
      *(System_Net_NetworkCredential_o **)(lVar3 + 0x18) = pSVar5;
      il2cpp_runtime_glue(lVar3 + 0x18,pSVar5);
      (__this->fields).CurrentMultiplayerServerType = 0;
    }
    return;
  }
LAB_03f091ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$ConnectOffline
// il2cpp: void Settings_MultiplayerSettings__ConnectOffline (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f09200

void Settings_MultiplayerSettings__ConnectOffline
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  
  __this_00 = __this;
  if (DAT_05703c5a == '\0') {
    __this_00 = (Settings_MultiplayerSettings_o *)&TypeInfo_PhotonNetwork;
    il2cpp_init_method_metadata();
    DAT_05703c5a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_00,method);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$GetCurrentLobby
// il2cpp: System_Net_NetworkCredential_o* Settings_MultiplayerSettings__GetCurrentLobby (Settings_MultiplayerSettings_o* __this, bool isPublic, const MethodInfo* method);
// 0x3f08fe0

System_Net_NetworkCredential_o *
Settings_MultiplayerSettings__GetCurrentLobby
          (Settings_MultiplayerSettings_o *__this,bool_conflict isPublic,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *userName;
  System_Net_NetworkCredential_o *pSVar3;
  
  if (DAT_05703c5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    il2cpp_init_method_metadata(&TypeInfo_NetworkCredential);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Public");
    DAT_05703c5b = '\x01';
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value == 0) {
      if ((char)isPublic != '\0') {
        if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = ApplicationManagers_ApplicationVersion__GetVersion((MethodInfo *)0x0);
        return pSVar3;
      }
      pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar3,"Public","Public",(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar2 = (__this->fields).CustomLobby;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      userName = (pSVar2->fields)._value;
      pSVar3 = (System_Net_NetworkCredential_o *)il2cpp_runtime_glue(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar3,userName,userName,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$StartRoom
// il2cpp: void Settings_MultiplayerSettings__StartRoom (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f09260

void Settings_MultiplayerSettings__StartRoom
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  long lVar3;
  Il2CppObject *key;
  Settings_IntSetting_o *pSVar4;
  Photon_Voice_VoiceFollowClient_o *__this_00;
  Settings_MultiplayerSettings_o *pSVar5;
  System_String_o *pSVar6;
  ExitGames_Client_Photon_Hashtable_o *__this_01;
  Il2CppObject *value;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  Photon_Realtime_RoomOptions_o *pPVar9;
  undefined1 local_71;
  System_String_o *local_70;
  int32_t local_64;
  System_String_o *local_60;
  bool_conflict local_54;
  System_String_o *local_50;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  Settings_MultiplayerSettings_o *local_38;
  
  if (DAT_05703c5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    il2cpp_init_method_metadata(&TypeInfo_ChatFilter);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Hashtable);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerSettings);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RoomOptions);
    il2cpp_init_method_metadata(&TypeInfo_RoomProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    il2cpp_init_method_metadata(&"HashKey");
    DAT_05703c5c = '\x01';
  }
  local_64 = 0;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 == 0) || (*(long *)(lVar2 + 0x38) == 0)) ||
     (lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + 0x50), lVar3 == 0)) goto LAB_03f09a8e;
  pSVar7 = *(System_String_o **)(lVar3 + 0x18);
  if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_70 = Anticheat_ChatFilter__FilterBadWords(pSVar7,(MethodInfo *)0x0);
  lVar3 = *(long *)(lVar2 + 0x38);
  if ((((lVar3 == 0) || (*(long *)(lVar3 + 0x28) == 0)) ||
      ((*(long *)(lVar3 + 0x30) == 0 ||
       ((*(long *)(lVar3 + 0x60) == 0 || (*(long *)(lVar3 + 0x58) == 0)))))) ||
     (pSVar7 = *(System_String_o **)(*(long *)(lVar3 + 0x58) + 0x18),
     pSVar7 == (System_String_o *)0x0)) goto LAB_03f09a8e;
  local_48 = *(Il2CppObject **)(*(long *)(lVar3 + 0x28) + 0x18);
  local_40 = *(Il2CppObject **)(*(long *)(lVar3 + 0x30) + 0x18);
  local_54 = *(bool_conflict *)(*(long *)(lVar3 + 0x60) + 0x14);
  local_38 = __this;
  if ((pSVar7->fields)._stringLength < 1) {
    pSVar6 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    local_50 = pSVar6;
  }
  else {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Utility_Util__CreateSalt((MethodInfo *)0x0);
    local_50 = Utility_Util__CreatePBKDF2(pSVar7,pSVar6,(MethodInfo *)0x0);
  }
  local_64 = UnityEngine_Random__Range(0,100000,(MethodInfo *)0x0);
  local_60 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
  __this_01 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_glue(TypeInfo_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(__this_01,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_RoomProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_01 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto LAB_03f09a8e;
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (Il2CppObject *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8),(Il2CppObject *)local_70,
             MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8),local_48,MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10),local_40,MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x18),(Il2CppObject *)pSVar7,
             MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20),(Il2CppObject *)pSVar6,
             MethodInfo_Void_Add);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28),(Il2CppObject *)local_50,
             MethodInfo_Void_Add);
  pSVar5 = local_38;
  if ((*(long *)(lVar2 + 0x58) == 0) ||
     (lVar2 = *(long *)(*(long *)(lVar2 + 0x58) + 0x130), lVar2 == 0)) goto LAB_03f09a8e;
  key = *(Il2CppObject **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30);
  local_71 = *(undefined1 *)(lVar2 + 0x11);
  value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_71);
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,key,value,
             MethodInfo_Void_Add);
  pSVar7 = System_String__Concat(local_60,local_70,(MethodInfo *)0x0);
  if (DAT_05703c5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5e = '\x01';
    if (DAT_05703c55 != '\0') goto LAB_03f09621;
LAB_03f0967d:
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    if ((pSVar5->fields).CurrentMultiplayerServerType != 2) goto LAB_03f09696;
LAB_03f09627:
    pSVar4 = (pSVar5->fields).LobbyMode;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_03f09a8e;
    if ((pSVar4->fields)._value != 0) goto LAB_03f09696;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = ApplicationManagers_ApplicationVersion__GetHashKey(pSVar7,(MethodInfo *)0x0);
  }
  else {
    if (DAT_05703c55 == '\0') goto LAB_03f0967d;
LAB_03f09621:
    if ((pSVar5->fields).CurrentMultiplayerServerType == 2) goto LAB_03f09627;
LAB_03f09696:
    pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  System_Collections_Generic_Dictionary<object__object>__Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,"HashKey",
             (Il2CppObject *)pSVar7,MethodInfo_Void_Add);
  pSVar7 = System_String__Concat(local_60,local_70,(MethodInfo *)0x0);
  if (DAT_05703c5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5e = '\x01';
    if (DAT_05703c55 != '\0') goto LAB_03f096e3;
LAB_03f0973c:
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    if ((pSVar5->fields).CurrentMultiplayerServerType != 2) goto LAB_03f09755;
LAB_03f096e9:
    pSVar4 = (pSVar5->fields).LobbyMode;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto LAB_03f09a8e;
    if ((pSVar4->fields)._value != 0) goto LAB_03f09755;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_70 = ApplicationManagers_ApplicationVersion__GetHashKey(pSVar7,(MethodInfo *)0x0);
  }
  else {
    if (DAT_05703c55 == '\0') goto LAB_03f0973c;
LAB_03f096e3:
    if ((pSVar5->fields).CurrentMultiplayerServerType == 2) goto LAB_03f096e9;
LAB_03f09755:
    local_70 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  pSVar8 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (pSVar8 == (System_String_array *)0x0) goto LAB_03f09a8e;
  if ((int)pSVar8->max_length == 0) {
LAB_03f09a93:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8->m_Items[0] = (System_String_o *)**(undefined8 **)(TypeInfo_RoomProperty + 0xb8);
  il2cpp_runtime_glue(pSVar8->m_Items);
  if ((uint)pSVar8->max_length < 2) goto LAB_03f09a93;
  pSVar8->m_Items[1] = *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 8);
  il2cpp_runtime_glue(pSVar8->m_Items + 1);
  if ((uint)pSVar8->max_length < 3) goto LAB_03f09a93;
  pSVar8->m_Items[2] = *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x10);
  il2cpp_runtime_glue(pSVar8->m_Items + 2);
  if ((uint)pSVar8->max_length < 4) goto LAB_03f09a93;
  pSVar8->m_Items[3] = *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x28);
  il2cpp_runtime_glue(pSVar8->m_Items + 3);
  if ((uint)pSVar8->max_length < 5) goto LAB_03f09a93;
  pSVar8->m_Items[4] = *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x20);
  il2cpp_runtime_glue(pSVar8->m_Items + 4);
  if ((uint)pSVar8->max_length < 6) goto LAB_03f09a93;
  pSVar8->m_Items[5] = *(System_String_o **)(*(long *)(TypeInfo_RoomProperty + 0xb8) + 0x30);
  il2cpp_runtime_glue(pSVar8->m_Items + 5);
  pPVar9 = (Photon_Realtime_RoomOptions_o *)il2cpp_runtime_glue(TypeInfo_RoomOptions);
  Photon_Realtime_RoomOptions___ctor(pPVar9,(MethodInfo *)0x0);
  if (pPVar9 == (Photon_Realtime_RoomOptions_o *)0x0) goto LAB_03f09a8e;
  (pPVar9->fields).CustomRoomProperties = __this_01;
  il2cpp_runtime_glue(&(pPVar9->fields).CustomRoomProperties,__this_01);
  (pPVar9->fields).CustomRoomPropertiesForLobby = pSVar8;
  il2cpp_runtime_glue(&(pPVar9->fields).CustomRoomPropertiesForLobby,pSVar8);
  *(undefined2 *)&(pPVar9->fields).isVisible = 0x101;
  (pPVar9->fields).isOpen = local_54;
  *(undefined1 *)&(pPVar9->fields)._SuppressPlayerInfo_k__BackingField = 0;
  if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__CreateRoom
            (local_60,pPVar9,(Photon_Realtime_TypedLobby_o *)0x0,(System_String_array *)0x0,local_70
             ,pSVar7,(MethodInfo *)0x0);
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03f09937;
LAB_03f09969:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03f09969;
LAB_03f09937:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    return;
  }
  pPVar9 = (Photon_Realtime_RoomOptions_o *)il2cpp_runtime_glue(TypeInfo_RoomOptions);
  Photon_Realtime_RoomOptions___ctor(pPVar9,(MethodInfo *)0x0);
  if (pPVar9 != (Photon_Realtime_RoomOptions_o *)0x0) {
    (pPVar9->fields).CustomRoomProperties = __this_01;
    il2cpp_runtime_glue(&(pPVar9->fields).CustomRoomProperties,__this_01);
    (pPVar9->fields).CustomRoomPropertiesForLobby = pSVar8;
    il2cpp_runtime_glue(&(pPVar9->fields).CustomRoomPropertiesForLobby,pSVar8);
    *(undefined2 *)&(pPVar9->fields).isVisible = 0x100;
    (pPVar9->fields).isOpen = 0xff;
    *(undefined1 *)&(pPVar9->fields)._SuppressPlayerInfo_k__BackingField = 0;
    (pPVar9->fields).PlayerTtl = 10;
    if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
    if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = System_String__Concat
                       (local_60,(System_String_o *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8),
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
    if (__this_00 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
      Photon_Voice_VoiceFollowClient__CreateRoom
                (__this_00,pSVar7,pPVar9,(Photon_Realtime_TypedLobby_o *)0x0,
                 (System_String_array *)0x0,local_70,pSVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03f09a8e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$JoinRoom
// il2cpp: void Settings_MultiplayerSettings__JoinRoom (Settings_MultiplayerSettings_o* __this, System_String_o* roomId, System_String_o* roomName, System_String_o* password, const MethodInfo* method);
// 0x3f09b60

void Settings_MultiplayerSettings__JoinRoom
               (Settings_MultiplayerSettings_o *__this,System_String_o *roomId,
               System_String_o *roomName,System_String_o *password,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Photon_Voice_VoiceFollowClient_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *sessionID;
  
  if (DAT_05703c5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerSettings);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05703c5d = '\x01';
  }
  pSVar4 = System_String__Concat(roomId,roomName,(MethodInfo *)0x0);
  if (DAT_05703c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5f = '\x01';
    if (DAT_05703c55 != '\0') goto LAB_03f09bde;
LAB_03f09c54:
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    if ((__this->fields).CurrentMultiplayerServerType != 2) goto LAB_03f09c73;
LAB_03f09bea:
    pSVar3 = (__this->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03f09ee9;
    if ((pSVar3->fields)._value != 0) goto LAB_03f09c73;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar4,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    if (DAT_05703c55 == '\0') goto LAB_03f09c54;
LAB_03f09bde:
    if ((__this->fields).CurrentMultiplayerServerType == 2) goto LAB_03f09bea;
LAB_03f09c73:
    pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pSVar5 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            (roomId,(System_String_array *)0x0,password,pSVar4,pSVar5,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if (DAT_05702229 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702229 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto LAB_03f09d04;
LAB_03f09e1d:
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto LAB_03f09e1d;
LAB_03f09d04:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_String__Concat
                     (roomId,(System_String_o *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8),
                      (MethodInfo *)0x0);
  pSVar5 = System_String__Concat(roomId,roomName,(MethodInfo *)0x0);
  if (DAT_05703c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5f = '\x01';
    if (DAT_05703c55 != '\0') goto LAB_03f09d99;
LAB_03f09e5c:
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    if ((__this->fields).CurrentMultiplayerServerType != 2) goto LAB_03f09e7b;
LAB_03f09da5:
    pSVar3 = (__this->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto LAB_03f09ee9;
    if ((pSVar3->fields)._value != 0) goto LAB_03f09e7b;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar5,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    if (DAT_05703c55 == '\0') goto LAB_03f09e5c;
LAB_03f09d99:
    if ((__this->fields).CurrentMultiplayerServerType == 2) goto LAB_03f09da5;
LAB_03f09e7b:
    pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (__this_00 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
    Photon_Voice_VoiceFollowClient__JoinRoom
              (__this_00,pSVar4,(System_String_array *)0x0,password,pSVar5,sessionID,
               (MethodInfo *)0x0);
    return;
  }
LAB_03f09ee9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$GetHashKey
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashKey (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x3f09aa0

System_String_o *
Settings_MultiplayerSettings__GetHashKey
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  
  if (DAT_05703c5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5e = '\x01';
  }
  if (DAT_05703c55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar1 == 2) {
    pSVar2 = (__this->fields).LobbyMode;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar2->fields)._value == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetHashKey(str,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Settings.MultiplayerSettings$$GetHashCode
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashCode (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x3f09ef0

System_String_o *
Settings_MultiplayerSettings__GetHashCode
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  
  if (DAT_05703c5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationVersion);
    DAT_05703c5f = '\x01';
  }
  if (DAT_05703c55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c55 = '\x01';
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar1 == 2) {
    pSVar2 = (__this->fields).LobbyMode;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSVar2->fields)._value == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetHashCode(str,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Settings.MultiplayerSettings$$.ctor
// il2cpp: void Settings_MultiplayerSettings___ctor (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x3f09fb0

void Settings_MultiplayerSettings___ctor(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05703c60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_MultiplayerRegion__string);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"108.181.69.221");
    il2cpp_init_method_metadata(&"sa");
    il2cpp_init_method_metadata(&"us");
    il2cpp_init_method_metadata(&"142.44.242.29");
    il2cpp_init_method_metadata(&"eu");
    il2cpp_init_method_metadata(&"135.125.239.180");
    il2cpp_init_method_metadata(&"51.79.164.137");
    il2cpp_init_method_metadata(&"asia");
    il2cpp_init_method_metadata(&"47.116.117.128");
    DAT_05703c60 = '\x01';
  }
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  if (DAT_05703c80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
    DAT_05703c80 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)pSVar3,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 1;
  iVar2 = (*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).LobbyMode = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).LobbyMode,pSVar3);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  if (DAT_05703c80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
    DAT_05703c80 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)pSVar3,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AppIdMode = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).AppIdMode,pSVar3);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomLobby = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).CustomLobby,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomAppId = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).CustomAppId,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanIP = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).LanIP,pSVar4);
  pSVar3 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  if (DAT_05703c80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
    DAT_05703c80 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)pSVar3,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar3,0x13bf,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).LanPort = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).LanPort,pSVar3);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanPassword = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).LanPassword,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModUsername = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).ModUsername,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar4 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar4,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModPassword = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).ModPassword,pSVar4);
  __this_00 = (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_MultiplayerRegion__string);
  System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_S);
  if (__this_00 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum__object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,0,"eu",
               MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<Int32Enum__object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,"us",
               MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<Int32Enum__object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,2,"sa",
               MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<Int32Enum__object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,"asia",
               MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary<Int32Enum__object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,4,"asia",
               MethodInfo_Void_Add);
    (__this->fields).CloudAddresses = __this_00;
    il2cpp_runtime_glue(&(__this->fields).CloudAddresses,__this_00);
    method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Dictionary_MultiplayerRegion__string);
    System_Collections_Generic_Dictionary<Int32Enum__object>___ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_S);
    if (method_00 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,0,"135.125.239.180",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,1,"142.44.242.29",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,2,"108.181.69.221",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,3,"51.79.164.137",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,4,"47.116.117.128",
                 MethodInfo_Void_Add);
      (__this->fields).PublicAddresses =
           (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)method_00;
      il2cpp_runtime_glue(&(__this->fields).PublicAddresses);
      (__this->fields).DefaultPort = 0x13bf;
      Settings_BaseSettingsContainer___ctor
                ((Settings_SaveableSettingsContainer_o *)__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.MultiplayerSettings$$.cctor
// il2cpp: void Settings_MultiplayerSettings___cctor (const MethodInfo* method);
// 0x3f0a640

void Settings_MultiplayerSettings___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703c61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerSettings);
    il2cpp_init_method_metadata(&"28521206-90d0-41b1-93b0-f35460fef0b6");
    il2cpp_init_method_metadata(&"vc");
    DAT_05703c61 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
  lVar1 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
  il2cpp_runtime_glue(lVar1 + 8);
  return;
}


