// Type: Settings.MultiplayerSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/MultiplayerSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// --------------------------------

// Settings.MultiplayerSettings.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass20_0___ctor (Settings_MultiplayerSettings___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x41f77a0

void Settings_MultiplayerSettings___c__DisplayClass20_0___ctor
               (Settings_MultiplayerSettings___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass20_0$$<ConnectServer>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass20_0___ConnectServer_b__0 (Settings_MultiplayerSettings___c__DisplayClass20_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x41f9750

void Settings_MultiplayerSettings___c__DisplayClass20_0___ConnectServer_b__0
               (Settings_MultiplayerSettings___c__DisplayClass20_0_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  undefined4 in_register_00000034;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
    Settings_MultiplayerSettings__ConnectServerInternal(__this_00,(__this->fields).region,(MethodInfo *)error)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90(0,CONCAT44(in_register_00000034,success));
  if (g_data_057ad883 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Profile.json");
    g_data_057ad883 = '\x01';
  }
  return;
}


// Settings.MultiplayerSettings$$get_FileName
// il2cpp: System_String_o* Settings_MultiplayerSettings__get_FileName (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f7540

System_String_o *
Settings_MultiplayerSettings__get_FileName(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad875 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Multiplayer.json");
    g_data_057ad875 = '\x01';
  }
  return "Multiplayer.json";
}


// Settings.MultiplayerSettings$$IsConnectedToPublic
// il2cpp: bool Settings_MultiplayerSettings__IsConnectedToPublic (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f7570

bool_conflict
Settings_MultiplayerSettings__IsConnectedToPublic(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  long lVar2;
  Photon_Realtime_LoadBalancingClient_o *__this_00;
  Photon_Voice_VoiceFollowClient_o *__this_01;
  MethodInfo *method_00;
  char cVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  Il2CppObject *__this_02;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined4 uVar5;
  Il2CppClass *__this_03;
  Il2CppObject *__this_04;
  
  uVar5 = SUB84(method,0);
  if (g_data_057ad876 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ad876 = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType != 2) {
    return 0;
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields)._value == 0);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad877 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057ad877 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__Disconnect((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_VoiceChatManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)((long)TypeInfo_VoiceChatManager->static_fields + 8);
  __this_03 = TypeInfo_VoiceChatManager;
  if (lVar2 != 0) {
    __this_00 = *(Photon_Realtime_LoadBalancingClient_o **)(lVar2 + 0x48);
    __this_03 = (Il2CppClass *)0x0;
    if (__this_00 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
      uVar5 = 0;
      bVar4 = Photon_Realtime_LoadBalancingClient__get_IsConnected(__this_00,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return bVar4;
      }
      if (*(int *)&(TypeInfo_VoiceChatManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(Photon_Voice_VoiceFollowClient_o **)((long)TypeInfo_VoiceChatManager->static_fields + 8);
      __this_03 = (Il2CppClass *)0x0;
      if (__this_01 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
        Photon_Voice_VoiceFollowClient__Disconnect(__this_01,(MethodInfo *)0x0);
        return extraout_EAX;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad878 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectServer_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad878 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  __this_04 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_04,(MethodInfo *)0x0);
    return extraout_EAX_02;
  }
  __this_02[1].klass = __this_03;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,__this_03);
  *(undefined4 *)&__this_02[1].monitor = uVar5;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
    method_00 = extraout_RDX_00;
  }
  else {
    bVar4 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
    method_00 = extraout_RDX;
  }
  if (cVar3 != '\0') {
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    System_Action_bool__object____ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,1,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  Settings_MultiplayerSettings__ConnectServerInternal
            ((Settings_MultiplayerSettings_o *)__this_03,*(int32_t *)&__this_02[1].monitor,method_00);
  return extraout_EAX_01;
}


// Settings.MultiplayerSettings$$Disconnect
// il2cpp: void Settings_MultiplayerSettings__Disconnect (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f75c0

void Settings_MultiplayerSettings__Disconnect(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  long lVar1;
  Photon_Realtime_LoadBalancingClient_o *__this_00;
  Photon_Voice_VoiceFollowClient_o *__this_01;
  MethodInfo *method_00;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_02;
  System_Action_bool__string__o *onComplete;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  undefined4 uVar4;
  Il2CppClass *__this_03;
  Il2CppObject *__this_04;
  
  uVar4 = SUB84(method,0);
  if (g_data_057ad877 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057ad877 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__Disconnect((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_VoiceChatManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)((long)TypeInfo_VoiceChatManager->static_fields + 8);
  __this_03 = TypeInfo_VoiceChatManager;
  if (lVar1 != 0) {
    __this_00 = *(Photon_Realtime_LoadBalancingClient_o **)(lVar1 + 0x48);
    __this_03 = (Il2CppClass *)0x0;
    if (__this_00 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
      uVar4 = 0;
      bVar3 = Photon_Realtime_LoadBalancingClient__get_IsConnected(__this_00,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (*(int *)&(TypeInfo_VoiceChatManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(Photon_Voice_VoiceFollowClient_o **)((long)TypeInfo_VoiceChatManager->static_fields + 8);
      __this_03 = (Il2CppClass *)0x0;
      if (__this_01 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
        Photon_Voice_VoiceFollowClient__Disconnect(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad878 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectServer_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad878 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  __this_04 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_04,(MethodInfo *)0x0);
    return;
  }
  __this_02[1].klass = __this_03;
  il2cpp_runtime_helper_022b4080(__this_02 + 1,__this_03);
  *(undefined4 *)&__this_02[1].monitor = uVar4;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX_00;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX;
  }
  if (cVar2 != '\0') {
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    System_Action_bool__object____ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,1,(MethodInfo *)0x0);
    return;
  }
  Settings_MultiplayerSettings__ConnectServerInternal
            ((Settings_MultiplayerSettings_o *)__this_03,*(int32_t *)&__this_02[1].monitor,method_00);
  return;
}


// Settings.MultiplayerSettings$$ConnectServer
// il2cpp: void Settings_MultiplayerSettings__ConnectServer (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x41f7680

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
  Il2CppObject *__this_01;
  
  if (g_data_057ad878 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ConnectServer_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    g_data_057ad878 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return;
  }
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
  *(int32_t *)&__this_00[1].monitor = region;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    System_Action_bool__object____ctor();
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,1,(MethodInfo *)0x0);
    return;
  }
  Settings_MultiplayerSettings__ConnectServerInternal(__this,*(int32_t *)&__this_00[1].monitor,method_00);
  return;
}


// Settings.MultiplayerSettings$$ConnectServerInternal
// il2cpp: void Settings_MultiplayerSettings__ConnectServerInternal (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x41f77b0

void Settings_MultiplayerSettings__ConnectServerInternal
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar4;
  Settings_IntSetting_c *pSVar5;
  long lVar6;
  Settings_BoolSetting_o *pSVar7;
  System_String_o *appID;
  char cVar8;
  bool_conflict bVar9;
  Settings_MultiplayerSettings_o *pSVar10;
  System_Net_NetworkCredential_o *pSVar11;
  Settings_MultiplayerSettings_o *pSVar12;
  System_String_o *pSVar13;
  Settings_StringSetting_o *pSVar14;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar15;
  undefined4 in_register_00000034;
  Settings_MultiplayerSettings_o *method_04;
  Settings_MultiplayerSettings_o *pSVar16;
  System_String_o **__this_00;
  Settings_MultiplayerSettings_o **__this_01;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_00000034,region);
  pSVar12 = (Settings_MultiplayerSettings_o *)(ulong)(uint)region;
  pSVar16 = __this;
  if (g_data_057ad879 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AppSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    pSVar16 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad879 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(pSVar16,pMVar15);
  if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = (Settings_MultiplayerSettings_o *)0x0;
  method_04 = (Settings_MultiplayerSettings_o *)0x0;
  Photon_Pun_PhotonNetwork__set_AuthValues((Photon_Realtime_AuthenticationValues_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).AppIdMode;
  if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_041f7d86;
  if ((pSVar3->fields)._value == 0) {
    pSVar4 = (__this->fields).PublicAddresses;
    pSVar16 = (Settings_MultiplayerSettings_o *)0x0;
    if (pSVar4 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0)
    goto label_041f7d86;
    pSVar12 = (Settings_MultiplayerSettings_o *)
              System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,region,MethodInfo_String_get_Item);
    (__this->fields).CurrentMultiplayerServerType = 2;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    else {
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar8 = (char)bVar9;
    }
    if (cVar8 != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ad90d != '\0') goto label_041f7a6c;
label_041f7cd9:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ad90d = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        if (g_data_057ad90d == '\0') goto label_041f7cd9;
label_041f7a6c:
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = System_String__IsNullOrEmpty
                        (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        pSVar10 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
        method_04 = (Settings_MultiplayerSettings_o *)0x0;
        pSVar16 = pSVar10;
        Photon_Realtime_AuthenticationValues___ctor
                  ((Photon_Realtime_AuthenticationValues_o *)pSVar10,(MethodInfo *)0x0);
        if (pSVar10 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f7d86;
        *(undefined1 *)&(pSVar10->fields).Settings = 0;
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
        bVar9 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = (Settings_StringSetting_o *)
                    ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          (pSVar10->fields).CustomLobby = pSVar14;
          il2cpp_runtime_helper_022b4080(&(pSVar10->fields).CustomLobby,pSVar14);
          if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7afa;
label_041f7d44:
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057ad90d != '\0') goto label_041f7b07;
label_041f7d56:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          g_data_057ad90d = '\x01';
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        else {
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f7d44;
label_041f7afa:
          if (g_data_057ad90d == '\0') goto label_041f7d56;
label_041f7b07:
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        (*(pSVar10->klass->vtable)._7_SerializeToJsonString.methodPtr)
                  (pSVar10,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28));
        if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Photon_Pun_PhotonNetwork__set_AuthValues
                  ((Photon_Realtime_AuthenticationValues_o *)pSVar10,(MethodInfo *)0x0);
      }
    }
    iVar2 = (__this->fields).DefaultPort;
    pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Photon_Pun_PhotonNetwork__ConnectToMaster((System_String_o *)pSVar12,iVar2,pSVar13,(MethodInfo *)0x0);
    pSVar5 = (TypeInfo_PhotonNetwork[1].fields.AppIdMode)->klass;
    method_04 = (Settings_MultiplayerSettings_o *)0x1;
    pSVar16 = __this;
    pSVar11 = Settings_MultiplayerSettings__GetCurrentLobby(__this,1,method_02);
    if (pSVar5 != (Settings_IntSetting_c *)0x0) {
      (pSVar5->_1).namespaze = (char *)pSVar11;
      il2cpp_runtime_helper_022b4080(&(pSVar5->_1).namespaze);
      pSVar10 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AppSettings);
      method_04 = (Settings_MultiplayerSettings_o *)0x0;
      pSVar16 = pSVar10;
      Photon_Realtime_AppSettings___ctor((Photon_Realtime_AppSettings_o *)pSVar10,(MethodInfo *)0x0);
      if (pSVar10 != (Settings_MultiplayerSettings_o *)0x0) {
        (pSVar10->fields).LanPassword = (Settings_StringSetting_o *)pSVar12;
        il2cpp_runtime_helper_022b4080(&(pSVar10->fields).LanPassword);
        *(int32_t *)&(pSVar10->fields).LanSupportsAccounts = (__this->fields).DefaultPort;
        *(undefined1 *)&(pSVar10->fields).CustomAppId = 0;
        if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
        method_04 = pSVar12;
        if (pSVar16 != (Settings_MultiplayerSettings_o *)0x0) {
          (*(pSVar16->klass->vtable)._7_SerializeToJsonString.methodPtr)
                    (pSVar16,pSVar10,(pSVar16->klass->vtable)._7_SerializeToJsonString.method);
          lVar6 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
          method_04 = pSVar10;
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 0x48);
            method_04 = (Settings_MultiplayerSettings_o *)0x1;
            pSVar11 = Settings_MultiplayerSettings__GetCurrentLobby(__this,1,method_03);
            pSVar16 = __this;
            goto joined_r0x041f7ca0;
          }
        }
      }
    }
  }
  else {
    pSVar4 = (__this->fields).CloudAddresses;
    pSVar16 = (Settings_MultiplayerSettings_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      pSVar10 = (Settings_MultiplayerSettings_o *)
                System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,region,MethodInfo_String_get_Item
                          );
      (__this->fields).CurrentMultiplayerServerType = 1;
      if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = (__this->fields).CustomAppId;
      method_04 = pSVar12;
      pSVar16 = TypeInfo_PhotonNetwork;
      if (pSVar14 != (Settings_StringSetting_o *)0x0) {
        pSVar5 = (TypeInfo_PhotonNetwork[1].fields.AppIdMode)->klass;
        pSVar16 = (Settings_MultiplayerSettings_o *)0x0;
        if (pSVar5 != (Settings_IntSetting_c *)0x0) {
          (pSVar5->_1).byval_arg.data = (pSVar14->fields)._value;
          il2cpp_runtime_helper_022b4080(&(pSVar5->_1).byval_arg);
          pSVar5 = (TypeInfo_PhotonNetwork[1].fields.AppIdMode)->klass;
          method_04 = (Settings_MultiplayerSettings_o *)0x0;
          pSVar16 = __this;
          pSVar11 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_00);
          if (pSVar5 != (Settings_IntSetting_c *)0x0) {
            (pSVar5->_1).namespaze = (char *)pSVar11;
            il2cpp_runtime_helper_022b4080(&(pSVar5->_1).namespaze);
            Photon_Pun_PhotonNetwork__ConnectToRegion((System_String_o *)pSVar10,(MethodInfo *)0x0);
            pSVar12 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AppSettings);
            method_04 = (Settings_MultiplayerSettings_o *)0x0;
            pSVar16 = pSVar12;
            Photon_Realtime_AppSettings___ctor((Photon_Realtime_AppSettings_o *)pSVar12,(MethodInfo *)0x0);
            pSVar14 = (__this->fields).CustomAppId;
            if ((pSVar14 == (Settings_StringSetting_o *)0x0) ||
               (pSVar12 == (Settings_MultiplayerSettings_o *)0x0)) goto label_041f7d86;
            (pSVar12->fields).AppIdMode = (Settings_IntSetting_o *)(pSVar14->fields)._value;
            il2cpp_runtime_helper_022b4080(&(pSVar12->fields).AppIdMode);
            (pSVar12->fields).LanIP = (Settings_StringSetting_o *)pSVar10;
            il2cpp_runtime_helper_022b4080(&(pSVar12->fields).LanIP);
            if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar16 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
            method_04 = pSVar10;
            if (pSVar16 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f7d86;
            (*(pSVar16->klass->vtable)._7_SerializeToJsonString.methodPtr)
                      (pSVar16,pSVar12,(pSVar16->klass->vtable)._7_SerializeToJsonString.method);
            lVar6 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
            method_04 = pSVar12;
            if (lVar6 == 0) goto label_041f7d86;
            lVar6 = *(long *)(lVar6 + 0x48);
            method_04 = (Settings_MultiplayerSettings_o *)0x0;
            pSVar11 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_01);
            pSVar16 = __this;
joined_r0x041f7ca0:
            if (lVar6 != 0) {
              *(System_Net_NetworkCredential_o **)(lVar6 + 0x18) = pSVar11;
              il2cpp_runtime_helper_022b4080(lVar6 + 0x18,pSVar11);
              return;
            }
          }
        }
      }
    }
  }
label_041f7d86:
  il2cpp_runtime_helper_022b2c90();
  cVar8 = (char)method_04;
  __this_00 = (System_String_o **)pSVar16;
  if (g_data_057ad87c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_00 = &"Public";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87c = '\x01';
  }
  pSVar3 = (pSVar16->fields).LobbyMode;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar3->fields)._value == 0) {
      if (cVar8 == '\0') {
        pSVar11 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
        System_Net_NetworkCredential___ctor(pSVar11,"Public","Public",(MethodInfo *)0x0);
        return;
      }
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationVersion__GetVersion((MethodInfo *)0x0);
      return;
    }
    pSVar14 = (pSVar16->fields).CustomLobby;
    if (pSVar14 != (Settings_StringSetting_o *)0x0) {
      pSVar13 = (pSVar14->fields)._value;
      pSVar11 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar11,pSVar13,pSVar13,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (Settings_MultiplayerSettings_o *)__this_00;
  if (g_data_057ad87a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pSVar12 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(pSVar12,(MethodInfo *)method_04);
  pSVar7 = (((Settings_MultiplayerSettings_o *)__this_00)->fields).LanSupportsAccounts;
  if (pSVar7 == (Settings_BoolSetting_o *)0x0) goto label_041f8200;
  if (*(char *)((long)&(pSVar7->fields).DefaultValue + 1) == '\0') {
label_041f8085:
    pSVar14 = (((Settings_MultiplayerSettings_o *)__this_00)->fields).LanIP;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar12 = (Settings_MultiplayerSettings_o *)0x0;
      bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_041f7f51;
      goto label_041f8085;
    }
    pSVar12 = (Settings_MultiplayerSettings_o *)0x0;
    bVar9 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar9 == '\0') goto label_041f8085;
label_041f7f51:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f7f6e;
label_041f8153:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ad90d == '\0') goto label_041f8153;
label_041f7f6e:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
    method_04 = (Settings_MultiplayerSettings_o *)0x0;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)pSVar12,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') goto label_041f8085;
    pSVar16 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
    method_04 = (Settings_MultiplayerSettings_o *)0x0;
    pSVar12 = pSVar16;
    Photon_Realtime_AuthenticationValues___ctor
              ((Photon_Realtime_AuthenticationValues_o *)pSVar16,(MethodInfo *)0x0);
    if (pSVar16 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8200;
    *(uint8_t *)&(pSVar16->fields).Settings = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
    bVar9 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = (Settings_StringSetting_o *)
                ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      (pSVar16->fields).CustomLobby = pSVar14;
      il2cpp_runtime_helper_022b4080(&(pSVar16->fields).CustomLobby,pSVar14);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7ffc;
label_041f81be:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f8009;
label_041f81d0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f81be;
label_041f7ffc:
      if (g_data_057ad90d == '\0') goto label_041f81d0;
label_041f8009:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(pSVar16->klass->vtable)._7_SerializeToJsonString.methodPtr)
              (pSVar16,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),
               (pSVar16->klass->vtable)._7_SerializeToJsonString.method);
    if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_04 = (Settings_MultiplayerSettings_o *)0x0;
    Photon_Pun_PhotonNetwork__set_AuthValues
              ((Photon_Realtime_AuthenticationValues_o *)pSVar16,(MethodInfo *)0x0);
    pSVar14 = (((Settings_MultiplayerSettings_o *)__this_00)->fields).LanIP;
    pSVar12 = pSVar16;
  }
  if ((pSVar14 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (((Settings_MultiplayerSettings_o *)__this_00)->fields).LanPort,
     pSVar3 != (Settings_IntSetting_o *)0x0)) {
    pSVar13 = (pSVar14->fields)._value;
    iVar2 = (pSVar3->fields)._value;
    appID = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar13,iVar2,appID,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pMVar15 = extraout_RDX;
      if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar15 = extraout_RDX_00;
      }
      pSVar5 = (TypeInfo_PhotonNetwork[1].fields.AppIdMode)->klass;
      method_04 = (Settings_MultiplayerSettings_o *)0x0;
      pSVar12 = (Settings_MultiplayerSettings_o *)__this_00;
      pSVar11 = Settings_MultiplayerSettings__GetCurrentLobby
                          ((Settings_MultiplayerSettings_o *)__this_00,0,pMVar15);
      if (pSVar5 == (Settings_IntSetting_c *)0x0) goto label_041f8200;
      (pSVar5->_1).namespaze = (char *)pSVar11;
      il2cpp_runtime_helper_022b4080(&(pSVar5->_1).namespaze,pSVar11);
      (((Settings_MultiplayerSettings_o *)__this_00)->fields).CurrentMultiplayerServerType = 0;
    }
    return;
  }
label_041f8200:
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (Settings_MultiplayerSettings_o **)pSVar12;
  if (g_data_057ad87b == '\0') {
    __this_01 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect
            ((Settings_MultiplayerSettings_o *)__this_01,(MethodInfo *)method_04);
  if (*(int *)((long)&TypeInfo_PhotonNetwork[1].fields.LanPassword + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (pSVar12->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$ConnectLAN
// il2cpp: void Settings_MultiplayerSettings__ConnectLAN (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f7ea0

void Settings_MultiplayerSettings__ConnectLAN(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t port;
  Settings_BoolSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *appID;
  long lVar4;
  bool_conflict bVar5;
  Settings_MultiplayerSettings_o *__this_00;
  System_String_o *pSVar6;
  System_Net_NetworkCredential_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Settings_MultiplayerSettings_o *__this_01;
  long *__this_02;
  
  __this_01 = __this;
  if (g_data_057ad87a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_01 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_01,method);
  pSVar2 = (__this->fields).LanSupportsAccounts;
  if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_041f8200;
  if (*(char *)((long)&(pSVar2->fields).DefaultValue + 1) == '\0') {
label_041f8085:
    pSVar8 = (__this->fields).LanIP;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_01 = (Settings_MultiplayerSettings_o *)0x0;
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_041f7f51;
      goto label_041f8085;
    }
    __this_01 = (Settings_MultiplayerSettings_o *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_041f8085;
label_041f7f51:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f7f6e;
label_041f8153:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ad90d == '\0') goto label_041f8153;
label_041f7f6e:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
    method = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_01,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_041f8085;
    __this_00 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
    method = (MethodInfo *)0x0;
    __this_01 = __this_00;
    Photon_Realtime_AuthenticationValues___ctor
              ((Photon_Realtime_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8200;
    *(uint8_t *)&(__this_00->fields).Settings = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (Settings_StringSetting_o *)
               ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      (__this_00->fields).CustomLobby = pSVar8;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).CustomLobby,pSVar8);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7ffc;
label_041f81be:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f8009;
label_041f81d0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f81be;
label_041f7ffc:
      if (g_data_057ad90d == '\0') goto label_041f81d0;
label_041f8009:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(__this_00->klass->vtable)._7_SerializeToJsonString.methodPtr)
              (__this_00,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),
               (__this_00->klass->vtable)._7_SerializeToJsonString.method);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    Photon_Pun_PhotonNetwork__set_AuthValues
              ((Photon_Realtime_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
    pSVar8 = (__this->fields).LanIP;
    __this_01 = __this_00;
  }
  if ((pSVar8 != (Settings_StringSetting_o *)0x0) &&
     (pSVar3 = (__this->fields).LanPort, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    pSVar6 = (pSVar8->fields)._value;
    port = (pSVar3->fields)._value;
    appID = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar6,port,appID,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      lVar4 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      method = (MethodInfo *)0x0;
      __this_01 = __this;
      pSVar7 = Settings_MultiplayerSettings__GetCurrentLobby(__this,0,method_00);
      if (lVar4 == 0) goto label_041f8200;
      *(System_Net_NetworkCredential_o **)(lVar4 + 0x18) = pSVar7;
      il2cpp_runtime_helper_022b4080(lVar4 + 0x18,pSVar7);
      (__this->fields).CurrentMultiplayerServerType = 0;
    }
    return;
  }
label_041f8200:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (long *)__this_01;
  if (g_data_057ad87b == '\0') {
    __this_02 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect((Settings_MultiplayerSettings_o *)__this_02,method);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this_01->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$ConnectOffline
// il2cpp: void Settings_MultiplayerSettings__ConnectOffline (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f8210

void Settings_MultiplayerSettings__ConnectOffline(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ad87b == '\0') {
    __this_00 = (Settings_MultiplayerSettings_o *)&TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_00,method);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$GetCurrentLobby
// il2cpp: System_Net_NetworkCredential_o* Settings_MultiplayerSettings__GetCurrentLobby (Settings_MultiplayerSettings_o* __this, bool isPublic, const MethodInfo* method);
// 0x41f7d90

System_Net_NetworkCredential_o *
Settings_MultiplayerSettings__GetCurrentLobby
          (Settings_MultiplayerSettings_o *__this,bool_conflict isPublic,MethodInfo *method)

{
  int iVar1;
  int32_t port;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  System_String_o *appID;
  long lVar4;
  bool_conflict bVar5;
  System_Net_NetworkCredential_o *pSVar6;
  Settings_MultiplayerSettings_o *__this_00;
  System_String_o *pSVar7;
  undefined4 extraout_var;
  Settings_StringSetting_o *pSVar8;
  System_Net_NetworkCredential_o *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  System_String_o **__this_01;
  Settings_MultiplayerSettings_o *__this_02;
  long *__this_03;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,isPublic);
  __this_01 = (System_String_o **)__this;
  if (g_data_057ad87c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_NetworkCredential);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_01 = &"Public";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87c = '\x01';
  }
  pSVar2 = (__this->fields).LobbyMode;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value == 0) {
      if ((char)isPublic == '\0') {
        pSVar6 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
        System_Net_NetworkCredential___ctor(pSVar6,"Public","Public",(MethodInfo *)0x0);
        return pSVar6;
      }
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = ApplicationManagers_ApplicationVersion__GetVersion((MethodInfo *)0x0);
      return pSVar6;
    }
    pSVar8 = (__this->fields).CustomLobby;
    if (pSVar8 != (Settings_StringSetting_o *)0x0) {
      pSVar7 = (pSVar8->fields)._value;
      pSVar6 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_023052d0(TypeInfo_NetworkCredential);
      System_Net_NetworkCredential___ctor(pSVar6,pSVar7,pSVar7,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (Settings_MultiplayerSettings_o *)__this_01;
  if (g_data_057ad87a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AuthenticationValues);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    __this_02 = (Settings_MultiplayerSettings_o *)&"token";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87a = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_02,method_01);
  pSVar3 = (((Settings_MultiplayerSettings_o *)__this_01)->fields).LanSupportsAccounts;
  if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_041f8200;
  if (*(char *)((long)&(pSVar3->fields).DefaultValue + 1) == '\0') {
label_041f8085:
    pSVar8 = (((Settings_MultiplayerSettings_o *)__this_01)->fields).LanIP;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_02 = (Settings_MultiplayerSettings_o *)0x0;
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if ((char)bVar5 != '\0') goto label_041f7f51;
      goto label_041f8085;
    }
    __this_02 = (Settings_MultiplayerSettings_o *)0x0;
    bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_041f8085;
label_041f7f51:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f7f6e;
label_041f8153:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ad90d == '\0') goto label_041f8153;
label_041f7f6e:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = *(Settings_MultiplayerSettings_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
    method_01 = (MethodInfo *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_041f8085;
    __this_00 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AuthenticationValues);
    method_01 = (MethodInfo *)0x0;
    __this_02 = __this_00;
    Photon_Realtime_AuthenticationValues___ctor
              ((Photon_Realtime_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8200;
    *(uint8_t *)&(__this_00->fields).Settings = '\0';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (Settings_StringSetting_o *)
               ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
      (__this_00->fields).CustomLobby = pSVar8;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).CustomLobby,pSVar8);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_041f7ffc;
label_041f81be:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ad90d != '\0') goto label_041f8009;
label_041f81d0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ad90d = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_041f81be;
label_041f7ffc:
      if (g_data_057ad90d == '\0') goto label_041f81d0;
label_041f8009:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    (*(__this_00->klass->vtable)._7_SerializeToJsonString.methodPtr)
              (__this_00,"token",*(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28),
               (__this_00->klass->vtable)._7_SerializeToJsonString.method);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    Photon_Pun_PhotonNetwork__set_AuthValues
              ((Photon_Realtime_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
    pSVar8 = (((Settings_MultiplayerSettings_o *)__this_01)->fields).LanIP;
    __this_02 = __this_00;
  }
  if ((pSVar8 != (Settings_StringSetting_o *)0x0) &&
     (pSVar2 = (((Settings_MultiplayerSettings_o *)__this_01)->fields).LanPort,
     pSVar2 != (Settings_IntSetting_o *)0x0)) {
    pSVar7 = (pSVar8->fields)._value;
    port = (pSVar2->fields)._value;
    appID = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar7,port,appID,(MethodInfo *)0x0);
    pSVar6 = (System_Net_NetworkCredential_o *)CONCAT44(extraout_var,bVar5);
    if ((char)bVar5 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      lVar4 = **(long **)(TypeInfo_PhotonNetwork + 0xb8);
      method_01 = (MethodInfo *)0x0;
      __this_02 = (Settings_MultiplayerSettings_o *)__this_01;
      pSVar6 = Settings_MultiplayerSettings__GetCurrentLobby
                         ((Settings_MultiplayerSettings_o *)__this_01,0,method_00);
      if (lVar4 == 0) goto label_041f8200;
      *(System_Net_NetworkCredential_o **)(lVar4 + 0x18) = pSVar6;
      pSVar6 = (System_Net_NetworkCredential_o *)il2cpp_runtime_helper_022b4080(lVar4 + 0x18,pSVar6);
      (((Settings_MultiplayerSettings_o *)__this_01)->fields).CurrentMultiplayerServerType = 0;
    }
    return pSVar6;
  }
label_041f8200:
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (long *)__this_02;
  if (g_data_057ad87b == '\0') {
    __this_03 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87b = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect((Settings_MultiplayerSettings_o *)__this_03,method_01);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(1,(MethodInfo *)0x0);
  (__this_02->fields).CurrentMultiplayerServerType = 1;
  return extraout_RAX;
}


// Settings.MultiplayerSettings$$StartRoom
// il2cpp: void Settings_MultiplayerSettings__StartRoom (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f8270

void Settings_MultiplayerSettings__StartRoom(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  Settings_IntSetting_o *pSVar6;
  Photon_Voice_VoiceFollowClient_o *pPVar7;
  void *pvVar8;
  int32_t iVar9;
  undefined4 uVar10;
  System_String_o *pSVar11;
  Settings_MultiplayerSettings_o *__this_00;
  Il2CppObject *value;
  System_String_o *pSVar12;
  Settings_StringSetting_o *pSVar13;
  Settings_MultiplayerSettings_o *pSVar14;
  System_String_o *pSVar15;
  System_String_o *sessionID;
  Settings_TypedSetting_int__o *pSVar16;
  Settings_TypedSetting_T__o *pSVar17;
  Il2CppClass *pIVar18;
  MethodInfo *method_00;
  MethodInfo_3104E10 *in_RCX;
  System_String_o *str1;
  Settings_StringSetting_c *pSVar19;
  Il2CppObject **ppIVar20;
  long *plVar21;
  long *plVar22;
  undefined1 local_71;
  Settings_StringSetting_c *local_70;
  int32_t local_64;
  Settings_MultiplayerSettings_o *local_60;
  undefined4 local_54;
  System_String_o *local_50;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  Settings_MultiplayerSettings_o *local_38;
  
  plVar21 = (long *)__this;
  if (g_data_057ad87d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomOptions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RoomProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    ppIVar20 = &"HashKey";
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87d = '\x01';
    plVar21 = (long *)ppIVar20;
  }
  local_64 = 0;
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x38) == 0)) ||
     (lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x50), lVar4 == 0)) {
label_041f8a9e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    plVar21 = *(long **)(lVar4 + 0x18);
    if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    local_70 = (Settings_StringSetting_c *)
               Anticheat_ChatFilter__FilterBadWords((System_String_o *)plVar21,(MethodInfo *)0x0);
    lVar4 = *(long *)(lVar3 + 0x38);
    if ((((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) ||
        ((in_RCX = *(MethodInfo_3104E10 **)(lVar4 + 0x30), in_RCX == (MethodInfo_3104E10 *)0x0 ||
         ((method = *(MethodInfo **)(lVar4 + 0x60),
          (Settings_StringSetting_c *)method == (Settings_StringSetting_c *)0x0 ||
          (*(long *)(lVar4 + 0x58) == 0)))))) ||
       (pSVar12 = *(System_String_o **)(*(long *)(lVar4 + 0x58) + 0x18), pSVar12 == (System_String_o *)0x0))
    goto label_041f8a9e;
    local_48 = *(Il2CppObject **)(*(long *)(lVar4 + 0x28) + 0x18);
    local_40 = (Il2CppObject *)in_RCX->name;
    local_54 = *(undefined4 *)((long)&(((Settings_StringSetting_c *)method)->_1).name + 4);
    local_38 = __this;
    if ((pSVar12->fields)._stringLength < 1) {
      pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      local_50 = pSVar11;
    }
    else {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = Utility_Util__CreateSalt((MethodInfo *)0x0);
      local_50 = Utility_Util__CreatePBKDF2(pSVar12,pSVar11,(MethodInfo *)0x0);
    }
    local_64 = UnityEngine_Random__Range_4df2410(0,100000,(MethodInfo *)0x0);
    local_60 = (Settings_MultiplayerSettings_o *)System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    __this_00 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
    method = (MethodInfo *)0x0;
    ExitGames_Client_Photon_Hashtable___ctor
              ((ExitGames_Client_Photon_Hashtable_o *)__this_00,(MethodInfo *)0x0);
    plVar21 = (long *)TypeInfo_RoomProperty;
    if (*(int *)((long)&TypeInfo_RoomProperty[1].fields.LanPassword + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8a9e;
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (Il2CppObject *)(TypeInfo_RoomProperty[1].fields.AppIdMode)->klass,(Il2CppObject *)local_70,MethodInfo_Void_Add
              );
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (TypeInfo_RoomProperty[1].fields.AppIdMode)->monitor,local_48,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               *(Il2CppObject **)&(TypeInfo_RoomProperty[1].fields.AppIdMode)->fields,local_40,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               *(Il2CppObject **)&((TypeInfo_RoomProperty[1].fields.AppIdMode)->fields).MinValue,
               (Il2CppObject *)pSVar12,MethodInfo_Void_Add);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (Il2CppObject *)TypeInfo_RoomProperty[1].fields.AppIdMode[1].klass,(Il2CppObject *)pSVar11,MethodInfo_Void_Add)
    ;
    method = TypeInfo_RoomProperty[1].fields.AppIdMode[1].monitor;
    in_RCX = MethodInfo_Void_Add;
    plVar21 = (long *)__this_00;
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)method,
               (Il2CppObject *)local_50,MethodInfo_Void_Add);
    pSVar14 = local_38;
    if ((*(long *)(lVar3 + 0x58) == 0) || (lVar3 = *(long *)(*(long *)(lVar3 + 0x58) + 0x130), lVar3 == 0))
    goto label_041f8a9e;
    pIVar5 = *(Il2CppObject **)&TypeInfo_RoomProperty[1].fields.AppIdMode[1].fields;
    local_71 = *(undefined1 *)(lVar3 + 0x11);
    value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&local_71);
    in_RCX = MethodInfo_Void_Add;
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar5,value,MethodInfo_Void_Add)
    ;
    method = (MethodInfo *)local_70;
    plVar21 = (long *)local_60;
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)local_60,(System_String_o *)local_70,(MethodInfo *)0x0);
    if (g_data_057ad87f == '\0') {
      plVar21 = &TypeInfo_ApplicationVersion;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad87f = '\x01';
      if (g_data_057ad876 != '\0') goto label_041f8631;
label_041f868d:
      plVar21 = &MethodInfo_Int32_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad876 = '\x01';
      if ((pSVar14->fields).CurrentMultiplayerServerType != 2) goto label_041f86a6;
label_041f8637:
      pSVar6 = (pSVar14->fields).LobbyMode;
      if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_041f8a9e;
      if ((pSVar6->fields)._value != 0) goto label_041f86a6;
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = ApplicationManagers_ApplicationVersion__GetHashKey(pSVar12,(MethodInfo *)0x0);
    }
    else {
      if (g_data_057ad876 == '\0') goto label_041f868d;
label_041f8631:
      if ((pSVar14->fields).CurrentMultiplayerServerType == 2) goto label_041f8637;
label_041f86a6:
      pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    in_RCX = MethodInfo_Void_Add;
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,"HashKey",
               (Il2CppObject *)pSVar12,MethodInfo_Void_Add);
    method = (MethodInfo *)local_70;
    plVar21 = (long *)local_60;
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)local_60,(System_String_o *)local_70,(MethodInfo *)0x0);
    if (g_data_057ad87f == '\0') {
      plVar21 = &TypeInfo_ApplicationVersion;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad87f = '\x01';
      if (g_data_057ad876 != '\0') goto label_041f86f3;
label_041f874c:
      plVar21 = &MethodInfo_Int32_get_Value;
      il2cpp_runtime_helper_023445d0();
      g_data_057ad876 = '\x01';
      if ((pSVar14->fields).CurrentMultiplayerServerType != 2) goto label_041f8765;
label_041f86f9:
      pSVar6 = (pSVar14->fields).LobbyMode;
      if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_041f8a9e;
      if ((pSVar6->fields)._value != 0) goto label_041f8765;
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      local_70 = (Settings_StringSetting_c *)
                 ApplicationManagers_ApplicationVersion__GetHashKey(pSVar12,(MethodInfo *)0x0);
    }
    else {
      if (g_data_057ad876 == '\0') goto label_041f874c;
label_041f86f3:
      if ((pSVar14->fields).CurrentMultiplayerServerType == 2) goto label_041f86f9;
label_041f8765:
      local_70 = (Settings_StringSetting_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    method = (MethodInfo *)0x6;
    plVar21 = (long *)TypeInfo_string;
    pSVar13 = (Settings_StringSetting_o *)il2cpp_runtime_helper_022b2a40();
    if (pSVar13 == (Settings_StringSetting_o *)0x0) goto label_041f8a9e;
    if (*(int *)&(pSVar13->fields)._value != 0) {
      method = (MethodInfo *)(TypeInfo_RoomProperty[1].fields.AppIdMode)->klass;
      plVar21 = (long *)&(pSVar13->fields).MaxLength;
      *(MethodInfo **)&(pSVar13->fields).MaxLength = method;
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)&(pSVar13->fields)._value) {
        method = (TypeInfo_RoomProperty[1].fields.AppIdMode)->monitor;
        plVar21 = (long *)(pSVar13 + 1);
        pSVar13[1].klass = (Settings_StringSetting_c *)method;
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)&(pSVar13->fields)._value) {
          method = *(MethodInfo **)&(TypeInfo_RoomProperty[1].fields.AppIdMode)->fields;
          plVar21 = (long *)&pSVar13[1].monitor;
          pSVar13[1].monitor = method;
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)&(pSVar13->fields)._value) {
            method = TypeInfo_RoomProperty[1].fields.AppIdMode[1].monitor;
            plVar21 = (long *)&pSVar13[1].fields;
            pSVar13[1].fields.DefaultValue = (System_String_o *)method;
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)&(pSVar13->fields)._value) {
              method = (MethodInfo *)TypeInfo_RoomProperty[1].fields.AppIdMode[1].klass;
              plVar21 = (long *)&pSVar13[1].fields._value;
              pSVar13[1].fields._value = (System_String_o *)method;
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)&(pSVar13->fields)._value) {
                pSVar6 = TypeInfo_RoomProperty[1].fields.AppIdMode;
                iVar9 = pSVar6[1].fields._value;
                pSVar13[1].fields.MaxLength = pSVar6[1].fields.DefaultValue;
                *(int32_t *)&pSVar13[1].fields.field_0x14 = iVar9;
                il2cpp_runtime_helper_022b4080(&pSVar13[1].fields.MaxLength);
                pSVar14 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RoomOptions);
                method = (MethodInfo *)0x0;
                plVar21 = (long *)pSVar14;
                Photon_Realtime_RoomOptions___ctor((Photon_Realtime_RoomOptions_o *)pSVar14,(MethodInfo *)0x0)
                ;
                if (pSVar14 == (Settings_MultiplayerSettings_o *)0x0) goto label_041f8a9e;
                (pSVar14->fields).AppIdMode = (Settings_IntSetting_o *)__this_00;
                il2cpp_runtime_helper_022b4080(&(pSVar14->fields).AppIdMode,__this_00);
                (pSVar14->fields).CustomLobby = pSVar13;
                il2cpp_runtime_helper_022b4080(&(pSVar14->fields).CustomLobby,pSVar13);
                *(undefined2 *)&(pSVar14->fields).Settings = 0x101;
                *(undefined4 *)((long)&(pSVar14->fields).Settings + 4) = local_54;
                *(undefined1 *)((long)&(pSVar14->fields).LanIP + 4) = 0;
                if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar12 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
                if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_RCX = (MethodInfo_3104E10 *)0x0;
                Photon_Pun_PhotonNetwork__CreateRoom
                          ((System_String_o *)local_60,(Photon_Realtime_RoomOptions_o *)pSVar14,
                           (Photon_Realtime_TypedLobby_o *)0x0,(System_String_array *)0x0,
                           (System_String_o *)local_70,pSVar12,(MethodInfo *)0x0);
                if (g_data_057abf5b == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                  g_data_057abf5b = '\x01';
                  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_041f8947;
label_041f8979:
                  il2cpp_runtime_helper_02337ed0();
                  cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
                }
                else {
                  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_041f8979;
label_041f8947:
                  cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
                }
                if (cVar1 != '\0') {
                  return;
                }
                pSVar14 = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RoomOptions);
                method = (MethodInfo *)0x0;
                plVar21 = (long *)pSVar14;
                Photon_Realtime_RoomOptions___ctor((Photon_Realtime_RoomOptions_o *)pSVar14,(MethodInfo *)0x0)
                ;
                if (pSVar14 != (Settings_MultiplayerSettings_o *)0x0) {
                  (pSVar14->fields).AppIdMode = (Settings_IntSetting_o *)__this_00;
                  il2cpp_runtime_helper_022b4080(&(pSVar14->fields).AppIdMode,__this_00);
                  (pSVar14->fields).CustomLobby = pSVar13;
                  il2cpp_runtime_helper_022b4080(&(pSVar14->fields).CustomLobby,pSVar13);
                  *(undefined2 *)&(pSVar14->fields).Settings = 0x100;
                  *(undefined4 *)((long)&(pSVar14->fields).Settings + 4) = 0xff;
                  *(undefined1 *)((long)&(pSVar14->fields).LanIP + 4) = 0;
                  *(undefined4 *)((long)&(pSVar14->fields).TypedSettings + 4) = 10;
                  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pPVar7 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
                  if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  method = (MethodInfo *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8);
                  pSVar12 = System_String__Concat_3ae5ba0
                                      ((System_String_o *)local_60,(System_String_o *)method,(MethodInfo *)0x0
                                      );
                  if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  plVar21 = (long *)0x0;
                  pSVar11 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
                  if (pPVar7 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
                    Photon_Voice_VoiceFollowClient__CreateRoom
                              (pPVar7,pSVar12,(Photon_Realtime_RoomOptions_o *)pSVar14,
                               (Photon_Realtime_TypedLobby_o *)0x0,(System_String_array *)0x0,
                               (System_String_o *)local_70,pSVar11,(MethodInfo *)0x0);
                    return;
                  }
                }
                goto label_041f8a9e;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar19 = (Settings_StringSetting_c *)method;
  if (g_data_057ad87f == '\0') {
    plVar22 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87f = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8acc;
label_041f8b2a:
    plVar22 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar2 = (((Settings_MultiplayerSettings_o *)plVar21)->fields).CurrentMultiplayerServerType;
  }
  else {
    plVar22 = plVar21;
    if (g_data_057ad876 == '\0') goto label_041f8b2a;
label_041f8acc:
    iVar2 = (((Settings_MultiplayerSettings_o *)plVar21)->fields).CurrentMultiplayerServerType;
  }
  if (iVar2 != 2) {
    return;
  }
  pSVar6 = (((Settings_MultiplayerSettings_o *)plVar21)->fields).LobbyMode;
  if (pSVar6 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar6->fields)._value != 0) {
      return;
    }
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_ApplicationVersion__GetHashKey((System_String_o *)method,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad87e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057ad87e = '\x01';
  }
  pSVar12 = str1;
  plVar21 = (long *)pSVar19;
  pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)pSVar19,str1,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar21 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8bee;
label_041f8c64:
    plVar21 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((((Settings_MultiplayerSettings_o *)plVar22)->fields).CurrentMultiplayerServerType != 2)
    goto label_041f8c83;
label_041f8bfa:
    pSVar6 = (((Settings_MultiplayerSettings_o *)plVar22)->fields).LobbyMode;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar6->fields)._value != 0) goto label_041f8c83;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar11,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    if (g_data_057ad876 == '\0') goto label_041f8c64;
label_041f8bee:
    if ((((Settings_MultiplayerSettings_o *)plVar22)->fields).CurrentMultiplayerServerType == 2)
    goto label_041f8bfa;
label_041f8c83:
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            ((System_String_o *)pSVar19,(System_String_array *)0x0,(System_String_o *)in_RCX,pSVar12,pSVar11,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_041f8d14;
label_041f8e2d:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_041f8e2d;
label_041f8d14:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar7 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = System_String__Concat_3ae5ba0
                      ((System_String_o *)pSVar19,(System_String_o *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8),
                       (MethodInfo *)0x0);
  pSVar12 = str1;
  pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)pSVar19,str1,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar21 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8da9;
label_041f8e6c:
    plVar21 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((((Settings_MultiplayerSettings_o *)plVar22)->fields).CurrentMultiplayerServerType != 2)
    goto label_041f8e8b;
label_041f8db5:
    pSVar6 = (((Settings_MultiplayerSettings_o *)plVar22)->fields).LobbyMode;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar6->fields)._value != 0) goto label_041f8e8b;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = (System_String_o *)0x0;
    pSVar15 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar15,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    plVar21 = (long *)pSVar19;
    if (g_data_057ad876 == '\0') goto label_041f8e6c;
label_041f8da9:
    if ((((Settings_MultiplayerSettings_o *)plVar22)->fields).CurrentMultiplayerServerType == 2)
    goto label_041f8db5;
label_041f8e8b:
    pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar21 = (long *)0x0;
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (pPVar7 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
    Photon_Voice_VoiceFollowClient__JoinRoom
              (pPVar7,pSVar11,(System_String_array *)0x0,(System_String_o *)in_RCX,pSVar15,sessionID,
               (MethodInfo *)0x0);
    return;
  }
label_041f8ef9:
  il2cpp_runtime_helper_022b2c90();
  plVar22 = plVar21;
  if (g_data_057ad880 == '\0') {
    plVar22 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
  }
  if (g_data_057ad876 == '\0') {
    plVar22 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar2 = *(int *)&(((Settings_StringSetting_c *)plVar21)->_1).interopData;
  }
  else {
    iVar2 = *(int *)&(((Settings_StringSetting_c *)plVar21)->_1).interopData;
  }
  if (iVar2 == 2) {
    pvVar8 = (((Settings_StringSetting_c *)plVar21)->_1).byval_arg.data;
    if (pvVar8 == (void *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad881 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MultiplayerRegion_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        il2cpp_runtime_helper_023445d0(&"sa");
        il2cpp_runtime_helper_023445d0(&"us");
        il2cpp_runtime_helper_023445d0(&"eu");
        il2cpp_runtime_helper_023445d0(&"sa.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"us.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"eu.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"asia");
        il2cpp_runtime_helper_023445d0(&"asia.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"cn.aottg2.com");
        g_data_057ad881 = '\x01';
      }
      pSVar16 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar16[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar16,MethodInfo_TypedSetting_1_System_Int32);
      pSVar16[1].klass = (Settings_TypedSetting_int__c *)0x100000000;
      iVar9 = (*(pSVar16->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar16,0,(pSVar16->klass->vtable)._10_SanitizeValue.method);
      (pSVar16->fields).DefaultValue = iVar9;
      (*(pSVar16->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar16,(pSVar16->klass->vtable)._4_SetDefault.method);
      (((Settings_StringSetting_c *)plVar22)->_1).byval_arg.data = pSVar16;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).byval_arg,pSVar16);
      pSVar16 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar16[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar16,MethodInfo_TypedSetting_1_System_Int32);
      pSVar16[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      iVar9 = (*(pSVar16->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar16,0,(pSVar16->klass->vtable)._10_SanitizeValue.method);
      (pSVar16->fields).DefaultValue = iVar9;
      (*(pSVar16->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar16,(pSVar16->klass->vtable)._4_SetDefault.method);
      *(Settings_TypedSetting_int__o **)&(((Settings_StringSetting_c *)plVar22)->_1).byval_arg.bits = pSVar16;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).byval_arg.bits,pSVar16);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar17 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(pSVar17,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      (((Settings_StringSetting_c *)plVar22)->_1).this_arg.data = pSVar17;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).this_arg,pSVar17);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar17 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(pSVar17,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      *(Settings_TypedSetting_T__o **)&(((Settings_StringSetting_c *)plVar22)->_1).this_arg.bits = pSVar17;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).this_arg.bits,pSVar17);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pIVar18->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pIVar18,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pIVar18->_1).byval_arg.data = 0x7fffffff;
      (((Settings_StringSetting_c *)plVar22)->_1).element_class = pIVar18;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).element_class,pIVar18);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pIVar18->_1).namespaze = (char *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pIVar18,MethodInfo_TypedSetting_1_System_Int32);
      (pIVar18->_1).namespaze = (char *)0x7fffffff80000000;
      pvVar8 = (pIVar18->_1).image;
      uVar10 = (**(code **)((long)pvVar8 + 0x1d8))(pIVar18,0x13bf,*(undefined8 *)((long)pvVar8 + 0x1e0));
      *(undefined4 *)&(pIVar18->_1).name = uVar10;
      pvVar8 = (pIVar18->_1).image;
      (**(code **)((long)pvVar8 + 0x178))(pIVar18,*(undefined8 *)((long)pvVar8 + 0x180));
      (((Settings_StringSetting_c *)plVar22)->_1).castClass = pIVar18;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).castClass,pIVar18);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pIVar18->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pIVar18,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pIVar18->_1).byval_arg.data = 0x7fffffff;
      (((Settings_StringSetting_c *)plVar22)->_1).declaringType = pIVar18;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).declaringType);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
      if (g_data_057ad896 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
        g_data_057ad896 = '\x01';
      }
      Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pIVar18,0,MethodInfo_TypedSetting_1_System_Boolean);
      (((Settings_StringSetting_c *)plVar22)->_1).parent = pIVar18;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).parent,pIVar18);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar17 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(pSVar17,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      (((Settings_StringSetting_c *)plVar22)->_1).generic_class = pSVar17;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).generic_class,pSVar17);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar17 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(pSVar17,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&pSVar17[1].klass = 0x7fffffff;
      (((Settings_StringSetting_c *)plVar22)->_1).typeMetadataHandle = pSVar17;
      il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).typeMetadataHandle,pSVar17);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
      if (pIVar18 != (Il2CppClass *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,0,"eu",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,1,"us",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,2,"sa",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,3,"asia",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar18,4,"asia",
                   MethodInfo_Void_Add);
        (((Settings_StringSetting_c *)plVar22)->_1).klass = pIVar18;
        il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).klass,pIVar18);
        method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        if (method_00 != (MethodInfo *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,1,"us.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,0,"eu.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,2,"sa.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,3,"asia.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,4,"cn.aottg2.com",
                     MethodInfo_Void_Add);
          (((Settings_StringSetting_c *)plVar22)->_1).fields = method_00;
          il2cpp_runtime_helper_022b4080(&(((Settings_StringSetting_c *)plVar22)->_1).fields);
          *(undefined4 *)&(((Settings_StringSetting_c *)plVar22)->_1).events = 0x13bf;
          Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)plVar22,method_00);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad882 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
        il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
        il2cpp_runtime_helper_023445d0(&"vc");
        g_data_057ad882 = '\x01';
      }
      **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
      lVar3 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
      *(undefined8 *)(lVar3 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
      il2cpp_runtime_helper_022b4080(lVar3 + 8);
      return;
    }
    if (*(int *)((long)pvVar8 + 0x14) == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationVersion__GetHashCode(pSVar12,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.MultiplayerSettings$$JoinRoom
// il2cpp: void Settings_MultiplayerSettings__JoinRoom (Settings_MultiplayerSettings_o* __this, System_String_o* roomId, System_String_o* roomName, System_String_o* password, const MethodInfo* method);
// 0x41f8b70

void Settings_MultiplayerSettings__JoinRoom
               (Settings_MultiplayerSettings_o *__this,System_String_o *roomId,System_String_o *roomName,
               System_String_o *password,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Photon_Voice_VoiceFollowClient_o *__this_00;
  Settings_TypedSetting_int__c *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *sessionID;
  Settings_PresetSettingsContainer_c *pSVar11;
  Settings_TypedSetting_int__o *pSVar12;
  System_Collections_Specialized_OrderedDictionary_o *pSVar13;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar14;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar15;
  long *__this_02;
  
  if (g_data_057ad87e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057ad87e = '\x01';
  }
  pSVar9 = roomName;
  plVar15 = (long *)roomId;
  pSVar8 = System_String__Concat_3ae5ba0(roomId,roomName,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar15 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8bee;
label_041f8c64:
    plVar15 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((__this->fields).CurrentMultiplayerServerType != 2) goto label_041f8c83;
label_041f8bfa:
    pSVar3 = (__this->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar3->fields)._value != 0) goto label_041f8c83;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar8,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    if (g_data_057ad876 == '\0') goto label_041f8c64;
label_041f8bee:
    if ((__this->fields).CurrentMultiplayerServerType == 2) goto label_041f8bfa;
label_041f8c83:
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            (roomId,(System_String_array *)0x0,password,pSVar9,pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_041f8d14;
label_041f8e2d:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_041f8e2d;
label_041f8d14:
    cVar1 = *(char *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 0x30);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = System_String__Concat_3ae5ba0
                     (roomId,(System_String_o *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8),(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_3ae5ba0(roomId,roomName,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar15 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    pSVar9 = roomName;
    if (g_data_057ad876 != '\0') goto label_041f8da9;
label_041f8e6c:
    plVar15 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((__this->fields).CurrentMultiplayerServerType != 2) goto label_041f8e8b;
label_041f8db5:
    pSVar3 = (__this->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar3->fields)._value != 0) goto label_041f8e8b;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_String_o *)0x0;
    pSVar10 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar10,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    pSVar9 = roomName;
    plVar15 = (long *)roomId;
    if (g_data_057ad876 == '\0') goto label_041f8e6c;
label_041f8da9:
    if ((__this->fields).CurrentMultiplayerServerType == 2) goto label_041f8db5;
label_041f8e8b:
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar15 = (long *)0x0;
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (__this_00 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
    Photon_Voice_VoiceFollowClient__JoinRoom
              (__this_00,pSVar8,(System_String_array *)0x0,password,pSVar10,sessionID,(MethodInfo *)0x0);
    return;
  }
label_041f8ef9:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = plVar15;
  if (g_data_057ad880 == '\0') {
    __this_02 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
  }
  if (g_data_057ad876 == '\0') {
    __this_02 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar2 = *(int *)&(((Settings_PresetSettingsContainer_o *)((long)plVar15 + 0x60))->fields).Settings;
  }
  else {
    iVar2 = *(int *)&(((Settings_PresetSettingsContainer_o *)((long)plVar15 + 0x60))->fields).Settings;
  }
  if (iVar2 == 2) {
    if (((Settings_PresetSettingsContainer_o *)((long)plVar15 + 0x20))->klass ==
        (Settings_PresetSettingsContainer_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad881 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MultiplayerRegion_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        il2cpp_runtime_helper_023445d0(&"sa");
        il2cpp_runtime_helper_023445d0(&"us");
        il2cpp_runtime_helper_023445d0(&"eu");
        il2cpp_runtime_helper_023445d0(&"sa.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"us.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"eu.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"asia");
        il2cpp_runtime_helper_023445d0(&"asia.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"cn.aottg2.com");
        g_data_057ad881 = '\x01';
      }
      pSVar11 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pSVar11->_1).namespaze = (char *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar11,MethodInfo_TypedSetting_1_System_Int32);
      (pSVar11->_1).namespaze = (char *)0x100000000;
      pSVar4 = (pSVar11->_1).image;
      iVar7 = (*(pSVar4->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar11,0,(pSVar4->vtable)._10_SanitizeValue.method);
      ((Settings_TypedSetting_int__Fields *)&(pSVar11->_1).name)->DefaultValue = iVar7;
      pSVar4 = (pSVar11->_1).image;
      (*(pSVar4->vtable)._4_SetDefault.methodPtr)(pSVar11,(pSVar4->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->klass = pSVar11;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20),pSVar11);
      pSVar12 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar12[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar12,MethodInfo_TypedSetting_1_System_Int32);
      pSVar12[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      iVar7 = (*(pSVar12->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar12,0,(pSVar12->klass->vtable)._10_SanitizeValue.method);
      (pSVar12->fields).DefaultValue = iVar7;
      (*(pSVar12->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar12,(pSVar12->klass->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->monitor = pSVar12;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->monitor,pSVar12);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar13 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar13->fields)._initialCapacity = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar13,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar13->fields)._initialCapacity = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->fields).Settings = pSVar13;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->fields,pSVar13);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar14 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar14->fields)._count = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar14,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar14->fields)._count = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->fields).TypedSettings = pSVar14;
      il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x20))->fields).
                          TypedSettings,pSVar14);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar11 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pSVar11->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar11,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pSVar11->_1).byval_arg.data = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->klass = pSVar11;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40),pSVar11);
      pSVar12 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar12[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar12,MethodInfo_TypedSetting_1_System_Int32);
      pSVar12[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      iVar7 = (*(pSVar12->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar12,0x13bf,(pSVar12->klass->vtable)._10_SanitizeValue.method);
      (pSVar12->fields).DefaultValue = iVar7;
      (*(pSVar12->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar12,(pSVar12->klass->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->monitor = pSVar12;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->monitor,pSVar12);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar13 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar13->fields)._initialCapacity = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar13,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar13->fields)._initialCapacity = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->fields).Settings = pSVar13;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->fields);
      pSVar14 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
      if (g_data_057ad896 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
        g_data_057ad896 = '\x01';
      }
      Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar14,0,MethodInfo_TypedSetting_1_System_Boolean);
      (((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->fields).TypedSettings = pSVar14;
      il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x40))->fields).
                          TypedSettings,pSVar14);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar11 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pSVar11->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar11,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pSVar11->_1).byval_arg.data = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60))->klass = pSVar11;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60),pSVar11);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_01 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&__this_01[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(__this_01,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&__this_01[1].klass = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60))->monitor = __this_01;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60))->monitor,__this_01)
      ;
      pSVar14 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
      if (pSVar14 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,0,"eu",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,1,"us",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,2,"sa",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,3,"asia",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,4,"asia",
                   MethodInfo_Void_Add);
        (((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60))->fields).TypedSettings = pSVar14;
        il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x60))->fields).
                            TypedSettings,pSVar14);
        pSVar11 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        if (pSVar11 != (Settings_PresetSettingsContainer_c *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,1,"us.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,0,"eu.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,2,"sa.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,3,"asia.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,4,"cn.aottg2.com",
                     MethodInfo_Void_Add);
          ((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x80))->klass = pSVar11;
          il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x80));
          *(undefined4 *)&((Settings_PresetSettingsContainer_o *)((long)__this_02 + 0x80))->monitor = 0x13bf;
          Settings_BaseSettingsContainer___ctor
                    ((Settings_PresetSettingsContainer_o *)__this_02,(MethodInfo *)pSVar11);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad882 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
        il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
        il2cpp_runtime_helper_023445d0(&"vc");
        g_data_057ad882 = '\x01';
      }
      **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
      lVar6 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
      *(undefined8 *)(lVar6 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
      il2cpp_runtime_helper_022b4080(lVar6 + 8);
      return;
    }
    if (*(int *)((long)&(((Settings_PresetSettingsContainer_o *)((long)plVar15 + 0x20))->klass->_1).name + 4)
        == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_ApplicationVersion__GetHashCode(pSVar9,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Settings.MultiplayerSettings$$GetHashKey
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashKey (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x41f8ab0

System_String_o *
Settings_MultiplayerSettings__GetHashKey
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Settings_IntSetting_o *pSVar3;
  Photon_Voice_VoiceFollowClient_o *__this_00;
  Settings_TypedSetting_int__c *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  bool_conflict bVar7;
  int32_t iVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *sessionID;
  undefined4 extraout_var;
  Settings_PresetSettingsContainer_c *pSVar12;
  Settings_TypedSetting_int__o *pSVar13;
  System_Collections_Specialized_OrderedDictionary_o *pSVar14;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar15;
  Settings_TypedSetting_T__o *__this_01;
  System_String_o *extraout_RAX;
  System_String_o *in_RCX;
  System_String_o *str1;
  Settings_PresetSettingsContainer_o *pSVar16;
  long *plVar17;
  long *plVar18;
  
  pSVar16 = (Settings_PresetSettingsContainer_o *)str;
  if (g_data_057ad87f == '\0') {
    plVar18 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad87f = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8acc;
label_041f8b2a:
    plVar18 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar2 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    plVar18 = (long *)__this;
    if (g_data_057ad876 == '\0') goto label_041f8b2a;
label_041f8acc:
    iVar2 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar2 != 2) {
label_041f8b43:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar3 = (__this->fields).LobbyMode;
  if (pSVar3 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar3->fields)._value == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = ApplicationManagers_ApplicationVersion__GetHashKey(str,(MethodInfo *)0x0);
      return pSVar9;
    }
    goto label_041f8b43;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad87e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationVersion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057ad87e = '\x01';
  }
  pSVar9 = str1;
  plVar17 = (long *)pSVar16;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar16,str1,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar17 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8bee;
label_041f8c64:
    plVar17 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((((Settings_MultiplayerSettings_o *)plVar18)->fields).CurrentMultiplayerServerType != 2)
    goto label_041f8c83;
label_041f8bfa:
    pSVar3 = (((Settings_MultiplayerSettings_o *)plVar18)->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar3->fields)._value != 0) goto label_041f8c83;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar10,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    if (g_data_057ad876 == '\0') goto label_041f8c64;
label_041f8bee:
    if ((((Settings_MultiplayerSettings_o *)plVar18)->fields).CurrentMultiplayerServerType == 2)
    goto label_041f8bfa;
label_041f8c83:
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            ((System_String_o *)pSVar16,(System_String_array *)0x0,in_RCX,pSVar9,pSVar10,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  if (g_data_057abf5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057abf5b = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_041f8d14;
label_041f8e2d:
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = *(System_String_o **)(TypeInfo_PhotonNetwork + 0xb8);
    cVar1 = *(char *)&pSVar9[2].klass;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_041f8e2d;
label_041f8d14:
    pSVar9 = *(System_String_o **)(TypeInfo_PhotonNetwork + 0xb8);
    cVar1 = *(char *)&pSVar9[2].klass;
  }
  if (cVar1 != '\0') {
    return pSVar9;
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Photon_Voice_VoiceFollowClient_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if (*(int *)(TypeInfo_MultiplayerSettings + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = System_String__Concat_3ae5ba0
                      ((System_String_o *)pSVar16,(System_String_o *)**(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8),
                       (MethodInfo *)0x0);
  pSVar9 = str1;
  pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)pSVar16,str1,(MethodInfo *)0x0);
  if (g_data_057ad880 == '\0') {
    plVar17 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
    if (g_data_057ad876 != '\0') goto label_041f8da9;
label_041f8e6c:
    plVar17 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    if ((((Settings_MultiplayerSettings_o *)plVar18)->fields).CurrentMultiplayerServerType != 2)
    goto label_041f8e8b;
label_041f8db5:
    pSVar3 = (((Settings_MultiplayerSettings_o *)plVar18)->fields).LobbyMode;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_041f8ef9;
    if ((pSVar3->fields)._value != 0) goto label_041f8e8b;
    if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar11,(MethodInfo *)0x0);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  else {
    plVar17 = (long *)pSVar16;
    if (g_data_057ad876 == '\0') goto label_041f8e6c;
label_041f8da9:
    if ((((Settings_MultiplayerSettings_o *)plVar18)->fields).CurrentMultiplayerServerType == 2)
    goto label_041f8db5;
label_041f8e8b:
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    iVar2 = *(int *)(TypeInfo_ApplicationVersion + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar17 = (long *)0x0;
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (__this_00 != (Photon_Voice_VoiceFollowClient_o *)0x0) {
    bVar7 = Photon_Voice_VoiceFollowClient__JoinRoom
                      (__this_00,pSVar10,(System_String_array *)0x0,in_RCX,pSVar11,sessionID,(MethodInfo *)0x0
                      );
    return (System_String_o *)CONCAT44(extraout_var,bVar7);
  }
label_041f8ef9:
  il2cpp_runtime_helper_022b2c90();
  plVar18 = plVar17;
  if (g_data_057ad880 == '\0') {
    plVar18 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
  }
  if (g_data_057ad876 == '\0') {
    plVar18 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar2 = *(int *)&(((Settings_PresetSettingsContainer_o *)((long)plVar17 + 0x60))->fields).Settings;
  }
  else {
    iVar2 = *(int *)&(((Settings_PresetSettingsContainer_o *)((long)plVar17 + 0x60))->fields).Settings;
  }
  if (iVar2 == 2) {
    if (((Settings_PresetSettingsContainer_o *)((long)plVar17 + 0x20))->klass ==
        (Settings_PresetSettingsContainer_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad881 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MultiplayerRegion_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        il2cpp_runtime_helper_023445d0(&"sa");
        il2cpp_runtime_helper_023445d0(&"us");
        il2cpp_runtime_helper_023445d0(&"eu");
        il2cpp_runtime_helper_023445d0(&"sa.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"us.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"eu.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"asia");
        il2cpp_runtime_helper_023445d0(&"asia.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"cn.aottg2.com");
        g_data_057ad881 = '\x01';
      }
      pSVar12 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pSVar12->_1).namespaze = (char *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar12,MethodInfo_TypedSetting_1_System_Int32);
      (pSVar12->_1).namespaze = (char *)0x100000000;
      pSVar4 = (pSVar12->_1).image;
      iVar8 = (*(pSVar4->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar12,0,(pSVar4->vtable)._10_SanitizeValue.method);
      ((Settings_TypedSetting_int__Fields *)&(pSVar12->_1).name)->DefaultValue = iVar8;
      pSVar4 = (pSVar12->_1).image;
      (*(pSVar4->vtable)._4_SetDefault.methodPtr)(pSVar12,(pSVar4->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->klass = pSVar12;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20),pSVar12);
      pSVar13 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar13[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar13,MethodInfo_TypedSetting_1_System_Int32);
      pSVar13[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      iVar8 = (*(pSVar13->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar13,0,(pSVar13->klass->vtable)._10_SanitizeValue.method);
      (pSVar13->fields).DefaultValue = iVar8;
      (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->monitor = pSVar13;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->monitor,pSVar13);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar14 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar14->fields)._initialCapacity = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar14,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar14->fields)._initialCapacity = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->fields).Settings = pSVar14;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->fields,pSVar14);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar15 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar15->fields)._count = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar15,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar15->fields)._count = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->fields).TypedSettings = pSVar15;
      il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x20))->fields).
                          TypedSettings,pSVar15);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar12 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pSVar12->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar12,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pSVar12->_1).byval_arg.data = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->klass = pSVar12;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40),pSVar12);
      pSVar13 = (Settings_TypedSetting_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      pSVar13[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      Settings_TypedSetting_int____ctor(pSVar13,MethodInfo_TypedSetting_1_System_Int32);
      pSVar13[1].klass = (Settings_TypedSetting_int__c *)0x7fffffff80000000;
      iVar8 = (*(pSVar13->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar13,0x13bf,(pSVar13->klass->vtable)._10_SanitizeValue.method);
      (pSVar13->fields).DefaultValue = iVar8;
      (*(pSVar13->klass->vtable)._4_SetDefault.methodPtr)
                (pSVar13,(pSVar13->klass->vtable)._4_SetDefault.method);
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->monitor = pSVar13;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->monitor,pSVar13);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar14 = (System_Collections_Specialized_OrderedDictionary_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar14->fields)._initialCapacity = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar14,pIVar5,MethodInfo_TypedSetting_1_System_String);
      (pSVar14->fields)._initialCapacity = 0x7fffffff;
      (((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->fields).Settings = pSVar14;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->fields);
      pSVar15 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
      if (g_data_057ad896 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
        g_data_057ad896 = '\x01';
      }
      Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar15,0,MethodInfo_TypedSetting_1_System_Boolean);
      (((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->fields).TypedSettings = pSVar15;
      il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x40))->fields).
                          TypedSettings,pSVar15);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar12 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&(pSVar12->_1).byval_arg.data = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar12,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&(pSVar12->_1).byval_arg.data = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60))->klass = pSVar12;
      il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60),pSVar12);
      pIVar5 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      __this_01 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      *(undefined4 *)&__this_01[1].klass = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0(__this_01,pIVar5,MethodInfo_TypedSetting_1_System_String);
      *(undefined4 *)&__this_01[1].klass = 0x7fffffff;
      ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60))->monitor = __this_01;
      il2cpp_runtime_helper_022b4080(&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60))->monitor,__this_01);
      pSVar15 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
      if (pSVar15 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,0,"eu",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,1,"us",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,2,"sa",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,3,"asia",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar15,4,"asia",
                   MethodInfo_Void_Add);
        (((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60))->fields).TypedSettings = pSVar15;
        il2cpp_runtime_helper_022b4080(&(((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x60))->fields).
                            TypedSettings,pSVar15);
        pSVar12 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        if (pSVar12 != (Settings_PresetSettingsContainer_c *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,1,"us.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,0,"eu.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,2,"sa.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,3,"asia.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,4,"cn.aottg2.com",
                     MethodInfo_Void_Add);
          ((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x80))->klass = pSVar12;
          il2cpp_runtime_helper_022b4080((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x80));
          *(undefined4 *)&((Settings_PresetSettingsContainer_o *)((long)plVar18 + 0x80))->monitor = 0x13bf;
          Settings_BaseSettingsContainer___ctor
                    ((Settings_PresetSettingsContainer_o *)plVar18,(MethodInfo *)pSVar12);
          return extraout_RAX;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad882 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
        il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
        il2cpp_runtime_helper_023445d0(&"vc");
        g_data_057ad882 = '\x01';
      }
      **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
      lVar6 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
      *(undefined8 *)(lVar6 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
      pSVar9 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar6 + 8);
      return pSVar9;
    }
    if (*(int *)((long)&(((Settings_PresetSettingsContainer_o *)((long)plVar17 + 0x20))->klass->_1).name + 4)
        == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar9,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Settings.MultiplayerSettings$$GetHashCode
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashCode (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x41f8f00

System_String_o *
Settings_MultiplayerSettings__GetHashCode
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *__this_01;
  MethodInfo *method_00;
  System_String_o *extraout_RAX;
  long *__this_02;
  
  __this_02 = (long *)__this;
  if (g_data_057ad880 == '\0') {
    __this_02 = &TypeInfo_ApplicationVersion;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad880 = '\x01';
  }
  if (g_data_057ad876 == '\0') {
    __this_02 = &MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad876 = '\x01';
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar1 == 2) {
    pSVar6 = (__this->fields).LobbyMode;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad881 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MultiplayerRegion_string);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
        il2cpp_runtime_helper_023445d0(&"sa");
        il2cpp_runtime_helper_023445d0(&"us");
        il2cpp_runtime_helper_023445d0(&"eu");
        il2cpp_runtime_helper_023445d0(&"sa.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"us.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"eu.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"asia");
        il2cpp_runtime_helper_023445d0(&"asia.aottg2.com");
        il2cpp_runtime_helper_023445d0(&"cn.aottg2.com");
        g_data_057ad881 = '\x01';
      }
      pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pSVar6->fields).MinValue = -0x80000000;
      (pSVar6->fields).MaxValue = 0x7fffffff;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
      (pSVar6->fields).MinValue = 0;
      (pSVar6->fields).MaxValue = 1;
      iVar4 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
      (pSVar6->fields).DefaultValue = iVar4;
      (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).LobbyMode = pSVar6;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).LobbyMode,pSVar6);
      pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pSVar6->fields).MinValue = -0x80000000;
      (pSVar6->fields).MaxValue = 0x7fffffff;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
      (pSVar6->fields).MinValue = -0x80000000;
      (pSVar6->fields).MaxValue = 0x7fffffff;
      iVar4 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar6,0,(pSVar6->klass->vtable)._10_SanitizeValue.method);
      (pSVar6->fields).DefaultValue = iVar4;
      (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).AppIdMode = pSVar6;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).AppIdMode,pSVar6);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).CustomLobby = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).CustomLobby,pSVar7);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).CustomAppId = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).CustomAppId,pSVar7);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).LanIP = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).LanIP,pSVar7);
      pSVar6 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
      if (g_data_057ad8a8 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
        g_data_057ad8a8 = '\x01';
      }
      (pSVar6->fields).MinValue = -0x80000000;
      (pSVar6->fields).MaxValue = 0x7fffffff;
      Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar6,MethodInfo_TypedSetting_1_System_Int32);
      (pSVar6->fields).MinValue = -0x80000000;
      (pSVar6->fields).MaxValue = 0x7fffffff;
      iVar4 = (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                        (pSVar6,0x13bf,(pSVar6->klass->vtable)._10_SanitizeValue.method);
      (pSVar6->fields).DefaultValue = iVar4;
      (*(pSVar6->klass->vtable)._4_SetDefault.methodPtr)(pSVar6,(pSVar6->klass->vtable)._4_SetDefault.method);
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).LanPort = pSVar6;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).LanPort,pSVar6);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).LanPassword = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).LanPassword);
      __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
      if (g_data_057ad896 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
        g_data_057ad896 = '\x01';
      }
      Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_TypedSetting_1_System_Boolean);
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).LanSupportsAccounts = __this_00;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).LanSupportsAccounts,
                         __this_00);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).ModUsername = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).ModUsername,pSVar7);
      pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      if (g_data_057ad8c1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
        g_data_057ad8c1 = '\x01';
      }
      (pSVar7->fields).MaxLength = 0x7fffffff;
      Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar7,pIVar2,MethodInfo_TypedSetting_1_System_String);
      (pSVar7->fields).MaxLength = 0x7fffffff;
      (((Settings_MultiplayerSettings_o *)__this_02)->fields).ModPassword = pSVar7;
      il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).ModPassword,pSVar7);
      __this_01 = (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
      if (__this_01 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,0,"eu",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,"us",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,"sa",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,"asia",
                   MethodInfo_Void_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,"asia",
                   MethodInfo_Void_Add);
        (((Settings_MultiplayerSettings_o *)__this_02)->fields).CloudAddresses = __this_01;
        il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).CloudAddresses,__this_01);
        method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
        System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
        if (method_00 != (MethodInfo *)0x0) {
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,1,"us.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,0,"eu.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,2,"sa.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,3,"asia.aottg2.com",
                     MethodInfo_Void_Add);
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,4,"cn.aottg2.com",
                     MethodInfo_Void_Add);
          (((Settings_MultiplayerSettings_o *)__this_02)->fields).PublicAddresses =
               (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)method_00;
          il2cpp_runtime_helper_022b4080(&(((Settings_MultiplayerSettings_o *)__this_02)->fields).PublicAddresses);
          (((Settings_MultiplayerSettings_o *)__this_02)->fields).DefaultPort = 0x13bf;
          Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this_02,method_00);
          return extraout_RAX;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ad882 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
        il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
        il2cpp_runtime_helper_023445d0(&"vc");
        g_data_057ad882 = '\x01';
      }
      **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
      lVar3 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
      *(undefined8 *)(lVar3 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar3 + 8);
      return pSVar5;
    }
    if ((pSVar6->fields)._value == 0) {
      if (*(int *)(TypeInfo_ApplicationVersion + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = ApplicationManagers_ApplicationVersion__GetHashCode(str,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Settings.MultiplayerSettings$$.ctor
// il2cpp: void Settings_MultiplayerSettings___ctor (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x41f8fc0

void Settings_MultiplayerSettings___ctor(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long lVar2;
  int32_t iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *__this_01;
  MethodInfo *method_00;
  
  if (g_data_057ad881 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_MultiplayerRegion_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"sa");
    il2cpp_runtime_helper_023445d0(&"us");
    il2cpp_runtime_helper_023445d0(&"eu");
    il2cpp_runtime_helper_023445d0(&"sa.aottg2.com");
    il2cpp_runtime_helper_023445d0(&"us.aottg2.com");
    il2cpp_runtime_helper_023445d0(&"eu.aottg2.com");
    il2cpp_runtime_helper_023445d0(&"asia");
    il2cpp_runtime_helper_023445d0(&"asia.aottg2.com");
    il2cpp_runtime_helper_023445d0(&"cn.aottg2.com");
    g_data_057ad881 = '\x01';
  }
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar4,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 1;
  iVar3 = (*(pSVar4->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._10_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).LobbyMode = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LobbyMode,pSVar4);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar4,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar4->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar4,0,(pSVar4->klass->vtable)._10_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).AppIdMode = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AppIdMode,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomLobby = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomLobby,pSVar5);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomAppId = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomAppId,pSVar5);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanIP = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LanIP,pSVar5);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)pSVar4,MethodInfo_TypedSetting_1_System_Int32);
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar4->klass->vtable)._10_SanitizeValue.methodPtr)
                    (pSVar4,0x13bf,(pSVar4->klass->vtable)._10_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).LanPort = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LanPort,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanPassword = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LanPassword);
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this_00,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).LanSupportsAccounts = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).LanSupportsAccounts,__this_00);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModUsername = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ModUsername,pSVar5);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModPassword = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ModPassword,pSVar5);
  __this_01 = (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
  if (__this_01 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,0,"eu",MethodInfo_Void_Add)
    ;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,1,"us",MethodInfo_Void_Add)
    ;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,2,"sa",MethodInfo_Void_Add)
    ;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,3,"asia",MethodInfo_Void_Add)
    ;
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,4,"asia",MethodInfo_Void_Add)
    ;
    (__this->fields).CloudAddresses = __this_01;
    il2cpp_runtime_helper_022b4080(&(__this->fields).CloudAddresses,__this_01);
    method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_MultiplayerRegion_string);
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,MethodInfo_Dictionary_2_Settings_MultiplayerRegion_System_String);
    if (method_00 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,1,"us.aottg2.com",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,0,"eu.aottg2.com",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,2,"sa.aottg2.com",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,3,"asia.aottg2.com",
                 MethodInfo_Void_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)method_00,4,"cn.aottg2.com",
                 MethodInfo_Void_Add);
      (__this->fields).PublicAddresses =
           (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)method_00;
      il2cpp_runtime_helper_022b4080(&(__this->fields).PublicAddresses);
      (__this->fields).DefaultPort = 0x13bf;
      Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad882 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
    il2cpp_runtime_helper_023445d0(&"vc");
    g_data_057ad882 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
  lVar2 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
  *(undefined8 *)(lVar2 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
  il2cpp_runtime_helper_022b4080(lVar2 + 8);
  return;
}


// Settings.MultiplayerSettings$$.cctor
// il2cpp: void Settings_MultiplayerSettings___cctor (const MethodInfo* method);
// 0x41f96c0

void Settings_MultiplayerSettings___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ad882 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&"28521206-90d0-41b1-93b0-f35460fef0b6");
    il2cpp_runtime_helper_023445d0(&"vc");
    g_data_057ad882 = '\x01';
  }
  **(undefined8 **)(TypeInfo_MultiplayerSettings + 0xb8) = "vc";
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_MultiplayerSettings + 0xb8),"vc");
  lVar1 = *(long *)(TypeInfo_MultiplayerSettings + 0xb8);
  *(undefined8 *)(lVar1 + 8) = "28521206-90d0-41b1-93b0-f35460fef0b6";
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  return;
}


