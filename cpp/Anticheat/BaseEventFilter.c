// Type: Anticheat.BaseEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/BaseEventFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/BaseEventFilter.cs
// --------------------------------

// Anticheat.BaseEventFilter$$get_TotalRateLimit
// il2cpp: Utility_RateLimit_o* Anticheat_BaseEventFilter__get_TotalRateLimit (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x5e38670

Utility_RateLimit_o *
Anticheat_BaseEventFilter__get_TotalRateLimit(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Utility_RateLimit_o *__this_00;
  
  if (Il2CppMethodInitialized_0754858a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_RateLimit);
    Il2CppMethodInitialized_0754858a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_RateLimit);
  Utility_RateLimit___ctor(__this_00,100,1.0,(MethodInfo *)0x0);
  return __this_00;
}


// Anticheat.BaseEventFilter$$get_AlwaysAllowMaster
// il2cpp: bool Anticheat_BaseEventFilter__get_AlwaysAllowMaster (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x5e386c0

bool Anticheat_BaseEventFilter__get_AlwaysAllowMaster(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  return true;
}


// Anticheat.BaseEventFilter$$.ctor
// il2cpp: void Anticheat_BaseEventFilter___ctor (Anticheat_BaseEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x5e386d0

void Anticheat_BaseEventFilter___ctor
               (Anticheat_BaseEventFilter_o *__this,Photon_Realtime_Player_o *player,int32_t eventType,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.BaseEventFilter$$IsMasterOrLocal
// il2cpp: bool Anticheat_BaseEventFilter__IsMasterOrLocal (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x5e38700

bool Anticheat_BaseEventFilter__IsMasterOrLocal(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  
  pPVar1 = (__this->fields)._player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
label_05e3874b:
    ThrowNullReferenceException();
  }
  bVar2 = true;
  if ((pPVar1->fields).IsLocal == false) {
    bVar2 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_AlwaysAllowMaster.method);
    if (bVar2) {
      pPVar1 = (__this->fields)._player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_05e3874b;
      bVar2 = Photon_Realtime_Player__get_IsMasterClient(pPVar1,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
    bVar2 = false;
  }
  return bVar2;
}


// Anticheat.BaseEventFilter$$CheckEvent
// il2cpp: bool Anticheat_BaseEventFilter__CheckEvent (Anticheat_BaseEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x5e38750

bool Anticheat_BaseEventFilter__CheckEvent
               (Anticheat_BaseEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool bVar1;
  Utility_RateLimit_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (Il2CppMethodInitialized_0754858b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_PhotonEventType);
    il2cpp_codegen_initialize_runtime_metadata(&"sending too many ");
    il2cpp_codegen_initialize_runtime_metadata(&" events");
    Il2CppMethodInitialized_0754858b = '\x01';
  }
  __this_00 = (*(__this->klass->vtable)._4_get_TotalRateLimit.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_TotalRateLimit.method);
  if (__this_00 == (Utility_RateLimit_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Utility_RateLimit__Use(__this_00,1,(MethodInfo *)0x0);
  if (!bVar1) {
    player = (__this->fields)._player;
    local_30.klass = (System_Enum_c *)TypeInfo_Anticheat_PhotonEventType;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = (__this->fields)._eventType;
    pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pSVar2 = System_String__Concat_5301f10
                       ("sending too many ",pSVar2," events",(MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    Anticheat_AnticheatManager__KickPlayer(player,false,pSVar2,method_00);
  }
  return bVar1;
}


