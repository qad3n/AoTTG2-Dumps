// Type: Anticheat.AnticheatManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/AnticheatManager.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.AnticheatManager$$Init
// il2cpp: void Anticheat_AnticheatManager__Init (const MethodInfo* method);
// 0x18235eb40

void Anticheat_AnticheatManager__Init(MethodInfo *method)

{
  Anticheat_AnticheatManager_o *value;
  Events_OnLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_184347a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_AnticheatManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AnticheatManager);
    Il2CppMethodInitialized_184347a60 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Anticheat_AnticheatManager->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_AnticheatManager
                    );
  TypeInfo_Anticheat_AnticheatManager->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Anticheat_AnticheatManager_OnLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$Reset
// il2cpp: void Anticheat_AnticheatManager__Reset (const MethodInfo* method);
// 0x18235f040

void Anticheat_AnticheatManager__Reset(MethodInfo *method)

{
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  Anticheat_BallotBox_o *__this_00;
  
  if (Il2CppMethodInitialized_184347a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    Il2CppMethodInitialized_184347a61 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
           TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
  if (__this != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
    Anticheat_BallotBox___ctor(__this_00,(MethodInfo *)0x0);
    TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick,__this_00);
    return;
  }
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$OnLoadScene
// il2cpp: void Anticheat_AnticheatManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x18235ef50

void Anticheat_AnticheatManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__Dictionary_PhotonEventType__BaseEventFilter___o *__this;
  
  if (Il2CppMethodInitialized_184347a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Clear
              );
    Il2CppMethodInitialized_184347a62 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  __this = TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
  if (__this != (System_Collections_Generic_Dictionary_int__Dictionary_PhotonEventType__BaseEventFilter___o *)
                0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Clear
              );
    return;
  }
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$CheckPhotonEvent
// il2cpp: bool Anticheat_AnticheatManager__CheckPhotonEvent (Photon_Realtime_Player_o* sender, int32_t eventType, System_Object_array* data, const MethodInfo* method);
// 0x18235e860

bool Anticheat_AnticheatManager__CheckPhotonEvent
               (Photon_Realtime_Player_o *sender,int32_t eventType,System_Object_array *data,
               MethodInfo *method)

{
  int32_t key;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  bool bVar2;
  System_Collections_Generic_Dictionary_PhotonEventType__BaseEventFilter__o *__this_00;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  Anticheat_InstantiateEventFilter_o *value;
  Anticheat_BaseEventFilter_o *pAVar3;
  
  if (Il2CppMethodInitialized_184347a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Add
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_InstantiateEventFilter);
    Il2CppMethodInitialized_184347a63 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  if ((sender != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters,
     pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,(sender->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey
                      );
    if (!bVar2) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      key = (sender->fields).actorNumber;
      __this = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter);
      System_Collections_Generic_Dictionary_Int32Enum__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_14421B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ctor);
      if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_18235eaaf;
      System_Collections_Generic_Dictionary_int__object___Add
                (__this,key,(Il2CppObject *)__this_00,
                 (MethodInfo_1415BA0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Add
                );
    }
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
             TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
    if (pSVar1 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
      __this_01 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_int__ulong___get_Item
                            (pSVar1,(sender->fields).actorNumber,
                             (MethodInfo_14156F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_get_Item
                            );
      if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                          (__this_01,eventType,
                           (MethodInfo_1443DB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey
                          );
        if (!bVar2 && eventType == 0) {
          value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_InstantiateEventFilter);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)value,(MethodInfo *)0x0);
          (value->fields)._player = sender;
          Il2CppCodeGenWriteBarrier(&(value->fields)._player,sender);
          (value->fields)._eventType = 0;
          System_Collections_Generic_Dictionary_Int32Enum__object___Add
                    (__this_01,0,(Il2CppObject *)value,
                     (MethodInfo_1443C70 *)
                     MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_Add);
        }
        pAVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                           (__this_01,eventType,
                            (MethodInfo_1454ED0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_get_Item
                           );
        if (pAVar3 != (Anticheat_BaseEventFilter_o *)0x0) {
          bVar2 = (*(pAVar3->klass->vtable)._6_CheckEvent.methodPtr)
                            (pAVar3,data,(pAVar3->klass->vtable)._6_CheckEvent.method);
          return bVar2;
        }
      }
    }
  }
label_18235eaaf:
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$HasModPassword
// il2cpp: bool Anticheat_AnticheatManager__HasModPassword (const MethodInfo* method);
// 0x18235eac0

bool Anticheat_AnticheatManager__HasModPassword(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347a64 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  if ((pSVar1 != (Settings_MultiplayerSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).ModPassword, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    bVar3 = System_String__op_Inequality
                      ((pSVar2->fields)._value,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                       (MethodInfo *)0x0);
    return bVar3;
  }
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$KickPlayer
// il2cpp: void Anticheat_AnticheatManager__KickPlayer (Photon_Realtime_Player_o* player, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x18235ec20

void Anticheat_AnticheatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool ban,System_String_o *reason,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  longlong lVar2;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_String_o *pSVar5;
  uint64_t uVar6;
  int32_t local_18 [4];
  
  if (Il2CppMethodInitialized_184347a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Attempting to ban myself for: ");
    il2cpp_codegen_initialize_runtime_metadata(&", please report this to the devs.");
    il2cpp_codegen_initialize_runtime_metadata(&" was autobanned. Reason:");
    il2cpp_codegen_initialize_runtime_metadata(&"Player ");
    Il2CppMethodInitialized_184347a65 = '\x01';
  }
  local_18[0] = 0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((player == pPVar4) &&
       (bVar3 = System_String__op_Inequality
                          (reason,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0
                          ), bVar3)) {
      pSVar5 = System_String__Concat_1969b70
                         ("Attempting to ban myself for: ",reason,", please report this to the devs.",(MethodInfo *)0x0);
      goto label_18235ef14;
    }
  }
  if (ban) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                 TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
       pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) goto label_18235ef49;
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (bVar3) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      __this = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__ulong__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if ((((pSVar1 == (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) ||
           (uVar6 = System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (pSVar1,(player->fields).actorNumber,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item),
           uVar6 == 0)) || (*(longlong *)(uVar6 + 0x30) == 0)) ||
         ((lVar2 = *(longlong *)(*(longlong *)(uVar6 + 0x30) + 0x80), lVar2 == 0 ||
          (__this == (System_Collections_Generic_HashSet_object__o *)0x0)))) goto label_18235ef49;
      System_Collections_Generic_HashSet_object___Add
                (__this,*(Il2CppObject **)(lVar2 + 0x20),
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__DestroyPlayerObjects(player,(MethodInfo *)0x0);
  Photon_Pun_PhotonNetwork__CloseConnection(player,(MethodInfo *)0x0);
  bVar3 = System_String__op_Inequality
                    (reason,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    local_18[0] = (player->fields).actorNumber;
    pSVar5 = System_Int32__ToString(local_18,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969590
                       ("Player ",pSVar5," was autobanned. Reason:",reason,(MethodInfo *)0x0);
label_18235ef14:
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log(pSVar5,true,(MethodInfo *)0x0);
    return;
  }
label_18235ef49:
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$TryVoteKickPlayer
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_AnticheatManager__TryVoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x18235f110

Anticheat_BallotBox_Result_o *
Anticheat_AnticheatManager__TryVoteKickPlayer
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Photon_Realtime_Player_o *voter,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  Anticheat_BallotBox_o *__this;
  undefined8 uVar1;
  Photon_Realtime_Player_o *pPVar2;
  int64_t iVar3;
  int32_t iVar4;
  Anticheat_AnticheatManager_c *klass;
  Anticheat_BallotBox_Result_o *pAVar5;
  Anticheat_BallotBox_Result_o local_28;
  
  if (Il2CppMethodInitialized_184347a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347a66 = '\x01';
  }
  klass = TypeInfo_Anticheat_AnticheatManager;
  (__return_storage_ptr__->fields).type = 0;
  (__return_storage_ptr__->fields).progress.fields.Item1 = 0;
  *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = 0;
  (__return_storage_ptr__->fields).target = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).cooldown.fields._ticks = 0;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    klass = TypeInfo_Anticheat_AnticheatManager;
  }
  __this = klass->static_fields->VoteKick;
  if (__this != (Anticheat_BallotBox_o *)0x0) {
    pAVar5 = Anticheat_BallotBox__TryCastBallot(&local_28,__this,voter,target,(MethodInfo *)0x0);
    iVar4 = (pAVar5->fields).progress.fields.Item1;
    uVar1 = *(undefined8 *)&(pAVar5->fields).progress.fields.Item2;
    pPVar2 = (pAVar5->fields).target;
    iVar3 = (pAVar5->fields).cooldown.fields._ticks;
    (__return_storage_ptr__->fields).type = (pAVar5->fields).type;
    (__return_storage_ptr__->fields).progress.fields.Item1 = iVar4;
    *(undefined8 *)&(__return_storage_ptr__->fields).progress.fields.Item2 = uVar1;
    (__return_storage_ptr__->fields).target = pPVar2;
    (__return_storage_ptr__->fields).cooldown.fields._ticks = iVar3;
    if ((__return_storage_ptr__->fields).type == 0) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      Anticheat_AnticheatManager__KickPlayer(target,false,"",(MethodInfo *)0x0);
    }
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$ResetVoteKicks
// il2cpp: void Anticheat_AnticheatManager__ResetVoteKicks (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x18235efd0

void Anticheat_AnticheatManager__ResetVoteKicks(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  Anticheat_BallotBox_o *__this;
  
  if (Il2CppMethodInitialized_184347a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    Il2CppMethodInitialized_184347a67 = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  __this = TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick;
  if (__this != (Anticheat_BallotBox_o *)0x0) {
    Anticheat_BallotBox__ResetBallots(__this,voter,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$.ctor
// il2cpp: void Anticheat_AnticheatManager___ctor (Anticheat_AnticheatManager_o* __this, const MethodInfo* method);
// 0x180528540

void
Anticheat_AnticheatManager___ctor(Anticheat_AnticheatManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$.cctor
// il2cpp: void Anticheat_AnticheatManager___cctor (const MethodInfo* method);
// 0x18235f200

void Anticheat_AnticheatManager___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__Dictionary_PhotonEventType__BaseEventFilter___o *__this;
  Anticheat_BallotBox_o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  
  if (Il2CppMethodInitialized_184347a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_184347a68 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter
                     );
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1404750 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ctor
            );
  TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
  Anticheat_BallotBox___ctor(__this_00,(MethodInfo *)0x0);
  TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Anticheat_AnticheatManager->static_fields->BanList = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->BanList,__this_01);
  return;
}


