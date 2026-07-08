// Type: Anticheat.InstantiateEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Anticheat/InstantiateEventFilter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs  [CHANGED since prior version]
// --------------------------------

// Anticheat.InstantiateEventFilter$$.ctor
// il2cpp: void Anticheat_InstantiateEventFilter___ctor (Anticheat_InstantiateEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x41beb90

void Anticheat_InstantiateEventFilter___ctor
               (Anticheat_InstantiateEventFilter_o *__this,Photon_Realtime_Player_o *player,
               int32_t eventType,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  il2cpp_runtime_glue(&__this->fields,player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.InstantiateEventFilter$$CheckEvent
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckEvent (Anticheat_InstantiateEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x41bebc0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Anticheat_InstantiateEventFilter__CheckEvent
          (Anticheat_InstantiateEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool_conflict bVar5;
  long lVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  int iVar8;
  System_Object_array *data_00;
  long lVar9;
  System_String_c *pSVar10;
  System_String_o *__this_00;
  Photon_Realtime_Player_o *pPVar6;
  
  if (DAT_05704dae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    DAT_05704dae = '\x01';
    method = extraout_RDX;
  }
  pPVar6 = (__this->fields)._player;
  if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
    if ((char)(pPVar6->fields).IsLocal != '\0') {
LAB_041bebfd:
      return (bool_conflict)CONCAT71((int7)((ulong)pPVar6 >> 8),1);
    }
    data_00 = (System_Object_array *)(__this->klass->vtable)._5_get_AlwaysAllowMaster.method;
    cVar3 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)(__this,data_00,method);
    method_00 = extraout_RDX_00;
    if (cVar3 != '\0') {
      pPVar6 = (__this->fields)._player;
      if (pPVar6 == (Photon_Realtime_Player_o *)0x0) goto LAB_041bed81;
      data_00 = (System_Object_array *)0x0;
      uVar4 = Photon_Realtime_Player__get_IsMasterClient(pPVar6,(MethodInfo *)0x0);
      pPVar6 = (Photon_Realtime_Player_o *)(ulong)uVar4;
      method_00 = extraout_RDX_01;
      if ((char)uVar4 != '\0') goto LAB_041bebfd;
    }
    bVar5 = Anticheat_BaseEventFilter__CheckEvent
                      ((Anticheat_BaseEventFilter_o *)__this,data_00,method_00);
    if ((char)bVar5 == '\0') {
      return 0;
    }
    if (data != (System_Object_array *)0x0) {
      if ((int)data->max_length == 0) {
LAB_041bed86:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00 = (System_String_o *)data->m_Items[0];
      if (__this_00 != (System_String_o *)0x0) {
        pSVar10 = DAT_057110b0;
        if (__this_00->klass != DAT_057110b0) {
LAB_041bed91:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_00,pSVar10);
        }
        System_String__ToLower(__this_00,(MethodInfo *)0x0);
        pSVar10 = TypeInfo_int;
        if ((uint)data->max_length < 2) goto LAB_041bed86;
        __this_00 = (System_String_o *)data->m_Items[1];
        if (__this_00 == (System_String_o *)0x0) {
          lVar7 = 0;
          pPVar6 = (__this->fields)._player;
        }
        else {
          lVar7 = il2cpp_runtime_glue(__this_00);
          if (lVar7 == 0) goto LAB_041bed91;
          pPVar6 = (__this->fields)._player;
        }
        if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
          iVar8 = (pPVar6->fields).actorNumber;
          if (DAT_05704db0 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
            DAT_05704db0 = '\x01';
            iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
          }
          if (lVar7 != 0) {
            iVar1 = *(int *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 8);
            iVar8 = iVar8 * iVar1;
            lVar9 = 0;
            pPVar6 = (Photon_Realtime_Player_o *)0x0;
            while (lVar9 < *(int *)(lVar7 + 0x18)) {
              iVar2 = *(int *)(lVar7 + 0x20 + lVar9 * 4);
              if (iVar2 <= iVar8) {
                return 0;
              }
              lVar9 = lVar9 + 1;
              if (iVar1 + iVar8 <= iVar2) {
                return 0;
              }
            }
            goto LAB_041bebfd;
          }
        }
      }
    }
  }
LAB_041bed81:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.InstantiateEventFilter$$CheckRateLimit
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckRateLimit (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, Utility_RateLimit_o* limit, int32_t count, const MethodInfo* method);
// 0x41bee50

bool_conflict
Anticheat_InstantiateEventFilter__CheckRateLimit
          (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,
          Utility_RateLimit_o *limit,int32_t count,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  System_String_o *reason;
  bool_conflict bVar2;
  
  if (DAT_05704daf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnticheatManager);
    il2cpp_init_method_metadata(&"instantiate spamming: ");
    DAT_05704daf = '\x01';
  }
  if (limit != (Utility_RateLimit_o *)0x0) {
    bVar1 = Utility_RateLimit__Use(limit,count,(MethodInfo *)0x0);
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)limit >> 8),1);
    if ((char)bVar1 == '\0') {
      player = (__this->fields)._player;
      reason = System_String__Concat("instantiate spamming: ",name,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = 0;
      Anticheat_AnticheatManager__KickPlayer(player,0,reason,(MethodInfo *)0x0);
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Anticheat.InstantiateEventFilter$$CheckInstantiate
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckInstantiate (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x41bee40

bool_conflict
Anticheat_InstantiateEventFilter__CheckInstantiate
          (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Anticheat.InstantiateEventFilter$$CheckViewIds
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckViewIds (Anticheat_InstantiateEventFilter_o* __this, int32_t senderId, System_Int32_array* viewIds, const MethodInfo* method);
// 0x41beda0

bool_conflict
Anticheat_InstantiateEventFilter__CheckViewIds
          (Anticheat_InstantiateEventFilter_o *__this,int32_t senderId,System_Int32_array *viewIds,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (DAT_05704db0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704db0 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (viewIds == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = *(int *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 8);
  iVar3 = senderId * iVar2;
  lVar4 = 0;
  do {
    if ((int)viewIds->max_length <= (int)lVar4) {
      return 1;
    }
    piVar1 = viewIds->m_Items + lVar4;
  } while ((iVar3 < *piVar1) && (lVar4 = lVar4 + 1, *piVar1 < iVar2 + iVar3));
  return 0;
}


