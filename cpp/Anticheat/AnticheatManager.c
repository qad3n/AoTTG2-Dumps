// Type: Anticheat.AnticheatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Anticheat/AnticheatManager.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/AnticheatManager.cs
// --------------------------------

// Anticheat.AnticheatManager$$Init
// il2cpp: void Anticheat_AnticheatManager__Init (const MethodInfo* method);
// 0x5e2be10

void Anticheat_AnticheatManager__Init(MethodInfo *method)

{
  Anticheat_AnticheatManager_o *pAVar1;
  Events_OnLoadScene_o *__this;
  
  if (Il2CppMethodInitialized_0754851a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_AnticheatManager_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AnticheatManager);
    Il2CppMethodInitialized_0754851a = '\x01';
  }
  if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  pAVar1 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Anticheat_AnticheatManager->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_AnticheatManager);
  TypeInfo_Anticheat_AnticheatManager->static_fields->_instance = pAVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_AnticheatManager->static_fields->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnLoadScene);
  Events_OnLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Anticheat_AnticheatManager_OnLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$Reset
// il2cpp: void Anticheat_AnticheatManager__Reset (const MethodInfo* method);
// 0x5e2bee0

void Anticheat_AnticheatManager__Reset(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  Anticheat_AnticheatManager_StaticFields *pAVar2;
  Anticheat_BallotBox_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754851b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_BallotBox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    Il2CppMethodInitialized_0754851b = '\x01';
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    __this = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
    method_00 = MethodInfo_System_Collections_Generic_HashSet_string_Clear;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_object__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->static_fields + 0x18);
    method_00 = MethodInfo_System_Collections_Generic_HashSet_string_Clear;
  }
  MethodInfo_System_Collections_Generic_HashSet_string_Clear = method_00;
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Clear(__this,(MethodInfo_4FB36D0 *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
  Anticheat_BallotBox___ctor(__this_00,method_00);
  pAVar2 = TypeInfo_Anticheat_AnticheatManager->static_fields;
  pAVar2->VoteKick = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar2->VoteKick);
  return;
}


// Anticheat.AnticheatManager$$OnLoadScene
// il2cpp: void Anticheat_AnticheatManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5e2c0e0

void Anticheat_AnticheatManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  
  if (Il2CppMethodInitialized_0754851c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Clear
              );
    Il2CppMethodInitialized_0754851c = '\x01';
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->static_fields + 8);
  }
  if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_int__object___Clear
            (__this,(MethodInfo_4A0F8F0 *)
                    MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Clear
            );
  return;
}


// Anticheat.AnticheatManager$$CheckPhotonEvent
// il2cpp: bool Anticheat_AnticheatManager__CheckPhotonEvent (Photon_Realtime_Player_o* sender, int32_t eventType, System_Object_array* data, const MethodInfo* method);
// 0x5e2c170
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2c1a4: test r13, r13
// asm:   0x5e2c1ad: jmp 0x5e2c3e5

bool Anticheat_AnticheatManager__CheckPhotonEvent
               (Photon_Realtime_Player_o *sender,int32_t eventType,System_Object_array *data,
               MethodInfo *method)

{
  uint32_t uVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_PhotonEventType__BaseEventFilter__o *__this;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  Anticheat_InstantiateEventFilter_o *__this_01;
  Anticheat_BaseEventFilter_o *pAVar4;
  
  if (Il2CppMethodInitialized_0754851d == '\0') {
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
    Il2CppMethodInitialized_0754851d = '\x01';
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
  }
  if ((sender != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                ((long)((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->static_fields + 8),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar2,(sender->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey
                      );
    if (!bVar3) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
      key = (sender->fields).actorNumber;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter);
      System_Collections_Generic_Dictionary_Int32Enum__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_4A543B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ctor);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05e2c3e5;
      System_Collections_Generic_Dictionary_int__object___Add
                (pSVar2,key,(Il2CppObject *)__this,
                 (MethodInfo_4A0F740 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_Add
                );
    }
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Anticheat_AnticheatManager->static_fields->_IdToEventFilters;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (__this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_int__object___get_Item
                              (pSVar2,(sender->fields).actorNumber,
                               (MethodInfo_4A0F690 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_get_Item
                              ), __this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey
                        (__this_00,eventType,
                         (MethodInfo_4A551F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_ContainsKey
                        );
      if ((eventType == 0) && (!bVar3)) {
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_InstantiateEventFilter);
        System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields)._player = sender;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._player);
        (__this_01->fields)._eventType = 0;
        System_Collections_Generic_Dictionary_Int32Enum__object___Add
                  (__this_00,0,(Il2CppObject *)__this_01,
                   (MethodInfo_4A54FE0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_Add);
      }
      pAVar4 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                         (__this_00,eventType,
                          (MethodInfo_4A54F30 *)
                          MethodInfo_System_Collections_Generic_Dictionary_PhotonEventType_BaseEventFilter_get_Item
                         );
      if (pAVar4 != (Anticheat_BaseEventFilter_o *)0x0) {
        bVar3 = (*(pAVar4->klass->vtable)._6_CheckEvent.methodPtr)
                          (pAVar4,data,(pAVar4->klass->vtable)._6_CheckEvent.method);
        return bVar3;
      }
    }
  }
label_05e2c3e5:
  ThrowNullReferenceException();
}


// Anticheat.AnticheatManager$$KickPlayer
// il2cpp: void Anticheat_AnticheatManager__KickPlayer (Photon_Realtime_Player_o* player, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x5e2c420
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2c463: jmp 0x5e2c7b8
// asm:   0x5e2c541: jmp 0x5e2c603
// asm:   0x5e2c576: jmp 0x5e2c589

void Anticheat_AnticheatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool ban,System_String_o *reason,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  Settings_ProfileSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  Photon_Realtime_Player_o *pPVar5;
  GameManagers_PlayerInfo_o *pGVar6;
  System_String_o *pSVar7;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_0754851e == '\0') {
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
    Il2CppMethodInitialized_0754851e = '\x01';
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05e2c454;
label_05e2c516:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05e2c516;
label_05e2c454:
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  }
  if (!bVar4) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar4) goto label_05e2c55a;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar4) {
label_05e2c55a:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if ((pPVar5 == player) &&
         (bVar4 = System_String__op_Inequality
                            (reason,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             (MethodInfo *)0x0), bVar4)) {
        pSVar7 = System_String__Concat_5301f10
                           ("Attempting to ban myself for: ",reason,", please report this to the devs.",(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        }
        ApplicationManagers_DebugConsole__Log(pSVar7,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  if (ban) {
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
                 TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo,
       pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05e2c7c5;
    bVar4 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar1,(player->fields).actorNumber,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      __this = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Anticheat_AnticheatManager->static_fields->BanList;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_int__object__o *)
               TypeInfo_GameManagers_InGameManager->static_fields->AllPlayerInfo;
      if ((((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
           (pGVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                               (pSVar1,(player->fields).actorNumber,
                                (MethodInfo_4A0F690 *)
                                MethodInfo_System_Collections_Generic_Dictionary_int_PlayerInfo_get_Item),
           pGVar6 == (GameManagers_PlayerInfo_o *)0x0)) ||
          (pSVar2 = (pGVar6->fields).Profile, pSVar2 == (Settings_ProfileSettings_o *)0x0)) ||
         ((pSVar3 = (pSVar2->fields).ID, pSVar3 == (Settings_StringSetting_o *)0x0 ||
          (__this == (System_Collections_Generic_HashSet_object__o *)0x0)))) goto label_05e2c7c5;
      System_Collections_Generic_HashSet_object___Add
                (__this,(Il2CppObject *)(pSVar3->fields)._value,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__DestroyPlayerObjects(player,(MethodInfo *)0x0);
  Photon_Pun_PhotonNetwork__CloseConnection(player,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality
                    (reason,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar4) {
    if (player == (Photon_Realtime_Player_o *)0x0) {
label_05e2c7c5:
      ThrowNullReferenceException();
    }
    local_2c = (player->fields).actorNumber;
    pSVar7 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_5302810
                       ("Player ",pSVar7," was autobanned. Reason:",reason,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log(pSVar7,true,(MethodInfo *)0x0);
  }
  return;
}


// Anticheat.AnticheatManager$$TryVoteKickPlayer
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_AnticheatManager__TryVoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x5e2c7d0

Anticheat_BallotBox_Result_o *
Anticheat_AnticheatManager__TryVoteKickPlayer
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Photon_Realtime_Player_o *voter,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  uint32_t uVar1;
  Anticheat_BallotBox_o *__this;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  Anticheat_BallotBox_Result_o local_48;
  
  if (Il2CppMethodInitialized_0754851f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754851f = '\x01';
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    __this = TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick;
  }
  else {
    __this = *(Anticheat_BallotBox_o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->static_fields + 0x10);
  }
  if (__this == (Anticheat_BallotBox_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)target;
  Anticheat_BallotBox__TryCastBallot(&local_48,__this,voter,target,in_R8);
  if (local_48.fields.type == 0) {
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    Anticheat_AnticheatManager__KickPlayer(target,false,"",method_00);
  }
  (__return_storage_ptr__->fields).type = local_48.fields.type;
  (__return_storage_ptr__->fields).progress.fields = local_48.fields.progress.fields;
  *(ulong *)&(__return_storage_ptr__->fields).field_0xc =
       CONCAT44(local_48.fields.target._0_4_,local_48.fields._12_4_);
  (__return_storage_ptr__->fields).target =
       (Photon_Realtime_Player_o *)CONCAT44(local_48.fields.target._4_4_,local_48.fields.target._0_4_);
  (__return_storage_ptr__->fields).cooldown.fields._ticks = (int64_t)local_48.fields.cooldown.fields._ticks;
  return __return_storage_ptr__;
}


// Anticheat.AnticheatManager$$ResetVoteKicks
// il2cpp: void Anticheat_AnticheatManager__ResetVoteKicks (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x5e2cf40

void Anticheat_AnticheatManager__ResetVoteKicks(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  uint32_t uVar1;
  Anticheat_BallotBox_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07548520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    Il2CppMethodInitialized_07548520 = '\x01';
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    __this = TypeInfo_Anticheat_AnticheatManager->static_fields->VoteKick;
    in_RDX = extraout_RDX_00;
  }
  else {
    __this = *(Anticheat_BallotBox_o **)
              ((long)((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager)->static_fields + 0x10);
  }
  if (__this == (Anticheat_BallotBox_o *)0x0) {
    ThrowNullReferenceException();
  }
  Anticheat_BallotBox__ResetBallots(__this,voter,in_RDX);
  return;
}


// Anticheat.AnticheatManager$$.ctor
// il2cpp: void Anticheat_AnticheatManager___ctor (Anticheat_AnticheatManager_o* __this, const MethodInfo* method);
// 0x5e2d1c0

void Anticheat_AnticheatManager___ctor(Anticheat_AnticheatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$.cctor
// il2cpp: void Anticheat_AnticheatManager___cctor (const MethodInfo* method);
// 0x5e2d1d0

void Anticheat_AnticheatManager___cctor(MethodInfo *method)

{
  Anticheat_AnticheatManager_StaticFields *pAVar1;
  MethodInfo *method_00;
  Anticheat_BallotBox_o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  
  if (Il2CppMethodInitialized_07548521 == '\0') {
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
    Il2CppMethodInitialized_07548521 = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter
                        );
  System_Collections_Generic_Dictionary_int__object____ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)method_00,
             (MethodInfo_4A0EB10 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_PhotonEventType_BaseEventFilter_ctor
            );
  pAVar1 = TypeInfo_Anticheat_AnticheatManager->static_fields;
  pAVar1->_IdToEventFilters =
       (System_Collections_Generic_Dictionary_int__Dictionary_PhotonEventType__BaseEventFilter___o *)method_00
  ;
  Il2CppCodeGenWriteBarrier(&pAVar1->_IdToEventFilters);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_BallotBox);
  Anticheat_BallotBox___ctor(__this,method_00);
  pAVar1 = TypeInfo_Anticheat_AnticheatManager->static_fields;
  pAVar1->VoteKick = __this;
  Il2CppCodeGenWriteBarrier(&pAVar1->VoteKick);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pAVar1 = TypeInfo_Anticheat_AnticheatManager->static_fields;
  pAVar1->BanList = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar1->BanList);
  return;
}


