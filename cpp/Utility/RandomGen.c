// Type: Utility.RandomGen
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/RandomGen.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/RandomGen.cs
// --------------------------------

// Utility.RandomGen$$GetRandomBool
// il2cpp: bool Utility_RandomGen__GetRandomBool (const MethodInfo* method);
// 0x18233e720

bool Utility_RandomGen__GetRandomBool(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return 0.5 < fVar1;
}


// Utility.RandomGen$$GetRandomSign
// il2cpp: float Utility_RandomGen__GetRandomSign (const MethodInfo* method);
// 0x18233e800

float Utility_RandomGen__GetRandomSign(MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  if (0.5 < fVar1) {
    return 1.0;
  }
  return -1.0;
}


// Utility.RandomGen$$Roll
// il2cpp: bool Utility_RandomGen__Roll (float probability, const MethodInfo* method);
// 0x18233e840

bool Utility_RandomGen__Roll(float probability,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Random__Range(0.0,1.0,(MethodInfo *)0x0);
  return fVar1 < probability;
}


// Utility.RandomGen$$GetRandomDirection
// il2cpp: UnityEngine_Vector3_o Utility_RandomGen__GetRandomDirection (bool _flat, const MethodInfo* method);
// 0x18233e750

UnityEngine_Vector3_o *
Utility_RandomGen__GetRandomDirection
          (UnityEngine_Vector3_o *__return_storage_ptr__,bool _flat,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Vector3_o local_18;
  
  local_28.fields.x = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  local_28.fields.y = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  local_28.fields.z = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  if (_flat) {
    local_28.fields.y = 0.0;
  }
  pUVar3 = UnityEngine_Vector3__get_normalized(&local_18,&local_28,(MethodInfo *)0x0);
  fVar2 = (pUVar3->fields).y;
  fVar1 = (pUVar3->fields).z;
  (__return_storage_ptr__->fields).x = (pUVar3->fields).x;
  (__return_storage_ptr__->fields).y = fVar2;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Utility.RandomGen$$ChooseRandom<object>
// il2cpp: Il2CppObject* Utility_RandomGen__ChooseRandom_object_ (System_Collections_Generic_List_T__o* items, const MethodInfo_732DC0* method);
// 0x180732dc0

Il2CppObject *
Utility_RandomGen__ChooseRandom_object_(System_Collections_Generic_List_T__o *items,MethodInfo_732DC0 *method)

{
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_732DC0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    index = UnityEngine_Random__RandomRangeInt(0,(items->fields)._size,(MethodInfo *)0x0);
    pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)items,index,
                        (MethodInfo_92B830 *)
                        method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// Utility.RandomGen$$ChooseRandom<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, const MethodInfo_732C90* method);
// 0x180732c90

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Utility_RandomGen__ChooseRandom___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          System_Collections_Generic_List_T__o *items,MethodInfo_732C90 *method)

{
  void *source;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  int32_t maxExclusive;
  ulonglong uVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar6;
  ulonglong size;
  int32_t local_res8 [8];
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [2];
  int32_t *local_48;
  void *local_40;
  
  if (method->rgctx_data == (MethodInfo_732C90_RGCTXs *)0x0) {
    auStack_80[0] = 0x180732cba;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_3_T->_2).stack_slot_size;
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x180732ce5;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_48 + lVar4);
  if (__return_storage_ptr__ != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)0x0) {
    pMVar1 = method->rgctx_data->_1_System_Collections_Generic_List_T__get_Count;
    pIVar2 = pMVar1->methodPointer;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d03;
    maxExclusive = (*pIVar2)(__return_storage_ptr__,pMVar1);
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d0f;
    local_res8[0] = UnityEngine_Random__RandomRangeInt(0,maxExclusive,(MethodInfo *)0x0);
    local_40 = source;
    local_48 = local_res8;
    pMVar1 = method->rgctx_data->_2_System_Collections_Generic_List_T__get_Item;
    *(void **)((longlong)auStack_58 + lVar4) = source;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d3c;
    (*pIVar3)(pIVar2,pMVar1,__return_storage_ptr__,&local_48,*(void **)((longlong)auStack_58 + lVar4));
    *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d4a;
    pUVar6 = memcpy(items,source,size);
    return pUVar6;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar4) = 0x180732d5c;
  ThrowNullReferenceException();
}


