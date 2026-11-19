// Type: Anticheat.InstantiateEventFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/InstantiateEventFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/PhotonEvents/InstantiateEventFilter.cs
// --------------------------------

// Anticheat.InstantiateEventFilter$$.ctor
// il2cpp: void Anticheat_InstantiateEventFilter___ctor (Anticheat_InstantiateEventFilter_o* __this, Photon_Realtime_Player_o* player, int32_t eventType, const MethodInfo* method);
// 0x5e2c3f0

void Anticheat_InstantiateEventFilter___ctor
               (Anticheat_InstantiateEventFilter_o *__this,Photon_Realtime_Player_o *player,int32_t eventType,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._player);
  (__this->fields)._eventType = eventType;
  return;
}


// Anticheat.InstantiateEventFilter$$CheckEvent
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckEvent (Anticheat_InstantiateEventFilter_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x5e38860
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e38966: jmp 0x5e38a4e
// asm:   0x5e389a3: test r14, r14
// asm:   0x5e389a6: je 0x5e38a4e
// asm:   0x5e38a58: mov rdi, rbp
// asm:   0x5e38a5b: mov rsi, r15

bool Anticheat_InstantiateEventFilter__CheckEvent
               (Anticheat_InstantiateEventFilter_o *__this,System_Object_array *data,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  Photon_Realtime_Player_o *pPVar4;
  int iVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int iVar9;
  int iVar10;
  System_Object_array *data_00;
  Il2CppClass *pIVar11;
  System_String_o *__this_00;
  
  if (Il2CppMethodInitialized_0754858c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    Il2CppMethodInitialized_0754858c = '\x01';
  }
  pPVar4 = (__this->fields)._player;
  if (pPVar4 == (Photon_Realtime_Player_o *)0x0) goto label_05e38a4e;
  if ((pPVar4->fields).IsLocal != false) {
    return true;
  }
  data_00 = (System_Object_array *)(__this->klass->vtable)._5_get_AlwaysAllowMaster.method;
  bVar6 = (*(__this->klass->vtable)._5_get_AlwaysAllowMaster.methodPtr)(__this,(MethodInfo *)data_00);
  method_00 = extraout_RDX;
  if (bVar6) {
    pPVar4 = (__this->fields)._player;
    if (pPVar4 == (Photon_Realtime_Player_o *)0x0) goto label_05e38a4e;
    data_00 = (System_Object_array *)0x0;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(pPVar4,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if (bVar6) {
      return true;
    }
  }
  bVar6 = Anticheat_BaseEventFilter__CheckEvent((Anticheat_BaseEventFilter_o *)__this,data_00,method_00);
  if (bVar6) {
    if (data == (System_Object_array *)0x0) goto label_05e38a4e;
    if ((int)data->max_length == 0) {
label_05e38a53:
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (System_String_o *)data->m_Items[0];
    if (__this_00 == (System_String_o *)0x0) goto label_05e38a4e;
    pIVar11 = g_data_07556758;
    if ((Il2CppClass *)__this_00->klass != g_data_07556758) {
label_05e38a5e:
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,pIVar11);
    }
    System_String__ToLower(__this_00,(MethodInfo *)0x0);
    pIVar11 = TypeInfo_int_array;
    if ((data->max_length & 0xfffffffe) == 0) goto label_05e38a53;
    __this_00 = (System_String_o *)data->m_Items[1];
    if (__this_00 == (System_String_o *)0x0) {
      pIVar7 = (Il2CppObject *)0x0;
      pPVar4 = (__this->fields)._player;
    }
    else {
      pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_00,TypeInfo_int_array);
      if (pIVar7 == (Il2CppObject *)0x0) goto label_05e38a5e;
      pPVar4 = (__this->fields)._player;
    }
    if (pPVar4 == (Photon_Realtime_Player_o *)0x0) {
label_05e38a4e:
      ThrowNullReferenceException();
    }
    iVar9 = (pPVar4->fields).actorNumber;
    if (Il2CppMethodInitialized_0754858e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      Il2CppMethodInitialized_0754858e = '\x01';
      uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05e38a4e;
    iVar2 = *(int *)&pIVar7[1].monitor;
    if (0 < iVar2) {
      iVar8 = *(int *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 8);
      iVar9 = iVar9 * iVar8;
      if (*(int *)&pIVar7[2].klass <= iVar9) {
        return false;
      }
      iVar8 = iVar8 + iVar9;
      if (iVar8 <= *(int *)&pIVar7[2].klass) {
        return false;
      }
      iVar5 = 1;
      do {
        iVar10 = iVar5;
        if ((iVar2 == iVar10) || (iVar3 = *(int *)((long)&pIVar7[2].klass + (long)iVar10 * 4), iVar3 <= iVar9)
           ) break;
        iVar5 = iVar10 + 1;
      } while (iVar3 < iVar8);
      if (iVar10 < iVar2) goto label_05e389fd;
    }
    bVar6 = true;
  }
  else {
label_05e389fd:
    bVar6 = false;
  }
  return bVar6;
}


// Anticheat.InstantiateEventFilter$$CheckRateLimit
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckRateLimit (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, Utility_RateLimit_o* limit, int32_t count, const MethodInfo* method);
// 0x5e38b50

bool Anticheat_InstantiateEventFilter__CheckRateLimit
               (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,Utility_RateLimit_o *limit,
               int32_t count,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool bVar1;
  System_String_o *reason;
  int32_t iVar2;
  undefined4 in_register_0000000c;
  
  iVar2 = count;
  if (Il2CppMethodInitialized_0754858d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_AnticheatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"instantiate spamming: ");
    Il2CppMethodInitialized_0754858d = '\x01';
  }
  if (limit == (Utility_RateLimit_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Utility_RateLimit__Use(limit,count,(MethodInfo *)0x0);
  if (!bVar1) {
    player = (__this->fields)._player;
    reason = System_String__Concat_52f0320("instantiate spamming: ",name,(MethodInfo *)0x0);
    if ((TypeInfo_Anticheat_AnticheatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_AnticheatManager);
    }
    Anticheat_AnticheatManager__KickPlayer
              (player,false,reason,(MethodInfo *)CONCAT44(in_register_0000000c,iVar2));
  }
  return bVar1;
}


// Anticheat.InstantiateEventFilter$$CheckInstantiate
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckInstantiate (Anticheat_InstantiateEventFilter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5e38b40

bool Anticheat_InstantiateEventFilter__CheckInstantiate
               (Anticheat_InstantiateEventFilter_o *__this,System_String_o *name,MethodInfo *method)

{
  return true;
}


// Anticheat.InstantiateEventFilter$$CheckViewIds
// il2cpp: bool Anticheat_InstantiateEventFilter__CheckViewIds (Anticheat_InstantiateEventFilter_o* __this, int32_t senderId, System_Int32_array* viewIds, const MethodInfo* method);
// 0x5e38a70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e38a99: test rbx, rbx
// asm:   0x5e38a9c: je 0x5e38b2d
// asm:   0x5e38ace: nop 

bool Anticheat_InstantiateEventFilter__CheckViewIds
               (Anticheat_InstantiateEventFilter_o *__this,int32_t senderId,System_Int32_array *viewIds,
               MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (Il2CppMethodInitialized_0754858e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754858e = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (viewIds == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (int)viewIds->max_length;
  if (iVar2 < 1) {
    return true;
  }
  iVar5 = *(int *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 8);
  iVar6 = senderId * iVar5;
  bVar4 = false;
  if ((iVar6 < viewIds->m_Items[0]) && (iVar5 = iVar5 + iVar6, viewIds->m_Items[0] < iVar5)) {
    iVar3 = 1;
    do {
      iVar7 = iVar3;
      if ((iVar2 == iVar7) || (viewIds->m_Items[iVar7] <= iVar6)) break;
      iVar3 = iVar7 + 1;
    } while (viewIds->m_Items[iVar7] < iVar5);
    bVar4 = iVar2 <= iVar7;
  }
  return bVar4;
}


