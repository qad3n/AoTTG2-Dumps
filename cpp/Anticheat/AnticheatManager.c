// Type: Anticheat.AnticheatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/AnticheatManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Anticheat/AnticheatManager.cs  [CHANGED since prior version]
// --------------------------------

// Anticheat.AnticheatManager$$Init
// il2cpp: void Anticheat_AnticheatManager__Init (const MethodInfo* method);
// 0x41b2770

void Anticheat_AnticheatManager__Init(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Events_OnLoadScene_o *value;
  
  if (DAT_05704d31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_AnticheatManager_CreateSingleton_AnticheatManage);
    DAT_05704d31 = '\x01';
  }
  if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_AnticheatManager + 0xb8),MethodInfo_AnticheatManager_CreateSingleton_AnticheatManage);
  **(undefined8 **)(TypeInfo_AnticheatManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AnticheatManager + 0xb8));
  value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$Reset
// il2cpp: void Anticheat_AnticheatManager__Reset (const MethodInfo* method);
// 0x41b2840

void Anticheat_AnticheatManager__Reset(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  long lVar2;
  Anticheat_BallotBox_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704d32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_BallotBox);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704d32 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
    method_00 = MethodInfo_Void_Clear;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
    method_00 = MethodInfo_Void_Clear;
  }
  MethodInfo_Void_Clear = method_00;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear(__this,(MethodInfo_335C410 *)method_00);
    __this_00 = (Anticheat_BallotBox_o *)il2cpp_runtime_glue(TypeInfo_BallotBox);
    Anticheat_BallotBox___ctor(__this_00,method_00);
    lVar2 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
    *(Anticheat_BallotBox_o **)(lVar2 + 0x10) = __this_00;
    il2cpp_runtime_glue(lVar2 + 0x10,__this_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$OnLoadScene
// il2cpp: void Anticheat_AnticheatManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x41b2a40

void Anticheat_AnticheatManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  
  if (DAT_05704d33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704d33 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 8);
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 8);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int__object>__Clear(__this,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$CheckPhotonEvent
// il2cpp: bool Anticheat_AnticheatManager__CheckPhotonEvent (Photon_Realtime_Player_o* sender, int32_t eventType, System_Object_array* data, const MethodInfo* method);
// 0x41b2ad0

bool_conflict
Anticheat_AnticheatManager__CheckPhotonEvent
          (Photon_Realtime_Player_o *sender,int32_t eventType,System_Object_array *data,
          MethodInfo *method)

{
  int iVar1;
  int32_t key;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Anticheat_InstantiateEventFilter_o *__this;
  Il2CppObject *pIVar6;
  
  if (DAT_05704d34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat);
    il2cpp_init_method_metadata(&MethodInfo_BaseEventFilter_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_PhotonEventType__BaseEventFilter);
    il2cpp_init_method_metadata(&TypeInfo_InstantiateEventFilter);
    DAT_05704d34 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if ((sender != (Photon_Realtime_Player_o *)0x0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 8),
     pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar2,(sender->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 8);
      key = (sender->fields).actorNumber;
      pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_PhotonEventType__BaseEventFilter);
      System_Collections_Generic_Dictionary<Int32Enum__object>___ctor(pSVar5,MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat);
      if (pSVar2 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto LAB_041b2d36;
      System_Collections_Generic_Dictionary<int__object>__Add
                (pSVar2,key,(Il2CppObject *)pSVar5,MethodInfo_Void_Add);
    }
    if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 8);
    if ((pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 System_Collections_Generic_Dictionary<int__object>__get_Item
                           (pSVar2,(sender->fields).actorNumber,MethodInfo_Dictionary_2_Anticheat_PhotonEventType_Anticheat),
       pSVar5 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar4 = System_Collections_Generic_Dictionary<Int32Enum__object>__ContainsKey
                        (pSVar5,eventType,MethodInfo_Boolean_ContainsKey);
      if ((eventType == 0) && ((char)bVar4 == '\0')) {
        __this = (Anticheat_InstantiateEventFilter_o *)il2cpp_runtime_glue(TypeInfo_InstantiateEventFilter);
        Anticheat_InstantiateEventFilter___ctor(__this,sender,0,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                  (pSVar5,0,(Il2CppObject *)__this,MethodInfo_Void_Add);
      }
      pIVar6 = System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                         (pSVar5,eventType,MethodInfo_BaseEventFilter_get_Item);
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar3 = pIVar6->klass;
        vtable_dispatch = pIVar3->vtable[6].methodPtr;
        bVar4 = (*vtable_dispatch)
                          (pIVar6,data,pIVar3->vtable[6].method,pIVar3,vtable_dispatch);
        return bVar4;
      }
    }
  }
LAB_041b2d36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$HasModPassword
// il2cpp: bool Anticheat_AnticheatManager__HasModPassword (const MethodInfo* method);
// 0x41b2d40

bool_conflict Anticheat_AnticheatManager__HasModPassword(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704d35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704d35 = '\x01';
  }
  if ((**(long **)(TypeInfo_SettingsManager + 0xb8) != 0) &&
     (lVar1 = *(long *)(**(long **)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar1 != 0)) {
    bVar2 = System_String__op_Inequality
                      (*(System_String_o **)(lVar1 + 0x18),
                       (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$KickPlayer
// il2cpp: void Anticheat_AnticheatManager__KickPlayer (Photon_Realtime_Player_o* player, bool ban, System_String_o* reason, const MethodInfo* method);
// 0x41b2dc0

/* WARNING: Type propagation algorithm not settling */

void Anticheat_AnticheatManager__KickPlayer
               (Photon_Realtime_Player_o *player,bool_conflict ban,System_String_o *reason,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  void *pvVar2;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_String_o *pSVar6;
  Il2CppObject *pIVar7;
  int32_t local_2c;
  
  if (DAT_05704d36 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_PlayerInfo_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Attempting to ban myself for: ");
    il2cpp_init_method_metadata(&", please report this to the devs.");
    il2cpp_init_method_metadata(&" was autobanned. Reason:");
    il2cpp_init_method_metadata(&"Player ");
    DAT_05704d36 = '\x01';
  }
  local_2c = 0;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    else {
      pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    }
    if ((pPVar5 == player) &&
       (bVar4 = System_String__op_Inequality
                          (reason,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0), (char)bVar4 != '\0')) {
      pSVar6 = System_String__Concat("Attempting to ban myself for: ",reason,", please report this to the devs.",(MethodInfo *)0x0);
      goto LAB_041b30e4;
    }
  }
  if ((char)ban != '\0') {
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((player == (Photon_Realtime_Player_o *)0x0) ||
       (pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18),
       pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_041b311b;
    bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (pSVar1,(player->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
      if ((((pSVar1 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) ||
           (pIVar7 = System_Collections_Generic_Dictionary<int__object>__get_Item
                               (pSVar1,(player->fields).actorNumber,MethodInfo_PlayerInfo_get_Item),
           pIVar7 == (Il2CppObject *)0x0)) || (pIVar7[2].klass == (Il2CppClass *)0x0)) ||
         ((pvVar2 = ((pIVar7[2].klass)->_1).typeMetadataHandle, pvVar2 == (void *)0x0 ||
          (__this == (System_Collections_Generic_HashSet_object__o *)0x0)))) goto LAB_041b311b;
      System_Collections_Generic_HashSet<object>__Add
                (__this,*(Il2CppObject **)((long)pvVar2 + 0x18),MethodInfo_Boolean_Add);
    }
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__DestroyPlayerObjects(player,(MethodInfo *)0x0);
  Photon_Pun_PhotonNetwork__CloseConnection(player,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality
                    (reason,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (player != (Photon_Realtime_Player_o *)0x0) {
    local_2c = (player->fields).actorNumber;
    pSVar6 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat("Player ",pSVar6," was autobanned. Reason:",reason,(MethodInfo *)0x0);
LAB_041b30e4:
    if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_DebugConsole__Log(pSVar6,1,(MethodInfo *)0x0);
    return;
  }
LAB_041b311b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$TryVoteKickPlayer
// il2cpp: Anticheat_BallotBox_Result_o Anticheat_AnticheatManager__TryVoteKickPlayer (Photon_Realtime_Player_o* voter, Photon_Realtime_Player_o* target, const MethodInfo* method);
// 0x41b3120

Anticheat_BallotBox_Result_o *
Anticheat_AnticheatManager__TryVoteKickPlayer
          (Anticheat_BallotBox_Result_o *__return_storage_ptr__,Photon_Realtime_Player_o *voter,
          Photon_Realtime_Player_o *target,MethodInfo *method)

{
  Anticheat_BallotBox_o *__this;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined8 uStack_54;
  Anticheat_BallotBox_Result_o local_48;
  
  if (DAT_05704d37 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&"");
    DAT_05704d37 = '\x01';
  }
  if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(Anticheat_BallotBox_o **)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x10);
  if (__this != (Anticheat_BallotBox_o *)0x0) {
    method_00 = (MethodInfo *)target;
    Anticheat_BallotBox__TryCastBallot(&local_48,__this,voter,target,in_R8);
    uStack_54 = CONCAT44(local_48.fields.cooldown.fields._ticks._4_4_,
                         (undefined4)local_48.fields.cooldown.fields._ticks);
    if (local_48.fields.type == 0) {
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Anticheat_AnticheatManager__KickPlayer(target,0,"",method_00);
    }
    (__return_storage_ptr__->fields).type = local_48.fields.type;
    (__return_storage_ptr__->fields).progress.fields = local_48.fields.progress.fields;
    *(ulong *)&(__return_storage_ptr__->fields).field_0xc =
         CONCAT44(local_48.fields.target._0_4_,local_48.fields._12_4_);
    (__return_storage_ptr__->fields).target =
         (Photon_Realtime_Player_o *)
         CONCAT44(local_48.fields.target._4_4_,local_48.fields.target._0_4_);
    (__return_storage_ptr__->fields).cooldown.fields._ticks = uStack_54;
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$ResetVoteKicks
// il2cpp: void Anticheat_AnticheatManager__ResetVoteKicks (Photon_Realtime_Player_o* voter, const MethodInfo* method);
// 0x41b3850

void Anticheat_AnticheatManager__ResetVoteKicks(Photon_Realtime_Player_o *voter,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_DateTime_o SVar4;
  Anticheat_BallotBox_Ballot_o item;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_02;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *local_48;
  Il2CppType *pIStack_40;
  
  if (DAT_05704d38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    DAT_05704d38 = '\x01';
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AnticheatManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x10);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x10);
  }
  if (lVar2 != 0) {
    if (DAT_05704d3b == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon);
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
      il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Anticheat_BallotBox_Ballot__get_Curren);
      il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      DAT_05704d3b = '\x01';
    }
    pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    pIVar6 = (Il2CppMethodPointer)0x0;
    __this_02 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0;
    if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_01 = System_Collections_Generic_Dictionary<object__object>__get_Values
                              (*(System_Collections_Generic_Dictionary_object__object__o **)
                                (lVar2 + 0x10),MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_Photon),
       __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )&stack0xffffffffffffff98,__this_01,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      while( true ) {
        __this.fields._8_8_ = pIVar6;
        __this.fields._dictionary = pSVar5;
        __this.fields._currentValue = (Il2CppObject *)__this_02;
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar3 == '\0') {
          __this_00.fields._8_8_ = pIVar6;
          __this_00.fields._dictionary = pSVar5;
          __this_00.fields._currentValue = (Il2CppObject *)__this_02;
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                    (__this_00,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
          return;
        }
        local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                    *)0x0;
        pIStack_40 = (Il2CppType *)0x0;
        pSVar7 = __this_02;
        if (DAT_05704d44 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_DateTime);
          DAT_05704d44 = '\x01';
        }
        local_48 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c
                    *)voter;
        il2cpp_runtime_glue(&local_48,voter);
        if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar4 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
        if (__this_02 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) break;
        item.fields.Timestamp.fields._dateData = SVar4.fields._dateData;
        item.fields.Voter = (Photon_Realtime_Player_o *)local_48;
        System_Collections_Generic_HashSet<BallotBox_Ballot>__Remove(__this_02,item,MethodInfo_Boolean_Remove);
        __this_02 = pSVar7;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.AnticheatManager$$.ctor
// il2cpp: void Anticheat_AnticheatManager___ctor (Anticheat_AnticheatManager_o* __this, const MethodInfo* method);
// 0x41b3ae0

void Anticheat_AnticheatManager___ctor(Anticheat_AnticheatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.AnticheatManager$$.cctor
// il2cpp: void Anticheat_AnticheatManager___cctor (const MethodInfo* method);
// 0x41b3af0

void Anticheat_AnticheatManager___cctor(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  Anticheat_BallotBox_o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_05704d39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_BallotBox);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Int32_Dictionary_2_Anticheat);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_int__Dictionary_PhotonEventType__Base);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    DAT_05704d39 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Dictionary_int__Dictionary_PhotonEventType__Base);
  System_Collections_Generic_Dictionary<int__object>___ctor
            ((System_Collections_Generic_Dictionary_int__object__o *)method_00,MethodInfo_Dictionary_2_System_Int32_Dictionary_2_Anticheat);
  lVar1 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(MethodInfo **)(lVar1 + 8) = method_00;
  il2cpp_runtime_glue(lVar1 + 8);
  __this = (Anticheat_BallotBox_o *)il2cpp_runtime_glue(TypeInfo_BallotBox);
  Anticheat_BallotBox___ctor(__this,method_00);
  lVar1 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(Anticheat_BallotBox_o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_glue(lVar1 + 0x10,__this);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_AnticheatManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x18) = __this_00;
  il2cpp_runtime_glue(lVar1 + 0x18,__this_00);
  return;
}


