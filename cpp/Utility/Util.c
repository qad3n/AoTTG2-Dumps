// Type: Utility.Util
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/Util.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Util.cs  [CHANGED since prior version]
// --------------------------------

// Utility.Util.<>c$$.cctor
// il2cpp: void Utility_Util___c___cctor (const MethodInfo* method);
// 0x417ee30

void Utility_Util_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704b69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704b69 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.Util.<>c$$.ctor
// il2cpp: void Utility_Util___c___ctor (Utility_Util___c_o* __this, const MethodInfo* method);
// 0x417eea0

void Utility_Util_<>c___ctor(Utility_Util___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c$$<PascalToSentence>b__7_0
// il2cpp: System_String_o* Utility_Util___c___PascalToSentence_b__7_0 (Utility_Util___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x417eeb0

System_String_o *
Utility_Util_<>c__<PascalToSentence>b__7_0
          (Utility_Util___c_o *__this,System_Text_RegularExpressions_Match_o *m,MethodInfo *method)

{
  uint16_t c;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  uint16_t local_1c;
  uint16_t local_1a;
  
  if (DAT_05704b6a == '\0') {
    il2cpp_init_method_metadata(&"{0} {1}");
    DAT_05704b6a = '\x01';
  }
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                       ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      local_1a = System_String__get_Chars(pSVar1,0,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8);
      pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
      if (pSVar1 != (System_String_o *)0x0) {
        c = System_String__get_Chars(pSVar1,1,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        local_1c = System_Char__ToLower(c,(MethodInfo *)0x0);
        arg1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a8,&local_1c);
        pSVar1 = System_String__Format("{0} {1}",arg0,arg1,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util.<>c$$<RemoveNullOrDeadShifters>b__13_0
// il2cpp: bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0 (Utility_Util___c_o* __this, Characters_BaseShifter_o* e, const MethodInfo* method);
// 0x417efa0

bool_conflict
Utility_Util_<>c__<RemoveNullOrDeadShifters>b__13_0
          (Utility_Util___c_o *__this,Characters_BaseShifter_o *e,MethodInfo *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05704b6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704b6b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 != '\0') {
    if (e == (Characters_BaseShifter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)&(e->fields).FeedVictimName == '\0') {
      return 0;
    }
    bVar3 = CONCAT31(uVar1,*(char *)((long)&(e->fields)._previousCoreLocalPosition.fields.y + 2) ==
                           '\0');
  }
  return bVar3;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_0
// il2cpp: System_Nullable_int__o Utility_Util___c___GetAllTitanAgentIds_b__41_0 (Utility_Util___c_o* __this, System_Collections_Generic_KeyValuePair_float__string__o titanSize, const MethodInfo* method);
// 0x417f010

System_Nullable_int__o
Utility_Util_<>c__<GetAllTitanAgentIds>b__41_0
          (Utility_Util___c_o *__this,
          System_Collections_Generic_KeyValuePair_float__string__o titanSize,MethodInfo *method)

{
  int iVar1;
  System_Nullable_int__o SVar2;
  MethodInfo *name;
  MethodInfo *pMVar3;
  
  name = (MethodInfo *)titanSize.fields.value;
  pMVar3 = name;
  if (DAT_05704b6c == '\0') {
    il2cpp_init_method_metadata(titanSize.fields._0_8_,&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b6c = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
    return (System_Nullable_int__o)SVar2.fields;
  }
  il2cpp_init_class();
  SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
  return (System_Nullable_int__o)SVar2.fields;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_1
// il2cpp: bool Utility_Util___c___GetAllTitanAgentIds_b__41_1 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x417f080

bool_conflict
Utility_Util_<>c__<GetAllTitanAgentIds>b__41_1
          (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  undefined4 in_EAX;
  
  if (DAT_05704b6d == '\0') {
    in_EAX = il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05704b6d = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)agentId.fields.hasValue != '\0');
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_2
// il2cpp: int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x417f0b0

int32_t Utility_Util_<>c__<GetAllTitanAgentIds>b__41_2
                  (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  int32_t iVar1;
  System_Nullable_int__Fields SStack_8;
  
  SStack_8 = agentId.fields;
  if (DAT_05704b6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704b6e = '\x01';
  }
  iVar1 = System_Nullable<int>__get_Value((System_Nullable_int__o)&SStack_8,MethodInfo_Int32_get_Value);
  return iVar1;
}


// Utility.Util.<>c__10<object>$$.cctor
// il2cpp: void Utility_Util___c__10_object____cctor (const MethodInfo_2759D40* method);
// 0x2859d40

void Utility_Util_<>c__10<object>___cctor(MethodInfo_2759D40 *method)

{
  Utility_Util___c__10_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__10<object>$$.ctor
// il2cpp: void Utility_Util___c__10_object____ctor (Utility_Util___c__10_T__o* __this, const MethodInfo_2759E20* method);
// 0x2859e20

void Utility_Util_<>c__10<object>___ctor
               (Utility_Util___c__10_T__o *__this,MethodInfo_2759E20 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__10<object>$$<RemoveNull>b__10_0
// il2cpp: bool Utility_Util___c__10_object____RemoveNull_b__10_0 (Utility_Util___c__10_T__o* __this, Il2CppObject* e, const MethodInfo_2759E30* method);
// 0x2859e30

bool_conflict
Utility_Util_<>c__10<object>__<RemoveNull>b__10_0
          (Utility_Util___c__10_T__o *__this,Il2CppObject *e,MethodInfo_2759E30 *method)

{
  uint uVar1;
  
  if (DAT_056fe22b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe22b = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// Utility.Util.<>c__11<object>$$.cctor
// il2cpp: void Utility_Util___c__11_object____cctor (const MethodInfo_2759E80* method);
// 0x2859e80

void Utility_Util_<>c__11<object>___cctor(MethodInfo_2759E80 *method)

{
  Utility_Util___c__11_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__11<object>$$.ctor
// il2cpp: void Utility_Util___c__11_object____ctor (Utility_Util___c__11_T__o* __this, const MethodInfo_2759F60* method);
// 0x2859f60

void Utility_Util_<>c__11<object>___ctor
               (Utility_Util___c__11_T__o *__this,MethodInfo_2759F60 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__11<object>$$<RemoveNullOrDead>b__11_0
// il2cpp: bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0 (Utility_Util___c__11_T__o* __this, Il2CppObject* e, const MethodInfo_2759F70* method);
// 0x2859f70

bool_conflict
Utility_Util_<>c__11<object>__<RemoveNullOrDead>b__11_0
          (Utility_Util___c__11_T__o *__this,Il2CppObject *e,MethodInfo_2759F70 *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_056fe22c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_056fe22c = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 != '\0') {
    if (e == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar3 = CONCAT31(uVar1,*(char *)&e[6].monitor != '\0');
  }
  return bVar3;
}


// Utility.Util.<>c__12<object>$$.cctor
// il2cpp: void Utility_Util___c__12_object____cctor (const MethodInfo_2759FD0* method);
// 0x2859fd0

void Utility_Util_<>c__12<object>___cctor(MethodInfo_2759FD0 *method)

{
  Utility_Util___c__12_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__12<object>$$.ctor
// il2cpp: void Utility_Util___c__12_object____ctor (Utility_Util___c__12_T__o* __this, const MethodInfo_275A0B0* method);
// 0x285a0b0

void Utility_Util_<>c__12<object>___ctor
               (Utility_Util___c__12_T__o *__this,MethodInfo_275A0B0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__12<object>$$<RemoveNullOrDeadDetections>b__12_0
// il2cpp: bool Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0 (Utility_Util___c__12_T__o* __this, Il2CppObject* e, const MethodInfo_275A0C0* method);
// 0x285a0c0

bool_conflict
Utility_Util_<>c__12<object>__<RemoveNullOrDeadDetections>b__12_0
          (Utility_Util___c__12_T__o *__this,Il2CppObject *e,MethodInfo_275A0C0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  
  if (e != (Il2CppObject *)0x0) {
    vtable_dispatch = e->klass->vtable[4].methodPtr;
    bVar1 = (*vtable_dispatch)(e,e->klass->vtable[4].method,method,vtable_dispatch);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util.<>c__33<object, object>$$.cctor
// il2cpp: void Utility_Util___c__33_object__object____cctor (const MethodInfo_275B7B0* method);
// 0x285b7b0

void Utility_Util_<>c__33<object__object>___cctor(MethodInfo_275B7B0 *method)

{
  Utility_Util___c__33_TKey__TValue__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_glue_022c28b0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_275B8C0* method);
// 0x285b8c0

void Utility_Util_<>c__33<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___cctor
               (MethodInfo_275B8C0 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  Utility_Util___c__33_TKey__TValue__c *pUVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  Utility_Util___c__33_TKey__TValue__c *pUVar6;
  
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_0_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  uVar5 = il2cpp_runtime_glue(pIVar4);
  pUVar3 = method->klass;
  uVar1 = *(ushort *)&(pUVar3->_2).field_0x6d;
  pUVar6 = pUVar3;
  if ((uVar1 & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pUVar6 = method->klass;
  }
  pIVar2 = pUVar3->rgctx_data->_1_Utility_Util___c__33_TKey__TValue___ctor->methodPointer;
  if ((uVar1 & 1) == 0) {
    pUVar6 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0();
  }
  (*pIVar2)(uVar5,pUVar6->rgctx_data->_1_Utility_Util___c__33_TKey__TValue___ctor);
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  *(undefined8 *)pIVar4->static_fields = uVar5;
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_glue_022c28b0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  il2cpp_runtime_glue(pIVar4->static_fields,uVar5);
  return;
}


// Utility.Util.<>c__33<object, object>$$.ctor
// il2cpp: void Utility_Util___c__33_object__object____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_275B890* method);
// 0x285b890

void Utility_Util_<>c__33<object__object>___ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_275B890 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_275B9D0* method);
// 0x285b9d0

void Utility_Util_<>c__33<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_275B9D0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_0
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_275B8A0* method);
// 0x285b8a0

Il2CppObject *
Utility_Util_<>c__33<object__object>__<PaginateDictionary>b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_275B8A0 *method)

{
  return c.fields.key;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_0
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_275B9E0* method);
// 0x285b9e0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util_<>c__33<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__<PaginateDictionary>b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_275B9E0 *method)

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
  __n = (ulong)(pUVar1->_6_TKey->_2).actualSize;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_28 + lVar5);
  pMVar2 = pUVar1->_4_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_28 = __src;
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x285ba2c;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x285ba3a;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_1
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_275B8B0* method);
// 0x285b8b0

Il2CppObject *
Utility_Util_<>c__33<object__object>__<PaginateDictionary>b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_275B8B0 *method)

{
  return c.fields.value;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_1
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_275BA50* method);
// 0x285ba50

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util_<>c__33<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__<PaginateDictionary>b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_275BA50 *method)

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
  __n = (ulong)(pUVar1->_8_TValue->_2).actualSize;
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_28 + lVar5);
  pMVar2 = pUVar1->_7_System_Collections_Generic_KeyValuePair_TKey__TValue__get_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  local_28 = __src;
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x285ba9c;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x285baaa;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<WaitForFrames>d__17$$.ctor
// il2cpp: void Utility_Util__WaitForFrames_d__17___ctor (Utility_Util__WaitForFrames_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x417ce90

void Utility_Util_<WaitForFrames>d__17___ctor
               (Utility_Util__WaitForFrames_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<WaitForFrames>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x417f0f0

void Utility_Util_<WaitForFrames>d__17__System_IDisposable_Dispose
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<WaitForFrames>d__17$$MoveNext
// il2cpp: bool Utility_Util__WaitForFrames_d__17__MoveNext (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x417f100

bool_conflict
Utility_Util_<WaitForFrames>d__17__MoveNext
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  undefined8 uVar2;
  
  if (DAT_05704b6f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704b6f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
LAB_0417f163:
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_00;
      uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto LAB_0417f163;
  }
  return 0;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x417f1a0

Il2CppObject *
Utility_Util_<WaitForFrames>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x417f1b0

void Utility_Util_<WaitForFrames>d__17__System_Collections_IEnumerator_Reset
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x417f1f0

Il2CppObject *
Utility_Util_<WaitForFrames>d__17__System_Collections_IEnumerator_get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$.ctor
// il2cpp: void Utility_Util__YieldForFrames_d__18___ctor (Utility_Util__YieldForFrames_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x417cf10

void Utility_Util_<YieldForFrames>d__18___ctor
               (Utility_Util__YieldForFrames_d__18_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<YieldForFrames>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x417f200

void Utility_Util_<YieldForFrames>d__18__System_IDisposable_Dispose
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<YieldForFrames>d__18$$MoveNext
// il2cpp: bool Utility_Util__YieldForFrames_d__18__MoveNext (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x417f210

bool_conflict
Utility_Util_<YieldForFrames>d__18__MoveNext
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
LAB_0417f24e:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto LAB_0417f24e;
  }
  return 0;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x417f270

Il2CppObject *
Utility_Util_<YieldForFrames>d__18__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x417f280

void Utility_Util_<YieldForFrames>d__18__System_Collections_IEnumerator_Reset
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x417f2c0

Il2CppObject *
Utility_Util_<YieldForFrames>d__18__System_Collections_IEnumerator_get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util$$SignedAngle
// il2cpp: float Utility_Util__SignedAngle (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o axis, const MethodInfo* method);
// 0x417c070

float Utility_Util__SignedAngle
                (UnityEngine_Vector3_o from,UnityEngine_Vector3_o to,UnityEngine_Vector3_o axis,
                MethodInfo *method)

{
  double dVar1;
  MethodInfo *method_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_28;
  float fStack_24;
  
  fVar8 = to.fields.z;
  fVar6 = to.fields.x;
  fVar7 = to.fields.y;
  fVar5 = from.fields.z;
  fVar2 = from.fields.x;
  fVar4 = from.fields.y;
  if (DAT_0570266a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_0570266a = '\x01';
  }
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (fVar3 * fVar9 < 0.0) {
    fVar3 = sqrtf(fVar3 * fVar9);
    method_00 = TypeInfo_Math;
  }
  else {
    fVar3 = SQRT(fVar3 * fVar9);
    method_00 = TypeInfo_Math;
  }
  fVar9 = 0.0;
  TypeInfo_Math = method_00;
  if (1e-15 <= fVar3) {
    fVar3 = (fVar5 * fVar8 + fVar4 * fVar7 + fVar2 * fVar6) / fVar3;
    fVar9 = 1.0;
    if (fVar3 <= 1.0) {
      fVar9 = fVar3;
    }
    if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    dVar1 = acos((double)(float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 |
                                (uint)fVar9 & -(uint)(-1.0 <= fVar3)),method_00);
    fVar9 = (float)dVar1 * 57.29578;
  }
  local_28 = axis.fields.x;
  fStack_24 = axis.fields.y;
  return fVar9 * *(float *)(&DAT_00cd0ef0 +
                           (ulong)(0.0 <= local_28 * (fVar8 * fVar4 - fVar5 * fVar7) +
                                          fStack_24 * (fVar6 * fVar5 - fVar2 * fVar8) +
                                          axis.fields.z * (fVar7 * fVar2 - fVar6 * fVar4)) * 4);
}


// Utility.Util$$IsVectorBetween
// il2cpp: bool Utility_Util__IsVectorBetween (UnityEngine_Vector3_o v, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, const MethodInfo* method);
// 0x417c2c0

bool_conflict
Utility_Util__IsVectorBetween
          (UnityEngine_Vector3_o v,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,
          MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = v.fields.z;
  fVar4 = v.fields.x;
  if (((fVar4 < start.fields.x) || (uVar1 = 1, end.fields.x < fVar4)) &&
     (uVar1 = 0, end.fields.x <= fVar4)) {
    uVar1 = (uint)(fVar4 <= start.fields.x);
  }
  fVar4 = v.fields.y;
  if (((fVar4 < start.fields.y) || (uVar2 = 1, end.fields.y < fVar4)) &&
     (uVar2 = 0, end.fields.y <= fVar4)) {
    uVar2 = (uint)(fVar4 <= start.fields.y);
  }
  if (((fVar5 < start.fields.z) || (uVar3 = 1, end.fields.z < fVar5)) &&
     (uVar3 = 0, end.fields.z <= fVar5)) {
    uVar3 = (uint)(fVar5 <= start.fields.z);
  }
  return uVar1 & uVar2 & uVar3;
}


// Utility.Util$$LinearMap
// il2cpp: float Utility_Util__LinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x417c330

float Utility_Util__LinearMap
                (float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  return ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
}


// Utility.Util$$ClampedLinearMap
// il2cpp: float Utility_Util__ClampedLinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x417c350

float Utility_Util__ClampedLinearMap
                (float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = ((outMax - outMin) * (x - inMin)) / (inMax - inMin) + outMin;
  if (fVar1 <= outMax) {
    outMax = fVar1;
  }
  return (float)(~-(uint)(outMin <= fVar1) & (uint)outMin | (uint)outMax & -(uint)(outMin <= fVar1))
  ;
}


// Utility.Util$$FindCharacterByViewId
// il2cpp: Characters_BaseCharacter_o* Utility_Util__FindCharacterByViewId (int32_t viewId, const MethodInfo* method);
// 0x417c390

Characters_BaseCharacter_o * Utility_Util__FindCharacterByViewId(int32_t viewId,MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar2;
  
  if (DAT_05704b51 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704b51 = '\x01';
  }
  if (-1 < viewId) {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (x != (Photon_Pun_PhotonView_o *)0x0) {
        pCVar2 = (Characters_BaseCharacter_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)x,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        return pCVar2;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Utility.Util$$FindPlayerById
// il2cpp: Photon_Realtime_Player_o* Utility_Util__FindPlayerById (int32_t id, const MethodInfo* method);
// 0x417c420

Photon_Realtime_Player_o * Utility_Util__FindPlayerById(int32_t id,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Player_array *pPVar3;
  long lVar4;
  
  if (DAT_05704b52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05704b52 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  if (pPVar3 != (Photon_Realtime_Player_array *)0x0) {
    lVar4 = 0;
    while( true ) {
      if ((int)pPVar3->max_length <= (int)lVar4) {
        return (Photon_Realtime_Player_o *)0x0;
      }
      pPVar2 = pPVar3->m_Items[lVar4];
      if (pPVar2 == (Photon_Realtime_Player_o *)0x0) break;
      lVar4 = lVar4 + 1;
      if ((pPVar2->fields).actorNumber == id) {
        return pPVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$CreateLocalPhotonInfo
// il2cpp: Photon_Pun_PhotonMessageInfo_o Utility_Util__CreateLocalPhotonInfo (const MethodInfo* method);
// 0x417c4c0

Photon_Pun_PhotonMessageInfo_o *
Utility_Util__CreateLocalPhotonInfo
          (Photon_Pun_PhotonMessageInfo_o *__return_storage_ptr__,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_o __this;
  undefined8 unaff_RBX;
  undefined1 in_stack_00000000 [16];
  
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).Sender = (Photon_Realtime_Player_o *)0x0;
  (__return_storage_ptr__->fields).photonView = (Photon_Pun_PhotonView_o *)0x0;
  __this.fields._8_16_ = in_stack_00000000;
  __this.fields._0_8_ = unaff_RBX;
  Photon_Pun_PhotonMessageInfo___ctor
            (__this,(Photon_Realtime_Player_o *)__return_storage_ptr__,0,
             (Photon_Pun_PhotonView_o *)0x0,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Utility.Util$$PascalToSentence
// il2cpp: System_String_o* Utility_Util__PascalToSentence (System_String_o* str, const MethodInfo* method);
// 0x417c4f0

System_String_o * Utility_Util__PascalToSentence(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  
  if (DAT_05704b53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MatchEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&MethodInfo_String__PascalToSentence_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"[a-z][A-Z]");
    DAT_05704b53 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = "[a-z][A-Z]";
  evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)
               (*(long *)(TypeInfo_c + 0xb8) + 8);
  if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_glue(TypeInfo_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar2 + 8) = evaluator;
    il2cpp_runtime_glue(lVar2 + 8,evaluator);
    iVar1 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Text_RegularExpressions_Regex__Replace(str,pSVar3,evaluator,(MethodInfo *)0x0);
  return pSVar3;
}


// Utility.Util$$CreateDontDestroyObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateDontDestroyObj_object_ (const MethodInfo_260BBB0* method);
// 0x270bbb0

Il2CppObject * Utility_Util__CreateDontDestroyObj<object>(MethodInfo_260BBB0 *method)

{
  UnityEngine_Object_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_260BBB0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Dont Destroy");
    if (method->rgctx_data == (MethodInfo_260BBB0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,"Dont Destroy",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pIVar1 = UnityEngine_GameObject__AddComponent<object>
                       ((UnityEngine_GameObject_o *)__this,
                        (MethodInfo_24F0EB0 *)
                        method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$CreateObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateObj_object_ (const MethodInfo_260BC70* method);
// 0x270bc70

Il2CppObject * Utility_Util__CreateObj<object>(MethodInfo_260BC70 *method)

{
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar1;
  
  if (method->rgctx_data == (MethodInfo_260BC70_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    if (method->rgctx_data == (MethodInfo_260BC70_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent<object>
                       (__this,(MethodInfo_24F0EB0 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$RemoveNull<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNull_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_260E490* method);
// 0x270e490

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNull<object>
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_260E490 *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  long lVar3;
  MethodInfo_260E490_RGCTXs *pMVar4;
  
  if (method->rgctx_data == (MethodInfo_260E490_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e4b4;
LAB_0270e526:
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e4bd;
LAB_0270e537:
    il2cpp_init_class();
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e4ce;
LAB_0270e54d:
    lVar3 = il2cpp_glue_022c28b0(pIVar2);
    match = *(System_Predicate_T__o **)(*(long *)(lVar3 + 0xb8) + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e526;
LAB_0270e4b4:
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270e537;
LAB_0270e4bd:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e54d;
LAB_0270e4ce:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0270e639;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e58b;
LAB_0270e659:
    il2cpp_init_class();
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  else {
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270e659;
LAB_0270e58b:
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    il2cpp_glue_022c28b0(pIVar2);
    pMVar4 = method->rgctx_data;
  }
  pIVar2 = pMVar4->_2_System_Predicate_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(pIVar2);
  System_Predicate<object>___ctor();
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue((long)pIVar2->static_fields + 8,match);
joined_r0x0270e639:
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_335EF80 *)
               method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
    return set;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$RemoveNullOrDead<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDead_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_260E680* method);
// 0x270e680

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDead<object>
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_260E680 *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  long lVar3;
  MethodInfo_260E680_RGCTXs *pMVar4;
  
  if (method->rgctx_data == (MethodInfo_260E680_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e6a4;
LAB_0270e716:
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e6ad;
LAB_0270e727:
    il2cpp_init_class();
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e6be;
LAB_0270e73d:
    lVar3 = il2cpp_glue_022c28b0(pIVar2);
    match = *(System_Predicate_T__o **)(*(long *)(lVar3 + 0xb8) + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e716;
LAB_0270e6a4:
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270e727;
LAB_0270e6ad:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e73d;
LAB_0270e6be:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0270e829;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e77b;
LAB_0270e849:
    il2cpp_init_class();
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  else {
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270e849;
LAB_0270e77b:
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    il2cpp_glue_022c28b0(pIVar2);
    pMVar4 = method->rgctx_data;
  }
  pIVar2 = pMVar4->_2_System_Predicate_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(pIVar2);
  System_Predicate<object>___ctor();
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue((long)pIVar2->static_fields + 8,match);
joined_r0x0270e829:
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_335EF80 *)
               method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
    return set;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$RemoveNullOrDeadDetections<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDeadDetections_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_260E870* method);
// 0x270e870

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDeadDetections<object>
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_260E870 *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_Predicate_T__o *match;
  long lVar3;
  MethodInfo_260E870_RGCTXs *pMVar4;
  
  if (method->rgctx_data == (MethodInfo_260E870_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e894;
LAB_0270e906:
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e89d;
LAB_0270e917:
    il2cpp_init_class();
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).field_0x6d & 1) != 0) goto LAB_0270e8ae;
LAB_0270e92d:
    lVar3 = il2cpp_glue_022c28b0(pIVar2);
    match = *(System_Predicate_T__o **)(*(long *)(lVar3 + 0xb8) + 8);
  }
  else {
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e906;
LAB_0270e894:
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270e917;
LAB_0270e89d:
    pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    if (((pIVar2->_2).field_0x6d & 1) == 0) goto LAB_0270e92d;
LAB_0270e8ae:
    match = *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) goto joined_r0x0270ea19;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    lVar3 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar3 + 0xe4) != 0) goto LAB_0270e96b;
LAB_0270ea39:
    il2cpp_init_class();
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  else {
    if (*(int *)&(pIVar2->_2).field_0x1c == 0) goto LAB_0270ea39;
LAB_0270e96b:
    pMVar4 = method->rgctx_data;
    pIVar2 = pMVar4->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar2->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    il2cpp_glue_022c28b0(pIVar2);
    pMVar4 = method->rgctx_data;
  }
  pIVar2 = pMVar4->_2_System_Predicate_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  match = (System_Predicate_T__o *)il2cpp_runtime_glue(pIVar2);
  System_Predicate<object>___ctor();
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  *(System_Predicate_T__o **)((long)pIVar2->static_fields + 8) = match;
  pIVar2 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  il2cpp_runtime_glue((long)pIVar2->static_fields + 8,match);
joined_r0x0270ea19:
  if (set != (System_Collections_Generic_HashSet_T__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_335EF80 *)
               method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere);
    return set;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$RemoveNullOrDeadShifters
// il2cpp: System_Collections_Generic_HashSet_BaseShifter__o* Utility_Util__RemoveNullOrDeadShifters (System_Collections_Generic_HashSet_BaseShifter__o* set, const MethodInfo* method);
// 0x417c630

System_Collections_Generic_HashSet_BaseShifter__o *
Utility_Util__RemoveNullOrDeadShifters
          (System_Collections_Generic_HashSet_BaseShifter__o *set,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Predicate_T__o *match;
  
  if (DAT_05704b54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_RemoveWhere);
    il2cpp_init_method_metadata(&TypeInfo_Predicate_BaseShifter);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RemoveNullOrDeadShifters_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704b54 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    match = *(System_Predicate_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_glue(TypeInfo_Predicate_BaseShifter);
    System_Predicate<object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Predicate_T__o **)(lVar2 + 0x10) = match;
    il2cpp_runtime_glue(lVar2 + 0x10,match);
  }
  if (set != (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) {
    System_Collections_Generic_HashSet<object>__RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,MethodInfo_Int32_RemoveWhere);
    return set;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$CreateMD5
// il2cpp: System_String_o* Utility_Util__CreateMD5 (System_String_o* input, const MethodInfo* method);
// 0x417c780

/* WARNING: Removing unreachable block (ram,0x0417c9a7) */

System_String_o * Utility_Util__CreateMD5(System_String_o *input,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_Security_Cryptography_MD5_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool_conflict bVar5;
  int iVar6;
  System_Security_Cryptography_MD5_o *__this;
  System_Text_Encoding_o *pSVar7;
  System_Byte_array *pSVar8;
  System_Text_StringBuilder_o *__this_00;
  ulong uVar9;
  System_String_o *pSVar10;
  VirtualInvokeData *pVVar11;
  ulong uVar12;
  long lVar13;
  
  if (DAT_05704b55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"X2");
    DAT_05704b55 = '\x01';
  }
  bVar5 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  __this = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  pSVar7 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar7 == (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = (System_Byte_array *)
           (*(pSVar7->klass->vtable)._18_GetBytes.methodPtr)
                     (pSVar7,input,(pSVar7->klass->vtable)._18_GetBytes.method);
  if (__this == (System_Security_Cryptography_MD5_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar8 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                     ((System_Security_Cryptography_HashAlgorithm_o *)__this,pSVar8,
                      (MethodInfo *)0x0);
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (pSVar8 == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = (int)pSVar8->max_length;
  if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
    if (0 < iVar6) {
      System_Byte__ToString((char)pSVar8 + ' ',"X2",(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    if (0 < iVar6) {
      uVar9 = pSVar8->max_length & 0xffffffff;
      uVar12 = 0;
      do {
        if (uVar9 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar10 = System_Byte__ToString
                            ((char)uVar12 + (char)pSVar8 + ' ',"X2",(MethodInfo *)0x0);
        System_Text_StringBuilder__Append(__this_00,pSVar10,(MethodInfo *)0x0);
        uVar12 = uVar12 + 1;
        uVar2 = (uint)pSVar8->max_length;
        uVar9 = (ulong)uVar2;
      } while ((long)uVar12 < (long)(int)uVar2);
    }
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if (__this == (System_Security_Cryptography_MD5_o *)0x0) {
        return pSVar10;
      }
      pSVar3 = __this->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IDisposable) {
            pVVar11 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar13);
            goto LAB_0417c94d;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_glue(__this,TypeInfo_IDisposable,0);
LAB_0417c94d:
      (*pVVar11->methodPtr)(__this,pVVar11->method);
      return pSVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$CreateSalt
// il2cpp: System_String_o* Utility_Util__CreateSalt (const MethodInfo* method);
// 0x417cb00

/* WARNING: Removing unreachable block (ram,0x0417cc1d) */

System_String_o * Utility_Util__CreateSalt(MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_RandomNumberGenerator_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Byte_array *inArray;
  System_Security_Cryptography_RandomNumberGenerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  long lVar7;
  
  if (DAT_05704b56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    DAT_05704b56 = '\x01';
  }
  inArray = (System_Byte_array *)il2cpp_glue_02274930(TypeInfo_byte,0x10);
  pSVar4 = System_Security_Cryptography_RandomNumberGenerator__Create((MethodInfo *)0x0);
  if (pSVar4 == (System_Security_Cryptography_RandomNumberGenerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar4->klass->vtable)._6_unknown.methodPtr)
            (pSVar4,inArray,(pSVar4->klass->vtable)._6_unknown.method);
  pSVar2 = pSVar4->klass;
  uVar1._0_1_ = (pSVar2->_2).rank;
  uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar3 = (pSVar2->_1).interfaceOffsets;
    lVar7 = 0;
    do {
      if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_IDisposable) {
        pVVar5 = &(pSVar2->vtable)._0_Equals + *(int *)((long)&pIVar3->offset + lVar7);
        goto LAB_0417cbdd;
      }
      lVar7 = lVar7 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar7);
  }
  pVVar5 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IDisposable,0);
LAB_0417cbdd:
  (*pVVar5->methodPtr)(pSVar4);
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
  return pSVar6;
}


// Utility.Util$$CreatePBKDF2
// il2cpp: System_String_o* Utility_Util__CreatePBKDF2 (System_String_o* input, System_String_o* salt, const MethodInfo* method);
// 0x417ccf0

System_String_o *
Utility_Util__CreatePBKDF2(System_String_o *input,System_String_o *salt,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Byte_array *pSVar2;
  System_Security_Cryptography_HashAlgorithmName_o hashAlgorithm;
  System_Security_Cryptography_Rfc2898DeriveBytes_o *__this;
  System_String_o *pSVar3;
  
  if (DAT_05704b57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Convert);
    il2cpp_init_method_metadata(&TypeInfo_Rfc2898DeriveBytes);
    il2cpp_init_method_metadata(&"-");
    DAT_05704b57 = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Convert__FromBase64String(salt,(MethodInfo *)0x0);
  hashAlgorithm = System_Security_Cryptography_HashAlgorithmName__get_SHA256((MethodInfo *)0x0);
  __this = (System_Security_Cryptography_Rfc2898DeriveBytes_o *)il2cpp_runtime_glue(TypeInfo_Rfc2898DeriveBytes);
  System_Security_Cryptography_Rfc2898DeriveBytes___ctor
            (__this,input,pSVar2,200000,hashAlgorithm,(MethodInfo *)0x0);
  if (__this != (System_Security_Cryptography_Rfc2898DeriveBytes_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(__this->klass->vtable)._5_GetBytes.methodPtr)
                       (__this,0x10,(__this->klass->vtable)._5_GetBytes.method);
    pSVar3 = System_BitConverter__ToString(pSVar2,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace
                         (pSVar3,"-",
                          (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                          (MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$WaitForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__WaitForFrames (int32_t frames, const MethodInfo* method);
// 0x417ce30

System_Collections_IEnumerator_o * Utility_Util__WaitForFrames(int32_t frames,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704b58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForFrames_d__17);
    DAT_05704b58 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForFrames_d__17);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[2].klass = frames;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$YieldForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__YieldForFrames (int32_t frames, const MethodInfo* method);
// 0x417ceb0

System_Collections_IEnumerator_o * Utility_Util__YieldForFrames(int32_t frames,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704b59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_YieldForFrames_d__18);
    DAT_05704b59 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_YieldForFrames_d__18);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[2].klass = frames;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$EnumToStringArray<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray_Int32Enum_ (const MethodInfo_260C740* method);
// 0x270c740

System_String_array * Utility_Util__EnumToStringArray<Int32Enum>(MethodInfo_260C740 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_260C740_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_260C740_RGCTXs *)0x0) {
    il2cpp_glue_022c2910();
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArray<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_ (const MethodInfo_260C7B0* method);
// 0x270c7b0

System_String_array *
Utility_Util__EnumToStringArray<__Il2CppFullySharedGenericType>(MethodInfo_260C7B0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_260C7B0_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_260C7B0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910();
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArrayExceptNone<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone_Int32Enum_ (const MethodInfo_260C820* method);
// 0x270c820

System_String_array *
Utility_Util__EnumToStringArrayExceptNone<Int32Enum>(MethodInfo_260C820 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  Il2CppRGCTXData handle;
  System_String_o *a;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this;
  Il2CppRGCTXData *pIVar7;
  System_Type_o *enumType;
  System_String_array *pSVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (method->rgctx_data == (MethodInfo_260C820_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_260C820_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar3 = method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_;
  pIVar7 = (pMVar3->field7_0x38).rgctx_data;
  if (pIVar7 == (Il2CppRGCTXData *)0x0) {
    il2cpp_glue_022c2910(pMVar3);
    pIVar7 = (pMVar3->field7_0x38).rgctx_data;
  }
  handle = *pIVar7;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  if (pSVar8 != (System_String_array *)0x0) {
    uVar10 = pSVar8->max_length;
    uVar9 = uVar10 & 0xffffffff;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar10) {
        uVar10 = 0;
        do {
          if (uVar9 <= uVar10) goto LAB_0270ca60;
          bVar6 = System_String__op_Inequality
                            (pSVar8->m_Items[uVar10],"None",(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') goto LAB_0270ca65;
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar8->max_length;
          uVar9 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
    }
    else if (0 < (int)uVar10) {
      uVar9 = 0;
      if ((uVar10 & 0xffffffff) != 0) {
        do {
          a = pSVar8->m_Items[uVar9];
          bVar6 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          if ((char)bVar6 != '\0') {
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_0270ca65;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)a;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,a);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)a,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar8->max_length;
          if ((long)(int)uVar2 <= (long)uVar9) goto LAB_0270ca3b;
        } while (uVar9 < uVar2);
      }
LAB_0270ca60:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0270ca3b:
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
      return pSVar8;
    }
  }
LAB_0270ca65:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_ (const MethodInfo_260CA70* method);
// 0x270ca70

System_String_array *
Utility_Util__EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>
          (MethodInfo_260CA70 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *a;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this;
  long lVar6;
  System_String_array *pSVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (method->rgctx_data == (MethodInfo_260CA70_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"None");
    if (method->rgctx_data == (MethodInfo_260CA70_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar6 = (*method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_->methodPointer)();
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(lVar6 + 0x18);
    uVar8 = uVar9 & 0xffffffff;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (int)uVar9) {
        uVar9 = 0;
        do {
          if (uVar8 <= uVar9) goto LAB_0270cc50;
          bVar5 = System_String__op_Inequality
                            (*(System_String_o **)(lVar6 + 0x20 + uVar9 * 8),"None",
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto LAB_0270cc55;
          uVar9 = uVar9 + 1;
          uVar8 = (ulong)*(uint *)(lVar6 + 0x18);
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
    }
    else if (0 < (int)uVar9) {
      uVar8 = 0;
      if ((uVar9 & 0xffffffff) != 0) {
        do {
          a = *(System_String_o **)(lVar6 + 0x20 + uVar8 * 8);
          bVar5 = System_String__op_Inequality(a,"None",(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          if ((char)bVar5 != '\0') {
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto LAB_0270cc55;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)a;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,a);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)a,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
          uVar8 = uVar8 + 1;
          if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar8) goto LAB_0270cc2b;
        } while (uVar8 < *(uint *)(lVar6 + 0x18));
      }
LAB_0270cc50:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_0270cc2b:
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
      return pSVar7;
    }
  }
LAB_0270cc55:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$EnumToList<Int32Enum>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList_Int32Enum_ (const MethodInfo_260C620* method);
// 0x270c620

System_Collections_Generic_List_T__o *
Utility_Util__EnumToList<Int32Enum>(MethodInfo_260C620 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_260C620_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_260C620_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast<Int32Enum>
                        (source,(MethodInfo_24C2540 *)
                                method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_);
  pSVar2 = System_Linq_Enumerable__ToList<Int32Enum>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_24E1E20 *)method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_)
  ;
  return (System_Collections_Generic_List_T__o *)pSVar2;
}


// Utility.Util$$EnumToList<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList___Il2CppFullySharedGenericType_ (const MethodInfo_260C6B0* method);
// 0x270c6b0

System_Collections_Generic_List_T__o *
Utility_Util__EnumToList<__Il2CppFullySharedGenericType>(MethodInfo_260C6B0 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo_260C6B0_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Array_o *pSVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  undefined1 auVar5 [16];
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_260C6B0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar2 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  auVar5 = (*method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_->methodPointer)(pSVar3);
  pMVar1 = method->rgctx_data->_3_System_Linq_Enumerable_ToList_T_;
  vtable_dispatch = pMVar1->methodPointer;
  pSVar4 = (System_Collections_Generic_List_T__o *)
           (*vtable_dispatch)(auVar5._0_8_,pMVar1,auVar5._8_8_,vtable_dispatch);
  return pSVar4;
}


// Utility.Util$$EnumToDict<Int32Enum>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict_Int32Enum_ (const MethodInfo_260BF10* method);
// 0x270bf10

/* WARNING: Removing unreachable block (ram,0x0270c0ab) */

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict<Int32Enum>(MethodInfo_260BF10 *method)

{
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  int32_t value;
  bool_conflict bVar1;
  MethodInfo_260BF10_RGCTXs *pMVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_Dictionary_string__T__o *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  System_String_o *key;
  undefined8 in_stack_ffffffffffffff98;
  Il2CppClass *in_stack_ffffffffffffffa0;
  Il2CppObject *in_stack_ffffffffffffffa8;
  uint local_50;
  Il2CppMethodPointer local_48;
  Il2CppMethodPointer pIStack_40;
  int32_t local_38;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_260BF10_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_260BF10_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar2 = method->rgctx_data;
    }
  }
  local_48 = (Il2CppMethodPointer)0x0;
  pIStack_40 = (Il2CppMethodPointer)0x0;
  _local_38 = (InvokerMethod)0x0;
  pIVar3 = pMVar2->_0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_02 = (System_Collections_Generic_Dictionary_string__T__o *)il2cpp_runtime_glue(pIVar3);
  System_Collections_Generic_Dictionary<object__Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_30881D0 *)
             method->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_03 = Utility_Util__EnumToList<Int32Enum>
                        ((MethodInfo_260C620 *)method->rgctx_data->_2_Utility_Util_EnumToList_T_);
  if (__this_03 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<Int32Enum>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_03,
             (MethodInfo_357CD30 *)
             method->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator);
  _local_38 = (InvokerMethod)(ulong)local_50;
  if (__this_02 == (System_Collections_Generic_Dictionary_string__T__o *)0x0) {
    __this_00.fields._8_8_ = in_stack_ffffffffffffffa0;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
    __this_00.fields._current = in_stack_ffffffffffffffa8;
    bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                      (__this_00,(MethodInfo_3181D50 *)&stack0xffffffffffffffb8);
    if ((char)bVar1 != '\0') {
      pIVar3 = method->rgctx_data->_8_T;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        il2cpp_glue_022c28b0(pIVar3);
      }
      System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffa0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this.fields._8_8_ = in_stack_ffffffffffffffa0,
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98,
          __this.fields._current = in_stack_ffffffffffffffa8,
          bVar1 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                            (__this,(MethodInfo_3181D50 *)&stack0xffffffffffffffb8),
          (char)bVar1 != '\0') {
      value = local_38;
      in_stack_ffffffffffffffa0 = method->rgctx_data->_8_T;
      if (((in_stack_ffffffffffffffa0->_2).field_0x6d & 1) == 0) {
        in_stack_ffffffffffffffa0 = (Il2CppClass *)il2cpp_glue_022c28b0(in_stack_ffffffffffffffa0);
      }
      in_stack_ffffffffffffffa8 = (Il2CppObject *)0xffffffffffffffff;
      key = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffa0,(MethodInfo *)0x0);
      System_Collections_Generic_Dictionary<object__Int32Enum>__Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                 (Il2CppObject *)key,value,
                 (MethodInfo_3088E20 *)
                 method->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext);
    }
  }
  __this_01.fields._8_8_ = in_stack_ffffffffffffffa0;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
  __this_01.fields._current = in_stack_ffffffffffffffa8;
  System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
            (__this_01,(MethodInfo_3181D40 *)&stack0xffffffffffffffb8);
  return __this_02;
}


// Utility.Util$$EnumToDict<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict___Il2CppFullySharedGenericType_ (const MethodInfo_260C1B0* method);
// 0x270c1b0

/* WARNING: Removing unreachable block (ram,0x0270c4bd) */

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict<__Il2CppFullySharedGenericType>(MethodInfo_260C1B0 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  MethodInfo_260C1B0 *pMVar7;
  char cVar8;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  void *pvVar12;
  MethodInfo_260C1B0_RGCTXs *pMVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  MethodInfo_260C1B0 *pMVar17;
  void *pvVar18;
  undefined8 *puVar19;
  void *pvVar20;
  void *pvVar21;
  void *__src;
  undefined8 uStack_90;
  long alStack_88 [2];
  undefined8 *local_78;
  long local_70;
  void *local_68;
  undefined8 *local_60;
  ulong local_58;
  void *local_50;
  MethodInfo_260C1B0_RGCTXs *local_48;
  void *local_40;
  MethodInfo_260C1B0 *local_38;
  
  local_48 = method->rgctx_data;
  if (local_48 == (MethodInfo_260C1B0_RGCTXs *)0x0) {
    uStack_90 = 0x270c1d9;
    il2cpp_init_method_metadata(&TypeInfo_Util);
    local_48 = method->rgctx_data;
    if (local_48 == (MethodInfo_260C1B0_RGCTXs *)0x0) {
      uStack_90 = 0x270c1ea;
      il2cpp_glue_022c2910(method);
      local_48 = method->rgctx_data;
    }
  }
  pIVar10 = local_48->_8_T;
  uVar14 = (local_48->_5_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  local_40 = (void *)(ulong)uVar14;
  local_58 = (ulong)(pIVar10->_2).actualSize;
  if (((local_48->_5_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_90 = 0x270c21a;
    lVar9 = il2cpp_glue_022c28b0();
    uVar14 = *(uint *)(lVar9 + 0xfc);
    local_48 = method->rgctx_data;
    pIVar10 = local_48->_8_T;
  }
  lVar9 = -((ulong)(uVar14 + 0x10) + 0xf & 0xfffffffffffffff0);
  lVar15 = (long)alStack_88 + lVar9;
  local_70 = lVar15;
  local_38 = method;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar9 + -8) = 0x270c255;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar10);
    local_48 = method->rgctx_data;
  }
  pvVar18 = local_40;
  uVar6 = local_58;
  alStack_88[1] = lVar15 - ((ulong)((pIVar10->_2).actualSize + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar16 = local_58 + 0xf & 0xfffffffffffffff0;
  __src = (void *)(alStack_88[1] - uVar16);
  local_78 = (undefined8 *)((long)__src - uVar16);
  uVar11 = (long)local_40 + 0xfU & 0xfffffffffffffff0;
  pvVar20 = (void *)((long)local_78 - uVar11);
  pvVar21 = (void *)((long)pvVar20 - uVar11);
  *(undefined8 *)((long)pvVar21 + -8) = 0x270c2cb;
  memset(pvVar21,0,(size_t)pvVar18);
  pvVar18 = (void *)((long)pvVar21 - uVar16);
  local_50 = pvVar18;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c2e2;
  memset(pvVar18,0,uVar6);
  pIVar10 = local_48->_0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar18 + -8) = 0x270c2f7;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pMVar17 = local_38;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c303;
  local_48 = (MethodInfo_260C1B0_RGCTXs *)il2cpp_runtime_glue(pIVar10);
  pIVar1 = pMVar17->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor->
           methodPointer;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c314;
  (*pIVar1)();
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    *(undefined8 *)((long)pvVar18 + -8) = 0x270c32c;
    il2cpp_init_class();
  }
  pIVar1 = pMVar17->rgctx_data->_2_Utility_Util_EnumToList_T_->methodPointer;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c336;
  pvVar12 = (void *)(*pIVar1)();
  if (pvVar12 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)pvVar18 + -8) = 0x270c4bd;
    il2cpp_raise_exception();
  }
  pMVar2 = pMVar17->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator;
  pIVar1 = pMVar2->methodPointer;
  pIVar3 = pMVar2->invoker_method;
  local_68 = pvVar20;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c35b;
  (*pIVar3)(pIVar1,pMVar2,pvVar12,&local_68,pvVar20);
  pvVar12 = local_40;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c36a;
  memcpy(pvVar21,pvVar20,(size_t)pvVar12);
  puVar5 = local_78;
  local_40 = pvVar21;
  if (local_48 == (MethodInfo_260C1B0_RGCTXs *)0x0) {
    pcVar4 = ((pMVar17->rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)->_1).
             image;
    *(undefined8 *)((long)pvVar18 + -8) = 0x270c466;
    cVar8 = (*pcVar4)(pvVar21);
    if (cVar8 != '\0') {
      pMVar2 = pMVar17->rgctx_data->_6_System_Collections_Generic_List_Enumerator_T__get_Current;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_68 = __src;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c4e1;
      (*pIVar3)(pIVar1,pMVar2,pvVar21,&local_68,__src);
      pvVar21 = local_50;
      uVar6 = local_58;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c4f1;
      memcpy(pvVar21,__src,uVar6);
      pMVar13 = local_38->rgctx_data;
      pIVar10 = pMVar13->_8_T;
      if (((pIVar10->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar18 + -8) = 0x270c50b;
        pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
        pMVar13 = local_38->rgctx_data;
      }
      pvVar21 = local_50;
      lVar9 = alStack_88[1];
      pMVar2 = pMVar13->_10_System_Collections_Generic_Dictionary_string__T__Add;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c52e;
      il2cpp_glue_022754b0(pIVar10,pMVar2,lVar9,pvVar21,0,&local_68);
      pvVar21 = local_50;
      uVar6 = local_58;
      puVar5 = local_78;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c53f;
      memcpy(puVar5,pvVar21,uVar6);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((long)pvVar18 + -8) = &UNK_0270c544;
      il2cpp_raise_exception();
    }
  }
  else {
    while( true ) {
      pcVar4 = ((pMVar17->rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)->_1).
               image;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c3b7;
      cVar8 = (*pcVar4)(pvVar21);
      if (cVar8 == '\0') break;
      pMVar2 = pMVar17->rgctx_data->_6_System_Collections_Generic_List_Enumerator_T__get_Current;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_68 = __src;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c3da;
      (*pIVar3)(pIVar1,pMVar2,pvVar21,&local_68,__src);
      pvVar21 = local_50;
      uVar6 = local_58;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c3ea;
      memcpy(pvVar21,__src,uVar6);
      pMVar13 = pMVar17->rgctx_data;
      pIVar10 = pMVar13->_8_T;
      if (((pIVar10->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar18 + -8) = 0x270c403;
        pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar10);
        pMVar13 = pMVar17->rgctx_data;
      }
      pvVar21 = local_50;
      lVar9 = alStack_88[1];
      pMVar2 = pMVar13->_10_System_Collections_Generic_Dictionary_string__T__Add;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c421;
      il2cpp_glue_022754b0(pIVar10,pMVar2,lVar9,pvVar21,0,&local_68);
      pvVar21 = local_50;
      uVar6 = local_58;
      pvVar20 = local_68;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c435;
      memcpy(puVar5,pvVar21,uVar6);
      pMVar7 = local_38;
      pvVar21 = local_40;
      pMVar13 = local_48;
      pMVar2 = pMVar17->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext;
      pIVar1 = pMVar2->methodPointer;
      puVar19 = puVar5;
      if (-1 < (int)(pMVar17->rgctx_data->_8_T->_1).byval_arg.bits) {
        puVar19 = (undefined8 *)*puVar5;
      }
      pIVar3 = pMVar2->invoker_method;
      local_68 = pvVar20;
      local_60 = puVar19;
      *(undefined8 *)((long)pvVar18 + -8) = 0x270c3aa;
      (*pIVar3)(pIVar1,pMVar2,pMVar13,&local_68,puVar19);
      pMVar17 = pMVar7;
    }
  }
  pMVar13 = pMVar17->rgctx_data;
  pIVar10 = pMVar13->_5_System_Collections_Generic_List_Enumerator_T_;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar18 + -8) = 0x270c483;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
    pMVar13 = pMVar17->rgctx_data;
  }
  lVar9 = local_70;
  pMVar2 = pMVar13[1]._1_System_Collections_Generic_Dictionary_string__T___ctor;
  *(undefined8 *)((long)pvVar18 + -8) = 0x270c4a0;
  il2cpp_glue_022754b0(pIVar10,pMVar2,lVar9,pvVar21,0,0);
  return (System_Collections_Generic_Dictionary_string__T__o *)local_48;
}


// Utility.Util$$FormatFloat
// il2cpp: System_String_o* Utility_Util__FormatFloat (float num, int32_t decimalPlaces, const MethodInfo* method);
// 0x417cf30

System_String_o * Utility_Util__FormatFloat(float num,int32_t decimalPlaces,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  float extraout_XMM0_Da;
  float local_c;
  
  local_c = num;
  if (DAT_05704b5a == '\0') {
    il2cpp_init_method_metadata(&"0.");
    num = (float)il2cpp_init_method_metadata();
    DAT_05704b5a = '\x01';
  }
  method_00 = "0";
  if (decimalPlaces != 0) {
    pSVar1 = System_String__CreateString
                       ((System_String_o *)0x0,0x30,decimalPlaces,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Concat("0.",pSVar1,(MethodInfo *)0x0);
    num = extraout_XMM0_Da;
  }
  pSVar1 = System_Single__ToString(num,(System_String_o *)&local_c,method_00);
  return pSVar1;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__MultiplyVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x417cfb0

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
// 0x417cfc0

UnityEngine_Vector2_o
Utility_Util__MultiplyVectors(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.y = a.fields.y * b.fields.y;
  UVar1.fields.x = a.fields.x * b.fields.x;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__DivideVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x417cfd0

UnityEngine_Vector3_o
Utility_Util__DivideVectors(UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined8 in_XMM2_Qb;
  UnityEngine_Vector3_o UVar3;
  undefined1 auVar2 [16];
  
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
// 0x417cfe0

UnityEngine_Vector2_o
Utility_Util__DivideVectors(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = a.fields;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = b.fields;
  auVar1 = divps(auVar2,auVar1);
  return (UnityEngine_Vector2_o)auVar1._0_8_;
}


// Utility.Util$$GroupItems<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems_object_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_260D4E0* method);
// 0x270d4e0

/* WARNING: Removing unreachable block (ram,0x0270d794) */

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems<object>
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_260D4E0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_T__array *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  bool_conflict bVar6;
  MethodInfo_260D4E0_RGCTXs *pMVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_List_T___o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int iVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Il2CppType *pIVar11;
  Il2CppObject *item;
  Il2CppObject *pIVar12;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  pMVar7 = method->rgctx_data;
  if (pMVar7 == (MethodInfo_260D4E0_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar7 = method->rgctx_data;
  }
  pIVar8 = pMVar7->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_01 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_glue(pIVar8);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_35A69E0 *)
             method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if ((items->fields)._size == 0) {
      return __this_01;
    }
    pIVar8 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    if (((pIVar8->_2).field_0x6d & 1) == 0) {
      pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0();
    }
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar8);
    System_Collections_Generic_List<object>___ctor
              (__this_02,
               (MethodInfo_35A69E0 *)method->rgctx_data->_4_System_Collections_Generic_List_T___ctor
              );
    if (__this_01 != (System_Collections_Generic_List_List_T___o *)0x0) {
      pMVar3 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 != (System_Collections_Generic_List_T__array *)0x0) {
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (System_Collections_Generic_List_T__o *)__this_02;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_02);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,
                     (Il2CppObject *)__this_02,
                     (MethodInfo_35A7350 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)items,
                   (MethodInfo_35A7FE0 *)
                   method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator);
        iVar9 = 0;
        pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar11 = (Il2CppType *)local_48._8_8_;
        item = local_38;
        while( true ) {
          __this.fields._8_8_ = pIVar11;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
          __this.fields._current = item;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') {
            __this_00.fields._8_8_ = pIVar11;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar10;
            __this_00.fields._current = item;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
            return __this_01;
          }
          iVar9 = iVar9 + 1;
          pIVar12 = item;
          if (groupSize + 1 <= iVar9) {
            pIVar8 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
            if (((pIVar8->_2).field_0x6d & 1) == 0) {
              pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar8);
            }
            __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar8);
            System_Collections_Generic_List<object>___ctor
                      (__this_02,
                       (MethodInfo_35A69E0 *)
                       method->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
            pMVar3 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_01->fields)._items;
            if (pSVar4 == (System_Collections_Generic_List_T__array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (System_Collections_Generic_List_T__o *)__this_02;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_02);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,
                         (Il2CppObject *)__this_02,
                         (MethodInfo_35A7350 *)pMVar3->klass->rgctx_data[0xe].method);
            }
            iVar9 = 1;
          }
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar3 = method->rgctx_data->_11_System_Collections_Generic_List_T__Add;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_02->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) break;
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
            item = pIVar12;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_02,item,(MethodInfo_35A7350 *)pMVar3->klass->rgctx_data[0xe].method);
            item = pIVar12;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GroupItems<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_260D830* method);
// 0x270d830

/* WARNING: Removing unreachable block (ram,0x0270db43) */

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems<__Il2CppFullySharedGenericType>
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_260D830 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  ulong __n;
  System_Collections_Generic_List_T__o *pSVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_List_T___o *pSVar13;
  undefined8 *puVar14;
  MethodInfo_260D830_RGCTXs *pMVar15;
  ulong uVar16;
  void *pvVar17;
  undefined8 *puVar18;
  undefined8 *__src;
  ulong uVar19;
  undefined8 uStack_90;
  ulong auStack_88 [2];
  undefined8 *local_78;
  void *local_70;
  ulong local_68;
  System_Collections_Generic_List_List_T___o *local_60;
  System_Collections_Generic_List_T__o *local_58;
  long local_50;
  int32_t local_44;
  void *local_40;
  undefined8 *local_38;
  
  pMVar15 = method->rgctx_data;
  local_44 = groupSize;
  if (pMVar15 == (MethodInfo_260D830_RGCTXs *)0x0) {
    uStack_90 = 0x270d85b;
    il2cpp_glue_022c2910(method);
    pMVar15 = method->rgctx_data;
  }
  uVar8 = (pMVar15->_7_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  uVar16 = (ulong)uVar8;
  local_68 = (ulong)(pMVar15->_10_T->_2).actualSize;
  local_58 = items;
  if (((pMVar15->_7_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_90 = 0x270d88c;
    lVar10 = il2cpp_glue_022c28b0();
    uVar8 = *(uint *)(lVar10 + 0xfc);
    pMVar15 = method->rgctx_data;
  }
  __n = local_68;
  local_50 = (long)auStack_88 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar19 = local_68 + 0xf & 0xfffffffffffffff0;
  __src = (undefined8 *)(local_50 - uVar19);
  uVar11 = uVar16 + 0xf & 0xfffffffffffffff0;
  local_78 = (undefined8 *)((long)__src - uVar11);
  pvVar17 = (void *)((long)local_78 - uVar11);
  auStack_88[1] = uVar16;
  local_40 = pvVar17;
  *(undefined8 *)((long)pvVar17 + -8) = 0x270d8f7;
  memset(pvVar17,0,uVar16);
  pvVar17 = (void *)((long)pvVar17 - uVar19);
  local_70 = pvVar17;
  *(undefined8 *)((long)pvVar17 + -8) = 0x270d90e;
  memset(pvVar17,0,__n);
  pIVar12 = pMVar15->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar12->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar17 + -8) = 0x270d91f;
    pIVar12 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pSVar6 = local_58;
  *(undefined8 *)((long)pvVar17 + -8) = 0x270d92b;
  pSVar13 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_glue(pIVar12);
  pIVar1 = method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor->methodPointer;
  *(undefined8 *)((long)pvVar17 + -8) = 0x270d93b;
  (*pIVar1)(pSVar13);
  if (pSVar6 != (System_Collections_Generic_List_T__o *)0x0) {
    pIVar1 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)pvVar17 + -8) = 0x270d951;
    iVar9 = (*pIVar1)(pSVar6);
    if (iVar9 != 0) {
      pIVar12 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar12->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar17 + -8) = 0x270d96f;
        pIVar12 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      *(undefined8 *)((long)pvVar17 + -8) = 0x270d977;
      puVar14 = (undefined8 *)il2cpp_runtime_glue(pIVar12);
      pIVar1 = method->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
      *(undefined8 *)((long)pvVar17 + -8) = 0x270d987;
      (*pIVar1)(puVar14);
      if (pSVar13 == (System_Collections_Generic_List_List_T___o *)0x0) goto LAB_0270db3e;
      pMVar2 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      local_60 = pSVar13;
      local_38 = puVar14;
      *(undefined8 *)((long)pvVar17 + -8) = 0x270d9b3;
      (*pIVar3)(pIVar1,pMVar2,pSVar13,&local_38,puVar14);
      pSVar6 = local_58;
      puVar18 = local_78;
      pMVar2 = method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
      pIVar1 = pMVar2->methodPointer;
      local_38 = local_78;
      pIVar3 = pMVar2->invoker_method;
      *(undefined8 *)((long)pvVar17 + -8) = 0x270d9d3;
      (*pIVar3)(pIVar1,pMVar2,pSVar6,&local_38,puVar18);
      pvVar5 = local_40;
      uVar16 = auStack_88[1];
      *(undefined8 *)((long)pvVar17 + -8) = 0x270d9e3;
      memcpy(pvVar5,puVar18,uVar16);
      local_44 = local_44 + 1;
      iVar9 = 0;
      while( true ) {
        pvVar5 = local_40;
        pIVar1 = method->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T__MoveNext->
                 methodPointer;
        *(undefined8 *)((long)pvVar17 + -8) = 0x270da0c;
        cVar7 = (*pIVar1)(pvVar5);
        pvVar5 = local_40;
        pSVar13 = local_60;
        if (cVar7 == '\0') break;
        pMVar2 = method->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar1 = pMVar2->methodPointer;
        pIVar3 = pMVar2->invoker_method;
        local_38 = __src;
        *(undefined8 *)((long)pvVar17 + -8) = 0x270da31;
        (*pIVar3)(pIVar1,pMVar2,pvVar5,&local_38,__src);
        uVar16 = local_68;
        pvVar5 = local_70;
        *(undefined8 *)((long)pvVar17 + -8) = 0x270da41;
        memcpy(pvVar5,__src,uVar16);
        pSVar13 = local_60;
        iVar9 = iVar9 + 1;
        if (local_44 <= iVar9) {
          pIVar12 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
          if (((pIVar12->_2).field_0x6d & 1) == 0) {
            *(undefined8 *)((long)pvVar17 + -8) = 0x270da68;
            pIVar12 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar12);
          }
          *(undefined8 *)((long)pvVar17 + -8) = 0x270da7c;
          puVar14 = (undefined8 *)il2cpp_runtime_glue(pIVar12);
          pIVar1 = method->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
          *(undefined8 *)((long)pvVar17 + -8) = 0x270da8c;
          (*pIVar1)(puVar14);
          pMVar2 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
          pIVar1 = pMVar2->methodPointer;
          pIVar3 = pMVar2->invoker_method;
          local_38 = puVar14;
          *(undefined8 *)((long)pvVar17 + -8) = 0x270daa8;
          (*pIVar3)(pIVar1,pMVar2,pSVar13,&local_38,puVar14);
          iVar9 = 1;
        }
        uVar16 = local_68;
        pvVar5 = local_70;
        *(undefined8 *)((long)pvVar17 + -8) = 0x270dabe;
        memcpy(__src,pvVar5,uVar16);
        if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((long)pvVar17 + -8) = 0x270db3e;
          il2cpp_raise_exception();
        }
        pMVar2 = method->rgctx_data->_11_System_Collections_Generic_List_T__Add;
        pIVar1 = pMVar2->methodPointer;
        puVar18 = __src;
        if (-1 < (int)(method->rgctx_data->_10_T->_1).byval_arg.bits) {
          puVar18 = (undefined8 *)*__src;
        }
        pIVar3 = pMVar2->invoker_method;
        local_38 = puVar18;
        *(undefined8 *)((long)pvVar17 + -8) = 0x270d9fe;
        (*pIVar3)(pIVar1,pMVar2,puVar14,&local_38,puVar18);
      }
      pMVar15 = method->rgctx_data;
      pIVar12 = pMVar15->_7_System_Collections_Generic_List_Enumerator_T_;
      if (((pIVar12->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar17 + -8) = 0x270db04;
        pIVar12 = (Il2CppClass *)il2cpp_glue_022c28b0();
        pMVar15 = method->rgctx_data;
      }
      pvVar5 = local_40;
      lVar10 = local_50;
      pIVar4 = pMVar15[1]._0_System_Collections_Generic_List_List_T__;
      *(undefined8 *)((long)pvVar17 + -8) = 0x270db22;
      il2cpp_glue_022754b0(pIVar12,pIVar4,lVar10,pvVar5,0,0);
    }
    return pSVar13;
  }
LAB_0270db3e:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)pvVar17 + -8) = 0x270db43;
  il2cpp_raise_exception();
}


// Utility.Util$$GroupBuckets<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets_object_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_260CC60* method);
// 0x270cc60

/* WARNING: Removing unreachable block (ram,0x0270cf43) */

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets<object>
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_260CC60 *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_T__array *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar7;
  MethodInfo_260CC60_RGCTXs *pMVar8;
  Il2CppClass *pIVar9;
  System_Collections_Generic_List_List_T___o *__this_02;
  System_Collections_Generic_List_object__o *pSVar10;
  int iVar11;
  int index;
  undefined8 in_stack_ffffffffffffff88;
  MethodInfo_260CC60 *pMVar12;
  System_Collections_Generic_List_Enumerator_T__c *pSVar13;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  pMVar8 = method->rgctx_data;
  if (pMVar8 == (MethodInfo_260CC60_RGCTXs *)0x0) {
    il2cpp_glue_022c2910(method);
    pMVar8 = method->rgctx_data;
  }
  pIVar9 = pMVar8->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar9->_2).field_0x6d & 1) == 0) {
    pIVar9 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_02 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_glue(pIVar9);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_35A69E0 *)
             method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  pMVar12 = method;
  if (0 < buckets) {
    if (__this_02 == (System_Collections_Generic_List_List_T___o *)0x0) {
      pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
      if (((pIVar9->_2).field_0x6d & 1) == 0) {
        pIVar9 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar9);
      System_Collections_Generic_List<object>___ctor
                (pSVar10,(MethodInfo_35A69E0 *)
                         method->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    bVar2 = (pIVar9->_2).field_0x6d;
    iVar11 = buckets;
    while( true ) {
      if ((bVar2 & 1) == 0) {
        pIVar9 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(pIVar9);
      System_Collections_Generic_List<object>___ctor
                (pSVar10,(MethodInfo_35A69E0 *)
                         method->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
      pMVar4 = method->rgctx_data->_4_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_02->fields)._items;
      if (pSVar5 == (System_Collections_Generic_List_T__array *)0x0) goto LAB_0270cefc;
      uVar3 = (__this_02->fields)._size;
      if (uVar3 < (uint)pSVar5->max_length) {
        (__this_02->fields)._size = uVar3 + 1;
        pSVar5->m_Items[(int)uVar3] = (System_Collections_Generic_List_T__o *)pSVar10;
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,pSVar10);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar10,
                   (MethodInfo_35A7350 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if (iVar11 == 1) break;
      iVar11 = iVar11 + -1;
      pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
      bVar2 = (pIVar9->_2).field_0x6d;
    }
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if ((buckets != 0) && (iVar11 = (items->fields)._size, iVar11 != 0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)items,
                 (MethodInfo_35A7FE0 *)
                 method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator);
      if (__this_02 == (System_Collections_Generic_List_List_T___o *)0x0) {
        __this_00.fields._8_8_ = pMVar12;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_00.fields._current = (Il2CppObject *)local_48.fields._list;
        bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar7 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        index = 0;
        pSVar13 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while (__this.fields._8_8_ = pMVar12,
              __this.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this.fields._current = (Il2CppObject *)pSVar13,
              bVar7 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar13,
              (char)bVar7 != '\0') {
          pSVar10 = (System_Collections_Generic_List_object__o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_02,index,
                               (MethodInfo_35A7000 *)
                               method->rgctx_data->
                               _11_System_Collections_Generic_List_List_T___get_Item);
          if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar4 = pMVar12->rgctx_data->_12_System_Collections_Generic_List_T__Add;
          piVar1 = &(pSVar10->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar10->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar3 = (pSVar10->fields)._size;
          if (uVar3 < (uint)pSVar6->max_length) {
            (pSVar10->fields)._size = uVar3 + 1;
            pSVar6->m_Items[(int)uVar3] = local_48.fields._current;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar3,local_48.fields._current);
            method = pMVar12;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar10,local_48.fields._current,
                       (MethodInfo_35A7350 *)pMVar4->klass->rgctx_data[0xe].method);
            method = pMVar12;
          }
          index = index + (uint)(index < buckets + -1 && iVar11 / buckets <= (pSVar10->fields)._size
                                );
          pMVar12 = method;
        }
      }
      __this_01.fields._8_8_ = pMVar12;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_01.fields._current = (Il2CppObject *)local_48.fields._list;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    }
    return __this_02;
  }
LAB_0270cefc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GroupBuckets<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_260CFE0* method);
// 0x270cfe0

/* WARNING: Removing unreachable block (ram,0x0270d3b4) */
/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets<__Il2CppFullySharedGenericType>
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_260CFE0 *method)

{
  byte bVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo *pMVar3;
  InvokerMethod pIVar4;
  Il2CppClass *pIVar5;
  void *pvVar6;
  System_Collections_Generic_List_List_T___o *pSVar7;
  System_Collections_Generic_List_T__o *pSVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  Il2CppClass *pIVar14;
  undefined8 *puVar15;
  MethodInfo_260CFE0_RGCTXs *pMVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong uVar19;
  void *pvVar20;
  ulong __n;
  void *pvVar21;
  MethodInfo_260CFE0_RGCTXs **ppMVar22;
  int iVar23;
  undefined8 uStack_b0;
  void *apvStack_a8 [4];
  ulong local_88;
  void *local_80;
  long local_78;
  undefined4 local_70;
  int local_6c;
  undefined8 *local_68;
  ulong local_60;
  void *local_58;
  System_Collections_Generic_List_List_T___o *local_50;
  System_Collections_Generic_List_T__o *local_48;
  MethodInfo_260CFE0_RGCTXs **local_40;
  undefined8 *local_38;
  
  pMVar16 = method->rgctx_data;
  local_48 = items;
  if (pMVar16 == (MethodInfo_260CFE0_RGCTXs *)0x0) {
    uStack_b0 = 0x270d00c;
    il2cpp_glue_022c2910(method);
    pMVar16 = method->rgctx_data;
  }
  ppMVar22 = &method->rgctx_data;
  uVar10 = (pMVar16->_7_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  uVar18 = (ulong)uVar10;
  __n = (ulong)(pMVar16->_10_T->_2).actualSize;
  if (((pMVar16->_7_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_b0 = 0x270d03a;
    lVar12 = il2cpp_glue_022c28b0();
    uVar10 = *(uint *)(lVar12 + 0xfc);
    pMVar16 = *ppMVar22;
  }
  local_78 = (long)apvStack_a8 - ((ulong)(uVar10 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar19 = __n + 0xf & 0xfffffffffffffff0;
  local_68 = (undefined8 *)(local_78 - uVar19);
  apvStack_a8[2] = (void *)((long)local_68 - uVar19);
  uVar13 = uVar18 + 0xf & 0xfffffffffffffff0;
  apvStack_a8[3] = (void *)((long)apvStack_a8[2] - uVar13);
  pvVar20 = (void *)((long)apvStack_a8[3] - uVar13);
  local_60 = uVar18;
  local_58 = pvVar20;
  *(undefined8 *)((long)pvVar20 + -8) = 0x270d0b7;
  memset(pvVar20,0,uVar18);
  pvVar20 = (void *)((long)pvVar20 - uVar19);
  *(undefined8 *)((long)pvVar20 + -8) = 0x270d0d0;
  memset(pvVar20,0,__n);
  pIVar14 = pMVar16->_0_System_Collections_Generic_List_List_T__;
  local_88 = __n;
  if (((pIVar14->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar20 + -8) = 0x270d0e5;
    pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  *(undefined8 *)((long)pvVar20 + -8) = 0x270d0ed;
  local_50 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_glue(pIVar14);
  pIVar2 = (*ppMVar22)->_1_System_Collections_Generic_List_List_T____ctor->methodPointer;
  *(undefined8 *)((long)pvVar20 + -8) = 0x270d0fd;
  (*pIVar2)();
  local_80 = pvVar20;
  local_40 = ppMVar22;
  if (0 < buckets) {
    if (local_50 == (System_Collections_Generic_List_List_T___o *)0x0) {
      pIVar14 = (*ppMVar22)->_2_System_Collections_Generic_List_T_;
      if (((pIVar14->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar20 + -8) = 0x270d397;
        pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d39f;
      uVar17 = il2cpp_runtime_glue(pIVar14);
      pIVar2 = (*local_40)->_3_System_Collections_Generic_List_T___ctor->methodPointer;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d3af;
      (*pIVar2)(uVar17);
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d3b4;
      il2cpp_raise_exception();
    }
    pIVar14 = (*ppMVar22)->_2_System_Collections_Generic_List_T_;
    bVar1 = (pIVar14->_2).field_0x6d;
    iVar23 = buckets;
    while( true ) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)pvVar20 + -8) = 0x270d17a;
        pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0();
      }
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d135;
      puVar15 = (undefined8 *)il2cpp_runtime_glue(pIVar14);
      pIVar2 = (*ppMVar22)->_3_System_Collections_Generic_List_T___ctor->methodPointer;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d144;
      (*pIVar2)(puVar15);
      pSVar7 = local_50;
      pMVar3 = (*ppMVar22)->_4_System_Collections_Generic_List_List_T___Add;
      pIVar2 = pMVar3->methodPointer;
      pIVar4 = pMVar3->invoker_method;
      local_38 = puVar15;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d15f;
      (*pIVar4)(pIVar2,pMVar3,pSVar7,&local_38,puVar15);
      iVar23 = iVar23 + -1;
      if (iVar23 == 0) break;
      pIVar14 = (*ppMVar22)->_2_System_Collections_Generic_List_T_;
      bVar1 = (pIVar14->_2).field_0x6d;
    }
  }
  pSVar8 = local_48;
  if (local_48 != (System_Collections_Generic_List_T__o *)0x0) {
    pIVar2 = (*ppMVar22)->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)pvVar20 + -8) = 0x270d198;
    iVar23 = (*pIVar2)(pSVar8);
    pvVar21 = local_58;
    if ((buckets != 0) && (iVar23 != 0)) {
      pIVar2 = (*ppMVar22)->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d1b9;
      local_6c = (*pIVar2)(pSVar8);
      pvVar6 = apvStack_a8[3];
      local_6c = local_6c / buckets;
      pMVar3 = (*ppMVar22)->_6_System_Collections_Generic_List_T__GetEnumerator;
      pIVar2 = pMVar3->methodPointer;
      local_38 = apvStack_a8[3];
      pIVar4 = pMVar3->invoker_method;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d1e2;
      (*pIVar4)(pIVar2,pMVar3,pSVar8,&local_38,pvVar6);
      uVar18 = local_60;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d1f1;
      memcpy(pvVar21,pvVar6,uVar18);
      if (local_50 == (System_Collections_Generic_List_List_T___o *)0x0) {
        pIVar2 = (*ppMVar22)->_13_System_Collections_Generic_List_Enumerator_T__MoveNext->
                 methodPointer;
        *(undefined8 *)((long)pvVar20 + -8) = 0x270d325;
        cVar9 = (*pIVar2)(pvVar21);
        puVar15 = local_68;
        if (cVar9 != '\0') {
          pMVar3 = (*ppMVar22)->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
          pIVar2 = pMVar3->methodPointer;
          local_38 = local_68;
          pIVar4 = pMVar3->invoker_method;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d3d8;
          (*pIVar4)(pIVar2,pMVar3,pvVar21,&local_38,puVar15);
          puVar15 = local_68;
          pvVar21 = local_80;
          uVar18 = local_88;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d3e9;
          memcpy(pvVar21,puVar15,uVar18);
                    /* WARNING: Subroutine does not return */
          *(undefined **)((long)pvVar20 + -8) = &UNK_0270d3ee;
          il2cpp_raise_exception();
        }
      }
      else {
        local_48 = (System_Collections_Generic_List_T__o *)((ulong)local_48 & 0xffffffff00000000);
        local_60 = CONCAT44(local_60._4_4_,buckets + -1);
        while( true ) {
          pIVar2 = (*local_40)->_13_System_Collections_Generic_List_Enumerator_T__MoveNext->
                   methodPointer;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d220;
          cVar9 = (*pIVar2)(pvVar21);
          ppMVar22 = local_40;
          puVar15 = local_68;
          if (cVar9 == '\0') break;
          pMVar3 = (*local_40)->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
          pIVar2 = pMVar3->methodPointer;
          local_38 = local_68;
          pIVar4 = pMVar3->invoker_method;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d24a;
          (*pIVar4)(pIVar2,pMVar3,pvVar21,&local_38,puVar15);
          pvVar6 = local_80;
          uVar18 = local_88;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d260;
          memcpy(pvVar6,puVar15,uVar18);
          pSVar7 = local_50;
          pMVar3 = (*ppMVar22)->_11_System_Collections_Generic_List_List_T___get_Item;
          pIVar2 = pMVar3->methodPointer;
          local_70 = (int)local_48;
          local_38 = (undefined8 *)&local_70;
          pIVar4 = pMVar3->invoker_method;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d289;
          (*pIVar4)(pIVar2,pMVar3,pSVar7,&local_38,apvStack_a8 + 1);
          puVar15 = apvStack_a8[2];
          pvVar21 = apvStack_a8[1];
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d2a5;
          memcpy(puVar15,pvVar6,uVar18);
          if (pvVar21 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((long)pvVar20 + -8) = 0x270d37d;
            il2cpp_raise_exception();
          }
          pMVar3 = (*local_40)->_12_System_Collections_Generic_List_T__Add;
          pIVar2 = pMVar3->methodPointer;
          iVar23 = (int)local_60;
          if (-1 < (int)((*local_40)->_10_T->_1).byval_arg.bits) {
            puVar15 = (undefined8 *)*puVar15;
          }
          pIVar4 = pMVar3->invoker_method;
          local_38 = puVar15;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d2e1;
          (*pIVar4)(pIVar2,pMVar3,pvVar21,&local_38,puVar15);
          pIVar2 = (*local_40)->_5_System_Collections_Generic_List_T__get_Count->methodPointer;
          *(undefined8 *)((long)pvVar20 + -8) = 0x270d2f1;
          iVar11 = (*pIVar2)(pvVar21);
          local_48 = (System_Collections_Generic_List_T__o *)
                     CONCAT44(local_48._4_4_,
                              (int)local_48 + (uint)((int)local_48 < iVar23 && local_6c <= iVar11));
          pvVar21 = local_58;
        }
      }
      pMVar16 = *ppMVar22;
      pIVar14 = pMVar16->_7_System_Collections_Generic_List_Enumerator_T_;
      if (((pIVar14->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar20 + -8) = 0x270d344;
        pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0();
        pMVar16 = *ppMVar22;
      }
      lVar12 = local_78;
      pIVar5 = pMVar16[1]._0_System_Collections_Generic_List_List_T__;
      *(undefined8 *)((long)pvVar20 + -8) = 0x270d360;
      il2cpp_glue_022754b0(pIVar14,pIVar5,lVar12,pvVar21,0,0);
    }
    return local_50;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)pvVar20 + -8) = 0x270d382;
  il2cpp_raise_exception();
}


// Utility.Util$$GetRandomFromWeightedList
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedList (System_Collections_Generic_List_object__o* values, System_Collections_Generic_List_float__o* weights, const MethodInfo* method);
// 0x417cff0

Il2CppObject *
Utility_Util__GetRandomFromWeightedList
          (System_Collections_Generic_List_object__o *values,
          System_Collections_Generic_List_float__o *weights,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  int32_t index;
  float fVar3;
  undefined8 in_stack_ffffffffffffff98;
  float fVar4;
  float fVar5;
  undefined4 in_stack_ffffffffffffffa4;
  undefined1 local_38 [24];
  
  if (DAT_05704b5b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Single__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    DAT_05704b5b = '\x01';
  }
  if (weights != (System_Collections_Generic_List_float__o *)0x0) {
    System_Collections_Generic_List<float>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,weights,MethodInfo_List_1_T__Enumerator_System_Single__GetEnumerato);
    fVar4 = 0.0;
    while (__this.fields._index = (int32_t)fVar4,
          __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98,
          __this.fields._version = in_stack_ffffffffffffffa4,
          __this.fields._current = (Il2CppObject *)local_38._0_8_,
          bVar1 = System_Collections_Generic_List_Enumerator<float>__MoveNext
                            (__this,(MethodInfo_319D330 *)&stack0xffffffffffffffa8),
          (char)bVar1 != '\0') {
      fVar4 = fVar4 + (float)local_38._16_4_;
    }
    __this_00.fields._index = (int32_t)fVar4;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
    __this_00.fields._version = in_stack_ffffffffffffffa4;
    __this_00.fields._current = (Il2CppObject *)local_38._0_8_;
    System_Collections_Generic_List_Enumerator<float>__Dispose
              (__this_00,(MethodInfo_319D320 *)&stack0xffffffffffffffa8);
    index = 0;
    fVar4 = UnityEngine_Random__Range(0.0,fVar4,(MethodInfo *)0x0);
    if (values != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (values->fields)._size) {
        index = 0;
        fVar5 = 0.0;
        if (0.0 <= fVar4) goto LAB_0417d172;
        do {
          do {
            fVar3 = System_Collections_Generic_List<float>__get_Item(weights,index,MethodInfo_Single_get_Item);
            fVar5 = fVar5 + fVar3;
            index = index + 1;
            if ((values->fields)._size <= index) {
              index = 0;
              goto LAB_0417d195;
            }
          } while (fVar4 < fVar5);
LAB_0417d172:
          fVar3 = System_Collections_Generic_List<float>__get_Item(weights,index,MethodInfo_Single_get_Item);
        } while (fVar3 + fVar5 <= fVar4);
      }
LAB_0417d195:
      pIVar2 = System_Collections_Generic_List<object>__get_Item(values,index,MethodInfo_Object_get_Item);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GetRandomFromWeightedNode
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedNode (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x417d230

Il2CppObject *
Utility_Util__GetRandomFromWeightedNode(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Single_array *pSVar4;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  long lVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_List_float__o *__this_05;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppObject *item;
  undefined8 uVar9;
  long *plVar10;
  Il2CppObject *pIVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  float item_00;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppType **ppIVar19;
  System_Collections_Generic_List_T__o *pSVar20;
  _union_13 _Var21;
  _union_14 _Var22;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704b5c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Single);
    il2cpp_init_method_metadata(&TypeInfo_List_float);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b5c = '\x01';
  }
  ppIVar19 = (Il2CppType **)0x0;
  _Var21.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar17 = (Il2CppClass *)0x0;
  pIVar18 = (Il2CppType *)0x0;
  pIVar15 = (InvokerMethod)0x0;
  pcVar16 = (char *)0x0;
  pIVar12 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  _Var22.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_Object);
  __this_05 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_glue(TypeInfo_List_float);
  System_Collections_Generic_List<float>___ctor(__this_05,MethodInfo_List_1_System_Single);
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_0417d5e6:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  SimpleJSONFixed_JSONNode__get_Keys
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,node,(MethodInfo *)0x0);
  local_38.genericMethod = local_80.genericMethod;
  local_48 = local_90;
  _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
  local_58 = local_a0;
  pIStack_50 = pIStack_98;
  local_68 = local_b0;
  pIStack_60 = pIStack_a8;
  local_78 = local_c0;
  pSStack_70 = pSStack_b8;
  __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar13;
  __this.fields.m_Enumerator.fields._0_8_ = pIVar12;
  __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar15;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar16;
  __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar17;
  __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
  __this.fields.m_Enumerator.fields.m_Array.fields._list =
       (System_Collections_Generic_List_T__o *)ppIVar19;
  __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
  __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
  SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
  __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
  __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
       (Il2CppObject *)local_a0;
  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
  __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
  bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                    (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
  method_00 = extraout_RDX;
  if ((char)bVar6 != '\0') {
    pIVar12 = local_c0;
    pSVar14 = pSStack_b8;
    pIVar15 = local_b0;
    pIVar11 = pIStack_a8;
    pIVar17 = local_a0;
    pIVar18 = pIStack_98;
    pSVar20 = local_90;
    _Var21 = _Stack_88;
    _Var22 = local_80;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_03.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)local_a0;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                  (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto LAB_0417d5e6;
    }
    do {
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar14;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar12;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar15;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar17;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar20;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
      pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0417d5e6;
      item = (Il2CppObject *)
             (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_04->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto LAB_0417d5e6;
      uVar2 = (__this_04->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_04->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_04,item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      uVar9 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
      plVar10 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                  (node,uVar9,(node->klass->vtable)._7_get_Item.method);
      if ((plVar10 == (long *)0x0) ||
         (item_00 = (float)(**(code **)(*plVar10 + 0x388))(plVar10), lVar5 = MethodInfo_Void_Add,
         __this_05 == (System_Collections_Generic_List_float__o *)0x0)) goto LAB_0417d5e6;
      piVar1 = &(__this_05->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_05->fields)._items;
      if (pSVar4 == (System_Single_array *)0x0) goto LAB_0417d5e6;
      uVar2 = (__this_05->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_05->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = item_00;
      }
      else {
        System_Collections_Generic_List<float>__AddWithResize
                  (__this_05,item_00,
                   *(MethodInfo_35DFAF0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar14;
      __this_01.fields.m_Enumerator.fields._0_8_ = pIVar12;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar15;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar17;
      __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar18;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar20;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var21.rgctx_data;
      __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var22.genericMethod;
      bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
      method_00 = extraout_RDX_00;
    } while ((char)bVar6 != '\0');
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_01;
  }
  pIVar11 = Utility_Util__GetRandomFromWeightedList(__this_04,__this_05,method_00);
  return pIVar11;
}


// Utility.Util$$DistanceIgnoreY
// il2cpp: float Utility_Util__DistanceIgnoreY (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x417d610

float Utility_Util__DistanceIgnoreY
                (UnityEngine_Vector3_o a,UnityEngine_Vector3_o b,MethodInfo *method)

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
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary_object__object_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_260DC10* method);
// 0x270dc10

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary<object__object>
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_260DC10 *method)

{
  MethodInfo_260DC10_RGCTXs **ppMVar1;
  byte bVar2;
  MethodInfo_260DC10_RGCTXs *pMVar3;
  Il2CppClass *pIVar4;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar5;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar6;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  long lVar7;
  
  ppMVar1 = &method->rgctx_data;
  pMVar3 = method->rgctx_data;
  if (pMVar3 == (MethodInfo_260DC10_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    pMVar3 = *ppMVar1;
    if (pMVar3 != (MethodInfo_260DC10_RGCTXs *)0x0) goto LAB_0270dc4c;
    il2cpp_glue_022c2910(method);
    pIVar4 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) goto LAB_0270ddb6;
LAB_0270dc5d:
    if (*(int *)&(pIVar4->_2).field_0x1c == 0) goto LAB_0270ddcb;
LAB_0270dc6a:
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) goto LAB_0270dde5;
LAB_0270dc7f:
    keySelector = *(System_Func_TSource__TKey__o **)((long)pIVar4->static_fields + 8);
  }
  else {
LAB_0270dc4c:
    pIVar4 = pMVar3->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) != 0) goto LAB_0270dc5d;
LAB_0270ddb6:
    lVar7 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_0270dc6a;
LAB_0270ddcb:
    il2cpp_init_class();
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) != 0) goto LAB_0270dc7f;
LAB_0270dde5:
    lVar7 = il2cpp_glue_022c28b0(pIVar4);
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
      lVar7 = il2cpp_glue_022c28b0();
      if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_0270dcb5;
LAB_0270dd7a:
      il2cpp_init_class();
      pMVar3 = *ppMVar1;
      pIVar4 = pMVar3->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar4->_2).field_0x6d;
    }
    else {
      if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
      goto LAB_0270dd7a;
LAB_0270dcb5:
      pMVar3 = *ppMVar1;
      pIVar4 = pMVar3->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar4->_2).field_0x6d;
    }
    if ((bVar2 & 1) == 0) {
      il2cpp_glue_022c28b0(pIVar4);
      pMVar3 = *ppMVar1;
    }
    pIVar4 = pMVar3->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(pIVar4);
    System_Func<KeyValuePair<object__object>__object>___ctor();
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
    }
    *(System_Func_TSource__TKey__o **)((long)pIVar4->static_fields + 8) = keySelector;
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
    }
    il2cpp_runtime_glue((long)pIVar4->static_fields + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy<KeyValuePair<object__object>__object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)dict,keySelector,
                      (MethodInfo_24D38E0 *)
                      (*ppMVar1)->
                      _6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_);
  pSVar5 = System_Linq_Enumerable__ToList<KeyValuePair<object__object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_24E1C20 *)
                      (*ppMVar1)->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__);
  if (pSVar5 == (System_Collections_Generic_List_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar6 = System_Linq_Enumerable__Skip<KeyValuePair<object__object>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                      (pageNumber + -1) * elementsPerPage,
                      (MethodInfo_24DE670 *)
                      (*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__);
  pSVar6 = System_Linq_Enumerable__Take<KeyValuePair<object__object>>
                     (pSVar6,elementsPerPage,
                      (MethodInfo_24DEA80 *)
                      (*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__);
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar7 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_0270de99;
LAB_0270dfa9:
    il2cpp_init_class();
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) != 0) goto LAB_0270deae;
LAB_0270dfc3:
    lVar7 = il2cpp_glue_022c28b0(pIVar4);
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
    goto LAB_0270dfa9;
LAB_0270de99:
    pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) goto LAB_0270dfc3;
LAB_0270deae:
    selector = *(System_Func_TSource__TResult__o **)((long)pIVar4->static_fields + 0x10);
  }
  if (selector != (System_Func_TSource__TResult__o *)0x0) goto LAB_0270dfdf;
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar7 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_0270dee4;
LAB_0270e02b:
    il2cpp_init_class();
    pMVar3 = *ppMVar1;
    pIVar4 = pMVar3->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar4->_2).field_0x6d;
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
    goto LAB_0270e02b;
LAB_0270dee4:
    pMVar3 = *ppMVar1;
    pIVar4 = pMVar3->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar4->_2).field_0x6d;
  }
  if ((bVar2 & 1) == 0) {
    il2cpp_glue_022c28b0(pIVar4);
    pMVar3 = *ppMVar1;
  }
  pIVar4 = pMVar3->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(pIVar4);
  System_Func<KeyValuePair<object__object>__object>___ctor();
  pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  *(System_Func_TSource__TResult__o **)((long)pIVar4->static_fields + 0x10) = selector;
  pIVar4 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
  }
  il2cpp_runtime_glue((long)pIVar4->static_fields + 0x10,selector);
LAB_0270dfdf:
  source_00 = System_Linq_Enumerable__Select<KeyValuePair<object__object>__object>
                        (pSVar6,selector,
                         (MethodInfo_24D4B10 *)
                         (*ppMVar1)->
                         _17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_);
  pSVar5 = System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_24E20A0 *)(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_);
  return (System_Collections_Generic_List_TValue__o *)pSVar5;
}


// Utility.Util$$PaginateDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_260E050* method);
// 0x270e050

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_260E050 *method)

{
  MethodInfo_260E050_RGCTXs **ppMVar1;
  byte bVar2;
  undefined8 uVar3;
  Il2CppMethodPointer vtable_dispatch;
  MethodInfo_260E050_RGCTXs *pMVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  undefined8 uVar7;
  System_Collections_Generic_List_TValue__o *pSVar8;
  undefined1 auVar9 [16];
  
  ppMVar1 = &method->rgctx_data;
  pMVar4 = method->rgctx_data;
  if (pMVar4 == (MethodInfo_260E050_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    pMVar4 = *ppMVar1;
    if (pMVar4 != (MethodInfo_260E050_RGCTXs *)0x0) goto LAB_0270e08c;
    il2cpp_glue_022c2910(method);
    pIVar5 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) goto LAB_0270e1f3;
LAB_0270e09d:
    if (*(int *)&(pIVar5->_2).field_0x1c == 0) goto LAB_0270e208;
LAB_0270e0aa:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) goto LAB_0270e222;
LAB_0270e0bf:
    lVar6 = *(long *)((long)pIVar5->static_fields + 8);
  }
  else {
LAB_0270e08c:
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) != 0) goto LAB_0270e09d;
LAB_0270e1f3:
    lVar6 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar6 + 0xe4) != 0) goto LAB_0270e0aa;
LAB_0270e208:
    il2cpp_init_class();
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) != 0) goto LAB_0270e0bf;
LAB_0270e222:
    lVar6 = il2cpp_glue_022c28b0(pIVar5);
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  }
  if (lVar6 == 0) {
    if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
      lVar6 = il2cpp_glue_022c28b0();
      if (*(int *)(lVar6 + 0xe4) != 0) goto LAB_0270e0f5;
LAB_0270e1b7:
      il2cpp_init_class();
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).field_0x6d;
    }
    else {
      if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
      goto LAB_0270e1b7;
LAB_0270e0f5:
      pMVar4 = *ppMVar1;
      pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar5->_2).field_0x6d;
    }
    if ((bVar2 & 1) == 0) {
      pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
      pMVar4 = *ppMVar1;
    }
    uVar7 = *(undefined8 *)pIVar5->static_fields;
    pIVar5 = pMVar4->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
    }
    lVar6 = il2cpp_runtime_glue(pIVar5);
    (*(*ppMVar1)->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor->methodPointer)
              (lVar6,uVar7,
               (*ppMVar1)->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0);
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
    }
    *(long *)((long)pIVar5->static_fields + 8) = lVar6;
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) {
      pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
    }
    il2cpp_runtime_glue((long)pIVar5->static_fields + 8,lVar6);
  }
  uVar7 = (*(*ppMVar1)->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_->
            methodPointer)(dict,lVar6);
  lVar6 = (*(*ppMVar1)->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__->methodPointer)
                    (uVar7);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(*ppMVar1)->_11_System_Collections_Generic_List_KeyValuePair_TKey__TValue___get_Count->
    methodPointer)(lVar6);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar7 = (*(*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__->methodPointer)
                    (lVar6,(ulong)(uint)((pageNumber + -1) * elementsPerPage));
  uVar7 = (*(*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__->methodPointer)
                    (uVar7,(ulong)(uint)elementsPerPage);
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar6 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar6 + 0xe4) != 0) goto LAB_0270e2d7;
LAB_0270e3e4:
    il2cpp_init_class();
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) != 0) goto LAB_0270e2ec;
LAB_0270e3fe:
    lVar6 = il2cpp_glue_022c28b0(pIVar5);
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
    goto LAB_0270e3e4;
LAB_0270e2d7:
    pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar5->_2).field_0x6d & 1) == 0) goto LAB_0270e3fe;
LAB_0270e2ec:
    lVar6 = *(long *)((long)pIVar5->static_fields + 0x10);
  }
  if (lVar6 != 0) goto LAB_0270e41a;
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar6 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar6 + 0xe4) != 0) goto LAB_0270e322;
LAB_0270e463:
    il2cpp_init_class();
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).field_0x6d;
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0)
    goto LAB_0270e463;
LAB_0270e322:
    pMVar4 = *ppMVar1;
    pIVar5 = pMVar4->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar5->_2).field_0x6d;
  }
  if ((bVar2 & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
    pMVar4 = *ppMVar1;
  }
  uVar3 = *(undefined8 *)pIVar5->static_fields;
  pIVar5 = pMVar4->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  lVar6 = il2cpp_runtime_glue(pIVar5);
  (*(*ppMVar1)->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor->methodPointer)
            (lVar6,uVar3,
             (*ppMVar1)->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1);
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
  }
  *(long *)((long)pIVar5->static_fields + 0x10) = lVar6;
  pIVar5 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar5->_2).field_0x6d & 1) == 0) {
    pIVar5 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar5);
  }
  il2cpp_runtime_glue((long)pIVar5->static_fields + 0x10,lVar6);
LAB_0270e41a:
  auVar9 = (*(*ppMVar1)->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_->
             methodPointer)(uVar7,lVar6);
  vtable_dispatch = (*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_->methodPointer;
  pSVar8 = (System_Collections_Generic_List_TValue__o *)
           (*vtable_dispatch)
                     (auVar9._0_8_,(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_,
                      auVar9._8_8_,vtable_dispatch);
  return pSVar8;
}


// Utility.Util$$ColorText
// il2cpp: System_String_o* Utility_Util__ColorText (System_String_o* text, System_String_o* color, const MethodInfo* method);
// 0x417d650

System_String_o *
Utility_Util__ColorText(System_String_o *text,System_String_o *color,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704b5d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&">");
    il2cpp_init_method_metadata(&"<color=");
    DAT_05704b5d = '\x01';
    method = extraout_RDX;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5,method);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<color=";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = color;
        il2cpp_runtime_glue(values->m_Items + 1,color);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = ">";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = text;
            il2cpp_runtime_glue(values->m_Items + 3,text);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$SizeText
// il2cpp: System_String_o* Utility_Util__SizeText (System_String_o* text, int32_t size, const MethodInfo* method);
// 0x417d760

System_String_o * Utility_Util__SizeText(System_String_o *text,int32_t size,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  undefined1 local_14 [4];
  
  if (DAT_05704b5e == '\0') {
    il2cpp_init_method_metadata(&"<size={0}>{1}</size>");
    DAT_05704b5e = '\x01';
    method = extraout_RDX;
  }
  arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,local_14,method);
  pSVar1 = System_String__Format("<size={0}>{1}</size>",arg0,(Il2CppObject *)text,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$RichTextTag
// il2cpp: System_String_o* Utility_Util__RichTextTag (System_String_o* text, System_String_o* tag, System_String_o* value, const MethodInfo* method);
// 0x417d7c0

System_String_o *
Utility_Util__RichTextTag
          (System_String_o *text,System_String_o *tag,System_String_o *value,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (DAT_05704b5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"=");
    il2cpp_init_method_metadata(&"<");
    il2cpp_init_method_metadata(&"</");
    il2cpp_init_method_metadata(&">");
    DAT_05704b5f = '\x01';
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,9);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = tag;
        il2cpp_runtime_glue(values->m_Items + 1,tag);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = value;
            il2cpp_runtime_glue(values->m_Items + 3,value);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              il2cpp_runtime_glue(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                il2cpp_runtime_glue(values->m_Items + 5,text);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  il2cpp_runtime_glue(values->m_Items + 6);
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = tag;
                    il2cpp_runtime_glue(values->m_Items + 7,tag);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = ">";
                      il2cpp_runtime_glue(values->m_Items + 8);
                      pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$ConstrainedToX
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToX (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x417d960

UnityEngine_Quaternion_o
Utility_Util__ConstrainedToX(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar2;
  
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  UVar1.fields.x = UVar1.fields.x * 0.017453292;
  UVar1.fields.y = 0.0;
  UVar1.fields.z = 0.0;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(UVar1,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Utility.Util$$ConstrainedToY
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToY (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x417d9a0

UnityEngine_Quaternion_o
Utility_Util__ConstrainedToY(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar3;
  
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = UVar2.fields.y * 0.017453292;
  UVar3 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar3;
}


// Utility.Util$$ConstrainedToZ
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x417d9e0

UnityEngine_Quaternion_o
Utility_Util__ConstrainedToZ(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar3;
  
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = UVar2.fields.z * 0.017453292;
  UVar3 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar3;
}


// Utility.Util$$GetAllTitanAgentIds
// il2cpp: System_Collections_Generic_List_int__o* Utility_Util__GetAllTitanAgentIds (const MethodInfo* method);
// 0x417da20

System_Collections_Generic_List_int__o * Utility_Util__GetAllTitanAgentIds(MethodInfo *method)

{
  long lVar1;
  System_Func_TSource__TResult__o *pSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar3;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  
  if (DAT_05704b60 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Nullable_1_Int32___Select_K);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Select_Nullable_1_In);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Int32__ToList_Int32);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Nullable_1_Int32___Where_Nu);
    il2cpp_init_method_metadata(&TypeInfo_Func_int___bool);
    il2cpp_init_method_metadata(&TypeInfo_Func_KeyValuePair_float__string___int);
    il2cpp_init_method_metadata(&TypeInfo_Func_int___int);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32___GetAllTitanAgentIds_b__41_0);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetAllTitanAgentIds_b__41_1);
    il2cpp_init_method_metadata(&MethodInfo_Int32__GetAllTitanAgentIds_b__41_2);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b60 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = (System_Collections_Generic_IEnumerable_TSource__o *)
           **(undefined8 **)(TypeInfo_Util + 0xb8);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar2 == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_KeyValuePair_float__string___int);
    System_Func<KeyValuePair<float__object>__Nullable<int>>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar1 + 0x18) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 0x18,pSVar2);
  }
  pSVar3 = System_Linq_Enumerable__Select<KeyValuePair<float__object>__Nullable<int>>
                     (pSVar4,pSVar2,MethodInfo_IEnumerable_1_System_Nullable_1_Int32___Select_K);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_int___bool);
    System_Func<Nullable<int>__bool>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar1 + 0x20) = predicate;
    il2cpp_runtime_glue(lVar1 + 0x20,predicate);
  }
  pSVar4 = System_Linq_Enumerable__Where<Nullable<int>>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                      MethodInfo_IEnumerable_1_System_Nullable_1_Int32___Where_Nu);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (pSVar2 == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_int___int);
    System_Func<Nullable<int>__int>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar1 + 0x28) = pSVar2;
    il2cpp_runtime_glue(lVar1 + 0x28,pSVar2);
  }
  pSVar3 = System_Linq_Enumerable__Select<Nullable<int>__int>(pSVar4,pSVar2,MethodInfo_IEnumerable_1_System_Int32__Select_Nullable_1_In);
  pSVar5 = System_Linq_Enumerable__ToList<int>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,MethodInfo_List_1_System_Int32__ToList_Int32);
  return (System_Collections_Generic_List_int__o *)pSVar5;
}


// Utility.Util$$GetNavMeshAgentIDBySize
// il2cpp: int32_t Utility_Util__GetNavMeshAgentIDBySize (float size, const MethodInfo* method);
// 0x417dd30

int32_t Utility_Util__GetNavMeshAgentIDBySize(float size,MethodInfo *method)

{
  int iVar1;
  System_Nullable_int__o SVar2;
  uint index;
  MethodInfo *in_RSI;
  undefined4 in_XMM0_Db;
  undefined8 uVar3;
  System_Collections_Generic_KeyValuePair_float__object__o SVar4;
  System_Collections_Generic_KeyValuePair_float__object__Fields SVar5;
  
  uVar3 = CONCAT44(in_XMM0_Db,size);
  if (DAT_05704b61 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Single_System_String__get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetValueOrDefault);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    uVar3 = il2cpp_init_method_metadata(&"minTitan");
    DAT_05704b61 = '\x01';
  }
  SVar5.value = "minTitan";
  SVar5._0_8_ = uVar3;
  index = 0;
  iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      uVar3 = il2cpp_init_class(SVar5._0_8_);
      SVar5.value = SVar5.value;
      SVar5._0_8_ = uVar3;
    }
    if (**(long **)(TypeInfo_Util + 0xb8) == 0) break;
    iVar1 = *(int *)(**(long **)(TypeInfo_Util + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class(SVar5._0_8_);
    }
    if (iVar1 <= (int)index) {
      SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)SVar5.value,in_RSI);
      return SVar2.fields.value;
    }
    if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
        (System_Collections_Generic_List_T__o *)0x0) break;
    in_RSI = (MethodInfo *)(ulong)index;
    SVar4 = System_Collections_Generic_List<KeyValuePair<float__object>>__get_Item
                      ((System_Collections_Generic_List_T__o *)
                       **(undefined8 **)(TypeInfo_Util + 0xb8),index,MethodInfo_KeyValuePair_2_System_Single_System_String__get);
    SVar5.value = SVar5.value;
    SVar5._0_8_ = SVar4.fields._0_8_;
    if (SVar4.fields.key <= size) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      in_RSI = (MethodInfo *)(ulong)index;
      SVar5 = (System_Collections_Generic_KeyValuePair_float__object__Fields)
              System_Collections_Generic_List<KeyValuePair<float__object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)
                         **(undefined8 **)(TypeInfo_Util + 0xb8),index,MethodInfo_KeyValuePair_2_System_Single_System_String__get);
    }
    index = index + 1;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GetAgentSettingsCorrected
// il2cpp: UnityEngine_AI_NavMeshBuildSettings_o Utility_Util__GetAgentSettingsCorrected (float size, const MethodInfo* method);
// 0x417dfb0

UnityEngine_AI_NavMeshBuildSettings_o *
Utility_Util__GetAgentSettingsCorrected
          (UnityEngine_AI_NavMeshBuildSettings_o *__return_storage_ptr__,float size,
          MethodInfo *method)

{
  int iVar1;
  UnityEngine_AI_NavMeshBuildSettings_o __this;
  UnityEngine_AI_NavMeshBuildSettings_o __this_00;
  UnityEngine_AI_NavMeshBuildSettings_o __this_01;
  UnityEngine_AI_NavMeshBuildSettings_o __this_02;
  int32_t agentTypeID;
  System_String_o *name;
  System_Nullable_int__Fields SVar2;
  uint index;
  float fVar3;
  System_Collections_Generic_KeyValuePair_float__object__o SVar4;
  float fVar5;
  Il2CppMethodPointer local_70;
  Il2CppMethodPointer pIStack_68;
  InvokerMethod local_60;
  char *pcStack_58;
  Il2CppClass *local_50;
  Il2CppType *pIStack_48;
  int32_t local_40;
  uint32_t uStack_3c;
  int32_t iStack_38;
  UnityEngine_AI_NavMeshBuildDebugSettings_o UStack_34;
  undefined3 uStack_33;
  
  if (DAT_05704b62 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Single_System_String__get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"minTitan");
    DAT_05704b62 = '\x01';
  }
  fVar3 = 0.5;
  fVar5 = 0.5;
  index = 0;
  iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  name = "minTitan";
  while( true ) {
    if (iVar1 == 0) {
      fVar3 = (float)il2cpp_init_class(fVar3);
    }
    if (**(long **)(TypeInfo_Util + 0xb8) == 0) break;
    iVar1 = *(int *)(**(long **)(TypeInfo_Util + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class(fVar3);
    }
    if (iVar1 <= (int)index) {
      SVar2 = (System_Nullable_int__Fields)Utility_Util__GetNavMeshAgentID(name,method);
      agentTypeID = System_Nullable<int>__get_Value
                              ((System_Nullable_int__o)&stack0xffffffffffffff40,MethodInfo_Int32_get_Value);
      UnityEngine_AI_NavMesh__GetSettingsByID
                ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_70,agentTypeID,(MethodInfo *)0x0);
      __this.fields.m_AgentRadius = size;
      __this.fields.m_AgentTypeID = (int32_t)fVar5;
      __this.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this.fields.m_AgentSlope = (float)SVar2.value;
      __this.fields._16_8_ = local_70;
      __this.fields._24_8_ = pIStack_68;
      __this.fields._32_8_ = local_60;
      __this.fields._40_8_ = pcStack_58;
      __this.fields._48_8_ = local_50;
      __this.fields._56_8_ = pIStack_48;
      fVar3 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                        (__this,(MethodInfo *)&stack0xffffffffffffff48);
      __this_00.fields.m_AgentRadius = size;
      __this_00.fields.m_AgentTypeID = (int32_t)fVar5;
      __this_00.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_00.fields.m_AgentSlope = (float)SVar2.value;
      __this_00.fields._16_8_ = local_70;
      __this_00.fields._24_8_ = pIStack_68;
      __this_00.fields._32_8_ = local_60;
      __this_00.fields._40_8_ = pcStack_58;
      __this_00.fields._48_8_ = local_50;
      __this_00.fields._56_8_ = pIStack_48;
      UnityEngine_AI_NavMeshBuildSettings__set_agentRadius
                (__this_00,fVar3 / fVar5,(MethodInfo *)&stack0xffffffffffffff48);
      __this_01.fields.m_AgentRadius = size;
      __this_01.fields.m_AgentTypeID = (int32_t)fVar5;
      __this_01.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_01.fields.m_AgentSlope = (float)SVar2.value;
      __this_01.fields._16_8_ = local_70;
      __this_01.fields._24_8_ = pIStack_68;
      __this_01.fields._32_8_ = local_60;
      __this_01.fields._40_8_ = pcStack_58;
      __this_01.fields._48_8_ = local_50;
      __this_01.fields._56_8_ = pIStack_48;
      fVar3 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                        (__this_01,(MethodInfo *)&stack0xffffffffffffff48);
      __this_02.fields.m_AgentRadius = size;
      __this_02.fields.m_AgentTypeID = (int32_t)fVar5;
      __this_02.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_02.fields.m_AgentSlope = (float)SVar2.value;
      __this_02.fields._16_8_ = local_70;
      __this_02.fields._24_8_ = pIStack_68;
      __this_02.fields._32_8_ = local_60;
      __this_02.fields._40_8_ = pcStack_58;
      __this_02.fields._48_8_ = local_50;
      __this_02.fields._56_8_ = pIStack_48;
      UnityEngine_AI_NavMeshBuildSettings__set_agentHeight
                (__this_02,fVar3 / fVar5,(MethodInfo *)&stack0xffffffffffffff48);
      (__return_storage_ptr__->fields).m_BuildHeightMesh = local_40;
      (__return_storage_ptr__->fields).m_MaxJobWorkers = uStack_3c;
      (__return_storage_ptr__->fields).m_PreserveTilesOutsideBounds = iStack_38;
      (__return_storage_ptr__->fields).m_Debug =
           (UnityEngine_AI_NavMeshBuildDebugSettings_o)UStack_34.fields.m_Flags;
      *(undefined3 *)&(__return_storage_ptr__->fields).field_0x3d = uStack_33;
      *(Il2CppClass **)&(__return_storage_ptr__->fields).m_OverrideVoxelSize = local_50;
      *(Il2CppType **)&(__return_storage_ptr__->fields).m_OverrideTileSize = pIStack_48;
      *(InvokerMethod *)&(__return_storage_ptr__->fields).m_AgentClimb = local_60;
      *(char **)&(__return_storage_ptr__->fields).m_MaxJumpAcrossDistance = pcStack_58;
      *(Il2CppMethodPointer *)&__return_storage_ptr__->fields = local_70;
      *(Il2CppMethodPointer *)&(__return_storage_ptr__->fields).m_AgentHeight = pIStack_68;
      return __return_storage_ptr__;
    }
    if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
        (System_Collections_Generic_List_T__o *)0x0) break;
    method = (MethodInfo *)(ulong)index;
    SVar4 = System_Collections_Generic_List<KeyValuePair<float__object>>__get_Item
                      ((System_Collections_Generic_List_T__o *)
                       **(undefined8 **)(TypeInfo_Util + 0xb8),index,MethodInfo_KeyValuePair_2_System_Single_System_String__get);
    fVar3 = SVar4.fields.key;
    if (fVar3 <= size) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      SVar4 = System_Collections_Generic_List<KeyValuePair<float__object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)
                         **(undefined8 **)(TypeInfo_Util + 0xb8),index,MethodInfo_KeyValuePair_2_System_Single_System_String__get);
      fVar5 = SVar4.fields.key;
      if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      method = (MethodInfo *)(ulong)index;
      SVar4 = System_Collections_Generic_List<KeyValuePair<float__object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)
                         **(undefined8 **)(TypeInfo_Util + 0xb8),index,MethodInfo_KeyValuePair_2_System_Single_System_String__get);
      name = (System_String_o *)SVar4.fields.value;
      fVar3 = SVar4.fields.key;
    }
    index = index + 1;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GetNavMeshAgentID
// il2cpp: System_Nullable_int__o Utility_Util__GetNavMeshAgentID (System_String_o* name, const MethodInfo* method);
// 0x417de90

System_Nullable_int__o Utility_Util__GetNavMeshAgentID(System_String_o *name,MethodInfo *method)

{
  UnityEngine_AI_NavMeshBuildSettings_o __this;
  UnityEngine_AI_NavMeshBuildSettings_o __this_00;
  int32_t iVar1;
  bool_conflict bVar2;
  System_String_o *b;
  System_Nullable_int__Fields SVar3;
  int index;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  System_Nullable_int__Fields SVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppMethodPointer pIVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  Il2CppClass *pIVar9;
  Il2CppType *pIVar10;
  Il2CppMethodPointer local_60;
  Il2CppMethodPointer pIStack_58;
  InvokerMethod local_50;
  char *pcStack_48;
  Il2CppClass *local_40;
  Il2CppType *pIStack_38;
  
  if (DAT_05704b63 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704b63 = '\x01';
  }
  index = 0;
  iVar1 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
  if (0 < iVar1) {
    do {
      UnityEngine_AI_NavMesh__GetSettingsByIndex
                ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_60,index,(MethodInfo *)0x0);
      __this.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff50;
      __this.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
      __this.fields.m_AgentTypeID = (int)in_stack_ffffffffffffff48;
      __this.fields.m_AgentRadius = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
      __this.fields._16_8_ = local_60;
      __this.fields._24_8_ = pIStack_58;
      __this.fields._32_8_ = local_50;
      __this.fields._40_8_ = pcStack_48;
      __this.fields._48_8_ = local_40;
      __this.fields._56_8_ = pIStack_38;
      pIVar5 = local_60;
      pIVar6 = pIStack_58;
      pIVar7 = local_50;
      pcVar8 = pcStack_48;
      pIVar9 = local_40;
      pIVar10 = pIStack_38;
      iVar1 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                        (__this,(MethodInfo *)&stack0xffffffffffffff58);
      b = UnityEngine_AI_NavMesh__GetSettingsNameFromID(iVar1,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(name,b,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        __this_00.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff50;
        __this_00.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
        __this_00.fields.m_AgentTypeID = (int)in_stack_ffffffffffffff48;
        __this_00.fields.m_AgentRadius = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
        __this_00.fields._16_8_ = pIVar5;
        __this_00.fields._24_8_ = pIVar6;
        __this_00.fields._32_8_ = pIVar7;
        __this_00.fields._40_8_ = pcVar8;
        __this_00.fields._48_8_ = pIVar9;
        __this_00.fields._56_8_ = pIVar10;
        iVar1 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff58);
        SVar4.hasValue = 0;
        SVar4.value = 0;
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&stack0xffffffffffffff50,iVar1,MethodInfo_Nullable_1_Int32);
        return (System_Nullable_int__o)SVar4;
      }
      index = index + 1;
      iVar1 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
    } while (index < iVar1);
  }
  SVar3.hasValue = 0;
  SVar3.value = 0;
  return (System_Nullable_int__o)SVar3;
}


// Utility.Util$$Abs
// il2cpp: UnityEngine_Vector3_o Utility_Util__Abs (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x417e240

UnityEngine_Vector3_o Utility_Util__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Utility.Util$$EnumMax<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util__EnumMax___Il2CppFullySharedGenericType_ (const MethodInfo_260BCE0* method);
// 0x270bce0

/* WARNING: Type propagation algorithm not settling */

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util__EnumMax<__Il2CppFullySharedGenericType>(MethodInfo_260BCE0 *method)

{
  System_RuntimeTypeHandle_o handle;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  MethodInfo_260BCE0 *__dest;
  System_RuntimeTypeHandle_Fields *pSVar5;
  System_Type_o *enumType;
  System_Array_o *pSVar6;
  void *extraout_RDX;
  void *__src;
  long in_RSI;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  MethodInfo_260BCE0 *local_38;
  
  pSVar5 = *(System_RuntimeTypeHandle_Fields **)(in_RSI + 0x38);
  local_38 = method;
  if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_50 = 0x270bd09;
    il2cpp_glue_022c2910();
    pSVar5 = *(System_RuntimeTypeHandle_Fields **)(in_RSI + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar5[4].value + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_48 + lVar4);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bd49;
    il2cpp_init_class();
  }
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bd53;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bd6b;
    il2cpp_init_class();
  }
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bd75;
  pSVar6 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(in_RSI + 0x38) + 8);
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bd83;
  local_48 = (*pcVar1)(pSVar6);
  puVar2 = *(undefined8 **)(*(long *)(in_RSI + 0x38) + 0x18);
  uVar3 = *puVar2;
  pcVar1 = (code *)puVar2[2];
  local_40 = __src;
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bda3;
  (*pcVar1)(uVar3,puVar2,0,&local_48,__src);
  __dest = local_38;
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x270bdb2;
  UVar7.klass = memcpy(__dest,__src,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


// Utility.Util$$EnumMaxValue<Int32Enum>
// il2cpp: int32_t Utility_Util__EnumMaxValue_Int32Enum_ (const MethodInfo_260BDD0* method);
// 0x270bdd0

int32_t Utility_Util__EnumMaxValue<Int32Enum>(MethodInfo_260BDD0 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_260BDD0_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_260BDD0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_260BDD0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast<int>(source,MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$EnumMaxValue<__Il2CppFullySharedGenericType>
// il2cpp: int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_ (const MethodInfo_260BE70* method);
// 0x270be70

int32_t Utility_Util__EnumMaxValue<__Il2CppFullySharedGenericType>(MethodInfo_260BE70 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_260BE70_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_260BE70_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_260BE70_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast<int>(source,MethodInfo_IEnumerable_1_System_Int32__Cast_Int32);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$IsValidFileName
// il2cpp: bool Utility_Util__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x417e250

bool_conflict Utility_Util__IsValidFileName(System_String_o *fileName,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  System_Char_array *anyOf;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Char_array *anyOf_00;
  System_String_o *a;
  uint uVar3;
  
  if (DAT_05704b64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_char);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains_String);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&fld_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DC);
    il2cpp_init_method_metadata(&"LPT3");
    il2cpp_init_method_metadata(&"NUL");
    il2cpp_init_method_metadata(&"COM2");
    il2cpp_init_method_metadata(&"AUX");
    il2cpp_init_method_metadata(&"CON");
    il2cpp_init_method_metadata(&"LPT2");
    il2cpp_init_method_metadata(&"COM1");
    il2cpp_init_method_metadata(&"COM6");
    il2cpp_init_method_metadata(&"COM5");
    il2cpp_init_method_metadata(&"COM8");
    il2cpp_init_method_metadata(&"COM4");
    il2cpp_init_method_metadata(&"LPT8");
    il2cpp_init_method_metadata(&"LPT7");
    il2cpp_init_method_metadata(&"LPT5");
    il2cpp_init_method_metadata(&"COM3");
    il2cpp_init_method_metadata(&"LPT6");
    il2cpp_init_method_metadata(&"LPT9");
    il2cpp_init_method_metadata(&"COM7");
    il2cpp_init_method_metadata(&"PRN");
    il2cpp_init_method_metadata(&"COM9");
    il2cpp_init_method_metadata(&"LPT4");
    il2cpp_init_method_metadata(&"LPT1");
    DAT_05704b64 = '\x01';
  }
  anyOf = (System_Char_array *)il2cpp_glue_02274930(TypeInfo_char,0x1a);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)anyOf,fld_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DC,(MethodInfo *)0x0);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)il2cpp_glue_02274930(TypeInfo_string,0x16);
  if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    if (*(int *)&source[1].monitor != 0) {
      source[2].klass = "CON";
      il2cpp_runtime_glue(source + 2);
      if (1 < *(uint *)&source[1].monitor) {
        source[2].monitor = "PRN";
        il2cpp_runtime_glue(&source[2].monitor);
        if (2 < *(uint *)&source[1].monitor) {
          source[3].klass = "AUX";
          il2cpp_runtime_glue(source + 3);
          if (3 < *(uint *)&source[1].monitor) {
            source[3].monitor = "NUL";
            il2cpp_runtime_glue(&source[3].monitor);
            if (4 < *(uint *)&source[1].monitor) {
              source[4].klass = "COM1";
              il2cpp_runtime_glue(source + 4);
              if (5 < *(uint *)&source[1].monitor) {
                source[4].monitor = "COM2";
                il2cpp_runtime_glue(&source[4].monitor);
                if (6 < *(uint *)&source[1].monitor) {
                  source[5].klass = "COM3";
                  il2cpp_runtime_glue(source + 5);
                  if (7 < *(uint *)&source[1].monitor) {
                    source[5].monitor = "COM4";
                    il2cpp_runtime_glue(&source[5].monitor);
                    if (8 < *(uint *)&source[1].monitor) {
                      source[6].klass = "COM5";
                      il2cpp_runtime_glue(source + 6);
                      if (9 < *(uint *)&source[1].monitor) {
                        source[6].monitor = "COM6";
                        il2cpp_runtime_glue(&source[6].monitor);
                        if (10 < *(uint *)&source[1].monitor) {
                          source[7].klass = "COM7";
                          il2cpp_runtime_glue(source + 7);
                          if (0xb < *(uint *)&source[1].monitor) {
                            source[7].monitor = "COM8";
                            il2cpp_runtime_glue(&source[7].monitor);
                            if (0xc < *(uint *)&source[1].monitor) {
                              source[8].klass = "COM9";
                              il2cpp_runtime_glue(source + 8);
                              if (0xd < *(uint *)&source[1].monitor) {
                                source[8].monitor = "LPT1";
                                il2cpp_runtime_glue(&source[8].monitor);
                                if (0xe < *(uint *)&source[1].monitor) {
                                  source[9].klass = "LPT2";
                                  il2cpp_runtime_glue(source + 9);
                                  if (0xf < *(uint *)&source[1].monitor) {
                                    source[9].monitor = "LPT3";
                                    il2cpp_runtime_glue(&source[9].monitor);
                                    if (0x10 < *(uint *)&source[1].monitor) {
                                      source[10].klass = "LPT4";
                                      il2cpp_runtime_glue(source + 10);
                                      if (0x11 < *(uint *)&source[1].monitor) {
                                        source[10].monitor = "LPT5";
                                        il2cpp_runtime_glue(&source[10].monitor);
                                        if (0x12 < *(uint *)&source[1].monitor) {
                                          source[0xb].klass = "LPT6";
                                          il2cpp_runtime_glue(source + 0xb);
                                          if (0x13 < *(uint *)&source[1].monitor) {
                                            source[0xb].monitor = "LPT7";
                                            il2cpp_runtime_glue(&source[0xb].monitor);
                                            if (0x14 < *(uint *)&source[1].monitor) {
                                              source[0xc].klass = "LPT8";
                                              il2cpp_runtime_glue(source + 0xc);
                                              if (0x15 < *(uint *)&source[1].monitor) {
                                                source[0xc].monitor = "LPT9";
                                                il2cpp_runtime_glue(&source[0xc].monitor);
                                                if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                                                  il2cpp_init_class();
                                                }
                                                anyOf_00 = System_IO_Path__GetInvalidFileNameChars
                                                                     ((MethodInfo *)0x0);
                                                if (fileName != (System_String_o *)0x0) {
                                                  iVar1 = System_String__IndexOfAny
                                                                    (fileName,anyOf_00,
                                                                     (MethodInfo *)0x0);
                                                  uVar3 = 0;
                                                  if (iVar1 == -1) {
                                                    iVar1 = System_String__IndexOfAny
                                                                      (fileName,anyOf,
                                                                       (MethodInfo *)0x0);
                                                    uVar3 = 0;
                                                    if (iVar1 == -1) {
                                                      bVar2 = 
                                                  System_Linq_Enumerable__Contains<object>
                                                            (source,(Il2CppObject *)fileName,
                                                             MethodInfo_Boolean_Contains_String);
                                                  uVar3 = 0;
                                                  if ((char)bVar2 == '\0') {
                                                    a = System_String__Trim(fileName,(MethodInfo *)
                                                                                     0x0);
                                                    bVar2 = System_String__op_Equality
                                                                      (a,fileName,(MethodInfo *)0x0)
                                                    ;
                                                    uVar3 = 0;
                                                    if ((char)bVar2 != '\0') {
                                                      uVar3 = (uint)((fileName->fields).
                                                                     _stringLength < 0x32);
                                                    }
                                                  }
                                                  }
                                                  }
                                                  return uVar3;
                                                }
                                                goto LAB_0417e7b5;
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0417e7b5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$GetPhotonTimestampDifference
// il2cpp: double Utility_Util__GetPhotonTimestampDifference (double sentTime, double serverTime, const MethodInfo* method);
// 0x417e7c0

double Utility_Util__GetPhotonTimestampDifference
                 (double sentTime,double serverTime,MethodInfo *method)

{
  return (*(double *)(&DAT_00ccd680 + (ulong)(sentTime <= serverTime) * 8) - sentTime) + serverTime;
}


// Utility.Util$$ForceScalableParticleSystemMinMaxCurveMode
// il2cpp: bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode (UnityEngine_ParticleSystem_MinMaxCurve_o curve, UnityEngine_ParticleSystem_MinMaxCurve_o* newCurve, float scale, const MethodInfo* method);
// 0x417e7f0

bool_conflict
Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
          (UnityEngine_ParticleSystem_MinMaxCurve_o curve,
          UnityEngine_ParticleSystem_MinMaxCurve_o *newCurve,float scale,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o __this;
  UnityEngine_ParticleSystem_MinMaxCurve_o __this_00;
  UnityEngine_ParticleSystem_MinMaxCurve_o __this_01;
  UnityEngine_ParticleSystem_MinMaxCurve_o __this_02;
  UnityEngine_ParticleSystem_MinMaxCurve_o __this_03;
  int32_t iVar1;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  float valueStart;
  float fVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffc0;
  undefined4 in_stack_ffffffffffffffc8;
  undefined4 in_stack_ffffffffffffffcc;
  undefined4 in_stack_ffffffffffffffd0;
  undefined4 uVar3;
  float in_stack_ffffffffffffffd4;
  undefined4 uVar4;
  
  __this.fields.m_CurveMin._0_4_ = in_stack_ffffffffffffffc0;
  __this.fields._0_8_ = in_stack_ffffffffffffffb8;
  __this.fields.m_CurveMin._4_4_ = scale;
  __this.fields.m_CurveMax._0_4_ = in_stack_ffffffffffffffc8;
  __this.fields.m_CurveMax._4_4_ = in_stack_ffffffffffffffcc;
  __this.fields.m_ConstantMin = (float)in_stack_ffffffffffffffd0;
  __this.fields.m_ConstantMax = in_stack_ffffffffffffffd4;
  iVar1 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode(__this,(MethodInfo *)&curve);
  if (iVar1 == 3) {
    __this_02.fields.m_CurveMin._0_4_ = in_stack_ffffffffffffffc0;
    __this_02.fields.m_Mode = (int)in_stack_ffffffffffffffb8;
    __this_02.fields.m_CurveMultiplier = (float)(int)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
    __this_02.fields.m_CurveMin._4_4_ = scale;
    __this_02.fields.m_CurveMax._0_4_ = in_stack_ffffffffffffffc8;
    __this_02.fields.m_CurveMax._4_4_ = in_stack_ffffffffffffffcc;
    __this_02.fields.m_ConstantMin = (float)in_stack_ffffffffffffffd0;
    __this_02.fields.m_ConstantMax = in_stack_ffffffffffffffd4;
    valueStart = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin
                           (__this_02,(MethodInfo *)&curve);
    __this_03.fields.m_CurveMin._0_4_ = valueStart;
    __this_03.fields.m_Mode = (int)in_stack_ffffffffffffffb8;
    __this_03.fields.m_CurveMultiplier = (float)(int)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
    __this_03.fields.m_CurveMin._4_4_ = scale;
    __this_03.fields.m_CurveMax._0_4_ = in_stack_ffffffffffffffc8;
    __this_03.fields.m_CurveMax._4_4_ = in_stack_ffffffffffffffcc;
    __this_03.fields.m_ConstantMin = (float)in_stack_ffffffffffffffd0;
    __this_03.fields.m_ConstantMax = in_stack_ffffffffffffffd4;
    fVar2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax(__this_03,(MethodInfo *)&curve);
  }
  else {
    if (iVar1 != 0) {
      *(undefined4 *)&(newCurve->fields).m_CurveMax = curve.fields.m_CurveMax._0_4_;
      *(undefined4 *)((long)&(newCurve->fields).m_CurveMax + 4) = curve.fields.m_CurveMax._4_4_;
      (newCurve->fields).m_ConstantMin = curve.fields.m_ConstantMin;
      (newCurve->fields).m_ConstantMax = curve.fields.m_ConstantMax;
      (newCurve->fields).m_Mode = curve.fields.m_Mode;
      (newCurve->fields).m_CurveMultiplier = curve.fields.m_CurveMultiplier;
      *(undefined4 *)&(newCurve->fields).m_CurveMin = curve.fields.m_CurveMin._0_4_;
      *(undefined4 *)((long)&(newCurve->fields).m_CurveMin + 4) = curve.fields.m_CurveMin._4_4_;
      il2cpp_runtime_glue(&(newCurve->fields).m_CurveMin,0);
      return 0;
    }
    __this_00.fields.m_CurveMin._0_4_ = in_stack_ffffffffffffffc0;
    __this_00.fields.m_Mode = (int)in_stack_ffffffffffffffb8;
    __this_00.fields.m_CurveMultiplier = (float)(int)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
    __this_00.fields.m_CurveMin._4_4_ = scale;
    __this_00.fields.m_CurveMax._0_4_ = in_stack_ffffffffffffffc8;
    __this_00.fields.m_CurveMax._4_4_ = in_stack_ffffffffffffffcc;
    __this_00.fields.m_ConstantMin = (float)in_stack_ffffffffffffffd0;
    __this_00.fields.m_ConstantMax = in_stack_ffffffffffffffd4;
    valueStart = UnityEngine_ParticleSystem_MinMaxCurve__get_constant
                           (__this_00,(MethodInfo *)&curve);
    __this_01.fields.m_CurveMin._0_4_ = valueStart;
    __this_01.fields.m_Mode = (int)in_stack_ffffffffffffffb8;
    __this_01.fields.m_CurveMultiplier = (float)(int)((ulong)in_stack_ffffffffffffffb8 >> 0x20);
    __this_01.fields.m_CurveMin._4_4_ = scale;
    __this_01.fields.m_CurveMax._0_4_ = in_stack_ffffffffffffffc8;
    __this_01.fields.m_CurveMax._4_4_ = in_stack_ffffffffffffffcc;
    __this_01.fields.m_ConstantMin = (float)in_stack_ffffffffffffffd0;
    __this_01.fields.m_ConstantMax = in_stack_ffffffffffffffd4;
    fVar2 = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(__this_01,(MethodInfo *)&curve);
  }
  method_00 = (MethodInfo *)
              UnityEngine_AnimationCurve__Linear(0.0,valueStart,1.0,fVar2,(MethodInfo *)0x0);
  iVar1 = 0;
  fVar2 = 0.0;
  uVar3 = 0;
  uVar4 = 0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor
            ((UnityEngine_ParticleSystem_MinMaxCurve_o)
             ZEXT1632(CONCAT412(scale,CONCAT48(valueStart,in_stack_ffffffffffffffb8))),scale,
             (UnityEngine_AnimationCurve_o *)&stack0xffffffffffffffc8,method_00);
  *(undefined4 *)&(newCurve->fields).m_CurveMax = 0;
  *(undefined4 *)((long)&(newCurve->fields).m_CurveMax + 4) = 0;
  (newCurve->fields).m_ConstantMin = 0.0;
  (newCurve->fields).m_ConstantMax = 0.0;
  (newCurve->fields).m_Mode = iVar1;
  (newCurve->fields).m_CurveMultiplier = fVar2;
  *(undefined4 *)&(newCurve->fields).m_CurveMin = uVar3;
  *(undefined4 *)((long)&(newCurve->fields).m_CurveMin + 4) = uVar4;
  il2cpp_runtime_glue(&(newCurve->fields).m_CurveMin,0);
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
}


// Utility.Util$$ScaleParticleStartSize
// il2cpp: void Utility_Util__ScaleParticleStartSize (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x417e8f0

void Utility_Util__ScaleParticleStartSize
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o curve;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  bool_conflict bVar1;
  UnityEngine_ParticleSystem_MainModule_o __this;
  UnityEngine_ParticleSystem_MainModule_Fields local_70;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_68;
  int32_t local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  UnityEngine_ParticleSystem_MinMaxCurve_o local_20;
  
  local_70 = main.fields.m_ParticleSystem;
  if (DAT_05704b65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b65 = '\x01';
  }
  local_68.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
  local_68.m_ConstantMin = 0.0;
  local_68.m_ConstantMax = 0.0;
  local_68.m_Mode = 0;
  local_68.m_CurveMultiplier = 0.0;
  local_68.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
  __this.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)&local_70;
  UnityEngine_ParticleSystem_MainModule__get_startSize(&local_20,__this,(MethodInfo *)0x0);
  local_38 = local_20.fields.m_CurveMax._0_4_;
  uStack_34 = local_20.fields.m_CurveMax._4_4_;
  fStack_30 = local_20.fields.m_ConstantMin;
  fStack_2c = local_20.fields.m_ConstantMax;
  local_48 = local_20.fields.m_Mode;
  fStack_44 = local_20.fields.m_CurveMultiplier;
  uStack_40 = local_20.fields.m_CurveMin._0_4_;
  uStack_3c = local_20.fields.m_CurveMin._4_4_;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  curve.fields.m_CurveMultiplier = fStack_44;
  curve.fields.m_Mode = local_48;
  curve.fields.m_CurveMin._4_4_ = uStack_3c;
  curve.fields.m_CurveMin._0_4_ = uStack_40;
  curve.fields.m_CurveMax._4_4_ = uStack_34;
  curve.fields.m_CurveMax._0_4_ = local_38;
  curve.fields.m_ConstantMax = fStack_2c;
  curve.fields.m_ConstantMin = fStack_30;
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    (curve,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_68,scale,
                     (MethodInfo *)__this.fields.m_ParticleSystem);
  if ((char)bVar1 != '\0') {
    value.fields.m_CurveMin = local_68.m_CurveMin;
    value.fields.m_Mode = local_68.m_Mode;
    value.fields.m_CurveMultiplier = local_68.m_CurveMultiplier;
    value.fields.m_CurveMax = local_68.m_CurveMax;
    value.fields.m_ConstantMin = local_68.m_ConstantMin;
    value.fields.m_ConstantMax = local_68.m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSize
              ((UnityEngine_ParticleSystem_MainModule_o)&local_70,value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_ParticleSystem_MainModule__set_startSizeMultiplier
            ((UnityEngine_ParticleSystem_MainModule_o)&local_70,scale,(MethodInfo *)0x0);
  return;
}


// Utility.Util$$ScaleParticleStartSpeed
// il2cpp: void Utility_Util__ScaleParticleStartSpeed (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x417e9e0

void Utility_Util__ScaleParticleStartSpeed
               (UnityEngine_ParticleSystem_MainModule_o main,float scale,MethodInfo *method)

{
  UnityEngine_ParticleSystem_MinMaxCurve_o curve;
  UnityEngine_ParticleSystem_MinMaxCurve_o value;
  bool_conflict bVar1;
  UnityEngine_ParticleSystem_MainModule_o __this;
  UnityEngine_ParticleSystem_MainModule_Fields local_70;
  UnityEngine_ParticleSystem_MinMaxCurve_Fields local_68;
  int32_t local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  UnityEngine_ParticleSystem_MinMaxCurve_o local_20;
  
  local_70 = main.fields.m_ParticleSystem;
  if (DAT_05704b66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b66 = '\x01';
  }
  local_68.m_CurveMax = (UnityEngine_AnimationCurve_o *)0x0;
  local_68.m_ConstantMin = 0.0;
  local_68.m_ConstantMax = 0.0;
  local_68.m_Mode = 0;
  local_68.m_CurveMultiplier = 0.0;
  local_68.m_CurveMin = (UnityEngine_AnimationCurve_o *)0x0;
  __this.fields.m_ParticleSystem = (UnityEngine_ParticleSystem_MainModule_Fields)&local_70;
  UnityEngine_ParticleSystem_MainModule__get_startSpeed(&local_20,__this,(MethodInfo *)0x0);
  local_38 = local_20.fields.m_CurveMax._0_4_;
  uStack_34 = local_20.fields.m_CurveMax._4_4_;
  fStack_30 = local_20.fields.m_ConstantMin;
  fStack_2c = local_20.fields.m_ConstantMax;
  local_48 = local_20.fields.m_Mode;
  fStack_44 = local_20.fields.m_CurveMultiplier;
  uStack_40 = local_20.fields.m_CurveMin._0_4_;
  uStack_3c = local_20.fields.m_CurveMin._4_4_;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  curve.fields.m_CurveMultiplier = fStack_44;
  curve.fields.m_Mode = local_48;
  curve.fields.m_CurveMin._4_4_ = uStack_3c;
  curve.fields.m_CurveMin._0_4_ = uStack_40;
  curve.fields.m_CurveMax._4_4_ = uStack_34;
  curve.fields.m_CurveMax._0_4_ = local_38;
  curve.fields.m_ConstantMax = fStack_2c;
  curve.fields.m_ConstantMin = fStack_30;
  bVar1 = Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
                    (curve,(UnityEngine_ParticleSystem_MinMaxCurve_o *)&local_68,scale,
                     (MethodInfo *)__this.fields.m_ParticleSystem);
  if ((char)bVar1 != '\0') {
    value.fields.m_CurveMin = local_68.m_CurveMin;
    value.fields.m_Mode = local_68.m_Mode;
    value.fields.m_CurveMultiplier = local_68.m_CurveMultiplier;
    value.fields.m_CurveMax = local_68.m_CurveMax;
    value.fields.m_ConstantMin = local_68.m_ConstantMin;
    value.fields.m_ConstantMax = local_68.m_ConstantMax;
    UnityEngine_ParticleSystem_MainModule__set_startSpeed
              ((UnityEngine_ParticleSystem_MainModule_o)&local_70,value,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_ParticleSystem_MainModule__set_startSpeedMultiplier
            ((UnityEngine_ParticleSystem_MainModule_o)&local_70,scale,(MethodInfo *)0x0);
  return;
}


// Utility.Util$$IsValidResourcePath
// il2cpp: bool Utility_Util__IsValidResourcePath (System_String_o* path, const MethodInfo* method);
// 0x417ead0

bool_conflict Utility_Util__IsValidResourcePath(System_String_o *path,MethodInfo *method)

{
  uint uVar1;
  System_String_o *fileName;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  MethodInfo *method_00;
  
  if (DAT_05704b67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704b67 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return 0;
  }
  if (path != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x2f;
    pSVar3 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      uVar4 = 0;
      uVar1 = (uint)pSVar3->max_length;
      if (0 < (int)uVar1) {
        do {
          if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fileName = pSVar3->m_Items[uVar4];
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar2 = Utility_Util__IsValidFileName(fileName,method_00);
          uVar4 = uVar4 + 1;
          if ((char)bVar2 == '\0') {
            return 0;
          }
          uVar1 = (uint)pSVar3->max_length;
        } while ((long)uVar4 < (long)(int)uVar1);
      }
      return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Util$$.cctor
// il2cpp: void Utility_Util___cctor (const MethodInfo* method);
// 0x417eba0

void Utility_Util___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_T__o *__this;
  long lVar5;
  float in_XMM1_Da;
  System_Collections_Generic_KeyValuePair_float__object__o __this_00;
  System_Collections_Generic_KeyValuePair_float__object__o __this_01;
  System_Collections_Generic_KeyValuePair_float__object__o __this_02;
  System_Collections_Generic_KeyValuePair_float__object__o item;
  System_Collections_Generic_KeyValuePair_float__object__o item_00;
  System_Collections_Generic_KeyValuePair_float__object__o item_01;
  Il2CppObject local_48;
  Il2CppObject local_38;
  Il2CppObject local_28;
  
  if (DAT_05704b68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Single_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_Single_System_Strin);
    il2cpp_init_method_metadata(&TypeInfo_List_KeyValuePair_float__string);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"avgTitan");
    il2cpp_init_method_metadata(&"maxTitan");
    il2cpp_init_method_metadata(&"smallTitan");
    DAT_05704b68 = '\x01';
  }
  __this = (System_Collections_Generic_List_T__o *)il2cpp_runtime_glue(TypeInfo_List_KeyValuePair_float__string);
  System_Collections_Generic_List<KeyValuePair<float__object>>___ctor(__this,MethodInfo_List_1_KeyValuePair_2_System_Single_System_Strin);
  local_28.klass = (Il2CppClass *)0x0;
  local_28.monitor = (Il2CppObject *)0x0;
  __this_00.fields.value = &local_28;
  __this_00.fields._0_8_ = 0x3f800000;
  System_Collections_Generic_KeyValuePair<float__object>___ctor
            (__this_00,in_XMM1_Da,"smallTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
  lVar4 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      lVar5 = (long)(int)uVar2;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = local_28.klass._0_4_;
        pSVar3->m_Items[lVar5 * 2 + 1] = local_28.monitor;
        il2cpp_runtime_glue(pSVar3->m_Items + lVar5 * 2 + 1,0);
      }
      else {
        item.fields.value = local_28.monitor;
        item.fields._0_8_ = (ulong)local_28.klass & 0xffffffff;
        System_Collections_Generic_List<KeyValuePair<float__object>>__AddWithResize
                  (__this,item,
                   *(MethodInfo_34AC750 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      local_38.klass = (Il2CppClass *)0x0;
      local_38.monitor = (Il2CppObject *)0x0;
      __this_01.fields.value = &local_38;
      __this_01.fields._0_8_ = 0x40000000;
      System_Collections_Generic_KeyValuePair<float__object>___ctor
                (__this_01,in_XMM1_Da,"avgTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        lVar5 = (long)(int)uVar2;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = local_38.klass._0_4_;
          pSVar3->m_Items[lVar5 * 2 + 1] = local_38.monitor;
          il2cpp_runtime_glue(pSVar3->m_Items + lVar5 * 2 + 1,0);
        }
        else {
          item_00.fields.value = local_38.monitor;
          item_00.fields._0_8_ = (ulong)local_38.klass & 0xffffffff;
          System_Collections_Generic_List<KeyValuePair<float__object>>__AddWithResize
                    (__this,item_00,
                     *(MethodInfo_34AC750 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        local_48.klass = (Il2CppClass *)0x0;
        local_48.monitor = (Il2CppObject *)0x0;
        __this_02.fields.value = &local_48;
        __this_02.fields._0_8_ = 0x40400000;
        System_Collections_Generic_KeyValuePair<float__object>___ctor
                  (__this_02,in_XMM1_Da,"maxTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          lVar5 = (long)(int)uVar2;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = local_48.klass._0_4_;
            pSVar3->m_Items[lVar5 * 2 + 1] = local_48.monitor;
            il2cpp_runtime_glue(pSVar3->m_Items + lVar5 * 2 + 1,0);
          }
          else {
            item_01.fields.value = local_48.monitor;
            item_01.fields._0_8_ = (ulong)local_48.klass & 0xffffffff;
            System_Collections_Generic_List<KeyValuePair<float__object>>__AddWithResize
                      (__this,item_01,
                       *(MethodInfo_34AC750 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_Util + 0xb8) = __this;
          il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Util + 0xb8),__this);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


