// Type: Anticheat.InstantiateEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/InstantiateEventFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs
// --------------------------------

// Anticheat.InstantiateEventFilter$$.ctor
// il2cpp: void Anticheat_InstantiateEventFilter___ctor (Anticheat_InstantiateEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x44dc510

void Anticheat_InstantiateEventFilter___ctor
               (Anticheat_InstantiateEventFilter_o *__this,Photon_Realtime_Player_o *player,int32_t eventType,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  il2cpp_runtime_helper_022b4080(&__this->fields,player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.InstantiateEventFilter$$CheckEvent
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckEvent (Anticheat_InstantiateEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x44dc540

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
  undefined8 uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  long extraout_RDX_02;
  int iVar9;
  System_Object_array *pSVar10;
  long lVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *unaff_R12;
  Photon_Realtime_Player_o *pPVar6;
  
  if (g_data_057aeb9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    g_data_057aeb9e = '\x01';
    method = extraout_RDX;
  }
  pPVar6 = (__this->fields)._player;
  if (pPVar6 == (Photon_Realtime_Player_o *)0x0) {
label_044dc701:
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = data;
  }
  else {
    if ((char)(pPVar6->fields).IsLocal != '\0') goto label_044dc57d;
    pSVar10 = (System_Object_array *)(__this->klass->vtable)._5_get_AlwaysAllowMaster.method;
    cVar3 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)(__this,pSVar10,method);
    method_00 = extraout_RDX_00;
    if (cVar3 != '\0') {
      pPVar6 = (__this->fields)._player;
      if (pPVar6 == (Photon_Realtime_Player_o *)0x0) goto label_044dc701;
      pSVar10 = (System_Object_array *)0x0;
      uVar4 = Photon_Realtime_Player__get_IsMasterClient(pPVar6,(MethodInfo *)0x0);
      pPVar6 = (Photon_Realtime_Player_o *)(ulong)uVar4;
      method_00 = extraout_RDX_01;
      if ((char)uVar4 != '\0') goto label_044dc57d;
    }
    bVar5 = Anticheat_BaseEventFilter__CheckEvent((Anticheat_BaseEventFilter_o *)__this,pSVar10,method_00);
    if ((char)bVar5 == '\0') {
      return 0;
    }
    if (data == (System_Object_array *)0x0) goto label_044dc701;
    pSVar10 = data;
    if ((int)data->max_length != 0) {
      pSVar10 = (System_Object_array *)data->m_Items[0];
      if (pSVar10 != (System_Object_array *)0x0) {
        pIVar12 = g_data_057b9c00;
        if ((pSVar10->obj).klass != g_data_057b9c00) goto label_044dc711;
        System_String__ToLower((System_String_o *)pSVar10,(MethodInfo *)0x0);
        pIVar12 = TypeInfo_int;
        pSVar10 = data;
        if ((uint)data->max_length < 2) goto label_044dc706;
        pSVar10 = (System_Object_array *)data->m_Items[1];
        if (pSVar10 == (System_Object_array *)0x0) {
          lVar7 = 0;
          pPVar6 = (__this->fields)._player;
        }
        else {
          lVar7 = il2cpp_runtime_helper_023051f0(pSVar10);
          if (lVar7 == 0) goto label_044dc711;
          pPVar6 = (__this->fields)._player;
          unaff_R12 = pIVar12;
        }
        data = pSVar10;
        if (pPVar6 != (Photon_Realtime_Player_o *)0x0) {
          iVar9 = (pPVar6->fields).actorNumber;
          if (g_data_057aeba0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
            g_data_057aeba0 = '\x01';
            iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          data = (System_Object_array *)&TypeInfo_PhotonNetwork;
          if (lVar7 != 0) {
            iVar1 = *(int *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 8);
            iVar9 = iVar9 * iVar1;
            lVar11 = 0;
            pPVar6 = (Photon_Realtime_Player_o *)0x0;
            while (lVar11 < *(int *)(lVar7 + 0x18)) {
              iVar2 = *(int *)(lVar7 + 0x20 + lVar11 * 4);
              if (iVar2 <= iVar9) {
                return 0;
              }
              lVar11 = lVar11 + 1;
              if (iVar1 + iVar9 <= iVar2) {
                return 0;
              }
            }
label_044dc57d:
            return (bool_conflict)CONCAT71((int7)((ulong)pPVar6 >> 8),1);
          }
        }
      }
      goto label_044dc701;
    }
  }
label_044dc706:
  pIVar12 = unaff_R12;
  il2cpp_runtime_helper_022b2ca0();
label_044dc711:
  iVar9 = (int)pIVar12;
  il2cpp_runtime_helper_022b2fd0(pSVar10);
  if (g_data_057aeba0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aeba0 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (extraout_RDX_02 != 0) {
    iVar1 = *(int *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 8);
    iVar9 = iVar9 * iVar1;
    lVar7 = 0;
    do {
      if (*(int *)(extraout_RDX_02 + 0x18) <= (int)lVar7) {
        return 1;
      }
      iVar2 = *(int *)(extraout_RDX_02 + 0x20 + lVar7 * 4);
    } while ((iVar9 < iVar2) && (lVar7 = lVar7 + 1, iVar2 < iVar1 + iVar9));
    return 0;
  }
  uVar8 = il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)CONCAT71((int7)((ulong)uVar8 >> 8),1);
}


// Anticheat.InstantiateEventFilter$$CheckRateLimit
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckRateLimit (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, Utility_RateLimit_o* limit, int32_t count, const MethodInfo* method);
// 0x44dc7d0

bool_conflict
Anticheat_InstantiateEventFilter__CheckRateLimit
          (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,Utility_RateLimit_o *limit,
          int32_t count,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  uint16_t uVar1;
  bool_conflict bVar2;
  System_String_o *reason;
  bool_conflict bVar3;
  int index;
  uint uVar4;
  Anticheat_InstantiateEventFilter_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057aeb9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
    __this_00 = (Anticheat_InstantiateEventFilter_o *)&"instantiate spamming: ";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeb9f = '\x01';
  }
  if (limit == (Utility_RateLimit_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (__this_00 == (Anticheat_InstantiateEventFilter_o *)0x0) {
      uVar4 = 0;
    }
    else if (*(int *)&(__this_00->fields)._player < 1) {
      uVar4 = 0x811c9dc5;
    }
    else {
      index = 0;
      uVar4 = 0x811c9dc5;
      do {
        uVar1 = System_String__get_Chars((System_String_o *)__this_00,index,(MethodInfo *)0x0);
        uVar4 = (uVar1 ^ uVar4) * 0x1000193;
        index = index + 1;
      } while (index < *(int *)&(__this_00->fields)._player);
    }
    return uVar4;
  }
  bVar2 = Utility_RateLimit__Use(limit,count,(MethodInfo *)0x0);
  bVar3 = (bool_conflict)CONCAT71((int7)((ulong)limit >> 8),1);
  if ((char)bVar2 == '\0') {
    player = (__this->fields)._player;
    reason = System_String__Concat_3ae5ba0("instantiate spamming: ",name,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = 0;
    Anticheat_AnticheatManager__KickPlayer(player,0,reason,(MethodInfo *)0x0);
  }
  return bVar3;
}


// Anticheat.InstantiateEventFilter$$CheckInstantiate
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckInstantiate (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44dc7c0

bool_conflict
Anticheat_InstantiateEventFilter__CheckInstantiate
          (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Anticheat.InstantiateEventFilter$$CheckViewIds
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckViewIds (Anticheat_InstantiateEventFilter_o* __this, int32_t senderId, System_Int32_array* viewIds, const MethodInfo* method);
// 0x44dc720

bool_conflict
Anticheat_InstantiateEventFilter__CheckViewIds
          (Anticheat_InstantiateEventFilter_o *__this,int32_t senderId,System_Int32_array *viewIds,
          MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  
  if (g_data_057aeba0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057aeba0 = '\x01';
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (viewIds == (System_Int32_array *)0x0) {
    uVar3 = il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  iVar2 = *(int *)(*(long *)(TypeInfo_PhotonNetwork + 0xb8) + 8);
  iVar4 = senderId * iVar2;
  lVar5 = 0;
  do {
    if ((int)viewIds->max_length <= (int)lVar5) {
      return 1;
    }
    piVar1 = viewIds->m_Items + lVar5;
  } while ((iVar4 < *piVar1) && (lVar5 = lVar5 + 1, *piVar1 < iVar2 + iVar4));
  return 0;
}


