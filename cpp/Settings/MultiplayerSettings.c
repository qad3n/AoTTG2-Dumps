// Type: Settings.MultiplayerSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/MultiplayerSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// --------------------------------

// Settings.MultiplayerSettings.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass21_0___ctor (Settings_MultiplayerSettings___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5b51be0

void Settings_MultiplayerSettings___c__DisplayClass21_0___ctor
               (Settings_MultiplayerSettings___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass21_0$$<ConnectServer>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass21_0___ConnectServer_b__0 (Settings_MultiplayerSettings___c__DisplayClass21_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x5b53bc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b53bd8: mov esi, dword ptr [rax + 0x18]
// asm:   0x5b53bdb: pop rax
// asm:   0x5b53bdc: jmp 0x5b51bf0  ; Settings_MultiplayerSettings__ConnectServerInternal()

void Settings_MultiplayerSettings___c__DisplayClass21_0___ConnectServer_b__0
               (Settings_MultiplayerSettings___c__DisplayClass21_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t port;
  uint key;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Photon_Realtime_LoadBalancingClient_o *pPVar5;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar6;
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar7;
  System_String_o *pSVar8;
  System_Net_NetworkCredential_o *pSVar9;
  Photon_Realtime_AppSettings_o *pPVar10;
  Photon_Realtime_AuthenticationValues_o *__this_01;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Photon_Voice_LoadBalancingTransport_o *pPVar12;
  MethodInfo *method_04;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields).request != (__this_00->fields)._connectRequest) {
    return;
  }
  key = (__this->fields).region;
  method_04 = (MethodInfo *)(ulong)key;
  if (Il2CppMethodInitialized_075472bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AppSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AuthenticationValues);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    Il2CppMethodInitialized_075472bc = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this_00,method_04);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__set_AuthValues((Photon_Realtime_AuthenticationValues_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (__this_00->fields).AppIdMode;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b521d3;
  if ((pSVar2->fields)._value != 0) {
    pSVar3 = (__this_00->fields).CloudAddresses;
    if (pSVar3 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      pSVar8 = (System_String_o *)
               System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
      (__this_00->fields).CurrentMultiplayerServerType = 1;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pSVar4 = (__this_00->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
         (pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient,
         pPVar5 == (Photon_Realtime_LoadBalancingClient_o *)0x0)) goto label_05b521d3;
      (pPVar5->fields)._AppId_k__BackingField = (pSVar4->fields)._value;
      Il2CppCodeGenWriteBarrier(&(pPVar5->fields)._AppId_k__BackingField);
      pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,false,method_00);
      if (pPVar5 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_05b521d3;
      (pPVar5->fields).AppVersion = pSVar9;
      Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion);
      Photon_Pun_PhotonNetwork__ConnectToRegion(pSVar8,(MethodInfo *)0x0);
      pPVar10 = (Photon_Realtime_AppSettings_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
      Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
      pSVar4 = (__this_00->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) || (pPVar10 == (Photon_Realtime_AppSettings_o *)0x0))
      goto label_05b521d3;
      (pPVar10->fields).AppIdVoice = (pSVar4->fields)._value;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).AppIdVoice);
      (pPVar10->fields).FixedRegion = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).FixedRegion);
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_05b521d3;
      (*(pPVar6->klass->vtable)._7_ConnectUsingSettings.methodPtr)
                (pPVar6,pPVar10,(pPVar6->klass->vtable)._7_ConnectUsingSettings.method);
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_05b521d3;
      pPVar12 = (pPVar6->fields).client;
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,false,method_01);
      if (pPVar12 == (Photon_Voice_LoadBalancingTransport_o *)0x0) goto label_05b521d3;
      goto label_05b520f3;
    }
    goto label_05b521d3;
  }
  pSVar3 = (__this_00->fields).PublicAddresses;
  if (pSVar3 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) goto label_05b521d3;
  pSVar8 = (System_String_o *)
           System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,key,
                      (MethodInfo_4A54F30 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
  (__this_00->fields).CurrentMultiplayerServerType = 2;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar7) goto label_05b51eac;
  }
  else {
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar7) {
label_05b51eac:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        if (g_data_075472f7 == '\0') goto label_05b52126;
label_05b51ec9:
        uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_075472f7 != '\0') goto label_05b51ec9;
label_05b52126:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        g_data_075472f7 = '\x01';
        uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar7 = System_String__IsNullOrEmpty
                        (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                         _PhotonToken_k__BackingField,(MethodInfo *)0x0);
      if (!bVar7) {
        __this_01 = (Photon_Realtime_AuthenticationValues_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AuthenticationValues);
        Photon_Realtime_AuthenticationValues___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto label_05b521d3;
        (__this_01->fields).authType = 0;
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
        bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
          goto label_05b51f5a;
label_05b52191:
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          if (g_data_075472f7 == '\0') goto label_05b521a3;
label_05b51f67:
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          (__this_01->fields)._UserId_k__BackingField = pSVar11;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._UserId_k__BackingField);
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
          goto label_05b52191;
label_05b51f5a:
          if (g_data_075472f7 != '\0') goto label_05b51f67;
label_05b521a3:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          g_data_075472f7 = '\x01';
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        (*(__this_01->klass->vtable)._7_AddAuthParameter.methodPtr)
                  (__this_01,"token",
                   TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,
                   (__this_01->klass->vtable)._7_AddAuthParameter.method);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        Photon_Pun_PhotonNetwork__set_AuthValues(__this_01,(MethodInfo *)0x0);
      }
    }
  }
  port = (__this_00->fields).DefaultPort;
  pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar8,port,pSVar11,(MethodInfo *)0x0);
  pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
  pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,true,method_02);
  if (pPVar5 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
    (pPVar5->fields).AppVersion = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion);
    pPVar10 = (Photon_Realtime_AppSettings_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
    Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
    if (pPVar10 != (Photon_Realtime_AppSettings_o *)0x0) {
      (pPVar10->fields).Server = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).Server);
      (pPVar10->fields).Port = (__this_00->fields).DefaultPort;
      (pPVar10->fields).UseNameServer = false;
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
        (*(pPVar6->klass->vtable)._7_ConnectUsingSettings.methodPtr)
                  (pPVar6,pPVar10,(pPVar6->klass->vtable)._7_ConnectUsingSettings.method);
        pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
        if (pPVar6 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
          pPVar12 = (pPVar6->fields).client;
          pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this_00,true,method_03);
          if (pPVar12 != (Photon_Voice_LoadBalancingTransport_o *)0x0) {
label_05b520f3:
            (pPVar12->fields).AppVersion = pSVar9;
            Il2CppCodeGenWriteBarrier(&(pPVar12->fields).AppVersion);
            return;
          }
        }
      }
    }
  }
label_05b521d3:
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass26_0___ctor (Settings_MultiplayerSettings___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5b53010

void Settings_MultiplayerSettings___c__DisplayClass26_0___ctor
               (Settings_MultiplayerSettings___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass26_0$$<StartRoom>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass26_0___StartRoom_b__0 (Settings_MultiplayerSettings___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5b53bf0

void Settings_MultiplayerSettings___c__DisplayClass26_0___StartRoom_b__0
               (Settings_MultiplayerSettings___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PunVoiceClient_o *__this_00;
  System_String_o *pSVar1;
  Photon_Realtime_RoomOptions_o *roomOptions;
  System_String_o *roomName;
  System_String_o *sessionID;
  
  if (Il2CppMethodInitialized_075472c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_075472c6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  __this_00 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  pSVar1 = (__this->fields).roomId;
  if ((TypeInfo_Settings_MultiplayerSettings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
  }
  roomName = System_String__Concat_52f0320
                       (pSVar1,TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix,
                        (MethodInfo *)0x0);
  pSVar1 = (__this->fields).hash;
  roomOptions = (__this->fields).vcRoomOptions;
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (__this_00 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Voice_VoiceFollowClient__CreateRoom
            ((Photon_Voice_VoiceFollowClient_o *)__this_00,roomName,roomOptions,
             (Photon_Realtime_TypedLobby_o *)0x0,(System_String_array *)0x0,pSVar1,sessionID,(MethodInfo *)0x0
            );
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass27_0___ctor (Settings_MultiplayerSettings___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x5b53380

void Settings_MultiplayerSettings___c__DisplayClass27_0___ctor
               (Settings_MultiplayerSettings___c__DisplayClass27_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass27_0$$<JoinRoom>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass27_0___JoinRoom_b__0 (Settings_MultiplayerSettings___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x5b53cf0

void Settings_MultiplayerSettings___c__DisplayClass27_0___JoinRoom_b__0
               (Settings_MultiplayerSettings___c__DisplayClass27_0_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PunVoiceClient_o *__this_00;
  System_String_o *pSVar1;
  System_String_o *hash;
  System_String_o *roomName;
  System_String_o *sessionID;
  
  if (Il2CppMethodInitialized_075472c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_075472c7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  __this_00 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  pSVar1 = (__this->fields).roomId;
  if ((TypeInfo_Settings_MultiplayerSettings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
  }
  roomName = System_String__Concat_52f0320
                       (pSVar1,TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix,
                        (MethodInfo *)0x0);
  pSVar1 = (__this->fields).password;
  hash = (__this->fields).hash;
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if (__this_00 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Voice_VoiceFollowClient__JoinRoom
            ((Photon_Voice_VoiceFollowClient_o *)__this_00,roomName,(System_String_array *)0x0,pSVar1,hash,
             sessionID,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings$$get_FileName
// il2cpp: System_String_o* Settings_MultiplayerSettings__get_FileName (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b51940

System_String_o *
Settings_MultiplayerSettings__get_FileName(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Multiplayer.json");
    Il2CppMethodInitialized_075472b8 = '\x01';
  }
  return "Multiplayer.json";
}


// Settings.MultiplayerSettings$$IsConnectedToPublic
// il2cpp: bool Settings_MultiplayerSettings__IsConnectedToPublic (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b51970

bool Settings_MultiplayerSettings__IsConnectedToPublic
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075472b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType != 2) {
    return false;
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value == 0;
}


// Settings.MultiplayerSettings$$Disconnect
// il2cpp: void Settings_MultiplayerSettings__Disconnect (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b519c0

void Settings_MultiplayerSettings__Disconnect(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar2;
  Photon_Voice_LoadBalancingTransport_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075472ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_075472ba = '\x01';
  }
  piVar1 = &(__this->fields)._connectRequest;
  *piVar1 = *piVar1 + 1;
  (__this->fields)._pendingVoiceRoom = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingVoiceRoom);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__Disconnect((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pPVar2 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  if ((pPVar2 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) &&
     (__this_00 = (pPVar2->fields).client, __this_00 != (Photon_Voice_LoadBalancingTransport_o *)0x0)) {
    bVar3 = Photon_Realtime_LoadBalancingClient__get_IsConnected
                      ((Photon_Realtime_LoadBalancingClient_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    pPVar2 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar2 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
      Photon_Voice_VoiceFollowClient__Disconnect((Photon_Voice_VoiceFollowClient_o *)pPVar2,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$ConnectServer
// il2cpp: void Settings_MultiplayerSettings__ConnectServer (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x5b51aa0

void Settings_MultiplayerSettings__ConnectServer
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  MethodInfo *method_00;
  bool bVar1;
  int iVar2;
  Settings_MultiplayerSettings___c__DisplayClass21_0_o *__this_00;
  System_Action_T1__T2__o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_075472bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_MultiplayerSettings_c__DisplayClass21_0_ConnectServer_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings_c__DisplayClass21_0);
    Il2CppMethodInitialized_075472bb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings_c__DisplayClass21_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Settings_MultiplayerSettings___c__DisplayClass21_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).region = region;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (bVar1) {
    iVar2 = (__this->fields)._connectRequest + 1;
    (__this->fields)._connectRequest = iVar2;
    (__this_00->fields).request = iVar2;
    __this_01 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
    System_Action_bool__object____ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass21_0_ConnectServer_b__0,
               (MethodInfo_4A88C40 *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Refresh
              ((System_Action_bool__string__o *)__this_01,true,(MethodInfo *)0x0);
    return;
  }
  Settings_MultiplayerSettings__ConnectServerInternal(__this,(__this_00->fields).region,method_00);
  return;
}


// Settings.MultiplayerSettings$$ConnectServerInternal
// il2cpp: void Settings_MultiplayerSettings__ConnectServerInternal (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x5b51bf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b51e3f: jmp 0x5b521d3
// asm:   0x5b51e93: jmp 0x5b51fbe

void Settings_MultiplayerSettings__ConnectServerInternal
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t port;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Photon_Realtime_LoadBalancingClient_o *pPVar5;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Net_NetworkCredential_o *pSVar9;
  Photon_Realtime_AppSettings_o *pPVar10;
  Photon_Realtime_AuthenticationValues_o *__this_00;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  Photon_Voice_LoadBalancingTransport_o *pPVar12;
  undefined4 in_register_00000034;
  MethodInfo *method_04;
  
  method_04 = (MethodInfo *)CONCAT44(in_register_00000034,region);
  if (Il2CppMethodInitialized_075472bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AppSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AuthenticationValues);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    Il2CppMethodInitialized_075472bc = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,method_04);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__set_AuthValues((Photon_Realtime_AuthenticationValues_o *)0x0,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).AppIdMode;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) goto label_05b521d3;
  if ((pSVar2->fields)._value != 0) {
    pSVar3 = (__this->fields).CloudAddresses;
    if (pSVar3 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      pSVar8 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,region,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
      (__this->fields).CurrentMultiplayerServerType = 1;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pSVar4 = (__this->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) ||
         (pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient,
         pPVar5 == (Photon_Realtime_LoadBalancingClient_o *)0x0)) goto label_05b521d3;
      (pPVar5->fields)._AppId_k__BackingField = (pSVar4->fields)._value;
      Il2CppCodeGenWriteBarrier(&(pPVar5->fields)._AppId_k__BackingField);
      pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,false,method_00);
      if (pPVar5 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_05b521d3;
      (pPVar5->fields).AppVersion = pSVar9;
      Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion);
      Photon_Pun_PhotonNetwork__ConnectToRegion(pSVar8,(MethodInfo *)0x0);
      pPVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
      Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).CustomAppId;
      if ((pSVar4 == (Settings_StringSetting_o *)0x0) || (pPVar10 == (Photon_Realtime_AppSettings_o *)0x0))
      goto label_05b521d3;
      (pPVar10->fields).AppIdVoice = (pSVar4->fields)._value;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).AppIdVoice);
      (pPVar10->fields).FixedRegion = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).FixedRegion);
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_05b521d3;
      (*(pPVar6->klass->vtable)._7_ConnectUsingSettings.methodPtr)
                (pPVar6,pPVar10,(pPVar6->klass->vtable)._7_ConnectUsingSettings.method);
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_05b521d3;
      pPVar12 = (pPVar6->fields).client;
      pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,false,method_01);
      if (pPVar12 == (Photon_Voice_LoadBalancingTransport_o *)0x0) goto label_05b521d3;
      goto label_05b520f3;
    }
    goto label_05b521d3;
  }
  pSVar3 = (__this->fields).PublicAddresses;
  if (pSVar3 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) goto label_05b521d3;
  pSVar8 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,region,
                      (MethodInfo_4A54F30 *)
                      MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
  (__this->fields).CurrentMultiplayerServerType = 2;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar7) goto label_05b51eac;
  }
  else {
    bVar7 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar7) {
label_05b51eac:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        if (g_data_075472f7 == '\0') goto label_05b52126;
label_05b51ec9:
        uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      }
      else {
        if (g_data_075472f7 != '\0') goto label_05b51ec9;
label_05b52126:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        g_data_075472f7 = '\x01';
        uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar7 = System_String__IsNullOrEmpty
                        (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                         _PhotonToken_k__BackingField,(MethodInfo *)0x0);
      if (!bVar7) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AuthenticationValues);
        Photon_Realtime_AuthenticationValues___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto label_05b521d3;
        (__this_00->fields).authType = 0;
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
        bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
          goto label_05b51f5a;
label_05b52191:
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          if (g_data_075472f7 == '\0') goto label_05b521a3;
label_05b51f67:
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar11 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          (__this_00->fields)._UserId_k__BackingField = pSVar11;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._UserId_k__BackingField);
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
          goto label_05b52191;
label_05b51f5a:
          if (g_data_075472f7 != '\0') goto label_05b51f67;
label_05b521a3:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          g_data_075472f7 = '\x01';
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        (*(__this_00->klass->vtable)._7_AddAuthParameter.methodPtr)
                  (__this_00,"token",
                   TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,
                   (__this_00->klass->vtable)._7_AddAuthParameter.method);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        Photon_Pun_PhotonNetwork__set_AuthValues(__this_00,(MethodInfo *)0x0);
      }
    }
  }
  port = (__this->fields).DefaultPort;
  pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar8,port,pSVar11,(MethodInfo *)0x0);
  pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
  pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,true,method_02);
  if (pPVar5 != (Photon_Realtime_LoadBalancingClient_o *)0x0) {
    (pPVar5->fields).AppVersion = pSVar9;
    Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion);
    pPVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
    Photon_Realtime_AppSettings___ctor(pPVar10,(MethodInfo *)0x0);
    if (pPVar10 != (Photon_Realtime_AppSettings_o *)0x0) {
      (pPVar10->fields).Server = pSVar8;
      Il2CppCodeGenWriteBarrier(&(pPVar10->fields).Server);
      (pPVar10->fields).Port = (__this->fields).DefaultPort;
      (pPVar10->fields).UseNameServer = false;
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
      if (pPVar6 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
        (*(pPVar6->klass->vtable)._7_ConnectUsingSettings.methodPtr)
                  (pPVar6,pPVar10,(pPVar6->klass->vtable)._7_ConnectUsingSettings.method);
        pPVar6 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
        if (pPVar6 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
          pPVar12 = (pPVar6->fields).client;
          pSVar9 = Settings_MultiplayerSettings__GetCurrentLobby(__this,true,method_03);
          if (pPVar12 != (Photon_Voice_LoadBalancingTransport_o *)0x0) {
label_05b520f3:
            (pPVar12->fields).AppVersion = pSVar9;
            Il2CppCodeGenWriteBarrier(&(pPVar12->fields).AppVersion);
            return;
          }
        }
      }
    }
  }
label_05b521d3:
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$ConnectLAN
// il2cpp: void Settings_MultiplayerSettings__ConnectLAN (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b522e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b5238c: jmp 0x5b524bd

void Settings_MultiplayerSettings__ConnectLAN(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int32_t port;
  Settings_BoolSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  System_String_o *appID;
  Photon_Realtime_LoadBalancingClient_o *pPVar5;
  bool bVar6;
  Photon_Realtime_AuthenticationValues_o *__this_00;
  System_String_o *pSVar7;
  System_Net_NetworkCredential_o *pSVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075472bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AuthenticationValues);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    Il2CppMethodInitialized_075472bd = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,method);
  pSVar2 = (__this->fields).LanSupportsAccounts;
  if (pSVar2 == (Settings_BoolSetting_o *)0x0) goto label_05b5263b;
  if ((pSVar2->fields)._value != false) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if (bVar6) goto label_05b523a5;
    }
    else {
      bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if (bVar6) {
label_05b523a5:
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          if (g_data_075472f7 == '\0') goto label_05b5258e;
label_05b523c2:
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (g_data_075472f7 != '\0') goto label_05b523c2;
label_05b5258e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          g_data_075472f7 = '\x01';
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        bVar6 = System_String__IsNullOrEmpty
                          (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                           _PhotonToken_k__BackingField,(MethodInfo *)0x0);
        if (!bVar6) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AuthenticationValues);
          Photon_Realtime_AuthenticationValues___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto label_05b5263b;
          (__this_00->fields).authType = 0;
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar7 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          bVar6 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
          if (bVar6) {
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
            goto label_05b52453;
label_05b525f9:
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            if (g_data_075472f7 == '\0') goto label_05b5260b;
label_05b52460:
            uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          }
          else {
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            pSVar7 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
            (__this_00->fields)._UserId_k__BackingField = pSVar7;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields)._UserId_k__BackingField);
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
            goto label_05b525f9;
label_05b52453:
            if (g_data_075472f7 != '\0') goto label_05b52460;
label_05b5260b:
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
            g_data_075472f7 = '\x01';
            uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          (*(__this_00->klass->vtable)._7_AddAuthParameter.methodPtr)
                    (__this_00,"token",
                     TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,
                     (__this_00->klass->vtable)._7_AddAuthParameter.method);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          Photon_Pun_PhotonNetwork__set_AuthValues(__this_00,(MethodInfo *)0x0);
        }
      }
    }
  }
  pSVar3 = (__this->fields).LanIP;
  if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
     (pSVar4 = (__this->fields).LanPort, pSVar4 == (Settings_IntSetting_o *)0x0)) {
label_05b5263b:
    ThrowNullReferenceException();
  }
  pSVar7 = (pSVar3->fields)._value;
  port = (pSVar4->fields)._value;
  appID = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar6 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar7,port,appID,(MethodInfo *)0x0);
  if (bVar6) {
    method_00 = extraout_RDX;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      method_00 = extraout_RDX_00;
    }
    pPVar5 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
    pSVar8 = Settings_MultiplayerSettings__GetCurrentLobby(__this,false,method_00);
    if (pPVar5 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_05b5263b;
    (pPVar5->fields).AppVersion = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion);
    (__this->fields).CurrentMultiplayerServerType = 0;
  }
  return;
}


// Settings.MultiplayerSettings$$ConnectOffline
// il2cpp: void Settings_MultiplayerSettings__ConnectOffline (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b52640

void Settings_MultiplayerSettings__ConnectOffline(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075472be = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,method);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(true,(MethodInfo *)0x0);
  (__this->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$GetCurrentLobby
// il2cpp: System_Net_NetworkCredential_o* Settings_MultiplayerSettings__GetCurrentLobby (Settings_MultiplayerSettings_o* __this, bool isPublic, const MethodInfo* method);
// 0x5b521e0

System_Net_NetworkCredential_o *
Settings_MultiplayerSettings__GetCurrentLobby
          (Settings_MultiplayerSettings_o *__this,bool isPublic,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Net_NetworkCredential_o *pSVar3;
  System_String_o *userName;
  
  if (Il2CppMethodInitialized_075472bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Public");
    Il2CppMethodInitialized_075472bf = '\x01';
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
label_05b522ce:
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._value == 0) {
    if (isPublic) {
      if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetVersion((MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
    userName = "Public";
  }
  else {
    pSVar2 = (__this->fields).CustomLobby;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05b522ce;
    userName = (pSVar2->fields)._value;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
  }
  System_Net_NetworkCredential___ctor_62a6c00(pSVar3,userName,userName,(MethodInfo *)0x0);
  return pSVar3;
}


// Settings.MultiplayerSettings$$StartRoom
// il2cpp: void Settings_MultiplayerSettings__StartRoom (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b526a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b52b20: jmp 0x5b52b71
// asm:   0x5b52bcc: jmp 0x5b52c1d
// asm:   0x5b52ea2: jmp 0x5b52ebe

void Settings_MultiplayerSettings__StartRoom(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  char cVar1;
  int32_t iVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_InGameMiscSettings_o *pSVar10;
  Settings_MultiplayerSettings_o *pSVar11;
  Settings_MultiplayerSettings___c__DisplayClass26_0_Fields *pSVar12;
  Settings_MultiplayerSettings___c__DisplayClass26_0_o *pSVar13;
  System_String_o *pSVar14;
  ExitGames_Client_Photon_Hashtable_o *__this_00;
  Il2CppObject *pIVar15;
  System_String_o *pSVar16;
  System_String_array *pSVar17;
  Photon_Realtime_RoomOptions_o *pPVar18;
  System_String_o *sessionID;
  System_Action_o *__this_01;
  Photon_Realtime_RoomOptions_o **targetAddress_00;
  undefined1 local_7a;
  undefined1 local_79;
  System_String_o *local_78;
  int32_t local_70;
  int32_t local_6c;
  System_String_o *local_68;
  System_String_o *local_60;
  Settings_MultiplayerSettings_o *local_58;
  Settings_MultiplayerSettings___c__DisplayClass26_0_o *local_50;
  Settings_MultiplayerSettings___c__DisplayClass26_0_Fields *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075472c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RoomOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_MultiplayerSettings_c__DisplayClass26_0_StartRoom_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"HashKey");
    Il2CppMethodInitialized_075472c0 = '\x01';
  }
  pSVar13 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings_c__DisplayClass26_0);
  System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar3 == (Settings_InGameSet_o *)0x0) ||
      (pSVar4 = (pSVar3->fields).General, pSVar4 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar5 = (pSVar4->fields).RoomName, pSVar5 == (Settings_StringSetting_o *)0x0)) goto label_05b52ff9;
  pSVar16 = (pSVar5->fields)._value;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  local_78 = Anticheat_ChatFilter__FilterBadWords(pSVar16,(MethodInfo *)0x0);
  pSVar4 = (pSVar3->fields).General;
  if ((((pSVar4 == (Settings_InGameGeneralSettings_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).MapName, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
      ((pSVar6 = (pSVar4->fields).GameMode, pSVar6 == (Settings_StringSetting_o *)0x0 ||
       ((pSVar7 = (pSVar4->fields).MaxPlayers, pSVar7 == (Settings_IntSetting_o *)0x0 ||
        (pSVar8 = (pSVar4->fields).Password, pSVar8 == (Settings_StringSetting_o *)0x0)))))) ||
     (pSVar16 = (pSVar8->fields)._value, local_58 = __this, pSVar16 == (System_String_o *)0x0))
  goto label_05b52ff9;
  local_40 = (pSVar5->fields)._value;
  local_38 = (pSVar6->fields)._value;
  iVar2 = (pSVar7->fields)._value;
  if ((pSVar16->fields)._stringLength < 1) {
    local_60 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    local_68 = local_60;
  }
  else {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_68 = Utility_Util__CreateSalt((MethodInfo *)0x0);
    local_60 = Utility_Util__CreatePBKDF2(pSVar16,local_68,(MethodInfo *)0x0);
  }
  local_6c = UnityEngine_Random__Range_690e2b0(0,100000,(MethodInfo *)0x0);
  pSVar14 = System_Int32__ToString(&local_6c,(MethodInfo *)0x0);
  if (pSVar13 == (Settings_MultiplayerSettings___c__DisplayClass26_0_o *)0x0) goto label_05b52ff9;
  local_48 = &pSVar13->fields;
  (pSVar13->fields).roomId = pSVar14;
  local_50 = pSVar13;
  Il2CppCodeGenWriteBarrier(&local_48->roomId);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
  ExitGames_Client_Photon_Hashtable___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
  }
  local_70 = iVar2;
  if (__this_00 == (ExitGames_Client_Photon_Hashtable_o *)0x0) goto label_05b52ff9;
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Name,(Il2CppObject *)local_78,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,(Il2CppObject *)local_40,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
             (Il2CppObject *)local_38,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  pSVar9 = (pSVar3->fields).Sandbox;
  if (pSVar9 == (Settings_BoolSetting_o *)0x0) goto label_05b52ff9;
  pSVar14 = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
  local_79 = (pSVar9->fields)._value;
  pIVar15 = il2cpp_vm_Object_Box(g_data_075566f0,&local_79);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar14,
             pIVar15,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add)
  ;
  pSVar5 = (pSVar3->fields).ExperienceName;
  if (pSVar5 == (Settings_StringSetting_o *)0x0) goto label_05b52ff9;
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Experience,
             (Il2CppObject *)(pSVar5->fields)._value,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Password,
             (Il2CppObject *)pSVar16,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt,
             (Il2CppObject *)local_68,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
             (Il2CppObject *)local_60,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  pSVar12 = local_48;
  pSVar11 = local_58;
  pSVar10 = (pSVar3->fields).Misc;
  if ((pSVar10 == (Settings_InGameMiscSettings_o *)0x0) ||
     (pSVar9 = (pSVar10->fields).AccountRequired, pSVar9 == (Settings_BoolSetting_o *)0x0)) goto label_05b52ff9;
  pSVar16 = TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired;
  local_7a = (pSVar9->fields)._value;
  pIVar15 = il2cpp_vm_Object_Box(g_data_075566f0,&local_7a);
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar16,
             pIVar15,(MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add)
  ;
  pSVar16 = System_String__Concat_52f0320(pSVar12->roomId,local_78,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075472c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075472c2 = '\x01';
    if (Il2CppMethodInitialized_075472b9 != '\0') goto label_05b52b17;
label_05b52b3e:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
    if ((pSVar11->fields).CurrentMultiplayerServerType != 2) goto label_05b52b71;
label_05b52b5a:
    pSVar7 = (pSVar11->fields).LobbyMode;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) goto label_05b52ff9;
    if ((pSVar7->fields)._value != 0) goto label_05b52b71;
    if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    }
    pSVar16 = ApplicationManagers_ApplicationVersion__GetHashKey(pSVar16,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_075472b9 == '\0') goto label_05b52b3e;
label_05b52b17:
    if ((pSVar11->fields).CurrentMultiplayerServerType == 2) goto label_05b52b5a;
label_05b52b71:
    pSVar16 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  System_Collections_Generic_Dictionary_object__object___Add
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (Il2CppObject *)"HashKey",(Il2CppObject *)pSVar16,
             (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
  pSVar16 = System_String__Concat_52f0320(pSVar12->roomId,local_78,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075472c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075472c2 = '\x01';
    if (Il2CppMethodInitialized_075472b9 != '\0') goto label_05b52bc3;
label_05b52bea:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
    if ((pSVar11->fields).CurrentMultiplayerServerType != 2) goto label_05b52c1d;
label_05b52c06:
    pSVar7 = (pSVar11->fields).LobbyMode;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) goto label_05b52ff9;
    if ((pSVar7->fields)._value != 0) goto label_05b52c1d;
    if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    }
    pSVar16 = ApplicationManagers_ApplicationVersion__GetHashKey(pSVar16,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_075472b9 == '\0') goto label_05b52bea;
label_05b52bc3:
    if ((pSVar11->fields).CurrentMultiplayerServerType == 2) goto label_05b52c06;
label_05b52c1d:
    pSVar16 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  targetAddress = &(local_50->fields).hash;
  (local_50->fields).hash = pSVar16;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pSVar17 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
  if (pSVar17 == (System_String_array *)0x0) {
label_05b52ff9:
    ThrowNullReferenceException();
  }
  if ((int)pSVar17->max_length != 0) {
    pSVar17->m_Items[0] = TypeInfo_GameManagers_RoomProperty->static_fields->Name;
    Il2CppCodeGenWriteBarrier(pSVar17->m_Items);
    if ((pSVar17->max_length & 0xfffffffe) != 0) {
      pSVar17->m_Items[1] = TypeInfo_GameManagers_RoomProperty->static_fields->Map;
      Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 1);
      if (2 < (uint)pSVar17->max_length) {
        pSVar17->m_Items[2] = TypeInfo_GameManagers_RoomProperty->static_fields->GameMode;
        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 2);
        if ((pSVar17->max_length & 0xfffffffc) != 0) {
          pSVar17->m_Items[3] = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
          Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 3);
          if (4 < (uint)pSVar17->max_length) {
            pSVar17->m_Items[4] = TypeInfo_GameManagers_RoomProperty->static_fields->Experience;
            Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 4);
            if (5 < (uint)pSVar17->max_length) {
              pSVar17->m_Items[5] = TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash;
              Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 5);
              if (6 < (uint)pSVar17->max_length) {
                pSVar17->m_Items[6] = TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt;
                Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 6);
                if ((pSVar17->max_length & 0xfffffff8) != 0) {
                  pSVar17->m_Items[7] = TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired;
                  Il2CppCodeGenWriteBarrier(pSVar17->m_Items + 7);
                  pPVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_RoomOptions);
                  Photon_Realtime_RoomOptions___ctor(pPVar18,(MethodInfo *)0x0);
                  if (pPVar18 != (Photon_Realtime_RoomOptions_o *)0x0) {
                    (pPVar18->fields).CustomRoomProperties = __this_00;
                    Il2CppCodeGenWriteBarrier(&(pPVar18->fields).CustomRoomProperties);
                    (pPVar18->fields).CustomRoomPropertiesForLobby = pSVar17;
                    Il2CppCodeGenWriteBarrier(&(pPVar18->fields).CustomRoomPropertiesForLobby);
                    (pPVar18->fields).isVisible = true;
                    (pPVar18->fields).isOpen = true;
                    (pPVar18->fields).MaxPlayers = local_70;
                    (pPVar18->fields).broadcastPropsChangeToAll = false;
                    pSVar16 = pSVar12->roomId;
                    pSVar14 = *targetAddress;
                    if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0)
                    {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
                    }
                    sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
                    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                    }
                    Photon_Pun_PhotonNetwork__CreateRoom
                              (pSVar16,pPVar18,(Photon_Realtime_TypedLobby_o *)0x0,(System_String_array *)0x0,
                               pSVar14,sessionID,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_07544cc2 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
                      Il2CppMethodInitialized_07544cc2 = '\x01';
                    }
                    pSVar13 = local_50;
                    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                      cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
                    }
                    else {
                      cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
                    }
                    if (cVar1 != '\0') {
                      return;
                    }
                    pPVar18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_RoomOptions);
                    Photon_Realtime_RoomOptions___ctor(pPVar18,(MethodInfo *)0x0);
                    targetAddress_00 = &(pSVar13->fields).vcRoomOptions;
                    (pSVar13->fields).vcRoomOptions = pPVar18;
                    Il2CppCodeGenWriteBarrier(targetAddress_00);
                    pPVar18 = (pSVar13->fields).vcRoomOptions;
                    if (pPVar18 != (Photon_Realtime_RoomOptions_o *)0x0) {
                      (pPVar18->fields).CustomRoomProperties = __this_00;
                      Il2CppCodeGenWriteBarrier(&(pPVar18->fields).CustomRoomProperties);
                      pSVar11 = local_58;
                      pPVar18 = *targetAddress_00;
                      if (pPVar18 != (Photon_Realtime_RoomOptions_o *)0x0) {
                        (pPVar18->fields).CustomRoomPropertiesForLobby = pSVar17;
                        Il2CppCodeGenWriteBarrier(&(pPVar18->fields).CustomRoomPropertiesForLobby);
                        pPVar18 = *targetAddress_00;
                        if (pPVar18 != (Photon_Realtime_RoomOptions_o *)0x0) {
                          (pPVar18->fields).isVisible = false;
                          (pPVar18->fields).isOpen = true;
                          (pPVar18->fields).MaxPlayers = 0xff;
                          (pPVar18->fields).broadcastPropsChangeToAll = false;
                          (pPVar18->fields).EmptyRoomTtl = 10;
                          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                          System_Action___ctor
                                    (__this_01,(Il2CppObject *)pSVar13,
                                     (intptr_t)
                                     MethodInfo_Settings_MultiplayerSettings_c__DisplayClass26_0_StartRoom_b__0
                                     ,(MethodInfo *)0x0);
                          (pSVar11->fields)._pendingVoiceRoom = __this_01;
                          Il2CppCodeGenWriteBarrier(&(pSVar11->fields)._pendingVoiceRoom);
                          return;
                        }
                      }
                    }
                  }
                  goto label_05b52ff9;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Settings.MultiplayerSettings$$JoinRoom
// il2cpp: void Settings_MultiplayerSettings__JoinRoom (Settings_MultiplayerSettings_o* __this, System_String_o* roomId, System_String_o* roomName, System_String_o* password, const MethodInfo* method);
// 0x5b530e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b531b7: jmp 0x5b53208

void Settings_MultiplayerSettings__JoinRoom
               (Settings_MultiplayerSettings_o *__this,System_String_o *roomId,System_String_o *roomName,
               System_String_o *password,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  Settings_IntSetting_o *pSVar4;
  System_String_o *password_00;
  System_String_o *hash;
  Settings_MultiplayerSettings___c__DisplayClass27_0_o *__this_00;
  System_String_o *pSVar5;
  System_String_o *sessionID;
  System_Action_o *__this_01;
  
  if (Il2CppMethodInitialized_075472c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_MultiplayerSettings_c__DisplayClass27_0_JoinRoom_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings_c__DisplayClass27_0);
    Il2CppMethodInitialized_075472c1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings_c__DisplayClass27_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Settings_MultiplayerSettings___c__DisplayClass27_0_o *)0x0) goto label_05b5337a;
  (__this_00->fields).roomId = roomId;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).roomId);
  (__this_00->fields).password = password;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).password);
  pSVar5 = System_String__Concat_52f0320((__this_00->fields).roomId,roomName,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075472c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075472c3 = '\x01';
    if (Il2CppMethodInitialized_075472b9 != '\0') goto label_05b531ae;
label_05b531d5:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
    iVar2 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    if (Il2CppMethodInitialized_075472b9 == '\0') goto label_05b531d5;
label_05b531ae:
    iVar2 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar2 == 2) {
    pSVar4 = (__this->fields).LobbyMode;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) {
label_05b5337a:
      ThrowNullReferenceException();
    }
    if ((pSVar4->fields)._value == 0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar5 = ApplicationManagers_ApplicationVersion__GetHashCode(pSVar5,(MethodInfo *)0x0);
      goto label_05b53220;
    }
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_05b53220:
  (__this_00->fields).hash = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).hash);
  pSVar5 = (__this_00->fields).roomId;
  password_00 = (__this_00->fields).password;
  hash = (__this_00->fields).hash;
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            (pSVar5,(System_String_array *)0x0,password_00,hash,sessionID,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar3 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30);
  }
  if (cVar1 == '\0') {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (__this_01,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass27_0_JoinRoom_b__0,
               (MethodInfo *)0x0);
    (__this->fields)._pendingVoiceRoom = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingVoiceRoom);
    return;
  }
  return;
}


// Settings.MultiplayerSettings$$OnRoomJoined
// il2cpp: void Settings_MultiplayerSettings__OnRoomJoined (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b53450

void Settings_MultiplayerSettings__OnRoomJoined(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields)._pendingVoiceRoom;
  (__this->fields)._pendingVoiceRoom = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingVoiceRoom);
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  return;
}


// Settings.MultiplayerSettings$$OnRoomEntryFailed
// il2cpp: void Settings_MultiplayerSettings__OnRoomEntryFailed (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b53490

void Settings_MultiplayerSettings__OnRoomEntryFailed
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  (__this->fields)._pendingVoiceRoom = (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingVoiceRoom);
  return;
}


// Settings.MultiplayerSettings$$GetHashKey
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashKey (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x5b53020
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b53033: cmp byte ptr [rip + 0x19f427f], 0
// asm:   0x5b5303a: je 0x5b53063
// asm:   0x5b53045: jmp 0x5b5308e

System_String_o *
Settings_MultiplayerSettings__GetHashKey
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075472c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075472c2 = '\x01';
  }
  if (Il2CppMethodInitialized_075472b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar1 == 2) {
    pSVar2 = (__this->fields).LobbyMode;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._value == 0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetHashKey(str,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Settings.MultiplayerSettings$$GetHashCode
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashCode (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x5b53390
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b533a3: cmp byte ptr [rip + 0x19f3f0f], 0
// asm:   0x5b533aa: je 0x5b533d3
// asm:   0x5b533b5: jmp 0x5b533fe

System_String_o *
Settings_MultiplayerSettings__GetHashCode
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075472c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_075472c3 = '\x01';
  }
  if (Il2CppMethodInitialized_075472b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472b9 = '\x01';
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  else {
    iVar1 = (__this->fields).CurrentMultiplayerServerType;
  }
  if (iVar1 == 2) {
    pSVar2 = (__this->fields).LobbyMode;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._value == 0) {
      if ((((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetHashCode(str,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Settings.MultiplayerSettings$$.ctor
// il2cpp: void Settings_MultiplayerSettings___ctor (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x5b534b0

void Settings_MultiplayerSettings___ctor(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppType *handle;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *__this_00;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar5;
  
  if (Il2CppMethodInitialized_075472c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_MultiplayerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"sa");
    il2cpp_codegen_initialize_runtime_metadata(&"us");
    il2cpp_codegen_initialize_runtime_metadata(&"eu");
    il2cpp_codegen_initialize_runtime_metadata(&"sa.aottg2.com");
    il2cpp_codegen_initialize_runtime_metadata(&"us.aottg2.com");
    il2cpp_codegen_initialize_runtime_metadata(&"eu.aottg2.com");
    il2cpp_codegen_initialize_runtime_metadata(&"asia");
    il2cpp_codegen_initialize_runtime_metadata(&"asia.aottg2.com");
    il2cpp_codegen_initialize_runtime_metadata(&"cn.aottg2.com");
    Il2CppMethodInitialized_075472c4 = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = 0;
  (pSVar3->fields).MaxValue = 1;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).LobbyMode = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LobbyMode);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).AppIdMode = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AppIdMode);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CustomLobby = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomLobby);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CustomAppId = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAppId);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).LanIP = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanIP);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0x13bf,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).LanPort = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanPort);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).LanPassword = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanPassword);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).LanSupportsAccounts = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanSupportsAccounts);
  handle = TypeRef_Settings_MultiplayerRegion;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 != (System_Array_o *)0x0) {
    iVar2 = System_Array__get_Length(__this_01,(MethodInfo *)0x0);
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
    if (Il2CppMethodInitialized_075472e8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
      Il2CppMethodInitialized_075472e8 = '\x01';
    }
    (pSVar3->fields).MinValue = -0x80000000;
    (pSVar3->fields).MaxValue = 0x7fffffff;
    Settings_TypedSetting_int____ctor
              ((Settings_TypedSetting_int__o *)pSVar3,
               (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
    (pSVar3->fields).MinValue = 0;
    (pSVar3->fields).MaxValue = iVar2;
    iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                      (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
    (pSVar3->fields).DefaultValue = iVar2;
    (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
    (__this->fields).QuickPlayRegion = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).QuickPlayRegion);
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string
                       );
    System_Collections_Generic_Dictionary_Int32Enum__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
               (MethodInfo_4A543B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
    if (pSVar5 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,0,
                 (Il2CppObject *)"eu",
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,1,
                 (Il2CppObject *)"us",
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,2,
                 (Il2CppObject *)"sa",
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,3,
                 (Il2CppObject *)"asia",
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,4,
                 (Il2CppObject *)"asia",
                 (MethodInfo_4A54FE0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      (__this->fields).CloudAddresses = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).CloudAddresses);
      pSVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,
                 (MethodInfo_4A543B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
      if (pSVar5 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,1,
                   (Il2CppObject *)"us.aottg2.com",
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,0,
                   (Il2CppObject *)"eu.aottg2.com",
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,2,
                   (Il2CppObject *)"sa.aottg2.com",
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,3,
                   (Il2CppObject *)"asia.aottg2.com",
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar5,4,
                   (Il2CppObject *)"cn.aottg2.com",
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
        (__this->fields).PublicAddresses = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).PublicAddresses);
        (__this->fields).DefaultPort = 0x13bf;
        Settings_SaveableSettingsContainer___ctor
                  ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$.cctor
// il2cpp: void Settings_MultiplayerSettings___cctor (const MethodInfo* method);
// 0x5b53b30

void Settings_MultiplayerSettings___cctor(MethodInfo *method)

{
  Settings_MultiplayerSettings_StaticFields *pSVar1;
  
  if (Il2CppMethodInitialized_075472c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&"28521206-90d0-41b1-93b0-f35460fef0b6");
    il2cpp_codegen_initialize_runtime_metadata(&"vc");
    Il2CppMethodInitialized_075472c5 = '\x01';
  }
  TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix = "vc";
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix);
  pSVar1 = TypeInfo_Settings_MultiplayerSettings->static_fields;
  pSVar1->PublicAppId = "28521206-90d0-41b1-93b0-f35460fef0b6";
  Il2CppCodeGenWriteBarrier(&pSVar1->PublicAppId);
  return;
}


