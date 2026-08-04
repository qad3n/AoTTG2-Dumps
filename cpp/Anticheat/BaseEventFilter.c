// Type: Anticheat.BaseEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/BaseEventFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/BaseEventFilter.cs
// --------------------------------

// Anticheat.BaseEventFilter$$get_TotalRateLimit
// il2cpp: Utility_RateLimit_o* Anticheat_BaseEventFilter__get_TotalRateLimit (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x44dc320

Utility_RateLimit_o *
Anticheat_BaseEventFilter__get_TotalRateLimit(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Utility_RateLimit_o *__this_00;
  
  if (g_data_057aeb9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RateLimit);
    g_data_057aeb9c = '\x01';
  }
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RateLimit);
  Utility_RateLimit___ctor(__this_00,100,1.0,(MethodInfo *)0x0);
  return __this_00;
}


// Anticheat.BaseEventFilter$$get_AlwaysAllowMaster
// il2cpp: bool Anticheat_BaseEventFilter__get_AlwaysAllowMaster (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x44dc370

bool_conflict
Anticheat_BaseEventFilter__get_AlwaysAllowMaster(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Anticheat.BaseEventFilter$$.ctor
// il2cpp: void Anticheat_BaseEventFilter___ctor (Anticheat_BaseEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x44dc380

void Anticheat_BaseEventFilter___ctor
               (Anticheat_BaseEventFilter_o *__this,Photon_Realtime_Player_o *player,int32_t eventType,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  il2cpp_runtime_helper_022b4080(&__this->fields,player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.BaseEventFilter$$IsMasterOrLocal
// il2cpp: bool Anticheat_BaseEventFilter__IsMasterOrLocal (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x44dc3b0

bool_conflict
Anticheat_BaseEventFilter__IsMasterOrLocal(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  Utility_RateLimit_o *__this_00;
  System_String_o *pSVar5;
  int32_t extraout_EDX;
  Anticheat_BaseEventFilter_o *unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *pMVar6;
  Anticheat_BaseEventFilter_o *pAVar7;
  Anticheat_BaseEventFilter_o *__this_01;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  Anticheat_BaseEventFilter_o *pAStack_30;
  
  pPVar1 = (__this->fields)._player;
  pAVar7 = __this;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
label_044dc3fb:
    il2cpp_runtime_helper_022b2c90();
    pAStack_30 = unaff_RBX;
    if (g_data_057aeb9d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonEventType);
      il2cpp_runtime_helper_023445d0(&"sending too many ");
      il2cpp_runtime_helper_023445d0(&" events");
      g_data_057aeb9d = '\x01';
    }
    pMVar6 = (pAVar7->klass->vtable)._4_get_TotalRateLimit.method;
    __this_01 = pAVar7;
    __this_00 = (Utility_RateLimit_o *)(*(pAVar7->klass->vtable)._4_get_TotalRateLimit.methodPtr)();
    if (__this_00 == (Utility_RateLimit_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields)._player = (Photon_Realtime_Player_o *)pMVar6;
      bVar4 = il2cpp_runtime_helper_022b4080(&__this_01->fields,pMVar6);
      (__this_01->fields)._eventType = extraout_EDX;
      return bVar4;
    }
    bVar4 = Utility_RateLimit__Use(__this_00,1,(MethodInfo *)0x0);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((char)bVar4 == '\0') {
      pPVar1 = (pAVar7->fields)._player;
      SStack_48.klass = TypeInfo_PhotonEventType;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      iStack_38 = (pAVar7->fields)._eventType;
      pSVar5 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3af7150("sending too many ",pSVar5," events",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = 0;
      Anticheat_AnticheatManager__KickPlayer(pPVar1,0,pSVar5,(MethodInfo *)0x0);
    }
    return bVar3;
  }
  bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((char)(pPVar1->fields).IsLocal == '\0') {
    cVar2 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)();
    if (cVar2 != '\0') {
      pPVar1 = (__this->fields)._player;
      pAVar7 = (Anticheat_BaseEventFilter_o *)0x0;
      unaff_RBX = __this;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_044dc3fb;
      bVar3 = Photon_Realtime_Player__get_IsMasterClient(pPVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return bVar4;
      }
    }
    bVar4 = 0;
  }
  return bVar4;
}


// Anticheat.BaseEventFilter$$CheckEvent
// il2cpp: bool Anticheat_BaseEventFilter__CheckEvent (Anticheat_BaseEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x44dc400

bool_conflict
Anticheat_BaseEventFilter__CheckEvent
          (Anticheat_BaseEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  Utility_RateLimit_o *__this_00;
  System_String_o *pSVar2;
  int32_t extraout_EDX;
  MethodInfo *extraout_RDX;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  MethodInfo *pMVar4;
  Anticheat_BaseEventFilter_o *__this_01;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (g_data_057aeb9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonEventType);
    il2cpp_runtime_helper_023445d0(&"sending too many ");
    il2cpp_runtime_helper_023445d0(&" events");
    g_data_057aeb9d = '\x01';
    method = extraout_RDX;
  }
  pMVar4 = (__this->klass->vtable)._4_get_TotalRateLimit.method;
  __this_01 = __this;
  __this_00 = (Utility_RateLimit_o *)
              (*(__this->klass->vtable)._4_get_TotalRateLimit.methodPtr)(__this,pMVar4,method);
  if (__this_00 != (Utility_RateLimit_o *)0x0) {
    bVar1 = Utility_RateLimit__Use(__this_00,1,(MethodInfo *)0x0);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((char)bVar1 == '\0') {
      player = (__this->fields)._player;
      local_30.klass = TypeInfo_PhotonEventType;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = (__this->fields)._eventType;
      pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_3af7150("sending too many ",pSVar2," events",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = 0;
      Anticheat_AnticheatManager__KickPlayer(player,0,pSVar2,(MethodInfo *)0x0);
    }
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._player = (Photon_Realtime_Player_o *)pMVar4;
  bVar1 = il2cpp_runtime_helper_022b4080(&__this_01->fields,pMVar4);
  (__this_01->fields)._eventType = extraout_EDX;
  return bVar1;
}


