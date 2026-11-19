// Type: Utility.Util
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Utility/Util.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Util.cs
// --------------------------------

// Utility.Util.<>c$$.cctor
// il2cpp: void Utility_Util___c___cctor (const MethodInfo* method);
// 0x5df41f0

void Utility_Util___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548310 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    Il2CppMethodInitialized_07548310 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Utility_Util_c->static_fields->__9 = (Utility_Util___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9);
  return;
}


// Utility.Util.<>c$$.ctor
// il2cpp: void Utility_Util___c___ctor (Utility_Util___c_o* __this, const MethodInfo* method);
// 0x5df4260

void Utility_Util___c___ctor(Utility_Util___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c$$<PascalToSentence>b__7_0
// il2cpp: System_String_o* Utility_Util___c___PascalToSentence_b__7_0 (Utility_Util___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x5df4270

System_String_o *
Utility_Util___c___PascalToSentence_b__7_0
          (Utility_Util___c_o *__this,System_Text_RegularExpressions_Match_o *m,MethodInfo *method)

{
  uint16_t c;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  uint16_t local_1c;
  uint16_t local_1a;
  
  if (Il2CppMethodInitialized_07548311 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0} {1}");
    Il2CppMethodInitialized_07548311 = '\x01';
  }
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                       ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      local_1a = System_String__get_Chars(pSVar1,0,(MethodInfo *)0x0);
      arg0 = il2cpp_vm_Object_Box(g_data_07556750,&local_1a);
      pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        c = System_String__get_Chars(pSVar1,1,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        local_1c = System_Char__ToLower_541eb90(c,(MethodInfo *)0x0);
        arg1 = il2cpp_vm_Object_Box(g_data_07556750,&local_1c);
        pSVar1 = System_String__Format_5302c50("{0} {1}",arg0,arg1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util.<>c$$<RemoveNullOrDeadShifters>b__13_0
// il2cpp: bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0 (Utility_Util___c_o* __this, Characters_BaseShifter_o* e, const MethodInfo* method);
// 0x5df4360

bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0
               (Utility_Util___c_o *__this,Characters_BaseShifter_o *e,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548312 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548312 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  bVar2 = true;
  if (bVar1) {
    if (e == (Characters_BaseShifter_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((e->fields).Dead == false) {
      return false;
    }
    bVar2 = (e->fields).TransformingToHuman == false;
  }
  return bVar2;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_0
// il2cpp: System_Nullable_int__o Utility_Util___c___GetAllTitanAgentIds_b__41_0 (Utility_Util___c_o* __this, System_Collections_Generic_KeyValuePair_float__string__o agentSize, const MethodInfo* method);
// 0x5df43d0

System_Nullable_int__o
Utility_Util___c___GetAllTitanAgentIds_b__41_0
          (Utility_Util___c_o *__this,System_Collections_Generic_KeyValuePair_float__string__o agentSize,
          MethodInfo *method)

{
  uint32_t uVar1;
  System_Nullable_int__o SVar2;
  MethodInfo *name;
  MethodInfo *pMVar3;
  
  name = (MethodInfo *)agentSize.fields.value;
  pMVar3 = name;
  if (Il2CppMethodInitialized_07548313 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548313 = '\x01';
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
    return (System_Nullable_int__o)SVar2.fields;
  }
  SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
  return (System_Nullable_int__o)SVar2.fields;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_1
// il2cpp: bool Utility_Util___c___GetAllTitanAgentIds_b__41_1 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x5df4440

bool Utility_Util___c___GetAllTitanAgentIds_b__41_1
               (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548314 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    Il2CppMethodInitialized_07548314 = '\x01';
  }
  return agentId.fields.hasValue != false;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_2
// il2cpp: int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x5df4470

int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2
                  (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  int32_t iVar1;
  System_Nullable_int__o SStack_8;
  
  SStack_8.fields = agentId.fields;
  if (Il2CppMethodInitialized_07548315 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    Il2CppMethodInitialized_07548315 = '\x01';
  }
  iVar1 = System_Nullable_int___get_Value
                    (&SStack_8,(MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
  return iVar1;
}


// Utility.Util.<>c__10<object>$$.cctor
// il2cpp: void Utility_Util___c__10_object____cctor (const MethodInfo_38887E0* method);
// 0x39887e0

void Utility_Util___c__10_object____cctor(MethodInfo_38887E0 *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  *(Il2CppObject **)pIVar1->static_fields = __this;
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields);
  return;
}


// Utility.Util.<>c__10<object>$$.ctor
// il2cpp: void Utility_Util___c__10_object____ctor (Utility_Util___c__10_T__o* __this, const MethodInfo_38888C0* method);
// 0x39888c0

void Utility_Util___c__10_object____ctor(Utility_Util___c__10_T__o *__this,MethodInfo_38888C0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__10<object>$$<RemoveNull>b__10_0
// il2cpp: bool Utility_Util___c__10_object____RemoveNull_b__10_0 (Utility_Util___c__10_T__o* __this, Il2CppObject* e, const MethodInfo_38888D0* method);
// 0x39888d0

bool Utility_Util___c__10_object____RemoveNull_b__10_0
               (Utility_Util___c__10_T__o *__this,Il2CppObject *e,MethodInfo_38888D0 *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0753e9ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e9ba = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return !bVar1;
}


// Utility.Util.<>c__11<object>$$.cctor
// il2cpp: void Utility_Util___c__11_object____cctor (const MethodInfo_3888A70* method);
// 0x3988a70

void Utility_Util___c__11_object____cctor(MethodInfo_3888A70 *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  *(Il2CppObject **)pIVar1->static_fields = __this;
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields);
  return;
}


// Utility.Util.<>c__11<object>$$.ctor
// il2cpp: void Utility_Util___c__11_object____ctor (Utility_Util___c__11_T__o* __this, const MethodInfo_3888B50* method);
// 0x3988b50

void Utility_Util___c__11_object____ctor(Utility_Util___c__11_T__o *__this,MethodInfo_3888B50 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__11<object>$$<RemoveNullOrDead>b__11_0
// il2cpp: bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0 (Utility_Util___c__11_T__o* __this, Il2CppObject* e, const MethodInfo_3888B60* method);
// 0x3988b60

bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0
               (Utility_Util___c__11_T__o *__this,Il2CppObject *e,MethodInfo_3888B60 *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0753e9bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0753e9bc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  bVar2 = true;
  if (bVar1) {
    if (e == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = *(char *)&e[7].monitor != '\0';
  }
  return bVar2;
}


// Utility.Util.<>c__12<object>$$.cctor
// il2cpp: void Utility_Util___c__12_object____cctor (const MethodInfo_3888D90* method);
// 0x3988d90

void Utility_Util___c__12_object____cctor(MethodInfo_3888D90 *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  *(Il2CppObject **)pIVar1->static_fields = __this;
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields);
  return;
}


// Utility.Util.<>c__12<object>$$.ctor
// il2cpp: void Utility_Util___c__12_object____ctor (Utility_Util___c__12_T__o* __this, const MethodInfo_3888E70* method);
// 0x3988e70

void Utility_Util___c__12_object____ctor(Utility_Util___c__12_T__o *__this,MethodInfo_3888E70 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__12<object>$$<RemoveNullOrDeadDetections>b__12_0
// il2cpp: bool Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0 (Utility_Util___c__12_T__o* __this, Il2CppObject* e, const MethodInfo_3888E80* method);
// 0x3988e80

bool Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0
               (Utility_Util___c__12_T__o *__this,Il2CppObject *e,MethodInfo_3888E80 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined1 uVar1;
  
  if (e == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = e->klass->vtable[5].methodPtr;
  uVar1 = (*vtableDispatch)(e,e->klass->vtable[5].method,method,vtableDispatch);
  return (bool)uVar1;
}


// Utility.Util.<>c__33<object, object>$$.cctor
// il2cpp: void Utility_Util___c__33_object__object____cctor (const MethodInfo_388A570* method);
// 0x398a570

void Utility_Util___c__33_object__object____cctor(MethodInfo_388A570 *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this;
  
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  __this = il2cpp_codegen_object_new(pIVar1);
  if (((((Il2CppClass *)method->klass)->_2).bitflags1 & 1) == 0) {
    il2cpp_codegen_class_init_checked((Il2CppClass *)method->klass);
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  *(Il2CppObject **)pIVar1->static_fields = __this;
  pIVar1 = (Il2CppClass *)method->klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  pIVar1 = pIVar1->rgctx_data[2].klass;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_388A680* method);
// 0x398a680

void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor
               (MethodInfo_388A680 *method)

{
  Il2CppMethodPointer pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *klass;
  ushort uVar4;
  
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar3 = il2cpp_codegen_object_new(pIVar2);
  pIVar2 = (Il2CppClass *)method->klass;
  uVar4._0_1_ = (pIVar2->_2).bitflags1;
  uVar4._1_1_ = (pIVar2->_2).bitflags2;
  if ((uVar4 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    klass = (Il2CppClass *)method->klass;
    uVar4._0_1_ = (klass->_2).bitflags1;
    uVar4._1_1_ = (klass->_2).bitflags2;
  }
  else {
    klass = pIVar2;
  }
  pIVar1 = (pIVar2->rgctx_data[1].method)->methodPointer;
  if ((uVar4 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  (*pIVar1)(pIVar3,klass->rgctx_data[1].rgctxDataDummy);
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = pIVar3;
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  Il2CppCodeGenWriteBarrier(pIVar2->static_fields);
  return;
}


// Utility.Util.<>c__33<object, object>$$.ctor
// il2cpp: void Utility_Util___c__33_object__object____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_388A650* method);
// 0x398a650

void Utility_Util___c__33_object__object____ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_388A650 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_388A790* method);
// 0x398a790

void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_388A790 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_0
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_388A660* method);
// 0x398a660

Il2CppObject *
Utility_Util___c__33_object__object____PaginateDictionary_b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_388A660 *method)

{
  return c.fields.key;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_0
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_388A7A0* method);
// 0x398a7a0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_388A7A0 *method)

{
  Utility_Util___c__33_TKey__TValue__RGCTXs *pUVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  long lVar5;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar6;
  undefined8 uStack_30;
  void *local_28;
  
  pUVar1 = method->klass->rgctx_data;
  __n = (ulong)(pUVar1->_6_TKey->_2).stack_slot_size;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_28 + lVar5);
  pMVar2 = pUVar1->_4_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_28 = __src;
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x398a7ec;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x398a7fa;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_1
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_388A670* method);
// 0x398a670

Il2CppObject *
Utility_Util___c__33_object__object____PaginateDictionary_b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_388A670 *method)

{
  return c.fields.value;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_1
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_388A810* method);
// 0x398a810

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_388A810 *method)

{
  Utility_Util___c__33_TKey__TValue__RGCTXs *pUVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  long lVar5;
  void *extraout_RDX;
  void *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar6;
  undefined8 uStack_30;
  void *local_28;
  
  pUVar1 = method->klass->rgctx_data;
  __n = (ulong)(pUVar1->_8_TValue->_2).stack_slot_size;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_28 + lVar5);
  pMVar2 = pUVar1->_7_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_28 = __src;
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x398a85c;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x398a86a;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<WaitForFrames>d__17$$.ctor
// il2cpp: void Utility_Util__WaitForFrames_d__17___ctor (Utility_Util__WaitForFrames_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5df1d70

void Utility_Util__WaitForFrames_d__17___ctor
               (Utility_Util__WaitForFrames_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<WaitForFrames>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x5df44b0

void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<WaitForFrames>d__17$$MoveNext
// il2cpp: bool Utility_Util__WaitForFrames_d__17__MoveNext (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x5df44c0

bool Utility_Util__WaitForFrames_d__17__MoveNext
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  
  if (Il2CppMethodInitialized_07548316 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07548316 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
label_05df4522:
      __this_00 = (Il2CppObject *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto label_05df4522;
  }
  return false;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x5df4560

Il2CppObject *
Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x5df4570

void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Utility_Util_WaitForFrames_d__17_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x5df45b0

Il2CppObject *
Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$.ctor
// il2cpp: void Utility_Util__YieldForFrames_d__18___ctor (Utility_Util__YieldForFrames_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5df1df0

void Utility_Util__YieldForFrames_d__18___ctor
               (Utility_Util__YieldForFrames_d__18_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<YieldForFrames>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x5df45c0

void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<YieldForFrames>d__18$$MoveNext
// il2cpp: bool Utility_Util__YieldForFrames_d__18__MoveNext (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x5df45d0

bool Utility_Util__YieldForFrames_d__18__MoveNext
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
label_05df460d:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto label_05df460d;
  }
  return false;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x5df4630

Il2CppObject *
Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x5df4640

void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Utility_Util_YieldForFrames_d__18_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x5df4680

Il2CppObject *
Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util$$SignedAngle
// il2cpp: float Utility_Util__SignedAngle (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o axis, const MethodInfo* method);
// 0x5df10b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df117c: mulss xmm0, xmm7
// asm:   0x5df1180: xorps xmm7, xmm7
// asm:   0x5df1183: ucomiss xmm0, xmm7
// asm:   0x5df1186: jb 0x5df11e2
// asm:   0x5df1199: jmp 0x5df129f

float Utility_Util__SignedAngle
                (UnityEngine_Vector3_o from,UnityEngine_Vector3_o to,UnityEngine_Vector3_o axis,
                MethodInfo *method)

{
  Il2CppClass *klass;
  uint uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar6;
  undefined1 auVar5 [12];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_18;
  float fStack_14;
  
  fVar10 = to.fields.z;
  fVar8 = to.fields.x;
  fVar9 = to.fields.y;
  fVar7 = from.fields.z;
  fVar2 = from.fields.x;
  fVar6 = from.fields.y;
  if (Il2CppMethodInitialized_075450a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075450a4 = '\x01';
  }
  fVar3 = fVar7 * fVar7 + fVar6 * fVar6 + fVar2 * fVar2;
  fVar11 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar3 * fVar11 < 0.0) {
    fVar3 = sqrtf(fVar3 * fVar11);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  else {
    fVar3 = SQRT(fVar3 * fVar11);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  fVar11 = 0.0;
  TypeInfo_System_Math = (System_Math_c *)klass;
  if (1e-15 <= fVar3) {
    fVar3 = (fVar7 * fVar10 + fVar6 * fVar9 + fVar2 * fVar8) / fVar3;
    auVar5 = ZEXT812(0x3f800000);
    if (fVar3 <= auVar5._0_4_) {
      auVar5._4_8_ = auVar5._4_8_;
      auVar5._0_4_ = fVar3;
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    dVar4 = acos((double)(float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 | auVar5._0_4_ & -(uint)(-1.0 <= fVar3))
                 ,(MethodInfo *)klass);
    fVar11 = (float)dVar4 * 57.29578;
  }
  local_18 = axis.fields.x;
  fStack_14 = axis.fields.y;
  uVar1 = -(uint)(0.0 <= (fVar9 * fVar2 - fVar6 * fVar8) * axis.fields.z +
                         (fVar7 * fVar8 - fVar10 * fVar2) * fStack_14 +
                         (fVar10 * fVar6 - fVar7 * fVar9) * local_18);
  return (float)(~uVar1 & (uint)-fVar11 | (uint)fVar11 & uVar1);
}


// Utility.Util$$IsVectorBetween
// il2cpp: bool Utility_Util__IsVectorBetween (UnityEngine_Vector3_o v, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, const MethodInfo* method);
// 0x5df1320

bool Utility_Util__IsVectorBetween
               (UnityEngine_Vector3_o v,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = v.fields.z;
  fVar4 = v.fields.x;
  if (((fVar4 < start.fields.x) || (bVar2 = true, end.fields.x < fVar4)) &&
     (bVar2 = false, end.fields.x <= fVar4)) {
    bVar2 = fVar4 <= start.fields.x;
  }
  fVar4 = v.fields.y;
  if (((fVar4 < start.fields.y) || (bVar1 = true, end.fields.y < fVar4)) &&
     (bVar1 = false, end.fields.y <= fVar4)) {
    bVar1 = fVar4 <= start.fields.y;
  }
  if (((fVar5 < start.fields.z) || (bVar3 = 1, end.fields.z < fVar5)) && (bVar3 = 0, end.fields.z <= fVar5)) {
    return (bool)(bVar1 & bVar2 & fVar5 <= start.fields.z);
  }
  return (bool)(bVar1 & bVar2 & bVar3);
}


// Utility.Util$$LinearMap
// il2cpp: float Utility_Util__LinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x5df1390

float Utility_Util__LinearMap(float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  return ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
}


// Utility.Util$$ClampedLinearMap
// il2cpp: float Utility_Util__ClampedLinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x5df13b0

float Utility_Util__ClampedLinearMap
                (float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
  if (fVar1 <= outMax) {
    outMax = fVar1;
  }
  return (float)(~-(uint)(outMin <= fVar1) & (uint)outMin | (uint)outMax & -(uint)(outMin <= fVar1));
}


// Utility.Util$$FindCharacterByViewId
// il2cpp: Characters_BaseCharacter_o* Utility_Util__FindCharacterByViewId (int32_t viewId, const MethodInfo* method);
// 0x5df13e0

Characters_BaseCharacter_o * Utility_Util__FindCharacterByViewId(int32_t viewId,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_075482f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075482f4 = '\x01';
  }
  if (-1 < viewId) {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x == (Photon_Pun_PhotonView_o *)0x0) {
        ThrowNullReferenceException();
      }
      pCVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)x,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
      return pCVar2;
    }
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Utility.Util$$FindPlayerById
// il2cpp: Photon_Realtime_Player_o* Utility_Util__FindPlayerById (int32_t id, const MethodInfo* method);
// 0x5df1470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df149b: jmp 0x5df14ff
// asm:   0x5df14dd: nop dword ptr [rax]

Photon_Realtime_Player_o * Utility_Util__FindPlayerById(int32_t id,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Photon_Realtime_Player_o *pPVar3;
  Photon_Realtime_Player_array *pPVar4;
  int iVar5;
  
  if (Il2CppMethodInitialized_075482f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075482f5 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar4 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  if (pPVar4 == (Photon_Realtime_Player_array *)0x0) {
label_05df14ff:
    ThrowNullReferenceException();
  }
  iVar2 = (int)pPVar4->max_length;
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      pPVar3 = pPVar4->m_Items[iVar5];
      if (pPVar3 == (Photon_Realtime_Player_o *)0x0) goto label_05df14ff;
      if ((pPVar3->fields).actorNumber == id) {
        return pPVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return (Photon_Realtime_Player_o *)0x0;
}


// Utility.Util$$CreateLocalPhotonInfo
// il2cpp: Photon_Pun_PhotonMessageInfo_o Utility_Util__CreateLocalPhotonInfo (const MethodInfo* method);
// 0x5df1510

Photon_Pun_PhotonMessageInfo_o *
Utility_Util__CreateLocalPhotonInfo(Photon_Pun_PhotonMessageInfo_o *__return_storage_ptr__,MethodInfo *method)

{
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).Sender = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).photonView = (Photon_Pun_PhotonView_o *)0x0;
  Photon_Pun_PhotonMessageInfo___ctor
            (__return_storage_ptr__,(Photon_Realtime_Player_o *)0x0,0,(Photon_Pun_PhotonView_o *)0x0,
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Utility.Util$$PascalToSentence
// il2cpp: System_String_o* Utility_Util__PascalToSentence (System_String_o* str, const MethodInfo* method);
// 0x5df1540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df1677: jmp 0x5df15e2

System_String_o * Utility_Util__PascalToSentence(System_String_o *str,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  System_String_o *pSVar2;
  Utility_Util___c_StaticFields *pUVar3;
  System_Text_RegularExpressions_MatchEvaluator_o *__this;
  
  if (Il2CppMethodInitialized_075482f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_PascalToSentence_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    il2cpp_codegen_initialize_runtime_metadata(&"[a-z][A-Z]");
    Il2CppMethodInitialized_075482f6 = '\x01';
  }
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  pSVar2 = "[a-z][A-Z]";
  pUVar3 = TypeInfo_Utility_Util_c->static_fields;
  __this = pUVar3->__9__7_0;
  if (__this == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
      pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    }
    object = (Il2CppObject *)pUVar3->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              (__this,object,(intptr_t)MethodInfo_Utility_Util_c_PascalToSentence_b__7_0,(MethodInfo *)0x0);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    pUVar3->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__7_0);
    uVar1 = (TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  }
  pSVar2 = System_Text_RegularExpressions_Regex__Replace_61e3e50(str,pSVar2,__this,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$CreateDontDestroyObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateDontDestroyObj_object_ (const MethodInfo_377BE10* method);
// 0x387be10

Il2CppObject * Utility_Util__CreateDontDestroyObj_object_(MethodInfo_377BE10 *method)

{
  UnityEngine_Object_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_377BE10_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Dont Destroy");
    if (method->rgctx_data == (MethodInfo_377BE10_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
  if (__this == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Object__set_name(__this,"Dont Destroy",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
  pIVar1 = UnityEngine_GameObject__AddComponent_object_
                     ((UnityEngine_GameObject_o *)__this,
                      (MethodInfo_353B6A0 *)method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
  return pIVar1;
}


// Utility.Util$$CreateObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateObj_object_ (const MethodInfo_377BED0* method);
// 0x387bed0

Il2CppObject * Utility_Util__CreateObj_object_(MethodInfo_377BED0 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_377BED0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    if (method->rgctx_data == (MethodInfo_377BED0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this,(MethodInfo *)0x0);
  if (__this == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)
                             method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
  return pIVar1;
}


// Utility.Util$$RemoveNull<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNull_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_377E5E0* method);
// 0x387e5e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387e632: test r14, r14
// asm:   0x387e635: je 0x387e78f
// asm:   0x387e7c3: jmp 0x387e6f8

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNull_object_(System_Collections_Generic_HashSet_T__o *set,MethodInfo_377E5E0 *method)

{
  byte bVar1;
  Il2CppObject *object;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo_377E5E0_RGCTXs *pMVar3;
  
  if (method->rgctx_data == (MethodInfo_377E5E0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387e676;
label_0387e604:
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387e60d;
label_0387e687:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387e69d;
label_0387e61e:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e604;
label_0387e676:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387e687;
label_0387e60d:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e61e;
label_0387e69d:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0387e789;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387e7a9;
label_0387e6db:
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  else {
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387e6db;
label_0387e7a9:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    pMVar3 = method->rgctx_data;
  }
  object = *(Il2CppObject **)pIVar2->static_fields;
  pIVar2 = pMVar3->_2_System_Predicate_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar2);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,object,
             (intptr_t)method->rgctx_data->_4_Utility_Util___c__10_T___RemoveNull_b__10_0,
             (MethodInfo_3DC95B0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  Il2CppCodeGenWriteBarrier((void **)((long)pIVar2->static_fields + 8));
joined_r0x0387e789:
  if (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)set,match,
             (MethodInfo_4FB6160 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
  return set;
}


// Utility.Util$$RemoveNullOrDead<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDead_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_377E7D0* method);
// 0x387e7d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387e822: test r14, r14
// asm:   0x387e825: je 0x387e97f
// asm:   0x387e9b3: jmp 0x387e8e8

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDead_object_
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_377E7D0 *method)

{
  byte bVar1;
  Il2CppObject *object;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo_377E7D0_RGCTXs *pMVar3;
  
  if (method->rgctx_data == (MethodInfo_377E7D0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387e866;
label_0387e7f4:
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387e7fd;
label_0387e877:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387e88d;
label_0387e80e:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e7f4;
label_0387e866:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387e877;
label_0387e7fd:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e80e;
label_0387e88d:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0387e979;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387e999;
label_0387e8cb:
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  else {
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387e8cb;
label_0387e999:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    pMVar3 = method->rgctx_data;
  }
  object = *(Il2CppObject **)pIVar2->static_fields;
  pIVar2 = pMVar3->_2_System_Predicate_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar2);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,object,
             (intptr_t)method->rgctx_data->_4_Utility_Util___c__11_T___RemoveNullOrDead_b__11_0,
             (MethodInfo_3DC95B0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  Il2CppCodeGenWriteBarrier((void **)((long)pIVar2->static_fields + 8));
joined_r0x0387e979:
  if (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)set,match,
             (MethodInfo_4FB6160 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
  return set;
}


// Utility.Util$$RemoveNullOrDeadDetections<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDeadDetections_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_377E9C0* method);
// 0x387e9c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387ea12: test r14, r14
// asm:   0x387ea15: je 0x387eb6f
// asm:   0x387eba3: jmp 0x387ead8

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDeadDetections_object_
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_377E9C0 *method)

{
  byte bVar1;
  Il2CppObject *object;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  MethodInfo_377E9C0_RGCTXs *pMVar3;
  
  if (method->rgctx_data == (MethodInfo_377E9C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387ea56;
label_0387e9e4:
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387e9ed;
label_0387ea67:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) goto label_0387ea7d;
label_0387e9fe:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e9e4;
label_0387ea56:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387ea67;
label_0387e9ed:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).bitflags1 & 1) != 0) goto label_0387e9fe;
label_0387ea7d:
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0387eb69;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) goto label_0387eb89;
label_0387eabb:
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  else {
    if ((pIVar2->_2).cctor_finished_or_no_cctor != 0) goto label_0387eabb;
label_0387eb89:
    il2cpp_codegen_runtime_class_init(pIVar2);
    pMVar3 = method->rgctx_data;
    pIVar2 = pMVar3->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar2->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    pMVar3 = method->rgctx_data;
  }
  object = *(Il2CppObject **)pIVar2->static_fields;
  pIVar2 = pMVar3->_2_System_Predicate_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar2);
  System_Predicate_object____ctor
            ((System_Predicate_object__o *)match,object,
             (intptr_t)method->rgctx_data->_4_Utility_Util___c__12_T___RemoveNullOrDeadDetections_b__12_0,
             (MethodInfo_3DC95B0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  Il2CppCodeGenWriteBarrier((void **)((long)pIVar2->static_fields + 8));
joined_r0x0387eb69:
  if (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)set,match,
             (MethodInfo_4FB6160 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
  return set;
}


// Utility.Util$$RemoveNullOrDeadShifters
// il2cpp: System_Collections_Generic_HashSet_BaseShifter__o* Utility_Util__RemoveNullOrDeadShifters (System_Collections_Generic_HashSet_BaseShifter__o* set, const MethodInfo* method);
// 0x5df1680
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df16c0: test r14, r14
// asm:   0x5df16c3: je 0x5df17c2

System_Collections_Generic_HashSet_BaseShifter__o *
Utility_Util__RemoveNullOrDeadShifters
          (System_Collections_Generic_HashSet_BaseShifter__o *set,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  Utility_Util___c_StaticFields *pUVar2;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_075482f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_RemoveNullOrDeadShifters_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    Il2CppMethodInitialized_075482f7 = '\x01';
    uVar1 = (TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    pUVar2 = TypeInfo_Utility_Util_c->static_fields;
    match = (System_Predicate_T__o *)pUVar2->__9__13_0;
  }
  else {
    pUVar2 = ((Il2CppClass *)TypeInfo_Utility_Util_c)->static_fields;
    match = (System_Predicate_T__o *)pUVar2->__9__13_0;
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Utility_Util_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
      pUVar2 = TypeInfo_Utility_Util_c->static_fields;
    }
    object = (Il2CppObject *)pUVar2->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_BaseShifter);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_Utility_Util_c_RemoveNullOrDeadShifters_b__13_0,(MethodInfo_3DC95B0 *)0x0)
    ;
    pUVar2 = TypeInfo_Utility_Util_c->static_fields;
    pUVar2->__9__13_0 = (System_Predicate_BaseShifter__o *)match;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__13_0);
  }
  if (set == (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___RemoveWhere
            ((System_Collections_Generic_HashSet_object__o *)set,match,
             (MethodInfo_4FB6160 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_RemoveWhere);
  return set;
}


// Utility.Util$$CreateMD5
// il2cpp: System_String_o* Utility_Util__CreateMD5 (System_String_o* input, const MethodInfo* method);
// 0x5df17d0
// eh: try 0x5df1878..0x5df1a2a -> pad 0x5df1a38 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5df1a5a..0x5df1a5f -> pad 0x5df1a75 cleanup
// eh: try 0x5df1a78..0x5df1a82 -> pad 0x5df1a8a catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df19d6: test r14, r14
// asm:   0x5df19d9: jne 0x5df19f1
// asm:   0x5df19f1: mov rdi, r14
// asm:   0x5df19f4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df1a2a: jmp 0x5df1a42
// asm:   0x5df1a2c: jmp 0x5df1a42
// asm:   0x5df1a2e: jmp 0x5df1a42
// asm:   0x5df1a30: jmp 0x5df1a42
// asm:   0x5df1a32: jmp 0x5df1a42
// asm:   0x5df1a34: jmp 0x5df1a42
// asm:   0x5df1a36: jmp 0x5df1a42
// asm:   0x5df1a38: jmp 0x5df1a42
// asm:   0x5df1a3a: jmp 0x5df1a42
// asm:   0x5df1a3c: jmp 0x5df1a42
// asm:   0x5df1a3e: jmp 0x5df1a42
// asm:   0x5df1a40: jmp 0x5df1a42
// asm:   0x5df1a42: mov rbx, rax
// asm:   0x5df1a45: cmp edx, 1
// asm:   0x5df1a48: jne 0x5df1a78
// asm:   0x5df1a4a: mov rdi, rbx
// asm:   0x5df1a4d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df1a52: mov r14, qword ptr [rax]
// asm:   0x5df1a55: mov qword ptr [rsp + 0x10], r14
// asm:   0x5df1a5a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df1a5f: xor r15d, r15d
// asm:   0x5df1a62: mov rbx, qword ptr [rsp + 8]
// asm:   0x5df1a67: test rbx, rbx
// asm:   0x5df1a6a: jne 0x5df1972
// asm:   0x5df1a70: jmp 0x5df19d6
// asm:   0x5df1a75: mov rbx, rax
// asm:   0x5df1a78: lea rdi, [rsp + 0x10]
// asm:   0x5df1a7d: call 0x2fdf820  ; il2cpp_runtime_helper_02fdf820()
// asm:   0x5df1a82: mov rdi, rbx
// asm:   0x5df1a85: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df1a8a: mov rdi, rax
// asm:   0x5df1a8d: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Utility_Util__CreateMD5(System_String_o *input,MethodInfo *method)

{
  uint uVar1;
  System_Security_Cryptography_HashAlgorithm_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Security_Cryptography_MD5_o *__this;
  bool bVar4;
  int iVar5;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  System_Text_StringBuilder_o *__this_00;
  ulong uVar8;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  ulong uVar11;
  long lVar12;
  System_Security_Cryptography_MD5_o *local_40;
  undefined8 local_38;
  System_Security_Cryptography_MD5_o **local_30;
  
  if (Il2CppMethodInitialized_075482f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"X2");
    Il2CppMethodInitialized_075482f8 = '\x01';
  }
  local_40 = (System_Security_Cryptography_MD5_o *)0x0;
  bVar4 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar4) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    local_40 = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
    local_38 = 0;
    local_30 = &local_40;
    pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar6 == (System_Text_Encoding_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = (*(pSVar6->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar6,input,(pSVar6->klass->vtable)._18_GetBytes.method);
    if (local_40 == (System_Security_Cryptography_MD5_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                       ((System_Security_Cryptography_HashAlgorithm_o *)local_40,pSVar7,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (pSVar7 == (System_Byte_array *)0x0) {
      ThrowNullReferenceException();
    }
    iVar5 = (int)pSVar7->max_length;
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
      if (0 < iVar5) {
        System_Byte__ToString_541d840(pSVar7->m_Items,"X2",(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
label_05df1a25:
      ThrowNullReferenceException();
    }
    if (0 < iVar5) {
      uVar8 = pSVar7->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar8 <= uVar11) {
          ThrowIndexOutOfRangeException();
        }
        pSVar9 = System_Byte__ToString_541d840
                           (pSVar7->m_Items + uVar11,"X2",(MethodInfo *)0x0);
        System_Text_StringBuilder__Append_530ed80(__this_00,pSVar9,(MethodInfo *)0x0);
        uVar11 = uVar11 + 1;
        uVar1 = (uint)pSVar7->max_length;
        uVar8 = (ulong)uVar1;
      } while ((long)uVar11 < (long)(int)uVar1);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_05df1a25;
    }
    pSVar9 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    __this = local_40;
    if (local_40 != (System_Security_Cryptography_MD5_o *)0x0) {
      pSVar2 = (System_Security_Cryptography_HashAlgorithm_c *)local_40->klass;
      uVar8 = (ulong)(pSVar2->_2).interface_offsets_count;
      if (uVar8 != 0) {
        pIVar3 = (pSVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar12) == TypeInfo_System_IDisposable
             ) {
            pVVar10 = (VirtualInvokeData *)
                      (&(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar12));
            goto label_05df19cd;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar8 * 0x10 != lVar12);
      }
      pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)local_40,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df19cd:
      (*pVVar10->methodPtr)((Il2CppObject *)__this,pVVar10->method);
    }
  }
  return pSVar9;
}


// Utility.Util$$CreateSalt
// il2cpp: System_String_o* Utility_Util__CreateSalt (const MethodInfo* method);
// 0x5df1aa0
// eh: try 0x5df1b26..0x5df1bdc -> pad 0x5df1be4 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5df1bfc..0x5df1c01 -> pad 0x5df1c06 cleanup
// eh: try 0x5df1c09..0x5df1c13 -> pad 0x5df1c1b catch (...) [compiler noexcept guard]
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df1bdc: mov rdi, r15
// asm:   0x5df1bdf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df1be4: mov rbx, rax
// asm:   0x5df1be7: cmp edx, 1
// asm:   0x5df1bea: jne 0x5df1c09
// asm:   0x5df1bec: mov rdi, rbx
// asm:   0x5df1bef: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df1bf4: mov r15, qword ptr [rax]
// asm:   0x5df1bf7: mov qword ptr [rsp + 0x10], r15
// asm:   0x5df1bfc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df1c01: jmp 0x5df1b35
// asm:   0x5df1c06: mov rbx, rax
// asm:   0x5df1c09: lea rdi, [rsp + 0x10]
// asm:   0x5df1c0e: call 0x2fdf8b0  ; il2cpp_runtime_helper_02fdf8b0()
// asm:   0x5df1c13: mov rdi, rbx
// asm:   0x5df1c16: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df1c1b: mov rdi, rax
// asm:   0x5df1c1e: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Utility_Util__CreateSalt(MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *__this;
  System_Byte_array *inArray;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  ulong uVar5;
  long lVar6;
  Il2CppObject *local_30;
  undefined8 local_28;
  Il2CppObject **local_20;
  
  if (Il2CppMethodInitialized_075482f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075482f9 = '\x01';
  }
  inArray = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x10);
  local_30 = (Il2CppObject *)System_Security_Cryptography_RandomNumberGenerator__Create((MethodInfo *)0x0);
  local_28 = 0;
  local_20 = &local_30;
  if (local_30 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  (*(((System_Security_Cryptography_RandomNumberGenerator_VTable *)local_30->klass->vtable)->_6_unknown).
    methodPtr)(local_30,inArray,
               (((System_Security_Cryptography_RandomNumberGenerator_VTable *)local_30->klass->vtable)->
               _6_unknown).method);
  __this = local_30;
  if (local_30 != (Il2CppObject *)0x0) {
    pIVar1 = local_30->klass;
    uVar5 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar5 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar6 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar6) == TypeInfo_System_IDisposable) {
          pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar6);
          goto label_05df1b9d;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar5 * 0x10 != lVar6);
    }
    pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(local_30,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05df1b9d:
    (*pVVar3->methodPtr)(__this,pVVar3->method);
  }
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar4 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
  return pSVar4;
}


// Utility.Util$$CreatePBKDF2
// il2cpp: System_String_o* Utility_Util__CreatePBKDF2 (System_String_o* input, System_String_o* salt, const MethodInfo* method);
// 0x5df1c30

System_String_o * Utility_Util__CreatePBKDF2(System_String_o *input,System_String_o *salt,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Security_Cryptography_HashAlgorithmName_o hashAlgorithm;
  System_Security_Cryptography_Rfc2898DeriveBytes_o *__this;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075482fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Rfc2898DeriveBytes);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075482fa = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
  }
  pSVar2 = System_Convert__FromBase64String(salt,(MethodInfo *)0x0);
  hashAlgorithm = System_Security_Cryptography_HashAlgorithmName__get_SHA256((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Security_Cryptography_Rfc2898DeriveBytes);
  System_Security_Cryptography_Rfc2898DeriveBytes___ctor_532e030
            (__this,input,pSVar2,200000,hashAlgorithm,(MethodInfo *)0x0);
  if (__this != (System_Security_Cryptography_Rfc2898DeriveBytes_o *)0x0) {
    pSVar2 = (*(__this->klass->vtable)._5_GetBytes.methodPtr)
                       (__this,0x10,(__this->klass->vtable)._5_GetBytes.method);
    pSVar3 = System_BitConverter__ToString_541b290(pSVar2,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace_5304550
                         (pSVar3,"-",
                          (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$WaitForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__WaitForFrames (int32_t frames, const MethodInfo* method);
// 0x5de7300

System_Collections_IEnumerator_o * Utility_Util__WaitForFrames(int32_t frames,MethodInfo *method)

{
  Utility_Util__WaitForFrames_d__17_o *__this;
  
  if (Il2CppMethodInitialized_075482fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
    Il2CppMethodInitialized_075482fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).frames = frames;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.Util$$YieldForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__YieldForFrames (int32_t frames, const MethodInfo* method);
// 0x5df1d90

System_Collections_IEnumerator_o * Utility_Util__YieldForFrames(int32_t frames,MethodInfo *method)

{
  Utility_Util__YieldForFrames_d__18_o *__this;
  
  if (Il2CppMethodInitialized_075482fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_YieldForFrames_d__18);
    Il2CppMethodInitialized_075482fc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_YieldForFrames_d__18);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).frames = frames;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.Util$$EnumToStringArray<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray_Int32Enum_ (const MethodInfo_377C8A0* method);
// 0x387c8a0

System_String_array * Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_377C8A0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_377C8A0_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_377C8A0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArray<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_ (const MethodInfo_377C910* method);
// 0x387c910

System_String_array *
Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_(MethodInfo_377C910 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_377C910_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_377C910_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArrayExceptNone<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone_Int32Enum_ (const MethodInfo_377C980* method);
// 0x387c980

System_String_array * Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_377C980 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_RuntimeTypeHandle_o handle;
  System_String_o *a;
  System_String_array *pSVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  Il2CppRGCTXData *pIVar6;
  System_Type_o *enumType;
  System_String_array *pSVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  
  if (method->rgctx_data == (MethodInfo_377C980_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_377C980_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pMVar3 = method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_;
  pIVar6 = (pMVar3->field7_0x38).rgctx_data;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(pMVar3);
    pIVar6 = (pMVar3->field7_0x38).rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pIVar6->rgctxDataDummy;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar7 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar7 != (System_String_array *)0x0) {
    iVar9 = (int)pSVar7->max_length;
    uVar8 = pSVar7->max_length & 0xffffffff;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar9 < 1) goto label_0387cbc4;
      uVar10 = 0;
      do {
        if (uVar8 <= uVar10) goto label_0387cbbf;
        bVar5 = System_String__op_Inequality(pSVar7->m_Items[uVar10],"None",(MethodInfo *)0x0);
        if (bVar5) goto label_0387cbc4;
        uVar10 = uVar10 + 1;
        uVar2 = (uint)pSVar7->max_length;
        uVar8 = (ulong)uVar2;
      } while ((long)uVar10 < (long)(int)uVar2);
    }
    else {
      if (iVar9 < 1) goto label_0387cb9f;
      uVar10 = 0;
      do {
        if (uVar8 <= uVar10) {
label_0387cbbf:
          ThrowIndexOutOfRangeException();
        }
        a = pSVar7->m_Items[uVar10];
        bVar5 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar5) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this->fields)._items;
          if (pSVar4 == (System_String_array *)0x0) goto label_0387cbc4;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = a;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)a,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
        }
        uVar10 = uVar10 + 1;
        uVar2 = (uint)pSVar7->max_length;
        uVar8 = (ulong)uVar2;
      } while ((long)uVar10 < (long)(int)uVar2);
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
label_0387cb9f:
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
  }
label_0387cbc4:
  ThrowNullReferenceException();
}


// Utility.Util$$EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_ (const MethodInfo_377CBD0* method);
// 0x387cbd0

System_String_array *
Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_(MethodInfo_377CBD0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *a;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  long lVar5;
  ulong uVar6;
  System_String_array *pSVar7;
  int iVar8;
  ulong uVar9;
  
  if (method->rgctx_data == (MethodInfo_377CBD0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_377CBD0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  lVar5 = (*method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_->methodPointer)();
  if (lVar5 != 0) {
    iVar8 = (int)*(ulong *)(lVar5 + 0x18);
    uVar6 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (iVar8 < 1) goto label_0387cdb4;
      uVar9 = 0;
      do {
        if (uVar6 <= uVar9) goto label_0387cdaf;
        bVar4 = System_String__op_Inequality
                          (*(System_String_o **)(lVar5 + 0x20 + uVar9 * 8),"None",
                           (MethodInfo *)0x0);
        if (bVar4) goto label_0387cdb4;
        uVar9 = uVar9 + 1;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    else {
      if (iVar8 < 1) goto label_0387cd8f;
      uVar9 = 0;
      do {
        if (uVar6 <= uVar9) {
label_0387cdaf:
          ThrowIndexOutOfRangeException();
        }
        a = *(System_String_o **)(lVar5 + 0x20 + uVar9 * 8);
        bVar4 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (bVar4) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this->fields)._items;
          if (pSVar7 == (System_String_array *)0x0) goto label_0387cdb4;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar7->m_Items[(int)uVar2] = a;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)a,
                       (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
          }
        }
        uVar9 = uVar9 + 1;
        uVar6 = (ulong)*(uint *)(lVar5 + 0x18);
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
label_0387cd8f:
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar7;
    }
  }
label_0387cdb4:
  ThrowNullReferenceException();
}


// Utility.Util$$EnumToList<Int32Enum>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList_Int32Enum_ (const MethodInfo_377C780* method);
// 0x387c780

System_Collections_Generic_List_T__o * Utility_Util__EnumToList_Int32Enum_(MethodInfo_377C780 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_377C780_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_377C780_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_34E0850 *)method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_);
  pSVar2 = System_Linq_Enumerable__ToList_Int32Enum_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_3500E30 *)method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_);
  return (System_Collections_Generic_List_T__o *)pSVar2;
}


// Utility.Util$$EnumToList<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList___Il2CppFullySharedGenericType_ (const MethodInfo_377C810* method);
// 0x387c810

System_Collections_Generic_List_T__o *
Utility_Util__EnumToList___Il2CppFullySharedGenericType_(MethodInfo_377C810 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo_377C810_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Array_o *pSVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  undefined1 auVar5 [16];
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_377C810_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar2 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pSVar3 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  auVar5 = (*method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_->methodPointer)(pSVar3);
  pMVar1 = method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_;
  vtableDispatch = pMVar1->methodPointer;
  pSVar4 = (System_Collections_Generic_List_T__o *)
           (*vtableDispatch)(auVar5._0_8_,pMVar1,auVar5._8_8_,vtableDispatch);
  return pSVar4;
}


// Utility.Util$$EnumToDict<Int32Enum>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict_Int32Enum_ (const MethodInfo_377C170* method);
// 0x387c170
// eh: try 0x387c26d..0x387c390 -> pad 0x387c39e (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387c3b6..0x387c3bb -> pad 0x387c3c0 cleanup
// eh: try 0x387c3c3..0x387c3cd -> pad 0x387c3d5 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387c25c: nop dword ptr [rax]
// asm:   0x387c2ee: xor r14d, r14d
// asm:   0x387c339: jmp 0x387c1ba
// asm:   0x387c343: mov rdi, r14
// asm:   0x387c346: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387c390: jmp 0x387c39e
// asm:   0x387c392: jmp 0x387c39e
// asm:   0x387c394: jmp 0x387c39e
// asm:   0x387c396: jmp 0x387c39e
// asm:   0x387c398: jmp 0x387c39e
// asm:   0x387c39a: jmp 0x387c39e
// asm:   0x387c39c: jmp 0x387c39e
// asm:   0x387c39e: mov rbx, rax
// asm:   0x387c3a1: cmp edx, 1
// asm:   0x387c3a4: jne 0x387c3c3
// asm:   0x387c3a6: mov rdi, rbx
// asm:   0x387c3a9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387c3ae: mov r14, qword ptr [rax]
// asm:   0x387c3b1: mov qword ptr [rsp + 0x48], r14
// asm:   0x387c3b6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387c3bb: jmp 0x387c2f1
// asm:   0x387c3c0: mov rbx, rax
// asm:   0x387c3c3: lea rdi, [rsp + 0x48]
// asm:   0x387c3c8: call 0x2ad7c00  ; il2cpp_runtime_helper_02ad7c00()
// asm:   0x387c3cd: mov rdi, rbx
// asm:   0x387c3d0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387c3d5: mov rdi, rax
// asm:   0x387c3d8: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict_Int32Enum_(MethodInfo_377C170 *method)

{
  byte bVar1;
  int32_t value;
  undefined4 uVar2;
  bool bVar3;
  MethodInfo_377C170_RGCTXs *pMVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_Dictionary_string__T__o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  System_String_o *key;
  undefined1 local_80 [24];
  Il2CppObject *local_68;
  System_Enum_o local_58;
  int32_t local_48;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  
  pMVar4 = method->rgctx_data;
  local_80._0_8_ = method;
  if (pMVar4 == (MethodInfo_377C170_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    pMVar4 = method->rgctx_data;
    if (pMVar4 == (MethodInfo_377C170_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pIVar5 = method->rgctx_data->_0_System_Collections_Generic_Dictionary_string__T_;
      bVar1 = (pIVar5->_2).bitflags1;
      goto joined_r0x0387c1b0;
    }
  }
  pIVar5 = pMVar4->_0_System_Collections_Generic_Dictionary_string__T_;
  bVar1 = (pIVar5->_2).bitflags1;
joined_r0x0387c1b0:
  if ((bVar1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  __this = (System_Collections_Generic_Dictionary_string__T__o *)il2cpp_codegen_object_new(pIVar5);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_4AA0A80 *)
             method->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  __this_00 = Utility_Util__EnumToList_Int32Enum_
                        ((MethodInfo_377C780 *)method->rgctx_data->_2_Utility_Util_EnumToList_T_);
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_Int32Enum___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,
             (MethodInfo_391A9A0 *)method->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator);
  local_68 = local_30;
  local_80._8_8_ = local_40._0_8_;
  local_80._16_8_ = local_40._8_8_;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = local_80 + 8;
  local_30 = (Il2CppObject *)local_80;
  if (__this == (System_Collections_Generic_Dictionary_string__T__o *)0x0) {
    bVar3 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                      ((System_Collections_Generic_List_Enumerator_T__o *)(local_80 + 8),
                       (MethodInfo_4C3C9C0 *)
                       (*(MethodInfo_377C170_RGCTXs **)&(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)[1]
                       ._0_System_Collections_Generic_Dictionary_string__T_);
    if (bVar3) {
      uVar2 = (int32_t)local_68;
      pIVar5 = (*(MethodInfo_377C170_RGCTXs **)&(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)->_8_T;
      if (((pIVar5->_2).bitflags1 & 1) == 0) {
        pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      }
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = uVar2;
      local_58.klass = (System_Enum_c *)pIVar5;
      System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar3 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)(local_80 + 8),
                              (MethodInfo_4C3C9C0 *)
                              (*(MethodInfo_377C170_RGCTXs **)
                                &(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)[1].
                              _0_System_Collections_Generic_Dictionary_string__T_), bVar3) {
      value = (int32_t)local_68;
      pIVar5 = (*(MethodInfo_377C170_RGCTXs **)&(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)->_8_T;
      if (((pIVar5->_2).bitflags1 & 1) == 0) {
        pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      }
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = value;
      local_58.klass = (System_Enum_c *)pIVar5;
      key = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      System_Collections_Generic_Dictionary_object__Int32Enum___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,value,
                 (MethodInfo_4AA1680 *)
                 (*(MethodInfo_377C170_RGCTXs **)&(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)->
                 _11_System_Collections_Generic_List_Enumerator_T__MoveNext);
    }
  }
  System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
            ((System_Collections_Generic_List_Enumerator_T__o *)(local_80 + 8),
             (MethodInfo_4C3C9B0 *)
             (*(MethodInfo_377C170_RGCTXs **)&(((Il2CppClass_1 *)local_80._0_8_)->this_arg).bits)[1].
             _1_System_Collections_Generic_Dictionary_string__T___ctor);
  return __this;
}


// Utility.Util$$EnumToDict<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict___Il2CppFullySharedGenericType_ (const MethodInfo_377C3E0* method);
// 0x387c3e0
// eh: try 0x387c5e8..0x387c720 -> pad 0x387c731 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387c754..0x387c759 -> pad 0x387c75e cleanup
// eh: try 0x387c761..0x387c76d -> pad 0x387c775 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387c494: mov qword ptr [rbp - 0x38], rdx
// asm:   0x387c5dd: nop dword ptr [rax]
// asm:   0x387c725: mov rdi, rbx
// asm:   0x387c728: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387c72d: jmp 0x387c73a
// asm:   0x387c72f: jmp 0x387c731
// asm:   0x387c731: mov rbx, rax
// asm:   0x387c734: mov r15, qword ptr [rbp - 0x38]
// asm:   0x387c738: jmp 0x387c73d
// asm:   0x387c73a: mov rbx, rax
// asm:   0x387c73d: cmp edx, 1
// asm:   0x387c740: jne 0x387c761
// asm:   0x387c742: mov rdi, rbx
// asm:   0x387c745: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387c74a: mov rbx, qword ptr [rax]
// asm:   0x387c74d: mov qword ptr [rbp - 0xa8], rbx
// asm:   0x387c754: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387c759: jmp 0x387c6c8
// asm:   0x387c75e: mov rbx, rax
// asm:   0x387c761: lea rdi, [rbp - 0xa8]
// asm:   0x387c768: call 0x2ad7c30  ; il2cpp_runtime_helper_02ad7c30()
// asm:   0x387c76d: mov rdi, rbx
// asm:   0x387c770: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387c775: mov rdi, rax
// asm:   0x387c778: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict___Il2CppFullySharedGenericType_(MethodInfo_377C3E0 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  MethodInfo_377C3E0_RGCTXs *pMVar7;
  char cVar8;
  uint uVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  void *pvVar12;
  MethodInfo_377C3E0_RGCTXs *pMVar13;
  ulong uVar14;
  MethodInfo_377C3E0 *pMVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  void *__src;
  undefined8 *__dest;
  ulong uVar18;
  void *__s;
  void *pvVar19;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  void *local_b0;
  MethodInfo_377C3E0 **local_a8;
  undefined1 **local_a0;
  void **local_98;
  long local_90;
  ulong local_88;
  undefined1 *local_80;
  void *local_78;
  MethodInfo_377C3E0 *local_70;
  void *local_68;
  undefined8 *local_60;
  void *local_50;
  ulong local_48;
  MethodInfo_377C3E0_RGCTXs *local_40;
  MethodInfo_377C3E0 *local_38;
  
  local_40 = method->rgctx_data;
  local_38 = method;
  if (local_40 == (MethodInfo_377C3E0_RGCTXs *)0x0) {
    uStack_c0 = 0x387c410;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    local_40 = method->rgctx_data;
    if (local_40 == (MethodInfo_377C3E0_RGCTXs *)0x0) {
      uStack_c0 = 0x387c421;
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      local_40 = method->rgctx_data;
    }
  }
  pIVar10 = local_40->_5_System_Collections_Generic_List_Enumerator_T_;
  uVar9 = (pIVar10->_2).stack_slot_size;
  uVar18 = (ulong)uVar9;
  local_48 = (ulong)(local_40->_8_T->_2).stack_slot_size;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    uStack_c0 = 0x387c44f;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    uVar9 = (pIVar10->_2).stack_slot_size;
    local_40 = method->rgctx_data;
  }
  lVar5 = -((ulong)(uVar9 + 0x10) + 0xf & 0xfffffffffffffff0);
  puVar16 = auStack_b8 + lVar5;
  pIVar10 = local_40->_8_T;
  local_80 = puVar16;
  local_70 = method;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(auStack_b8 + lVar5 + -8) = 0x387c48a;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    puVar16 = auStack_b8 + lVar5;
    local_40 = method->rgctx_data;
  }
  local_90 = (long)puVar16 - ((ulong)((pIVar10->_2).stack_slot_size + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar14 = local_48 + 0xf & 0xfffffffffffffff0;
  __src = (void *)(local_90 - uVar14);
  __dest = (undefined8 *)((long)__src - uVar14);
  uVar11 = uVar18 + 0xf & 0xfffffffffffffff0;
  local_78 = (void *)((long)__dest - uVar11);
  pvVar19 = (void *)((long)local_78 - uVar11);
  local_88 = uVar18;
  local_50 = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x387c50a;
  memset(pvVar19,0,uVar18);
  uVar18 = local_48;
  __s = (void *)((long)pvVar19 - uVar14);
  *(undefined8 *)((long)__s + -8) = 0x387c521;
  memset(__s,0,uVar18);
  pIVar10 = local_40->_0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x387c536;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pMVar15 = local_70;
  *(undefined8 *)((long)__s + -8) = 0x387c542;
  local_40 = (MethodInfo_377C3E0_RGCTXs *)il2cpp_codegen_object_new(pIVar10);
  pIVar1 = pMVar15->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor->methodPointer;
  *(undefined8 *)((long)__s + -8) = 0x387c553;
  (*pIVar1)();
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((long)__s + -8) = 0x387c56b;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pIVar1 = pMVar15->rgctx_data->_2_Utility_Util_EnumToList_T_->methodPointer;
  *(undefined8 *)((long)__s + -8) = 0x387c575;
  pvVar12 = (void *)(*pIVar1)();
  pvVar6 = local_78;
  if (pvVar12 == (void *)0x0) {
    *(undefined8 *)((long)__s + -8) = 0x387c725;
    ThrowNullReferenceException();
  }
  pMVar2 = pMVar15->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator;
  pIVar1 = pMVar2->methodPointer;
  local_b0 = local_78;
  pIVar3 = pMVar2->invoker_method;
  *(undefined8 *)((long)__s + -8) = 0x387c5a1;
  (*pIVar3)(pIVar1,pMVar2,pvVar12,&local_b0,pvVar6);
  pvVar6 = local_78;
  uVar18 = local_88;
  *(undefined8 *)((long)__s + -8) = 0x387c5b1;
  memcpy(pvVar19,pvVar6,uVar18);
  local_b0 = (void *)0x0;
  local_a8 = &local_38;
  local_a0 = &local_80;
  local_98 = &local_50;
  while( true ) {
    pcVar4 = ((pMVar15->rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)->_1).image;
    *(undefined8 *)((long)__s + -8) = 0x387c5ed;
    cVar8 = (*pcVar4)(pvVar19);
    pMVar7 = local_40;
    pvVar19 = local_50;
    if (cVar8 == '\0') {
      pMVar13 = local_38->rgctx_data;
      pIVar10 = pMVar13->_5_System_Collections_Generic_List_Enumerator_T_;
      if (((pIVar10->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x387c6e2;
        pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        pMVar13 = local_38->rgctx_data;
      }
      pvVar19 = local_50;
      puVar16 = local_80;
      pMVar2 = pMVar13[1]._1_System_Collections_Generic_Dictionary_string__T___ctor;
      *(undefined8 *)((long)__s + -8) = 0x387c704;
      il2cpp_runtime_helper_030d6e00(pIVar10,pMVar2,puVar16,pvVar19,0,0);
      return (System_Collections_Generic_Dictionary_string__T__o *)pMVar7;
    }
    pMVar2 = local_38->rgctx_data->_6_System_Collections_Generic_List_Enumerator_T__get_Current;
    pIVar1 = pMVar2->methodPointer;
    pIVar3 = pMVar2->invoker_method;
    local_68 = __src;
    *(undefined8 *)((long)__s + -8) = 0x387c61a;
    (*pIVar3)(pIVar1,pMVar2,pvVar19,&local_68,__src);
    uVar18 = local_48;
    *(undefined8 *)((long)__s + -8) = 0x387c629;
    memcpy(__s,__src,uVar18);
    pMVar13 = local_38->rgctx_data;
    pIVar10 = pMVar13->_8_T;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x387c646;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      pMVar13 = local_38->rgctx_data;
    }
    lVar5 = local_90;
    pMVar2 = pMVar13->_10_System_Collections_Generic_Dictionary_string__T__Add;
    *(undefined8 *)((long)__s + -8) = 0x387c66b;
    il2cpp_runtime_helper_030d6e00(pIVar10,pMVar2,lVar5,__s,0,&local_68);
    uVar18 = local_48;
    pvVar19 = local_68;
    *(undefined8 *)((long)__s + -8) = 0x387c67e;
    memcpy(__dest,__s,uVar18);
    if (pMVar7 == (MethodInfo_377C3E0_RGCTXs *)0x0) break;
    puVar17 = __dest;
    if (-1 < (int)(local_38->rgctx_data->_8_T->_1).byval_arg.bits) {
      puVar17 = (undefined8 *)*__dest;
    }
    pMVar2 = local_38->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext;
    pIVar1 = pMVar2->methodPointer;
    pIVar3 = pMVar2->invoker_method;
    local_68 = pvVar19;
    local_60 = puVar17;
    *(undefined8 *)((long)__s + -8) = 0x387c6b9;
    (*pIVar3)(pIVar1,pMVar2,pMVar7,&local_68,puVar17);
    pMVar15 = local_38;
    pvVar19 = local_50;
  }
  *(undefined8 *)((long)__s + -8) = 0x387c720;
  ThrowNullReferenceException();
}


// Utility.Util$$FormatFloat
// il2cpp: System_String_o* Utility_Util__FormatFloat (float num, int32_t decimalPlaces, const MethodInfo* method);
// 0x5df1e10

System_String_o * Utility_Util__FormatFloat(float num,int32_t decimalPlaces,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_c;
  
  local_c = num;
  if (Il2CppMethodInitialized_075482fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"0.");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075482fd = '\x01';
  }
  if (decimalPlaces == 0) {
    pSVar1 = "0";
  }
  else {
    pSVar1 = System_String__CreateString_5309000((System_String_o *)0x0,0x30,decimalPlaces,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320("0.",pSVar1,(MethodInfo *)0x0);
  }
  pSVar1 = System_Single__ToString_54d0a60(&local_c,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__MultiplyVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x5df1e90

UnityEngine_Vector3_o
Utility_Util__MultiplyVectors(UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.x = a.fields.x * b.fields.x;
  UVar1.fields.y = a.fields.y * b.fields.y;
  UVar1.fields.z = a.fields.z * b.fields.z;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector2_o Utility_Util__MultiplyVectors (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x5df1ea0

UnityEngine_Vector2_o
Utility_Util__MultiplyVectors_5cf1ea0(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.y = a.fields.y * b.fields.y;
  UVar1.fields.x = a.fields.x * b.fields.x;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__DivideVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x5df1eb0

UnityEngine_Vector3_o
Utility_Util__DivideVectors(UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar1 [16];
  undefined8 in_XMM2_Qb;
  UnityEngine_Vector3_o UVar3;
  
  auVar2._0_8_ = a.fields._0_8_;
  auVar2._8_8_ = in_XMM0_Qb;
  auVar1._8_8_ = in_XMM2_Qb;
  auVar1._0_8_ = b.fields._0_8_;
  auVar1 = divps(auVar2,auVar1);
  UVar3.fields.z = a.fields.z / b.fields.z;
  UVar3.fields._0_8_ = auVar1._0_8_;
  return (UnityEngine_Vector3_o)UVar3.fields;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector2_o Utility_Util__DivideVectors (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x5df1ec0

UnityEngine_Vector2_o
Utility_Util__DivideVectors_5cf1ec0(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar2 [16];
  undefined1 auVar1 [16];
  undefined8 in_XMM1_Qb;
  
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = a.fields;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = b.fields;
  auVar1 = divps(auVar2,auVar1);
  return (UnityEngine_Vector2_o)auVar1._0_8_;
}


// Utility.Util$$GroupItems<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems_object_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_377D5D0* method);
// 0x387d5d0
// eh: try 0x387d74f..0x387d8b3 -> pad 0x387d8c4 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387d8e2..0x387d8e7 -> pad 0x387d8e9 cleanup
// eh: try 0x387d8ec..0x387d8f6 -> pad 0x387d8fe catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387d6d2: jmp 0x387d60c
// asm:   0x387d8b8: mov rdi, rbx
// asm:   0x387d8bb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387d8c0: jmp 0x387d8ca
// asm:   0x387d8c2: jmp 0x387d8ca
// asm:   0x387d8c4: jmp 0x387d8ca
// asm:   0x387d8c6: jmp 0x387d8ca
// asm:   0x387d8c8: jmp 0x387d8ca
// asm:   0x387d8ca: mov rbx, rax
// asm:   0x387d8cd: cmp edx, 1
// asm:   0x387d8d0: jne 0x387d8ec
// asm:   0x387d8d2: mov rdi, rbx
// asm:   0x387d8d5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387d8da: mov rbx, qword ptr [rax]
// asm:   0x387d8dd: mov qword ptr [rsp + 8], rbx
// asm:   0x387d8e2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387d8e7: jmp 0x387d87c
// asm:   0x387d8e9: mov rbx, rax
// asm:   0x387d8ec: lea rdi, [rsp + 8]
// asm:   0x387d8f1: call 0x2ad7d20  ; il2cpp_runtime_helper_02ad7d20()
// asm:   0x387d8f6: mov rdi, rbx
// asm:   0x387d8f9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387d8fe: mov rdi, rax
// asm:   0x387d901: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems_object_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_377D5D0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_T__array *pSVar5;
  System_Object_array *pSVar6;
  Il2CppObject *item;
  bool bVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_List_T___o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  int iVar9;
  undefined1 local_68 [16];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_58;
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  local_68._0_8_ = method;
  if (method->rgctx_data == (MethodInfo_377D5D0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar8 = method->rgctx_data->_0_System_Collections_Generic_List_List_T__;
    bVar2 = (pIVar8->_2).bitflags1;
  }
  else {
    pIVar8 = method->rgctx_data->_0_System_Collections_Generic_List_List_T__;
    bVar2 = (pIVar8->_2).bitflags1;
  }
  if ((bVar2 & 1) == 0) {
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
  }
  __this = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar8);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if ((items->fields)._size == 0) {
      return __this;
    }
    pIVar8 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(pIVar8);
    System_Collections_Generic_List_object____ctor
              (__this_00,(MethodInfo_395C910 *)method->rgctx_data->_4_System_Collections_Generic_List_T___ctor
              );
    if (__this != (System_Collections_Generic_List_List_T___o *)0x0) {
      pMVar4 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (System_Collections_Generic_List_T__array *)0x0) {
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = (System_Collections_Generic_List_T__o *)__this_00;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
          method = (MethodInfo_377D5D0 *)local_68._0_8_;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)((long)local_68 + 8),
                   (System_Collections_Generic_List_object__o *)items,
                   (MethodInfo_395E050 *)
                   method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator);
        local_48.fields._current = local_50;
        local_48.fields._list = (System_Collections_Generic_List_T__o *)local_68._8_8_;
        local_48.fields._8_8_ = pSStack_58;
        local_68._8_8_ = (System_Collections_Generic_List_T__o *)0x0;
        iVar9 = 0;
        pSStack_58 = &local_48;
        local_50 = (Il2CppObject *)local_68;
        while( true ) {
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_48,
                             (MethodInfo_4C45C50 *)
                             (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))->
                             _12_System_Collections_Generic_List_Enumerator_T__MoveNext);
          item = local_48.fields._current;
          if (!bVar7) {
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (&local_48,
                       (MethodInfo_4C45C40 *)
                       (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))[1].
                       _0_System_Collections_Generic_List_List_T__);
            return __this;
          }
          iVar9 = iVar9 + 1;
          if (groupSize + 1 <= iVar9) {
            pIVar8 = (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))->
                     _2_System_Collections_Generic_List_T_;
            if (((pIVar8->_2).bitflags1 & 1) == 0) {
              pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
            }
            __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(pIVar8);
            System_Collections_Generic_List_object____ctor
                      (__this_00,
                       (MethodInfo_395C910 *)
                       (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))->
                       _4_System_Collections_Generic_List_T___ctor);
            pMVar4 = (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))->
                     _5_System_Collections_Generic_List_List_T___Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this->fields)._items;
            if (pSVar5 == (System_Collections_Generic_List_T__array *)0x0) {
              ThrowNullReferenceException();
            }
            uVar3 = (__this->fields)._size;
            if (uVar3 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar3 + 1;
              pSVar5->m_Items[(int)uVar3] = (System_Collections_Generic_List_T__o *)__this_00;
              iVar9 = 1;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
            }
            else {
              iVar9 = 1;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          pMVar4 = (*(MethodInfo_377D5D0_RGCTXs **)(local_68._0_8_ + 0x38))->
                   _11_System_Collections_Generic_List_T__Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this_00->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) break;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GroupItems<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_377D910* method);
// 0x387d910
// eh: try 0x387db2b..0x387dc89 -> pad 0x387dc9a (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387dcba..0x387dcbf -> pad 0x387dcc4 cleanup
// eh: try 0x387dcc7..0x387dcd3 -> pad 0x387dcdb catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387dbb0: mov rbx, qword ptr [rbp - 0x58]
// asm:   0x387dc8e: mov rdi, rbx
// asm:   0x387dc91: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387dc96: jmp 0x387dca0
// asm:   0x387dc98: jmp 0x387dca0
// asm:   0x387dc9a: jmp 0x387dca0
// asm:   0x387dc9c: jmp 0x387dca0
// asm:   0x387dc9e: jmp 0x387dca0
// asm:   0x387dca0: mov rbx, rax
// asm:   0x387dca3: cmp edx, 1
// asm:   0x387dca6: jne 0x387dcc7
// asm:   0x387dca8: mov rdi, rbx
// asm:   0x387dcab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387dcb0: mov rbx, qword ptr [rax]
// asm:   0x387dcb3: mov qword ptr [rbp - 0x88], rbx
// asm:   0x387dcba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387dcbf: jmp 0x387dc2d
// asm:   0x387dcc4: mov rbx, rax
// asm:   0x387dcc7: lea rdi, [rbp - 0x88]
// asm:   0x387dcce: call 0x2ad7d50  ; il2cpp_runtime_helper_02ad7d50()
// asm:   0x387dcd3: mov rdi, rbx
// asm:   0x387dcd6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387dcdb: mov rdi, rax
// asm:   0x387dcde: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_377D910 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  long lVar4;
  ulong __n;
  System_Collections_Generic_List_T__o *pSVar5;
  void *pvVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  System_Collections_Generic_List_List_T___o *pSVar12;
  MethodInfo_377D910_RGCTXs *pMVar13;
  void *pvVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  ulong uVar17;
  Il2CppClass *pIVar18;
  undefined8 uStack_b0;
  Il2CppClass *pIStack_a8;
  ulong local_a0;
  Il2CppClass *local_98;
  Il2CppClass *local_90;
  MethodInfo_377D910 **local_88;
  long *local_80;
  void **local_78;
  long local_70;
  ulong local_68;
  System_Collections_Generic_List_List_T___o *local_60;
  System_Collections_Generic_List_T__o *local_58;
  int32_t local_4c;
  Il2CppClass *local_48;
  void *local_40;
  MethodInfo_377D910 *local_38;
  
  pMVar13 = method->rgctx_data;
  local_58 = items;
  local_4c = groupSize;
  local_38 = method;
  if (pMVar13 == (MethodInfo_377D910_RGCTXs *)0x0) {
    uStack_b0 = 0x387d940;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar13 = method->rgctx_data;
  }
  pIVar10 = pMVar13->_7_System_Collections_Generic_List_Enumerator_T_;
  uVar8 = (pIVar10->_2).stack_slot_size;
  uVar17 = (ulong)uVar8;
  local_68 = (ulong)(pMVar13->_10_T->_2).stack_slot_size;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    uStack_b0 = 0x387d96e;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    uVar8 = (pIVar10->_2).stack_slot_size;
    pMVar13 = method->rgctx_data;
  }
  __n = local_68;
  local_70 = (long)&pIStack_a8 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar16 = local_68 + 0xf & 0xfffffffffffffff0;
  pIVar18 = (Il2CppClass *)(local_70 - uVar16);
  uVar11 = uVar17 + 0xf & 0xfffffffffffffff0;
  local_98 = (Il2CppClass *)((long)pIVar18 - uVar11);
  pvVar14 = (void *)((long)local_98 - uVar11);
  local_a0 = uVar17;
  local_40 = pvVar14;
  *(undefined8 *)((long)pvVar14 + -8) = 0x387d9db;
  memset(pvVar14,0,uVar17);
  pvVar14 = (void *)((long)pvVar14 - uVar16);
  *(undefined8 *)((long)pvVar14 + -8) = 0x387d9f1;
  memset(pvVar14,0,__n);
  pIVar10 = pMVar13->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar10->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)pvVar14 + -8) = 0x387da02;
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  pSVar5 = local_58;
  *(undefined8 *)((long)pvVar14 + -8) = 0x387da0e;
  pSVar12 = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar10);
  pIVar1 = local_38->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor->methodPointer;
  *(undefined8 *)((long)pvVar14 + -8) = 0x387da22;
  (*pIVar1)(pSVar12);
  if (pSVar5 == (System_Collections_Generic_List_T__o *)0x0) {
label_0387dc89:
    *(undefined8 *)((long)pvVar14 + -8) = 0x387dc8e;
    ThrowNullReferenceException();
  }
  pIVar1 = local_38->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer;
  *(undefined8 *)((long)pvVar14 + -8) = 0x387da3c;
  iVar9 = (*pIVar1)(pSVar5);
  if (iVar9 != 0) {
    pIVar10 = local_38->rgctx_data->_2_System_Collections_Generic_List_T_;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)pvVar14 + -8) = 0x387da5e;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    *(undefined8 *)((long)pvVar14 + -8) = 0x387da66;
    pIVar10 = (Il2CppClass *)il2cpp_codegen_object_new(pIVar10);
    pIVar1 = local_38->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
    *(undefined8 *)((long)pvVar14 + -8) = 0x387da7a;
    (*pIVar1)(pIVar10);
    if (pSVar12 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_0387dc89;
    pMVar2 = local_38->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
    pIVar1 = pMVar2->methodPointer;
    pIVar3 = pMVar2->invoker_method;
    local_90 = pIVar10;
    local_60 = pSVar12;
    *(undefined8 *)((long)pvVar14 + -8) = 0x387daad;
    (*pIVar3)(pIVar1,pMVar2,pSVar12,&local_90,pIVar10);
    pSVar5 = local_58;
    pIVar15 = local_98;
    pMVar2 = local_38->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
    pIVar1 = pMVar2->methodPointer;
    local_90 = local_98;
    pIVar3 = pMVar2->invoker_method;
    *(undefined8 *)((long)pvVar14 + -8) = 0x387dadb;
    (*pIVar3)(pIVar1,pMVar2,pSVar5,&local_90,pIVar15);
    pvVar6 = local_40;
    uVar17 = local_a0;
    *(undefined8 *)((long)pvVar14 + -8) = 0x387daee;
    memcpy(pvVar6,pIVar15,uVar17);
    local_90 = (Il2CppClass *)0x0;
    local_88 = &local_38;
    local_80 = &local_70;
    local_78 = &local_40;
    local_4c = local_4c + 1;
    iVar9 = 0;
    while( true ) {
      pvVar6 = local_40;
      pIVar1 = local_38->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T__MoveNext->methodPointer
      ;
      *(undefined8 *)((long)pvVar14 + -8) = 0x387db47;
      cVar7 = (*pIVar1)(pvVar6);
      pvVar6 = local_40;
      pSVar12 = local_60;
      if (cVar7 == '\0') break;
      pMVar2 = local_38->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_48 = pIVar18;
      *(undefined8 *)((long)pvVar14 + -8) = 0x387db70;
      (*pIVar3)(pIVar1,pMVar2,pvVar6,&local_48,pIVar18);
      uVar17 = local_68;
      *(undefined8 *)((long)pvVar14 + -8) = 0x387db7f;
      memcpy(pvVar14,pIVar18,uVar17);
      pSVar12 = local_60;
      iVar9 = iVar9 + 1;
      if (local_4c <= iVar9) {
        pIVar10 = local_38->rgctx_data->_2_System_Collections_Generic_List_T_;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          *(undefined8 *)((long)pvVar14 + -8) = 0x387dba9;
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        *(undefined8 *)((long)pvVar14 + -8) = 0x387dbbc;
        pIVar10 = (Il2CppClass *)il2cpp_codegen_object_new(pIVar10);
        pIVar1 = local_38->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
        *(undefined8 *)((long)pvVar14 + -8) = 0x387dbd0;
        (*pIVar1)(pIVar10);
        pMVar2 = local_38->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
        pIVar1 = pMVar2->methodPointer;
        pIVar3 = pMVar2->invoker_method;
        local_48 = pIVar10;
        *(undefined8 *)((long)pvVar14 + -8) = 0x387dbf0;
        (*pIVar3)(pIVar1,pMVar2,pSVar12,&local_48,pIVar10);
        iVar9 = 1;
      }
      uVar17 = local_68;
      *(undefined8 *)((long)pvVar14 + -8) = 0x387dc05;
      memcpy(pIVar18,pvVar14,uVar17);
      if (pIVar10 == (Il2CppClass *)0x0) {
        *(undefined8 *)((long)pvVar14 + -8) = 0x387dc89;
        ThrowNullReferenceException();
      }
      pIVar15 = pIVar18;
      if (-1 < (int)(local_38->rgctx_data->_10_T->_1).byval_arg.bits) {
        pIVar15 = (pIVar18->_1).image;
      }
      pMVar2 = local_38->rgctx_data->_11_System_Collections_Generic_List_T__Add;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_48 = pIVar15;
      *(undefined8 *)((long)pvVar14 + -8) = 0x387db35;
      (*pIVar3)(pIVar1,pMVar2,pIVar10,&local_48,pIVar15);
    }
    pMVar13 = local_38->rgctx_data;
    pIVar10 = pMVar13->_7_System_Collections_Generic_List_Enumerator_T_;
    if (((pIVar10->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)pvVar14 + -8) = 0x387dc4b;
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      pMVar13 = local_38->rgctx_data;
    }
    pvVar6 = local_40;
    lVar4 = local_70;
    pIVar18 = pMVar13[1]._0_System_Collections_Generic_List_List_T__;
    *(undefined8 *)((long)pvVar14 + -8) = 0x387dc6d;
    il2cpp_runtime_helper_030d6e00(pIVar10,pIVar18,lVar4,pvVar6,0,0);
  }
  return pSVar12;
}


// Utility.Util$$GroupBuckets<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets_object_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_377CDC0* method);
// 0x387cdc0
// eh: try 0x387cf5f..0x387d0c1 -> pad 0x387d0c7 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387d0e3..0x387d0e8 -> pad 0x387d0ed cleanup
// eh: try 0x387d0f0..0x387d0fa -> pad 0x387d102 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387d029: jmp 0x387cdfc
// asm:   0x387d0b4: mov rdi, rbx
// asm:   0x387d0b7: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387d0c1: jmp 0x387d0cb
// asm:   0x387d0c3: jmp 0x387d0cb
// asm:   0x387d0c5: jmp 0x387d0cb
// asm:   0x387d0c7: jmp 0x387d0cb
// asm:   0x387d0c9: jmp 0x387d0cb
// asm:   0x387d0cb: mov rbp, rax
// asm:   0x387d0ce: cmp edx, 1
// asm:   0x387d0d1: jne 0x387d0f0
// asm:   0x387d0d3: mov rdi, rbp
// asm:   0x387d0d6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387d0db: mov rbx, qword ptr [rax]
// asm:   0x387d0de: mov qword ptr [rsp + 8], rbx
// asm:   0x387d0e3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387d0e8: jmp 0x387d04a
// asm:   0x387d0ed: mov rbp, rax
// asm:   0x387d0f0: lea rdi, [rsp + 8]
// asm:   0x387d0f5: call 0x2ad7c90  ; il2cpp_runtime_helper_02ad7c90()
// asm:   0x387d0fa: mov rdi, rbp
// asm:   0x387d0fd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387d102: mov rdi, rax
// asm:   0x387d105: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets_object_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_377CDC0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_T__array *pSVar6;
  System_Object_array *pSVar7;
  undefined8 uVar8;
  Il2CppObject *item;
  bool bVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_List_List_T___o *__this;
  System_Collections_Generic_List_object__o *pSVar11;
  int index;
  int32_t iVar12;
  undefined1 local_68 [16];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_58;
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  local_68._0_8_ = method;
  if (method->rgctx_data == (MethodInfo_377CDC0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar10 = method->rgctx_data->_0_System_Collections_Generic_List_List_T__;
    bVar2 = (pIVar10->_2).bitflags1;
  }
  else {
    pIVar10 = method->rgctx_data->_0_System_Collections_Generic_List_List_T__;
    bVar2 = (pIVar10->_2).bitflags1;
  }
  if ((bVar2 & 1) == 0) {
    pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
  }
  __this = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar10);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  if (0 < buckets) {
    if (__this == (System_Collections_Generic_List_List_T___o *)0x0) {
      pIVar10 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar10->_2).bitflags1 & 1) == 0) {
        pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      }
      pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(pIVar10);
      System_Collections_Generic_List_object____ctor
                (pSVar11,(MethodInfo_395C910 *)method->rgctx_data->_3_System_Collections_Generic_List_T___ctor
                );
      ThrowNullReferenceException();
    }
    iVar12 = buckets;
    do {
      while( true ) {
        uVar8 = local_68._0_8_;
        pIVar10 = (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
                  _2_System_Collections_Generic_List_T_;
        if (((pIVar10->_2).bitflags1 & 1) == 0) {
          pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
        }
        pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(pIVar10);
        System_Collections_Generic_List_object____ctor
                  (pSVar11,(MethodInfo_395C910 *)
                           (*(MethodInfo_377CDC0_RGCTXs **)(uVar8 + 0x38))->
                           _3_System_Collections_Generic_List_T___ctor);
        pMVar5 = (*(MethodInfo_377CDC0_RGCTXs **)(uVar8 + 0x38))->
                 _4_System_Collections_Generic_List_List_T___Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_Collections_Generic_List_T__array *)0x0) goto label_0387d077;
        uVar3 = (__this->fields)._size;
        if ((uint)pSVar6->max_length <= uVar3) break;
        (__this->fields)._size = uVar3 + 1;
        pSVar6->m_Items[(int)uVar3] = (System_Collections_Generic_List_T__o *)pSVar11;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) goto label_0387cec7;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar11,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
label_0387cec7:
  if (items == (System_Collections_Generic_List_T__o *)0x0) {
label_0387d077:
    ThrowNullReferenceException();
  }
  if ((buckets != 0) && (iVar4 = (items->fields)._size, iVar4 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)local_68 + 8),
               (System_Collections_Generic_List_object__o *)items,
               (MethodInfo_395E050 *)
               (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
               _6_System_Collections_Generic_List_T__GetEnumerator);
    local_48.fields._current = local_50;
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_68._8_8_;
    local_48.fields._8_8_ = pSStack_58;
    local_68._8_8_ = (System_Collections_Generic_List_T__o *)0x0;
    pSStack_58 = &local_48;
    if (__this == (System_Collections_Generic_List_List_T___o *)0x0) {
      local_50 = (Il2CppObject *)local_68;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_4C45C50 *)
                         (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
                         _13_System_Collections_Generic_List_Enumerator_T__MoveNext);
      if (bVar9) {
        ThrowNullReferenceException();
      }
    }
    else {
      index = 0;
      local_50 = (Il2CppObject *)local_68;
      while (bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_48,
                                (MethodInfo_4C45C50 *)
                                (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
                                _13_System_Collections_Generic_List_Enumerator_T__MoveNext),
            item = local_48.fields._current, bVar9) {
        pSVar11 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this,index,
                             (MethodInfo_395CF20 *)
                             (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
                             _11_System_Collections_Generic_List_List_T___get_Item);
        if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
label_0387d07c:
          ThrowNullReferenceException();
        }
        pMVar5 = (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))->
                 _12_System_Collections_Generic_List_T__Add;
        piVar1 = &(pSVar11->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar7 = (pSVar11->fields)._items;
        if (pSVar7 == (System_Object_array *)0x0) goto label_0387d07c;
        uVar3 = (pSVar11->fields)._size;
        if (uVar3 < (uint)pSVar7->max_length) {
          (pSVar11->fields)._size = uVar3 + 1;
          pSVar7->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar11,item,(MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        index = index + (uint)(index < buckets + -1 && iVar4 / buckets <= (pSVar11->fields)._size);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_48,
               (MethodInfo_4C45C40 *)
               (*(MethodInfo_377CDC0_RGCTXs **)(local_68._0_8_ + 0x38))[1].
               _0_System_Collections_Generic_List_List_T__);
  }
  return __this;
}


// Utility.Util$$GroupBuckets<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_377D110* method);
// 0x387d110
// eh: try 0x387d390..0x387d57b -> pad 0x387d58b (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x387d5a5..0x387d5aa -> pad 0x387d5af cleanup
// eh: try 0x387d5b2..0x387d5be -> pad 0x387d5c6 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387d37d: nop dword ptr [rax]
// asm:   0x387d53b: mov rdi, rbx
// asm:   0x387d53e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x387d57b: jmp 0x387d58b
// asm:   0x387d57d: jmp 0x387d58b
// asm:   0x387d57f: jmp 0x387d58b
// asm:   0x387d581: jmp 0x387d58b
// asm:   0x387d583: jmp 0x387d58b
// asm:   0x387d585: jmp 0x387d58b
// asm:   0x387d587: jmp 0x387d58b
// asm:   0x387d589: jmp 0x387d58b
// asm:   0x387d58b: mov rbx, rax
// asm:   0x387d58e: cmp edx, 1
// asm:   0x387d591: jne 0x387d5b2
// asm:   0x387d593: mov rdi, rbx
// asm:   0x387d596: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x387d59b: mov rbx, qword ptr [rax]
// asm:   0x387d59e: mov qword ptr [rbp - 0xa0], rbx
// asm:   0x387d5a5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x387d5aa: jmp 0x387d4a5
// asm:   0x387d5af: mov rbx, rax
// asm:   0x387d5b2: lea rdi, [rbp - 0xa0]
// asm:   0x387d5b9: call 0x2ad7cc0  ; il2cpp_runtime_helper_02ad7cc0()
// asm:   0x387d5be: mov rdi, rbx
// asm:   0x387d5c1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x387d5c6: mov rdi, rax
// asm:   0x387d5c9: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_377D110 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  System_Collections_Generic_List_List_T___o *pSVar8;
  System_Collections_Generic_List_T__o *pSVar9;
  void *__dest;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  Il2CppClass *pIVar14;
  Il2CppObject *pIVar15;
  MethodInfo_377D110_RGCTXs *pMVar16;
  char *pcVar17;
  ulong uVar18;
  void *pvVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int32_t iVar22;
  undefined8 *puVar23;
  undefined8 uStack_c0;
  Il2CppObject local_b8;
  Il2CppObject *local_a8;
  MethodInfo_377D110 **local_a0;
  long *local_98;
  void **local_90;
  long local_88;
  void *local_80;
  ulong local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 *local_68;
  char *local_60;
  System_Collections_Generic_List_List_T___o *local_58;
  System_Collections_Generic_List_T__o *local_50;
  undefined8 *local_48;
  void *local_40;
  MethodInfo_377D110 *local_38;
  
  pMVar16 = method->rgctx_data;
  local_50 = items;
  local_38 = method;
  if (pMVar16 == (MethodInfo_377D110_RGCTXs *)0x0) {
    uStack_c0 = 0x387d143;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pMVar16 = method->rgctx_data;
  }
  pIVar14 = pMVar16->_7_System_Collections_Generic_List_Enumerator_T_;
  uVar11 = (pIVar14->_2).stack_slot_size;
  pcVar17 = (char *)(ulong)uVar11;
  uVar21 = (ulong)(pMVar16->_10_T->_2).stack_slot_size;
  if (((pIVar14->_2).bitflags1 & 1) == 0) {
    uStack_c0 = 0x387d16f;
    pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
    uVar11 = (pIVar14->_2).stack_slot_size;
    pMVar16 = method->rgctx_data;
  }
  local_88 = (long)&local_b8 - ((ulong)(uVar11 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar18 = uVar21 + 0xf & 0xfffffffffffffff0;
  local_68 = (undefined8 *)(local_88 - uVar18);
  puVar23 = (undefined8 *)((long)local_68 - uVar18);
  local_b8.monitor = (void *)((long)puVar23 - ((ulong)(pcVar17 + 0xf) & 0xfffffffffffffff0));
  pvVar19 = (void *)((long)local_b8.monitor - ((ulong)(pcVar17 + 0xf) & 0xfffffffffffffff0));
  local_60 = pcVar17;
  local_40 = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x387d1e3;
  memset(pvVar19,0,(size_t)pcVar17);
  pvVar19 = (void *)((long)pvVar19 - uVar18);
  local_80 = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x387d1fa;
  memset(pvVar19,0,uVar21);
  pIVar14 = pMVar16->_0_System_Collections_Generic_List_List_T__;
  local_78 = uVar21;
  if (((pIVar14->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d20f;
    pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x387d217;
  local_58 = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar14);
  pIVar1 = local_38->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor->methodPointer;
  *(undefined8 *)((long)pvVar19 + -8) = 0x387d22c;
  (*pIVar1)();
  if (0 < buckets) {
    if (local_58 == (System_Collections_Generic_List_List_T___o *)0x0) {
      pIVar14 = local_38->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar14->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d51d;
        pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d525;
      pIVar15 = il2cpp_codegen_object_new(pIVar14);
      pIVar1 = local_38->rgctx_data->_3_System_Collections_Generic_List_T___ctor->methodPointer;
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d536;
      (*pIVar1)(pIVar15);
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d53b;
      ThrowNullReferenceException();
    }
    iVar22 = buckets;
    do {
      pIVar14 = local_38->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar14->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d2ab;
        pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d255;
      pIVar15 = il2cpp_codegen_object_new(pIVar14);
      pIVar1 = local_38->rgctx_data->_3_System_Collections_Generic_List_T___ctor->methodPointer;
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d269;
      (*pIVar1)(pIVar15);
      pSVar8 = local_58;
      pMVar2 = local_38->rgctx_data->_4_System_Collections_Generic_List_List_T___Add;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_a8 = pIVar15;
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d28c;
      (*pIVar3)(pIVar1,pMVar2,pSVar8,&local_a8,pIVar15);
      iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
  }
  pSVar9 = local_50;
  if (local_50 == (System_Collections_Generic_List_T__o *)0x0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d503;
    ThrowNullReferenceException();
  }
  pIVar1 = local_38->rgctx_data->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
  *(undefined8 *)((long)pvVar19 + -8) = 0x387d2ce;
  iVar12 = (*pIVar1)(pSVar9);
  if ((buckets != 0) && (iVar12 != 0)) {
    pIVar1 = local_38->rgctx_data->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d2f0;
    local_6c = (*pIVar1)(pSVar9);
    pvVar5 = local_b8.monitor;
    local_6c = local_6c / buckets;
    pMVar2 = local_38->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
    pIVar1 = pMVar2->methodPointer;
    local_a8 = local_b8.monitor;
    pIVar3 = pMVar2->invoker_method;
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d324;
    (*pIVar3)(pIVar1,pMVar2,pSVar9,&local_a8,pvVar5);
    __dest = local_40;
    pcVar17 = local_60;
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d334;
    memcpy(__dest,pvVar5,(size_t)pcVar17);
    pvVar5 = local_40;
    local_a8 = (Il2CppObject *)0x0;
    local_a0 = &local_38;
    local_98 = &local_88;
    local_90 = &local_40;
    if (local_58 == (System_Collections_Generic_List_List_T___o *)0x0) {
      pIVar1 = local_38->rgctx_data->_13_System_Collections_Generic_List_Enumerator_T__MoveNext->methodPointer
      ;
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d49b;
      cVar10 = (*pIVar1)(pvVar5);
      pvVar5 = local_40;
      puVar23 = local_68;
      if (cVar10 != '\0') {
        pMVar2 = local_38->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar1 = pMVar2->methodPointer;
        local_48 = local_68;
        pIVar3 = pMVar2->invoker_method;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d565;
        (*pIVar3)(pIVar1,pMVar2,pvVar5,&local_48,puVar23);
        puVar23 = local_68;
        uVar21 = local_78;
        pvVar5 = local_80;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d576;
        memcpy(pvVar5,puVar23,uVar21);
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d57b;
        ThrowNullReferenceException();
      }
    }
    else {
      local_50 = (System_Collections_Generic_List_T__o *)((ulong)local_50 & 0xffffffff00000000);
      local_60 = (char *)CONCAT44(local_60._4_4_,buckets + -1);
      while( true ) {
        pvVar5 = local_40;
        pIVar1 = local_38->rgctx_data->_13_System_Collections_Generic_List_Enumerator_T__MoveNext->
                 methodPointer;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d392;
        cVar10 = (*pIVar1)(pvVar5);
        pvVar5 = local_40;
        puVar7 = local_68;
        if (cVar10 == '\0') break;
        pMVar2 = local_38->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar1 = pMVar2->methodPointer;
        local_48 = local_68;
        pIVar3 = pMVar2->invoker_method;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d3c1;
        (*pIVar3)(pIVar1,pMVar2,pvVar5,&local_48,puVar7);
        uVar21 = local_78;
        pvVar5 = local_80;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d3d7;
        memcpy(pvVar5,puVar7,uVar21);
        pSVar8 = local_58;
        pMVar2 = local_38->rgctx_data->_11_System_Collections_Generic_List_List_T___get_Item;
        pIVar1 = pMVar2->methodPointer;
        local_70 = (int)local_50;
        local_b8.klass = (Il2CppClass *)&local_70;
        pIVar3 = pMVar2->invoker_method;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d408;
        (*pIVar3)(pIVar1,pMVar2,pSVar8,&local_b8.klass,&local_48);
        puVar7 = local_48;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d41a;
        memcpy(puVar23,pvVar5,uVar21);
        if (puVar7 == (undefined8 *)0x0) {
          *(undefined8 *)((long)pvVar19 + -8) = 0x387d4fe;
          ThrowNullReferenceException();
        }
        iVar12 = (int)local_60;
        puVar20 = puVar23;
        if (-1 < (int)(local_38->rgctx_data->_10_T->_1).byval_arg.bits) {
          puVar20 = (undefined8 *)*puVar23;
        }
        pMVar2 = local_38->rgctx_data->_12_System_Collections_Generic_List_T__Add;
        pIVar1 = pMVar2->methodPointer;
        pIVar3 = pMVar2->invoker_method;
        local_48 = puVar20;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d45a;
        (*pIVar3)(pIVar1,pMVar2,puVar7,&local_48,puVar20);
        pIVar1 = local_38->rgctx_data->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
        *(undefined8 *)((long)pvVar19 + -8) = 0x387d46b;
        iVar13 = (*pIVar1)(puVar7);
        local_50 = (System_Collections_Generic_List_T__o *)
                   CONCAT44(local_50._4_4_,
                            (int)local_50 + (uint)((int)local_50 < iVar12 && local_6c <= iVar13));
      }
    }
    pMVar16 = local_38->rgctx_data;
    pIVar14 = pMVar16->_7_System_Collections_Generic_List_Enumerator_T_;
    if (((pIVar14->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)pvVar19 + -8) = 0x387d4bf;
      pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      pMVar16 = local_38->rgctx_data;
    }
    pvVar5 = local_40;
    lVar6 = local_88;
    pIVar4 = pMVar16[1]._0_System_Collections_Generic_List_List_T__;
    *(undefined8 *)((long)pvVar19 + -8) = 0x387d4e1;
    il2cpp_runtime_helper_030d6e00(pIVar14,pIVar4,lVar6,pvVar5,0,0);
  }
  return local_58;
}


// Utility.Util$$GetRandomFromWeightedList
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedList (System_Collections_Generic_List_object__o* values, System_Collections_Generic_List_float__o* weights, const MethodInfo* method);
// 0x5df1ed0
// eh: try 0x5df1fa3..0x5df1fab -> pad 0x5df2089 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5df20a1..0x5df20a6 -> pad 0x5df20cb cleanup
// eh: try 0x5df20ce..0x5df20d8 -> pad 0x5df20e0 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df2060: jmp 0x5df2064
// asm:   0x5df2089: mov rbx, rax
// asm:   0x5df208c: cmp edx, 1
// asm:   0x5df208f: jne 0x5df20ce
// asm:   0x5df2091: mov rdi, rbx
// asm:   0x5df2094: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df2099: mov rbx, qword ptr [rax]
// asm:   0x5df209c: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5df20a1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df20a6: lea rax, [rip + 0x149c9a3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose
// asm:   0x5df20ad: mov rsi, qword ptr [rax]
// asm:   0x5df20b0: lea rdi, [rsp + 0x10]
// asm:   0x5df20b5: call 0x4d51ea0  ; System_Collections_Generic_List_Enumerator_float___Dispose()
// asm:   0x5df20ba: test rbx, rbx
// asm:   0x5df20bd: je 0x5df1fd7
// asm:   0x5df20c3: mov rdi, rbx
// asm:   0x5df20c6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df20cb: mov rbx, rax
// asm:   0x5df20ce: lea rdi, [rsp + 0x28]
// asm:   0x5df20d3: call 0x2fdf940  ; il2cpp_runtime_helper_02fdf940()
// asm:   0x5df20d8: mov rdi, rbx
// asm:   0x5df20db: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df20e0: mov rdi, rax
// asm:   0x5df20e3: call 0x2ab61e0  ; __clang_call_terminate()

Il2CppObject *
Utility_Util__GetRandomFromWeightedList
          (System_Collections_Generic_List_object__o *values,System_Collections_Generic_List_float__o *weights
          ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int32_t index;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  undefined8 local_30;
  System_Collections_Generic_List_Enumerator_T__o *local_28;
  
  if (Il2CppMethodInitialized_075482fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_float_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_float_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_get_Item);
    Il2CppMethodInitialized_075482fe = '\x01';
  }
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_4_ = 0;
  local_48._12_4_ = 0;
  local_38 = (Il2CppObject *)0x0;
  if (weights != (System_Collections_Generic_List_float__o *)0x0) {
    System_Collections_Generic_List_float___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,weights,
               (MethodInfo_39AD5C0 *)MethodInfo_System_Collections_Generic_List_float_GetEnumerator);
    local_30 = 0;
    local_50 = 0.0;
    local_28 = (System_Collections_Generic_List_Enumerator_T__o *)local_48;
    while (bVar1 = System_Collections_Generic_List_Enumerator_float___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                              (MethodInfo_4C51EB0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_float_MoveNext), bVar1) {
      local_50 = local_50 + local_38._0_4_;
    }
    System_Collections_Generic_List_Enumerator_float___Dispose
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (MethodInfo_4C51EA0 *)MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose);
    index = 0;
    fVar3 = UnityEngine_Random__Range(0.0,local_50,(MethodInfo *)0x0);
    if (values != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (values->fields)._size) {
        fVar5 = 0.0;
        index = 0;
        do {
          if ((fVar5 <= fVar3) &&
             (fVar4 = System_Collections_Generic_List_float___get_Item
                                (weights,index,
                                 (MethodInfo_39AC490 *)
                                 MethodInfo_System_Collections_Generic_List_float_get_Item),
             fVar3 < fVar4 + fVar5)) goto label_05df2064;
          fVar4 = System_Collections_Generic_List_float___get_Item
                            (weights,index,
                             (MethodInfo_39AC490 *)MethodInfo_System_Collections_Generic_List_float_get_Item);
          fVar5 = fVar5 + fVar4;
          index = index + 1;
        } while (index < (values->fields)._size);
        index = 0;
      }
label_05df2064:
      pIVar2 = System_Collections_Generic_List_object___get_Item
                         (values,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetRandomFromWeightedNode
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedNode (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5df20f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df226a: mov r12, rsp
// asm:   0x5df226d: lea rbp, [rip + 0x14a456c]  ; MethodInfo_System_Collections_Generic_List_float_Add
// asm:   0x5df2274: jmp 0x5df22a9

Il2CppObject * Utility_Util__GetRandomFromWeightedNode(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Single_array *pSVar4;
  bool bVar5;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_float__o *__this_00;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  Il2CppObject *pIVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_01;
  float item;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_075482ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075482ff = '\x01';
  }
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (__this,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            (__this_00,(MethodInfo_39ABE80 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05df2445:
    ThrowNullReferenceException();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,node,(MethodInfo *)0x0);
  local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
  local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
  local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
  local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
  local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
  local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
  local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
  local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
  local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
  local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
  local_c8.type = local_78.type;
  local_c8._4_4_ = local_78._4_4_;
  local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,
             (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
  pMVar9 = extraout_RDX;
  if (bVar5) {
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)(pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        ThrowNullReferenceException();
      }
      goto label_05df2445;
    }
    do {
      pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05df2445;
      pSVar6 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
      pMVar9 = MethodInfo_System_Collections_Generic_List_object_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto label_05df2445;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)pSVar6,(MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      pSVar6 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,pSVar6,(node->klass->vtable)._7_get_Item.method);
      if ((pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (item = (*(pSVar7->klass->vtable)._37_get_AsFloat.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._37_get_AsFloat.method),
         pMVar9 = MethodInfo_System_Collections_Generic_List_float_Add,
         __this_00 == (System_Collections_Generic_List_float__o *)0x0)) goto label_05df2445;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_00->fields)._items;
      if (pSVar4 == (System_Single_array *)0x0) goto label_05df2445;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = item;
      }
      else {
        System_Collections_Generic_List_float___AddWithResize
                  (__this_00,item,(MethodInfo_39AC7A0 *)pMVar9->klass->rgctx_data[0xe].method);
      }
      bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      pMVar9 = extraout_RDX_00;
    } while (bVar5);
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    pMVar9 = extraout_RDX_01;
  }
  pIVar8 = Utility_Util__GetRandomFromWeightedList(__this,__this_00,pMVar9);
  return pIVar8;
}


// Utility.Util$$DistanceIgnoreY
// il2cpp: float Utility_Util__DistanceIgnoreY (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x5df2470

float Utility_Util__DistanceIgnoreY(UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = a.fields.x - b.fields.x;
  fVar2 = a.fields.z - b.fields.z;
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  fVar1 = sqrtf(fVar1);
  return fVar1;
}


// Utility.Util$$PaginateDictionary<object, object>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary_object__object_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_377DCF0* method);
// 0x387dcf0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387dd63: jmp 0x387ddc1
// asm:   0x387df42: jmp 0x387df87
// asm:   0x387e0bd: jmp 0x387de00
// asm:   0x387e0f1: jmp 0x387dfc6

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary_object__object_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_377DCF0 *method)

{
  MethodInfo_377DCF0_RGCTXs **ppMVar1;
  byte bVar2;
  Il2CppObject *pIVar3;
  MethodInfo_377DCF0_RGCTXs *pMVar4;
  Il2CppClass *pIVar5;
  System_Func_T__TResult__o *pSVar6;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar7;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar8;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  ppMVar1 = &method->rgctx_data;
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_377DCF0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    pMVar4 = *ppMVar1;
    if (pMVar4 != (MethodInfo_377DCF0_RGCTXs *)0x0) goto label_0387dd28;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar5 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387dd7e;
label_0387dd35:
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387dd3e;
label_0387dd8f:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387dda5;
label_0387dd4f:
    pSVar6 = *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 8);
  }
  else {
label_0387dd28:
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387dd35;
label_0387dd7e:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387dd8f;
label_0387dd3e:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387dd4f;
label_0387dda5:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pSVar6 = *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 8);
  }
  if (pSVar6 == (System_Func_T__TResult__o *)0x0) {
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e0a3;
label_0387dde3:
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).bitflags1;
    }
    else {
      if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387dde3;
label_0387e0a3:
      il2cpp_codegen_runtime_class_init(pIVar5);
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      pMVar4 = *ppMVar1;
    }
    pIVar3 = *(Il2CppObject **)pIVar5->static_fields;
    pIVar5 = pMVar4->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    pSVar6 = (System_Func_T__TResult__o *)il2cpp_codegen_object_new(pIVar5);
    System_Func_KeyValuePair_object__object___object____ctor
              (pSVar6,pIVar3,
               (intptr_t)(*ppMVar1)->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0,
               (MethodInfo_4F10320 *)(*ppMVar1)->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 8) = pSVar6;
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    Il2CppCodeGenWriteBarrier((void **)((long)pIVar5->static_fields + 8));
  }
  source = System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)dict,
                      (System_Func_TSource__TKey__o *)pSVar6,
                      (MethodInfo_34F1A50 *)
                      (*ppMVar1)->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_);
  pSVar7 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_3500CB0 *)
                      (*ppMVar1)->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__);
  if (pSVar7 == (System_Collections_Generic_List_TSource__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  pSVar8 = System_Linq_Enumerable__Skip_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                      (pageNumber + -1) * elementsPerPage,
                      (MethodInfo_34FD750 *)
                      (*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__);
  pSVar8 = System_Linq_Enumerable__Take_KeyValuePair_object__object__
                     (pSVar8,elementsPerPage,
                      (MethodInfo_34FDB30 *)
                      (*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__);
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387df55;
label_0387df1d:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387df2e;
label_0387df6b:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pSVar6 = *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 0x10);
  }
  else {
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387df1d;
label_0387df55:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387df6b;
label_0387df2e:
    pSVar6 = *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 0x10);
  }
  if (pSVar6 != (System_Func_T__TResult__o *)0x0) goto label_0387e057;
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e0d7;
label_0387dfa9:
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).bitflags1;
  }
  else {
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387dfa9;
label_0387e0d7:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).bitflags1;
  }
  if ((bVar2 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pMVar4 = *ppMVar1;
  }
  pIVar3 = *(Il2CppObject **)pIVar5->static_fields;
  pIVar5 = pMVar4->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pSVar6 = (System_Func_T__TResult__o *)il2cpp_codegen_object_new(pIVar5);
  System_Func_KeyValuePair_object__object___object____ctor
            (pSVar6,pIVar3,
             (intptr_t)(*ppMVar1)->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1,
             (MethodInfo_4F10320 *)(*ppMVar1)->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor);
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(System_Func_T__TResult__o **)((long)pIVar5->static_fields + 0x10) = pSVar6;
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  Il2CppCodeGenWriteBarrier((void **)((long)pIVar5->static_fields + 0x10));
label_0387e057:
  source_00 = System_Linq_Enumerable__Select_KeyValuePair_object__object___object_
                        (pSVar8,(System_Func_TSource__TResult__o *)pSVar6,
                         (MethodInfo_34F3680 *)
                         (*ppMVar1)->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_);
  pSVar7 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_35011B0 *)(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_);
  return (System_Collections_Generic_List_TValue__o *)pSVar7;
}


// Utility.Util$$PaginateDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_377E1D0* method);
// 0x387e1d0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x387e243: jmp 0x387e2a1
// asm:   0x387e420: jmp 0x387e465
// asm:   0x387e595: jmp 0x387e2e0
// asm:   0x387e5c9: jmp 0x387e4a4

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_377E1D0 *method)

{
  MethodInfo_377E1D0_RGCTXs **ppMVar1;
  byte bVar2;
  undefined8 uVar3;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo_377E1D0_RGCTXs *pMVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  long lVar8;
  System_Collections_Generic_List_TValue__o *pSVar9;
  undefined1 auVar10 [16];
  
  ppMVar1 = &method->rgctx_data;
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_377E1D0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    pMVar4 = *ppMVar1;
    if (pMVar4 != (MethodInfo_377E1D0_RGCTXs *)0x0) goto label_0387e208;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    pIVar5 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387e25e;
label_0387e215:
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387e21e;
label_0387e26f:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387e285;
label_0387e22f:
    pIVar6 = *(Il2CppObject **)((long)pIVar5->static_fields + 8);
  }
  else {
label_0387e208:
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387e215;
label_0387e25e:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e26f;
label_0387e21e:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387e22f;
label_0387e285:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppObject **)((long)pIVar5->static_fields + 8);
  }
  if (pIVar6 == (Il2CppObject *)0x0) {
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e57b;
label_0387e2c3:
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).bitflags1;
    }
    else {
      if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387e2c3;
label_0387e57b:
      il2cpp_codegen_runtime_class_init(pIVar5);
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      pMVar4 = *ppMVar1;
    }
    uVar7 = *(undefined8 *)pIVar5->static_fields;
    pIVar5 = pMVar4->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    pIVar6 = il2cpp_codegen_object_new(pIVar5);
    (*(*ppMVar1)->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor->methodPointer)
              (pIVar6,uVar7,(*ppMVar1)->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    *(Il2CppObject **)((long)pIVar5->static_fields + 8) = pIVar6;
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    Il2CppCodeGenWriteBarrier((void **)((long)pIVar5->static_fields + 8));
  }
  uVar7 = (*(*ppMVar1)->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_->methodPointer)
                    (dict,pIVar6);
  lVar8 = (*(*ppMVar1)->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__->methodPointer)(uVar7);
  if (lVar8 == 0) {
    ThrowNullReferenceException();
  }
  (*(*ppMVar1)->_11_System_Collections_Generic_List_KeyValuePair_TKey__TValue___get_Count->methodPointer)
            (lVar8);
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar7 = (*(*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__->methodPointer)
                    (lVar8,(ulong)(uint)((pageNumber + -1) * elementsPerPage));
  uVar7 = (*(*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__->methodPointer)
                    (uVar7,(ulong)(uint)elementsPerPage);
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e433;
label_0387e3fb:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) != 0) goto label_0387e40c;
label_0387e449:
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pIVar6 = *(Il2CppObject **)((long)pIVar5->static_fields + 0x10);
  }
  else {
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387e3fb;
label_0387e433:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).bitflags1 & 1) == 0) goto label_0387e449;
label_0387e40c:
    pIVar6 = *(Il2CppObject **)((long)pIVar5->static_fields + 0x10);
  }
  if (pIVar6 != (Il2CppObject *)0x0) goto label_0387e532;
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    if ((pIVar5->_2).cctor_finished_or_no_cctor == 0) goto label_0387e5af;
label_0387e487:
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).bitflags1;
  }
  else {
    if ((pIVar5->_2).cctor_finished_or_no_cctor != 0) goto label_0387e487;
label_0387e5af:
    il2cpp_codegen_runtime_class_init(pIVar5);
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).bitflags1;
  }
  if ((bVar2 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pMVar4 = *ppMVar1;
  }
  uVar3 = *(undefined8 *)pIVar5->static_fields;
  pIVar5 = pMVar4->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  pIVar6 = il2cpp_codegen_object_new(pIVar5);
  (*(*ppMVar1)->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor->methodPointer)
            (pIVar6,uVar3,(*ppMVar1)->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1);
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  *(Il2CppObject **)((long)pIVar5->static_fields + 0x10) = pIVar6;
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
  }
  Il2CppCodeGenWriteBarrier((void **)((long)pIVar5->static_fields + 0x10));
label_0387e532:
  auVar10 = (*(*ppMVar1)->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_->methodPointer
            )(uVar7,pIVar6);
  vtableDispatch = (*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_->methodPointer;
  pSVar9 = (System_Collections_Generic_List_TValue__o *)
           (*vtableDispatch)
                     (auVar10._0_8_,(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_,auVar10._8_8_,
                      vtableDispatch);
  return pSVar9;
}


// Utility.Util$$ColorText
// il2cpp: System_String_o* Utility_Util__ColorText (System_String_o* text, System_String_o* color, const MethodInfo* method);
// 0x5df24b0

System_String_o * Utility_Util__ColorText(System_String_o *text,System_String_o *color,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=");
    Il2CppMethodInitialized_07548300 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "<color=";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = color;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = ">";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = text;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = "</color>";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Utility.Util$$SizeText
// il2cpp: System_String_o* Utility_Util__SizeText (System_String_o* text, int32_t size, const MethodInfo* method);
// 0x5df25d0

System_String_o * Utility_Util__SizeText(System_String_o *text,int32_t size,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07548301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"<size={0}>{1}</size>");
    Il2CppMethodInitialized_07548301 = '\x01';
  }
  arg0 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  pSVar1 = System_String__Format_5302c50("<size={0}>{1}</size>",arg0,(Il2CppObject *)text,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$RichTextTag
// il2cpp: System_String_o* Utility_Util__RichTextTag (System_String_o* text, System_String_o* tag, System_String_o* value, const MethodInfo* method);
// 0x5df2630

System_String_o *
Utility_Util__RichTextTag
          (System_String_o *text,System_String_o *tag,System_String_o *value,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07548302 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,9);
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = "<";
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = tag;
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = "=";
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = value;
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = ">";
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = text;
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              if (6 < (uint)values->max_length) {
                values->m_Items[6] = "</";
                Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                if ((values->max_length & 0xfffffff8) != 0) {
                  values->m_Items[7] = tag;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 7);
                  if (8 < (uint)values->max_length) {
                    values->m_Items[8] = ">";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 8);
                    pSVar1 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                    return pSVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Utility.Util$$ConstrainedToX
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToX (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x5df27d0

UnityEngine_Quaternion_o Utility_Util__ConstrainedToX(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o UStack_20;
  UnityEngine_Quaternion_o UStack_10;
  
  UStack_10.fields = rotation.fields;
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_10,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  UStack_20.fields.x = UVar1.fields.x * 0.017453292;
  UStack_20.fields.y = 0.0;
  UStack_20.fields.z = 0.0;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(&UStack_20,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Utility.Util$$ConstrainedToY
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToY (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x5df2830

UnityEngine_Quaternion_o Utility_Util__ConstrainedToY(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o local_20;
  UnityEngine_Quaternion_o local_10;
  
  local_10.fields = rotation.fields;
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_10,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  local_20.fields.x = 0.0;
  local_20.fields.y = UVar1.fields.y * 0.017453292;
  local_20.fields.z = 0.0;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(&local_20,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Utility.Util$$ConstrainedToZ
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x5df28a0

UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Quaternion_Fields UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_Fields local_20;
  UnityEngine_Quaternion_o local_10;
  
  local_10.fields = rotation.fields;
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_10,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  local_20.x = 0.0;
  local_20.y = 0.0;
  local_20.z = UVar2.fields.z * 0.017453292;
  UVar1 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad((UnityEngine_Vector3_o *)&local_20,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar1;
}


// Utility.Util$$GetAllTitanAgentIds
// il2cpp: System_Collections_Generic_List_int__o* Utility_Util__GetAllTitanAgentIds (const MethodInfo* method);
// 0x5df2900
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df29f5: jmp 0x5df2a10
// asm:   0x5df2aa5: jmp 0x5df2ac0
// asm:   0x5df2b55: jmp 0x5df2b70

System_Collections_Generic_List_int__o * Utility_Util__GetAllTitanAgentIds(MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_float__string___o *source;
  Il2CppObject *pIVar1;
  System_Func_T__TResult__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar2;
  System_Func_Nullable_int___bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  Utility_Util___c_StaticFields *pUVar3;
  System_Func_Nullable_int___int__o *__this_01;
  System_Collections_Generic_List_TSource__o *pSVar4;
  
  if (Il2CppMethodInitialized_07548303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_KeyValuePair_float_string_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_Nullable_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Nullable_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_float_string_Nullable_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Nullable_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548303 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  source = TypeInfo_Utility_Util->static_fields->_agentSizes;
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this = (System_Func_T__TResult__o *)pUVar3->__9__41_0;
  }
  else {
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this = (System_Func_T__TResult__o *)pUVar3->__9__41_0;
  }
  if (__this == (System_Func_T__TResult__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Utility_Util_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
      pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar3->__9;
    __this = (System_Func_T__TResult__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_float_string_Nullable_int);
    System_Func_KeyValuePair_float__object___Nullable_int_____ctor
              (__this,pIVar1,(intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_0,
               (MethodInfo_4F103E0 *)0x0);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    pUVar3->__9__41_0 = (System_Func_KeyValuePair_float__string___Nullable_int___o *)__this;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__41_0);
  }
  pSVar2 = System_Linq_Enumerable__Select_KeyValuePair_float__object___Nullable_int__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_34F3980 *)
                      MethodInfo_System_Linq_Enumerable_Select_KeyValuePair_float_string_Nullable_int);
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this_00 = pUVar3->__9__41_1;
  }
  else {
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this_00 = pUVar3->__9__41_1;
  }
  if (__this_00 == (System_Func_Nullable_int___bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Utility_Util_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
      pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar3->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Nullable_int_bool);
    System_Func_Nullable_int___bool____ctor
              (__this_00,pIVar1,(intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_1,
               (MethodInfo_4F107A0 *)0x0);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    pUVar3->__9__41_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__41_1);
  }
  source_00 = System_Linq_Enumerable__Where_Nullable_int__
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3501FB0 *)MethodInfo_System_Linq_Enumerable_Where_Nullable_int);
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this_01 = pUVar3->__9__41_2;
  }
  else {
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    __this_01 = pUVar3->__9__41_2;
  }
  if (__this_01 == (System_Func_Nullable_int___int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Utility_Util_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
      pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar3->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Nullable_int_int);
    System_Func_Nullable_int___int____ctor
              (__this_01,pIVar1,(intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_2,
               (MethodInfo_4F10860 *)0x0);
    pUVar3 = TypeInfo_Utility_Util_c->static_fields;
    pUVar3->__9__41_2 = __this_01;
    Il2CppCodeGenWriteBarrier(&pUVar3->__9__41_2);
  }
  pSVar2 = System_Linq_Enumerable__Select_Nullable_int___int_
                     (source_00,(System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_34F3C80 *)MethodInfo_System_Linq_Enumerable_Select_Nullable_int_int);
  pSVar4 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                      (MethodInfo_3500DB0 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  return (System_Collections_Generic_List_int__o *)pSVar4;
}


// Utility.Util$$GetAgentSizeBucket
// il2cpp: System_Collections_Generic_KeyValuePair_float__string__o Utility_Util__GetAgentSizeBucket (float size, const MethodInfo* method);
// 0x5df2c10
// eh: try 0x5df2d23..0x5df2d2b -> pad 0x5df2d79 catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5df2d91..0x5df2d96 -> pad 0x5df2db7 cleanup
// eh: try 0x5df2dba..0x5df2dc4 -> pad 0x5df2dcc catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df2d79: mov rbx, rax
// asm:   0x5df2d7c: cmp edx, 1
// asm:   0x5df2d7f: jne 0x5df2dba
// asm:   0x5df2d81: mov rdi, rbx
// asm:   0x5df2d84: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5df2d89: mov rbx, qword ptr [rax]
// asm:   0x5df2d8c: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5df2d91: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5df2d96: lea rax, [rip + 0x149a5d3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_Dispose
// asm:   0x5df2d9d: mov rsi, qword ptr [rax]
// asm:   0x5df2da0: lea rdi, [rsp + 0x20]
// asm:   0x5df2da5: call 0x4d1cd50  ; System_Collections_Generic_List_Enumerator_KeyValuePair_float__object____Dispose()
// asm:   0x5df2daa: test rbx, rbx
// asm:   0x5df2dad: je 0x5df2d61
// asm:   0x5df2daf: mov rdi, rbx
// asm:   0x5df2db2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5df2db7: mov rbx, rax
// asm:   0x5df2dba: lea rdi, [rsp + 0x10]
// asm:   0x5df2dbf: call 0x2fdf970  ; il2cpp_runtime_helper_02fdf970()
// asm:   0x5df2dc4: mov rdi, rbx
// asm:   0x5df2dc7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5df2dcc: mov rdi, rax
// asm:   0x5df2dcf: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_KeyValuePair_float__string__o
Utility_Util__GetAgentSizeBucket(float size,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_float__string___o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_KeyValuePair_float__object__o SVar4;
  System_Collections_Generic_KeyValuePair_float__string__o SVar5;
  float local_50;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  System_String_o *pSStack_20;
  
  if (Il2CppMethodInitialized_07548304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548304 = '\x01';
  }
  local_28 = (Il2CppObject *)0x0;
  pSStack_20 = (System_String_o *)0x0;
  local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_38._8_4_ = 0;
  local_38._12_4_ = 0;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = TypeInfo_Utility_Util->static_fields->_agentSizes;
  if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
    SVar4 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                      ((System_Collections_Generic_List_T__o *)pSVar1,0,
                       (MethodInfo_516C320 *)
                       MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
    local_50 = SVar4.fields.key;
    pSVar1 = TypeInfo_Utility_Util->static_fields->_agentSizes;
    if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
      System_Collections_Generic_List_KeyValuePair_float__object____GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_T__o *)pSVar1,
                 (MethodInfo_516D620 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_GetEnumerator);
      pSVar3 = (System_String_o *)SVar4.fields.value;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_KeyValuePair_float__object____MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                           (MethodInfo_4C1CD60 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_MoveNext
                          );
        if (!bVar2) break;
        if (local_28._0_4_ <= size) {
          local_50 = local_28._0_4_;
          pSVar3 = pSStack_20;
        }
      }
      System_Collections_Generic_List_Enumerator_KeyValuePair_float__object____Dispose
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (MethodInfo_4C1CD50 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_Dispose);
      SVar5.fields._4_4_ = 0;
      SVar5.fields.key = local_50;
      SVar5.fields.value = pSVar3;
      return (System_Collections_Generic_KeyValuePair_float__string__o)SVar5.fields;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetAgentSettings
// il2cpp: UnityEngine_AI_NavMeshBuildSettings_o Utility_Util__GetAgentSettings (float size, float* bucketSize, const MethodInfo* method);
// 0x5df2de0

UnityEngine_AI_NavMeshBuildSettings_o *
Utility_Util__GetAgentSettings
          (UnityEngine_AI_NavMeshBuildSettings_o *__return_storage_ptr__,float size,float *bucketSize,
          MethodInfo *method)

{
  int32_t agentTypeID;
  MethodInfo *method_00;
  Utility_Util_c *method_01;
  System_Collections_Generic_KeyValuePair_float__string__o SVar1;
  System_Nullable_int__o local_58;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_50;
  
  method_00 = (MethodInfo *)bucketSize;
  if (Il2CppMethodInitialized_07548305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548305 = '\x01';
  }
  method_01 = TypeInfo_Utility_Util;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  SVar1 = Utility_Util__GetAgentSizeBucket(size,(MethodInfo *)method_01);
  *bucketSize = SVar1.fields.key;
  local_58 = Utility_Util__GetNavMeshAgentID(SVar1.fields.value,method_00);
  agentTypeID = System_Nullable_int___get_Value
                          (&local_58,(MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
  UnityEngine_AI_NavMesh__GetSettingsByID
            ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_50,agentTypeID,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).m_BuildHeightMesh = local_50.m_BuildHeightMesh;
  (__return_storage_ptr__->fields).m_MaxJobWorkers = local_50.m_MaxJobWorkers;
  (__return_storage_ptr__->fields).m_PreserveTilesOutsideBounds = local_50.m_PreserveTilesOutsideBounds;
  (__return_storage_ptr__->fields).m_Debug =
       (UnityEngine_AI_NavMeshBuildDebugSettings_o)local_50.m_Debug.fields.m_Flags;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x3d = local_50._61_3_;
  (__return_storage_ptr__->fields).m_OverrideVoxelSize = local_50.m_OverrideVoxelSize;
  (__return_storage_ptr__->fields).m_VoxelSize = local_50.m_VoxelSize;
  (__return_storage_ptr__->fields).m_OverrideTileSize = local_50.m_OverrideTileSize;
  (__return_storage_ptr__->fields).m_TileSize = local_50.m_TileSize;
  (__return_storage_ptr__->fields).m_AgentClimb = local_50.m_AgentClimb;
  (__return_storage_ptr__->fields).m_LedgeDropHeight = local_50.m_LedgeDropHeight;
  (__return_storage_ptr__->fields).m_MaxJumpAcrossDistance = local_50.m_MaxJumpAcrossDistance;
  (__return_storage_ptr__->fields).m_MinRegionArea = local_50.m_MinRegionArea;
  (__return_storage_ptr__->fields).m_AgentTypeID = local_50.m_AgentTypeID;
  (__return_storage_ptr__->fields).m_AgentRadius = local_50.m_AgentRadius;
  (__return_storage_ptr__->fields).m_AgentHeight = local_50.m_AgentHeight;
  (__return_storage_ptr__->fields).m_AgentSlope = local_50.m_AgentSlope;
  return __return_storage_ptr__;
}


// Utility.Util$$GetAgentSize
// il2cpp: float Utility_Util__GetAgentSize (UnityEngine_CapsuleCollider_o* collider, const MethodInfo* method);
// 0x5df2ff0

float Utility_Util__GetAgentSize(UnityEngine_CapsuleCollider_o *collider,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_float__string___o *__this;
  undefined1 auVar1 [16];
  int32_t agentTypeID;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  UnityEngine_Vector3_o UVar5;
  System_Collections_Generic_KeyValuePair_float__object__o SVar6;
  System_Nullable_int__o local_e0;
  float local_d8;
  float fStack_d4;
  float local_c8;
  undefined4 uStack_c4;
  float local_b8;
  float fStack_b4;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_98;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_50;
  
  if (Il2CppMethodInitialized_07548306 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548306 = '\x01';
  }
  if (collider != (UnityEngine_CapsuleCollider_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_lossyScale(__this_00,(MethodInfo *)0x0);
      fStack_a0 = (float)extraout_XMM0_Dc;
      local_a8 = UVar5.fields._0_8_;
      fStack_9c = (float)extraout_XMM0_Dd;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      __this = TypeInfo_Utility_Util->static_fields->_agentSizes;
      if (__this != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        SVar6 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                          ((System_Collections_Generic_List_T__o *)__this,0,
                           (MethodInfo_516C320 *)
                           MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
        local_e0 = Utility_Util__GetNavMeshAgentID((System_String_o *)SVar6.fields.value,method_00);
        agentTypeID = System_Nullable_int___get_Value
                                (&local_e0,(MethodInfo_3CD4BC0 *)MethodInfo_System_Nullable_int_get_Value);
        UnityEngine_AI_NavMesh__GetSettingsByID
                  ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_50,agentTypeID,(MethodInfo *)0x0);
        local_98.m_BuildHeightMesh = local_50.m_BuildHeightMesh;
        local_98.m_MaxJobWorkers = local_50.m_MaxJobWorkers;
        local_98.m_PreserveTilesOutsideBounds = local_50.m_PreserveTilesOutsideBounds;
        local_98.m_Debug.fields.m_Flags = local_50.m_Debug.fields.m_Flags;
        local_98._61_3_ = local_50._61_3_;
        local_98.m_OverrideVoxelSize = local_50.m_OverrideVoxelSize;
        local_98.m_VoxelSize = local_50.m_VoxelSize;
        local_98.m_OverrideTileSize = local_50.m_OverrideTileSize;
        local_98.m_TileSize = local_50.m_TileSize;
        local_98.m_AgentClimb = local_50.m_AgentClimb;
        local_98.m_LedgeDropHeight = local_50.m_LedgeDropHeight;
        local_98.m_MaxJumpAcrossDistance = local_50.m_MaxJumpAcrossDistance;
        local_98.m_MinRegionArea = local_50.m_MinRegionArea;
        local_98.m_AgentTypeID = local_50.m_AgentTypeID;
        local_98.m_AgentRadius = local_50.m_AgentRadius;
        local_98.m_AgentHeight = local_50.m_AgentHeight;
        local_98.m_AgentSlope = local_50.m_AgentSlope;
        local_b8 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
        fStack_b4 = extraout_XMM0_Db;
        local_c8 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                             ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_98,(MethodInfo *)0x0);
        uStack_c4 = extraout_XMM0_Db_00;
        local_d8 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
        fStack_d4 = extraout_XMM0_Db_01;
        fVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_98,(MethodInfo *)0x0);
        auVar3._0_4_ = (float)local_a8._0_4_ * local_b8;
        auVar3._4_4_ = (float)local_a8._4_4_ * local_d8;
        auVar3._8_4_ = fStack_a0 * fStack_b4;
        auVar3._12_4_ = fStack_9c * fStack_d4;
        auVar1._4_4_ = fVar2;
        auVar1._0_4_ = local_c8;
        auVar1._8_4_ = uStack_c4;
        auVar1._12_4_ = extraout_XMM0_Db_02;
        auVar4 = divps(auVar3,auVar1);
        if (auVar4._0_4_ <= auVar4._4_4_) {
          auVar4._0_4_ = auVar4._4_4_;
        }
        return auVar4._0_4_ * SVar6.fields.key;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetNavMeshAgentID
// il2cpp: System_Nullable_int__o Utility_Util__GetNavMeshAgentID (System_String_o* name, const MethodInfo* method);
// 0x5df2ed0

System_Nullable_int__o Utility_Util__GetNavMeshAgentID(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *b;
  System_Nullable_int__Fields SVar3;
  int index;
  System_Nullable_int__Fields local_b0;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_a8;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_60;
  
  if (Il2CppMethodInitialized_07548307 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    Il2CppMethodInitialized_07548307 = '\x01';
  }
  local_a8.m_BuildHeightMesh = 0;
  local_a8.m_MaxJobWorkers = 0;
  local_a8.m_PreserveTilesOutsideBounds = 0;
  local_a8.m_Debug.fields.m_Flags = (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)0x0;
  local_a8._61_3_ = 0;
  local_a8.m_OverrideVoxelSize = 0;
  local_a8.m_VoxelSize = 0.0;
  local_a8.m_OverrideTileSize = 0;
  local_a8.m_TileSize = 0;
  local_a8.m_AgentClimb = 0.0;
  local_a8.m_LedgeDropHeight = 0.0;
  local_a8.m_MaxJumpAcrossDistance = 0.0;
  local_a8.m_MinRegionArea = 0.0;
  local_a8.m_AgentTypeID = 0;
  local_a8.m_AgentRadius = 0.0;
  local_a8.m_AgentHeight = 0.0;
  local_a8.m_AgentSlope = 0.0;
  index = 0;
  iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      UnityEngine_AI_NavMesh__GetSettingsByIndex
                ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_60,index,(MethodInfo *)0x0);
      local_a8.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
      local_a8.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
      local_a8.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
      local_a8.m_Debug.fields.m_Flags = local_60.m_Debug.fields.m_Flags;
      local_a8._61_3_ = local_60._61_3_;
      local_a8.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
      local_a8.m_VoxelSize = local_60.m_VoxelSize;
      local_a8.m_OverrideTileSize = local_60.m_OverrideTileSize;
      local_a8.m_TileSize = local_60.m_TileSize;
      local_a8.m_AgentClimb = local_60.m_AgentClimb;
      local_a8.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
      local_a8.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
      local_a8.m_MinRegionArea = local_60.m_MinRegionArea;
      local_a8.m_AgentTypeID = local_60.m_AgentTypeID;
      local_a8.m_AgentRadius = local_60.m_AgentRadius;
      local_a8.m_AgentHeight = local_60.m_AgentHeight;
      local_a8.m_AgentSlope = local_60.m_AgentSlope;
      iVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                        ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_a8,(MethodInfo *)0x0);
      b = UnityEngine_AI_NavMesh__GetSettingsNameFromID(iVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(name,b,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_a8,(MethodInfo *)0x0);
        local_b0.hasValue = false;
        local_b0._1_3_ = 0;
        local_b0.value = 0;
        System_Nullable_int____ctor
                  ((System_Nullable_int__o *)&local_b0,iVar2,
                   (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
        return (System_Nullable_int__o)local_b0;
      }
      index = index + 1;
      iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
    } while (index < iVar2);
  }
  SVar3.hasValue = false;
  SVar3._1_3_ = 0;
  SVar3.value = 0;
  return (System_Nullable_int__o)SVar3;
}


// Utility.Util$$Abs
// il2cpp: UnityEngine_Vector3_o Utility_Util__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x5df31a0

UnityEngine_Vector3_o Utility_Util__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Utility.Util$$TransformBounds
// il2cpp: UnityEngine_Bounds_o Utility_Util__TransformBounds (UnityEngine_Bounds_o bounds, UnityEngine_Matrix4x4_o matrix, const MethodInfo* method);
// 0x5df31b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df3292: movsd xmm9, qword ptr [r12 + 0xc]
// asm:   0x5df3299: movss xmm11, dword ptr [r12 + 0x14]
// asm:   0x5df32a0: cmp byte ptr [rip + 0x174b485], 0
// asm:   0x5df32a7: je 0x5df3558

UnityEngine_Bounds_o *
Utility_Util__TransformBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,UnityEngine_Bounds_o bounds,
          UnityEngine_Matrix4x4_o matrix,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07548308 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548308 = '\x01';
  }
  if (Il2CppMethodInitialized_07544d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07544d56 = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar4 = (pUVar10->rightVector).fields.x;
  uVar7 = (pUVar10->rightVector).fields.y;
  fVar1 = (pUVar10->rightVector).fields.z;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar5 = (pUVar10->upVector).fields.x;
  uVar8 = (pUVar10->upVector).fields.y;
  fVar2 = (pUVar10->upVector).fields.z;
  if (Il2CppMethodInitialized_0753e72e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72e = '\x01';
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  uVar6 = (pUVar10->forwardVector).fields.x;
  uVar9 = (pUVar10->forwardVector).fields.y;
  fVar3 = (pUVar10->forwardVector).fields.z;
  local_68 = matrix.fields.m10;
  fStack_64 = matrix.fields.m20;
  fVar13 = bounds.fields.m_Extents.fields.x + bounds.fields.m_Extents.fields.x;
  fVar14 = bounds.fields.m_Extents.fields.y + bounds.fields.m_Extents.fields.y;
  fVar11 = bounds.fields.m_Center.fields.x;
  fVar12 = bounds.fields.m_Center.fields.y;
  local_58 = matrix.fields.m11;
  fStack_54 = matrix.fields.m21;
  fVar15 = bounds.fields.m_Extents.fields.z + bounds.fields.m_Extents.fields.z;
  local_48 = matrix.fields.m12;
  fStack_44 = matrix.fields.m22;
  (__return_storage_ptr__->fields).m_Center.fields.x =
       matrix.fields.m03 +
       bounds.fields.m_Center.fields.z * matrix.fields.m02 +
       fVar12 * matrix.fields.m01 + fVar11 * matrix.fields.m00;
  (__return_storage_ptr__->fields).m_Center.fields.y =
       matrix.fields.m13 + bounds.fields.m_Center.fields.z * local_48 + fVar12 * local_58 + fVar11 * local_68;
  (__return_storage_ptr__->fields).m_Center.fields.z =
       matrix.fields.m23 +
       bounds.fields.m_Center.fields.z * fStack_44 + fVar12 * fStack_54 + fVar11 * fStack_64;
  (__return_storage_ptr__->fields).m_Extents.fields.x =
       (ABS(matrix.fields.m02 * fVar3 + matrix.fields.m01 * (float)uVar9 + matrix.fields.m00 * (float)uVar6) *
        fVar15 + ABS(fVar2 * matrix.fields.m02 +
                     (float)uVar8 * matrix.fields.m01 + matrix.fields.m00 * (float)uVar5) * fVar14 +
                 fVar13 * ABS(fVar1 * matrix.fields.m02 +
                              (float)uVar7 * matrix.fields.m01 + (float)uVar4 * matrix.fields.m00)) * 0.5;
  (__return_storage_ptr__->fields).m_Extents.fields.y =
       (fVar15 * ABS(fVar3 * local_48 + (float)uVar9 * local_58 + (float)uVar6 * local_68) +
       ABS((float)uVar8 * local_58 + (float)uVar5 * local_68 + fVar2 * local_48) * fVar14 +
       ABS((float)uVar7 * local_58 + (float)uVar4 * local_68 + fVar1 * local_48) * fVar13) * 0.5;
  (__return_storage_ptr__->fields).m_Extents.fields.z =
       (fVar15 * ABS(fVar3 * fStack_44 + (float)uVar9 * fStack_54 + (float)uVar6 * fStack_64) +
       ABS((float)uVar7 * fStack_54 + (float)uVar4 * fStack_64 + fVar1 * fStack_44) * fVar13 +
       ABS((float)uVar8 * fStack_54 + (float)uVar5 * fStack_64 + fVar2 * fStack_44) * fVar14) * 0.5;
  return __return_storage_ptr__;
}


// Utility.Util$$EnumMax<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util__EnumMax___Il2CppFullySharedGenericType_ (const MethodInfo_377BF40* method);
// 0x387bf40

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util__EnumMax___Il2CppFullySharedGenericType_(MethodInfo_377BF40 *method)

{
  uint uVar1;
  System_RuntimeTypeHandle_o handle;
  Il2CppMethodPointer pIVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  MethodInfo_377BF40 *__dest;
  Il2CppRGCTXData *pIVar7;
  System_Type_o *enumType;
  System_Array_o *pSVar8;
  void *extraout_RDX;
  undefined1 *__src;
  undefined1 *puVar9;
  MethodInfo *in_RSI;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar10;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  MethodInfo_377BF40 *local_38;
  
  pIVar7 = (in_RSI->field7_0x38).rgctx_data;
  local_38 = method;
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
    uStack_50 = 0x387bf69;
    il2cpp_codegen_rgctx_method_init(in_RSI);
    pIVar7 = (in_RSI->field7_0x38).rgctx_data;
  }
  uVar1 = *(uint *)((long)pIVar7[4].klass + 0xfc);
  lVar6 = -((ulong)uVar1 + 0xf & 0xfffffffffffffff0);
  __src = (undefined1 *)((long)&local_48 + lVar6);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pIVar7->rgctxDataDummy;
  puVar9 = __src;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((long)&uStack_50 + lVar6) = 0x387bfa9;
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
    puVar9 = (undefined1 *)((long)&local_48 + lVar6);
  }
  *(undefined8 *)(puVar9 + -8) = 0x387bfb3;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)(puVar9 + -8) = 0x387bfcb;
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  *(undefined8 *)(puVar9 + -8) = 0x387bfd5;
  pSVar8 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar2 = ((in_RSI->field7_0x38).rgctx_data[1].method)->methodPointer;
  *(undefined8 *)(puVar9 + -8) = 0x387bfe3;
  local_48 = (*pIVar2)(pSVar8);
  puVar3 = *(undefined8 **)((long)(in_RSI->field7_0x38).methodMetadataHandle + 0x18);
  uVar4 = *puVar3;
  pcVar5 = (code *)puVar3[2];
  local_40 = __src;
  *(undefined8 *)(puVar9 + -8) = 0x387c003;
  (*pcVar5)(uVar4,puVar3,0,&local_48,__src);
  __dest = local_38;
  *(undefined8 *)(puVar9 + -8) = 0x387c012;
  UVar10.klass = memcpy(__dest,__src,(ulong)uVar1);
  UVar10.monitor = extraout_RDX;
  return UVar10;
}


// Utility.Util$$EnumMaxValue<Int32Enum>
// il2cpp: int32_t Utility_Util__EnumMaxValue_Int32Enum_ (const MethodInfo_377C030* method);
// 0x387c030

int32_t Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_377C030 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_377C030_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_377C030_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_377C030_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_
                        (source,(MethodInfo_34E07A0 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$EnumMaxValue<__Il2CppFullySharedGenericType>
// il2cpp: int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_ (const MethodInfo_377C0D0* method);
// 0x387c0d0

int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_(MethodInfo_377C0D0 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_377C0D0_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_377C0D0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_377C0D0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_
                        (source,(MethodInfo_34E07A0 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$IsValidFileName
// il2cpp: bool Utility_Util__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x5df3590

bool Utility_Util__IsValidFileName(System_String_o *fileName,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar1;
  int32_t iVar2;
  System_Char_array *anyOf;
  System_Char_array *anyOf_00;
  System_String_o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548309 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F8267399B780
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07548309 = '\x01';
  }
  anyOf = (System_Char_array *)SZArrayNew(TypeInfo_char_array,0x1a);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)anyOf,
             FieldRva_PrivateImplementationDetails_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F8267399B780
             ,(MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  anyOf_00 = System_IO_Path__GetInvalidFileNameChars((MethodInfo *)0x0);
  if (fileName == (System_String_o *)0x0) goto label_05df3733;
  iVar2 = System_String__IndexOfAny(fileName,anyOf_00,(MethodInfo *)0x0);
  if (iVar2 != -1) {
    return false;
  }
  iVar2 = System_String__IndexOfAny(fileName,anyOf,(MethodInfo *)0x0);
  if (iVar2 != -1) {
    return false;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    if (Il2CppMethodInitialized_0754830a == '\0') goto label_05df36e8;
label_05df3673:
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor != 0) goto label_05df3683;
label_05df3717:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    __this = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_Util->static_fields->ReservedFileNames;
  }
  else {
    if (Il2CppMethodInitialized_0754830a != '\0') goto label_05df3673;
label_05df36e8:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754830a = '\x01';
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) goto label_05df3717;
label_05df3683:
    __this = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_Util->static_fields->ReservedFileNames;
  }
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this,(Il2CppObject *)fileName,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    bVar3 = false;
    if (!bVar1) {
      a = System_String__Trim(fileName,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,fileName,(MethodInfo *)0x0);
      if (bVar1) {
        bVar3 = (fileName->fields)._stringLength < 0x32;
      }
    }
    return bVar3;
  }
label_05df3733:
  ThrowNullReferenceException();
}


// Utility.Util$$IsReservedFileName
// il2cpp: bool Utility_Util__IsReservedFileName (System_String_o* fileName, const MethodInfo* method);
// 0x5df3740

bool Utility_Util__IsReservedFileName(System_String_o *fileName,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754830a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754830a = '\x01';
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    __this = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_Util->static_fields->ReservedFileNames;
  }
  else {
    __this = *(System_Collections_Generic_HashSet_object__o **)
              ((long)((Il2CppClass *)TypeInfo_Utility_Util)->static_fields + 8);
  }
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (__this,(Il2CppObject *)fileName,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return bVar2;
}


// Utility.Util$$IsFileAccessError
// il2cpp: bool Utility_Util__IsFileAccessError (System_Exception_o* e, const MethodInfo* method);
// 0x5dee0e0

bool Utility_Util__IsFileAccessError(System_Exception_o *e,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  System_Exception_c *pSVar3;
  
  if (Il2CppMethodInitialized_0754830b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_IOException);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_UnauthorizedAccessException);
    Il2CppMethodInitialized_0754830b = '\x01';
  }
  if (e != (System_Exception_o *)0x0) {
    pSVar3 = e->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_System_IO_IOException->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_System_IO_IOException)) {
      return true;
    }
    bVar2 = (TypeInfo_System_UnauthorizedAccessException->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      return (pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
             (Il2CppClass *)TypeInfo_System_UnauthorizedAccessException;
    }
  }
  return false;
}


// Utility.Util$$GetPhotonTimestampDifference
// il2cpp: double Utility_Util__GetPhotonTimestampDifference (double sentTime, double serverTime, const MethodInfo* method);
// 0x5df37e0

double Utility_Util__GetPhotonTimestampDifference(double sentTime,double serverTime,MethodInfo *method)

{
  return (double)(~-(ulong)(serverTime < sentTime) & (ulong)-sentTime |
                 (ulong)(4294967.295 - sentTime) & -(ulong)(serverTime < sentTime)) + serverTime;
}


// Utility.Util$$ForceScalableParticleSystemMinMaxCurveMode
// il2cpp: bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode (UnityEngine_ParticleSystem_MinMaxCurve_o curve, UnityEngine_ParticleSystem_MinMaxCurve_o* newCurve, float scale, const MethodInfo* method);
// 0x5df3810

bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
               (UnityEngine_ParticleSystem_MinMaxCurve_o curve,
               UnityEngine_ParticleSystem_MinMaxCurve_o *newCurve,float scale,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_AnimationCurve_o *curve_00;
  float valueEnd;
  float local_40;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_38;
  
  iVar1 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(&curve,(MethodInfo *)0x0);
  if (iVar1 == 3) {
    local_40 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(&curve,(MethodInfo *)0x0);
    valueEnd = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(&curve,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 0) {
      (newCurve->fields).m_CurveMax = curve.fields.m_CurveMax;
      (newCurve->fields).m_ConstantMin = curve.fields.m_ConstantMin;
      (newCurve->fields).m_ConstantMax = curve.fields.m_ConstantMax;
      (newCurve->fields).m_Mode = curve.fields.m_Mode;
      (newCurve->fields).m_CurveMultiplier = curve.fields.m_CurveMultiplier;
      (newCurve->fields).m_CurveMin = curve.fields.m_CurveMin;
      Il2CppCodeGenWriteBarrier(&(newCurve->fields).m_CurveMin);
      return false;
    }
    local_40 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&curve,(MethodInfo *)0x0);
    valueEnd = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(&curve,(MethodInfo *)0x0);
  }
  curve_00 = UnityEngine_AnimationCurve__Linear(0.0,local_40,1.0,valueEnd,(MethodInfo *)0x0);
  local_38.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
  local_38.m_ConstantMin = 0.0;
  local_38.m_ConstantMax = 0.0;
  local_38.m_Mode = 0;
  local_38.m_CurveMultiplier = 0.0;
  local_38.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_69c4760
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_38,scale,curve_00,(MethodInfo *)0x0);
  (newCurve->fields).m_CurveMax = local_38.m_CurveMax;
  (newCurve->fields).m_ConstantMin = local_38.m_ConstantMin;
  (newCurve->fields).m_ConstantMax = local_38.m_ConstantMax;
  (newCurve->fields).m_Mode = local_38.m_Mode;
  (newCurve->fields).m_CurveMultiplier = local_38.m_CurveMultiplier;
  (newCurve->fields).m_CurveMin = local_38.m_CurveMin;
  Il2CppCodeGenWriteBarrier(&(newCurve->fields).m_CurveMin);
  return true;
}


// Utility.Util$$ScaleParticleStartSize
// il2cpp: void Utility_Util__ScaleParticleStartSize (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x5df3910

void Utility_Util__ScaleParticleStartSize
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o curve;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_ParticleSystem_MainModule_o local_50;
  Il2CppMethodPointer local_48;
  UnityEngine_AnimationCurve_o *pUStack_40;
  UnityEngine_AnimationCurve_o *local_38;
  Il2CppClass *pIStack_30;
  Il2CppType **local_20;
  _union_13 _Stack_18;
  _union_14 local_10;
  float fStack_8;
  float fStack_4;
  
  local_50 = (UnityEngine_ParticleSystem_MainModule_o)
             (UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem;
  if (Il2CppMethodInitialized_0754830c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754830c = '\x01';
  }
  local_38 = (UnityEngine_AnimationCurve_o *)0x0;
  pIStack_30 = (Il2CppClass *)0x0;
  local_48 = (Il2CppMethodPointer)0x0;
  pUStack_40 = (UnityEngine_AnimationCurve_o *)0x0;
  method_00 = (MethodInfo *)&local_50;
  UnityEngine_ParticleSystem_MainModule__get_startSize
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_20,
             (UnityEngine_ParticleSystem_MainModule_o *)method_00,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  curve.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)_Stack_18.rgctx_data;
  curve.fields._0_8_ = local_20;
  curve.fields.m_CurveMax = local_10.genericMethod;
  curve.fields.m_ConstantMin = fStack_8;
  curve.fields.m_ConstantMax = fStack_4;
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    (curve,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_48,scale,method_00);
  if (bVar1) {
    value.fields.m_CurveMin = pUStack_40;
    value.fields._0_8_ = local_48;
    value.fields.m_CurveMax = local_38;
    value.fields._24_8_ = pIStack_30;
    UnityEngine_ParticleSystem_MainModule__set_startSize(&local_50,value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_ParticleSystem_MainModule__set_startSizeMultiplier(&local_50,scale,(MethodInfo *)0x0);
  return;
}


// Utility.Util$$ScaleParticleStartSpeed
// il2cpp: void Utility_Util__ScaleParticleStartSpeed (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x5df39e0

void Utility_Util__ScaleParticleStartSpeed
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o curve;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_ParticleSystem_MainModule_o local_50;
  Il2CppMethodPointer local_48;
  UnityEngine_AnimationCurve_o *pUStack_40;
  UnityEngine_AnimationCurve_o *local_38;
  Il2CppClass *pIStack_30;
  Il2CppType **local_20;
  _union_13 _Stack_18;
  _union_14 local_10;
  float fStack_8;
  float fStack_4;
  
  local_50 = (UnityEngine_ParticleSystem_MainModule_o)
             (UnityEngine_ParticleSystem_MainModule_o)main.fields.m_ParticleSystem;
  if (Il2CppMethodInitialized_0754830d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754830d = '\x01';
  }
  local_38 = (UnityEngine_AnimationCurve_o *)0x0;
  pIStack_30 = (Il2CppClass *)0x0;
  local_48 = (Il2CppMethodPointer)0x0;
  pUStack_40 = (UnityEngine_AnimationCurve_o *)0x0;
  method_00 = (MethodInfo *)&local_50;
  UnityEngine_ParticleSystem_MainModule__get_startSpeed
            ((UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_20,
             (UnityEngine_ParticleSystem_MainModule_o *)method_00,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  curve.fields.m_CurveMin = (UnityEngine_AnimationCurve_o *)_Stack_18.rgctx_data;
  curve.fields._0_8_ = local_20;
  curve.fields.m_CurveMax = local_10.genericMethod;
  curve.fields.m_ConstantMin = fStack_8;
  curve.fields.m_ConstantMax = fStack_4;
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    (curve,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_48,scale,method_00);
  if (bVar1) {
    value.fields.m_CurveMin = pUStack_40;
    value.fields._0_8_ = local_48;
    value.fields.m_CurveMax = local_38;
    value.fields._24_8_ = pIStack_30;
    UnityEngine_ParticleSystem_MainModule__set_startSpeed(&local_50,value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_ParticleSystem_MainModule__set_startSpeedMultiplier(&local_50,scale,(MethodInfo *)0x0);
  return;
}


// Utility.Util$$IsValidResourcePath
// il2cpp: bool Utility_Util__IsValidResourcePath (System_String_o* path, const MethodInfo* method);
// 0x5df3ab0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df3b1d: nop dword ptr [rax]
// asm:   0x5df3b5c: jmp 0x5df3b61

bool Utility_Util__IsValidResourcePath(System_String_o *path,MethodInfo *method)

{
  uint uVar1;
  System_String_o *fileName;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754830e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_0754830e = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  if (path != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x2f;
    pSVar3 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      if ((int)pSVar3->max_length < 1) {
        return true;
      }
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      while( true ) {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        fileName = pSVar3->m_Items[uVar5];
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        bVar2 = Utility_Util__IsValidFileName(fileName,method_00);
        if (!bVar2) break;
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return bVar2;
        }
      }
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$.cctor
// il2cpp: void Utility_Util___cctor (const MethodInfo* method);
// 0x5df3b80

void Utility_Util___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint32_t uVar3;
  System_Collections_Generic_KeyValuePair_float__string__array *pSVar4;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Utility_Util_StaticFields *pUVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_KeyValuePair_float__string___o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_KeyValuePair_float__object__o item;
  System_Collections_Generic_KeyValuePair_float__object__o item_00;
  System_Collections_Generic_KeyValuePair_float__object__o item_01;
  System_Collections_Generic_KeyValuePair_float__object__o SStack_48;
  System_Collections_Generic_KeyValuePair_float__object__o SStack_38;
  System_Collections_Generic_KeyValuePair_float__object__o SStack_28;
  
  if (Il2CppMethodInitialized_0754830f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_float_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LPT3");
    il2cpp_codegen_initialize_runtime_metadata(&"NUL");
    il2cpp_codegen_initialize_runtime_metadata(&"COM2");
    il2cpp_codegen_initialize_runtime_metadata(&"AUX");
    il2cpp_codegen_initialize_runtime_metadata(&"CON");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT2");
    il2cpp_codegen_initialize_runtime_metadata(&"COM1");
    il2cpp_codegen_initialize_runtime_metadata(&"COM6");
    il2cpp_codegen_initialize_runtime_metadata(&"COM5");
    il2cpp_codegen_initialize_runtime_metadata(&"avgTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"COM8");
    il2cpp_codegen_initialize_runtime_metadata(&"COM4");
    il2cpp_codegen_initialize_runtime_metadata(&"maxTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT8");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT7");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT5");
    il2cpp_codegen_initialize_runtime_metadata(&"COM3");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT6");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT9");
    il2cpp_codegen_initialize_runtime_metadata(&"smallTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"COM7");
    il2cpp_codegen_initialize_runtime_metadata(&"PRN");
    il2cpp_codegen_initialize_runtime_metadata(&"COM9");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT4");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT1");
    Il2CppMethodInitialized_0754830f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KeyValuePair_float_string);
  System_Collections_Generic_List_KeyValuePair_float__object_____ctor
            ((System_Collections_Generic_List_T__o *)__this,
             (MethodInfo_516BD10 *)MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_ctor);
  SStack_28.fields._0_8_ = 0;
  SStack_28.fields.value = (Il2CppObject *)0x0;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            (&SStack_28,1.0,(Il2CppObject *)"smallTitan",
             (MethodInfo_513A610 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
  pMVar6 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
  if (__this == (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) goto label_05df41dd;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar4 = (__this->fields)._items;
  if (pSVar4 == (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) goto label_05df41dd;
  uVar2 = (__this->fields)._size;
  if (uVar2 < (uint)pSVar4->max_length) {
    (__this->fields)._size = uVar2 + 1;
    pSVar4->m_Items[(int)uVar2].fields.key = SStack_28.fields.key;
    pSVar4->m_Items[(int)uVar2].fields.value = (System_String_o *)SStack_28.fields.value;
    Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar2].fields.value);
  }
  else {
    item.fields.value = SStack_28.fields.value;
    item.fields._0_8_ = (ulong)(uint)SStack_28.fields.key;
    System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
              ((System_Collections_Generic_List_T__o *)__this,item,
               (MethodInfo_516C6B0 *)pMVar6->klass->rgctx_data[0xe].method);
  }
  SStack_38.fields._0_8_ = 0;
  SStack_38.fields.value = (Il2CppObject *)0x0;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            (&SStack_38,2.0,(Il2CppObject *)"avgTitan",
             (MethodInfo_513A610 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
  pMVar6 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar4 = (__this->fields)._items;
  if (pSVar4 == (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) goto label_05df41dd;
  uVar2 = (__this->fields)._size;
  if (uVar2 < (uint)pSVar4->max_length) {
    (__this->fields)._size = uVar2 + 1;
    pSVar4->m_Items[(int)uVar2].fields.key = SStack_38.fields.key;
    pSVar4->m_Items[(int)uVar2].fields.value = (System_String_o *)SStack_38.fields.value;
    Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar2].fields.value);
  }
  else {
    item_00.fields.value = SStack_38.fields.value;
    item_00.fields._0_8_ = (ulong)(uint)SStack_38.fields.key;
    System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
              ((System_Collections_Generic_List_T__o *)__this,item_00,
               (MethodInfo_516C6B0 *)pMVar6->klass->rgctx_data[0xe].method);
  }
  SStack_48.fields._0_8_ = 0;
  SStack_48.fields.value = (Il2CppObject *)0x0;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            (&SStack_48,2.75,(Il2CppObject *)"maxTitan",
             (MethodInfo_513A610 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
  pMVar6 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar4 = (__this->fields)._items;
  if (pSVar4 == (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) goto label_05df41dd;
  uVar2 = (__this->fields)._size;
  if (uVar2 < (uint)pSVar4->max_length) {
    (__this->fields)._size = uVar2 + 1;
    pSVar4->m_Items[(int)uVar2].fields.key = SStack_48.fields.key;
    pSVar4->m_Items[(int)uVar2].fields.value = (System_String_o *)SStack_48.fields.value;
    Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar2].fields.value);
  }
  else {
    item_01.fields.value = SStack_48.fields.value;
    item_01.fields._0_8_ = (ulong)(uint)SStack_48.fields.key;
    System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
              ((System_Collections_Generic_List_T__o *)__this,item_01,
               (MethodInfo_516C6B0 *)pMVar6->klass->rgctx_data[0xe].method);
  }
  TypeInfo_Utility_Util->static_fields->_agentSizes = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util->static_fields->_agentSizes);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (g_data_07542886 != '\0') goto label_05df3f57;
label_05df41ad:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    g_data_07542886 = '\x01';
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_07542886 == '\0') goto label_05df41ad;
label_05df3f57:
    uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"CON"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"PRN"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"AUX"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"NUL"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM1"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM2"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM3"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM4"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM5"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM6"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM7"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM8"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"COM9"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT1"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT2"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT3"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT4"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT5"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT6"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT7"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT8"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)"LPT9"
               ,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    pUVar5 = TypeInfo_Utility_Util->static_fields;
    pUVar5->ReservedFileNames = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar5->ReservedFileNames);
    return;
  }
label_05df41dd:
  ThrowNullReferenceException();
}


