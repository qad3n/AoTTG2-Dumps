// Type: Utility.Util
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Utility/Util.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Util.cs
// --------------------------------

// Utility.Util.<>c$$.cctor
// il2cpp: void Utility_Util___c___cctor (const MethodInfo* method);
// 0x182340e20

void Utility_Util___c___cctor(MethodInfo *method)

{
  Utility_Util___c_o *__this;
  
  if (Il2CppMethodInitialized_184347860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    Il2CppMethodInitialized_184347860 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Utility_Util_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9,__this);
  return;
}


// Utility.Util.<>c$$.ctor
// il2cpp: void Utility_Util___c___ctor (Utility_Util___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_Util___c___ctor(Utility_Util___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c$$<PascalToSentence>b__7_0
// il2cpp: System_String_o* Utility_Util___c___PascalToSentence_b__7_0 (Utility_Util___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x182340790

System_String_o *
Utility_Util___c___PascalToSentence_b__7_0
          (Utility_Util___c_o *__this,System_Text_RegularExpressions_Match_o *m,MethodInfo *method)

{
  uint16_t c;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  uint16_t local_res10 [8];
  uint16_t local_res20 [4];
  
  if (Il2CppMethodInitialized_184347861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0} {1}");
    Il2CppMethodInitialized_184347861 = '\x01';
  }
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Capture__ToString
                       ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      local_res10[0] = System_String__get_Chars(pSVar1,0,(MethodInfo *)0x0);
      arg0 = il2cpp_value_box(g_data_184354e48,local_res10);
      pSVar1 = System_Text_RegularExpressions_Capture__ToString
                         ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        c = System_String__get_Chars(pSVar1,1,(MethodInfo *)0x0);
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        local_res20[0] = System_Char__ToLower_1a7dee0(c,(MethodInfo *)0x0);
        arg1 = il2cpp_value_box(g_data_184354e48,local_res20);
        pSVar1 = System_String__Format_196d440("{0} {1}",arg0,arg1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util.<>c$$<RemoveNullOrDeadShifters>b__13_0
// il2cpp: bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0 (Utility_Util___c_o* __this, Characters_BaseShifter_o* e, const MethodInfo* method);
// 0x182340880

bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0
               (Utility_Util___c_o *__this,Characters_BaseShifter_o *e,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347862 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar1) {
    return true;
  }
  if (e == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((e->fields).Dead == false) {
    return false;
  }
  return (e->fields).TransformingToHuman == false;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_0
// il2cpp: System_Nullable_int__o Utility_Util___c___GetAllTitanAgentIds_b__41_0 (Utility_Util___c_o* __this, System_Collections_Generic_KeyValuePair_float__string__o agentSize, const MethodInfo* method);
// 0x182340590

System_Nullable_int__o
Utility_Util___c___GetAllTitanAgentIds_b__41_0
          (Utility_Util___c_o *__this,System_Collections_Generic_KeyValuePair_float__string__o *agentSize,
          MethodInfo *method)

{
  System_Nullable_int__o SVar1;
  
  if (Il2CppMethodInitialized_184347863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347863 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  SVar1 = Utility_Util__GetNavMeshAgentID((agentSize->fields).value,(MethodInfo *)0x0);
  return (System_Nullable_int__o)SVar1.fields;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_1
// il2cpp: bool Utility_Util___c___GetAllTitanAgentIds_b__41_1 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x1823405f0

bool Utility_Util___c___GetAllTitanAgentIds_b__41_1
               (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    Il2CppMethodInitialized_184347864 = '\x01';
  }
  return agentId.fields.hasValue;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_2
// il2cpp: int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x182340620

int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2
                  (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  uint32_t uVar1;
  System_Nullable_int__Fields local_res10 [3];
  
  local_res10[0] = agentId.fields;
  if (Il2CppMethodInitialized_184347865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    Il2CppMethodInitialized_184347865 = '\x01';
  }
  uVar1 = System_Nullable_uint___get_Value
                    ((System_Nullable_uint__o *)local_res10,
                     (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
  return uVar1;
}


// Utility.Util.<>c__10<object>$$.cctor
// il2cpp: void Utility_Util___c__10_object____cctor (const MethodInfo_8E16E0* method);
// 0x1808e16e0

void
Utility_Util___c__10_object____cctor(MethodInfo_8E16E0* method)

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
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
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
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields,__this);
  return;
}


// Utility.Util.<>c__10<object>$$.ctor
// il2cpp: void Utility_Util___c__10_object____ctor (Utility_Util___c__10_T__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Utility_Util___c__10_object____ctor(Utility_Util___c__10_T__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__10<object>$$<RemoveNull>b__10_0
// il2cpp: bool Utility_Util___c__10_object____RemoveNull_b__10_0 (Utility_Util___c__10_T__o* __this, Il2CppObject* e, const MethodInfo_8E17D0* method);
// 0x1808e17d0

bool Utility_Util___c__10_object____RemoveNull_b__10_0
               (Utility_Util___c__10_T__o *__this,Il2CppObject *e,MethodInfo_8E17D0 *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18433e0eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433e0eb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return !bVar1;
}


// Utility.Util.<>c__11<object>$$.cctor
// il2cpp: void Utility_Util___c__11_object____cctor (const MethodInfo_8E16E0* method);
// 0x1808e16e0

void
Utility_Util___c__11_object____cctor(MethodInfo_8E16E0* method)

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
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
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
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields,__this);
  return;
}


// Utility.Util.<>c__11<object>$$.ctor
// il2cpp: void Utility_Util___c__11_object____ctor (Utility_Util___c__11_T__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Utility_Util___c__11_object____ctor(Utility_Util___c__11_T__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__11<object>$$<RemoveNullOrDead>b__11_0
// il2cpp: bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0 (Utility_Util___c__11_T__o* __this, Il2CppObject* e, const MethodInfo_8E1950* method);
// 0x1808e1950

bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0
               (Utility_Util___c__11_T__o *__this,Il2CppObject *e,MethodInfo_8E1950 *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18433e0ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18433e0ed = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  if (!bVar1) {
    return true;
  }
  if (e != (Il2CppObject *)0x0) {
    return (bool)*(undefined1 *)&e[7].klass;
  }
  ThrowNullReferenceException();
}


// Utility.Util.<>c__12<object>$$.cctor
// il2cpp: void Utility_Util___c__12_object____cctor (const MethodInfo_8E16E0* method);
// 0x1808e16e0

void
Utility_Util___c__12_object____cctor(MethodInfo_8E16E0* method)

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
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
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
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields,__this);
  return;
}


// Utility.Util.<>c__12<object>$$.ctor
// il2cpp: void Utility_Util___c__12_object____ctor (Utility_Util___c__12_T__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Utility_Util___c__12_object____ctor(Utility_Util___c__12_T__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__12<object>$$<RemoveNullOrDeadDetections>b__12_0
// il2cpp: bool Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0 (Utility_Util___c__12_T__o* __this, Il2CppObject* e, const MethodInfo_8E1AE0* method);
// 0x1808e1ae0

bool
Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0(Utility_Util___c__12_T__o* __this, Il2CppObject* e, MethodInfo_8E1AE0* method)

{
  if (obj != (Il2CppObject *)0x0) {
    (*obj->klass->vtable[5].methodPtr)(obj,obj->klass->vtable[5].method);
    return;
  }
  ThrowNullReferenceException();
}


// Utility.Util.<>c__33<object, object>$$.cctor
// il2cpp: void Utility_Util___c__33_object__object____cctor (const MethodInfo_8E16E0* method);
// 0x1808e16e0

void
Utility_Util___c__33_object__object____cctor(MethodInfo_8E16E0* method)

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
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
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
  Il2CppCodeGenWriteBarrier(pIVar1->static_fields,__this);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_8E19C0* method);
// 0x1808e19c0

void
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor(MethodInfo_8E19C0* method)

{
  Il2CppMethodPointer pIVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *value;
  Il2CppClass *klass;
  
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  value = il2cpp_codegen_object_new(pIVar2);
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  klass = (Il2CppClass *)method->klass;
  pIVar1 = (pIVar2->rgctx_data[1].method)->methodPointer;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  (*pIVar1)(value,klass->rgctx_data[1].rgctxDataDummy);
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = value;
  pIVar2 = (Il2CppClass *)method->klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  pIVar2 = pIVar2->rgctx_data[2].klass;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  Il2CppCodeGenWriteBarrier(pIVar2->static_fields,value);
  return;
}


// Utility.Util.<>c__33<object, object>$$.ctor
// il2cpp: void Utility_Util___c__33_object__object____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Utility_Util___c__33_object__object____ctor(Utility_Util___c__33_TKey__TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(Utility_Util___c__33_TKey__TValue__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_0
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_8EBC10* method);
// 0x1808ebc10

Il2CppObject*
Utility_Util___c__33_object__object____PaginateDictionary_b__33_0(Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, MethodInfo_8EBC10* method)

{
  return *v;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_0
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_8EBB80* method);
// 0x1808ebb80

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o *c,MethodInfo_8EBB80 *method)

{
  undefined1 *source;
  Utility_Util___c__33_TKey__TValue__RGCTXs *pUVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar7;
  ulonglong size;
  undefined1 *local_res20;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [2];
  undefined1 local_28 [8];
  
  size = (ulonglong)(method->klass->rgctx_data->_6_TKey->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1808ebbc2;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  source = local_28 + lVar5;
  pUVar1 = method->klass->rgctx_data;
  *(undefined1 **)((longlong)auStack_38 + lVar5) = source;
  pMVar2 = pUVar1->_4_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1808ebbf3;
  local_res20 = source;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res20,*(void **)((longlong)auStack_38 + lVar5));
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1808ebc01;
  pUVar7 = memcpy(c,source,size);
  return pUVar7;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_1
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_8EBCB0* method);
// 0x1808ebcb0

Il2CppObject*
Utility_Util___c__33_object__object____PaginateDictionary_b__33_1(Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, MethodInfo_8EBCB0* method)

{
  return (x->fields).Item2;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_1
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_8EBC20* method);
// 0x1808ebc20

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o *c,MethodInfo_8EBC20 *method)

{
  undefined1 *source;
  Utility_Util___c__33_TKey__TValue__RGCTXs *pUVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar7;
  ulonglong size;
  undefined1 *local_res20;
  undefined8 auStack_60 [5];
  undefined8 auStack_38 [2];
  undefined1 local_28 [8];
  
  size = (ulonglong)(method->klass->rgctx_data->_8_TValue->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1808ebc62;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  source = local_28 + lVar5;
  pUVar1 = method->klass->rgctx_data;
  *(undefined1 **)((longlong)auStack_38 + lVar5) = source;
  pMVar2 = pUVar1->_7_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1808ebc93;
  local_res20 = source;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res20,*(void **)((longlong)auStack_38 + lVar5));
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1808ebca1;
  pUVar7 = memcpy(c,source,size);
  return pUVar7;
}


// Utility.Util.<WaitForFrames>d__17$$.ctor
// il2cpp: void Utility_Util__WaitForFrames_d__17___ctor (Utility_Util__WaitForFrames_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_Util__WaitForFrames_d__17___ctor(Utility_Util__WaitForFrames_d__17_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<WaitForFrames>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose(Utility_Util__WaitForFrames_d__17_o* __this, MethodInfo* method)

{
  return;
}


// Utility.Util.<WaitForFrames>d__17$$MoveNext
// il2cpp: bool Utility_Util__WaitForFrames_d__17__MoveNext (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x182340f00

bool Utility_Util__WaitForFrames_d__17__MoveNext
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Il2CppObject *__this_00;
  
  if (Il2CppMethodInitialized_184347866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184347866 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields)._i_5__2 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__2;
    *piVar1 = *piVar1 + 1;
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).frames <= (__this->fields)._i_5__2) {
    return false;
  }
  __this_00 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
  ;
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
  (__this->fields).__1__state = 1;
  return true;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_Util__WaitForFrames_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x182340fa0

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
// 0x180573e90

Il2CppObject*
Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current(Utility_Util__WaitForFrames_d__17_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$.ctor
// il2cpp: void Utility_Util__YieldForFrames_d__18___ctor (Utility_Util__YieldForFrames_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_Util__YieldForFrames_d__18___ctor(Utility_Util__YieldForFrames_d__18_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<YieldForFrames>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose(Utility_Util__YieldForFrames_d__18_o* __this, MethodInfo* method)

{
  return;
}


// Utility.Util.<YieldForFrames>d__18$$MoveNext
// il2cpp: bool Utility_Util__YieldForFrames_d__18__MoveNext (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x182340fe0

bool Utility_Util__YieldForFrames_d__18__MoveNext
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields)._i_5__2 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__2;
    *piVar1 = *piVar1 + 1;
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).frames <= (__this->fields)._i_5__2) {
    return false;
  }
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_Util__YieldForFrames_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x182341040

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
// 0x180573e90

Il2CppObject*
Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current(Utility_Util__YieldForFrames_d__18_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.Util$$SignedAngle
// il2cpp: float Utility_Util__SignedAngle (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o axis, const MethodInfo* method);
// 0x1823437e0

float Utility_Util__SignedAngle
                (UnityEngine_Vector3_o *from,UnityEngine_Vector3_o *to,UnityEngine_Vector3_o *axis,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  local_28._0_4_ = (to->fields).x;
  local_28._4_4_ = (to->fields).y;
  local_20 = (to->fields).z;
  local_18._0_4_ = (from->fields).x;
  local_18._4_4_ = (from->fields).y;
  local_10 = (from->fields).z;
  fVar1 = (float)il2cpp_runtime_helper_181d9e200(&local_18,&local_28,0);
  if (((from->fields).y * (to->fields).z - (from->fields).z * (to->fields).y) * (axis->fields).x +
      ((from->fields).z * (to->fields).x - (to->fields).z * (from->fields).x) * (axis->fields).y +
      ((to->fields).y * (from->fields).x - (from->fields).y * (to->fields).x) * (axis->fields).z < 0.0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = 1.0;
  }
  return fVar2 * fVar1;
}


// Utility.Util$$IsVectorBetween
// il2cpp: bool Utility_Util__IsVectorBetween (UnityEngine_Vector3_o v, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, const MethodInfo* method);
// 0x1823430c0

bool Utility_Util__IsVectorBetween
               (UnityEngine_Vector3_o *v,UnityEngine_Vector3_o *start,UnityEngine_Vector3_o *end,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = true;
  if (((v->fields).x < (start->fields).x) || ((end->fields).x < (v->fields).x)) {
    bVar1 = false;
    if ((end->fields).x <= (v->fields).x) {
      bVar1 = (v->fields).x <= (start->fields).x;
    }
  }
  else {
    bVar1 = true;
  }
  if (((v->fields).y < (start->fields).y) || ((end->fields).y < (v->fields).y)) {
    bVar3 = false;
    if ((end->fields).y <= (v->fields).y) {
      bVar3 = (v->fields).y <= (start->fields).y;
    }
  }
  else {
    bVar3 = true;
  }
  if ((((v->fields).z < (start->fields).z) || ((end->fields).z < (v->fields).z)) &&
     (bVar2 = false, (end->fields).z <= (v->fields).z)) {
    bVar2 = (v->fields).z <= (start->fields).z;
  }
  return (bool)(bVar1 & bVar3 & bVar2);
}


// Utility.Util$$LinearMap
// il2cpp: float Utility_Util__LinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x182343170

float Utility_Util__LinearMap(float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  return ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
}


// Utility.Util$$ClampedLinearMap
// il2cpp: float Utility_Util__ClampedLinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x182341080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823410b2: movaps xmm4, xmm3

float Utility_Util__ClampedLinearMap
                (float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
  if ((outMin <= fVar1) && (outMin = fVar1, outMax < fVar1)) {
    return outMax;
  }
  return outMin;
}


// Utility.Util$$FindCharacterByViewId
// il2cpp: Characters_BaseCharacter_o* Utility_Util__FindCharacterByViewId (int32_t viewId, const MethodInfo* method);
// 0x1823418f0

Characters_BaseCharacter_o * Utility_Util__FindCharacterByViewId(int32_t viewId,MethodInfo *method)

{
  bool bVar1;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar2;
  
  if (Il2CppMethodInitialized_184347846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347846 = '\x01';
  }
  if (-1 < viewId) {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (x != (Photon_Pun_PhotonView_o *)0x0) {
        pCVar2 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)x,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
        return pCVar2;
      }
      ThrowNullReferenceException();
    }
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Utility.Util$$FindPlayerById
// il2cpp: Photon_Realtime_Player_o* Utility_Util__FindPlayerById (int32_t id, const MethodInfo* method);
// 0x182341980

Photon_Realtime_Player_o * Utility_Util__FindPlayerById(int32_t id,MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Player_array *pPVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184347847 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar3 != (Photon_Realtime_Player_array *)0x0) {
    uVar1 = (uint)pPVar3->max_length;
    uVar4 = 0;
    while( true ) {
      if ((int)uVar1 <= (int)uVar4) {
        return (Photon_Realtime_Player_o *)0x0;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pPVar2 = pPVar3->m_Items[(int)uVar4];
      if (pPVar2 == (Photon_Realtime_Player_o *)0x0) break;
      if ((pPVar2->fields).actorNumber == id) {
        return pPVar2;
      }
      uVar4 = uVar4 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$CreateLocalPhotonInfo
// il2cpp: Photon_Pun_PhotonMessageInfo_o Utility_Util__CreateLocalPhotonInfo (const MethodInfo* method);
// 0x182341390

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
// 0x182343210

System_String_o * Utility_Util__PascalToSentence(System_String_o *str,MethodInfo *method)

{
  Il2CppObject *object;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_PascalToSentence_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    il2cpp_codegen_initialize_runtime_metadata(&"[a-z][A-Z]");
    Il2CppMethodInitialized_184347848 = '\x01';
  }
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  pSVar1 = "[a-z][A-Z]";
  evaluator = TypeInfo_Utility_Util_c->static_fields->__9__7_0;
  if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    }
    object = (Il2CppObject *)TypeInfo_Utility_Util_c->static_fields->__9;
    evaluator = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,object,
               (intptr_t)MethodInfo_Utility_Util_c_PascalToSentence_b__7_0,(MethodInfo_16E67D0 *)0x0);
    TypeInfo_Utility_Util_c->static_fields->__9__7_0 = evaluator;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9__7_0,evaluator);
  }
  if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  }
  pSVar1 = System_Text_RegularExpressions_Regex__Replace_285db50(str,pSVar1,evaluator,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$CreateDontDestroyObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateDontDestroyObj_object_ (const MethodInfo_869290* method);
// 0x180869290

Il2CppObject * Utility_Util__CreateDontDestroyObj_object_(MethodInfo_869290 *method)

{
  UnityEngine_Object_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_869290_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Dont Destroy");
    if (method->rgctx_data == (MethodInfo_869290_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,"Dont Destroy",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pIVar1 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this,
                        (MethodInfo_6F4D60 *)method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$CreateObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateObj_object_ (const MethodInfo_869350* method);
// 0x180869350

Il2CppObject * Utility_Util__CreateObj_object_(MethodInfo_869350 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_869350_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    if (method->rgctx_data == (MethodInfo_869350_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$RemoveNull<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNull_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_86B5C0* method);
// 0x18086b5c0

System_Collections_Generic_HashSet_T__o*
Utility_Util__RemoveNull_object_(System_Collections_Generic_HashSet_T__o* set, MethodInfo_86B5C0* method)

{
  Il2CppObject *object;
  Il2CppClass *pIVar1;
  System_Predicate_T__o *match;
  
  if (method->rgctx_data == (MethodInfo_86B5C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar1);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  match = *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8);
  if (match == (System_Predicate_T__o *)0x0) {
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar1);
    }
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    object = *(Il2CppObject **)pIVar1->static_fields;
    pIVar1 = method->rgctx_data->_2_System_Predicate_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar1);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)method->rgctx_data->_4_Utility_Util___c__10_T___RemoveNull_b__10_0,
               (MethodInfo_B61EB0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8) = match;
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar1->static_fields + 8),match);
  }
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_1766120 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$RemoveNullOrDead<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDead_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_86B5C0* method);
// 0x18086b5c0

System_Collections_Generic_HashSet_T__o*
Utility_Util__RemoveNullOrDead_object_(System_Collections_Generic_HashSet_T__o* set, MethodInfo_86B5C0* method)

{
  Il2CppObject *object;
  Il2CppClass *pIVar1;
  System_Predicate_T__o *match;
  
  if (method->rgctx_data == (MethodInfo_86B5C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar1);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  match = *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8);
  if (match == (System_Predicate_T__o *)0x0) {
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar1);
    }
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    object = *(Il2CppObject **)pIVar1->static_fields;
    pIVar1 = method->rgctx_data->_2_System_Predicate_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar1);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)method->rgctx_data->_4_Utility_Util___c__10_T___RemoveNull_b__10_0,
               (MethodInfo_B61EB0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8) = match;
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar1->static_fields + 8),match);
  }
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_1766120 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$RemoveNullOrDeadDetections<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDeadDetections_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_86B5C0* method);
// 0x18086b5c0

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDeadDetections_object_
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_86B5C0 *method)

{
  Il2CppObject *object;
  Il2CppClass *pIVar1;
  System_Predicate_T__o *match;
  
  if (method->rgctx_data == (MethodInfo_86B5C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar1);
  }
  pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  match = *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8);
  if (match == (System_Predicate_T__o *)0x0) {
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    if ((pIVar1->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar1);
    }
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    object = *(Il2CppObject **)pIVar1->static_fields;
    pIVar1 = method->rgctx_data->_2_System_Predicate_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    match = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar1);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)method->rgctx_data->_4_Utility_Util___c__10_T___RemoveNull_b__10_0,
               (MethodInfo_B61EB0 *)method->rgctx_data->_5_System_Predicate_T___ctor);
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    *(System_Predicate_T__o **)((longlong)pIVar1->static_fields + 8) = match;
    pIVar1 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar1->_2).bitflags1 & 1) == 0) {
      pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
    }
    Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar1->static_fields + 8),match);
  }
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_1766120 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$RemoveNullOrDeadShifters
// il2cpp: System_Collections_Generic_HashSet_BaseShifter__o* Utility_Util__RemoveNullOrDeadShifters (System_Collections_Generic_HashSet_BaseShifter__o* set, const MethodInfo* method);
// 0x182343350

System_Collections_Generic_HashSet_BaseShifter__o *
Utility_Util__RemoveNullOrDeadShifters
          (System_Collections_Generic_HashSet_BaseShifter__o *set,MethodInfo *method)

{
  Il2CppObject *object;
  System_Predicate_T__o *match;
  
  if (Il2CppMethodInitialized_184347849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_BaseShifter_RemoveWhere);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_c_RemoveNullOrDeadShifters_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_c);
    Il2CppMethodInitialized_184347849 = '\x01';
  }
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  match = (System_Predicate_T__o *)TypeInfo_Utility_Util_c->static_fields->__9__13_0;
  if (match == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    }
    object = (Il2CppObject *)TypeInfo_Utility_Util_c->static_fields->__9;
    match = (System_Predicate_T__o *)
            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_BaseShifter);
    System_Predicate_object____ctor
              ((System_Predicate_object__o *)match,object,
               (intptr_t)MethodInfo_Utility_Util_c_RemoveNullOrDeadShifters_b__13_0,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_Utility_Util_c->static_fields->__9__13_0 = (System_Predicate_BaseShifter__o *)match;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9__13_0,match);
  }
  if (set != (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_1766120 *)MethodInfo_System_Collections_Generic_HashSet_BaseShifter_RemoveWhere);
    return set;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$CreateMD5
// il2cpp: System_String_o* Utility_Util__CreateMD5 (System_String_o* input, const MethodInfo* method);
// 0x1823413c0
// eh: try 0x182341459..0x1823415b7 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234153c: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182341541: cmp qword ptr [r8], 0
// asm:   0x182341545: je 0x182341558
// asm:   0x182341547: xor ecx, ecx
// asm:   0x182341549: mov r8, qword ptr [r8]
// asm:   0x18234154c: mov rdx, qword ptr [rip + 0x1d57dad]  ; TypeInfo_System_IDisposable
// asm:   0x182341553: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182341558: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234155d: test rcx, rcx
// asm:   0x182341560: jne 0x1823415b7
// asm:   0x182341562: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1823415b7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o * Utility_Util__CreateMD5(System_String_o *input,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Security_Cryptography_MD5_o *__this;
  System_Text_Encoding_o *pSVar3;
  System_Byte_array *pSVar4;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_18434784a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"X2");
    Il2CppMethodInitialized_18434784a = '\x01';
  }
  bVar2 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  __this = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  pSVar3 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar3 == (System_Text_Encoding_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (*(pSVar3->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar3,input,(pSVar3->klass->vtable)._18_GetBytes.method);
  if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
    pSVar4 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                       ((System_Security_Cryptography_HashAlgorithm_o *)__this,pSVar4,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    uVar6 = 0;
    if (pSVar4 == (System_Byte_array *)0x0) {
      ThrowNullReferenceException();
    }
    while( true ) {
      uVar1 = (uint)pSVar4->max_length;
      if ((int)uVar1 <= (int)uVar6) {
        if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
          pSVar5 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)__this);
          }
          return pSVar5;
        }
        ThrowNullReferenceException();
      }
      if (uVar1 <= uVar6) break;
      pSVar5 = System_Byte__ToString_1a7b2a0
                         (pSVar4->m_Items + (int)uVar6,"X2",(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Text_StringBuilder__Append_197dca0(__this_00,pSVar5,(MethodInfo *)0x0);
      uVar6 = uVar6 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Utility.Util$$CreateSalt
// il2cpp: System_String_o* Utility_Util__CreateSalt (const MethodInfo* method);
// 0x182341720
// eh: try 0x18234179b..0x182341825 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823417d3: mov r8, qword ptr [rsp + 0x58]
// asm:   0x1823417d8: test r8, r8
// asm:   0x1823417db: je 0x1823417eb
// asm:   0x1823417dd: xor ecx, ecx
// asm:   0x1823417df: mov rdx, qword ptr [rip + 0x1d57b1a]  ; TypeInfo_System_IDisposable
// asm:   0x1823417e6: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1823417eb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823417f0: test rcx, rcx
// asm:   0x1823417f3: jne 0x182341825
// asm:   0x1823417f5: mov rbx, qword ptr [rsp + 0x60]
// asm:   0x182341825: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o * Utility_Util__CreateSalt(MethodInfo *method)

{
  System_Byte_array *inArray;
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434784b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_18434784b = '\x01';
  }
  inArray = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0x10);
  obj = (Il2CppObject *)System_Security_Cryptography_RandomNumberGenerator__Create((MethodInfo *)0x0);
  if (obj != (Il2CppObject *)0x0) {
    (*obj->klass->vtable[6].methodPtr)(obj,inArray,obj->klass->vtable[6].method);
    if (obj != (Il2CppObject *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,obj);
    }
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar1 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$CreatePBKDF2
// il2cpp: System_String_o* Utility_Util__CreatePBKDF2 (System_String_o* input, System_String_o* salt, const MethodInfo* method);
// 0x1823415c0

System_String_o * Utility_Util__CreatePBKDF2(System_String_o *input,System_String_o *salt,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *pSVar2;
  System_Security_Cryptography_HashAlgorithmName_o hashAlgorithm;
  System_Security_Cryptography_Rfc2898DeriveBytes_o *__this;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434784c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Security_Cryptography_Rfc2898DeriveBytes);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_18434784c = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    pSVar2 = System_Convert__FromBase64String(salt,(MethodInfo *)0x0);
    hashAlgorithm = System_Security_Cryptography_HashAlgorithmName__get_SHA256((MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Security_Cryptography_Rfc2898DeriveBytes);
    System_Security_Cryptography_Rfc2898DeriveBytes___ctor_1997fc0
              (__this,input,pSVar2,200000,hashAlgorithm,(MethodInfo *)0x0);
    if (__this != (System_Security_Cryptography_Rfc2898DeriveBytes_o *)0x0) {
      pSVar2 = (*(__this->klass->vtable)._5_GetBytes.methodPtr)
                         (__this,0x10,(__this->klass->vtable)._5_GetBytes.method);
      pSVar3 = System_BitConverter__ToString_1a79340(pSVar2,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = System_String__Replace_1970e80
                           (pSVar3,"-",
                            (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        return pSVar3;
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Utility.Util$$WaitForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__WaitForFrames (int32_t frames, const MethodInfo* method);
// 0x182343cd0

System_Collections_IEnumerator_o * Utility_Util__WaitForFrames(int32_t frames,MethodInfo *method)

{
  Utility_Util__WaitForFrames_d__17_o *__this;
  
  if (Il2CppMethodInitialized_18434784d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
    Il2CppMethodInitialized_18434784d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).frames = frames;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.Util$$YieldForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__YieldForFrames (int32_t frames, const MethodInfo* method);
// 0x182343d30

System_Collections_IEnumerator_o * Utility_Util__YieldForFrames(int32_t frames,MethodInfo *method)

{
  Utility_Util__YieldForFrames_d__18_o *__this;
  
  if (Il2CppMethodInitialized_18434784e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_YieldForFrames_d__18);
    Il2CppMethodInitialized_18434784e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_YieldForFrames_d__18);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).frames = frames;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.Util$$EnumToStringArray<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray_Int32Enum_ (const MethodInfo_869FD0* method);
// 0x180869fd0

System_String_array*
Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_869FD0* method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_String_array *pSVar1;
  
  if (method->rgctx_data == (MethodInfo_869FD0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar1 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$EnumToStringArray<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_ (const MethodInfo_869FD0* method);
// 0x180869fd0

System_String_array *
Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_(MethodInfo_869FD0 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_String_array *pSVar1;
  
  if (method->rgctx_data == (MethodInfo_869FD0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar1 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$EnumToStringArrayExceptNone<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone_Int32Enum_ (const MethodInfo_869E40* method);
// 0x180869e40

System_String_array * Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_869E40 *method)

{
  MethodInfo *method_00;
  Il2CppRGCTXData handle;
  System_String_o *a;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar3;
  uint uVar4;
  
  if (method->rgctx_data == (MethodInfo_869E40_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_869E40_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  method_00 = method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_;
  if ((method_00->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init(method_00);
  }
  handle = *(method_00->field7_0x38).rgctx_data;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_array *)0x0) {
    for (uVar4 = 0; (int)uVar4 < (int)pSVar2->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pSVar2->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      a = pSVar2->m_Items[(int)uVar4];
      bVar1 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
      if (bVar1) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_180869fbf;
        il2cpp_runtime_helper_180012890(__this,a);
      }
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar3 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar3;
    }
  }
label_180869fbf:
  ThrowNullReferenceException();
}


// Utility.Util$$EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_ (const MethodInfo_869D00* method);
// 0x180869d00

System_String_array *
Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_(MethodInfo_869D00 *method)

{
  MethodInfo *pMVar1;
  System_String_o *a;
  bool bVar2;
  System_Collections_Generic_List_string__o *__this;
  longlong lVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  uint uVar5;
  
  if (method->rgctx_data == (MethodInfo_869D00_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_869D00_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pMVar1 = method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_;
  lVar3 = (*pMVar1->methodPointer)(pMVar1);
  if (lVar3 != 0) {
    for (uVar5 = 0; (int)uVar5 < *(int *)(lVar3 + 0x18); uVar5 = uVar5 + 1) {
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      a = *(System_String_o **)(lVar3 + 0x20 + (longlong)(int)uVar5 * 8);
      bVar2 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_180869e2d;
        il2cpp_runtime_helper_180012890(__this,a);
      }
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar4 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar4;
    }
  }
label_180869e2d:
  ThrowNullReferenceException();
}


// Utility.Util$$EnumToList<Int32Enum>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList_Int32Enum_ (const MethodInfo_869C70* method);
// 0x180869c70

System_Collections_Generic_List_T__o * Utility_Util__EnumToList_Int32Enum_(MethodInfo_869C70 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (method->rgctx_data == (MethodInfo_869C70_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_6B7500 *)method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_);
  pSVar1 = System_Linq_Enumerable__ToList_Int32Enum_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_6C95D0 *)method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_);
  return (System_Collections_Generic_List_T__o *)pSVar1;
}


// Utility.Util$$EnumToList<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList___Il2CppFullySharedGenericType_ (const MethodInfo_869BE0* method);
// 0x180869be0

System_Collections_Generic_List_T__o *
Utility_Util__EnumToList___Il2CppFullySharedGenericType_(MethodInfo_869BE0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo *pMVar1;
  System_Type_o *enumType;
  System_Array_o *pSVar2;
  undefined8 uVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  
  if (method->rgctx_data == (MethodInfo_869BE0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  pSVar2 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pMVar1 = method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_;
  uVar3 = (*pMVar1->methodPointer)(pSVar2,pMVar1);
  pMVar1 = method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_;
  pSVar4 = (System_Collections_Generic_List_T__o *)(*pMVar1->methodPointer)(uVar3,pMVar1);
  return pSVar4;
}


// Utility.Util$$EnumToDict<Int32Enum>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict_Int32Enum_ (const MethodInfo_869960* method);
// 0x180869960
// eh: try 0x180869af0..0x180869bda -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180869b8e: mov rax, qword ptr [rsp + 0x50]
// asm:   0x180869b93: mov rcx, qword ptr [rax]
// asm:   0x180869b96: mov rdx, qword ptr [rcx + 0x38]
// asm:   0x180869b9a: mov rdx, qword ptr [rdx + 0x60]
// asm:   0x180869b9e: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x180869ba3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x180869ba8: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x180869bad: test rcx, rcx
// asm:   0x180869bb0: jne 0x180869bda
// asm:   0x180869bb2: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x180869bda: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict_Int32Enum_(MethodInfo_869960 *method)

{
  Il2CppRGCTXData handle;
  uint value;
  bool bVar1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_Dictionary_string__T__o *__this;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_00;
  System_String_o *key;
  MethodInfo *local_res8;
  System_Collections_Generic_Dictionary_string__T__o *local_res10;
  undefined1 local_60 [8];
  uint64_t uStack_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_40;
  MethodInfo **local_38;
  undefined1 local_30 [16];
  uint local_20;
  
  local_res8 = (MethodInfo *)method;
  if (method->rgctx_data == (MethodInfo_869960_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    if ((local_res8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_codegen_rgctx_method_init(local_res8);
    }
  }
  local_60 = (undefined1  [8])0x0;
  uStack_58 = 0;
  local_50 = (Il2CppObject *)0x0;
  pIVar2 = ((local_res8->field7_0x38).methodMetadataHandle)->
           _0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = (System_Collections_Generic_Dictionary_string__T__o *)il2cpp_codegen_object_new(pIVar2);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)(local_res8->field7_0x38).rgctx_data[1].method);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pIVar2 = (local_res8->field7_0x38).rgctx_data[2].klass;
  if (((_union_13 *)&(pIVar2->_1).this_arg.bits)->rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)pIVar2);
  }
  handle = *((_union_13 *)&(pIVar2->_1).this_arg.bits)->rgctx_data;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_6B7500 *)
                                ((_union_13 *)&(pIVar2->_1).this_arg.bits)->rgctx_data[1].method);
  __this_00 = System_Linq_Enumerable__ToList_Int32Enum_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_6C95D0 *)((_union_13 *)&(pIVar2->_1).this_arg.bits)->rgctx_data[3].method
                        );
  if (__this_00 != (System_Collections_Generic_List_TSource__o *)0x0) {
    local_res10 = __this;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_30,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)__this_00,
               (MethodInfo_91F1C0 *)(local_res8->field7_0x38).rgctx_data[4].method);
    local_60 = (undefined1  [8])local_30._0_8_;
    uStack_58 = local_30._8_8_;
    local_50 = (Il2CppObject *)(ulonglong)local_20;
    local_48 = 0;
    local_38 = &local_res8;
    local_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                         (MethodInfo_1530180 *)(local_res8->field7_0x38).rgctx_data[0xb].method);
      if (!bVar1) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                   (local_res8->field7_0x38).rgctx_data[0xc].method);
        return __this;
      }
      value = (uint)local_50;
      pIVar2 = (local_res8->field7_0x38).rgctx_data[8].klass;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      local_30._8_8_ = &g_data_ffffffffffffffff;
      local_20 = value;
      local_30._0_8_ = pIVar2;
      key = System_Enum__ToString((System_Enum_o *)local_30,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_Dictionary_string__T__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__Int32Enum___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,value,
                 (MethodInfo_146B450 *)(local_res8->field7_0x38).rgctx_data[10].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Utility.Util$$EnumToDict<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict___Il2CppFullySharedGenericType_ (const MethodInfo_869560* method);
// 0x180869560
// eh: try 0x1808697f8..0x180869951 -> pad 0x18331a880 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1808697fc: nop dword ptr [rax]
// asm:   0x18086991b: lea rcx, [rbp + 0x30]
// asm:   0x18086991f: call 0x1808639a0  ; il2cpp_runtime_helper_1808639a0()
// asm:   0x180869924: mov rcx, qword ptr [rbp + 0x28]
// asm:   0x180869928: test rcx, rcx
// asm:   0x18086992b: jne 0x180869951
// asm:   0x18086992d: mov rsi, qword ptr [rbp + 8]
// asm:   0x180869951: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331a880: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331a885: push rbp
// asm:   0x18331a886: sub rsp, 0x30
// asm:   0x18331a88a: lea rbp, [rdx + 0x30]
// asm:   0x18331a88e: mov rax, qword ptr [rbp + 0x10]
// asm:   0x18331a892: mov rcx, qword ptr [rax]
// asm:   0x18331a895: mov qword ptr [rbp + 0x28], rcx
// asm:   0x18331a899: movabs rax, 0
// asm:   0x18331a8a3: add rsp, 0x30
// asm:   0x18331a8a7: pop rbp
// asm:   0x18331a8a8: ret 

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict___Il2CppFullySharedGenericType_(MethodInfo_869560 *method)

{
  void *source;
  undefined8 *destination;
  void *pvVar1;
  void *destination_00;
  Il2CppRGCTXData *pIVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char cVar13;
  uint uVar14;
  Il2CppClass *pIVar15;
  ulonglong uVar16;
  System_Collections_Generic_Dictionary_string__T__o *pSVar17;
  void *pvVar18;
  ulonglong size;
  ulonglong size_00;
  MethodInfo *local_res8;
  void *local_res10;
  void *local_res18;
  longlong local_res20;
  undefined8 auStack_d0 [5];
  longlong alStack_a8 [2];
  void *local_98;
  System_Collections_Generic_Dictionary_string__T__o *local_90;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  MethodInfo **local_68;
  longlong *local_60;
  void **local_58;
  
  local_res8 = (MethodInfo *)method;
  if (method->rgctx_data == (MethodInfo_869560_RGCTXs *)0x0) {
    auStack_d0[0] = 0x180869593;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    if ((local_res8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      auStack_d0[0] = 0x1808695a9;
      il2cpp_codegen_rgctx_method_init(local_res8);
    }
  }
  pIVar2 = (local_res8->field7_0x38).rgctx_data;
  size_00 = (ulonglong)((pIVar2[5].klass)->_2).stack_slot_size;
  size = (ulonglong)((pIVar2[8].klass)->_2).stack_slot_size;
  pIVar15 = pIVar2[5].klass;
  if (((pIVar15->_2).bitflags1 & 1) == 0) {
    auStack_d0[0] = 0x1808695df;
    pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
  }
  uVar14 = (pIVar15->_2).stack_slot_size + 0x10;
  uVar16 = (ulonglong)uVar14 + 0xf;
  if (uVar16 <= uVar14) {
    uVar16 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x180869610;
  lVar6 = -(uVar16 & 0xfffffffffffffff0);
  local_res20 = (longlong)&local_98 + lVar6;
  pIVar15 = (local_res8->field7_0x38).rgctx_data[8].klass;
  if (((pIVar15->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x180869638;
    pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
  }
  uVar14 = (pIVar15->_2).stack_slot_size + 0x10;
  uVar16 = (ulonglong)uVar14 + 0xf;
  if (uVar16 <= uVar14) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar6) = 0x180869658;
  lVar7 = -(uVar16 & 0xfffffffffffffff0);
  local_98 = (void *)((longlong)&local_98 + lVar7 + lVar6);
  uVar16 = size + 0xf;
  if (uVar16 <= size) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7 + lVar6) = 0x18086967a;
  lVar8 = -(uVar16 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_98 + lVar8 + lVar7 + lVar6);
  uVar16 = size + 0xf;
  if (uVar16 <= size) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6) = 0x180869698;
  lVar9 = -(uVar16 & 0xfffffffffffffff0);
  destination = (undefined8 *)((longlong)&local_98 + lVar9 + lVar8 + lVar7 + lVar6);
  uVar16 = size_00 + 0xf;
  if (uVar16 <= size_00) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808696b8;
  lVar10 = -(uVar16 & 0xfffffffffffffff0);
  pvVar1 = (void *)((longlong)&local_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  uVar16 = size_00 + 0xf;
  if (uVar16 <= size_00) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808696d5;
  lVar11 = -(uVar16 & 0xfffffffffffffff0);
  local_res10 = (void *)((longlong)&local_98 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808696eb;
  il2cpp_runtime_helper_180522500(local_res10,0);
  uVar16 = size + 0xf;
  if (uVar16 <= size) {
    uVar16 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x180869701;
  lVar12 = -(uVar16 & 0xfffffffffffffff0);
  destination_00 = (void *)((longlong)&local_98 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x180869716;
  il2cpp_runtime_helper_180522500(destination_00,0,size);
  pIVar15 = ((local_res8->field7_0x38).methodMetadataHandle)->
            _0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar15->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x180869735;
    pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x18086973d;
  pSVar17 = (System_Collections_Generic_Dictionary_string__T__o *)il2cpp_codegen_object_new(pIVar15);
  pMVar3 = (local_res8->field7_0x38).rgctx_data[1].method;
  pIVar4 = pMVar3->methodPointer;
  *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x180869758;
  (*pIVar4)(pSVar17,pMVar3);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x18086976d;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pMVar3 = (local_res8->field7_0x38).rgctx_data[2].method;
  pIVar4 = pMVar3->methodPointer;
  *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x180869781;
  pvVar18 = (void *)(*pIVar4)(pMVar3);
  if (pvVar18 != (void *)0x0) {
    local_90 = pSVar17;
    pMVar3 = (local_res8->field7_0x38).rgctx_data[4].method;
    *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = pvVar1;
    pIVar4 = pMVar3->methodPointer;
    pIVar5 = pMVar3->invoker_method;
    *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x1808697bd;
    local_res18 = pvVar1;
    (*pIVar5)(pIVar4,pMVar3,pvVar18,&local_res18,
              *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
    *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x1808697cf;
    memcpy(local_res10,pvVar1,size_00);
    pvVar1 = local_98;
    local_70 = 0;
    local_68 = &local_res8;
    local_60 = &local_res20;
    local_58 = &local_res10;
    while( true ) {
      pMVar3 = (local_res8->field7_0x38).rgctx_data[0xb].method;
      pIVar4 = pMVar3->methodPointer;
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x18086981b;
      cVar13 = (*pIVar4)(local_res10,pMVar3);
      if (cVar13 == '\0') {
        *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             0x180869919;
        il2cpp_runtime_helper_1808639a0(&local_68);
        return pSVar17;
      }
      pMVar3 = (local_res8->field7_0x38).rgctx_data[6].method;
      *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = source;
      pIVar4 = pMVar3->methodPointer;
      pIVar5 = pMVar3->invoker_method;
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x180869856;
      local_res18 = source;
      (*pIVar5)(pIVar4,pMVar3,local_res10,&local_res18,
                *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x180869864;
      memcpy(destination_00,source,size);
      pMVar3 = (local_res8->field7_0x38).rgctx_data[9].rgctxDataDummy;
      pIVar15 = (local_res8->field7_0x38).rgctx_data[8].klass;
      if (((pIVar15->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             0x180869888;
        pIVar15 = il2cpp_codegen_class_init_checked(pIVar15);
      }
      *(void ***)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
           &local_98;
      *(undefined8 *)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0;
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x1808698ab;
      il2cpp_runtime_helper_1804171d0(pIVar15,pMVar3,pvVar1,destination_00);
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x1808698b9;
      memcpy(destination,destination_00,size);
      if (pSVar17 == (System_Collections_Generic_Dictionary_string__T__o *)0x0) break;
      local_78 = destination;
      if (-1 < (int)(((Il2CppClass *)(local_res8->field7_0x38).rgctx_data[8].method)->_1).byval_arg.bits) {
        local_78 = (void *)*destination;
      }
      pMVar3 = (local_res8->field7_0x38).rgctx_data[10].method;
      local_80 = local_98;
      *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_78;
      pIVar4 = pMVar3->methodPointer;
      pIVar5 = pMVar3->invoker_method;
      *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           0x18086990b;
      (*pIVar5)(pIVar4,pMVar3,pSVar17,&local_80,
                *(void **)((longlong)alStack_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
    }
    *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
         0x180869950;
    ThrowNullReferenceException();
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
       0x18086994a;
  ThrowNullReferenceException();
}


// Utility.Util$$FormatFloat
// il2cpp: System_String_o* Utility_Util__FormatFloat (float num, int32_t decimalPlaces, const MethodInfo* method);
// 0x182341b60

System_String_o * Utility_Util__FormatFloat(float num,int32_t decimalPlaces,MethodInfo *method)

{
  System_String_o *pSVar1;
  float local_res8 [8];
  
  local_res8[0] = num;
  if (Il2CppMethodInitialized_18434784f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"0.");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_18434784f = '\x01';
  }
  if (decimalPlaces != 0) {
    pSVar1 = System_String__CreateString_196aec0((System_String_o *)0x0,0x30,decimalPlaces,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("0.",pSVar1,(MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_1b49f60(local_res8,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = System_Single__ToString_1b49f60(local_res8,"0",(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__MultiplyVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x1823431d0

UnityEngine_Vector3_o
Utility_Util__MultiplyVectors(UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (lhs->fields).y;
  fVar2 = (rhs->fields).y;
  (__return_storage_ptr__->fields).x = (lhs->fields).x * (rhs->fields).x;
  fVar3 = (lhs->fields).z;
  fVar4 = (rhs->fields).z;
  (__return_storage_ptr__->fields).y = fVar1 * fVar2;
  (__return_storage_ptr__->fields).z = fVar3 * fVar4;
  return __return_storage_ptr__;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector2_o Utility_Util__MultiplyVectors (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x182343190

UnityEngine_Vector2_o
Utility_Util__MultiplyVectors(UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, MethodInfo* method)

{
  Unity_Mathematics_float2_Fields UVar1;
  undefined4 uStackX_24;
  undefined4 uStack_14;
  
  UVar1.x = rhs.fields.x * lhs.fields.x;
  uStackX_24 = rhs.fields.y;
  uStack_14 = lhs.fields.y;
  UVar1.y = uStackX_24 * uStack_14;
  return (Unity_Mathematics_float2_o)UVar1;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__DivideVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x182341870

UnityEngine_Vector3_o
Utility_Util__DivideVectors(UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (lhs->fields).y;
  fVar2 = (rhs->fields).y;
  (__return_storage_ptr__->fields).x = (lhs->fields).x / (rhs->fields).x;
  fVar3 = (lhs->fields).z;
  fVar4 = (rhs->fields).z;
  (__return_storage_ptr__->fields).y = fVar1 / fVar2;
  (__return_storage_ptr__->fields).z = fVar3 / fVar4;
  return __return_storage_ptr__;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector2_o Utility_Util__DivideVectors (UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, const MethodInfo* method);
// 0x1823418b0

UnityEngine_Vector2_o
Utility_Util__DivideVectors(UnityEngine_Vector2_o a, UnityEngine_Vector2_o b, MethodInfo* method)

{
  Unity_Mathematics_float2_Fields UVar1;
  undefined4 uStackX_24;
  undefined4 uStack_14;
  
  UVar1.x = lhs.fields.x / rhs.fields.x;
  uStackX_24 = lhs.fields.y;
  uStack_14 = rhs.fields.y;
  UVar1.y = uStackX_24 / uStack_14;
  return (Unity_Mathematics_float2_o)UVar1;
}


// Utility.Util$$GroupItems<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems_object_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_86AC50* method);
// 0x18086ac50
// eh: try 0x18086adb0..0x18086aed9 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18086ae84: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18086ae89: mov rcx, qword ptr [rax]
// asm:   0x18086ae8c: mov rdx, qword ptr [rcx + 0x38]
// asm:   0x18086ae90: mov rdx, qword ptr [rdx + 0x68]
// asm:   0x18086ae94: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18086ae99: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18086ae9e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18086aea3: test rcx, rcx
// asm:   0x18086aea6: jne 0x18086aed9
// asm:   0x18086aea8: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x18086aed9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems_object_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_86AC50 *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_List_List_T___o *__this;
  System_Collections_Generic_LowLevelList_T__o *__this_00;
  int iVar4;
  Il2CppClass *local_res18;
  System_Collections_Generic_List_Enumerator_object__o local_60;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  local_res18 = (Il2CppClass *)method;
  if (method->rgctx_data == (MethodInfo_86AC50_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pIVar3 = (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
           _0_System_Collections_Generic_List_List_T__;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  __this = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar3);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
             _1_System_Collections_Generic_List_List_T____ctor);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if ((items->fields)._size != 0) {
      pIVar3 = (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
               _2_System_Collections_Generic_List_T_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      __this_00 = (System_Collections_Generic_LowLevelList_T__o *)il2cpp_codegen_object_new(pIVar3);
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                (__this_00,
                 (MethodInfo_92A240 *)
                 (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                 _4_System_Collections_Generic_List_T___ctor);
      if (__this == (System_Collections_Generic_List_List_T___o *)0x0) goto label_18086aecd;
      il2cpp_runtime_helper_180012890(__this,__this_00,
                    (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                    _5_System_Collections_Generic_List_List_T___Add);
      iVar4 = 0;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,items,
                 (MethodInfo_91F180 *)
                 (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                 _6_System_Collections_Generic_List_T__GetEnumerator);
      local_60.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      local_60.fields._index = local_48._8_4_;
      local_60.fields._version = local_48._12_4_;
      local_60.fields._current = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38 = (Il2CppObject *)&local_res18;
      local_48._8_8_ = &local_60;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_60,
                           (MethodInfo_153A2A0 *)
                           (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                           _12_System_Collections_Generic_List_Enumerator_T__MoveNext);
        pIVar1 = local_60.fields._current;
        if (!bVar2) break;
        iVar4 = iVar4 + 1;
        if (groupSize + 1 <= iVar4) {
          pIVar3 = (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                   _2_System_Collections_Generic_List_T_;
          if (((pIVar3->_2).bitflags1 & 1) == 0) {
            pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
          }
          iVar4 = 1;
          __this_00 = (System_Collections_Generic_LowLevelList_T__o *)il2cpp_codegen_object_new(pIVar3);
          System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                    (__this_00,
                     (MethodInfo_92A240 *)
                     (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                     _4_System_Collections_Generic_List_T___ctor);
          il2cpp_runtime_helper_180012890(__this,__this_00,
                        (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                        _5_System_Collections_Generic_List_List_T___Add);
        }
        if (__this_00 == (System_Collections_Generic_LowLevelList_T__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_00,pIVar1,
                      (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)->
                      _11_System_Collections_Generic_List_T__Add);
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                 (MethodInfo *)
                 (*(MethodInfo_86AC50_RGCTXs **)&(local_res18->_1).this_arg.bits)[1].
                 _0_System_Collections_Generic_List_List_T__);
    }
    return __this;
  }
label_18086aecd:
  ThrowNullReferenceException();
}


// Utility.Util$$GroupItems<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_86A820* method);
// 0x18086a820
// eh: try 0x18086aab2..0x18086ac49 -> pad 0x183318e30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18086aab9: nop dword ptr [rax]
// asm:   0x18086ac13: lea rcx, [rbp + 0x30]
// asm:   0x18086ac17: call 0x180863920  ; il2cpp_runtime_helper_180863920()
// asm:   0x18086ac1c: mov rcx, qword ptr [rbp + 0x28]
// asm:   0x18086ac20: test rcx, rcx
// asm:   0x18086ac23: jne 0x18086ac49
// asm:   0x18086ac25: mov r14, qword ptr [rbp + 0x18]
// asm:   0x18086ac49: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318e30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318e35: push rbp
// asm:   0x183318e36: sub rsp, 0x30
// asm:   0x183318e3a: lea rbp, [rdx + 0x30]
// asm:   0x183318e3e: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183318e42: mov rcx, qword ptr [rax]
// asm:   0x183318e45: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183318e49: movabs rax, 0
// asm:   0x183318e53: add rsp, 0x30
// asm:   0x183318e57: pop rbp
// asm:   0x183318e58: ret 

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_86A820 *method)

{
  undefined1 *destination;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *source;
  char cVar9;
  uint uVar10;
  int iVar11;
  Il2CppClass *pIVar12;
  ulonglong uVar13;
  Il2CppClass *pIVar14;
  System_Collections_Generic_List_List_T___o *pSVar15;
  uint32_t uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong size;
  uint local_res8;
  undefined4 uStackX_c;
  int32_t local_res10;
  MethodInfo_86A820 *local_res18;
  undefined1 *local_res20;
  undefined8 auStack_d0 [5];
  longlong alStack_a8 [2];
  undefined1 *local_98;
  Il2CppClass *local_90;
  longlong local_88;
  System_Collections_Generic_List_List_T___o *local_80;
  undefined8 local_70;
  MethodInfo_86A820 **local_68;
  undefined1 *local_60;
  undefined1 **local_58;
  
  local_res10 = groupSize;
  local_res18 = method;
  if (method->rgctx_data == (MethodInfo_86A820_RGCTXs *)0x0) {
    auStack_d0[0] = 0x18086a856;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pIVar12 = local_res18->rgctx_data->_7_System_Collections_Generic_List_Enumerator_T_;
  uVar16 = (pIVar12->_2).stack_slot_size;
  _local_res8 = (Il2CppClass *)CONCAT44(uStackX_c,uVar16);
  size = (ulonglong)(local_res18->rgctx_data->_10_T->_2).stack_slot_size;
  if (((pIVar12->_2).bitflags1 & 1) == 0) {
    auStack_d0[0] = 0x18086a892;
    pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    uVar16 = local_res8;
  }
  uVar10 = (pIVar12->_2).stack_slot_size + 0x10;
  uVar13 = (ulonglong)uVar10 + 0xf;
  if (uVar13 <= uVar10) {
    uVar13 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x18086a8c2;
  lVar4 = -(uVar13 & 0xfffffffffffffff0);
  local_88 = (longlong)&stack0xffffffffffffff68 + lVar4;
  uVar13 = size + 0xf;
  if (uVar13 <= size) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x18086a8e4;
  lVar5 = -(uVar13 & 0xfffffffffffffff0);
  pIVar12 = (Il2CppClass *)((longlong)&stack0xffffffffffffff68 + lVar5 + lVar4);
  uVar18 = (ulonglong)uVar16;
  uVar13 = uVar18 + 0xf;
  if (uVar13 <= uVar18) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar5 + lVar4) = 0x18086a904;
  lVar6 = -(uVar13 & 0xfffffffffffffff0);
  local_98 = (undefined1 *)((longlong)&stack0xffffffffffffff68 + lVar6 + lVar5 + lVar4);
  uVar13 = uVar18 + 0xf;
  if (uVar13 <= uVar18) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar6 + lVar5 + lVar4) = 0x18086a925;
  lVar7 = -(uVar13 & 0xfffffffffffffff0);
  local_res20 = (undefined1 *)((longlong)&stack0xffffffffffffff68 + lVar7 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_d0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a93b;
  il2cpp_runtime_helper_180522500(local_res20,0);
  uVar13 = size + 0xf;
  if (uVar13 <= size) {
    uVar13 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a951;
  lVar8 = -(uVar13 & 0xfffffffffffffff0);
  destination = (undefined1 *)((longlong)&stack0xffffffffffffff68 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4);
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a966;
  il2cpp_runtime_helper_180522500(destination,0,size);
  pIVar14 = local_res18->rgctx_data->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar14->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a985;
    pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
  }
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a98d;
  pSVar15 = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar14);
  pMVar1 = local_res18->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a9a8;
  (*pIVar2)(pSVar15,pMVar1);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    pMVar1 = local_res18->rgctx_data->_3_System_Collections_Generic_List_T__get_Count;
    pIVar2 = pMVar1->methodPointer;
    *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a9c9;
    iVar11 = (*pIVar2)(items,pMVar1);
    if (iVar11 != 0) {
      pIVar14 = local_res18->rgctx_data->_2_System_Collections_Generic_List_T_;
      local_80 = pSVar15;
      if (((pIVar14->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a9f5;
        pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      }
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086a9fd;
      pIVar14 = (Il2CppClass *)il2cpp_codegen_object_new(pIVar14);
      pMVar1 = local_res18->rgctx_data->_4_System_Collections_Generic_List_T___ctor;
      pIVar2 = pMVar1->methodPointer;
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aa18;
      (*pIVar2)(pIVar14,pMVar1);
      if (pSVar15 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_18086ac3d;
      pMVar1 = local_res18->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      local_90 = pIVar14;
      *(Il2CppClass **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = pIVar14;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aa4a;
      (*pIVar3)(pIVar2,pMVar1,pSVar15,&stack0xffffffffffffff70,
                *(void **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
      iVar17 = 0;
      pMVar1 = local_res18->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
      local_90 = (Il2CppClass *)local_98;
      *(undefined1 **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = local_98;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aa79;
      (*pIVar3)(pIVar2,pMVar1,items,&stack0xffffffffffffff70,
                *(void **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
      source = local_98;
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aa90;
      memcpy(local_res20,source,(ulonglong)_local_res8 & 0xffffffff);
      iVar11 = local_res10;
      local_70 = 0;
      local_68 = &stack0x00000018;
      local_60 = (undefined1 *)&stack0xffffffffffffff78;
      local_58 = &stack0x00000020;
      while( true ) {
        pMVar1 = local_res18->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T__MoveNext;
        pIVar2 = pMVar1->methodPointer;
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aadb;
        cVar9 = (*pIVar2)(local_res20,pMVar1);
        if (cVar9 == '\0') break;
        pMVar1 = local_res18->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        *(Il2CppClass **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = pIVar12;
        pIVar2 = pMVar1->methodPointer;
        pIVar3 = pMVar1->invoker_method;
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ab16;
        _local_res8 = pIVar12;
        (*pIVar3)(pIVar2,pMVar1,local_res20,(void **)&stack0x00000008,
                  *(void **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ab24;
        memcpy(destination,pIVar12,size);
        iVar17 = iVar17 + 1;
        if (iVar11 + 1 <= iVar17) {
          pIVar14 = local_res18->rgctx_data->_2_System_Collections_Generic_List_T_;
          if (((pIVar14->_2).bitflags1 & 1) == 0) {
            *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ab4e;
            pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
          }
          iVar17 = 1;
          *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ab5b;
          pIVar14 = (Il2CppClass *)il2cpp_codegen_object_new(pIVar14);
          pMVar1 = local_res18->rgctx_data->_4_System_Collections_Generic_List_T___ctor;
          pIVar2 = pMVar1->methodPointer;
          *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ab76;
          (*pIVar2)(pIVar14,pMVar1);
          pMVar1 = local_res18->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
          *(Il2CppClass **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = pIVar14;
          pIVar2 = pMVar1->methodPointer;
          pIVar3 = pMVar1->invoker_method;
          *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086aba5;
          _local_res8 = pIVar14;
          (*pIVar3)(pIVar2,pMVar1,pSVar15,(void **)&stack0x00000008,
                    *(void **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
        }
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086abb3;
        memcpy(pIVar12,destination,size);
        if (pIVar14 == (Il2CppClass *)0x0) {
          *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ac48;
          ThrowNullReferenceException();
        }
        _local_res8 = pIVar12;
        if (-1 < (int)(local_res18->rgctx_data->_10_T->_1).byval_arg.bits) {
          _local_res8 = (pIVar12->_1).image;
        }
        pMVar1 = local_res18->rgctx_data->_11_System_Collections_Generic_List_T__Add;
        *(Il2CppClass **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = _local_res8;
        pIVar2 = pMVar1->methodPointer;
        pIVar3 = pMVar1->invoker_method;
        *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ac03;
        (*pIVar3)(pIVar2,pMVar1,pIVar14,(void **)&stack0x00000008,
                  *(void **)((longlong)alStack_a8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4));
      }
      *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ac11;
      il2cpp_runtime_helper_180863920(&stack0xffffffffffffff98);
    }
    return pSVar15;
  }
label_18086ac3d:
  *(undefined8 *)((longlong)auStack_d0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4) = 0x18086ac42;
  ThrowNullReferenceException();
}


// Utility.Util$$GroupBuckets<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets_object_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_86A4D0* method);
// 0x18086a4d0
// eh: try 0x18086a6b0..0x18086a816 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18086a55e: nop 
// asm:   0x18086a7ab: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18086a7b0: mov rcx, qword ptr [rax]
// asm:   0x18086a7b3: mov rdx, qword ptr [rcx + 0x38]
// asm:   0x18086a7b7: mov rdx, qword ptr [rdx + 0x70]
// asm:   0x18086a7bb: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18086a7c0: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18086a7c5: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18086a7ca: test rcx, rcx
// asm:   0x18086a7cd: jne 0x18086a816
// asm:   0x18086a7cf: mov rbx, qword ptr [rsp + 0xa8]
// asm:   0x18086a816: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets_object_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_86A4D0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_T__array *pSVar4;
  System_Object_array *pSVar5;
  Il2CppObject *item;
  bool bVar6;
  Il2CppClass *pIVar7;
  System_Collections_Generic_List_List_T___o *__this;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  int iVar8;
  int32_t index;
  Il2CppObject local_res18;
  System_Collections_Generic_List_Enumerator_object__o local_60;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  local_res18.klass = (Il2CppClass *)method;
  if (method->rgctx_data == (MethodInfo_86A4D0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pIVar7 = (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
           _0_System_Collections_Generic_List_List_T__;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  __this = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar7);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)
             (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
             _1_System_Collections_Generic_List_List_T____ctor);
  iVar8 = 0;
  if (0 < buckets) {
    do {
      pIVar7 = (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
               _2_System_Collections_Generic_List_T_;
      if (((pIVar7->_2).bitflags1 & 1) == 0) {
        pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
      }
      __this_00 = (System_Collections_Generic_List_T__o *)il2cpp_codegen_object_new(pIVar7);
      System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                 (MethodInfo_92A240 *)
                 (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
                 _3_System_Collections_Generic_List_T___ctor);
      if (__this == (System_Collections_Generic_List_List_T___o *)0x0) goto label_18086a7f4;
      pMVar3 = (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
               _4_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this->fields)._items;
      if (pSVar4 == (System_Collections_Generic_List_T__array *)0x0) goto label_18086a7f4;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar2] = __this_00;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,__this_00);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                   (MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < buckets);
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if (((items->fields)._size != 0) && (buckets != 0)) {
      iVar8 = (items->fields)._size;
      index = 0;
      local_res18.monitor = __this;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,items,
                 (MethodInfo_91F180 *)
                 (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
                 _6_System_Collections_Generic_List_T__GetEnumerator);
      local_60.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
      local_60.fields._index = local_48._8_4_;
      local_60.fields._version = local_48._12_4_;
      local_60.fields._current = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38 = &local_res18;
      local_48._8_8_ = &local_60;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_60,
                           (MethodInfo_153A2A0 *)
                           (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
                           _13_System_Collections_Generic_List_Enumerator_T__MoveNext);
        item = local_60.fields._current;
        if (!bVar6) break;
        if (__this == (System_Collections_Generic_List_List_T___o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)__this,index,
                               (MethodInfo_92B830 *)
                               (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
                               _11_System_Collections_Generic_List_List_T___get_Item);
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar3 = (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)->
                 _12_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_01->fields)._items;
        if (pSVar5 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          if ((uint)pSVar5->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,item,(MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        if ((iVar8 / buckets <= (__this_01->fields)._size) && (index < buckets + -1)) {
          index = index + 1;
        }
      }
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
                 (MethodInfo *)
                 (*(MethodInfo_86A4D0_RGCTXs **)&((local_res18.klass)->_1).this_arg.bits)[1].
                 _0_System_Collections_Generic_List_List_T__);
    }
    return __this;
  }
label_18086a7f4:
  ThrowNullReferenceException();
}


// Utility.Util$$GroupBuckets<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_86A040* method);
// 0x18086a040
// eh: try 0x18086a340..0x18086a4c8 -> pad 0x18331a8d0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18086a1f8: nop dword ptr [rax + rax]
// asm:   0x18086a33d: nop dword ptr [rax]
// asm:   0x18086a48c: lea rcx, [rbp + 0x40]
// asm:   0x18086a490: call 0x1808638a0  ; il2cpp_runtime_helper_1808638a0()
// asm:   0x18086a495: mov rcx, qword ptr [rbp + 0x38]
// asm:   0x18086a499: test rcx, rcx
// asm:   0x18086a49c: jne 0x18086a4c8
// asm:   0x18086a49e: mov rbx, qword ptr [rbp + 0x30]
// asm:   0x18086a4c8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18331a8d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18331a8d5: push rbp
// asm:   0x18331a8d6: sub rsp, 0x30
// asm:   0x18331a8da: lea rbp, [rdx + 0x30]
// asm:   0x18331a8de: mov rax, qword ptr [rbp + 0x58]
// asm:   0x18331a8e2: mov rcx, qword ptr [rax]
// asm:   0x18331a8e5: mov qword ptr [rbp + 0x38], rcx
// asm:   0x18331a8e9: movabs rax, 0
// asm:   0x18331a8f3: add rsp, 0x30
// asm:   0x18331a8f7: pop rbp
// asm:   0x18331a8f8: ret 

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_86A040 *method)

{
  void *source;
  undefined8 *destination;
  void *pvVar1;
  uint uVar2;
  MethodInfo_86A040_RGCTXs *pMVar3;
  MethodInfo *pMVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  MethodInfo *pMVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  void *pvVar14;
  void **ppvVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  Il2CppClass *pIVar19;
  ulonglong uVar20;
  System_Collections_Generic_List_List_T___o *pSVar21;
  Il2CppObject *pIVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  MethodInfo_86A040 *local_res18;
  void *local_res20;
  undefined8 auStack_e0 [5];
  longlong alStack_b8 [2];
  void *local_a8;
  void **local_a0;
  Il2CppObject *local_98;
  void **local_90;
  longlong local_88;
  void *local_80;
  System_Collections_Generic_List_List_T___o *local_78;
  undefined8 local_70;
  MethodInfo_86A040 **local_68;
  longlong *local_60;
  void **local_58;
  
  local_res18 = method;
  if (method->rgctx_data == (MethodInfo_86A040_RGCTXs *)0x0) {
    auStack_e0[0] = 0x18086a077;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  pMVar3 = local_res18->rgctx_data;
  uVar17 = (pMVar3->_7_System_Collections_Generic_List_Enumerator_T_->_2).stack_slot_size;
  local_res20 = (void *)CONCAT44(local_res20._4_4_,uVar17);
  uVar2 = (pMVar3->_10_T->_2).stack_slot_size;
  pIVar19 = pMVar3->_7_System_Collections_Generic_List_Enumerator_T_;
  if (((pIVar19->_2).bitflags1 & 1) == 0) {
    auStack_e0[0] = 0x18086a0b9;
    pIVar19 = il2cpp_codegen_class_init_checked(pIVar19);
    uVar17 = (uint)local_res20;
  }
  uVar25 = (ulonglong)uVar17;
  uVar17 = (pIVar19->_2).stack_slot_size + 0x10;
  uVar20 = (ulonglong)uVar17 + 0xf;
  if (uVar20 <= uVar17) {
    uVar20 = 0xffffffffffffff0;
  }
  auStack_e0[0] = 0x18086a0f0;
  lVar8 = -(uVar20 & 0xfffffffffffffff0);
  local_88 = (longlong)&local_a8 + lVar8;
  uVar24 = (ulonglong)uVar2;
  uVar20 = uVar24 + 0xf;
  if (uVar20 <= uVar24) {
    uVar20 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar8) = 0x18086a113;
  lVar9 = -(uVar20 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_a8 + lVar9 + lVar8);
  uVar20 = uVar24 + 0xf;
  if (uVar20 <= uVar24) {
    uVar20 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar9 + lVar8) = 0x18086a130;
  lVar10 = -(uVar20 & 0xfffffffffffffff0);
  destination = (undefined8 *)((longlong)&local_a8 + lVar10 + lVar9 + lVar8);
  uVar20 = uVar25 + 0xf;
  if (uVar20 <= uVar25) {
    uVar20 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar10 + lVar9 + lVar8) = 0x18086a14d;
  lVar11 = -(uVar20 & 0xfffffffffffffff0);
  local_a0 = (void **)((longlong)&local_a8 + lVar11 + lVar10 + lVar9 + lVar8);
  uVar20 = uVar25 + 0xf;
  if (uVar20 <= uVar25) {
    uVar20 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a16e;
  lVar12 = -(uVar20 & 0xfffffffffffffff0);
  pvVar1 = (void *)((longlong)&local_a8 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8);
  local_a8 = pvVar1;
  *(undefined8 *)((longlong)auStack_e0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a181;
  il2cpp_runtime_helper_180522500(pvVar1,0);
  uVar20 = uVar24 + 0xf;
  if (uVar20 <= uVar24) {
    uVar20 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a196;
  lVar13 = -(uVar20 & 0xfffffffffffffff0);
  pvVar1 = (void *)((longlong)&local_a8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8);
  *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a1ab;
  il2cpp_runtime_helper_180522500(pvVar1,0,uVar24);
  pIVar19 = local_res18->rgctx_data->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar19->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a1ca;
    pIVar19 = il2cpp_codegen_class_init_checked(pIVar19);
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a1d2;
  pSVar21 = (System_Collections_Generic_List_List_T___o *)il2cpp_codegen_object_new(pIVar19);
  pMVar4 = local_res18->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor;
  pIVar5 = pMVar4->methodPointer;
  *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a1ed;
  (*pIVar5)(pSVar21,pMVar4);
  iVar23 = 0;
  if (0 < buckets) {
    do {
      pIVar19 = local_res18->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar19->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a220;
        pIVar19 = il2cpp_codegen_class_init_checked(pIVar19);
      }
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a228;
      pIVar22 = il2cpp_codegen_object_new(pIVar19);
      pMVar4 = local_res18->rgctx_data->_3_System_Collections_Generic_List_T___ctor;
      pIVar5 = pMVar4->methodPointer;
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a243;
      (*pIVar5)(pIVar22,pMVar4);
      if (pSVar21 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_18086a4b6;
      pMVar4 = local_res18->rgctx_data->_4_System_Collections_Generic_List_List_T___Add;
      local_98 = pIVar22;
      *(Il2CppObject **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = pIVar22;
      pIVar5 = pMVar4->methodPointer;
      pIVar6 = pMVar4->invoker_method;
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a278;
      (*pIVar6)(pIVar5,pMVar4,pSVar21,&local_98,
                *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8));
      iVar23 = iVar23 + 1;
    } while (iVar23 < buckets);
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    pMVar4 = local_res18->rgctx_data->_5_System_Collections_Generic_List_T__get_Count;
    pIVar5 = pMVar4->methodPointer;
    *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a2a7;
    iVar23 = (*pIVar5)(items,pMVar4);
    if ((iVar23 != 0) && (buckets != 0)) {
      pMVar4 = local_res18->rgctx_data->_5_System_Collections_Generic_List_T__get_Count;
      pIVar5 = pMVar4->methodPointer;
      local_78 = pSVar21;
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a2d4;
      iVar23 = (*pIVar5)(items,pMVar4);
      local_98 = (Il2CppObject *)CONCAT44(local_98._4_4_,iVar23 / buckets);
      iVar23 = 0;
      pMVar4 = local_res18->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
      local_90 = local_a0;
      *(void ***)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = local_a0;
      pIVar5 = pMVar4->methodPointer;
      pIVar6 = pMVar4->invoker_method;
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a30a;
      (*pIVar6)(pIVar5,pMVar4,items,&local_90,
                *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8));
      ppvVar15 = local_a0;
      pvVar14 = local_a8;
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a31e;
      memcpy(pvVar14,ppvVar15,(ulonglong)local_res20 & 0xffffffff);
      local_70 = 0;
      local_68 = &local_res18;
      local_60 = &local_88;
      local_58 = &local_a8;
      while( true ) {
        pvVar14 = local_a8;
        pMVar4 = local_res18->rgctx_data->_13_System_Collections_Generic_List_Enumerator_T__MoveNext;
        pIVar5 = pMVar4->methodPointer;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a358;
        cVar16 = (*pIVar5)(pvVar14,pMVar4);
        if (cVar16 == '\0') break;
        pMVar4 = local_res18->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = source;
        pvVar14 = local_a8;
        pIVar5 = pMVar4->methodPointer;
        pIVar6 = pMVar4->invoker_method;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a390;
        local_res20 = source;
        (*pIVar6)(pIVar5,pMVar4,pvVar14,&local_res20,
                  *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8));
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a3a2;
        memcpy(pvVar1,source,(ulonglong)uVar2);
        if (pSVar21 == (System_Collections_Generic_List_List_T___o *)0x0) {
          *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
               0x18086a4c7;
          ThrowNullReferenceException();
        }
        pMVar4 = local_res18->rgctx_data->_11_System_Collections_Generic_List_List_T___get_Item;
        local_res20 = (void *)CONCAT44(local_res20._4_4_,iVar23);
        local_90 = &local_res20;
        pMVar7 = local_res18->rgctx_data->_11_System_Collections_Generic_List_List_T___get_Item;
        *(void ****)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = &local_a0;
        pIVar5 = pMVar7->methodPointer;
        pIVar6 = pMVar4->invoker_method;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a3ed;
        (*pIVar6)(pIVar5,pMVar4,pSVar21,&local_90,
                  *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8));
        ppvVar15 = local_a0;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a403;
        memcpy(destination,pvVar1,(ulonglong)uVar2);
        if (ppvVar15 == (void **)0x0) {
          *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
               0x18086a4c1;
          ThrowNullReferenceException();
        }
        local_80 = destination;
        if (-1 < (int)(local_res18->rgctx_data->_10_T->_1).byval_arg.bits) {
          local_80 = (void *)*destination;
        }
        pMVar4 = local_res18->rgctx_data->_12_System_Collections_Generic_List_T__Add;
        *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = local_80;
        pIVar5 = pMVar4->methodPointer;
        pIVar6 = pMVar4->invoker_method;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a44d;
        (*pIVar6)(pIVar5,pMVar4,ppvVar15,&local_80,
                  *(void **)((longlong)alStack_b8 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8));
        pMVar4 = local_res18->rgctx_data->_5_System_Collections_Generic_List_T__get_Count;
        pIVar5 = pMVar4->methodPointer;
        *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) =
             0x18086a465;
        iVar18 = (*pIVar5)(ppvVar15,pMVar4);
        if (((int)local_98 <= iVar18) && (iVar23 < buckets + -1)) {
          iVar23 = iVar23 + 1;
        }
      }
      *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a48a;
      il2cpp_runtime_helper_1808638a0(&local_68);
    }
    return pSVar21;
  }
label_18086a4b6:
  *(undefined8 *)((longlong)auStack_e0 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8) = 0x18086a4bb;
  ThrowNullReferenceException();
}


// Utility.Util$$GetRandomFromWeightedList
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedList (System_Collections_Generic_List_object__o* values, System_Collections_Generic_List_float__o* weights, const MethodInfo* method);
// 0x182342560
// eh: try 0x182342650..0x182342676 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182342687: mov rdx, qword ptr [rip + 0x1d5402a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose
// asm:   0x18234268e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182342693: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182342698: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234269d: test rcx, rcx
// asm:   0x1823426a0: jne 0x182342760
// asm:   0x1823426a6: xor edi, edi
// asm:   0x1823426a8: mov rsi, qword ptr [rsp + 0xa8]
// asm:   0x1823426b0: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x1823426b8: movss xmm6, dword ptr [rsp + 0xb8]
// asm:   0x1823426c1: xorps xmm7, xmm7
// asm:   0x1823426dc: nop dword ptr [rax]
// asm:   0x182342720: mov r8, qword ptr [rip + 0x1d83399]  ; MethodInfo_System_Collections_Generic_List_object_get_Item
// asm:   0x182342727: mov edx, edi
// asm:   0x182342760: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

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
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  Il2CppObject *local_48;
  
  if (Il2CppMethodInitialized_184347850 == '\0') {
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
    Il2CppMethodInitialized_184347850 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (Il2CppObject *)0x0;
  if (weights != (System_Collections_Generic_List_float__o *)0x0) {
    fVar5 = 0.0;
    fVar4 = 0.0;
    System_Collections_Generic_List_RegexCharClass_SingleRange___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_RegexCharClass_SingleRange__o *)weights,
               (MethodInfo_91F1C0 *)MethodInfo_System_Collections_Generic_List_float_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    index = 0;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
    while (bVar1 = System_Collections_Generic_List_Enumerator_RegexCharClass_SingleRange___MoveNext
                             ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                              (MethodInfo_1530180 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_float_MoveNext), bVar1) {
      fVar4 = fVar4 + local_48._0_4_;
    }
    System_Collections_Generic_List_Enumerator_float___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_List_Enumerator_float_Dispose);
    fVar4 = UnityEngine_Random__Range(0.0,fVar4,(MethodInfo *)0x0);
    if (values != (System_Collections_Generic_List_object__o *)0x0) {
      for (; index < (values->fields)._size; index = index + 1) {
        if ((fVar5 <= fVar4) &&
           (fVar3 = System_Collections_Generic_List_float___get_Item
                              (weights,index,
                               (MethodInfo_983A20 *)MethodInfo_System_Collections_Generic_List_float_get_Item)
           , fVar4 < fVar3 + fVar5)) goto label_182342729;
        fVar3 = System_Collections_Generic_List_float___get_Item
                          (weights,index,
                           (MethodInfo_983A20 *)MethodInfo_System_Collections_Generic_List_float_get_Item);
        fVar5 = fVar5 + fVar3;
      }
      index = 0;
label_182342729:
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (values,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetRandomFromWeightedNode
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedNode (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182342770

Il2CppObject * Utility_Util__GetRandomFromWeightedNode(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Single_array *pSVar4;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar5;
  bool bVar6;
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_List_float__o *__this_00;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar7;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  MethodInfo *pMVar11;
  System_Xml_Schema_XmlSchema_o *pSVar12;
  Il2CppObject *pIVar13;
  float item;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_78;
  
  if (Il2CppMethodInitialized_184347851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347851 = '\x01';
  }
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_float);
  System_Collections_Generic_List_float____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_float_ctor);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = SimpleJSONFixed_JSONNode__get_Values(&local_78,node,(MethodInfo *)0x0);
    local_c8.type = (pSVar7->fields).m_Enumerator.fields.type;
    local_c8._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
    local_c8.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar5 = &(pSVar7->fields).m_Enumerator;
    local_c8.m_Object.fields._version = (pSVar5->fields).m_Object.fields._version;
    local_c8.m_Object.fields._index = (pSVar5->fields).m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key =
         (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_c8.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar5 = &(pSVar7->fields).m_Enumerator;
    local_c8.m_Object.fields._getEnumeratorRetType = (pSVar5->fields).m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar5->fields).m_Object.fields.field_0x24;
    local_c8.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar5 = &(pSVar7->fields).m_Enumerator;
    local_c8.m_Array.fields._index = (pSVar5->fields).m_Array.fields._index;
    local_c8.m_Array.fields._version = (pSVar5->fields).m_Array.fields._version;
    local_c8.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar8 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    local_118.type = (pSVar8->fields).m_Enumerator.fields.type;
    local_118._4_4_ = *(undefined4 *)&(pSVar8->fields).m_Enumerator.fields.field_0x4;
    local_118.m_Object.fields._dictionary = (pSVar8->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar5 = &(pSVar8->fields).m_Enumerator;
    local_118.m_Object.fields._version = (pSVar5->fields).m_Object.fields._version;
    local_118.m_Object.fields._index = (pSVar5->fields).m_Object.fields._index;
    local_118.m_Object.fields._current.fields.key =
         (pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_118.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar8->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar5 = &(pSVar8->fields).m_Enumerator;
    local_118.m_Object.fields._getEnumeratorRetType = (pSVar5->fields).m_Object.fields._getEnumeratorRetType;
    local_118.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar5->fields).m_Object.fields.field_0x24;
    local_118.m_Array.fields._list = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar5 = &(pSVar8->fields).m_Enumerator;
    local_118.m_Array.fields._index = (pSVar5->fields).m_Array.fields._index;
    local_118.m_Array.fields._version = (pSVar5->fields).m_Array.fields._version;
    local_118.m_Array.fields._current = (pSVar8->fields).m_Enumerator.fields.m_Array.fields._current;
    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
    if (bVar6) {
      do {
        pSVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
        if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182342aa7;
        pSVar9 = (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
        pMVar11 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_182342aa7;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_182342aa7;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) goto label_182342aad;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,(Il2CppObject *)pSVar9,(MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method
                    );
        }
        pMVar11 = (MethodInfo *)
                  (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                            (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
        pSVar12 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,pMVar11);
        if (pSVar12 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182342aa7;
        item = (float)(*(code *)((Il2CppClass *)pSVar12->klass)->vtable[37].methodPtr)
                                (pSVar12,((Il2CppClass *)pSVar12->klass)->vtable[37].method);
        pMVar11 = MethodInfo_System_Collections_Generic_List_float_Add;
        if (__this_00 == (System_Collections_Generic_List_float__o *)0x0) goto label_182342aa7;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_00->fields)._items;
        if (pSVar4 == (System_Single_array *)0x0) goto label_182342aa7;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
label_182342aad:
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = item;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize
                    (__this_00,item,(MethodInfo_973B40 *)pMVar11->klass->rgctx_data[0xe].method);
        }
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      } while (bVar6);
    }
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pIVar13 = Utility_Util__GetRandomFromWeightedList(__this,__this_00,(MethodInfo *)0x0);
    return pIVar13;
  }
label_182342aa7:
  ThrowNullReferenceException();
}


// Utility.Util$$DistanceIgnoreY
// il2cpp: float Utility_Util__DistanceIgnoreY (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x182341830

float Utility_Util__DistanceIgnoreY(UnityEngine_Vector3_o *a,UnityEngine_Vector3_o *b,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (a->fields).z - (b->fields).z;
  fVar2 = (a->fields).x - (b->fields).x;
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (0.0 <= fVar1) {
    return SQRT(fVar1);
  }
  fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(fVar1);
  return fVar1;
}


// Utility.Util$$PaginateDictionary<object, object>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary_object__object_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_86B260* method);
// 0x18086b260

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary_object__object_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_86B260 *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  System_Func_TSource__TKey__o *__this;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Func_TSource__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  if (method->rgctx_data == (MethodInfo_86B260_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    if (method->rgctx_data == (MethodInfo_86B260_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar2);
  }
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).bitflags1 & 1) == 0) {
    pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
  }
  __this = *(System_Func_TSource__TKey__o **)((longlong)pIVar2->static_fields + 8);
  if (__this == (System_Func_TSource__TKey__o *)0x0) {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar2);
    }
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    pIVar1 = *(Il2CppObject **)pIVar2->static_fields;
    pIVar2 = method->rgctx_data->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    __this = (System_Func_TSource__TKey__o *)il2cpp_codegen_object_new(pIVar2);
    System_Converter_AccelStructAdapter_InstanceIDs__int____ctor
              ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this,pIVar1,
               (intptr_t)method->rgctx_data->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0
               ,(MethodInfo_13859D0 *)
                method->rgctx_data->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    *(System_Func_TSource__TKey__o **)((longlong)pIVar2->static_fields + 8) = __this;
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar2->static_fields + 8),__this);
  }
  source = System_Linq_Enumerable__OrderBy_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)dict,__this,
                      (MethodInfo_6C1360 *)
                      method->rgctx_data->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_)
  ;
  pSVar3 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_6C9850 *)
                      method->rgctx_data->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__);
  if (pSVar3 != (System_Collections_Generic_List_TSource__o *)0x0) {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    pSVar4 = System_Linq_Enumerable__Skip_KeyValuePair_object__object__
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                        (pageNumber + -1) * elementsPerPage,
                        (MethodInfo_6C72C0 *)
                        method->rgctx_data->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__);
    pSVar4 = System_Linq_Enumerable__Take_KeyValuePair_object__object__
                       (pSVar4,elementsPerPage,
                        (MethodInfo_6C7880 *)
                        method->rgctx_data->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar2);
    }
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar2->_2).bitflags1 & 1) == 0) {
      pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
    }
    __this_00 = *(System_Func_TSource__TResult__o **)((longlong)pIVar2->static_fields + 0x10);
    if (__this_00 == (System_Func_TSource__TResult__o *)0x0) {
      pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      if ((pIVar2->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar2);
      }
      pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      pIVar1 = *(Il2CppObject **)pIVar2->static_fields;
      pIVar2 = method->rgctx_data->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      __this_00 = (System_Func_TSource__TResult__o *)il2cpp_codegen_object_new(pIVar2);
      System_Converter_AccelStructAdapter_InstanceIDs__int____ctor
                ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_00,pIVar1,
                 (intptr_t)
                 method->rgctx_data->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1,
                 (MethodInfo_13859D0 *)
                 method->rgctx_data->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor);
      pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      *(System_Func_TSource__TResult__o **)((longlong)pIVar2->static_fields + 0x10) = __this_00;
      pIVar2 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar2->_2).bitflags1 & 1) == 0) {
        pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
      }
      Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar2->static_fields + 0x10),__this_00);
    }
    source_00 = System_Linq_Enumerable__Select_Vector3__object_
                          (pSVar4,__this_00,
                           (MethodInfo_6C2170 *)
                           method->rgctx_data->
                           _17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_);
    pSVar3 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (MethodInfo_6C9C10 *)method->rgctx_data->_19_System_Linq_Enumerable_ToList_TValue_);
    return (System_Collections_Generic_List_TValue__o *)pSVar3;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$PaginateDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_86AEE0* method);
// 0x18086aee0

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_86AEE0 *method)

{
  MethodInfo *pMVar1;
  undefined8 uVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  longlong lVar6;
  System_Collections_Generic_List_TValue__o *pSVar7;
  
  if (method->rgctx_data == (MethodInfo_86AEE0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    if (method->rgctx_data == (MethodInfo_86AEE0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(pIVar3);
  }
  pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  pIVar4 = *(Il2CppObject **)((longlong)pIVar3->static_fields + 8);
  if (pIVar4 == (Il2CppObject *)0x0) {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    uVar5 = *(undefined8 *)pIVar3->static_fields;
    pIVar3 = method->rgctx_data->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar4 = il2cpp_codegen_object_new(pIVar3);
    pMVar1 = method->rgctx_data->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor;
    (*pMVar1->methodPointer)
              (pIVar4,uVar5,
               method->rgctx_data->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0,pMVar1);
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    *(Il2CppObject **)((longlong)pIVar3->static_fields + 8) = pIVar4;
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar3->static_fields + 8),pIVar4);
  }
  pMVar1 = method->rgctx_data->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_;
  uVar5 = (*pMVar1->methodPointer)(dict,pIVar4,pMVar1);
  pMVar1 = method->rgctx_data->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__;
  lVar6 = (*pMVar1->methodPointer)(uVar5,pMVar1);
  if (lVar6 != 0) {
    pMVar1 = method->rgctx_data->_11_System_Collections_Generic_List_KeyValuePair_TKey__TValue___get_Count;
    (*pMVar1->methodPointer)(lVar6,pMVar1);
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    pMVar1 = method->rgctx_data->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__;
    uVar5 = (*pMVar1->methodPointer)(lVar6,(ulonglong)(uint)((pageNumber + -1) * elementsPerPage),pMVar1);
    pMVar1 = method->rgctx_data->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__;
    uVar5 = (*pMVar1->methodPointer)(uVar5,(ulonglong)(uint)elementsPerPage,pMVar1);
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar3);
    }
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar3->_2).bitflags1 & 1) == 0) {
      pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
    }
    pIVar4 = *(Il2CppObject **)((longlong)pIVar3->static_fields + 0x10);
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      if ((pIVar3->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(pIVar3);
      }
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      uVar2 = *(undefined8 *)pIVar3->static_fields;
      pIVar3 = method->rgctx_data->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      pIVar4 = il2cpp_codegen_object_new(pIVar3);
      pMVar1 = method->rgctx_data->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor;
      (*pMVar1->methodPointer)
                (pIVar4,uVar2,
                 method->rgctx_data->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1,pMVar1
                );
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      *(Il2CppObject **)((longlong)pIVar3->static_fields + 0x10) = pIVar4;
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
      if (((pIVar3->_2).bitflags1 & 1) == 0) {
        pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
      }
      Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar3->static_fields + 0x10),pIVar4);
    }
    pMVar1 = method->rgctx_data->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_;
    uVar5 = (*pMVar1->methodPointer)(uVar5,pIVar4,pMVar1);
    pMVar1 = method->rgctx_data->_19_System_Linq_Enumerable_ToList_TValue_;
    pSVar7 = (System_Collections_Generic_List_TValue__o *)(*pMVar1->methodPointer)(uVar5,pMVar1);
    return pSVar7;
  }
  ThrowNullReferenceException();
}


// Utility.Util$$ColorText
// il2cpp: System_String_o* Utility_Util__ColorText (System_String_o* text, System_String_o* color, const MethodInfo* method);
// 0x1823410c0

System_String_o * Utility_Util__ColorText(System_String_o *text,System_String_o *color,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    il2cpp_codegen_initialize_runtime_metadata(&"<color=");
    Il2CppMethodInitialized_184347852 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar1 = "<color=";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = color;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,color);
        pSVar1 = ">";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,text);
            pSVar1 = "</color>";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Utility.Util$$SizeText
// il2cpp: System_String_o* Utility_Util__SizeText (System_String_o* text, int32_t size, const MethodInfo* method);
// 0x1823438c0

System_String_o * Utility_Util__SizeText(System_String_o *text,int32_t size,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_184347853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"<size={0}>{1}</size>");
    Il2CppMethodInitialized_184347853 = '\x01';
  }
  local_res10[0] = size;
  arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
  pSVar1 = System_String__Format_196d440("<size={0}>{1}</size>",arg0,(Il2CppObject *)text,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$RichTextTag
// il2cpp: System_String_o* Utility_Util__RichTextTag (System_String_o* text, System_String_o* tag, System_String_o* value, const MethodInfo* method);
// 0x182343470

System_String_o *
Utility_Util__RichTextTag
          (System_String_o *text,System_String_o *tag,System_String_o *value,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"</");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184347854 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,9);
  pSVar1 = "<";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = tag;
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,tag);
        pSVar1 = "=";
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = value;
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,value);
            pSVar1 = ">";
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,text);
                pSVar1 = "</";
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar1);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = tag;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 7,tag);
                    pSVar1 = ">";
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = ">";
                      Il2CppCodeGenWriteBarrier(values->m_Items + 8,pSVar1);
                      pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Utility.Util$$ConstrainedToX
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToX (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x1823411e0

UnityEngine_Quaternion_o *
Utility_Util__ConstrainedToX
          (UnityEngine_Quaternion_o *__return_storage_ptr__,UnityEngine_Quaternion_o *rotation,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Quaternion_o local_18;
  
  pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                     ((UnityEngine_Vector3_o *)&local_18,rotation,(MethodInfo *)0x0);
  uVar1 = (pUVar6->fields).x;
  uVar2 = (pUVar6->fields).y;
  local_28.fields.x = (float)uVar1 * 57.29578;
  local_28.fields.y = (float)uVar2 * 57.29578;
  local_28.fields.z = (pUVar6->fields).z * 57.29578;
  pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                     ((UnityEngine_Vector3_o *)&local_18,&local_28,(MethodInfo *)0x0);
  local_28.fields.y = 0.0;
  local_28.fields.z = 0.0;
  local_28.fields.x = (pUVar6->fields).x * 0.017453292;
  pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_18,&local_28,(MethodInfo *)0x0);
  fVar3 = (pUVar7->fields).y;
  fVar4 = (pUVar7->fields).z;
  fVar5 = (pUVar7->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar7->fields).x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar4;
  (__return_storage_ptr__->fields).w = fVar5;
  return __return_storage_ptr__;
}


// Utility.Util$$ConstrainedToY
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToY (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x182341270

UnityEngine_Quaternion_o *
Utility_Util__ConstrainedToY
          (UnityEngine_Quaternion_o *__return_storage_ptr__,UnityEngine_Quaternion_o *rotation,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_38,rotation,(MethodInfo *)0x0);
  uVar1 = (pUVar6->fields).x;
  uVar2 = (pUVar6->fields).y;
  local_28.y = (float)uVar2 * 57.29578;
  local_28.x = (float)uVar1 * 57.29578;
  local_28.z = (pUVar6->fields).z * 57.29578;
  local_38.fields.x = 0.0;
  pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                     ((UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
  ;
  local_38.fields.z = 0.0;
  local_38.fields.y = (pUVar6->fields).y * 0.017453292;
  pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_18,&local_38,(MethodInfo *)0x0);
  fVar3 = (pUVar7->fields).y;
  fVar4 = (pUVar7->fields).z;
  fVar5 = (pUVar7->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar7->fields).x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar4;
  (__return_storage_ptr__->fields).w = fVar5;
  return __return_storage_ptr__;
}


// Utility.Util$$ConstrainedToZ
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x182341300

UnityEngine_Quaternion_o *
Utility_Util__ConstrainedToZ
          (UnityEngine_Quaternion_o *__return_storage_ptr__,UnityEngine_Quaternion_o *rotation,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                     ((UnityEngine_Vector3_o *)&local_38,rotation,(MethodInfo *)0x0);
  uVar1 = (pUVar6->fields).x;
  uVar2 = (pUVar6->fields).y;
  local_28.y = (float)uVar2 * 57.29578;
  local_28.x = (float)uVar1 * 57.29578;
  local_28.z = (pUVar6->fields).z * 57.29578;
  local_38.x = 0.0;
  local_38.y = 0.0;
  pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                     ((UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0)
  ;
  local_38.z = (pUVar6->fields).z * 0.017453292;
  pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                     (&local_18,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
  fVar3 = (pUVar7->fields).y;
  fVar4 = (pUVar7->fields).z;
  fVar5 = (pUVar7->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar7->fields).x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar4;
  (__return_storage_ptr__->fields).w = fVar5;
  return __return_storage_ptr__;
}


// Utility.Util$$GetAllTitanAgentIds
// il2cpp: System_Collections_Generic_List_int__o* Utility_Util__GetAllTitanAgentIds (const MethodInfo* method);
// 0x182342110

System_Collections_Generic_List_int__o * Utility_Util__GetAllTitanAgentIds(MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_float__string___o *source;
  Il2CppObject *pIVar1;
  System_Func_KeyValuePair_float__string___Nullable_int___o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar2;
  System_Predicate_T__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  UnityEngine_Rendering_ScaleFunc_o *__this_01;
  System_Collections_Generic_List_TSource__o *pSVar3;
  
  if (Il2CppMethodInitialized_184347855 == '\0') {
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
    Il2CppMethodInitialized_184347855 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  source = TypeInfo_Utility_Util->static_fields->_agentSizes;
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  __this = TypeInfo_Utility_Util_c->static_fields->__9__41_0;
  if (__this == (System_Func_KeyValuePair_float__string___Nullable_int___o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Utility_Util_c->static_fields->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_float_string_Nullable_int);
    System_Func_KeyValuePair_float__object___Nullable_int_____ctor
              ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this,pIVar1,
               (intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_0,(MethodInfo_13859D0 *)0x0);
    TypeInfo_Utility_Util_c->static_fields->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9__41_0,__this);
  }
  pSVar2 = System_Linq_Enumerable__Select_Vector3__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_6C2170 *)
                      MethodInfo_System_Linq_Enumerable_Select_KeyValuePair_float_string_Nullable_int);
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  __this_00 = (System_Predicate_T__o *)TypeInfo_Utility_Util_c->static_fields->__9__41_1;
  if (__this_00 == (System_Predicate_T__o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Utility_Util_c->static_fields->__9;
    __this_00 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Nullable_int_bool);
    System_Func_Nullable_int___bool____ctor
              (__this_00,pIVar1,(intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_1,
               (MethodInfo_B61310 *)0x0);
    TypeInfo_Utility_Util_c->static_fields->__9__41_1 = (System_Func_Nullable_int___bool__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9__41_1,__this_00);
  }
  source_00 = System_Linq_Enumerable__Where_float_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_Nullable_int);
  if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
  }
  __this_01 = (UnityEngine_Rendering_ScaleFunc_o *)TypeInfo_Utility_Util_c->static_fields->__9__41_2;
  if (__this_01 == (UnityEngine_Rendering_ScaleFunc_o *)0x0) {
    if ((TypeInfo_Utility_Util_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Utility_Util_c->static_fields->__9;
    __this_01 = (UnityEngine_Rendering_ScaleFunc_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Nullable_int_int);
    System_Func_Nullable_int___int____ctor
              (__this_01,pIVar1,(intptr_t)MethodInfo_Utility_Util_c_GetAllTitanAgentIds_b__41_2,
               (MethodInfo *)0x0);
    TypeInfo_Utility_Util_c->static_fields->__9__41_2 = (System_Func_Nullable_int___int__o *)__this_01;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util_c->static_fields->__9__41_2,__this_01);
  }
  pSVar2 = System_Linq_Enumerable__Select_Vector3__object_
                     (source_00,(System_Func_TSource__TResult__o *)__this_01,
                      (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_Nullable_int_int);
  pSVar3 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                      (MethodInfo_6C9670 *)MethodInfo_System_Linq_Enumerable_ToList_int);
  return (System_Collections_Generic_List_int__o *)pSVar3;
}


// Utility.Util$$GetAgentSizeBucket
// il2cpp: System_Collections_Generic_KeyValuePair_float__string__o Utility_Util__GetAgentSizeBucket (float size, const MethodInfo* method);
// 0x182341cf0
// eh: try 0x182341e24..0x182341e6b -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182341e7c: mov rdx, qword ptr [rip + 0x1d2d2d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_Dispose
// asm:   0x182341e83: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182341e88: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182341e8d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182341e92: test rcx, rcx
// asm:   0x182341e95: jne 0x182341ebe
// asm:   0x182341e97: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x182341ebe: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_Collections_Generic_KeyValuePair_float__string__o *
Utility_Util__GetAgentSizeBucket
          (System_Collections_Generic_KeyValuePair_float__string__o *__return_storage_ptr__,float size,
          MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_float__string___o *pSVar1;
  bool bVar2;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  uint64_t uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_184347856 == '\0') {
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
    Il2CppMethodInitialized_184347856 = '\x01';
  }
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).value = (System_String_o *)0x0;
  local_40 = (undefined1  [8])0x0;
  uStack_38 = 0;
  local_30 = (Il2CppObject *)0x0;
  uStack_28 = 0;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = TypeInfo_Utility_Util->static_fields->_agentSizes;
  if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
              ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                *)local_60,(System_Collections_Generic_List_T__o *)pSVar1,0,
               (MethodInfo_92B880 *)
               MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
    *(undefined8 *)&__return_storage_ptr__->fields = local_60._0_8_;
    (__return_storage_ptr__->fields).value = (System_String_o *)local_60._8_8_;
    pSVar1 = TypeInfo_Utility_Util->static_fields->_agentSizes;
    if (pSVar1 != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
      System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)pSVar1,
                 (MethodInfo_91F200 *)
                 MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_GetEnumerator);
      local_40 = (undefined1  [8])local_60._0_8_;
      uStack_38 = local_60._8_8_;
      local_30 = local_50;
      uStack_28 = uStack_48;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator_StyleSelectorHelper_SelectorWorkItem___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                           (MethodInfo_1529A80 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_MoveNext
                          );
        if (!bVar2) break;
        if ((float)local_30 <= size) {
          (__return_storage_ptr__->fields).key = (float)local_30;
          *(undefined4 *)&(__return_storage_ptr__->fields).field_0x4 = local_30._4_4_;
          *(undefined4 *)&(__return_storage_ptr__->fields).value = (undefined4)uStack_28;
          *(undefined4 *)((longlong)&(__return_storage_ptr__->fields).value + 4) = uStack_28._4_4_;
        }
      }
      System_Collections_Generic_List_Enumerator_KeyValuePair_float__object____Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                 MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_float_string_Dispose);
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetAgentSettings
// il2cpp: UnityEngine_AI_NavMeshBuildSettings_o Utility_Util__GetAgentSettings (float size, float* bucketSize, const MethodInfo* method);
// 0x182341bf0

UnityEngine_AI_NavMeshBuildSettings_o *
Utility_Util__GetAgentSettings
          (UnityEngine_AI_NavMeshBuildSettings_o *__return_storage_ptr__,float size,float *bucketSize,
          MethodInfo *method)

{
  System_String_o *name;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  UnityEngine_AI_NavMeshBuildDebugSettings_o UVar13;
  undefined3 uVar14;
  uint32_t uVar15;
  System_Collections_Generic_KeyValuePair_float__string__o *pSVar16;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar17;
  System_Nullable_uint__Fields local_res8;
  System_Collections_Generic_KeyValuePair_float__string__o local_68;
  UnityEngine_AI_NavMeshBuildSettings_o local_58;
  
  if (Il2CppMethodInitialized_184347857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347857 = '\x01';
  }
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar16 = Utility_Util__GetAgentSizeBucket(&local_68,size,(MethodInfo *)0x0);
  name = (pSVar16->fields).value;
  *bucketSize = (pSVar16->fields).key;
  local_res8 = (System_Nullable_uint__Fields)Utility_Util__GetNavMeshAgentID(name,(MethodInfo *)0x0);
  uVar15 = System_Nullable_uint___get_Value
                     ((System_Nullable_uint__o *)&local_res8,
                      (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
  pUVar17 = UnityEngine_AI_NavMesh__GetSettingsByID(&local_58,uVar15,(MethodInfo *)0x0);
  fVar1 = (pUVar17->fields).m_AgentRadius;
  fVar2 = (pUVar17->fields).m_AgentHeight;
  fVar3 = (pUVar17->fields).m_AgentSlope;
  fVar4 = (pUVar17->fields).m_AgentClimb;
  fVar5 = (pUVar17->fields).m_LedgeDropHeight;
  fVar6 = (pUVar17->fields).m_MaxJumpAcrossDistance;
  fVar7 = (pUVar17->fields).m_MinRegionArea;
  (__return_storage_ptr__->fields).m_AgentTypeID = (pUVar17->fields).m_AgentTypeID;
  (__return_storage_ptr__->fields).m_AgentRadius = fVar1;
  (__return_storage_ptr__->fields).m_AgentHeight = fVar2;
  (__return_storage_ptr__->fields).m_AgentSlope = fVar3;
  iVar8 = (pUVar17->fields).m_OverrideVoxelSize;
  fVar1 = (pUVar17->fields).m_VoxelSize;
  iVar9 = (pUVar17->fields).m_OverrideTileSize;
  iVar10 = (pUVar17->fields).m_TileSize;
  (__return_storage_ptr__->fields).m_AgentClimb = fVar4;
  (__return_storage_ptr__->fields).m_LedgeDropHeight = fVar5;
  (__return_storage_ptr__->fields).m_MaxJumpAcrossDistance = fVar6;
  (__return_storage_ptr__->fields).m_MinRegionArea = fVar7;
  iVar11 = (pUVar17->fields).m_BuildHeightMesh;
  uVar15 = (pUVar17->fields).m_MaxJobWorkers;
  iVar12 = (pUVar17->fields).m_PreserveTilesOutsideBounds;
  UVar13.fields.m_Flags = (pUVar17->fields).m_Debug.fields;
  uVar14 = *(undefined3 *)&(pUVar17->fields).field_0x3d;
  (__return_storage_ptr__->fields).m_OverrideVoxelSize = iVar8;
  (__return_storage_ptr__->fields).m_VoxelSize = fVar1;
  (__return_storage_ptr__->fields).m_OverrideTileSize = iVar9;
  (__return_storage_ptr__->fields).m_TileSize = iVar10;
  (__return_storage_ptr__->fields).m_BuildHeightMesh = iVar11;
  (__return_storage_ptr__->fields).m_MaxJobWorkers = uVar15;
  (__return_storage_ptr__->fields).m_PreserveTilesOutsideBounds = iVar12;
  (__return_storage_ptr__->fields).m_Debug = (UnityEngine_AI_NavMeshBuildDebugSettings_o)UVar13.fields.m_Flags
  ;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x3d = uVar14;
  return __return_storage_ptr__;
}


// Utility.Util$$GetAgentSize
// il2cpp: float Utility_Util__GetAgentSize (UnityEngine_CapsuleCollider_o* collider, const MethodInfo* method);
// 0x182341ed0

float Utility_Util__GetAgentSize(UnityEngine_CapsuleCollider_o *collider,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Collections_Generic_List_KeyValuePair_float__string___o *__this;
  uint32_t agentTypeID;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  System_Nullable_uint__Fields local_res8 [4];
  undefined1 local_f8 [24];
  float local_e0;
  undefined4 uStack_dc;
  UnityEngine_AI_NavMeshBuildSettings_Fields local_d8;
  UnityEngine_AI_NavMeshBuildSettings_o local_98 [2];
  
  if (Il2CppMethodInitialized_184347858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184347858 = '\x01';
  }
  local_res8[0].hasValue = false;
  local_res8[0]._1_3_ = 0;
  local_res8[0].value = 0;
  local_d8.m_AgentTypeID = 0;
  local_d8.m_AgentRadius = 0.0;
  local_d8.m_AgentHeight = 0.0;
  local_d8.m_AgentSlope = 0.0;
  local_d8.m_AgentClimb = 0.0;
  local_d8.m_LedgeDropHeight = 0.0;
  local_d8.m_MaxJumpAcrossDistance = 0.0;
  local_d8.m_MinRegionArea = 0.0;
  local_d8.m_OverrideVoxelSize = 0;
  local_d8.m_VoxelSize = 0.0;
  local_d8.m_OverrideTileSize = 0;
  local_d8.m_TileSize = 0;
  local_d8.m_BuildHeightMesh = 0;
  local_d8.m_MaxJobWorkers = 0;
  local_d8.m_PreserveTilesOutsideBounds = 0;
  local_d8.m_Debug.fields.m_Flags = (UnityEngine_AI_NavMeshBuildDebugSettings_Fields)0x0;
  local_d8._61_3_ = 0;
  if (collider != (UnityEngine_CapsuleCollider_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)collider,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_lossyScale
                         ((UnityEngine_Vector3_o *)local_f8,__this_00,(MethodInfo *)0x0);
      fVar1 = (pUVar3->fields).x;
      fVar2 = (pUVar3->fields).y;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      __this = TypeInfo_Utility_Util->static_fields->_agentSizes;
      if (__this != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
                  ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                    *)local_f8,(System_Collections_Generic_List_T__o *)__this,0,
                   (MethodInfo_92B880 *)
                   MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_get_Item);
        local_e0 = (float)local_f8._8_4_;
        uStack_dc = local_f8._12_4_;
        local_res8[0] =
             (System_Nullable_uint__Fields)
             Utility_Util__GetNavMeshAgentID
                       ((System_String_o *)CONCAT44(local_f8._12_4_,local_f8._8_4_),(MethodInfo *)0x0);
        agentTypeID = System_Nullable_uint___get_Value
                                ((System_Nullable_uint__o *)local_res8,
                                 (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_int_get_Value);
        pUVar4 = UnityEngine_AI_NavMesh__GetSettingsByID(local_98,agentTypeID,(MethodInfo *)0x0);
        local_d8.m_AgentTypeID = (pUVar4->fields).m_AgentTypeID;
        local_d8.m_AgentRadius = (pUVar4->fields).m_AgentRadius;
        local_d8.m_AgentHeight = (pUVar4->fields).m_AgentHeight;
        local_d8.m_AgentSlope = (pUVar4->fields).m_AgentSlope;
        local_d8.m_AgentClimb = (pUVar4->fields).m_AgentClimb;
        local_d8.m_LedgeDropHeight = (pUVar4->fields).m_LedgeDropHeight;
        local_d8.m_MaxJumpAcrossDistance = (pUVar4->fields).m_MaxJumpAcrossDistance;
        local_d8.m_MinRegionArea = (pUVar4->fields).m_MinRegionArea;
        local_d8.m_OverrideVoxelSize = (pUVar4->fields).m_OverrideVoxelSize;
        local_d8.m_VoxelSize = (pUVar4->fields).m_VoxelSize;
        local_d8.m_OverrideTileSize = (pUVar4->fields).m_OverrideTileSize;
        local_d8.m_TileSize = (pUVar4->fields).m_TileSize;
        local_d8.m_BuildHeightMesh = (pUVar4->fields).m_BuildHeightMesh;
        local_d8.m_MaxJobWorkers = (pUVar4->fields).m_MaxJobWorkers;
        local_d8.m_PreserveTilesOutsideBounds = (pUVar4->fields).m_PreserveTilesOutsideBounds;
        local_d8.m_Debug.fields.m_Flags = (pUVar4->fields).m_Debug.fields;
        local_d8._61_3_ = *(undefined3 *)&(pUVar4->fields).field_0x3d;
        fVar5 = UnityEngine_CapsuleCollider__get_radius(collider,(MethodInfo *)0x0);
        fVar6 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_d8,(MethodInfo *)0x0);
        fVar7 = UnityEngine_CapsuleCollider__get_height(collider,(MethodInfo *)0x0);
        fVar8 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                          ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_d8,(MethodInfo *)0x0);
        fVar8 = (fVar2 * fVar7) / fVar8;
        fVar6 = (fVar1 * fVar5) / fVar6;
        if (fVar6 <= fVar8) {
          fVar6 = fVar8;
        }
        return (float)local_f8._0_4_ * fVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.Util$$GetNavMeshAgentID
// il2cpp: System_Nullable_int__o Utility_Util__GetNavMeshAgentID (System_String_o* name, const MethodInfo* method);
// 0x182342420

System_Nullable_int__o Utility_Util__GetNavMeshAgentID(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar3;
  System_String_o *b;
  System_Nullable_int__Fields SVar4;
  int32_t index;
  System_Nullable_int__Fields local_res18 [2];
  undefined1 local_88 [128];
  
  if (Il2CppMethodInitialized_184347859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    Il2CppMethodInitialized_184347859 = '\x01';
  }
  local_88._0_4_ = 0;
  local_88._4_4_ = 0.0;
  local_88._8_4_ = 0.0;
  local_88._12_4_ = 0.0;
  index = 0;
  local_88._16_4_ = 0.0;
  local_88._20_4_ = 0.0;
  local_88._24_4_ = 0.0;
  local_88._28_4_ = 0.0;
  local_88._32_4_ = 0;
  local_88._36_4_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0.0;
  local_88._48_4_ = 0.0;
  local_88._52_4_ = 0.0;
  local_88._56_4_ = 0.0;
  local_88._60_4_ = 0.0;
  iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      pUVar3 = UnityEngine_AI_NavMesh__GetSettingsByIndex
                         ((UnityEngine_AI_NavMeshBuildSettings_o *)(local_88 + 0x40),index,(MethodInfo *)0x0);
      local_88._0_4_ = (pUVar3->fields).m_AgentTypeID;
      local_88._4_4_ = (pUVar3->fields).m_AgentRadius;
      local_88._8_4_ = (pUVar3->fields).m_AgentHeight;
      local_88._12_4_ = (pUVar3->fields).m_AgentSlope;
      local_88._16_4_ = (pUVar3->fields).m_AgentClimb;
      local_88._20_4_ = (pUVar3->fields).m_LedgeDropHeight;
      local_88._24_4_ = (pUVar3->fields).m_MaxJumpAcrossDistance;
      local_88._28_4_ = (pUVar3->fields).m_MinRegionArea;
      local_88._32_4_ = (pUVar3->fields).m_OverrideVoxelSize;
      local_88._36_4_ = (pUVar3->fields).m_VoxelSize;
      local_88._40_4_ = (pUVar3->fields).m_OverrideTileSize;
      local_88._44_4_ = (pUVar3->fields).m_TileSize;
      local_88._48_4_ = (pUVar3->fields).m_BuildHeightMesh;
      local_88._52_4_ = (pUVar3->fields).m_MaxJobWorkers;
      local_88._56_8_ = *(undefined8 *)&(pUVar3->fields).m_PreserveTilesOutsideBounds;
      iVar2 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)local_88,(MethodInfo *)0x0);
      b = UnityEngine_AI_NavMesh__GetSettingsNameFromID(iVar2,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(name,b,(MethodInfo *)0x0);
      if (bVar1) {
        iVar2 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)local_88,(MethodInfo *)0x0);
        local_res18[0].hasValue = false;
        local_res18[0]._1_3_ = 0;
        local_res18[0].value = 0;
        System_Nullable_int____ctor
                  ((System_Data_SqlTypes_SqlInt32_o *)local_res18,iVar2,MethodInfo_System_Nullable_int_ctor);
        return (System_Nullable_int__o)local_res18[0];
      }
      index = index + 1;
      iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
    } while (index < iVar2);
  }
  SVar4.hasValue = false;
  SVar4._1_3_ = 0;
  SVar4.value = 0;
  return (System_Nullable_int__o)SVar4;
}


// Utility.Util$$Abs
// il2cpp: UnityEngine_Vector3_o Utility_Util__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x1805854c0

UnityEngine_Vector3_o
Utility_Util__Abs(UnityEngine_Vector3_o v, MethodInfo* method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (v->fields).z;
  (__return_storage_ptr__->fields).x = ABS((v->fields).x);
  fVar2 = (v->fields).y;
  (__return_storage_ptr__->fields).z = ABS(fVar1);
  (__return_storage_ptr__->fields).y = ABS(fVar2);
  return __return_storage_ptr__;
}


// Utility.Util$$TransformBounds
// il2cpp: UnityEngine_Bounds_o Utility_Util__TransformBounds (UnityEngine_Bounds_o bounds, UnityEngine_Matrix4x4_o matrix, const MethodInfo* method);
// 0x182343920

UnityEngine_Bounds_o *
Utility_Util__TransformBounds
          (UnityEngine_Bounds_o *__return_storage_ptr__,UnityEngine_Bounds_o *bounds,
          UnityEngine_Matrix4x4_o *matrix,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  UnityEngine_Vector3_StaticFields *pUVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  if (Il2CppMethodInitialized_18434785a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434785a = '\x01';
  }
  if (Il2CppMethodInitialized_1843445b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843445b8 = '\x01';
  }
  pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar1 = (pUVar41->rightVector).fields.x;
  fVar2 = (pUVar41->rightVector).fields.y;
  fVar3 = (pUVar41->rightVector).fields.z;
  fVar4 = (matrix->fields).m00;
  fVar5 = (matrix->fields).m01;
  fVar6 = (matrix->fields).m02;
  fVar7 = (matrix->fields).m11;
  fVar8 = (matrix->fields).m21;
  fVar9 = (matrix->fields).m10;
  fVar10 = (matrix->fields).m20;
  fVar11 = (matrix->fields).m22;
  fVar12 = (matrix->fields).m12;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  fVar42 = (bounds->fields).m_Extents.fields.x;
  fVar42 = fVar42 + fVar42;
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  fVar43 = (bounds->fields).m_Extents.fields.y;
  fVar43 = fVar43 + fVar43;
  pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar13 = (pUVar41->upVector).fields.y;
  fVar14 = (pUVar41->upVector).fields.x;
  fVar15 = (matrix->fields).m01;
  fVar16 = (matrix->fields).m11;
  fVar17 = (matrix->fields).m21;
  fVar18 = (matrix->fields).m00;
  fVar19 = (pUVar41->upVector).fields.z;
  fVar20 = (matrix->fields).m02;
  fVar21 = (matrix->fields).m20;
  fVar22 = (matrix->fields).m10;
  fVar23 = (matrix->fields).m12;
  fVar24 = (matrix->fields).m22;
  if (Il2CppMethodInitialized_18433de5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5d = '\x01';
  }
  fVar25 = (bounds->fields).m_Center.fields.z;
  fVar26 = (bounds->fields).m_Center.fields.x;
  pUVar41 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar27 = (bounds->fields).m_Center.fields.y;
  fVar28 = (pUVar41->forwardVector).fields.x;
  fVar29 = (pUVar41->forwardVector).fields.y;
  fVar30 = (pUVar41->forwardVector).fields.z;
  fVar44 = (bounds->fields).m_Extents.fields.z;
  fVar44 = fVar44 + fVar44;
  fVar31 = (matrix->fields).m10;
  fVar32 = (matrix->fields).m20;
  fVar33 = (matrix->fields).m12;
  fVar34 = (matrix->fields).m22;
  (__return_storage_ptr__->fields).m_Center.fields.x =
       fVar27 * (matrix->fields).m01 + fVar26 * (matrix->fields).m00 + fVar25 * (matrix->fields).m02 +
       (matrix->fields).m03;
  fVar35 = (matrix->fields).m21;
  fVar36 = (matrix->fields).m00;
  fVar37 = (matrix->fields).m01;
  fVar38 = (matrix->fields).m20;
  fVar39 = (matrix->fields).m23;
  fVar40 = (matrix->fields).m10;
  (__return_storage_ptr__->fields).m_Center.fields.y =
       fVar27 * (matrix->fields).m11 + fVar26 * fVar31 + fVar25 * fVar33 + (matrix->fields).m13;
  fVar31 = (matrix->fields).m02;
  (__return_storage_ptr__->fields).m_Center.fields.z =
       fVar27 * fVar35 + fVar26 * fVar32 + fVar25 * fVar34 + fVar39;
  fVar25 = (matrix->fields).m22;
  fVar26 = (matrix->fields).m12;
  (__return_storage_ptr__->fields).m_Extents.fields.x =
       (ABS(fVar29 * fVar37 + fVar28 * fVar36 + fVar30 * fVar31) * fVar44 +
       ABS(fVar13 * fVar15 + fVar14 * fVar18 + fVar19 * fVar20) * fVar43 +
       ABS(fVar2 * fVar5 + fVar1 * fVar4 + fVar3 * fVar6) * fVar42) * 0.5;
  fVar4 = (matrix->fields).m21;
  (__return_storage_ptr__->fields).m_Extents.fields.y =
       (ABS(fVar29 * (matrix->fields).m11 + fVar28 * fVar40 + fVar30 * fVar26) * fVar44 +
       ABS(fVar13 * fVar16 + fVar14 * fVar22 + fVar19 * fVar23) * fVar43 +
       ABS(fVar2 * fVar7 + fVar1 * fVar9 + fVar3 * fVar12) * fVar42) * 0.5;
  (__return_storage_ptr__->fields).m_Extents.fields.z =
       (ABS(fVar29 * fVar4 + fVar28 * fVar38 + fVar30 * fVar25) * fVar44 +
       ABS(fVar13 * fVar17 + fVar14 * fVar21 + fVar19 * fVar24) * fVar43 +
       ABS(fVar2 * fVar8 + fVar1 * fVar10 + fVar3 * fVar11) * fVar42) * 0.5;
  return __return_storage_ptr__;
}


// Utility.Util$$EnumMax<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util__EnumMax___Il2CppFullySharedGenericType_ (const MethodInfo_869460* method);
// 0x180869460

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *
Utility_Util__EnumMax___Il2CppFullySharedGenericType_
          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *__return_storage_ptr__,
          MethodInfo_869460 *method)

{
  void *source;
  System_RuntimeTypeHandle_o handle;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo_869460_RGCTXs *pMVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  System_Type_o *enumType;
  System_Array_o *pSVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar8;
  ulonglong size;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [2];
  void *local_48;
  void *local_40;
  
  if (method->rgctx_data == (MethodInfo_869460_RGCTXs *)0x0) {
    auStack_80[0] = 0x180869487;
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  size = (ulonglong)(method->rgctx_data->_4_T->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x1808694b2;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_48 + lVar5);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x1808694d6;
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x1808694e0;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x1808694f8;
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x180869502;
  pSVar7 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pMVar1 = method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x180869513;
  local_48 = (void *)(*pIVar2)(pSVar7,pMVar1);
  pMVar3 = method->rgctx_data;
  local_40 = source;
  *(void **)((longlong)auStack_58 + lVar5) = source;
  pMVar1 = pMVar3->_3_System_Linq_Enumerable_Max_T_;
  pIVar2 = pMVar1->methodPointer;
  pIVar4 = pMVar1->invoker_method;
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x180869539;
  (*pIVar4)(pIVar2,pMVar1,(void *)0x0,&local_48,*(void **)((longlong)auStack_58 + lVar5));
  *(undefined8 *)((longlong)auStack_80 + lVar5) = 0x180869547;
  pUVar8 = memcpy(__return_storage_ptr__,source,size);
  return pUVar8;
}


// Utility.Util$$EnumMaxValue<Int32Enum>
// il2cpp: int32_t Utility_Util__EnumMaxValue_Int32Enum_ (const MethodInfo_8693C0* method);
// 0x1808693c0

int32_t
Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_8693C0* method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  if (method->rgctx_data == (MethodInfo_8693C0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    if (method->rgctx_data == (MethodInfo_8693C0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_6B7500 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$EnumMaxValue<__Il2CppFullySharedGenericType>
// il2cpp: int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_ (const MethodInfo_8693C0* method);
// 0x1808693c0

int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_(MethodInfo_8693C0 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  if (method->rgctx_data == (MethodInfo_8693C0_RGCTXs *)0x0) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Cast_int);
    if (method->rgctx_data == (MethodInfo_8693C0_RGCTXs *)0x0) {
      il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_Int32Enum_
                        (source,(MethodInfo_6B7500 *)MethodInfo_System_Linq_Enumerable_Cast_int);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$IsValidFileName
// il2cpp: bool Utility_Util__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x182342ac0

bool Utility_Util__IsValidFileName(System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Char_array *anyOf;
  Il2CppObject *source;
  System_Char_array *anyOf_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18434785b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F8267399B780
              );
    il2cpp_codegen_initialize_runtime_metadata(&"LPT3");
    il2cpp_codegen_initialize_runtime_metadata(&"NUL");
    il2cpp_codegen_initialize_runtime_metadata(&"COM2");
    il2cpp_codegen_initialize_runtime_metadata(&"AUX");
    il2cpp_codegen_initialize_runtime_metadata(&"CON");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT2");
    il2cpp_codegen_initialize_runtime_metadata(&"COM1");
    il2cpp_codegen_initialize_runtime_metadata(&"COM6");
    il2cpp_codegen_initialize_runtime_metadata(&"COM5");
    il2cpp_codegen_initialize_runtime_metadata(&"COM8");
    il2cpp_codegen_initialize_runtime_metadata(&"COM4");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT8");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT7");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT5");
    il2cpp_codegen_initialize_runtime_metadata(&"COM3");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT6");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT9");
    il2cpp_codegen_initialize_runtime_metadata(&"COM7");
    il2cpp_codegen_initialize_runtime_metadata(&"PRN");
    il2cpp_codegen_initialize_runtime_metadata(&"COM9");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT4");
    il2cpp_codegen_initialize_runtime_metadata(&"LPT1");
    Il2CppMethodInitialized_18434785b = '\x01';
  }
  anyOf = (System_Char_array *)SZArrayNew(TypeInfo_char_array,0x1a);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
            ((System_Array_o *)anyOf,
             FieldRva_PrivateImplementationDetails_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F8267399B780
             ,(MethodInfo *)0x0);
  source = SZArrayNew(TypeInfo_string_array,0x16);
  pSVar3 = "CON";
  if (source != (Il2CppObject *)0x0) {
    if (*(int *)&source[1].monitor != 0) {
      source[2].klass = (Il2CppClass *)"CON";
      Il2CppCodeGenWriteBarrier(&source[2].klass,pSVar3);
      pSVar3 = "PRN";
      if (1 < *(uint *)&source[1].monitor) {
        source[2].monitor = "PRN";
        Il2CppCodeGenWriteBarrier(&source[2].monitor,pSVar3);
        pSVar3 = "AUX";
        if (2 < *(uint *)&source[1].monitor) {
          source[3].klass = (Il2CppClass *)"AUX";
          Il2CppCodeGenWriteBarrier(&source[3].klass,pSVar3);
          pSVar3 = "NUL";
          if (3 < *(uint *)&source[1].monitor) {
            source[3].monitor = "NUL";
            Il2CppCodeGenWriteBarrier(&source[3].monitor,pSVar3);
            pSVar3 = "COM1";
            if (4 < *(uint *)&source[1].monitor) {
              source[4].klass = (Il2CppClass *)"COM1";
              Il2CppCodeGenWriteBarrier(&source[4].klass,pSVar3);
              pSVar3 = "COM2";
              if (5 < *(uint *)&source[1].monitor) {
                source[4].monitor = "COM2";
                Il2CppCodeGenWriteBarrier(&source[4].monitor,pSVar3);
                pSVar3 = "COM3";
                if (6 < *(uint *)&source[1].monitor) {
                  source[5].klass = (Il2CppClass *)"COM3";
                  Il2CppCodeGenWriteBarrier(&source[5].klass,pSVar3);
                  pSVar3 = "COM4";
                  if (7 < *(uint *)&source[1].monitor) {
                    source[5].monitor = "COM4";
                    Il2CppCodeGenWriteBarrier(&source[5].monitor,pSVar3);
                    pSVar3 = "COM5";
                    if (8 < *(uint *)&source[1].monitor) {
                      source[6].klass = (Il2CppClass *)"COM5";
                      Il2CppCodeGenWriteBarrier(&source[6].klass,pSVar3);
                      pSVar3 = "COM6";
                      if (9 < *(uint *)&source[1].monitor) {
                        source[6].monitor = "COM6";
                        Il2CppCodeGenWriteBarrier(&source[6].monitor,pSVar3);
                        pSVar3 = "COM7";
                        if (10 < *(uint *)&source[1].monitor) {
                          source[7].klass = (Il2CppClass *)"COM7";
                          Il2CppCodeGenWriteBarrier(&source[7].klass,pSVar3);
                          pSVar3 = "COM8";
                          if (0xb < *(uint *)&source[1].monitor) {
                            source[7].monitor = "COM8";
                            Il2CppCodeGenWriteBarrier(&source[7].monitor,pSVar3);
                            pSVar3 = "COM9";
                            if (0xc < *(uint *)&source[1].monitor) {
                              source[8].klass = (Il2CppClass *)"COM9";
                              Il2CppCodeGenWriteBarrier(&source[8].klass,pSVar3);
                              pSVar3 = "LPT1";
                              if (0xd < *(uint *)&source[1].monitor) {
                                source[8].monitor = "LPT1";
                                Il2CppCodeGenWriteBarrier(&source[8].monitor,pSVar3);
                                pSVar3 = "LPT2";
                                if (0xe < *(uint *)&source[1].monitor) {
                                  source[9].klass = (Il2CppClass *)"LPT2";
                                  Il2CppCodeGenWriteBarrier(&source[9].klass,pSVar3);
                                  pSVar3 = "LPT3";
                                  if (0xf < *(uint *)&source[1].monitor) {
                                    source[9].monitor = "LPT3";
                                    Il2CppCodeGenWriteBarrier(&source[9].monitor,pSVar3);
                                    pSVar3 = "LPT4";
                                    if (0x10 < *(uint *)&source[1].monitor) {
                                      source[10].klass = (Il2CppClass *)"LPT4";
                                      Il2CppCodeGenWriteBarrier(&source[10].klass,pSVar3);
                                      pSVar3 = "LPT5";
                                      if (0x11 < *(uint *)&source[1].monitor) {
                                        source[10].monitor = "LPT5";
                                        Il2CppCodeGenWriteBarrier(&source[10].monitor,pSVar3);
                                        pSVar3 = "LPT6";
                                        if (0x12 < *(uint *)&source[1].monitor) {
                                          source[0xb].klass = (Il2CppClass *)"LPT6";
                                          Il2CppCodeGenWriteBarrier(&source[0xb].klass,pSVar3);
                                          pSVar3 = "LPT7";
                                          if (0x13 < *(uint *)&source[1].monitor) {
                                            source[0xb].monitor = "LPT7";
                                            Il2CppCodeGenWriteBarrier(&source[0xb].monitor,pSVar3);
                                            pSVar3 = "LPT8";
                                            if (0x14 < *(uint *)&source[1].monitor) {
                                              source[0xc].klass = (Il2CppClass *)"LPT8";
                                              Il2CppCodeGenWriteBarrier(&source[0xc].klass,pSVar3);
                                              pSVar3 = "LPT9";
                                              if (0x15 < *(uint *)&source[1].monitor) {
                                                source[0xc].monitor = "LPT9";
                                                Il2CppCodeGenWriteBarrier(&source[0xc].monitor,pSVar3);
                                                if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor
                                                    == 0) {
                                                  il2cpp_codegen_runtime_class_init
                                                            ((Il2CppClass *)TypeInfo_System_IO_Path);
                                                }
                                                anyOf_00 = System_IO_Path__GetInvalidFileNameChars
                                                                     ((MethodInfo *)0x0);
                                                if (fileName != (System_String_o *)0x0) {
                                                  iVar2 = System_String__IndexOfAny
                                                                    (fileName,anyOf_00,(MethodInfo *)0x0);
                                                  if (iVar2 == -1) {
                                                    iVar2 = System_String__IndexOfAny
                                                                      (fileName,anyOf,(MethodInfo *)0x0);
                                                    if (iVar2 == -1) {
                                                      bVar1 = System_Linq_Enumerable__Contains_object_
                                                                        ((
                                                       System_Collections_Generic_IEnumerable_TSource__o *)
                                                       source,(Il2CppObject *)fileName,
                                                       (MethodInfo_6BA240 *)
                                                       MethodInfo_System_Linq_Enumerable_Contains_string);
                                                      if (!bVar1) {
                                                        pSVar3 = System_String__Trim(fileName,(MethodInfo *)
                                                                                              0x0);
                                                        bVar1 = System_String__op_Equality
                                                                          (pSVar3,fileName,(MethodInfo *)0x0);
                                                        if (bVar1) {
                                                          return (fileName->fields)._stringLength < 0x32;
                                                        }
                                                      }
                                                    }
                                                  }
                                                  return false;
                                                }
                                                goto label_182342fe3;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
label_182342fe3:
  ThrowNullReferenceException();
}


// Utility.Util$$GetPhotonTimestampDifference
// il2cpp: double Utility_Util__GetPhotonTimestampDifference (double sentTime, double serverTime, const MethodInfo* method);
// 0x182342530

double Utility_Util__GetPhotonTimestampDifference(double sentTime,double serverTime,MethodInfo *method)

{
  if (serverTime < sentTime) {
    return (4294967.295 - sentTime) + serverTime;
  }
  return serverTime - sentTime;
}


// Utility.Util$$ForceScalableParticleSystemMinMaxCurveMode
// il2cpp: bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode (UnityEngine_ParticleSystem_MinMaxCurve_o curve, UnityEngine_ParticleSystem_MinMaxCurve_o* newCurve, float scale, const MethodInfo* method);
// 0x182341a10

bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
               (UnityEngine_ParticleSystem_MinMaxCurve_o *curve,
               UnityEngine_ParticleSystem_MinMaxCurve_o *newCurve,float scale,MethodInfo *method)

{
  UnityEngine_AnimationCurve_o *pUVar1;
  float fVar2;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_AnimationCurve_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_48 [2];
  
  iVar4 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)curve,(MethodInfo *)0x0);
  if (iVar4 == 0) {
    fVar6 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)curve,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)curve,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_AnimationCurve__Linear(0.0,fVar6,1.0,fVar7,(MethodInfo *)0x0);
    local_48[0].m_Mode = 0;
    local_48[0].m_CurveMultiplier = 0.0;
    local_48[0].m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
    local_48[0].m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
    local_48[0].m_ConstantMin = 0.0;
    local_48[0].m_ConstantMax = 0.0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8c00
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_48,scale,pUVar5,(MethodInfo *)0x0);
    (newCurve->fields).m_Mode = local_48[0].m_Mode;
    (newCurve->fields).m_CurveMultiplier = local_48[0].m_CurveMultiplier;
    (newCurve->fields).m_CurveMin = local_48[0].m_CurveMin;
    (newCurve->fields).m_CurveMax = local_48[0].m_CurveMax;
    (newCurve->fields).m_ConstantMin = local_48[0].m_ConstantMin;
    (newCurve->fields).m_ConstantMax = local_48[0].m_ConstantMax;
    Il2CppCodeGenWriteBarrier(&(newCurve->fields).m_CurveMin,(void *)0x0);
    bVar3 = true;
  }
  else if (iVar4 == 3) {
    fVar6 = UnityEngine_TreePrototype__get_bendFactor
                      ((UnityEngine_TextCore_FaceInfo_o *)curve,(MethodInfo *)0x0);
    fVar7 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)curve,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_AnimationCurve__Linear(0.0,fVar6,1.0,fVar7,(MethodInfo *)0x0);
    local_48[0].m_Mode = 0;
    local_48[0].m_CurveMultiplier = 0.0;
    local_48[0].m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
    local_48[0].m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
    local_48[0].m_ConstantMin = 0.0;
    local_48[0].m_ConstantMax = 0.0;
    UnityEngine_ParticleSystem_MinMaxCurve___ctor_2fc8c00
              ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_48,scale,pUVar5,(MethodInfo *)0x0);
    (newCurve->fields).m_Mode = local_48[0].m_Mode;
    (newCurve->fields).m_CurveMultiplier = local_48[0].m_CurveMultiplier;
    (newCurve->fields).m_CurveMin = local_48[0].m_CurveMin;
    (newCurve->fields).m_CurveMax = local_48[0].m_CurveMax;
    (newCurve->fields).m_ConstantMin = local_48[0].m_ConstantMin;
    (newCurve->fields).m_ConstantMax = local_48[0].m_ConstantMax;
    Il2CppCodeGenWriteBarrier(&(newCurve->fields).m_CurveMin,(void *)0x0);
    bVar3 = true;
  }
  else {
    fVar6 = (curve->fields).m_CurveMultiplier;
    pUVar5 = (curve->fields).m_CurveMin;
    pUVar1 = (curve->fields).m_CurveMax;
    fVar7 = (curve->fields).m_ConstantMin;
    fVar2 = (curve->fields).m_ConstantMax;
    (newCurve->fields).m_Mode = (curve->fields).m_Mode;
    (newCurve->fields).m_CurveMultiplier = fVar6;
    (newCurve->fields).m_CurveMin = pUVar5;
    (newCurve->fields).m_CurveMax = pUVar1;
    (newCurve->fields).m_ConstantMin = fVar7;
    (newCurve->fields).m_ConstantMax = fVar2;
    Il2CppCodeGenWriteBarrier(&(newCurve->fields).m_CurveMin,(void *)0x0);
    bVar3 = false;
  }
  return bVar3;
}


// Utility.Util$$ScaleParticleStartSize
// il2cpp: void Utility_Util__ScaleParticleStartSize (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x182343600

void Utility_Util__ScaleParticleStartSize
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar2;
  UnityEngine_ParticleSystem_MainModule_o local_res8 [4];
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_78;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_58 [2];
  
  local_res8[0].fields.m_ParticleSystem = main.fields.m_ParticleSystem;
  if (Il2CppMethodInitialized_18434785c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434785c = '\x01';
  }
  local_78.m_Mode = 0;
  local_78.m_CurveMultiplier = 0.0;
  local_78.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
  local_78.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
  local_78.m_ConstantMin = 0.0;
  local_78.m_ConstantMax = 0.0;
  pUVar2 = UnityEngine_ParticleSystem_MainModule__get_startSize
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,local_res8,(MethodInfo *)0x0);
  local_58[0].m_Mode = (pUVar2->fields).m_Mode;
  local_58[0].m_CurveMultiplier = (pUVar2->fields).m_CurveMultiplier;
  local_58[0].m_CurveMin = (pUVar2->fields).m_CurveMin;
  local_58[0].m_CurveMax = (pUVar2->fields).m_CurveMax;
  local_58[0].m_ConstantMin = (pUVar2->fields).m_ConstantMin;
  local_58[0].m_ConstantMax = (pUVar2->fields).m_ConstantMax;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,
                     (UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_78,scale,(MethodInfo *)0x0);
  if (bVar1) {
    local_58[0].m_Mode = local_78.m_Mode;
    local_58[0].m_CurveMultiplier = local_78.m_CurveMultiplier;
    local_58[0].m_CurveMin = local_78.m_CurveMin;
    local_58[0].m_CurveMax = local_78.m_CurveMax;
    local_58[0].m_ConstantMin = local_78.m_ConstantMin;
    local_58[0].m_ConstantMax = local_78.m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSize
              (local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_ParticleSystem_MainModule__set_startSizeMultiplier(local_res8,scale,(MethodInfo *)0x0);
  }
  return;
}


// Utility.Util$$ScaleParticleStartSpeed
// il2cpp: void Utility_Util__ScaleParticleStartSpeed (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x1823436f0

void Utility_Util__ScaleParticleStartSpeed
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_ParticleSystem_MinMaxCurve_o *pUVar2;
  UnityEngine_ParticleSystem_MainModule_o local_res8 [4];
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_78;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_58 [2];
  
  local_res8[0].fields.m_ParticleSystem = main.fields.m_ParticleSystem;
  if (Il2CppMethodInitialized_18434785d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434785d = '\x01';
  }
  local_78.m_Mode = 0;
  local_78.m_CurveMultiplier = 0.0;
  local_78.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
  local_78.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
  local_78.m_ConstantMin = 0.0;
  local_78.m_ConstantMax = 0.0;
  pUVar2 = UnityEngine_ParticleSystem_MainModule__get_startSpeed
                     ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,local_res8,(MethodInfo *)0x0);
  local_58[0].m_Mode = (pUVar2->fields).m_Mode;
  local_58[0].m_CurveMultiplier = (pUVar2->fields).m_CurveMultiplier;
  local_58[0].m_CurveMin = (pUVar2->fields).m_CurveMin;
  local_58[0].m_CurveMax = (pUVar2->fields).m_CurveMax;
  local_58[0].m_ConstantMin = (pUVar2->fields).m_ConstantMin;
  local_58[0].m_ConstantMax = (pUVar2->fields).m_ConstantMax;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    ((UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,
                     (UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_78,scale,(MethodInfo *)0x0);
  if (bVar1) {
    local_58[0].m_Mode = local_78.m_Mode;
    local_58[0].m_CurveMultiplier = local_78.m_CurveMultiplier;
    local_58[0].m_CurveMin = local_78.m_CurveMin;
    local_58[0].m_CurveMax = local_78.m_CurveMax;
    local_58[0].m_ConstantMin = local_78.m_ConstantMin;
    local_58[0].m_ConstantMax = local_78.m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSpeed
              (local_res8,(UnityEngine_ParticleSystem_MinMaxCurve_o *)local_58,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_ParticleSystem_MainModule__set_startSpeedMultiplier(local_res8,scale,(MethodInfo *)0x0);
  }
  return;
}


// Utility.Util$$IsValidResourcePath
// il2cpp: bool Utility_Util__IsValidResourcePath (System_String_o* path, const MethodInfo* method);
// 0x182342ff0

bool Utility_Util__IsValidResourcePath(System_String_o *path,MethodInfo *method)

{
  System_String_o *fileName;
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434785e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434785e = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((path == (System_String_o *)0x0) ||
     (pSVar2 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0), pSVar2 == (System_String_array *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar3 = 0;
  while( true ) {
    if ((int)pSVar2->max_length <= (int)uVar3) {
      return true;
    }
    if ((uint)pSVar2->max_length <= uVar3) break;
    fileName = pSVar2->m_Items[(int)uVar3];
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    uVar3 = uVar3 + 1;
  }
  ThrowIndexOutOfRangeException();
}


// Utility.Util$$.cctor
// il2cpp: void Utility_Util___cctor (const MethodInfo* method);
// 0x182343d90

void Utility_Util___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_KeyValuePair_float__string__o *pSVar2;
  uint uVar3;
  System_Collections_Generic_KeyValuePair_float__string__array *pSVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_KeyValuePair_float__string___o *__this;
  System_Collections_Generic_KeyValuePair_float__object__Fields local_48;
  System_Collections_Generic_KeyValuePair_float__object__Fields local_38;
  System_Collections_Generic_KeyValuePair_float__object__Fields local_28;
  System_Collections_Generic_KeyValuePair_float__object__Fields local_18;
  
  if (Il2CppMethodInitialized_18434785f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_float_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"avgTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"maxTitan");
    il2cpp_codegen_initialize_runtime_metadata(&"smallTitan");
    Il2CppMethodInitialized_18434785f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KeyValuePair_float_string);
  System_Collections_Generic_List_KeyValuePair_float__object_____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_ctor);
  local_48.key = 0.0;
  local_48._4_4_ = 0;
  local_48.value = (Il2CppObject *)0x0;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            ((System_Collections_Generic_KeyValuePair_float__object__o *)&local_48,1.0,
             (Il2CppObject *)"smallTitan",
             (MethodInfo_180F470 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
  if (__this != (System_Collections_Generic_List_KeyValuePair_float__string___o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 == (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) goto label_18234402d;
    uVar3 = (__this->fields)._size;
    if (uVar3 < (uint)pSVar4->max_length) {
      (__this->fields)._size = uVar3 + 1;
      if ((uint)pSVar4->max_length <= uVar3) goto label_182344033;
      pSVar2 = pSVar4->m_Items + (int)uVar3;
      (pSVar2->fields).key = local_48.key;
      *(undefined4 *)&(pSVar2->fields).field_0x4 = local_48._4_4_;
      (pSVar2->fields).value = (System_String_o *)local_48.value;
      Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar3].fields.value,(void *)0x0);
    }
    else {
      local_18.key = local_48.key;
      local_18._4_4_ = local_48._4_4_;
      local_18.value = local_48.value;
      System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                ((System_Collections_Generic_List_StyleSelectorHelper_SelectorWorkItem__o *)__this,
                 (UnityEngine_UIElements_StyleSheets_StyleSelectorHelper_SelectorWorkItem_o *)&local_18,
                 (MethodInfo_93DF90 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    local_38.key = 0.0;
    local_38._4_4_ = 0;
    local_38.value = (Il2CppObject *)0x0;
    System_Collections_Generic_KeyValuePair_float__object____ctor
              ((System_Collections_Generic_KeyValuePair_float__object__o *)&local_38,2.0,
               (Il2CppObject *)"avgTitan",
               (MethodInfo_180F470 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 == (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) goto label_18234402d;
    uVar3 = (__this->fields)._size;
    if (uVar3 < (uint)pSVar4->max_length) {
      (__this->fields)._size = uVar3 + 1;
      if ((uint)pSVar4->max_length <= uVar3) goto label_182344033;
      pSVar2 = pSVar4->m_Items + (int)uVar3;
      (pSVar2->fields).key = local_38.key;
      *(undefined4 *)&(pSVar2->fields).field_0x4 = local_38._4_4_;
      (pSVar2->fields).value = (System_String_o *)local_38.value;
      Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar3].fields.value,(void *)0x0);
    }
    else {
      local_18.key = local_38.key;
      local_18._4_4_ = local_38._4_4_;
      local_18.value = local_38.value;
      System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                ((System_Collections_Generic_List_StyleSelectorHelper_SelectorWorkItem__o *)__this,
                 (UnityEngine_UIElements_StyleSheets_StyleSelectorHelper_SelectorWorkItem_o *)&local_18,
                 (MethodInfo_93DF90 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    local_28.key = 0.0;
    local_28._4_4_ = 0;
    local_28.value = (Il2CppObject *)0x0;
    System_Collections_Generic_KeyValuePair_float__object____ctor
              ((System_Collections_Generic_KeyValuePair_float__object__o *)&local_28,2.75,
               (Il2CppObject *)"maxTitan",
               (MethodInfo_180F470 *)MethodInfo_System_Collections_Generic_KeyValuePair_float_string_ctor);
    pMVar5 = MethodInfo_System_Collections_Generic_List_KeyValuePair_float_string_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_float__string__array *)0x0) {
      uVar3 = (__this->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (__this->fields)._size = uVar3 + 1;
        if ((uint)pSVar4->max_length <= uVar3) {
label_182344033:
          ThrowIndexOutOfRangeException();
        }
        pSVar2 = pSVar4->m_Items + (int)uVar3;
        (pSVar2->fields).key = local_28.key;
        *(undefined4 *)&(pSVar2->fields).field_0x4 = local_28._4_4_;
        (pSVar2->fields).value = (System_String_o *)local_28.value;
        Il2CppCodeGenWriteBarrier(&pSVar4->m_Items[(int)uVar3].fields.value,(void *)0x0);
      }
      else {
        local_18.key = local_28.key;
        local_18._4_4_ = local_28._4_4_;
        local_18.value = local_28.value;
        System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                  ((System_Collections_Generic_List_StyleSelectorHelper_SelectorWorkItem__o *)__this,
                   (UnityEngine_UIElements_StyleSheets_StyleSelectorHelper_SelectorWorkItem_o *)&local_18,
                   (MethodInfo_93DF90 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      TypeInfo_Utility_Util->static_fields->_agentSizes = __this;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_Util->static_fields->_agentSizes,__this);
      return;
    }
  }
label_18234402d:
  ThrowNullReferenceException();
}


