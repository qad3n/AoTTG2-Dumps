// Type: Settings.MultiplayerSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/MultiplayerSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/MultiplayerSettings.cs
// --------------------------------

// Settings.MultiplayerSettings.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass20_0___ctor (Settings_MultiplayerSettings___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_MultiplayerSettings___c__DisplayClass20_0___ctor(Settings_MultiplayerSettings___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings.<>c__DisplayClass20_0$$<ConnectServer>b__0
// il2cpp: void Settings_MultiplayerSettings___c__DisplayClass20_0___ConnectServer_b__0 (Settings_MultiplayerSettings___c__DisplayClass20_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x181f2a250

void Settings_MultiplayerSettings___c__DisplayClass20_0___ConnectServer_b__0
               (Settings_MultiplayerSettings___c__DisplayClass20_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
    Settings_MultiplayerSettings__ConnectServerInternal(__this_00,(__this->fields).region,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$get_FileName
// il2cpp: System_String_o* Settings_MultiplayerSettings__get_FileName (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f23c30

System_String_o *
Settings_MultiplayerSettings__get_FileName(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434546e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Multiplayer.json");
    Il2CppMethodInitialized_18434546e = '\x01';
  }
  return "Multiplayer.json";
}


// Settings.MultiplayerSettings$$IsConnectedToPublic
// il2cpp: bool Settings_MultiplayerSettings__IsConnectedToPublic (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f229c0

bool Settings_MultiplayerSettings__IsConnectedToPublic
               (Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434546f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434546f = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType != 2) {
    return false;
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (pSVar1->fields)._value == 0;
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$Disconnect
// il2cpp: void Settings_MultiplayerSettings__Disconnect (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f22660

void Settings_MultiplayerSettings__Disconnect(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PunVoiceClient_o *pPVar1;
  Photon_Voice_LoadBalancingTransport_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345470 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184345470 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__Disconnect((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pPVar1 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
  if ((pPVar1 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) &&
     (__this_00 = (pPVar1->fields).client, __this_00 != (Photon_Voice_LoadBalancingTransport_o *)0x0)) {
    bVar2 = Photon_Realtime_LoadBalancingClient__get_IsConnected
                      ((Photon_Realtime_LoadBalancingClient_o *)__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    pPVar1 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar1 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
      Photon_Voice_VoiceFollowClient__Disconnect((Photon_Voice_VoiceFollowClient_o *)pPVar1,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$ConnectServer
// il2cpp: void Settings_MultiplayerSettings__ConnectServer (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x181f22530

void Settings_MultiplayerSettings__ConnectServer
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  bool bVar1;
  Settings_MultiplayerSettings___c__DisplayClass20_0_o *object;
  System_Action_T1__T2__o *__this_00;
  
  if (Il2CppMethodInitialized_184345471 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_MultiplayerSettings_c__DisplayClass20_0_ConnectServer_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings_c__DisplayClass20_0);
    Il2CppMethodInitialized_184345471 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings_c__DisplayClass20_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Settings_MultiplayerSettings___c__DisplayClass20_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).region = region;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (!bVar1) {
    Settings_MultiplayerSettings__ConnectServerInternal(__this,(object->fields).region,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Action_T1__T2__o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
  System_Action_bool__object____ctor
            (__this_00,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Settings_MultiplayerSettings_c__DisplayClass20_0_ConnectServer_b__0,
             (MethodInfo_1468160 *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__Refresh
            ((System_Action_bool__string__o *)__this_00,true,(MethodInfo *)0x0);
  return;
}


// Settings.MultiplayerSettings$$ConnectServerInternal
// il2cpp: void Settings_MultiplayerSettings__ConnectServerInternal (Settings_MultiplayerSettings_o* __this, int32_t region, const MethodInfo* method);
// 0x181f22000

void Settings_MultiplayerSettings__ConnectServerInternal
               (Settings_MultiplayerSettings_o *__this,int32_t region,MethodInfo *method)

{
  int32_t port;
  Settings_IntSetting_o *pSVar1;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Photon_Realtime_LoadBalancingClient_o *pPVar4;
  Photon_Voice_LoadBalancingTransport_o *pPVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_Net_NetworkCredential_o *pSVar8;
  Photon_Realtime_AppSettings_o *pPVar9;
  Photon_Realtime_AuthenticationValues_o *__this_00;
  System_String_o *pSVar10;
  Photon_Voice_PUN_PunVoiceClient_o *pPVar11;
  
  if (Il2CppMethodInitialized_184345472 == '\0') {
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
    Il2CppMethodInitialized_184345472 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__set_AuthValues((Photon_Realtime_AuthenticationValues_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).AppIdMode;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) goto label_181f2251b;
  if ((pSVar1->fields)._value == 0) {
    pSVar2 = (__this->fields).PublicAddresses;
    if (pSVar2 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0)
    goto label_181f2251b;
    pSVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,region,
                        (MethodInfo_1454ED0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
    (__this->fields).CurrentMultiplayerServerType = 2;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843454e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843454e8 = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar6 = System_String__IsNullOrEmpty
                        (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                         _PhotonToken_k__BackingField,(MethodInfo *)0x0);
      if (!bVar6) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AuthenticationValues);
        Photon_Realtime_AuthenticationValues___ctor
                  ((Photon_Chat_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto label_181f2251b;
        (__this_00->fields).authType = '\0';
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar10 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
        bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
        if (!bVar6) {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar10 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          (__this_00->fields)._UserId_k__BackingField = pSVar10;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._UserId_k__BackingField,pSVar10);
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar10 = (System_String_o *)il2cpp_runtime_helper_181f0cb70(0);
        (*(__this_00->klass->vtable)._7_AddAuthParameter.methodPtr)
                  (__this_00,"token",pSVar10,
                   (__this_00->klass->vtable)._7_AddAuthParameter.method);
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        Photon_Pun_PhotonNetwork__set_AuthValues(__this_00,(MethodInfo *)0x0);
      }
    }
    port = (__this->fields).DefaultPort;
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar7,port,pSVar10,(MethodInfo *)0x0);
    pPVar4 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
    pSVar8 = Settings_MultiplayerSettings__GetCurrentLobby(__this,true,(MethodInfo *)0x0);
    if (pPVar4 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_181f2251b;
    (pPVar4->fields).AppVersion = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pPVar4->fields).AppVersion,pSVar8);
    pPVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
    Photon_Realtime_AppSettings___ctor(pPVar9,(MethodInfo *)0x0);
    if (pPVar9 == (Photon_Realtime_AppSettings_o *)0x0) goto label_181f2251b;
    (pPVar9->fields).Server = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pPVar9->fields).Server,pSVar7);
    (pPVar9->fields).Port = (__this->fields).DefaultPort;
    (pPVar9->fields).UseNameServer = false;
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    pPVar11 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar11 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_181f2251b;
    (*(pPVar11->klass->vtable)._7_ConnectUsingSettings.methodPtr)
              (pPVar11,pPVar9,(pPVar11->klass->vtable)._7_ConnectUsingSettings.method);
    pPVar11 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar11 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_181f2251b;
    bVar6 = true;
  }
  else {
    pSVar2 = (__this->fields).CloudAddresses;
    if (pSVar2 == (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0)
    goto label_181f2251b;
    pSVar7 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,region,
                        (MethodInfo_1454ED0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_get_Item);
    (__this->fields).CurrentMultiplayerServerType = 1;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pSVar3 = (__this->fields).CustomAppId;
    if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
       (pPVar4 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient,
       pPVar4 == (Photon_Realtime_LoadBalancingClient_o *)0x0)) goto label_181f2251b;
    pSVar10 = (pSVar3->fields)._value;
    (pPVar4->fields)._AppId_k__BackingField = pSVar10;
    Il2CppCodeGenWriteBarrier(&(pPVar4->fields)._AppId_k__BackingField,pSVar10);
    pPVar4 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
    pSVar8 = Settings_MultiplayerSettings__GetCurrentLobby(__this,false,(MethodInfo *)0x0);
    if (pPVar4 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_181f2251b;
    (pPVar4->fields).AppVersion = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pPVar4->fields).AppVersion,pSVar8);
    Photon_Pun_PhotonNetwork__ConnectToRegion(pSVar7,(MethodInfo *)0x0);
    pPVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AppSettings);
    Photon_Realtime_AppSettings___ctor(pPVar9,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).CustomAppId;
    if ((pSVar3 == (Settings_StringSetting_o *)0x0) || (pPVar9 == (Photon_Realtime_AppSettings_o *)0x0))
    goto label_181f2251b;
    pSVar10 = (pSVar3->fields)._value;
    (pPVar9->fields).AppIdVoice = pSVar10;
    Il2CppCodeGenWriteBarrier(&(pPVar9->fields).AppIdVoice,pSVar10);
    (pPVar9->fields).FixedRegion = pSVar7;
    Il2CppCodeGenWriteBarrier(&(pPVar9->fields).FixedRegion,pSVar7);
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    pPVar11 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar11 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_181f2251b;
    (*(pPVar11->klass->vtable)._7_ConnectUsingSettings.methodPtr)
              (pPVar11,pPVar9,(pPVar11->klass->vtable)._7_ConnectUsingSettings.method);
    pPVar11 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if (pPVar11 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) goto label_181f2251b;
    bVar6 = false;
  }
  pPVar5 = (pPVar11->fields).client;
  pSVar8 = Settings_MultiplayerSettings__GetCurrentLobby(__this,bVar6,(MethodInfo *)0x0);
  if (pPVar5 != (Photon_Voice_LoadBalancingTransport_o *)0x0) {
    (pPVar5->fields).AppVersion = pSVar8;
    Il2CppCodeGenWriteBarrier(&(pPVar5->fields).AppVersion,pSVar8);
    return;
  }
label_181f2251b:
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$ConnectLAN
// il2cpp: void Settings_MultiplayerSettings__ConnectLAN (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f21cd0

void Settings_MultiplayerSettings__ConnectLAN(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  int32_t port;
  Settings_BoolSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *appID;
  Photon_Realtime_LoadBalancingClient_o *pPVar4;
  bool bVar5;
  Photon_Realtime_AuthenticationValues_o *__this_00;
  System_String_o *pSVar6;
  System_Net_NetworkCredential_o *value;
  
  if (Il2CppMethodInitialized_184345473 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_AuthenticationValues);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    Il2CppMethodInitialized_184345473 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).LanSupportsAccounts;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    if ((pSVar1->fields)._value != false) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar5 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (Il2CppMethodInitialized_1843454e8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_1843454e8 = '\x01';
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        bVar5 = System_String__IsNullOrEmpty
                          (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                           _PhotonToken_k__BackingField,(MethodInfo *)0x0);
        if (!bVar5) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Photon_Realtime_AuthenticationValues);
          Photon_Realtime_AuthenticationValues___ctor
                    ((Photon_Chat_AuthenticationValues_o *)__this_00,(MethodInfo *)0x0);
          if (__this_00 == (Photon_Realtime_AuthenticationValues_o *)0x0) goto label_181f21f92;
          (__this_00->fields).authType = '\0';
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar6 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
          bVar5 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
          if (!bVar5) {
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            pSVar6 = ApplicationManagers_AccountManager__get_PhotonUserId((MethodInfo *)0x0);
            (__this_00->fields)._UserId_k__BackingField = pSVar6;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields)._UserId_k__BackingField,pSVar6);
          }
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar6 = (System_String_o *)il2cpp_runtime_helper_181f0cb70(0);
          (*(__this_00->klass->vtable)._7_AddAuthParameter.methodPtr)
                    (__this_00,"token",pSVar6,
                     (__this_00->klass->vtable)._7_AddAuthParameter.method);
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          Photon_Pun_PhotonNetwork__set_AuthValues(__this_00,(MethodInfo *)0x0);
        }
      }
    }
    pSVar2 = (__this->fields).LanIP;
    if ((pSVar2 != (Settings_StringSetting_o *)0x0) &&
       (pSVar3 = (__this->fields).LanPort, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar6 = (pSVar2->fields)._value;
      port = (pSVar3->fields)._value;
      appID = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      bVar5 = Photon_Pun_PhotonNetwork__ConnectToMaster(pSVar6,port,appID,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar4 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->NetworkingClient;
        value = Settings_MultiplayerSettings__GetCurrentLobby(__this,false,(MethodInfo *)0x0);
        if (pPVar4 == (Photon_Realtime_LoadBalancingClient_o *)0x0) goto label_181f21f92;
        (pPVar4->fields).AppVersion = value;
        Il2CppCodeGenWriteBarrier(&(pPVar4->fields).AppVersion,value);
        (__this->fields).CurrentMultiplayerServerType = 0;
      }
      return;
    }
  }
label_181f21f92:
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$ConnectOffline
// il2cpp: void Settings_MultiplayerSettings__ConnectOffline (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f21fa0

void Settings_MultiplayerSettings__ConnectOffline(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345474 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184345474 = '\x01';
  }
  Settings_MultiplayerSettings__Disconnect(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__set_OfflineMode(true,(MethodInfo *)0x0);
  (__this->fields).CurrentMultiplayerServerType = 1;
  return;
}


// Settings.MultiplayerSettings$$GetCurrentLobby
// il2cpp: System_Net_NetworkCredential_o* Settings_MultiplayerSettings__GetCurrentLobby (Settings_MultiplayerSettings_o* __this, bool isPublic, const MethodInfo* method);
// 0x181f22730

System_Net_NetworkCredential_o *
Settings_MultiplayerSettings__GetCurrentLobby
          (Settings_MultiplayerSettings_o *__this,bool isPublic,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *userName;
  System_String_o *password;
  System_Net_NetworkCredential_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345475 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Net_NetworkCredential);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Public");
    Il2CppMethodInitialized_184345475 = '\x01';
  }
  pSVar1 = (__this->fields).LobbyMode;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar1->fields)._value == 0) {
      if (!isPublic) {
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
        System_Net_NetworkCredential___ctor_27d0800
                  (pSVar3,"Public","Public",(MethodInfo *)0x0);
        return pSVar3;
      }
      if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar3 = ApplicationManagers_ApplicationVersion__GetVersion((MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar2 = (__this->fields).CustomLobby;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      userName = (pSVar2->fields)._value;
      password = (((__this->fields).CustomLobby)->fields)._value;
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Net_NetworkCredential);
      System_Net_NetworkCredential___ctor_27d0800(pSVar3,userName,password,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$StartRoom
// il2cpp: void Settings_MultiplayerSettings__StartRoom (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f22c20

void Settings_MultiplayerSettings__StartRoom(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Settings_InGameMiscSettings_o *pSVar8;
  Photon_Voice_PUN_PunVoiceClient_o *__this_00;
  System_String_o *salt;
  System_String_o *value;
  System_String_o *str0;
  ExitGames_Client_Photon_Hashtable_o *__this_01;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_array *value_00;
  Photon_Realtime_RoomOptions_o *pPVar12;
  System_String_o *pSVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int32_t local_48;
  int32_t local_44;
  System_String_o *local_40;
  
  if (Il2CppMethodInitialized_184345476 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Realtime_RoomOptions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RoomProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"HashKey");
    Il2CppMethodInitialized_184345476 = '\x01';
  }
  local_48 = 0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).RoomName, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    pSVar11 = (pSVar3->fields)._value;
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    local_40 = Anticheat_ChatFilter__FilterBadWords(pSVar11,(MethodInfo *)0x0);
    pSVar2 = (pSVar1->fields).General;
    if ((((pSVar2 != (Settings_InGameGeneralSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).MapName, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
        ((pSVar4 = (pSVar2->fields).GameMode, pSVar4 != (Settings_StringSetting_o *)0x0 &&
         ((pSVar5 = (pSVar2->fields).MaxPlayers, pSVar5 != (Settings_IntSetting_o *)0x0 &&
          (pSVar6 = (pSVar2->fields).Password, pSVar6 != (Settings_StringSetting_o *)0x0)))))) &&
       (pSVar11 = (pSVar6->fields)._value, pSVar11 != (System_String_o *)0x0)) {
      local_44 = (pSVar5->fields)._value;
      pSVar10 = (pSVar3->fields)._value;
      pSVar13 = (pSVar4->fields)._value;
      if ((pSVar11->fields)._stringLength < 1) {
        salt = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        value = salt;
      }
      else {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        salt = Utility_Util__CreateSalt((MethodInfo *)0x0);
        value = Utility_Util__CreatePBKDF2(pSVar11,salt,(MethodInfo *)0x0);
      }
      local_48 = UnityEngine_Random__RandomRangeInt(0,100000,(MethodInfo *)0x0);
      str0 = System_Int32__ToString(&local_48,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
      ExitGames_Client_Photon_Hashtable___ctor(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_RoomProperty->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_RoomProperty);
      }
      if (__this_01 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                   (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Name,
                   (Il2CppObject *)local_40,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                   (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Map,
                   (Il2CppObject *)pSVar10,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                   (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->GameMode,
                   (Il2CppObject *)pSVar13,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
        pSVar7 = (pSVar1->fields).Sandbox;
        if (pSVar7 != (Settings_BoolSetting_o *)0x0) {
          local_res18[0] = (pSVar7->fields)._value;
          pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
          pIVar9 = il2cpp_value_box(g_data_184354de8,local_res18);
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                     (Il2CppObject *)pSVar10,pIVar9,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_object_object_Add)
          ;
          pSVar3 = (pSVar1->fields).ExperienceName;
          if (pSVar3 != (Settings_StringSetting_o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Experience,
                       (Il2CppObject *)(pSVar3->fields)._value,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->Password,
                       (Il2CppObject *)pSVar11,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt,
                       (Il2CppObject *)salt,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                       (Il2CppObject *)TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash,
                       (Il2CppObject *)value,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
            pSVar8 = (pSVar1->fields).Misc;
            if ((pSVar8 != (Settings_InGameMiscSettings_o *)0x0) &&
               (pSVar7 = (pSVar8->fields).AccountRequired, pSVar7 != (Settings_BoolSetting_o *)0x0)) {
              local_res20[0] = (pSVar7->fields)._value;
              pSVar11 = TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired;
              pIVar9 = il2cpp_value_box(g_data_184354de8,local_res20);
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)pSVar11,pIVar9,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
              pSVar11 = local_40;
              pSVar10 = System_String__Concat_1969e50(str0,local_40,(MethodInfo *)0x0);
              pSVar10 = Settings_MultiplayerSettings__GetHashKey(__this,pSVar10,(MethodInfo *)0x0);
              System_Collections_Generic_Dictionary_object__object___Add
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)"HashKey",(Il2CppObject *)pSVar10,
                         (MethodInfo_146B4B0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_object_object_Add);
              pSVar11 = System_String__Concat_1969e50(str0,pSVar11,(MethodInfo *)0x0);
              pSVar11 = Settings_MultiplayerSettings__GetHashKey(__this,pSVar11,(MethodInfo *)0x0);
              value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
              if (value_00 != (System_String_array *)0x0) {
                if ((int)value_00->max_length != 0) {
                  pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Name;
                  value_00->m_Items[0] = pSVar10;
                  Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar10);
                  if (1 < (uint)value_00->max_length) {
                    pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Map;
                    value_00->m_Items[1] = pSVar10;
                    Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar10);
                    if (2 < (uint)value_00->max_length) {
                      pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->GameMode;
                      value_00->m_Items[2] = pSVar10;
                      Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar10);
                      if (3 < (uint)value_00->max_length) {
                        pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Sandbox;
                        value_00->m_Items[3] = pSVar10;
                        Il2CppCodeGenWriteBarrier(value_00->m_Items + 3,pSVar10);
                        if (4 < (uint)value_00->max_length) {
                          pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->Experience;
                          value_00->m_Items[4] = pSVar10;
                          Il2CppCodeGenWriteBarrier(value_00->m_Items + 4,pSVar10);
                          if (5 < (uint)value_00->max_length) {
                            pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->PasswordHash;
                            value_00->m_Items[5] = pSVar10;
                            Il2CppCodeGenWriteBarrier(value_00->m_Items + 5,pSVar10);
                            if (6 < (uint)value_00->max_length) {
                              pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->PasswordSalt;
                              value_00->m_Items[6] = pSVar10;
                              Il2CppCodeGenWriteBarrier(value_00->m_Items + 6,pSVar10);
                              if (7 < (uint)value_00->max_length) {
                                pSVar10 = TypeInfo_GameManagers_RoomProperty->static_fields->AccountRequired;
                                value_00->m_Items[7] = pSVar10;
                                Il2CppCodeGenWriteBarrier(value_00->m_Items + 7,pSVar10);
                                pPVar12 = il2cpp_codegen_object_new
                                                    ((Il2CppClass *)TypeInfo_Photon_Realtime_RoomOptions);
                                Photon_Realtime_RoomOptions___ctor(pPVar12,(MethodInfo *)0x0);
                                if (pPVar12 != (Photon_Realtime_RoomOptions_o *)0x0) {
                                  (pPVar12->fields).CustomRoomProperties = __this_01;
                                  Il2CppCodeGenWriteBarrier(&(pPVar12->fields).CustomRoomProperties,__this_01)
                                  ;
                                  (pPVar12->fields).CustomRoomPropertiesForLobby = value_00;
                                  Il2CppCodeGenWriteBarrier
                                            (&(pPVar12->fields).CustomRoomPropertiesForLobby,value_00);
                                  (pPVar12->fields).MaxPlayers = local_44;
                                  (pPVar12->fields).isVisible = true;
                                  (pPVar12->fields).isOpen = true;
                                  (pPVar12->fields).broadcastPropsChangeToAll = false;
                                  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).
                                      cctor_finished_or_no_cctor == 0) {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion)
                                    ;
                                  }
                                  pSVar10 = ApplicationManagers_ApplicationVersion__GetSessionID
                                                      ((MethodInfo *)0x0);
                                  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0)
                                  {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                                  }
                                  Photon_Pun_PhotonNetwork__CreateRoom
                                            (str0,pPVar12,(Photon_Realtime_TypedLobby_o *)0x0,
                                             (System_String_array *)0x0,pSVar11,pSVar10,(MethodInfo *)0x0);
                                  if (Il2CppMethodInitialized_184344524 == '\0') {
                                    il2cpp_codegen_initialize_runtime_metadata
                                              (&TypeInfo_Photon_Pun_PhotonNetwork);
                                    Il2CppMethodInitialized_184344524 = '\x01';
                                  }
                                  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0)
                                  {
                                    il2cpp_codegen_runtime_class_init
                                              ((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
                                  }
                                  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode != false)
                                  {
                                    return;
                                  }
                                  pPVar12 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)TypeInfo_Photon_Realtime_RoomOptions);
                                  Photon_Realtime_RoomOptions___ctor(pPVar12,(MethodInfo *)0x0);
                                  if (pPVar12 != (Photon_Realtime_RoomOptions_o *)0x0) {
                                    (pPVar12->fields).CustomRoomProperties = __this_01;
                                    Il2CppCodeGenWriteBarrier
                                              (&(pPVar12->fields).CustomRoomProperties,__this_01);
                                    (pPVar12->fields).CustomRoomPropertiesForLobby = value_00;
                                    Il2CppCodeGenWriteBarrier
                                              (&(pPVar12->fields).CustomRoomPropertiesForLobby,value_00);
                                    (pPVar12->fields).isVisible = false;
                                    (pPVar12->fields).isOpen = true;
                                    (pPVar12->fields).MaxPlayers = 0xff;
                                    (pPVar12->fields).broadcastPropsChangeToAll = false;
                                    (pPVar12->fields).EmptyRoomTtl = 10;
                                    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).
                                        cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager)
                                      ;
                                    }
                                    __this_00 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->
                                                Client;
                                    if ((TypeInfo_Settings_MultiplayerSettings->_2).cctor_finished_or_no_cctor
                                        == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
                                    }
                                    pSVar10 = System_String__Concat_1969e50
                                                        (str0,TypeInfo_Settings_MultiplayerSettings->
                                                              static_fields->VoiceRoomSuffix,(MethodInfo *)0x0
                                                        );
                                    if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).
                                        cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)
                                                 TypeInfo_ApplicationManagers_ApplicationVersion);
                                    }
                                    pSVar13 = ApplicationManagers_ApplicationVersion__GetSessionID
                                                        ((MethodInfo *)0x0);
                                    if (__this_00 != (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
                                      Photon_Voice_VoiceFollowClient__CreateRoom
                                                ((Photon_Voice_VoiceFollowClient_o *)__this_00,pSVar10,pPVar12
                                                 ,(Photon_Realtime_TypedLobby_o *)0x0,
                                                 (System_String_array *)0x0,pSVar11,pSVar13,(MethodInfo *)0x0)
                                      ;
                                      return;
                                    }
                                  }
                                  goto label_181f23441;
                                }
                                goto label_181f2344d;
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
            }
          }
        }
      }
label_181f2344d:
      ThrowNullReferenceException();
    }
  }
label_181f23441:
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$JoinRoom
// il2cpp: void Settings_MultiplayerSettings__JoinRoom (Settings_MultiplayerSettings_o* __this, System_String_o* roomId, System_String_o* roomName, System_String_o* password, const MethodInfo* method);
// 0x181f22a20

void Settings_MultiplayerSettings__JoinRoom
               (Settings_MultiplayerSettings_o *__this,System_String_o *roomId,System_String_o *roomName,
               System_String_o *password,MethodInfo *method)

{
  Photon_Voice_PUN_PunVoiceClient_o *__this_00;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *sessionID;
  
  if (Il2CppMethodInitialized_184345477 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184345477 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50(roomId,roomName,(MethodInfo *)0x0);
  pSVar1 = Settings_MultiplayerSettings__GetHashCode(__this,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
  }
  pSVar2 = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__JoinRoom
            (roomId,(System_String_array *)0x0,password,pSVar1,pSVar2,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    __this_00 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->Client;
    if ((TypeInfo_Settings_MultiplayerSettings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
    }
    pSVar1 = System_String__Concat_1969e50
                       (roomId,TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix,
                        (MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50(roomId,roomName,(MethodInfo *)0x0);
    pSVar2 = Settings_MultiplayerSettings__GetHashCode(__this,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
    }
    sessionID = ApplicationManagers_ApplicationVersion__GetSessionID((MethodInfo *)0x0);
    if (__this_00 == (Photon_Voice_PUN_PunVoiceClient_o *)0x0) {
      ThrowNullReferenceException();
    }
    Photon_Voice_VoiceFollowClient__JoinRoom
              ((Photon_Voice_VoiceFollowClient_o *)__this_00,pSVar1,(System_String_array *)0x0,password,pSVar2
               ,sessionID,(MethodInfo *)0x0);
  }
  return;
}


// Settings.MultiplayerSettings$$GetHashKey
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashKey (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x181f22910

System_String_o *
Settings_MultiplayerSettings__GetHashKey
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184345478 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_184345478 = '\x01';
  }
  if (Il2CppMethodInitialized_18434546f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434546f = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType == 2) {
    pSVar1 = (__this->fields).LobbyMode;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._value == 0) {
      if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar2 = ApplicationManagers_ApplicationVersion__GetHashKey(str,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Settings.MultiplayerSettings$$GetHashCode
// il2cpp: System_String_o* Settings_MultiplayerSettings__GetHashCode (Settings_MultiplayerSettings_o* __this, System_String_o* str, const MethodInfo* method);
// 0x181f22860

System_String_o *
Settings_MultiplayerSettings__GetHashCode
          (Settings_MultiplayerSettings_o *__this,System_String_o *str,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184345479 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationVersion);
    Il2CppMethodInitialized_184345479 = '\x01';
  }
  if (Il2CppMethodInitialized_18434546f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434546f = '\x01';
  }
  if ((__this->fields).CurrentMultiplayerServerType == 2) {
    pSVar1 = (__this->fields).LobbyMode;
    if (pSVar1 == (Settings_IntSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._value == 0) {
      if ((TypeInfo_ApplicationManagers_ApplicationVersion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationVersion);
      }
      pSVar2 = ApplicationManagers_ApplicationVersion__GetHashCode(str,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Settings.MultiplayerSettings$$.ctor
// il2cpp: void Settings_MultiplayerSettings___ctor (Settings_MultiplayerSettings_o* __this, const MethodInfo* method);
// 0x181f23510

void Settings_MultiplayerSettings___ctor(Settings_MultiplayerSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *__this_00;
  System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *pSVar6;
  
  if (Il2CppMethodInitialized_18434547a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
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
    Il2CppMethodInitialized_18434547a = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = 0;
  (pSVar4->fields).MaxValue = 1;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).LobbyMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LobbyMode,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).AppIdMode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AppIdMode,pSVar4);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomLobby = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomLobby,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomAppId = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomAppId,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanIP = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanIP,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar4,0x13bf,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).LanPort = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanPort,pSVar4);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).LanPassword = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanPassword,pSVar5);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)__this_00,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).LanSupportsAccounts = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LanSupportsAccounts,__this_00);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModUsername = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ModUsername,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ModPassword = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ModPassword,pSVar5);
  pSVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string);
  System_Collections_Generic_Dictionary_Int32Enum__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
             (MethodInfo_14421B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
  if (pSVar6 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,0,
               (Il2CppObject *)"eu",
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,1,
               (Il2CppObject *)"us",
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,2,
               (Il2CppObject *)"sa",
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,3,
               (Il2CppObject *)"asia",
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    System_Collections_Generic_Dictionary_Int32Enum__object___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,4,
               (Il2CppObject *)"asia",
               (MethodInfo_1443C70 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
    (__this->fields).CloudAddresses = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CloudAddresses,pSVar6);
    pSVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string
                       );
    System_Collections_Generic_Dictionary_Int32Enum__float____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
               (MethodInfo_14421B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_ctor);
    if (pSVar6 != (System_Collections_Generic_Dictionary_MultiplayerRegion__string__o *)0x0) {
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,1,
                 (Il2CppObject *)"us.aottg2.com",
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,0,
                 (Il2CppObject *)"eu.aottg2.com",
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,2,
                 (Il2CppObject *)"sa.aottg2.com",
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,3,
                 (Il2CppObject *)"asia.aottg2.com",
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,4,
                 (Il2CppObject *)"cn.aottg2.com",
                 (MethodInfo_1443C70 *)
                 MethodInfo_System_Collections_Generic_Dictionary_MultiplayerRegion_string_Add);
      (__this->fields).PublicAddresses = pSVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).PublicAddresses,pSVar6);
      (__this->fields).DefaultPort = 0x13bf;
      Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.MultiplayerSettings$$.cctor
// il2cpp: void Settings_MultiplayerSettings___cctor (const MethodInfo* method);
// 0x181f23460

void Settings_MultiplayerSettings___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434547b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&"28521206-90d0-41b1-93b0-f35460fef0b6");
    il2cpp_codegen_initialize_runtime_metadata(&"vc");
    Il2CppMethodInitialized_18434547b = '\x01';
  }
  TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix = "vc";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Settings_MultiplayerSettings->static_fields->VoiceRoomSuffix,"vc");
  TypeInfo_Settings_MultiplayerSettings->static_fields->PublicAppId = "28521206-90d0-41b1-93b0-f35460fef0b6";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Settings_MultiplayerSettings->static_fields->PublicAppId,"28521206-90d0-41b1-93b0-f35460fef0b6");
  return;
}


