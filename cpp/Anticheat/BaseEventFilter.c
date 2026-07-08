// Type: Anticheat.BaseEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/BaseEventFilter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Anticheat/PhotonEvents/BaseEventFilter.cs  [CHANGED since prior version]
// --------------------------------

// Anticheat.BaseEventFilter$$get_TotalRateLimit
// il2cpp: Utility_RateLimit_o* Anticheat_BaseEventFilter__get_TotalRateLimit (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x41be9a0

Utility_RateLimit_o *
Anticheat_BaseEventFilter__get_TotalRateLimit
          (Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Utility_RateLimit_o *__this_00;
  
  if (DAT_05704dac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RateLimit);
    DAT_05704dac = '\x01';
  }
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_glue(TypeInfo_RateLimit);
  Utility_RateLimit___ctor(__this_00,100,1.0,(MethodInfo *)0x0);
  return __this_00;
}


// Anticheat.BaseEventFilter$$get_AlwaysAllowMaster
// il2cpp: bool Anticheat_BaseEventFilter__get_AlwaysAllowMaster (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x41be9f0

bool_conflict
Anticheat_BaseEventFilter__get_AlwaysAllowMaster
          (Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Anticheat.BaseEventFilter$$.ctor
// il2cpp: void Anticheat_BaseEventFilter___ctor (Anticheat_BaseEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x41bea00

void Anticheat_BaseEventFilter___ctor
               (Anticheat_BaseEventFilter_o *__this,Photon_Realtime_Player_o *player,
               int32_t eventType,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  il2cpp_runtime_glue(&__this->fields,player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.BaseEventFilter$$IsMasterOrLocal
// il2cpp: bool Anticheat_BaseEventFilter__IsMasterOrLocal (Anticheat_BaseEventFilter_o* __this, const MethodInfo* method);
// 0x41bea30

bool_conflict
Anticheat_BaseEventFilter__IsMasterOrLocal(Anticheat_BaseEventFilter_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  char cVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  undefined8 unaff_RBP;
  
  pPVar1 = (__this->fields)._player;
  if (pPVar1 == (Photon_Realtime_Player_o *)0x0) {
LAB_041bea7b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((char)(pPVar1->fields).IsLocal == '\0') {
    cVar2 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)();
    if (cVar2 != '\0') {
      pPVar1 = (__this->fields)._player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto LAB_041bea7b;
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
// 0x41bea80

bool_conflict
Anticheat_BaseEventFilter__CheckEvent
          (Anticheat_BaseEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  Utility_RateLimit_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  bool_conflict bVar3;
  undefined8 unaff_RBX;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (DAT_05704dad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonEventType);
    il2cpp_init_method_metadata(&"sending too many ");
    il2cpp_init_method_metadata(&" events");
    DAT_05704dad = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (Utility_RateLimit_o *)
              (*(__this->klass->vtable)._4_get_TotalRateLimit.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_TotalRateLimit.method,method);
  if (__this_00 != (Utility_RateLimit_o *)0x0) {
    bVar1 = Utility_RateLimit__Use(__this_00,1,(MethodInfo *)0x0);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((char)bVar1 == '\0') {
      player = (__this->fields)._player;
      local_30.klass = TypeInfo_PhotonEventType;
      local_30.monitor = (void *)0xffffffffffffffff;
      local_20 = (__this->fields)._eventType;
      pSVar2 = System_Enum__ToString(&local_30,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat("sending too many ",pSVar2," events",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = 0;
      Anticheat_AnticheatManager__KickPlayer(player,0,pSVar2,(MethodInfo *)0x0);
    }
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


