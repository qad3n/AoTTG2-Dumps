// Type: Anticheat.InstantiateEventFilter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/InstantiateEventFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs
// --------------------------------

// Anticheat.InstantiateEventFilter$$.ctor
// il2cpp: void Anticheat_InstantiateEventFilter___ctor (Anticheat_InstantiateEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x1808fb340

void
Anticheat_InstantiateEventFilter___ctor(Anticheat_InstantiateEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = table;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._player,table);
  (__this->fields)._eventType = record;
  return;
}


// Anticheat.InstantiateEventFilter$$CheckEvent
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckEvent (Anticheat_InstantiateEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x18236b4f0

bool Anticheat_InstantiateEventFilter__CheckEvent
               (Anticheat_InstantiateEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  bool bVar4;
  Utility_RateLimit_o *__this_00;
  System_String_o *__this_01;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  uint uVar7;
  int iVar8;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184347ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_184347ad3 = '\x01';
  }
  pPVar2 = (__this->fields)._player;
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    if ((pPVar2->fields).IsLocal != false) {
      return true;
    }
    bVar4 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_AlwaysAllowMaster.method);
    if (bVar4) {
      pPVar2 = (__this->fields)._player;
      if (pPVar2 == (Photon_Realtime_Player_o *)0x0) goto label_18236b777;
      bVar4 = Photon_Realtime_Player__get_IsMasterClient(pPVar2,(MethodInfo *)0x0);
      if (bVar4) {
        return true;
      }
    }
    if (Il2CppMethodInitialized_184347ad2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_PhotonEventType);
      il2cpp_codegen_initialize_runtime_metadata(&"sending too many ");
      il2cpp_codegen_initialize_runtime_metadata(&" events");
      Il2CppMethodInitialized_184347ad2 = '\x01';
    }
    __this_00 = (*(__this->klass->vtable)._4_get_TotalRateLimit.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_TotalRateLimit.method);
    if (__this_00 != (Utility_RateLimit_o *)0x0) {
      bVar4 = Utility_RateLimit__Use(__this_00,1,(MethodInfo *)0x0);
      if (!bVar4) {
        pPVar2 = (__this->fields)._player;
        local_28.klass = (System_Enum_c *)TypeInfo_Anticheat_PhotonEventType;
        local_18 = (__this->fields)._eventType;
        local_28.monitor = &g_data_ffffffffffffffff;
        pSVar6 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_1969b70
                           ("sending too many ",pSVar6," events",(MethodInfo *)0x0);
        if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
        }
        Anticheat_AnticheatManager__KickPlayer(pPVar2,false,pSVar6,(MethodInfo *)0x0);
        return false;
      }
      if (data != (System_Object_array *)0x0) {
        if ((int)data->max_length == 0) {
label_18236b78f:
          ThrowIndexOutOfRangeException();
        }
        pSVar6 = (System_String_o *)data->m_Items[0];
        if (pSVar6 != (System_String_o *)0x0) {
          __this_01 = (System_String_o *)0x0;
          if (pSVar6->klass == g_data_184354e50) {
            __this_01 = pSVar6;
          }
          if (__this_01 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          System_String__ToLower(__this_01,(MethodInfo *)0x0);
          pIVar3 = TypeInfo_int_array;
          if ((uint)data->max_length < 2) goto label_18236b78f;
          obj = data->m_Items[1];
          if (obj == (Il2CppObject *)0x0) {
            pIVar5 = (Il2CppObject *)0x0;
          }
          else {
            pIVar5 = il2cpp_vm_Object_IsInst(obj,TypeInfo_int_array);
            if (pIVar5 == (Il2CppObject *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar3);
            }
          }
          pPVar2 = (__this->fields)._player;
          if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
            iVar8 = (pPVar2->fields).actorNumber;
            if (Il2CppMethodInitialized_184347ad5 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
              Il2CppMethodInitialized_184347ad5 = '\x01';
            }
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            if (pIVar5 != (Il2CppObject *)0x0) {
              uVar7 = 0;
              iVar8 = iVar8 * TypeInfo_Photon_Pun_PhotonNetwork->static_fields->MAX_VIEW_IDS;
              while( true ) {
                if ((int)*(uint *)&pIVar5[1].monitor <= (int)uVar7) {
                  return true;
                }
                if (*(uint *)&pIVar5[1].monitor <= uVar7) break;
                iVar1 = *(int *)((longlong)&pIVar5[2].klass + (longlong)(int)uVar7 * 4);
                if (iVar1 <= iVar8) {
                  return false;
                }
                if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->MAX_VIEW_IDS + iVar8 <= iVar1) {
                  return false;
                }
                uVar7 = uVar7 + 1;
              }
              goto label_18236b78f;
            }
          }
        }
      }
    }
  }
label_18236b777:
  ThrowNullReferenceException();
}


// Anticheat.InstantiateEventFilter$$CheckRateLimit
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckRateLimit (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, Utility_RateLimit_o* limit, int32_t count, const MethodInfo* method);
// 0x18236b7a0

bool Anticheat_InstantiateEventFilter__CheckRateLimit
               (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,Utility_RateLimit_o *limit,
               int32_t count,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool bVar1;
  System_String_o *reason;
  
  if (Il2CppMethodInitialized_184347ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"instantiate spamming: ");
    Il2CppMethodInitialized_184347ad4 = '\x01';
  }
  if (limit != (Utility_RateLimit_o *)0x0) {
    bVar1 = Utility_RateLimit__Use(limit,count,(MethodInfo *)0x0);
    if (!bVar1) {
      player = (__this->fields)._player;
      reason = System_String__Concat_1969e50("instantiate spamming: ",name,(MethodInfo *)0x0);
      if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
      }
      Anticheat_AnticheatManager__KickPlayer(player,false,reason,(MethodInfo *)0x0);
      return false;
    }
    return true;
  }
  ThrowNullReferenceException();
}


// Anticheat.InstantiateEventFilter$$CheckInstantiate
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckInstantiate (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1808ed110

bool
Anticheat_InstantiateEventFilter__CheckInstantiate(Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, MethodInfo* method)

{
  return true;
}


// Anticheat.InstantiateEventFilter$$CheckViewIds
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckViewIds (Anticheat_InstantiateEventFilter_o* __this, int32_t senderId, System_Int32_array* viewIds, const MethodInfo* method);
// 0x18236b850

bool Anticheat_InstantiateEventFilter__CheckViewIds
               (Anticheat_InstantiateEventFilter_o *__this,int32_t senderId,System_Int32_array *viewIds,
               MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_184347ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184347ad5 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (viewIds != (System_Int32_array *)0x0) {
    uVar1 = (uint)viewIds->max_length;
    iVar3 = senderId * TypeInfo_Photon_Pun_PhotonNetwork->static_fields->MAX_VIEW_IDS;
    uVar2 = 0;
    while( true ) {
      if ((int)uVar1 <= (int)uVar2) {
        return true;
      }
      if (uVar1 <= uVar2) break;
      if ((viewIds->m_Items[(int)uVar2] <= iVar3) ||
         (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->MAX_VIEW_IDS + iVar3 <=
          viewIds->m_Items[(int)uVar2])) {
        return false;
      }
      uVar2 = uVar2 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


