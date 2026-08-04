// Type: Utility.Util
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Util.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Util.cs
// --------------------------------

// Utility.Util.<>c$$.cctor
// il2cpp: void Utility_Util___c___cctor (const MethodInfo* method);
// 0x4496e10

void Utility_Util___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae935 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae935 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Utility.Util.<>c$$.ctor
// il2cpp: void Utility_Util___c___ctor (Utility_Util___c_o* __this, const MethodInfo* method);
// 0x4496e80

void Utility_Util___c___ctor(Utility_Util___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c$$<PascalToSentence>b__7_0
// il2cpp: System_String_o* Utility_Util___c___PascalToSentence_b__7_0 (Utility_Util___c_o* __this, System_Text_RegularExpressions_Match_o* m, const MethodInfo* method);
// 0x4496e90

System_String_o *
Utility_Util___c___PascalToSentence_b__7_0
          (Utility_Util___c_o *__this,System_Text_RegularExpressions_Match_o *m,MethodInfo *method)

{
  int iVar1;
  uint16_t c;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppObject *arg0;
  Il2CppObject *arg1;
  undefined4 extraout_var;
  undefined7 uVar5;
  System_Nullable_int__o SVar4;
  System_Text_RegularExpressions_Match_o *exists;
  MethodInfo *name;
  MethodInfo *pMVar6;
  uint16_t local_1c;
  uint16_t local_1a;
  
  exists = m;
  if (g_data_057ae936 == '\0') {
    il2cpp_runtime_helper_023445d0(&"{0} {1}");
    g_data_057ae936 = '\x01';
  }
  if (m != (System_Text_RegularExpressions_Match_o *)0x0) {
    exists = (System_Text_RegularExpressions_Match_o *)0x0;
    pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                       ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      local_1a = System_String__get_Chars(pSVar3,0,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8);
      exists = (System_Text_RegularExpressions_Match_o *)0x0;
      pSVar3 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)m,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        c = System_String__get_Chars(pSVar3,1,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        local_1c = System_Char__ToLower_3c18bd0(c,(MethodInfo *)0x0);
        arg1 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bf8,&local_1c);
        pSVar3 = System_String__Format_3af78e0("{0} {1}",arg0,arg1,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae937 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae937 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  uVar5 = (undefined7)(CONCAT44(extraout_var,bVar2) >> 8);
  pSVar3 = (System_String_o *)CONCAT71(uVar5,1);
  if ((char)bVar2 != '\0') {
    if (exists == (System_Text_RegularExpressions_Match_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pMVar6 = name;
      if (g_data_057ae938 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
        g_data_057ae938 = '\x01';
        iVar1 = *(int *)(TypeInfo_Util + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Util + 0xe4);
      }
      if (iVar1 != 0) {
        SVar4 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar6);
        return (System_String_o *)SVar4.fields;
      }
      il2cpp_runtime_helper_02337ed0();
      SVar4 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar6);
      return (System_String_o *)SVar4.fields;
    }
    if (*(char *)&(exists->fields)._matchcount == '\0') {
      return (System_String_o *)0x0;
    }
    pSVar3 = (System_String_o *)
             CONCAT71(uVar5,*(char *)((long)&exists[5].fields._Text_k__BackingField + 2) == '\0');
  }
  return pSVar3;
}


// Utility.Util.<>c$$<RemoveNullOrDeadShifters>b__13_0
// il2cpp: bool Utility_Util___c___RemoveNullOrDeadShifters_b__13_0 (Utility_Util___c_o* __this, Characters_BaseShifter_o* e, const MethodInfo* method);
// 0x4496f80

bool_conflict
Utility_Util___c___RemoveNullOrDeadShifters_b__13_0
          (Utility_Util___c_o *__this,Characters_BaseShifter_o *e,MethodInfo *method)

{
  int iVar1;
  uint3 uVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  System_Nullable_int__o SVar5;
  MethodInfo *name;
  MethodInfo *pMVar6;
  
  if (g_data_057ae937 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae937 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  name = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  uVar2 = (uint3)((uint)bVar3 >> 8);
  bVar4 = (bool_conflict)CONCAT71((uint7)uVar2,1);
  if ((char)bVar3 != '\0') {
    if (e == (Characters_BaseShifter_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pMVar6 = name;
      if (g_data_057ae938 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
        g_data_057ae938 = '\x01';
        iVar1 = *(int *)(TypeInfo_Util + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_Util + 0xe4);
      }
      if (iVar1 != 0) {
        SVar5 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar6);
        return SVar5.fields.hasValue;
      }
      il2cpp_runtime_helper_02337ed0();
      SVar5 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar6);
      return SVar5.fields.hasValue;
    }
    if (*(char *)&(e->fields).FeedVictimName == '\0') {
      return 0;
    }
    bVar4 = CONCAT31(uVar2,*(char *)((long)&(e->fields)._previousCoreLocalPosition.fields.y + 2) == '\0');
  }
  return bVar4;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_0
// il2cpp: System_Nullable_int__o Utility_Util___c___GetAllTitanAgentIds_b__41_0 (Utility_Util___c_o* __this, System_Collections_Generic_KeyValuePair_float__string__o titanSize, const MethodInfo* method);
// 0x4496ff0

System_Nullable_int__o
Utility_Util___c___GetAllTitanAgentIds_b__41_0
          (Utility_Util___c_o *__this,System_Collections_Generic_KeyValuePair_float__string__o titanSize,
          MethodInfo *method)

{
  int iVar1;
  System_Nullable_int__o SVar2;
  MethodInfo *name;
  MethodInfo *pMVar3;
  
  name = (MethodInfo *)titanSize.fields.value;
  pMVar3 = name;
  if (g_data_057ae938 == '\0') {
    il2cpp_runtime_helper_023445d0(titanSize.fields._0_8_,&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae938 = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
    return (System_Nullable_int__o)SVar2.fields;
  }
  il2cpp_runtime_helper_02337ed0();
  SVar2 = Utility_Util__GetNavMeshAgentID((System_String_o *)name,pMVar3);
  return (System_Nullable_int__o)SVar2.fields;
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_1
// il2cpp: bool Utility_Util___c___GetAllTitanAgentIds_b__41_1 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x4497060

bool_conflict
Utility_Util___c___GetAllTitanAgentIds_b__41_1
          (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  undefined4 in_EAX;
  
  if (g_data_057ae939 == '\0') {
    in_EAX = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    g_data_057ae939 = '\x01';
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)agentId.fields.hasValue != '\0');
}


// Utility.Util.<>c$$<GetAllTitanAgentIds>b__41_2
// il2cpp: int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2 (Utility_Util___c_o* __this, System_Nullable_int__o agentId, const MethodInfo* method);
// 0x4497090

int32_t Utility_Util___c___GetAllTitanAgentIds_b__41_2
                  (Utility_Util___c_o *__this,System_Nullable_int__o agentId,MethodInfo *method)

{
  int32_t iVar1;
  System_Nullable_int__Fields SStack_8;
  
  SStack_8 = agentId.fields;
  if (g_data_057ae93a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae93a = '\x01';
  }
  iVar1 = System_Nullable_int___get_Value((System_Nullable_int__o)&SStack_8,MethodInfo_Int32_get_Value);
  return iVar1;
}


// Utility.Util.<>c__10<object>$$.cctor
// il2cpp: void Utility_Util___c__10_object____cctor (const MethodInfo_279EED0* method);
// 0x289eed0

void Utility_Util___c__10_object____cctor(MethodInfo_279EED0 *method)

{
  Utility_Util___c__10_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__10_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__10_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  il2cpp_runtime_helper_022b4080(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__10<object>$$.ctor
// il2cpp: void Utility_Util___c__10_object____ctor (Utility_Util___c__10_T__o* __this, const MethodInfo_279EFB0* method);
// 0x289efb0

void Utility_Util___c__10_object____ctor(Utility_Util___c__10_T__o *__this,MethodInfo_279EFB0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__10<object>$$<RemoveNull>b__10_0
// il2cpp: bool Utility_Util___c__10_object____RemoveNull_b__10_0 (Utility_Util___c__10_T__o* __this, Il2CppObject* e, const MethodInfo_279EFC0* method);
// 0x289efc0

bool_conflict
Utility_Util___c__10_object____RemoveNull_b__10_0
          (Utility_Util___c__10_T__o *__this,Il2CppObject *e,MethodInfo_279EFC0 *method)

{
  uint uVar1;
  
  if (g_data_057a6ae9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6ae9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// Utility.Util.<>c__11<object>$$.cctor
// il2cpp: void Utility_Util___c__11_object____cctor (const MethodInfo_279F010* method);
// 0x289f010

void Utility_Util___c__11_object____cctor(MethodInfo_279F010 *method)

{
  Utility_Util___c__11_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__11_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__11_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  il2cpp_runtime_helper_022b4080(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__11<object>$$.ctor
// il2cpp: void Utility_Util___c__11_object____ctor (Utility_Util___c__11_T__o* __this, const MethodInfo_279F0F0* method);
// 0x289f0f0

void Utility_Util___c__11_object____ctor(Utility_Util___c__11_T__o *__this,MethodInfo_279F0F0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__11<object>$$<RemoveNullOrDead>b__11_0
// il2cpp: bool Utility_Util___c__11_object____RemoveNullOrDead_b__11_0 (Utility_Util___c__11_T__o* __this, Il2CppObject* e, const MethodInfo_279F100* method);
// 0x289f100

bool_conflict
Utility_Util___c__11_object____RemoveNullOrDead_b__11_0
          (Utility_Util___c__11_T__o *__this,Il2CppObject *e,MethodInfo_279F100 *method)

{
  uint3 uVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar5;
  
  if (g_data_057a6aea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a6aea = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = e;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)e,(MethodInfo *)0x0);
  uVar1 = (uint3)((uint)bVar2 >> 8);
  bVar3 = (bool_conflict)CONCAT71((uint7)uVar1,1);
  if ((char)bVar2 != '\0') {
    if (e == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pIVar4 = pIVar5[2].klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      pIVar4 = pIVar4->rgctx_data->klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar4);
      if ((((pIVar5[2].klass)->_2).field_0x6d & 1) == 0) {
        il2cpp_runtime_helper_023009c0();
      }
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      pIVar4 = pIVar5[2].klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      pIVar4 = pIVar4->rgctx_data[2].klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      *(Il2CppObject **)pIVar4->static_fields = __this_00;
      pIVar4 = pIVar5[2].klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      pIVar4 = pIVar4->rgctx_data[2].klass;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      bVar3 = il2cpp_runtime_helper_022b4080(pIVar4->static_fields,__this_00);
      return bVar3;
    }
    bVar3 = CONCAT31(uVar1,*(char *)&e[6].monitor != '\0');
  }
  return bVar3;
}


// Utility.Util.<>c__12<object>$$.cctor
// il2cpp: void Utility_Util___c__12_object____cctor (const MethodInfo_279F160* method);
// 0x289f160

void Utility_Util___c__12_object____cctor(MethodInfo_279F160 *method)

{
  Utility_Util___c__12_T__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  il2cpp_runtime_helper_022b4080(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__12<object>$$.ctor
// il2cpp: void Utility_Util___c__12_object____ctor (Utility_Util___c__12_T__o* __this, const MethodInfo_279F240* method);
// 0x289f240

void Utility_Util___c__12_object____ctor(Utility_Util___c__12_T__o *__this,MethodInfo_279F240 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__12<object>$$<RemoveNullOrDeadDetections>b__12_0
// il2cpp: bool Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0 (Utility_Util___c__12_T__o* __this, Il2CppObject* e, const MethodInfo_279F250* method);
// 0x289f250

bool_conflict
Utility_Util___c__12_object____RemoveNullOrDeadDetections_b__12_0
          (Utility_Util___c__12_T__o *__this,Il2CppObject *e,MethodInfo_279F250 *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  Utility_Util___c__12_T__c *pUVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  
  if (e != (Il2CppObject *)0x0) {
    vtableDispatch = e->klass->vtable[4].methodPtr;
    bVar1 = (*vtableDispatch)(e,e->klass->vtable[4].method,method,vtableDispatch);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = __this[2].klass;
  if (((pUVar2->_2).field_0x6d & 1) == 0) {
    pUVar2 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar2);
  }
  pIVar3 = pUVar2->rgctx_data->_0_Utility_Util___c__12_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar3);
  if ((((__this[2].klass)->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  pUVar2 = __this[2].klass;
  if (((pUVar2->_2).field_0x6d & 1) == 0) {
    pUVar2 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar2);
  }
  pIVar3 = pUVar2->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
  }
  *(Il2CppObject **)pIVar3->static_fields = __this_00;
  pUVar2 = __this[2].klass;
  if (((pUVar2->_2).field_0x6d & 1) == 0) {
    pUVar2 = (Utility_Util___c__12_T__c *)il2cpp_runtime_helper_023009c0(pUVar2);
  }
  pIVar3 = pUVar2->rgctx_data->_2_Utility_Util___c__12_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
  }
  bVar1 = il2cpp_runtime_helper_022b4080(pIVar3->static_fields,__this_00);
  return bVar1;
}


// Utility.Util.<>c__33<object, object>$$.cctor
// il2cpp: void Utility_Util___c__33_object__object____cctor (const MethodInfo_27A0FB0* method);
// 0x28a0fb0

void Utility_Util___c__33_object__object____cctor(MethodInfo_27A0FB0 *method)

{
  Utility_Util___c__33_TKey__TValue__c *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this;
  
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_0_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pIVar2);
  if (((method->klass->_2).field_0x6d & 1) == 0) {
    il2cpp_runtime_helper_023009c0();
  }
  System_Object___ctor(__this,(MethodInfo *)0x0);
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  *(Il2CppObject **)pIVar2->static_fields = __this;
  pUVar1 = method->klass;
  if (((pUVar1->_2).field_0x6d & 1) == 0) {
    pUVar1 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar1);
  }
  pIVar2 = pUVar1->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  il2cpp_runtime_helper_022b4080(pIVar2->static_fields,__this);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor (const MethodInfo_27A10C0* method);
// 0x28a10c0

void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____cctor
               (MethodInfo_27A10C0 *method)

{
  ushort uVar1;
  Il2CppMethodPointer pIVar2;
  Utility_Util___c__33_TKey__TValue__c *pUVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  Utility_Util___c__33_TKey__TValue__c *pUVar6;
  
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_0_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  uVar5 = il2cpp_runtime_helper_023052d0(pIVar4);
  pUVar3 = method->klass;
  uVar1 = *(ushort *)&(pUVar3->_2).field_0x6d;
  pUVar6 = pUVar3;
  if ((uVar1 & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0();
    uVar1 = *(ushort *)&(method->klass->_2).field_0x6d;
    pUVar6 = method->klass;
  }
  pIVar2 = pUVar3->rgctx_data->_1_Utility_Util___c__33_TKey__TValue___ctor->methodPointer;
  if ((uVar1 & 1) == 0) {
    pUVar6 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0();
  }
  (*pIVar2)(uVar5,pUVar6->rgctx_data->_1_Utility_Util___c__33_TKey__TValue___ctor);
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
  }
  *(undefined8 *)pIVar4->static_fields = uVar5;
  pUVar3 = method->klass;
  if (((pUVar3->_2).field_0x6d & 1) == 0) {
    pUVar3 = (Utility_Util___c__33_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pUVar3);
  }
  pIVar4 = pUVar3->rgctx_data->_2_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
  }
  il2cpp_runtime_helper_022b4080(pIVar4->static_fields,uVar5);
  return;
}


// Utility.Util.<>c__33<object, object>$$.ctor
// il2cpp: void Utility_Util___c__33_object__object____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_27A1090* method);
// 0x28a1090

void Utility_Util___c__33_object__object____ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_27A1090 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Utility_Util___c__33_TKey__TValue__o* __this, const MethodInfo_27A11D0* method);
// 0x28a11d0

void Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (Utility_Util___c__33_TKey__TValue__o *__this,MethodInfo_27A11D0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_0
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_27A10A0* method);
// 0x28a10a0

Il2CppObject *
Utility_Util___c__33_object__object____PaginateDictionary_b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_27A10A0 *method)

{
  return c.fields.key;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_0
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_27A11E0* method);
// 0x28a11e0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_0
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_27A11E0 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x28a122c;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x28a123a;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<>c__33<object, object>$$<PaginateDictionary>b__33_1
// il2cpp: Il2CppObject* Utility_Util___c__33_object__object____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_27A10B0* method);
// 0x28a10b0

Il2CppObject *
Utility_Util___c__33_object__object____PaginateDictionary_b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_27A10B0 *method)

{
  return c.fields.value;
}


// Utility.Util.<>c__33<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<PaginateDictionary>b__33_1
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1 (Utility_Util___c__33_TKey__TValue__o* __this, System_Collections_Generic_KeyValuePair_TKey__TValue__o c, const MethodInfo_27A1250* method);
// 0x28a1250

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util___c__33___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____PaginateDictionary_b__33_1
          (Utility_Util___c__33_TKey__TValue__o *__this,
          System_Collections_Generic_KeyValuePair_TKey__TValue__o c,MethodInfo_27A1250 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x28a129c;
  (*pIVar4)(pIVar3,pMVar2,c.fields.key,&local_28,__src);
  *(undefined8 *)((long)&uStack_30 + lVar5) = 0x28a12aa;
  UVar6.klass = memcpy(c.fields.value,__src,__n);
  UVar6.monitor = extraout_RDX;
  return UVar6;
}


// Utility.Util.<WaitForFrames>d__17$$.ctor
// il2cpp: void Utility_Util__WaitForFrames_d__17___ctor (Utility_Util__WaitForFrames_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4494e70

void Utility_Util__WaitForFrames_d__17___ctor
               (Utility_Util__WaitForFrames_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<WaitForFrames>d__17$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x44970d0

void Utility_Util__WaitForFrames_d__17__System_IDisposable_Dispose
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<WaitForFrames>d__17$$MoveNext
// il2cpp: bool Utility_Util__WaitForFrames_d__17__MoveNext (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x44970e0

bool_conflict
Utility_Util__WaitForFrames_d__17__MoveNext(Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  undefined8 uVar2;
  
  if (g_data_057ae93b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    g_data_057ae93b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
label_04497143:
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields).__2__current = __this_00;
      uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto label_04497143;
  }
  return 0;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x4497180

Il2CppObject *
Utility_Util__WaitForFrames_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x4497190

void Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_Reset
               (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Utility.Util.<WaitForFrames>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current (Utility_Util__WaitForFrames_d__17_o* __this, const MethodInfo* method);
// 0x44971d0

Il2CppObject *
Utility_Util__WaitForFrames_d__17__System_Collections_IEnumerator_get_Current
          (Utility_Util__WaitForFrames_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$.ctor
// il2cpp: void Utility_Util__YieldForFrames_d__18___ctor (Utility_Util__YieldForFrames_d__18_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4494ef0

void Utility_Util__YieldForFrames_d__18___ctor
               (Utility_Util__YieldForFrames_d__18_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.Util.<YieldForFrames>d__18$$System.IDisposable.Dispose
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x44971e0

void Utility_Util__YieldForFrames_d__18__System_IDisposable_Dispose
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return;
}


// Utility.Util.<YieldForFrames>d__18$$MoveNext
// il2cpp: bool Utility_Util__YieldForFrames_d__18__MoveNext (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x44971f0

bool_conflict
Utility_Util__YieldForFrames_d__18__MoveNext(Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar1 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar1;
    if (iVar1 < (__this->fields).frames) {
label_0449722e:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    if (0 < (__this->fields).frames) goto label_0449722e;
  }
  return 0;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x4497250

Il2CppObject *
Utility_Util__YieldForFrames_d__18__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x4497260

void Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_Reset
               (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Utility.Util.<YieldForFrames>d__18$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current (Utility_Util__YieldForFrames_d__18_o* __this, const MethodInfo* method);
// 0x44972a0

Il2CppObject *
Utility_Util__YieldForFrames_d__18__System_Collections_IEnumerator_get_Current
          (Utility_Util__YieldForFrames_d__18_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.Util$$SignedAngle
// il2cpp: float Utility_Util__SignedAngle (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, UnityEngine_Vector3_o axis, const MethodInfo* method);
// 0x4494050

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
  if (g_data_057ac31a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057ac31a = '\x01';
  }
  fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6;
  if (*(int *)((long)&TypeInfo_Math[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
    }
    dVar1 = acos((double)(float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 | (uint)fVar9 & -(uint)(-1.0 <= fVar3)),
                 method_00);
    fVar9 = (float)dVar1 * 57.29578;
  }
  local_28 = axis.fields.x;
  fStack_24 = axis.fields.y;
  return fVar9 * *(float *)(&g_data_00d1d580 +
                           (ulong)(0.0 <= local_28 * (fVar8 * fVar4 - fVar5 * fVar7) +
                                          fStack_24 * (fVar6 * fVar5 - fVar2 * fVar8) +
                                          axis.fields.z * (fVar7 * fVar2 - fVar6 * fVar4)) * 4);
}


// Utility.Util$$IsVectorBetween
// il2cpp: bool Utility_Util__IsVectorBetween (UnityEngine_Vector3_o v, UnityEngine_Vector3_o start, UnityEngine_Vector3_o end, const MethodInfo* method);
// 0x44942a0

bool_conflict
Utility_Util__IsVectorBetween
          (UnityEngine_Vector3_o v,UnityEngine_Vector3_o start,UnityEngine_Vector3_o end,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = v.fields.z;
  fVar4 = v.fields.x;
  if (((fVar4 < start.fields.x) || (uVar1 = 1, end.fields.x < fVar4)) && (uVar1 = 0, end.fields.x <= fVar4)) {
    uVar1 = (uint)(fVar4 <= start.fields.x);
  }
  fVar4 = v.fields.y;
  if (((fVar4 < start.fields.y) || (uVar2 = 1, end.fields.y < fVar4)) && (uVar2 = 0, end.fields.y <= fVar4)) {
    uVar2 = (uint)(fVar4 <= start.fields.y);
  }
  if (((fVar5 < start.fields.z) || (uVar3 = 1, end.fields.z < fVar5)) && (uVar3 = 0, end.fields.z <= fVar5)) {
    uVar3 = (uint)(fVar5 <= start.fields.z);
  }
  return uVar1 & uVar2 & uVar3;
}


// Utility.Util$$LinearMap
// il2cpp: float Utility_Util__LinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x4494310

float Utility_Util__LinearMap(float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  return ((x - inMin) * (outMax - outMin)) / (inMax - inMin) + outMin;
}


// Utility.Util$$ClampedLinearMap
// il2cpp: float Utility_Util__ClampedLinearMap (float x, float inMin, float inMax, float outMin, float outMax, const MethodInfo* method);
// 0x4494330

float Utility_Util__ClampedLinearMap
                (float x,float inMin,float inMax,float outMin,float outMax,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = ((outMax - outMin) * (x - inMin)) / (inMax - inMin) + outMin;
  if (fVar1 <= outMax) {
    outMax = fVar1;
  }
  return (float)(~-(uint)(outMin <= fVar1) & (uint)outMin | (uint)outMax & -(uint)(outMin <= fVar1));
}


// Utility.Util$$FindCharacterByViewId
// il2cpp: Characters_BaseCharacter_o* Utility_Util__FindCharacterByViewId (int32_t viewId, const MethodInfo* method);
// 0x4494370

Characters_BaseCharacter_o * Utility_Util__FindCharacterByViewId(int32_t viewId,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  Photon_Pun_PhotonMessageInfo_o __this;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *x;
  Characters_BaseCharacter_o *pCVar4;
  Photon_Realtime_Player_array *pPVar5;
  Photon_Pun_PhotonView_o *unaff_RBX;
  long lVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  
  if (g_data_057ae91d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae91d = '\x01';
  }
  if (-1 < viewId) {
    x = Photon_Pun_PhotonView__Find(viewId,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pPVar7 = x;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (x != (Photon_Pun_PhotonView_o *)0x0) {
        pCVar4 = (Characters_BaseCharacter_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        return pCVar4;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae91e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        g_data_057ae91e = '\x01';
        iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pCVar4 = (Characters_BaseCharacter_o *)0x0;
        pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      }
      else {
        pCVar4 = (Characters_BaseCharacter_o *)0x0;
        pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
      }
      if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
        lVar6 = 0;
        while( true ) {
          if ((int)pPVar5->max_length <= (int)lVar6) {
            return (Characters_BaseCharacter_o *)0x0;
          }
          pCVar2 = (Characters_BaseCharacter_o *)pPVar5->m_Items[lVar6];
          if (pCVar2 == (Characters_BaseCharacter_o *)0x0) break;
          lVar6 = lVar6 + 1;
          if (*(int *)&(pCVar2->fields).m_CancellationTokenSource == (int)pPVar7) {
            return pCVar2;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pCVar4->klass = (Characters_BaseCharacter_c *)0x0;
      pCVar4->monitor = (void *)0x0;
      (pCVar4->fields).m_CachedPtr = 0;
      __this.fields.Sender = (Photon_Realtime_Player_o *)x;
      __this.fields._0_8_ = (ulong)pPVar7 & 0xffffffff;
      __this.fields.photonView = unaff_RBX;
      Photon_Pun_PhotonMessageInfo___ctor
                (__this,(Photon_Realtime_Player_o *)pCVar4,0,(Photon_Pun_PhotonView_o *)0x0,(MethodInfo *)0x0)
      ;
      return pCVar4;
    }
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// Utility.Util$$FindPlayerById
// il2cpp: Photon_Realtime_Player_o* Utility_Util__FindPlayerById (int32_t id, const MethodInfo* method);
// 0x4494400

Photon_Realtime_Player_o * Utility_Util__FindPlayerById(int32_t id,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Pun_PhotonMessageInfo_o __this;
  Photon_Realtime_Player_array *pPVar3;
  undefined8 unaff_RBX;
  long lVar4;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *unaff_retaddr;
  
  __this.fields._4_4_ = 0;
  __this.fields.timeInt = id;
  if (g_data_057ae91e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057ae91e = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    player = (Photon_Realtime_Player_o *)0x0;
    pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  }
  else {
    player = (Photon_Realtime_Player_o *)0x0;
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
  il2cpp_runtime_helper_022b2c90();
  player->klass = (Photon_Realtime_Player_c *)0x0;
  player->monitor = (void *)0x0;
  (player->fields)._RoomReference_k__BackingField = (Photon_Realtime_Room_o *)0x0;
  __this.fields.Sender = (Photon_Realtime_Player_o *)unaff_RBX;
  __this.fields.photonView = unaff_retaddr;
  Photon_Pun_PhotonMessageInfo___ctor(__this,player,0,(Photon_Pun_PhotonView_o *)0x0,(MethodInfo *)0x0);
  return player;
}


// Utility.Util$$CreateLocalPhotonInfo
// il2cpp: Photon_Pun_PhotonMessageInfo_o Utility_Util__CreateLocalPhotonInfo (const MethodInfo* method);
// 0x44944a0

Photon_Pun_PhotonMessageInfo_o *
Utility_Util__CreateLocalPhotonInfo(Photon_Pun_PhotonMessageInfo_o *__return_storage_ptr__,MethodInfo *method)

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
            (__this,(Photon_Realtime_Player_o *)__return_storage_ptr__,0,(Photon_Pun_PhotonView_o *)0x0,
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Utility.Util$$PascalToSentence
// il2cpp: System_String_o* Utility_Util__PascalToSentence (System_String_o* str, const MethodInfo* method);
// 0x44944d0

System_String_o * Utility_Util__PascalToSentence(System_String_o *str,MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  System_Exception_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo_362C220 *pMVar7;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_Text_RegularExpressions_Regex_o *__this;
  System_String_o *pSVar8;
  System_ArgumentNullException_o *pSVar9;
  System_ArgumentNullException_o *pSVar10;
  System_ArgumentNullException_o *pSVar11;
  System_ArgumentOutOfRangeException_o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  System_ArgumentNullException_o *__this_02;
  Il2CppObject *item;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  System_TimeSpan_Fields method_00;
  System_TimeSpan_Fields SVar15;
  MethodInfo *pMVar16;
  System_ArgumentNullException_o *extraout_RDX;
  System_ArgumentNullException_o *extraout_RDX_00;
  System_ArgumentNullException_o *extraout_RDX_01;
  System_ArgumentNullException_o **ppSVar17;
  undefined1 *puVar18;
  uint uVar19;
  System_ArgumentNullException_o *pSVar21;
  System_ArgumentOutOfRangeException_o *pSVar22;
  System_Text_RegularExpressions_Regex_o *pSVar23;
  System_ArgumentNullException_o *pSVar24;
  System_ArgumentNullException_o *pSVar25;
  undefined *puVar26;
  System_TimeSpan_Fields matchTimeout;
  ulong uVar27;
  MethodInfo *in_R9;
  uint uVar28;
  ulong uVar29;
  undefined1 auVar30 [16];
  System_ArgumentNullException_o *pSStack_78;
  undefined8 uStack_70;
  System_Text_RegularExpressions_Regex_o *pSStack_68;
  System_ArgumentNullException_o *pSStack_60;
  undefined8 *puStack_58;
  System_Text_RegularExpressions_MatchEvaluator_o *pSStack_50;
  System_String_o *pSStack_48;
  System_TimeSpan_Fields SStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  int32_t iVar20;
  
  if (g_data_057ae91f == '\0') {
    uStack_30 = 0x44944f1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MatchEvaluator);
    uStack_30 = 0x44944fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    uStack_30 = 0x4494509;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_PascalToSentence_b__7_0);
    uStack_30 = 0x4494515;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    uStack_30 = 0x4494521;
    il2cpp_runtime_helper_023445d0(&"[a-z][A-Z]");
    g_data_057ae91f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    uStack_30 = 0x4494541;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = "[a-z][A-Z]";
  evaluator = *(System_Text_RegularExpressions_MatchEvaluator_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      uStack_30 = 0x449459e;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_30 = 0x44945bb;
    evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MatchEvaluator);
    uStack_30 = 0x44945d5;
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Text_RegularExpressions_MatchEvaluator_o **)(lVar4 + 8) = evaluator;
    uStack_30 = 0x44945f0;
    il2cpp_runtime_helper_022b4080(lVar4 + 8,evaluator);
    iVar13 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  else {
    iVar13 = *(int *)(TypeInfo_Regex + 0xe4);
  }
  puStack_38 = &TypeInfo_Regex;
  if (iVar13 == 0) {
    uStack_30 = 0x4494577;
    puStack_38 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057b1009 == '\0') {
    SStack_40._ticks = 0x4a06b07;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex,pSVar10,evaluator,0);
    g_data_057b1009 = '\x01';
    if (*(int *)(TypeInfo_Regex + 0xe4) == 0) goto label_04a06b26;
label_04a06a95:
    SVar15._ticks = *(int64_t *)(*(long *)(TypeInfo_Regex + 0xb8) + 0x30);
  }
  else {
    if (*(int *)(TypeInfo_Regex + 0xe4) != 0) goto label_04a06a95;
label_04a06b26:
    SStack_40._ticks = 0x4a06b2b;
    il2cpp_runtime_helper_02337ed0();
    SVar15._ticks = *(int64_t *)(*(long *)(TypeInfo_Regex + 0xb8) + 0x30);
  }
  if (g_data_057b100a == '\0') {
    SStack_40._ticks = 0x4a06ab1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    g_data_057b100a = '\x01';
  }
  SStack_40._ticks = 0x4a06ac1;
  __this = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  matchTimeout._ticks = 1;
  SStack_40._ticks = 0x4a06ada;
  method_00._ticks = SVar15._ticks;
  pSVar11 = pSVar10;
  pSVar23 = __this;
  System_Text_RegularExpressions_Regex___ctor_4905e80
            (__this,(System_String_o *)pSVar10,0,(System_TimeSpan_o)SVar15._ticks,1,in_R9);
  if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
    pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906bf0
                       (__this,str,evaluator,(MethodInfo *)method_00._ticks);
    return pSVar8;
  }
  SStack_40._ticks = 0x4a06b51;
  auVar30 = il2cpp_runtime_helper_022b2c90();
  uStack_70 = auVar30._0_8_;
  puStack_58 = &TypeInfo_Regex;
  pSStack_60 = pSVar10;
  pSStack_68 = __this;
  pSStack_50 = evaluator;
  pSStack_48 = str;
  SStack_40._ticks = SVar15._ticks;
  if (g_data_057b100a == '\0') {
    pSStack_78 = (System_ArgumentNullException_o *)0x4a06b8f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    g_data_057b100a = '\x01';
  }
  pSStack_78 = (System_ArgumentNullException_o *)0x4a06ba5;
  pSVar9 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Regex);
  uVar27 = 1;
  pSStack_78 = (System_ArgumentNullException_o *)0x4a06bbf;
  SVar15._ticks = matchTimeout._ticks;
  pSVar10 = pSVar11;
  pSVar24 = pSVar9;
  System_Text_RegularExpressions_Regex___ctor_4905e80
            ((System_Text_RegularExpressions_Regex_o *)pSVar9,(System_String_o *)pSVar11,
             (int32_t)method_00._ticks,(System_TimeSpan_o)matchTimeout._ticks,1,in_R9);
  if (pSVar9 != (System_ArgumentNullException_o *)0x0) {
    pSVar8 = System_Text_RegularExpressions_Regex__Replace_4906bf0
                       ((System_Text_RegularExpressions_Regex_o *)pSVar9,(System_String_o *)pSVar23,
                        auVar30._8_8_,(MethodInfo *)SVar15._ticks);
    return pSVar8;
  }
  pSStack_78 = (System_ArgumentNullException_o *)0x4a06be2;
  il2cpp_runtime_helper_022b2c90();
  ppSVar17 = &pSStack_78;
  pSStack_78 = pSVar11;
  if (pSVar10 == (System_ArgumentNullException_o *)0x0) {
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    pSVar11 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"input");
    System_ArgumentNullException___ctor_3c0ad60(pSVar11,pSVar8,(MethodInfo *)0x0);
    pSVar10 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_Replace);
    pSVar24 = pSVar11;
    il2cpp_runtime_helper_022b2b10();
    pSVar9 = extraout_RDX_00;
  }
  else {
    uVar27 = 0;
    if (((ulong)(pSVar24->fields)._data & 0x40) != 0) {
      uVar27 = (ulong)*(uint *)&(pSVar10->fields)._className;
    }
    SVar15._ticks = (int64_t)&g_data_ffffffff;
    pSVar9 = extraout_RDX;
    ppSVar17 = (System_ArgumentNullException_o **)&uStack_70;
  }
  *(undefined8 *)((long)ppSVar17 + -8) = 0;
  *(System_Text_RegularExpressions_Regex_o **)((long)ppSVar17 + -0x10) = pSVar23;
  *(System_Text_RegularExpressions_MatchEvaluator_o **)((long)ppSVar17 + -0x18) = auVar30._8_8_;
  ((System_TimeSpan_Fields *)((long)ppSVar17 + -0x20))->_ticks = matchTimeout._ticks;
  puVar18 = (undefined1 *)((long)ppSVar17 + -0x28);
  *(System_ArgumentNullException_o **)((long)ppSVar17 + -0x28) = pSVar11;
  uVar29 = uVar27 & 0xffffffff;
  pMVar16 = (MethodInfo *)(SVar15._ticks & 0xffffffff);
  if (g_data_057b100b == '\0') {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06c8c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Regex);
    g_data_057b100b = '\x01';
  }
  if (pSVar10 == (System_ArgumentNullException_o *)0x0) {
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06cd5;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06cdd;
    pSVar11 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06cec;
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"input");
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06cf9;
    System_ArgumentNullException___ctor_3c0ad60(pSVar11,pSVar8,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06d05;
    __this_02 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_Replace);
    *(code **)((long)ppSVar17 + -0x30) = System_Text_RegularExpressions_Regex__Replace_4906d10;
    pSVar25 = pSVar11;
    il2cpp_runtime_helper_022b2b10();
    pSVar10 = extraout_RDX_01;
    pSVar21 = pSVar24;
  }
  else {
    if (*(int *)(TypeInfo_Regex + 0xe4) == 0) {
      *(undefined8 *)((long)ppSVar17 + -0x30) = 0x4a06cb0;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_ArgumentNullException_o **)((long)ppSVar17 + -0x28);
    SVar15._ticks = (int64_t)pMVar16;
    puVar18 = (undefined1 *)ppSVar17;
    pSVar21 = *(System_ArgumentNullException_o **)((long)ppSVar17 + -8);
    __this_02 = pSVar24;
    pSVar25 = pSVar9;
    uVar27 = uVar29;
    pSVar9 = *(System_ArgumentNullException_o **)((long)ppSVar17 + -0x20);
    uVar29 = *(ulong *)((long)ppSVar17 + -0x18);
    pMVar16 = *(MethodInfo **)((long)ppSVar17 + -0x10);
  }
  *(System_ArgumentNullException_o **)(puVar18 + -8) = pSVar21;
  *(MethodInfo **)(puVar18 + -0x10) = pMVar16;
  *(ulong *)(puVar18 + -0x18) = uVar29;
  *(ulong *)(puVar18 + -0x20) = method_00._ticks & 0xffffffff;
  *(System_ArgumentNullException_o **)(puVar18 + -0x28) = pSVar9;
  *(System_ArgumentNullException_o **)(puVar18 + -0x30) = pSVar11;
  uVar29 = SVar15._ticks & 0xffffffff;
  pMVar16 = (MethodInfo *)SVar15._ticks;
  pSVar11 = __this_02;
  if (g_data_057b100c == '\0') {
    *(undefined8 *)(puVar18 + -0x50) = 0x4a06d42;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a06d4e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a06d5a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a06d66;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a06d72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057b100c = '\x01';
  }
  iVar13 = (int)pSVar11;
  if (pSVar25 == (System_ArgumentNullException_o *)0x0) {
    *(undefined8 *)(puVar18 + -0x50) = 0x4a0710e;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentNullException);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a07116;
    __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar12);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a07125;
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"evaluator");
    *(undefined8 *)(puVar18 + -0x50) = 0x4a07132;
    System_ArgumentNullException___ctor_3c0ad60
              ((System_ArgumentNullException_o *)__this_00,pSVar8,(MethodInfo *)0x0);
label_04a07176:
    *(undefined8 *)(puVar18 + -0x50) = 0x4a07182;
    iVar13 = il2cpp_runtime_helper_023445d0(&MethodInfo_String_Replace);
    *(undefined8 *)(puVar18 + -0x50) = 0x4a0718d;
    il2cpp_runtime_helper_022b2b10(__this_00);
label_04a0718d:
    if (*(int *)&(__this_00->fields)._className == 0) {
      pSVar5 = (pSVar25->fields)._innerException;
      pSVar8 = (pSVar25->fields)._stackTraceString;
      pSVar6 = (pSVar25->fields)._message;
      *(undefined8 *)(puVar18 + -0x50) = 0x4a071a5;
      (*(code *)pSVar6)(pSVar8,__this_00,pSVar5);
      iVar13 = (int)__this_00;
    }
  }
  else {
    if ((int)SVar15._ticks < -1) {
      *(undefined8 *)(puVar18 + -0x50) = 0x4a07140;
      uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      *(undefined8 *)(puVar18 + -0x50) = 0x4a07148;
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar12);
      *(undefined8 *)(puVar18 + -0x50) = 0x4a07157;
      __this_02 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023445d0(&"count");
      puVar26 = &"Count cannot be less than -1.";
label_04a07161:
      *(undefined8 *)(puVar18 + -0x50) = 0x4a07166;
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar26);
      *(undefined8 *)(puVar18 + -0x50) = 0x4a07176;
      System_ArgumentOutOfRangeException___ctor_3c0eb50
                (__this_00,(System_String_o *)__this_02,pSVar8,(MethodInfo *)0x0);
      goto label_04a07176;
    }
    iVar14 = (int)uVar27;
    if (iVar14 < 0) {
label_04a070d3:
      *(undefined8 *)(puVar18 + -0x50) = 0x4a070df;
      uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentOutOfRangeException);
      *(undefined8 *)(puVar18 + -0x50) = 0x4a070e7;
      __this_00 = (System_ArgumentOutOfRangeException_o *)il2cpp_runtime_helper_023052d0(uVar12);
      *(undefined8 *)(puVar18 + -0x50) = 0x4a070f6;
      __this_02 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023445d0(&"startat");
      puVar26 = &"Start index cannot be less than 0 or greater than input length.";
      goto label_04a07161;
    }
    if (pSVar10 == (System_ArgumentNullException_o *)0x0) goto label_04a071a5;
    if (*(int *)&(pSVar10->fields)._className < iVar14) goto label_04a070d3;
    if ((int)SVar15._ticks == 0) {
      return (System_String_o *)pSVar10;
    }
    if (__this_02 != (System_ArgumentNullException_o *)0x0) {
      *(undefined8 *)(puVar18 + -0x50) = 0x4a06dc6;
      pSVar11 = pSVar10;
      __this_00 = (System_ArgumentOutOfRangeException_o *)
                  System_Text_RegularExpressions_Regex__Match_4906480
                            ((System_Text_RegularExpressions_Regex_o *)__this_02,(System_String_o *)pSVar10,
                             iVar14,pMVar16);
      iVar13 = (int)pSVar11;
      if (__this_00 == (System_ArgumentOutOfRangeException_o *)0x0) goto label_04a071a5;
      if (*(int *)&(__this_00->fields)._innerException == 0) {
        return (System_String_o *)pSVar10;
      }
      iVar13 = 0;
      *(undefined8 *)(puVar18 + -0x50) = 0x4a06de8;
      __this_01 = System_Text_StringBuilderCache__Acquire(0x10,(MethodInfo *)0x0);
      if (((ulong)(__this_02->fields)._data & 0x40) != 0) {
        *(undefined8 *)(puVar18 + -0x50) = 0x4a06eb6;
        __this_02 = (System_ArgumentNullException_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        *(undefined8 *)(puVar18 + -0x50) = 0x4a06ecb;
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
        *(System_ArgumentNullException_o **)(puVar18 + -0x38) = pSVar10;
        iVar14 = *(int *)&(pSVar10->fields)._className;
        do {
          iVar2 = *(int *)&(__this_00->fields)._className;
          iVar3 = *(int32_t *)((long)&(__this_00->fields)._className + 4);
          iVar13 = iVar3 + iVar2;
          if (iVar13 != iVar14) {
            *(undefined8 *)(puVar18 + -0x50) = 0x4a06f15;
            pSVar8 = System_String__Substring_3af8da0
                               (*(System_String_o **)(puVar18 + -0x38),iVar13,(iVar14 - iVar2) - iVar3,
                                (MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            if (__this_02 == (System_ArgumentNullException_o *)0x0) goto label_04a071a5;
            piVar1 = (int *)((long)&(__this_02->fields)._message + 4);
            *piVar1 = *piVar1 + 1;
            pSVar6 = (__this_02->fields)._className;
            if (pSVar6 == (System_String_o *)0x0) goto label_04a071a5;
            uVar19 = *(uint *)&(__this_02->fields)._message;
            if (uVar19 < *(uint *)&pSVar6[1].klass) {
              *(uint *)&(__this_02->fields)._message = uVar19 + 1;
              (&pSVar6[1].monitor)[(int)uVar19] = pSVar8;
              *(undefined8 *)(puVar18 + -0x50) = 0x4a06f5d;
              il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor + (int)uVar19,pSVar8);
            }
            else {
              pMVar7 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
              *(undefined8 *)(puVar18 + -0x50) = 0x4a06f7a;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar8,pMVar7)
              ;
            }
            iVar2 = *(int32_t *)&(__this_00->fields)._className;
          }
          iVar14 = iVar2;
          pSVar5 = (pSVar25->fields)._innerException;
          pSVar8 = (pSVar25->fields)._stackTraceString;
          pSVar6 = (pSVar25->fields)._message;
          *(undefined8 *)(puVar18 + -0x50) = 0x4a06f90;
          pSVar22 = __this_00;
          item = (Il2CppObject *)(*(code *)pSVar6)(pSVar8,__this_00,pSVar5);
          lVar4 = MethodInfo_Void_Add;
          iVar13 = (int)pSVar22;
          if (__this_02 == (System_ArgumentNullException_o *)0x0) goto label_04a071a5;
          piVar1 = (int *)((long)&(__this_02->fields)._message + 4);
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_02->fields)._className;
          if (pSVar8 == (System_String_o *)0x0) goto label_04a071a5;
          uVar19 = *(uint *)&(__this_02->fields)._message;
          if (uVar19 < *(uint *)&pSVar8[1].klass) {
            *(uint *)&(__this_02->fields)._message = uVar19 + 1;
            (&pSVar8[1].monitor)[(int)uVar19] = item;
            *(undefined8 *)(puVar18 + -0x50) = 0x4a06fd8;
            il2cpp_runtime_helper_022b4080(&pSVar8[1].monitor + (int)uVar19);
            iVar13 = (int)item;
          }
          else {
            pMVar7 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
            *(undefined8 *)(puVar18 + -0x50) = 0x4a0703a;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,item,pMVar7);
            iVar13 = (int)item;
          }
          if ((int)uVar29 == 1) break;
          uVar29 = (ulong)((int)uVar29 - 1);
          pSVar23 = (System_Text_RegularExpressions_Regex_o *)(__this_00->fields)._remoteStackTraceString;
          if (pSVar23 != (System_Text_RegularExpressions_Regex_o *)0x0) {
            iVar2 = (__this_00->fields)._remoteStackIndex;
            iVar3 = *(int *)&(__this_00->fields)._dynamicMethods;
            pSVar8 = (__this_00->fields)._message;
            iVar20 = *(int32_t *)((long)&(__this_00->fields)._className + 4);
            *(int32_t *)(puVar18 + -0x48) = *(int32_t *)&(__this_00->fields).field_0x44;
            iVar13 = 0;
            *(undefined8 *)(puVar18 + -0x50) = 0x4a0700a;
            __this_00 = (System_ArgumentOutOfRangeException_o *)
                        System_Text_RegularExpressions_Regex__Run
                                  (pSVar23,0,iVar20,pSVar8,iVar2,iVar3 - iVar2,*(int32_t *)(puVar18 + -0x48),
                                   *(MethodInfo **)(puVar18 + -0x40));
            if (__this_00 == (System_ArgumentOutOfRangeException_o *)0x0) goto label_04a071a5;
          }
        } while (*(int *)&(__this_00->fields)._innerException != 0);
        if (0 < iVar14) {
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto label_04a071a5;
          *(undefined8 *)(puVar18 + -0x50) = 0x4a07063;
          System_Text_StringBuilder__Append_3b040c0
                    (__this_01,*(System_String_o **)(puVar18 + -0x38),0,iVar14,(MethodInfo *)0x0);
        }
        iVar14 = *(int *)&(__this_02->fields)._message;
        iVar13 = iVar14 + -1;
        if (iVar13 < 0) {
label_04a070bb:
          pSVar8 = System_Text_StringBuilderCache__GetStringAndRelease(__this_01,(MethodInfo *)0x0);
          return pSVar8;
        }
        if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
          do {
            iVar14 = iVar14 + -1;
            *(undefined8 *)(puVar18 + -0x50) = 0x4a07090;
            pSVar8 = (System_String_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,iVar14,MethodInfo_String_get_Item);
            *(undefined8 *)(puVar18 + -0x50) = 0x4a0709d;
            System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
          } while (0 < iVar14);
          goto label_04a070bb;
        }
        goto label_04a071aa;
      }
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        __this_02 = (System_ArgumentNullException_o *)0x0;
        iVar13 = *(int *)&(__this_00->fields)._className;
        while( true ) {
          iVar20 = (int32_t)__this_02;
          if (iVar13 != 0) {
            *(undefined8 *)(puVar18 + -0x50) = 0x4a06e31;
            System_Text_StringBuilder__Append_3b040c0
                      (__this_01,(System_String_o *)pSVar10,iVar20,iVar13,(MethodInfo *)0x0);
            iVar20 = *(int32_t *)&(__this_00->fields)._className;
          }
          uVar19 = iVar20 + *(int32_t *)((long)&(__this_00->fields)._className + 4);
          __this_02 = (System_ArgumentNullException_o *)(ulong)uVar19;
          pSVar5 = (pSVar25->fields)._innerException;
          pSVar8 = (pSVar25->fields)._stackTraceString;
          pSVar6 = (pSVar25->fields)._message;
          *(undefined8 *)(puVar18 + -0x50) = 0x4a06e49;
          pSVar8 = (System_String_o *)(*(code *)pSVar6)(pSVar8,__this_00,pSVar5);
          *(undefined8 *)(puVar18 + -0x50) = 0x4a06e56;
          System_Text_StringBuilder__Append_3b03f90(__this_01,pSVar8,(MethodInfo *)0x0);
          uVar28 = (int)uVar29 - 1;
          uVar29 = (ulong)uVar28;
          if (uVar28 == 0) break;
          pSVar23 = (System_Text_RegularExpressions_Regex_o *)(__this_00->fields)._remoteStackTraceString;
          if (pSVar23 != (System_Text_RegularExpressions_Regex_o *)0x0) {
            iVar14 = (__this_00->fields)._remoteStackIndex;
            iVar2 = *(int *)&(__this_00->fields)._dynamicMethods;
            pSVar8 = (__this_00->fields)._message;
            iVar20 = *(int32_t *)((long)&(__this_00->fields)._className + 4);
            *(int32_t *)(puVar18 + -0x48) = *(int32_t *)&(__this_00->fields).field_0x44;
            iVar13 = 0;
            *(undefined8 *)(puVar18 + -0x50) = 0x4a06e88;
            __this_00 = (System_ArgumentOutOfRangeException_o *)
                        System_Text_RegularExpressions_Regex__Run
                                  (pSVar23,0,iVar20,pSVar8,iVar14,iVar2 - iVar14,*(int32_t *)(puVar18 + -0x48)
                                   ,*(MethodInfo **)(puVar18 + -0x40));
            if (__this_00 == (System_ArgumentOutOfRangeException_o *)0x0) goto label_04a071a5;
          }
          if (*(int *)&(__this_00->fields)._innerException == 0) break;
          iVar13 = *(int *)&(__this_00->fields)._className - uVar19;
        }
        iVar13 = *(int *)&(pSVar10->fields)._className;
        iVar14 = iVar13 - uVar19;
        if (iVar14 != 0 && (int)uVar19 <= iVar13) {
          *(undefined8 *)(puVar18 + -0x50) = 0x4a070bb;
          System_Text_StringBuilder__Append_3b040c0
                    (__this_01,(System_String_o *)pSVar10,uVar19,iVar14,(MethodInfo *)0x0);
        }
        goto label_04a070bb;
      }
      goto label_04a0718d;
    }
  }
label_04a071a5:
  *(undefined8 *)(puVar18 + -0x50) = 0x4a071aa;
  il2cpp_runtime_helper_022b2c90();
label_04a071aa:
  *(undefined8 *)(puVar18 + -0x50) = 0x4a071bc;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)__this_02,iVar13,MethodInfo_String_get_Item);
  *(undefined8 *)(puVar18 + -0x50) = 0x4a071c1;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  uVar27 = CONCAT71((int7)((ulong)uVar12 >> 8),*(undefined1 *)&(__this_02->fields)._data) & 0xffffffffffffff40
  ;
  return (System_String_o *)CONCAT71((int7)(uVar27 >> 8),(byte)uVar27 >> 6);
}


// Utility.Util$$CreateDontDestroyObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateDontDestroyObj_object_ (const MethodInfo_264FD00* method);
// 0x274fd00

Il2CppObject * Utility_Util__CreateDontDestroyObj_object_(MethodInfo_264FD00 *method)

{
  System_RuntimeTypeHandle_o handle;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_Object_o *__this;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_00;
  System_RuntimeTypeHandle_Fields *pSVar6;
  System_Type_o *enumType;
  System_Array_o *pSVar7;
  void *__src;
  long lVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  ulong __n;
  undefined8 uStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  UnityEngine_GameObject_o *pUStack_68;
  UnityEngine_GameObject_o *pUStack_60;
  
  if (method->rgctx_data == (MethodInfo_264FD00_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Dont Destroy");
    if (method->rgctx_data == (MethodInfo_264FD00_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
    }
  }
  __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  pUVar9 = __this;
  UnityEngine_GameObject___ctor_4dfc3c0((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this,"Dont Destroy",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__DontDestroyOnLoad(__this,(MethodInfo *)0x0);
    pIVar5 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)__this,
                        (MethodInfo_255A020 *)method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar9[2].monitor == (void *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    if (pUVar9[2].monitor == (void *)0x0) {
      il2cpp_runtime_helper_02300a20(pUVar9);
    }
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  lVar8 = 0;
  pUVar10 = __this_00;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pIVar5 = UnityEngine_GameObject__AddComponent_object_(__this_00,*(MethodInfo_255A020 **)pUVar9[2].monitor)
    ;
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = *(System_RuntimeTypeHandle_Fields **)(lVar8 + 0x38);
  pUStack_68 = pUVar10;
  pUStack_60 = __this_00;
  if (pSVar6 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_80 = 0x274fe59;
    il2cpp_runtime_helper_02300a20(lVar8);
    pSVar6 = *(System_RuntimeTypeHandle_Fields **)(lVar8 + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar6[4].value + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&uStack_78 + lVar4);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar6->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274fe99;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274fea3;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274febb;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274fec5;
  pSVar7 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 8);
  *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274fed3;
  uStack_78 = (*pcVar1)(pSVar7);
  puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x18);
  uVar3 = *puVar2;
  pcVar1 = (code *)puVar2[2];
  pvStack_70 = __src;
  *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274fef3;
  (*pcVar1)(uVar3,puVar2,0,&uStack_78,__src);
  pUVar10 = pUStack_68;
  *(undefined8 *)((long)&uStack_80 + lVar4) = 0x274ff02;
  pIVar5 = memcpy(pUVar10,__src,__n);
  return pIVar5;
}


// Utility.Util$$CreateObj<object>
// il2cpp: Il2CppObject* Utility_Util__CreateObj_object_ (const MethodInfo_264FDC0* method);
// 0x274fdc0

Il2CppObject * Utility_Util__CreateObj_object_(MethodInfo_264FDC0 *method)

{
  System_RuntimeTypeHandle_o handle;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this;
  Il2CppObject *pIVar5;
  System_RuntimeTypeHandle_Fields *pSVar6;
  System_Type_o *enumType;
  System_Array_o *pSVar7;
  void *__src;
  long lVar8;
  UnityEngine_GameObject_o *pUVar9;
  ulong __n;
  undefined8 uStack_68;
  undefined8 local_60;
  void *local_58;
  UnityEngine_GameObject_o *local_50;
  UnityEngine_GameObject_o *local_48;
  
  if (method->rgctx_data == (MethodInfo_264FDC0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    if (method->rgctx_data == (MethodInfo_264FDC0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
    }
  }
  __this = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  lVar8 = 0;
  pUVar9 = __this;
  UnityEngine_GameObject___ctor_4dfc3c0(__this,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pIVar5 = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_255A020 *)
                               method->rgctx_data->_0_UnityEngine_GameObject_AddComponent_T_);
    return pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = *(System_RuntimeTypeHandle_Fields **)(lVar8 + 0x38);
  local_50 = pUVar9;
  local_48 = __this;
  if (pSVar6 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_68 = 0x274fe59;
    il2cpp_runtime_helper_02300a20(lVar8);
    pSVar6 = *(System_RuntimeTypeHandle_Fields **)(lVar8 + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar6[4].value + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&local_60 + lVar4);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar6->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274fe99;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274fea3;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274febb;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274fec5;
  pSVar7 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 8);
  *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274fed3;
  local_60 = (*pcVar1)(pSVar7);
  puVar2 = *(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x18);
  uVar3 = *puVar2;
  pcVar1 = (code *)puVar2[2];
  local_58 = __src;
  *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274fef3;
  (*pcVar1)(uVar3,puVar2,0,&local_60,__src);
  pUVar9 = local_50;
  *(undefined8 *)((long)&uStack_68 + lVar4) = 0x274ff02;
  pIVar5 = memcpy(pUVar9,__src,__n);
  return pIVar5;
}


// Utility.Util$$RemoveNull<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNull_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_26525E0* method);
// 0x27525e0

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNull_object_(System_Collections_Generic_HashSet_T__o *set,MethodInfo_26525E0 *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  System_Predicate_T__o *match;
  long lVar4;
  MethodInfo_26525E0_RGCTXs *pMVar5;
  
  if (method->rgctx_data == (MethodInfo_26525E0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)&(pIVar3->_2).field_0x1c;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0(pIVar3);
    match = *(System_Predicate_T__o **)(*(long *)(lVar4 + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) {
    while (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_02752794:
      lVar4 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar4 + 0xe4) == 0) {
label_027527a9:
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__10_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      else {
label_027526db:
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__10_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      if ((bVar1 & 1) == 0) {
        il2cpp_runtime_helper_023009c0(pIVar3);
        pMVar5 = method->rgctx_data;
      }
      pIVar3 = pMVar5->_2_System_Predicate_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
      System_Predicate_object____ctor();
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8) = match;
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      il2cpp_runtime_helper_022b4080((long)pIVar3->static_fields + 8,match);
    }
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_33E3910 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  pIVar3 = method->rgctx_data->_3_Utility_Util___c__10_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) goto label_02752794;
  if (*(int *)&(pIVar3->_2).field_0x1c == 0) goto label_027527a9;
  goto label_027526db;
}


// Utility.Util$$RemoveNullOrDead<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDead_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_26527D0* method);
// 0x27527d0

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDead_object_
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_26527D0 *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  System_Predicate_T__o *match;
  long lVar4;
  MethodInfo_26527D0_RGCTXs *pMVar5;
  
  if (method->rgctx_data == (MethodInfo_26527D0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)&(pIVar3->_2).field_0x1c;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0(pIVar3);
    match = *(System_Predicate_T__o **)(*(long *)(lVar4 + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) {
    while (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_02752984:
      lVar4 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar4 + 0xe4) == 0) {
label_02752999:
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__11_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      else {
label_027528cb:
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__11_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      if ((bVar1 & 1) == 0) {
        il2cpp_runtime_helper_023009c0(pIVar3);
        pMVar5 = method->rgctx_data;
      }
      pIVar3 = pMVar5->_2_System_Predicate_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
      System_Predicate_object____ctor();
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8) = match;
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      il2cpp_runtime_helper_022b4080((long)pIVar3->static_fields + 8,match);
    }
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_33E3910 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  pIVar3 = method->rgctx_data->_3_Utility_Util___c__11_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) goto label_02752984;
  if (*(int *)&(pIVar3->_2).field_0x1c == 0) goto label_02752999;
  goto label_027528cb;
}


// Utility.Util$$RemoveNullOrDeadDetections<object>
// il2cpp: System_Collections_Generic_HashSet_T__o* Utility_Util__RemoveNullOrDeadDetections_object_ (System_Collections_Generic_HashSet_T__o* set, const MethodInfo_26529C0* method);
// 0x27529c0

System_Collections_Generic_HashSet_T__o *
Utility_Util__RemoveNullOrDeadDetections_object_
          (System_Collections_Generic_HashSet_T__o *set,MethodInfo_26529C0 *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  System_Predicate_T__o *match;
  long lVar4;
  MethodInfo_26529C0_RGCTXs *pMVar5;
  
  if (method->rgctx_data == (MethodInfo_26529C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar4 + 0xe4);
  }
  else {
    iVar2 = *(int *)&(pIVar3->_2).field_0x1c;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  else {
    pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
    bVar1 = (pIVar3->_2).field_0x6d;
  }
  if ((bVar1 & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0(pIVar3);
    match = *(System_Predicate_T__o **)(*(long *)(lVar4 + 0xb8) + 8);
  }
  else {
    match = *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8);
  }
  if (match != (System_Predicate_T__o *)0x0) {
    while (set == (System_Collections_Generic_HashSet_T__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_02752b74:
      lVar4 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar4 + 0xe4) == 0) {
label_02752b89:
        il2cpp_runtime_helper_02337ed0();
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__12_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      else {
label_02752abb:
        pMVar5 = method->rgctx_data;
        pIVar3 = pMVar5->_3_Utility_Util___c__12_T_;
        bVar1 = (pIVar3->_2).field_0x6d;
      }
      if ((bVar1 & 1) == 0) {
        il2cpp_runtime_helper_023009c0(pIVar3);
        pMVar5 = method->rgctx_data;
      }
      pIVar3 = pMVar5->_2_System_Predicate_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
      System_Predicate_object____ctor();
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      *(System_Predicate_T__o **)((long)pIVar3->static_fields + 8) = match;
      pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
      if (((pIVar3->_2).field_0x6d & 1) == 0) {
        pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar3);
      }
      il2cpp_runtime_helper_022b4080((long)pIVar3->static_fields + 8,match);
    }
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,
               (MethodInfo_33E3910 *)method->rgctx_data->_6_System_Collections_Generic_HashSet_T__RemoveWhere)
    ;
    return set;
  }
  pIVar3 = method->rgctx_data->_3_Utility_Util___c__12_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) goto label_02752b74;
  if (*(int *)&(pIVar3->_2).field_0x1c == 0) goto label_02752b89;
  goto label_02752abb;
}


// Utility.Util$$RemoveNullOrDeadShifters
// il2cpp: System_Collections_Generic_HashSet_BaseShifter__o* Utility_Util__RemoveNullOrDeadShifters (System_Collections_Generic_HashSet_BaseShifter__o* set, const MethodInfo* method);
// 0x4494610

System_Collections_Generic_HashSet_BaseShifter__o *
Utility_Util__RemoveNullOrDeadShifters
          (System_Collections_Generic_HashSet_BaseShifter__o *set,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  System_String_Fields SVar4;
  System_Security_Cryptography_MD5_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  bool_conflict bVar7;
  int iVar8;
  System_Predicate_T__o *match;
  System_Security_Cryptography_MD5_o *__this;
  System_Text_Encoding_o *pSVar9;
  System_Byte_array *buffer;
  System_Byte_array *pSVar10;
  System_Text_StringBuilder_o *__this_00;
  ulong uVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_HashSet_BaseShifter__o *pSVar13;
  VirtualInvokeData *pVVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [12];
  
  if (g_data_057ae920 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveWhere);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_BaseShifter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RemoveNullOrDeadShifters_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae920 = '\x01';
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) != 0) goto label_0449463c;
label_044946cc:
    il2cpp_runtime_helper_02337ed0();
    match = *(System_Predicate_T__o **)((long)TypeInfo_c[7].fields + 0x10);
  }
  else {
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) goto label_044946cc;
label_0449463c:
    match = *(System_Predicate_T__o **)((long)TypeInfo_c[7].fields + 0x10);
  }
  pSVar12 = TypeInfo_c;
  if (match == (System_Predicate_T__o *)0x0) {
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_BaseShifter);
    System_Predicate_object____ctor();
    SVar4 = TypeInfo_c[7].fields;
    *(System_Predicate_T__o **)((long)SVar4 + 0x10) = match;
    pSVar12 = (System_String_o *)((long)SVar4 + 0x10);
    il2cpp_runtime_helper_022b4080(pSVar12,match);
  }
  if (set != (System_Collections_Generic_HashSet_BaseShifter__o *)0x0) {
    System_Collections_Generic_HashSet_object___RemoveWhere
              ((System_Collections_Generic_HashSet_object__o *)set,match,MethodInfo_Int32_RemoveWhere);
    return set;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae921 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"X2");
    g_data_057ae921 = '\x01';
  }
  bVar7 = System_String__op_Equality
                    (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return (System_Collections_Generic_HashSet_BaseShifter__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  pSVar9 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  pSVar10 = (System_Byte_array *)0x0;
  if (pSVar9 == (System_Text_Encoding_o *)0x0) {
label_04494952:
    il2cpp_runtime_helper_022b2c90();
label_04494957:
    il2cpp_runtime_helper_022b2c90();
label_0449495c:
    iVar8 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    buffer = (System_Byte_array *)
             (*(pSVar9->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar9,pSVar12,(pSVar9->klass->vtable)._18_GetBytes.method);
    if (__this == (System_Security_Cryptography_MD5_o *)0x0) goto label_04494957;
    pSVar10 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                        ((System_Security_Cryptography_HashAlgorithm_o *)__this,buffer,(MethodInfo *)0x0);
    __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (pSVar10 == (System_Byte_array *)0x0) goto label_0449495c;
    iVar8 = (int)pSVar10->max_length;
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      if (0 < iVar8) {
        uVar11 = pSVar10->max_length & 0xffffffff;
        uVar16 = 0;
        do {
          if (uVar11 <= uVar16) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04494952;
          }
          pSVar12 = System_Byte__ToString_3c178d0
                              ((char)uVar16 + (char)pSVar10 + ' ',"X2",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(__this_00,pSVar12,(MethodInfo *)0x0);
          uVar16 = uVar16 + 1;
          uVar3 = (uint)pSVar10->max_length;
          uVar11 = (ulong)uVar3;
        } while ((long)uVar16 < (long)(int)uVar3);
      }
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        pSVar13 = (System_Collections_Generic_HashSet_BaseShifter__o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        lVar18 = 0;
        if (__this == (System_Security_Cryptography_MD5_o *)0x0) goto label_04494936;
        goto label_044948ce;
      }
      goto label_04494982;
    }
  }
  if (0 < iVar8) {
    System_Byte__ToString_3c178d0((char)pSVar10 + ' ',"X2",(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
label_04494982:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar19 = il2cpp_runtime_helper_022fefe0();
    if (auVar19._8_4_ != 1) break;
    plVar15 = (long *)__cxa_begin_catch();
    lVar18 = *plVar15;
    __cxa_end_catch();
    pSVar13 = (System_Collections_Generic_HashSet_BaseShifter__o *)0x0;
    if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
label_044948ce:
      pSVar5 = __this->klass;
      uVar1._0_1_ = (pSVar5->_2).rank;
      uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar17) == TypeInfo_IDisposable) {
            pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar17);
            goto label_0449492d;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar17);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0449492d:
      (*pVVar14->methodPtr)(__this,pVVar14->method);
    }
label_04494936:
    if (lVar18 == 0) {
      return pSVar13;
    }
  }
  if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
    pSVar5 = __this->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar18) == TypeInfo_IDisposable) {
          pVVar14 = &(pSVar5->vtable)._0_Equals + *(int *)((long)&pIVar6->offset + lVar18);
          goto label_04494a9d;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar18);
    }
    pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_04494a9d:
    (*pVVar14->methodPtr)(__this,pVVar14->method);
  }
  _Unwind_Resume(auVar19._0_8_);
}


// Utility.Util$$CreateMD5
// il2cpp: System_String_o* Utility_Util__CreateMD5 (System_String_o* input, const MethodInfo* method);
// 0x4494760

System_String_o * Utility_Util__CreateMD5(System_String_o *input,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  System_Security_Cryptography_MD5_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool_conflict bVar6;
  int iVar7;
  System_Security_Cryptography_MD5_o *__this;
  System_Text_Encoding_o *pSVar8;
  System_Byte_array *buffer;
  System_Text_StringBuilder_o *__this_00;
  ulong uVar9;
  System_String_o *pSVar10;
  VirtualInvokeData *pVVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  System_Byte_array *unaff_R14;
  undefined1 auVar16 [12];
  
  if (g_data_057ae921 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    il2cpp_runtime_helper_023445d0(&"X2");
    g_data_057ae921 = '\x01';
  }
  bVar6 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  __this = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  pSVar8 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar8 == (System_Text_Encoding_o *)0x0) {
label_04494952:
    il2cpp_runtime_helper_022b2c90();
label_04494957:
    il2cpp_runtime_helper_022b2c90();
label_0449495c:
    iVar7 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    buffer = (System_Byte_array *)
             (*(pSVar8->klass->vtable)._18_GetBytes.methodPtr)
                       (pSVar8,input,(pSVar8->klass->vtable)._18_GetBytes.method);
    if (__this == (System_Security_Cryptography_MD5_o *)0x0) goto label_04494957;
    unaff_R14 = System_Security_Cryptography_HashAlgorithm__ComputeHash
                          ((System_Security_Cryptography_HashAlgorithm_o *)__this,buffer,(MethodInfo *)0x0);
    __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if (unaff_R14 == (System_Byte_array *)0x0) goto label_0449495c;
    iVar7 = (int)unaff_R14->max_length;
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      if (0 < iVar7) {
        uVar9 = unaff_R14->max_length & 0xffffffff;
        uVar13 = 0;
        do {
          if (uVar9 <= uVar13) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_04494952;
          }
          pSVar10 = System_Byte__ToString_3c178d0
                              ((char)uVar13 + (char)unaff_R14 + ' ',"X2",(MethodInfo *)0x0);
          System_Text_StringBuilder__Append_3b03f90(__this_00,pSVar10,(MethodInfo *)0x0);
          uVar13 = uVar13 + 1;
          uVar3 = (uint)unaff_R14->max_length;
          uVar9 = (ulong)uVar3;
        } while ((long)uVar13 < (long)(int)uVar3);
      }
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        pSVar10 = (System_String_o *)
                  (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        lVar15 = 0;
        if (__this == (System_Security_Cryptography_MD5_o *)0x0) goto label_04494936;
        goto label_044948ce;
      }
      goto label_04494982;
    }
  }
  if (0 < iVar7) {
    System_Byte__ToString_3c178d0((char)unaff_R14 + ' ',"X2",(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
label_04494982:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar16 = il2cpp_runtime_helper_022fefe0();
    if (auVar16._8_4_ != 1) break;
    plVar12 = (long *)__cxa_begin_catch();
    lVar15 = *plVar12;
    __cxa_end_catch();
    pSVar10 = (System_String_o *)0x0;
    if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
label_044948ce:
      pSVar4 = __this->klass;
      uVar1._0_1_ = (pSVar4->_2).rank;
      uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar14) == TypeInfo_IDisposable) {
            pVVar11 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar14);
            goto label_0449492d;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar14);
      }
      pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_0449492d:
      (*pVVar11->methodPtr)(__this,pVVar11->method);
    }
label_04494936:
    if (lVar15 == 0) {
      return pSVar10;
    }
  }
  if (__this != (System_Security_Cryptography_MD5_o *)0x0) {
    pSVar4 = __this->klass;
    uVar2._0_1_ = (pSVar4->_2).rank;
    uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar5 = (pSVar4->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar15) == TypeInfo_IDisposable) {
          pVVar11 = &(pSVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar15);
          goto label_04494a9d;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar15);
    }
    pVVar11 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(__this,TypeInfo_IDisposable,0);
label_04494a9d:
    (*pVVar11->methodPtr)(__this,pVVar11->method);
  }
  _Unwind_Resume(auVar16._0_8_);
}


// Utility.Util$$CreateSalt
// il2cpp: System_String_o* Utility_Util__CreateSalt (const MethodInfo* method);
// 0x4494ae0

System_String_o * Utility_Util__CreateSalt(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Security_Cryptography_RandomNumberGenerator_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Byte_array *inArray;
  System_Security_Cryptography_RandomNumberGenerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *pSVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  
  if (g_data_057ae922 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    g_data_057ae922 = '\x01';
  }
  inArray = (System_Byte_array *)il2cpp_runtime_helper_022b2a40();
  pSVar5 = System_Security_Cryptography_RandomNumberGenerator__Create((MethodInfo *)0x0);
  if (pSVar5 == (System_Security_Cryptography_RandomNumberGenerator_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    goto label_04494bfd;
  }
  (*(pSVar5->klass->vtable)._6_unknown.methodPtr)(pSVar5,inArray,(pSVar5->klass->vtable)._6_unknown.method);
  lVar10 = 0;
  do {
    pSVar3 = pSVar5->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar9) == TypeInfo_IDisposable) {
          pVVar6 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar9);
          goto label_04494bbd;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar9);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IDisposable,0);
label_04494bbd:
    (*pVVar6->methodPtr)(pSVar5);
    do {
      if (lVar10 == 0) {
        if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = System_Convert__ToBase64String(inArray,(MethodInfo *)0x0);
        return pSVar7;
      }
label_04494bfd:
      auVar11 = il2cpp_runtime_helper_022fefe0();
      if (auVar11._8_4_ != 1) {
        if (pSVar5 == (System_Security_Cryptography_RandomNumberGenerator_o *)0x0) goto label_04494c96;
        pSVar3 = pSVar5->klass;
        uVar2._0_1_ = (pSVar3->_2).rank;
        uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar2 == 0) goto label_04494c6f;
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar10 = 0;
        goto label_04494c60;
      }
      plVar8 = (long *)__cxa_begin_catch();
      lVar10 = *plVar8;
      __cxa_end_catch();
    } while (pSVar5 == (System_Security_Cryptography_RandomNumberGenerator_o *)0x0);
  } while( true );
  while (lVar10 = lVar10 + 0x10, (ulong)uVar2 << 4 != lVar10) {
label_04494c60:
    if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IDisposable) {
      pVVar6 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar10);
      goto label_04494c8d;
    }
  }
label_04494c6f:
  pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IDisposable,0);
label_04494c8d:
  (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
label_04494c96:
  _Unwind_Resume(auVar11._0_8_);
}


// Utility.Util$$CreatePBKDF2
// il2cpp: System_String_o* Utility_Util__CreatePBKDF2 (System_String_o* input, System_String_o* salt, const MethodInfo* method);
// 0x4494cd0

System_String_o * Utility_Util__CreatePBKDF2(System_String_o *input,System_String_o *salt,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Byte_array *pSVar2;
  System_Security_Cryptography_HashAlgorithmName_o hashAlgorithm;
  System_Security_Cryptography_Rfc2898DeriveBytes_o *__this;
  System_String_o *pSVar3;
  System_String_o *__this_00;
  System_String_o *extraout_RAX;
  int32_t iVar4;
  undefined4 uVar5;
  System_Security_Cryptography_Rfc2898DeriveBytes_o *pSVar6;
  
  if (g_data_057ae923 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Convert);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Rfc2898DeriveBytes);
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057ae923 = '\x01';
  }
  bVar1 = System_String__op_Equality
                    (input,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (*(int *)(TypeInfo_Convert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Convert__FromBase64String(salt,(MethodInfo *)0x0);
  hashAlgorithm = System_Security_Cryptography_HashAlgorithmName__get_SHA256((MethodInfo *)0x0);
  __this = (System_Security_Cryptography_Rfc2898DeriveBytes_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Rfc2898DeriveBytes);
  pSVar6 = __this;
  System_Security_Cryptography_Rfc2898DeriveBytes___ctor_3b23ea0
            (__this,input,pSVar2,200000,hashAlgorithm,(MethodInfo *)0x0);
  uVar5 = SUB84(pSVar6,0);
  if (__this != (System_Security_Cryptography_Rfc2898DeriveBytes_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(__this->klass->vtable)._5_GetBytes.methodPtr)
                       (__this,0x10,(__this->klass->vtable)._5_GetBytes.method);
    pSVar3 = System_BitConverter__ToString_3c15020(pSVar2,(MethodInfo *)0x0);
    uVar5 = SUB84(pSVar2,0);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Replace_3af9030
                         (pSVar3,"-",(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                          (MethodInfo *)0x0);
      return pSVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae924 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForFrames_d__17);
    g_data_057ae924 = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForFrames_d__17);
  iVar4 = 0;
  pSVar3 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._stringLength = 0;
  if (__this_00 != (System_String_o *)0x0) {
    *(undefined4 *)&__this_00[1].monitor = uVar5;
    return __this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  (pSVar3->fields)._stringLength = iVar4;
  return extraout_RAX;
}


// Utility.Util$$WaitForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__WaitForFrames (int32_t frames, const MethodInfo* method);
// 0x4494e10

System_Collections_IEnumerator_o * Utility_Util__WaitForFrames(int32_t frames,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae924 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForFrames_d__17);
    g_data_057ae924 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForFrames_d__17);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[2].klass = frames;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.Util$$YieldForFrames
// il2cpp: System_Collections_IEnumerator_o* Utility_Util__YieldForFrames (int32_t frames, const MethodInfo* method);
// 0x4494e90

System_Collections_IEnumerator_o * Utility_Util__YieldForFrames(int32_t frames,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae925 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YieldForFrames_d__18);
    g_data_057ae925 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_YieldForFrames_d__18);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[2].klass = frames;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.Util$$EnumToStringArray<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray_Int32Enum_ (const MethodInfo_2650890* method);
// 0x2750890

System_String_array * Utility_Util__EnumToStringArray_Int32Enum_(MethodInfo_2650890 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_2650890_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_2650890_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20();
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArray<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_ (const MethodInfo_2650900* method);
// 0x2750900

System_String_array *
Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_(MethodInfo_2650900 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo_2650900_RGCTXs *pMVar1;
  System_Type_o *enumType;
  System_String_array *pSVar2;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_2650900_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20();
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
  return pSVar2;
}


// Utility.Util$$EnumToStringArrayExceptNone<Int32Enum>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone_Int32Enum_ (const MethodInfo_2650970* method);
// 0x2750970

System_String_array * Utility_Util__EnumToStringArrayExceptNone_Int32Enum_(MethodInfo_2650970 *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  MethodInfo *pMVar4;
  Il2CppRGCTXData handle;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  _union_249689 _Var8;
  _union_249689 _Var9;
  System_String_array *pSVar10;
  Il2CppRGCTXData *pIVar11;
  System_Object_array *pSVar12;
  Il2CppClass *pIVar13;
  Il2CppArrayBounds *pIVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  ulong *puVar17;
  System_Collections_Generic_List_object__o *extraout_RDX;
  int iVar18;
  uint uVar19;
  _union_249689 a;
  ulong uVar20;
  undefined8 *puVar21;
  _union_249689 __this_03;
  _union_249689 unaff_R12;
  undefined8 *unaff_R13;
  int32_t index;
  System_String_array *unaff_R15;
  undefined1 auVar22 [12];
  undefined8 in_stack_ffffffffffffff18;
  System_Collections_Generic_List_object__o *pSVar23;
  System_Collections_Generic_List_Enumerator_T__c *pSVar24;
  System_Collections_Generic_List_Enumerator_T__o SStack_b8;
  _union_249689 _Stack_a0;
  _union_249689 _Stack_98;
  undefined8 *puStack_90;
  _union_249689 _Stack_88;
  System_String_array *pSStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  _union_249689 _Stack_68;
  _union_249689 _Stack_60;
  undefined8 *puStack_58;
  _union_249689 _Stack_50;
  System_String_array *pSStack_48;
  undefined8 *puStack_40;
  
  if (method->rgctx_data == (MethodInfo_2650970_RGCTXs *)0x0) {
    puStack_40 = (undefined8 *)0x2750991;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_40 = (undefined8 *)0x275099d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_40 = (undefined8 *)0x27509a9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_40 = (undefined8 *)0x27509b5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_40 = (undefined8 *)0x27509c1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    puStack_40 = (undefined8 *)0x27509cd;
    il2cpp_runtime_helper_023445d0(&"None");
    if (method->rgctx_data == (MethodInfo_2650970_RGCTXs *)0x0) {
      puStack_40 = (undefined8 *)0x27509dc;
      il2cpp_runtime_helper_02300a20(method);
    }
  }
  puStack_40 = (undefined8 *)0x27509eb;
  _Var8.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_40 = (undefined8 *)0x2750a00;
  System_Collections_Generic_List_object____ctor(_Var8.genericMethod,MethodInfo_List_1_System_String.genericMethod);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x2750a18;
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = method->rgctx_data->_0_Utility_Util_EnumToStringArray_T_;
  pIVar11 = (pMVar4->field7_0x38).rgctx_data;
  if (pIVar11 == (Il2CppRGCTXData *)0x0) {
    puStack_40 = (undefined8 *)0x2750a30;
    il2cpp_runtime_helper_02300a20(pMVar4);
    pIVar11 = (pMVar4->field7_0x38).rgctx_data;
  }
  handle = *pIVar11;
  puVar21 = &g_data_057b9b70;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x2750a53;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_40 = (undefined8 *)0x2750a5d;
  _Var9.genericMethod = System_Type__GetTypeFromHandle(handle.rgctxDataDummy,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x2750a75;
    il2cpp_runtime_helper_02337ed0();
  }
  puStack_40 = (undefined8 *)0x2750a7f;
  a.genericMethod = _Var9.genericMethod;
  pSVar10 = System_Enum__GetNames(_Var9.genericMethod,(MethodInfo *)0x0);
  if (pSVar10 != (System_String_array *)0x0) {
    uVar20 = pSVar10->max_length;
    pIVar11 = (Il2CppRGCTXData *)(uVar20 & 0xffffffff);
    unaff_R15 = pSVar10;
    if (_Var8.genericMethod == (Il2CppRGCTXData *)0x0) {
      if (0 < (int)uVar20) {
        _Var9.genericMethod = (Il2CppRGCTXData *)0x0;
        puVar21 = &"None";
        do {
          if (pIVar11 <= _Var9.genericMethod) goto label_02750bb0;
          a = (_union_249689)((_union_249689 *)(pSVar10->m_Items + (long)_Var9))->genericMethod;
          puStack_40 = (undefined8 *)0x2750b77;
          bVar7 = System_String__op_Inequality(a.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') goto label_02750bb5;
          _Var9.genericMethod = _Var9.genericMethod + 1;
          uVar19 = (uint)pSVar10->max_length;
          pIVar11 = (Il2CppRGCTXData *)(ulong)uVar19;
        } while ((long)_Var9.genericMethod < (long)(int)uVar19);
      }
    }
    else if (0 < (int)uVar20) {
      _Var9.genericMethod = (Il2CppRGCTXData *)0x0;
      unaff_R13 = &"None";
      puVar21 = &MethodInfo_Void_Add;
      if ((uVar20 & 0xffffffff) != 0) {
        do {
          unaff_R12 = (_union_249689)((_union_249689 *)(pSVar10->m_Items + (long)_Var9))->genericMethod;
          puStack_40 = (undefined8 *)0x2750b0c;
          a = unaff_R12;
          bVar7 = System_String__op_Inequality
                            (unaff_R12.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if ((char)bVar7 != '\0') {
            *(int *)((long)_Var8.genericMethod + 0x1c) = *(int *)((long)_Var8.genericMethod + 0x1c) + 1;
            pMVar4 = ((Il2CppRGCTXData *)((long)_Var8.genericMethod + 0x10))->method;
            if (pMVar4 == (MethodInfo *)0x0) goto label_02750bb5;
            uVar19 = *(uint *)((long)_Var8.genericMethod + 0x18);
            if (uVar19 < *(uint *)&pMVar4->name) {
              *(uint *)((long)_Var8.genericMethod + 0x18) = uVar19 + 1;
              a.genericMethod = &pMVar4->klass + (int)uVar19;
              ((_union_249689 *)(&pMVar4->klass + (int)uVar19))->genericMethod = (void *)unaff_R12;
              puStack_40 = (undefined8 *)0x2750b4b;
              il2cpp_runtime_helper_022b4080(a.genericMethod,unaff_R12.genericMethod);
            }
            else {
              puStack_40 = (undefined8 *)0x2750ada;
              a.genericMethod = _Var8.genericMethod;
              System_Collections_Generic_List_object___AddWithResize
                        (_Var8.genericMethod,unaff_R12.genericMethod,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          _Var9.genericMethod = _Var9.genericMethod + 1;
          uVar19 = (uint)pSVar10->max_length;
          if ((long)(int)uVar19 <= (long)_Var9.genericMethod) goto label_02750b8b;
        } while (_Var9.genericMethod < (Il2CppRGCTXData *)(ulong)uVar19);
      }
label_02750bb0:
      puStack_40 = (undefined8 *)0x2750bb5;
      il2cpp_runtime_helper_022b2ca0();
      goto label_02750bb5;
    }
label_02750b8b:
    if (_Var8.genericMethod != (Il2CppRGCTXData *)0x0) {
      pSVar10 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(_Var8.genericMethod,MethodInfo_String_ToArray);
      return pSVar10;
    }
  }
label_02750bb5:
  puStack_40 = (undefined8 *)0x2750bba;
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  _Stack_68 = _Var9;
  _Stack_60 = unaff_R12;
  puStack_58 = unaff_R13;
  _Stack_50.genericMethod = _Var8.genericMethod;
  pSStack_48 = unaff_R15;
  puStack_40 = puVar21;
  if (((Il2CppRGCTXData *)((long)a.genericMethod + 0x38))->rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
    puStack_78 = (undefined8 *)0x2750be1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_78 = (undefined8 *)0x2750bed;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_78 = (undefined8 *)0x2750bf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_78 = (undefined8 *)0x2750c05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_78 = (undefined8 *)0x2750c11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    puStack_78 = (undefined8 *)0x2750c1d;
    il2cpp_runtime_helper_023445d0(&"None");
    if (((Il2CppRGCTXData *)((long)a.genericMethod + 0x38))->rgctxDataDummy == (Il2CppRGCTXData *)0x0) {
      puStack_78 = (undefined8 *)0x2750c2c;
      il2cpp_runtime_helper_02300a20(a.genericMethod);
    }
  }
  puStack_78 = (undefined8 *)0x2750c3b;
  _Var9.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_78 = (undefined8 *)0x2750c50;
  _Var8 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(_Var9.genericMethod,MethodInfo_List_1_System_String.genericMethod);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    puStack_78 = (undefined8 *)0x2750c68;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (_union_249689)
              ((Il2CppRGCTXData *)((Il2CppRGCTXData *)((long)a.genericMethod + 0x38))->method)->method;
  puStack_78 = (undefined8 *)0x2750c71;
  pSVar10 = (System_String_array *)(*(code *)*(Il2CppRGCTXData *)__this_03.genericMethod)();
  if (pSVar10 != (System_String_array *)0x0) {
    uVar20 = pSVar10->max_length;
    pIVar11 = (Il2CppRGCTXData *)(uVar20 & 0xffffffff);
    unaff_R15 = pSVar10;
    if (_Var9.genericMethod == (Il2CppRGCTXData *)0x0) {
      if (0 < (int)uVar20) {
        a.genericMethod = (Il2CppRGCTXData *)0x0;
        puVar21 = &"None";
        do {
          if (pIVar11 <= a.genericMethod) goto label_02750da0;
          __this_03 = (_union_249689)((_union_249689 *)(pSVar10->m_Items + (long)a))->genericMethod;
          puStack_78 = (undefined8 *)0x2750d67;
          _Var8 = "None";
          bVar7 = System_String__op_Inequality
                            (__this_03.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') goto label_02750da5;
          a.genericMethod = a.genericMethod + 1;
          uVar19 = (uint)pSVar10->max_length;
          pIVar11 = (Il2CppRGCTXData *)(ulong)uVar19;
        } while ((long)a.genericMethod < (long)(int)uVar19);
      }
    }
    else if (0 < (int)uVar20) {
      a.genericMethod = (Il2CppRGCTXData *)0x0;
      unaff_R13 = &"None";
      puVar21 = &MethodInfo_Void_Add;
      if ((uVar20 & 0xffffffff) != 0) {
        do {
          unaff_R12 = (_union_249689)((_union_249689 *)(pSVar10->m_Items + (long)a))->genericMethod;
          puStack_78 = (undefined8 *)0x2750cfc;
          _Var8 = "None";
          __this_03 = unaff_R12;
          bVar7 = System_String__op_Inequality
                            (unaff_R12.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if ((char)bVar7 != '\0') {
            *(int *)((long)_Var9.genericMethod + 0x1c) = *(int *)((long)_Var9.genericMethod + 0x1c) + 1;
            pMVar4 = ((Il2CppRGCTXData *)((long)_Var9.genericMethod + 0x10))->method;
            if (pMVar4 == (MethodInfo *)0x0) goto label_02750da5;
            uVar19 = *(uint *)((long)_Var9.genericMethod + 0x18);
            _Var8 = unaff_R12;
            if (uVar19 < *(uint *)&pMVar4->name) {
              *(uint *)((long)_Var9.genericMethod + 0x18) = uVar19 + 1;
              __this_03.genericMethod = &pMVar4->klass + (int)uVar19;
              ((_union_249689 *)(&pMVar4->klass + (int)uVar19))->genericMethod = (void *)unaff_R12;
              puStack_78 = (undefined8 *)0x2750d3b;
              il2cpp_runtime_helper_022b4080();
            }
            else {
              puStack_78 = (undefined8 *)0x2750cca;
              __this_03.genericMethod = _Var9.genericMethod;
              System_Collections_Generic_List_object___AddWithResize
                        (_Var9.genericMethod,unaff_R12.genericMethod,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          a.genericMethod = a.genericMethod + 1;
          uVar19 = (uint)pSVar10->max_length;
          if ((long)(int)uVar19 <= (long)a.genericMethod) goto label_02750d7b;
        } while (a.genericMethod < (Il2CppRGCTXData *)(ulong)uVar19);
      }
label_02750da0:
      puStack_78 = (undefined8 *)0x2750da5;
      il2cpp_runtime_helper_022b2ca0();
      goto label_02750da5;
    }
label_02750d7b:
    if (_Var9.genericMethod != (Il2CppRGCTXData *)0x0) {
      pSVar10 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(_Var9.genericMethod,MethodInfo_String_ToArray);
      return pSVar10;
    }
  }
label_02750da5:
  puStack_78 = (undefined8 *)0x2750daa;
  il2cpp_runtime_helper_022b2c90();
  uVar20 = (ulong)_Var8.genericMethod & 0xffffffff;
  pSVar12 = extraout_RDX[1].fields._items;
  _Stack_a0 = a;
  _Stack_98 = unaff_R12;
  puStack_90 = unaff_R13;
  _Stack_88.genericMethod = _Var9.genericMethod;
  pSStack_80 = unaff_R15;
  puStack_78 = puVar21;
  if (pSVar12 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    pSVar12 = extraout_RDX[1].fields._items;
  }
  pSVar24 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (pSVar12->obj).klass;
  if (((pIVar13->_2).field_0x6d & 1) == 0) {
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar10 = (System_String_array *)il2cpp_runtime_helper_023052d0(pIVar13);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,
             ((extraout_RDX[1].fields._items)->obj).monitor);
  iVar18 = _Var8._0_4_;
  pSVar23 = extraout_RDX;
  pSVar16 = extraout_RDX;
  if (0 < iVar18) {
    if (pSVar10 == (System_String_array *)0x0) goto label_0275105b;
    pIVar14 = (extraout_RDX[1].fields._items)->bounds;
    bVar2 = *(byte *)((long)&pIVar14[0x13].length + 5);
    uVar20 = (ulong)_Var8.genericMethod & 0xffffffff;
    while( true ) {
      if ((bVar2 & 1) == 0) {
        pIVar14 = (Il2CppArrayBounds *)il2cpp_runtime_helper_023009c0();
      }
      pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar14);
      System_Collections_Generic_List_object____ctor
                (pSVar15,(MethodInfo_362B8B0 *)(extraout_RDX[1].fields._items)->max_length);
      pIVar5 = (extraout_RDX[1].fields._items)->m_Items[0];
      piVar1 = (int32_t *)((long)&pSVar10->max_length + 4);
      *piVar1 = *piVar1 + 1;
      pSVar12 = ((System_Collections_Generic_List_object__Fields *)&pSVar10->bounds)->_items;
      if (pSVar12 == (System_Object_array *)0x0) goto label_0275104c;
      uVar19 = (uint)pSVar10->max_length;
      if (uVar19 < (uint)pSVar12->max_length) {
        *(uint *)&pSVar10->max_length = uVar19 + 1;
        pSVar12->m_Items[(int)uVar19] = (Il2CppObject *)pSVar15;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar19,pSVar15);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar15,
                   (MethodInfo_362C220 *)(pIVar5[2].klass)->rgctx_data[0xe].method);
      }
      uVar19 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar19;
      if (uVar19 == 0) break;
      pIVar14 = (extraout_RDX[1].fields._items)->bounds;
      bVar2 = *(byte *)((long)&pIVar14[0x13].length + 5);
    }
  }
  if (__this_03.genericMethod != (Il2CppRGCTXData *)0x0) {
    if (iVar18 == 0) {
      return pSVar10;
    }
    iVar3 = *(int *)((long)__this_03.genericMethod + 0x18);
    if (iVar3 == 0) {
      return pSVar10;
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_b8,__this_03.genericMethod,
               (MethodInfo_362CEB0 *)(extraout_RDX[1].fields._items)->m_Items[2]);
    if (pSVar10 == (System_String_array *)0x0) {
      __this_00.fields._8_8_ = pSVar23;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_00.fields._current = (Il2CppObject *)SStack_b8.fields._list;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff28);
      if ((char)bVar7 != '\0') goto label_0275109b;
    }
    else {
      uVar20 = (ulong)(iVar18 - 1U);
      index = 0;
      pSVar15 = extraout_RDX;
      pSVar24 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_b8.fields._list;
      while (__this.fields._8_8_ = pSVar23,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
            __this.fields._current = (Il2CppObject *)pSVar24,
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff28),
            SStack_b8.fields._list = (System_Collections_Generic_List_T__o *)pSVar24, (char)bVar7 != '\0') {
        pSVar16 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar10,index,
                             (MethodInfo_362BED0 *)(pSVar15[1].fields._items)->m_Items[7]);
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_02751051;
        pIVar5 = (pSVar23[1].fields._items)->m_Items[8];
        piVar1 = &(pSVar16->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (pSVar16->fields)._items;
        if (pSVar12 == (System_Object_array *)0x0) goto label_02751056;
        uVar19 = (pSVar16->fields)._size;
        if (uVar19 < (uint)pSVar12->max_length) {
          (pSVar16->fields)._size = uVar19 + 1;
          pSVar12->m_Items[(int)uVar19] = SStack_b8.fields._current;
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar19,SStack_b8.fields._current);
          pSVar15 = pSVar23;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar16,SStack_b8.fields._current,
                     (MethodInfo_362C220 *)(pIVar5[2].klass)->rgctx_data[0xe].method);
          pSVar15 = pSVar23;
        }
        index = index + (uint)(index < (int)(iVar18 - 1U) && iVar3 / iVar18 <= (pSVar16->fields)._size);
        pSVar23 = pSVar15;
      }
    }
    uVar20 = 0;
    pSVar24 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_b8.fields._list;
    goto label_02751023;
  }
label_0275104c:
  il2cpp_runtime_helper_022b2c90();
label_02751051:
  il2cpp_runtime_helper_022b2c90();
label_02751056:
  il2cpp_runtime_helper_022b2c90();
label_0275105b:
  pIVar14 = (pSVar16[1].fields._items)->bounds;
  if ((pIVar14[0x13].length & 0x10000000000) == 0) {
    pIVar14 = (Il2CppArrayBounds *)il2cpp_runtime_helper_023009c0();
  }
  pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar14);
  System_Collections_Generic_List_object____ctor
            (pSVar16,(MethodInfo_362B8B0 *)(pSVar23[1].fields._items)->max_length);
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(uVar20);
    SStack_b8.fields._list = (System_Collections_Generic_List_T__o *)pSVar24;
label_0275109b:
    auVar22 = il2cpp_runtime_helper_022b2c90();
    if (auVar22._8_4_ != 1) {
      __this_02.fields._8_8_ = pSVar23;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_02.fields._current = (Il2CppObject *)SStack_b8.fields._list;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
      _Unwind_Resume(auVar22._0_8_);
    }
    puVar17 = (ulong *)__cxa_begin_catch(auVar22._0_8_);
    uVar20 = *puVar17;
    __cxa_end_catch();
    pSVar24 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_b8.fields._list;
label_02751023:
    __this_01.fields._8_8_ = pSVar23;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
    __this_01.fields._current = (Il2CppObject *)pSVar24;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff28);
  } while (uVar20 != 0);
  return pSVar10;
}


// Utility.Util$$EnumToStringArrayExceptNone<__Il2CppFullySharedGenericType>
// il2cpp: System_String_array* Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_ (const MethodInfo_2650BC0* method);
// 0x2750bc0

System_String_array *
Utility_Util__EnumToStringArrayExceptNone___Il2CppFullySharedGenericType_(MethodInfo_2650BC0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  InvokerMethod pIVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar6;
  bool_conflict bVar7;
  _union_249689 __this_03;
  long lVar8;
  Il2CppRGCTXData *pIVar9;
  System_Object_array *pSVar10;
  Il2CppClass *pIVar11;
  System_String_array *pSVar12;
  Il2CppArrayBounds *pIVar13;
  System_Collections_Generic_List_object__o *pSVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  ulong *puVar16;
  System_Collections_Generic_List_object__o *extraout_RDX;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *unaff_RBP;
  _union_249689 _Var20;
  _union_249689 __this_04;
  _union_249689 unaff_R12;
  undefined8 *unaff_R13;
  int32_t index;
  long unaff_R15;
  undefined1 auVar21 [12];
  undefined8 in_stack_ffffffffffffff50;
  System_Collections_Generic_List_object__o *pSVar22;
  System_Collections_Generic_List_Enumerator_T__c *pSVar23;
  System_Collections_Generic_List_Enumerator_T__o SStack_80;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  undefined8 *puStack_58;
  _union_249689 _Stack_50;
  long lStack_48;
  undefined8 *puStack_40;
  
  if (method->rgctx_data == (MethodInfo_2650BC0_RGCTXs *)0x0) {
    puStack_40 = (undefined8 *)0x2750be1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    puStack_40 = (undefined8 *)0x2750bed;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    puStack_40 = (undefined8 *)0x2750bf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    puStack_40 = (undefined8 *)0x2750c05;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    puStack_40 = (undefined8 *)0x2750c11;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    puStack_40 = (undefined8 *)0x2750c1d;
    il2cpp_runtime_helper_023445d0(&"None");
    if (method->rgctx_data == (MethodInfo_2650BC0_RGCTXs *)0x0) {
      puStack_40 = (undefined8 *)0x2750c2c;
      il2cpp_runtime_helper_02300a20(method);
    }
  }
  puStack_40 = (undefined8 *)0x2750c3b;
  __this_03.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  puStack_40 = (undefined8 *)0x2750c50;
  _Var20 = MethodInfo_List_1_System_String;
  System_Collections_Generic_List_object____ctor(__this_03.genericMethod,MethodInfo_List_1_System_String.genericMethod);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    puStack_40 = (undefined8 *)0x2750c68;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = (_union_249689)((_union_249689 *)method->rgctx_data)->genericMethod;
  puStack_40 = (undefined8 *)0x2750c71;
  lVar8 = (**(code **)__this_04.genericMethod)();
  if (lVar8 != 0) {
    uVar19 = *(ulong *)(lVar8 + 0x18);
    pIVar9 = (Il2CppRGCTXData *)(uVar19 & 0xffffffff);
    unaff_R15 = lVar8;
    if (__this_03.genericMethod == (MethodInfo *)0x0) {
      if (0 < (int)uVar19) {
        method = (MethodInfo_2650BC0 *)0x0;
        unaff_RBP = &"None";
        do {
          if (pIVar9 <= method) goto label_02750da0;
          __this_04 = (_union_249689)((_union_249689 *)(lVar8 + 0x20 + (long)method * 8))->genericMethod;
          puStack_40 = (undefined8 *)0x2750d67;
          _Var20 = "None";
          bVar7 = System_String__op_Inequality
                            (__this_04.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') goto label_02750da5;
          method = (MethodInfo_2650BC0 *)((long)method + 1);
          pIVar9 = (Il2CppRGCTXData *)(ulong)*(uint *)(lVar8 + 0x18);
        } while ((long)method < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
    else if (0 < (int)uVar19) {
      method = (MethodInfo_2650BC0 *)0x0;
      unaff_R13 = &"None";
      unaff_RBP = &MethodInfo_Void_Add;
      if ((uVar19 & 0xffffffff) != 0) {
        do {
          unaff_R12 = (_union_249689)((_union_249689 *)(lVar8 + 0x20 + (long)method * 8))->genericMethod;
          puStack_40 = (undefined8 *)0x2750cfc;
          _Var20 = "None";
          __this_04 = unaff_R12;
          bVar7 = System_String__op_Inequality
                            (unaff_R12.genericMethod,"None".genericMethod,(MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if ((char)bVar7 != '\0') {
            *(int *)((long)__this_03.genericMethod + 0x1c) =
                 *(int *)((long)__this_03.genericMethod + 0x1c) + 1;
            pIVar4 = *(InvokerMethod *)((long)__this_03.genericMethod + 0x10);
            if (pIVar4 == (InvokerMethod)0x0) goto label_02750da5;
            uVar18 = *(uint *)((long)__this_03.genericMethod + 0x18);
            _Var20 = unaff_R12;
            if (uVar18 < *(uint *)(pIVar4 + 0x18)) {
              *(uint *)((long)__this_03.genericMethod + 0x18) = uVar18 + 1;
              __this_04.genericMethod = pIVar4 + (long)(int)uVar18 * 8 + 0x20;
              ((_union_249689 *)(pIVar4 + (long)(int)uVar18 * 8 + 0x20))->genericMethod = (void *)unaff_R12;
              puStack_40 = (undefined8 *)0x2750d3b;
              il2cpp_runtime_helper_022b4080();
            }
            else {
              puStack_40 = (undefined8 *)0x2750cca;
              __this_04.genericMethod = __this_03.genericMethod;
              System_Collections_Generic_List_object___AddWithResize
                        (__this_03.genericMethod,unaff_R12.genericMethod,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          method = (MethodInfo_2650BC0 *)((long)method + 1);
          if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)method) goto label_02750d7b;
        } while (method < (Il2CppRGCTXData *)(ulong)*(uint *)(lVar8 + 0x18));
      }
label_02750da0:
      puStack_40 = (undefined8 *)0x2750da5;
      il2cpp_runtime_helper_022b2ca0();
      goto label_02750da5;
    }
label_02750d7b:
    if (__this_03.genericMethod != (MethodInfo *)0x0) {
      pSVar12 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_03.genericMethod,MethodInfo_String_ToArray);
      return pSVar12;
    }
  }
label_02750da5:
  puStack_40 = (undefined8 *)0x2750daa;
  il2cpp_runtime_helper_022b2c90();
  uVar19 = (ulong)_Var20.genericMethod & 0xffffffff;
  pSVar10 = extraout_RDX[1].fields._items;
  pIStack_68 = (Il2CppRGCTXData *)method;
  _Stack_60 = unaff_R12;
  puStack_58 = unaff_R13;
  _Stack_50.genericMethod = __this_03.genericMethod;
  lStack_48 = unaff_R15;
  puStack_40 = unaff_RBP;
  if (pSVar10 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_02300a20(extraout_RDX);
    pSVar10 = extraout_RDX[1].fields._items;
  }
  pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar11 = (pSVar10->obj).klass;
  if (((pIVar11->_2).field_0x6d & 1) == 0) {
    pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(pIVar11);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar12,
             ((extraout_RDX[1].fields._items)->obj).monitor);
  iVar17 = _Var20._0_4_;
  pSVar22 = extraout_RDX;
  pSVar15 = extraout_RDX;
  if (0 < iVar17) {
    if (pSVar12 == (System_String_array *)0x0) goto label_0275105b;
    pIVar13 = (extraout_RDX[1].fields._items)->bounds;
    bVar2 = *(byte *)((long)&pIVar13[0x13].length + 5);
    uVar19 = (ulong)_Var20.genericMethod & 0xffffffff;
    while( true ) {
      if ((bVar2 & 1) == 0) {
        pIVar13 = (Il2CppArrayBounds *)il2cpp_runtime_helper_023009c0();
      }
      pSVar14 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar13);
      System_Collections_Generic_List_object____ctor
                (pSVar14,(MethodInfo_362B8B0 *)(extraout_RDX[1].fields._items)->max_length);
      pIVar5 = (extraout_RDX[1].fields._items)->m_Items[0];
      piVar1 = (int32_t *)((long)&pSVar12->max_length + 4);
      *piVar1 = *piVar1 + 1;
      pSVar10 = ((System_Collections_Generic_List_object__Fields *)&pSVar12->bounds)->_items;
      if (pSVar10 == (System_Object_array *)0x0) goto label_0275104c;
      uVar18 = (uint)pSVar12->max_length;
      if (uVar18 < (uint)pSVar10->max_length) {
        *(uint *)&pSVar12->max_length = uVar18 + 1;
        pSVar10->m_Items[(int)uVar18] = (Il2CppObject *)pSVar14;
        il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar18,pSVar14);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar12,(Il2CppObject *)pSVar14,
                   (MethodInfo_362C220 *)(pIVar5[2].klass)->rgctx_data[0xe].method);
      }
      uVar18 = (int)uVar19 - 1;
      uVar19 = (ulong)uVar18;
      if (uVar18 == 0) break;
      pIVar13 = (extraout_RDX[1].fields._items)->bounds;
      bVar2 = *(byte *)((long)&pIVar13[0x13].length + 5);
    }
  }
  if (__this_04.genericMethod != (MethodInfo *)0x0) {
    if (iVar17 == 0) {
      return pSVar12;
    }
    iVar3 = *(int *)((long)__this_04.genericMethod + 0x18);
    if (iVar3 == 0) {
      return pSVar12;
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&SStack_80,__this_04.genericMethod,
               (MethodInfo_362CEB0 *)(extraout_RDX[1].fields._items)->m_Items[2]);
    if (pSVar12 == (System_String_array *)0x0) {
      __this_00.fields._8_8_ = pSVar22;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
      __this_00.fields._current = (Il2CppObject *)SStack_80.fields._list;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
      if ((char)bVar7 != '\0') goto label_0275109b;
    }
    else {
      uVar19 = (ulong)(iVar17 - 1U);
      index = 0;
      pSVar14 = extraout_RDX;
      pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
      while (__this.fields._8_8_ = pSVar22,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50,
            __this.fields._current = (Il2CppObject *)pSVar23,
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60),
            SStack_80.fields._list = (System_Collections_Generic_List_T__o *)pSVar23, (char)bVar7 != '\0') {
        pSVar15 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar12,index,
                             (MethodInfo_362BED0 *)(pSVar14[1].fields._items)->m_Items[7]);
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_02751051;
        pIVar5 = (pSVar22[1].fields._items)->m_Items[8];
        piVar1 = &(pSVar15->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar10 = (pSVar15->fields)._items;
        if (pSVar10 == (System_Object_array *)0x0) goto label_02751056;
        uVar18 = (pSVar15->fields)._size;
        if (uVar18 < (uint)pSVar10->max_length) {
          (pSVar15->fields)._size = uVar18 + 1;
          pSVar10->m_Items[(int)uVar18] = SStack_80.fields._current;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items + (int)uVar18,SStack_80.fields._current);
          pSVar14 = pSVar22;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar15,SStack_80.fields._current,
                     (MethodInfo_362C220 *)(pIVar5[2].klass)->rgctx_data[0xe].method);
          pSVar14 = pSVar22;
        }
        index = index + (uint)(index < (int)(iVar17 - 1U) && iVar3 / iVar17 <= (pSVar15->fields)._size);
        pSVar22 = pSVar14;
      }
    }
    uVar19 = 0;
    pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
    goto label_02751023;
  }
label_0275104c:
  il2cpp_runtime_helper_022b2c90();
label_02751051:
  il2cpp_runtime_helper_022b2c90();
label_02751056:
  il2cpp_runtime_helper_022b2c90();
label_0275105b:
  pIVar13 = (pSVar15[1].fields._items)->bounds;
  if ((pIVar13[0x13].length & 0x10000000000) == 0) {
    pIVar13 = (Il2CppArrayBounds *)il2cpp_runtime_helper_023009c0();
  }
  pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar13);
  System_Collections_Generic_List_object____ctor
            (pSVar15,(MethodInfo_362B8B0 *)(pSVar22[1].fields._items)->max_length);
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(uVar19);
    SStack_80.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
label_0275109b:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      __this_02.fields._8_8_ = pSVar22;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
      __this_02.fields._current = (Il2CppObject *)SStack_80.fields._list;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
      _Unwind_Resume(auVar21._0_8_);
    }
    puVar16 = (ulong *)__cxa_begin_catch(auVar21._0_8_);
    uVar19 = *puVar16;
    __cxa_end_catch();
    pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_80.fields._list;
label_02751023:
    __this_01.fields._8_8_ = pSVar22;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff50;
    __this_01.fields._current = (Il2CppObject *)pSVar23;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  } while (uVar19 != 0);
  return pSVar12;
}


// Utility.Util$$EnumToList<Int32Enum>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList_Int32Enum_ (const MethodInfo_2650770* method);
// 0x2750770

System_Collections_Generic_List_T__o * Utility_Util__EnumToList_Int32Enum_(MethodInfo_2650770 *method)

{
  long *plVar1;
  MethodInfo_30C34A0 *method_00;
  MethodInfo_30C3FF0 *method_01;
  code *pcVar2;
  MethodInfo_2E1B4B0 *method_02;
  MethodInfo_2E1CDB0 *method_03;
  MethodInfo_2E218C0 *method_04;
  MethodInfo_2E1B730 *method_05;
  MethodInfo_2E1D2F0 *method_06;
  MethodInfo_2E21B90 *method_07;
  MethodInfo_2E1B970 *method_08;
  MethodInfo_2E1D7F0 *method_09;
  MethodInfo_2E21E40 *method_10;
  MethodInfo_2E1BB90 *method_11;
  MethodInfo_2E1F5E0 *method_12;
  MethodInfo_2E220D0 *method_13;
  MethodInfo_2E1BDA0 *method_14;
  MethodInfo_2E1FAD0 *method_15;
  MethodInfo_2E22350 *method_16;
  MethodInfo_2E1C160 *method_17;
  MethodInfo_2E20140 *method_18;
  MethodInfo_2E227E0 *method_19;
  MethodInfo_2E1C390 *method_20;
  MethodInfo_2E20640 *method_21;
  MethodInfo_2E22A80 *method_22;
  MethodInfo_2E1C660 *method_23;
  MethodInfo_2E20BB0 *method_24;
  MethodInfo_2E22DE0 *method_25;
  System_RuntimeTypeHandle_o handle;
  void *pvVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  System_String_o *pSVar5;
  System_Exception_o *pSVar6;
  System_Exception_o *pSVar7;
  System_Collections_Generic_List_MarkToBaseAdjustmentRecord__o *__this;
  System_Collections_Generic_List_MarkToMarkAdjustmentRecord__o *__this_00;
  System_Collections_Generic_List_NavMeshBuildSource__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar8;
  System_Exception_o *pSVar9;
  System_Linq_Enumerable__UnionIterator_d__71_TSource__o *__this_03;
  System_Collections_Generic_List_TSource__o *pSVar10;
  undefined8 *puVar11;
  System_Linq_Enumerable_WhereListIterator_TSource__o *pSVar12;
  System_Func_TSource__bool__o *pSVar13;
  System_Collections_Generic_KeyValuePair_object__bool__array *source;
  System_Collections_Generic_KeyValuePair_object__object__array *source_00;
  System_Nullable_int__array *source_01;
  System_Int32Enum_array *source_02;
  UnityEngine_AI_NavMeshBuildSource_array *source_03;
  System_Object_array *source_04;
  UnityEngine_LowLevel_PlayerLoopSystem_array *source_05;
  PatreonEffects_RoleSpriteDefinition_array *source_06;
  System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *pSVar14;
  Il2CppClass *pIVar15;
  long lVar16;
  MethodInfo_2650770_RGCTXs *pMVar17;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source_07;
  System_Collections_Generic_IEnumerable_TResult__o *collection;
  System_Linq_Enumerable_WhereListIterator_TSource__o *pSVar18;
  System_Collections_Generic_List_TSource__c *pSVar19;
  byte bVar20;
  byte bVar21;
  System_Exception_o *extraout_RDX;
  System_Exception_o *pSVar22;
  System_Exception_o *extraout_RDX_00;
  System_Collections_Generic_IEqualityComparer_TSource__o *pSVar23;
  System_Exception_o *extraout_RDX_01;
  System_Exception_o *extraout_RDX_02;
  System_Collections_Generic_IEqualityComparer_TSource__o *extraout_RDX_03;
  undefined8 extraout_RDX_04;
  long extraout_RDX_05;
  long extraout_RDX_06;
  long extraout_RDX_07;
  long extraout_RDX_08;
  long extraout_RDX_09;
  long extraout_RDX_10;
  long extraout_RDX_11;
  long extraout_RDX_12;
  long extraout_RDX_13;
  System_Exception_o *unaff_RBX;
  System_Exception_o **ppSVar24;
  System_Exception_o **ppSVar25;
  undefined8 unaff_RBP;
  System_Exception_o *pSVar26;
  System_Exception_o *pSVar27;
  System_Exception_o *pSVar28;
  undefined8 uVar29;
  System_Func_TSource__bool__o *pSVar30;
  System_Func_TSource__bool__o *pSVar31;
  undefined *puVar32;
  System_Linq_Enumerable__UnionIterator_d__71_TSource__o *pSVar33;
  System_Collections_Generic_List_TSource__o *pSVar34;
  System_Exception_o *unaff_R12;
  System_Linq_Enumerable_WhereListIterator_TSource__o *unaff_R13;
  undefined1 auVar35 [16];
  System_Exception_o *pSStack_f0;
  System_Exception_o *pSStack_e8;
  System_Exception_o *pSStack_e0;
  System_Exception_o *pSStack_d8;
  System_Exception_o *pSStack_d0;
  System_Exception_o *pSStack_c8;
  System_Exception_o *pSStack_c0;
  System_Exception_o *pSStack_b8;
  System_Exception_o *pSStack_b0;
  undefined1 auStack_a8 [8];
  System_Exception_o *pSStack_a0;
  System_Exception_o *pSStack_98;
  System_Exception_o *pSStack_88;
  System_Exception_o *pSStack_80;
  System_Exception_o *pSStack_70;
  System_Exception_o *pSStack_68;
  System_Exception_o *pSStack_58;
  System_Exception_o *pSStack_50;
  System_Exception_o *pSStack_40;
  System_Exception_o *pSStack_38;
  System_Collections_Generic_IEnumerable_TResult__o *pSStack_28;
  System_Exception_o *pSStack_20;
  
  pMVar17 = method->rgctx_data;
  if (pMVar17 == (MethodInfo_2650770_RGCTXs *)0x0) {
    pSStack_20 = (System_Exception_o *)0x2750789;
    il2cpp_runtime_helper_02300a20(method);
    pMVar17 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar17->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_20 = (System_Exception_o *)0x27507ac;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_Exception_o *)0x27507b6;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    pSStack_20 = (System_Exception_o *)0x27507ce;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_20 = (System_Exception_o *)0x27507d8;
  source_07 = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pSStack_20 = (System_Exception_o *)0x27507e8;
  collection = System_Linq_Enumerable__Cast_Int32Enum_
                         (source_07,
                          (MethodInfo_2505F30 *)method->rgctx_data->_1_System_Linq_Enumerable_Cast_T_);
  pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)method->rgctx_data;
  pSVar28 = (System_Exception_o *)(pSVar12->fields).current;
  if ((pSVar28->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_20 = (System_Exception_o *)0x26251ca;
    il2cpp_runtime_helper_02300a20(pSVar28);
  }
  if (collection != (System_Collections_Generic_IEnumerable_TResult__o *)0x0) {
    pvVar3 = ((pSVar28->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_20 = (System_Exception_o *)0x26251e5;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_20 = (System_Exception_o *)0x26251ed;
    pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_20 = (System_Exception_o *)0x2625203;
    System_Collections_Generic_List_Int32Enum____ctor_3600810
              (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_3600810 *)(pSVar28->fields)._stackTrace[1].klass);
    return pSVar4;
  }
  pSStack_20 = (System_Exception_o *)0x2625218;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_20 = (System_Exception_o *)0x2625222;
  pSVar6 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_20 = (System_Exception_o *)0x262522d;
  pSVar26 = pSVar28;
  il2cpp_runtime_helper_022b2b10();
  pSStack_28 = collection;
  pSStack_20 = pSVar28;
  if ((pSVar26->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_38 = (System_Exception_o *)0x262524a;
    il2cpp_runtime_helper_02300a20(pSVar26);
  }
  if (pSVar6 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar26->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_38 = (System_Exception_o *)0x2625265;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_38 = (System_Exception_o *)0x262526d;
    pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_38 = (System_Exception_o *)0x2625283;
    System_Collections_Generic_List_long____ctor_3603800
              ((System_Collections_Generic_List_long__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)pSVar6,
               (MethodInfo_3603800 *)(pSVar26->fields)._stackTrace[1].klass);
    return pSVar4;
  }
  pSStack_38 = (System_Exception_o *)0x2625298;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_38 = (System_Exception_o *)0x26252a2;
  pSVar7 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_38 = (System_Exception_o *)0x26252ad;
  pSVar28 = pSVar26;
  il2cpp_runtime_helper_022b2b10();
  pSStack_40 = pSVar6;
  pSStack_38 = pSVar26;
  if ((pSVar28->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_50 = (System_Exception_o *)0x26252ca;
    il2cpp_runtime_helper_02300a20(pSVar28);
  }
  if (pSVar7 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar28->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_50 = (System_Exception_o *)0x26252e5;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_50 = (System_Exception_o *)0x26252ed;
    __this = (System_Collections_Generic_List_MarkToBaseAdjustmentRecord__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_50 = (System_Exception_o *)0x2625303;
    System_Collections_Generic_List_MarkToBaseAdjustmentRecord____ctor_36169c0
              (__this,(System_Collections_Generic_IEnumerable_T__o *)pSVar7,
               (MethodInfo_36169C0 *)(pSVar28->fields)._stackTrace[1].klass);
    return (System_Collections_Generic_List_T__o *)__this;
  }
  pSStack_50 = (System_Exception_o *)0x2625318;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_50 = (System_Exception_o *)0x2625322;
  pSVar6 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_50 = (System_Exception_o *)0x262532d;
  pSVar26 = pSVar28;
  il2cpp_runtime_helper_022b2b10();
  pSStack_58 = pSVar7;
  pSStack_50 = pSVar28;
  if ((pSVar26->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_68 = (System_Exception_o *)0x262534a;
    il2cpp_runtime_helper_02300a20(pSVar26);
  }
  if (pSVar6 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar26->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_68 = (System_Exception_o *)0x2625365;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_68 = (System_Exception_o *)0x262536d;
    __this_00 = (System_Collections_Generic_List_MarkToMarkAdjustmentRecord__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_68 = (System_Exception_o *)0x2625383;
    System_Collections_Generic_List_MarkToMarkAdjustmentRecord____ctor_3619f20
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,
               (MethodInfo_3619F20 *)(pSVar26->fields)._stackTrace[1].klass);
    return (System_Collections_Generic_List_T__o *)__this_00;
  }
  pSStack_68 = (System_Exception_o *)0x2625398;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_68 = (System_Exception_o *)0x26253a2;
  pSVar7 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_68 = (System_Exception_o *)0x26253ad;
  pSVar28 = pSVar26;
  il2cpp_runtime_helper_022b2b10();
  pSStack_70 = pSVar6;
  pSStack_68 = pSVar26;
  if ((pSVar28->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_80 = (System_Exception_o *)0x26253ca;
    il2cpp_runtime_helper_02300a20(pSVar28);
  }
  if (pSVar7 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar28->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_80 = (System_Exception_o *)0x26253e5;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_80 = (System_Exception_o *)0x26253ed;
    __this_01 = (System_Collections_Generic_List_NavMeshBuildSource__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_80 = (System_Exception_o *)0x2625403;
    System_Collections_Generic_List_NavMeshBuildSource____ctor_3627730
              (__this_01,(System_Collections_Generic_IEnumerable_T__o *)pSVar7,
               (MethodInfo_3627730 *)(pSVar28->fields)._stackTrace[1].klass);
    return (System_Collections_Generic_List_T__o *)__this_01;
  }
  pSStack_80 = (System_Exception_o *)0x2625418;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_80 = (System_Exception_o *)0x2625422;
  pSVar6 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_80 = (System_Exception_o *)0x262542d;
  pSVar26 = pSVar28;
  il2cpp_runtime_helper_022b2b10();
  pSStack_88 = pSVar7;
  pSStack_80 = pSVar28;
  if ((pSVar26->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_98 = (System_Exception_o *)0x262544a;
    il2cpp_runtime_helper_02300a20(pSVar26);
  }
  if (pSVar6 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar26->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_98 = (System_Exception_o *)0x2625465;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_98 = (System_Exception_o *)0x262546d;
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_98 = (System_Exception_o *)0x2625483;
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,
               (MethodInfo_362BA10 *)(pSVar26->fields)._stackTrace[1].klass);
    return (System_Collections_Generic_List_T__o *)__this_02;
  }
  pSStack_98 = (System_Exception_o *)0x2625498;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_98 = (System_Exception_o *)0x26254a2;
  pSVar7 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_98 = (System_Exception_o *)0x26254ad;
  pSVar28 = pSVar26;
  il2cpp_runtime_helper_022b2b10();
  pSStack_a0 = pSVar6;
  pSStack_98 = pSVar26;
  if ((pSVar28->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_b0 = (System_Exception_o *)0x26254ca;
    il2cpp_runtime_helper_02300a20(pSVar28);
  }
  if (pSVar7 != (System_Exception_o *)0x0) {
    pvVar3 = ((pSVar28->fields)._stackTrace)->monitor;
    if ((*(byte *)((long)pvVar3 + 0x135) & 1) == 0) {
      pSStack_b0 = (System_Exception_o *)0x26254e5;
      pvVar3 = (void *)il2cpp_runtime_helper_023009c0();
    }
    pSStack_b0 = (System_Exception_o *)0x26254ed;
    pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(pvVar3);
    pSStack_b0 = (System_Exception_o *)0x2625500;
    (*(((pSVar28->fields)._stackTrace[1].klass)->_1).image)(pSVar4,pSVar7);
    return pSVar4;
  }
  pSStack_b0 = (System_Exception_o *)0x2625515;
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"source");
  pSStack_b0 = (System_Exception_o *)0x262551f;
  pSVar6 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
  pSStack_b0 = (System_Exception_o *)0x262552a;
  pSVar26 = pSVar28;
  il2cpp_runtime_helper_022b2b10();
  pSStack_c0 = unaff_RBX;
  pSStack_b8 = pSVar7;
  pSStack_b0 = pSVar28;
  if ((extraout_RDX->fields)._stackTrace == (Il2CppObject *)0x0) {
    pSStack_c8 = (System_Exception_o *)0x262554d;
    il2cpp_runtime_helper_02300a20(extraout_RDX);
  }
  if (pSVar6 == (System_Exception_o *)0x0) {
    puVar32 = &"first";
label_02625581:
    pSStack_c8 = (System_Exception_o *)0x2625586;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar32);
    pSStack_c8 = (System_Exception_o *)0x2625590;
    pSVar7 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    pSStack_c8 = (System_Exception_o *)0x262559b;
    pSVar28 = extraout_RDX;
    il2cpp_runtime_helper_022b2b10();
    pSStack_d8 = pSVar6;
    pSStack_d0 = extraout_RDX;
    pSStack_c8 = pSVar26;
    if ((extraout_RDX_00->fields)._stackTrace == (Il2CppObject *)0x0) {
      pSStack_e0 = (System_Exception_o *)0x26255bd;
      il2cpp_runtime_helper_02300a20(extraout_RDX_00);
    }
    if (pSVar7 == (System_Exception_o *)0x0) {
      puVar32 = &"first";
label_026255f1:
      pSStack_e0 = (System_Exception_o *)0x26255f6;
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar32);
      pSStack_e0 = (System_Exception_o *)0x2625600;
      pSVar9 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
      pSStack_e0 = (System_Exception_o *)0x262560b;
      pSVar27 = extraout_RDX_00;
      il2cpp_runtime_helper_022b2b10();
      ppSVar24 = &pSStack_f0;
      pSStack_f0 = pSVar7;
      pSStack_e8 = extraout_RDX_00;
      pSStack_e0 = pSVar28;
      if ((extraout_RDX_01->fields)._stackTrace == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_02300a20(extraout_RDX_01);
      }
      if (pSVar9 == (System_Exception_o *)0x0) {
        puVar32 = &"first";
      }
      else {
        if (pSVar27 != (System_Exception_o *)0x0) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (**(code **)((extraout_RDX_01->fields)._stackTrace)->monitor)(pSVar9,pSVar27,0);
          return pSVar4;
        }
        puVar32 = &"second";
      }
      pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar32);
      pSVar6 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
      pSVar26 = extraout_RDX_01;
      il2cpp_runtime_helper_022b2b10();
      pSVar22 = extraout_RDX_02;
      pSVar28 = extraout_RDX_01;
      goto System_Linq_Enumerable__UnionIterator_char_;
    }
    if (pSVar28 == (System_Exception_o *)0x0) {
      puVar32 = &"second";
      goto label_026255f1;
    }
    pSVar18 = ((extraout_RDX_00->fields)._stackTrace)->monitor;
    pSVar23 = (System_Collections_Generic_IEqualityComparer_TSource__o *)0x0;
    ppSVar25 = &pSStack_c0;
    pSVar9 = pSStack_d8;
    pSVar22 = pSStack_d0;
    pSVar26 = pSStack_c8;
  }
  else {
    if (pSVar26 == (System_Exception_o *)0x0) {
      puVar32 = &"second";
      goto label_02625581;
    }
    pSVar12 = ((extraout_RDX->fields)._stackTrace)->monitor;
    pSVar22 = (System_Exception_o *)0x0;
    ppSVar24 = (System_Exception_o **)auStack_a8;
    pSVar9 = pSStack_c0;
    pSVar28 = pSStack_b8;
    pSVar27 = pSStack_b0;
System_Linq_Enumerable__UnionIterator_char_:
    *(System_Exception_o **)((long)ppSVar24 + -8) = pSVar27;
    *(System_Exception_o **)((long)ppSVar24 + -0x10) = pSVar28;
    *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar24 + -0x18) = unaff_R13;
    *(System_Exception_o **)((long)ppSVar24 + -0x20) = unaff_R12;
    ppSVar25 = (System_Exception_o **)((long)ppSVar24 + -0x28);
    *(System_Exception_o **)((long)ppSVar24 + -0x28) = pSVar9;
    plVar1 = *(long **)&(pSVar12->fields).enumerator.fields._index;
    pSVar18 = pSVar12;
    if (plVar1 == (long *)0x0) {
      *(undefined8 *)((long)ppSVar24 + -0x30) = 0x262571c;
      il2cpp_runtime_helper_02300a20(pSVar12);
      lVar8 = **(long **)&(pSVar12->fields).enumerator.fields._index;
      bVar20 = *(byte *)(lVar8 + 0x135);
    }
    else {
      lVar8 = *plVar1;
      bVar20 = *(byte *)(lVar8 + 0x135);
    }
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar24 + -0x30) = 0x26256af;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar24 + -0x30) = 0x26256b7;
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(lVar8);
    method_00 = *(MethodInfo_30C34A0 **)(*(long *)&(pSVar12->fields).enumerator.fields._index + 8);
    pSVar28 = (System_Exception_o *)&g_data_fffffffe;
    *(undefined8 *)((long)ppSVar24 + -0x30) = 0x26256cf;
    pSVar7 = pSVar9;
    System_Linq_Enumerable__UnionIterator_d__71_char____ctor
              ((System_Linq_Enumerable__UnionIterator_d__71_TSource__o *)pSVar9,-2,method_00);
    if (pSVar9 != (System_Exception_o *)0x0) {
      (pSVar9->fields)._stackTrace = (Il2CppObject *)pSVar6;
      *(undefined8 *)((long)ppSVar24 + -0x30) = 0x26256e4;
      il2cpp_runtime_helper_022b4080(&(pSVar9->fields)._stackTrace,pSVar6);
      (pSVar9->fields)._remoteStackTraceString = (System_String_o *)pSVar26;
      *(undefined8 *)((long)ppSVar24 + -0x30) = 0x26256f4;
      il2cpp_runtime_helper_022b4080(&(pSVar9->fields)._remoteStackTraceString,pSVar26);
      (pSVar9->fields)._innerException = pSVar22;
      *(undefined8 *)((long)ppSVar24 + -0x30) = 0x2625707;
      il2cpp_runtime_helper_022b4080(&(pSVar9->fields)._innerException,pSVar22);
      return (System_Collections_Generic_List_T__o *)pSVar9;
    }
    *(undefined8 *)((long)ppSVar24 + -0x30) = 0x2625737;
    il2cpp_runtime_helper_022b2c90();
    pSVar23 = extraout_RDX_03;
    pSVar9 = (System_Exception_o *)0x0;
    unaff_R12 = pSVar6;
    unaff_R13 = pSVar12;
  }
  *(System_Exception_o **)((long)ppSVar25 + -8) = pSVar26;
  *(System_Exception_o **)((long)ppSVar25 + -0x10) = pSVar22;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x18) = unaff_R13;
  *(System_Exception_o **)((long)ppSVar25 + -0x20) = unaff_R12;
  *(System_Exception_o **)((long)ppSVar25 + -0x28) = pSVar9;
  plVar1 = *(long **)&(pSVar18->fields).enumerator.fields._index;
  pSVar12 = pSVar18;
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)((long)ppSVar25 + -0x30) = 0x26257dc;
    il2cpp_runtime_helper_02300a20(pSVar18);
    lVar8 = **(long **)&(pSVar18->fields).enumerator.fields._index;
    bVar20 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = *plVar1;
    bVar20 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar20 & 1) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x30) = 0x262576f;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppSVar25 + -0x30) = 0x2625777;
  __this_03 = (System_Linq_Enumerable__UnionIterator_d__71_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
  method_01 = *(MethodInfo_30C3FF0 **)(*(long *)&(pSVar18->fields).enumerator.fields._index + 8);
  uVar29 = 0xfffffffe;
  *(undefined8 *)((long)ppSVar25 + -0x30) = 0x262578f;
  pSVar33 = __this_03;
  System_Linq_Enumerable__UnionIterator_d__71_object____ctor(__this_03,-2,method_01);
  if (__this_03 != (System_Linq_Enumerable__UnionIterator_d__71_TSource__o *)0x0) {
    (__this_03->fields).__3__first = (System_Collections_Generic_IEnumerable_TSource__o *)pSVar7;
    *(undefined8 *)((long)ppSVar25 + -0x30) = 0x26257a4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__3__first,pSVar7);
    (__this_03->fields).__3__second = (System_Collections_Generic_IEnumerable_TSource__o *)pSVar28;
    *(undefined8 *)((long)ppSVar25 + -0x30) = 0x26257b4;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__3__second,pSVar28);
    (__this_03->fields).__3__comparer = pSVar23;
    *(undefined8 *)((long)ppSVar25 + -0x30) = 0x26257c7;
    il2cpp_runtime_helper_022b4080(&(__this_03->fields).__3__comparer,pSVar23);
    return (System_Collections_Generic_List_T__o *)__this_03;
  }
  *(undefined8 *)((long)ppSVar25 + -0x30) = 0x26257f7;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppSVar25 + -0x30) = unaff_RBP;
  *(System_Exception_o **)((long)ppSVar25 + -0x38) = pSVar28;
  *(System_Collections_Generic_IEqualityComparer_TSource__o **)((long)ppSVar25 + -0x40) = pSVar23;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x48) = pSVar18;
  *(System_Exception_o **)((long)ppSVar25 + -0x50) = pSVar7;
  *(undefined8 *)((long)ppSVar25 + -0x58) = 0;
  *(undefined8 *)((long)ppSVar25 + -0x60) = extraout_RDX_04;
  *(undefined8 *)((long)ppSVar25 + -0x68) = uVar29;
  plVar1 = *(long **)&(pSVar12->fields).enumerator.fields._index;
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262594d;
    il2cpp_runtime_helper_02300a20(pSVar12);
    lVar8 = **(long **)&(pSVar12->fields).enumerator.fields._index;
    bVar20 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar8 = *plVar1;
    bVar20 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar20 & 1) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262583c;
    lVar8 = il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)((long)ppSVar25 + -0x78) = 0x2625844;
  pSVar10 = (System_Collections_Generic_List_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
  pSVar30 = (System_Func_TSource__bool__o *)&g_data_fffffffe;
  pcVar2 = (code *)**(undefined8 **)(*(long *)&(pSVar12->fields).enumerator.fields._index + 8);
  *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262585a;
  pSVar34 = pSVar10;
  (*pcVar2)();
  if (pSVar10 != (System_Collections_Generic_List_TSource__o *)0x0) {
    lVar16 = *(long *)(**(long **)&(pSVar12->fields).enumerator.fields._index + 0x80);
    lVar8 = lVar16 + 0xc0;
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x2625886;
    il2cpp_runtime_helper_022b2950(lVar8,8);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x2625891;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02338550(pSVar10,lVar8);
    *puVar11 = pSVar33;
    uVar29 = *(undefined8 *)(lVar16 + 200);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x26258a5;
    il2cpp_runtime_helper_022b2880(uVar29,puVar11,0);
    lVar16 = *(long *)(**(long **)&(pSVar12->fields).enumerator.fields._index + 0x80);
    lVar8 = lVar16 + 0x100;
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x26258c8;
    il2cpp_runtime_helper_022b2950(lVar8,8);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x26258d3;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02338550(pSVar10,lVar8);
    *puVar11 = *(undefined8 *)((long)ppSVar25 + -0x68);
    uVar29 = *(undefined8 *)(lVar16 + 0x108);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x26258ec;
    il2cpp_runtime_helper_022b2880(uVar29,puVar11,0);
    lVar16 = *(long *)(**(long **)&(pSVar12->fields).enumerator.fields._index + 0x80);
    lVar8 = lVar16 + 0x80;
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262590f;
    il2cpp_runtime_helper_022b2950(lVar8,8);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262591a;
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02338550(pSVar10,lVar8);
    *puVar11 = *(undefined8 *)((long)ppSVar25 + -0x60);
    uVar29 = *(undefined8 *)(lVar16 + 0x88);
    *(undefined8 *)((long)ppSVar25 + -0x78) = 0x2625933;
    il2cpp_runtime_helper_022b2880(uVar29,puVar11,0);
    return (System_Collections_Generic_List_T__o *)pSVar10;
  }
  *(undefined8 *)((long)ppSVar25 + -0x78) = 0x262596c;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)ppSVar25 + -0x78) = 0;
  *(System_Collections_Generic_IEqualityComparer_TSource__o **)((long)ppSVar25 + -0x80) = pSVar23;
  *(System_Linq_Enumerable__UnionIterator_d__71_TSource__o **)((long)ppSVar25 + -0x88) = pSVar33;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x90) = pSVar12;
  *(undefined8 *)((long)ppSVar25 + -0x98) = 0;
  if (*(long *)(extraout_RDX_05 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625991;
    il2cpp_runtime_helper_02300a20(extraout_RDX_05);
  }
  pSVar13 = (System_Func_TSource__bool__o *)0x0;
  if (pSVar34 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02625c43:
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c48;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c52;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c5d;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_05);
label_02625c5d:
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c68;
    il2cpp_runtime_helper_022b2fd0(pSVar34,pIVar15);
  }
  else {
    if (pSVar30 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02625c43;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x26259bc;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar34->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02625a05;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_05 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625ae5;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar34->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_05 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625b29;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar34->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar34,pSVar30,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_02625c5d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02625a05:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a0f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a1a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar34,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_05 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625aa0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar34->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02625b90:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625b97;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625b9f;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_03 = *(MethodInfo_2E1CDB0 **)(*(long *)(extraout_RDX_05 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625bb8;
        System_Linq_Enumerable_WhereEnumerableIterator_KeyValuePair_object__bool_____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar34,pSVar30,method_03);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02625b90;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625bd7;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625bdf;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_05 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625bfb;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar34->klass->_2).naturalAligment) &&
         ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_04 = *(MethodInfo_2E218C0 **)(*(long *)(extraout_RDX_05 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c31;
        System_Linq_Enumerable_WhereListIterator_KeyValuePair_object__bool_____ctor
                  (pSVar12,pSVar34,pSVar30,method_04);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_02625c5d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_05 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a35;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a3d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_05 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a59;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a67;
    source = (System_Collections_Generic_KeyValuePair_object__bool__array *)
             il2cpp_runtime_helper_023051f0(pSVar34,pSVar13);
    if (source != (System_Collections_Generic_KeyValuePair_object__bool__array *)0x0) {
      method_02 = *(MethodInfo_2E1B4B0 **)(*(long *)(extraout_RDX_05 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625a86;
      System_Linq_Enumerable_WhereArrayIterator_KeyValuePair_object__bool_____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source,pSVar30,method_02);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0xa0) = 0x2625c73;
  pSVar31 = pSVar13;
  pSVar10 = pSVar34;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0xa0) = pSVar34;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0xa8) = pSVar30;
  *(long *)((long)ppSVar25 + -0xb0) = extraout_RDX_05;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0xb8) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0xc0) = pSVar13;
  if (*(long *)(extraout_RDX_06 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625ca1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_06);
  }
  if (pSVar10 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02625f53:
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f58;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f62;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f6d;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_06);
label_02625f6d:
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f78;
    il2cpp_runtime_helper_022b2fd0(pSVar10,pIVar15);
  }
  else {
    if (pSVar31 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02625f53;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625ccc;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar10->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02625d15;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_06 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625df5;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar10->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_06 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -200) = 0x2625e39;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar10->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar10,pSVar31,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_02625f6d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02625d15:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d1f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d2a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar10,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_06 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625db0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar10->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02625ea0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -200) = 0x2625ea7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625eaf;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_06 = *(MethodInfo_2E1D2F0 **)(*(long *)(extraout_RDX_06 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625ec8;
        System_Linq_Enumerable_WhereEnumerableIterator_KeyValuePair_object__object_____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar31,method_06);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02625ea0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625ee7;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625eef;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_06 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f0b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar10->klass->_2).naturalAligment) &&
         ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_07 = *(MethodInfo_2E21B90 **)(*(long *)(extraout_RDX_06 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f41;
        System_Linq_Enumerable_WhereListIterator_KeyValuePair_object__object_____ctor
                  (pSVar12,pSVar10,pSVar31,method_07);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_02625f6d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_06 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d45;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d4d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_06 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d69;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d77;
    source_00 = (System_Collections_Generic_KeyValuePair_object__object__array *)
                il2cpp_runtime_helper_023051f0(pSVar10,pSVar13);
    if (source_00 != (System_Collections_Generic_KeyValuePair_object__object__array *)0x0) {
      method_05 = *(MethodInfo_2E1B730 **)(*(long *)(extraout_RDX_06 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -200) = 0x2625d96;
      System_Linq_Enumerable_WhereArrayIterator_KeyValuePair_object__object_____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_00,pSVar31,method_05);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -200) = 0x2625f83;
  pSVar30 = pSVar13;
  pSVar34 = pSVar10;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -200) = pSVar10;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0xd0) = pSVar31;
  *(long *)((long)ppSVar25 + -0xd8) = extraout_RDX_06;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0xe0) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0xe8) = pSVar13;
  if (*(long *)(extraout_RDX_07 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2625fb1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_07);
  }
  if (pSVar34 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02626263:
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626268;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626272;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x262627d;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_07);
label_0262627d:
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626288;
    il2cpp_runtime_helper_022b2fd0(pSVar34,pIVar15);
  }
  else {
    if (pSVar30 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02626263;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2625fdc;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar34->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626025;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_07 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626105;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar34->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_07 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626149;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar34->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar34,pSVar30,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_0262627d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626025:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x262602f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x262603a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar34,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_07 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26260c0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar34->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x026261b0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26261b7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26261bf;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_09 = *(MethodInfo_2E1D7F0 **)(*(long *)(extraout_RDX_07 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26261d8;
        System_Linq_Enumerable_WhereEnumerableIterator_Nullable_int_____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar34,pSVar30,method_09);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x026261b0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26261f7;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26261ff;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_07 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x262621b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar34->klass->_2).naturalAligment) &&
         ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_10 = *(MethodInfo_2E21E40 **)(*(long *)(extraout_RDX_07 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626251;
        System_Linq_Enumerable_WhereListIterator_Nullable_int_____ctor(pSVar12,pSVar34,pSVar30,method_10);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_0262627d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_07 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626055;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x262605d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_07 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626079;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626087;
    source_01 = (System_Nullable_int__array *)il2cpp_runtime_helper_023051f0(pSVar34,pSVar13);
    if (source_01 != (System_Nullable_int__array *)0x0) {
      method_08 = *(MethodInfo_2E1B970 **)(*(long *)(extraout_RDX_07 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x26260a6;
      System_Linq_Enumerable_WhereArrayIterator_Nullable_int_____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_01,pSVar30,method_08);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0xf0) = 0x2626293;
  pSVar31 = pSVar13;
  pSVar10 = pSVar34;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0xf0) = pSVar34;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0xf8) = pSVar30;
  *(long *)((long)ppSVar25 + -0x100) = extraout_RDX_07;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x108) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x110) = pSVar13;
  if (*(long *)(extraout_RDX_08 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26262c1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_08);
  }
  if (pSVar10 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02626573:
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626578;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626582;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262658d;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_08);
label_0262658d:
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626598;
    il2cpp_runtime_helper_022b2fd0(pSVar10,pIVar15);
  }
  else {
    if (pSVar31 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02626573;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26262ec;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar10->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626335;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_08 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626415;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar10->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_08 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626459;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar10->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar10,pSVar31,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_0262658d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626335:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262633f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262634a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar10,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_08 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26263d0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar10->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x026264c0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26264c7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26264cf;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_12 = *(MethodInfo_2E1F5E0 **)(*(long *)(extraout_RDX_08 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26264e8;
        System_Linq_Enumerable_WhereEnumerableIterator_Int32Enum____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar31,method_12);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x026264c0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626507;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262650f;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_08 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262652b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar10->klass->_2).naturalAligment) &&
         ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_13 = *(MethodInfo_2E220D0 **)(*(long *)(extraout_RDX_08 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626561;
        System_Linq_Enumerable_WhereListIterator_Int32Enum____ctor(pSVar12,pSVar10,pSVar31,method_13);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_0262658d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_08 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626365;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x262636d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_08 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626389;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0x118) = 0x2626397;
    source_02 = (System_Int32Enum_array *)il2cpp_runtime_helper_023051f0(pSVar10,pSVar13);
    if (source_02 != (System_Int32Enum_array *)0x0) {
      method_11 = *(MethodInfo_2E1BB90 **)(*(long *)(extraout_RDX_08 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26263b6;
      System_Linq_Enumerable_WhereArrayIterator_Int32Enum____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_02,pSVar31,method_11);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0x118) = 0x26265a3;
  pSVar30 = pSVar13;
  pSVar34 = pSVar10;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0x118) = pSVar10;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x120) = pSVar31;
  *(long *)((long)ppSVar25 + -0x128) = extraout_RDX_08;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x130) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x138) = pSVar13;
  if (*(long *)(extraout_RDX_09 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26265d1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_09);
  }
  if (pSVar34 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02626883:
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626888;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626892;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262689d;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_09);
label_0262689d:
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26268a8;
    il2cpp_runtime_helper_022b2fd0(pSVar34,pIVar15);
  }
  else {
    if (pSVar30 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02626883;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26265fc;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar34->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626645;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_09 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626725;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar34->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_09 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626769;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar34->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar34,pSVar30,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_0262689d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626645:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262664f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262665a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar34,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_09 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26266e0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar34->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x026267d0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26267d7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26267df;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_15 = *(MethodInfo_2E1FAD0 **)(*(long *)(extraout_RDX_09 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26267f8;
        System_Linq_Enumerable_WhereEnumerableIterator_NavMeshBuildSource____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar34,pSVar30,method_15);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x026267d0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626817;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262681f;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_09 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262683b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar34->klass->_2).naturalAligment) &&
         ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_16 = *(MethodInfo_2E22350 **)(*(long *)(extraout_RDX_09 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626871;
        System_Linq_Enumerable_WhereListIterator_NavMeshBuildSource____ctor(pSVar12,pSVar34,pSVar30,method_16)
        ;
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_0262689d;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_09 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626675;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x262667d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_09 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x2626699;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26266a7;
    source_03 = (UnityEngine_AI_NavMeshBuildSource_array *)il2cpp_runtime_helper_023051f0(pSVar34,pSVar13);
    if (source_03 != (UnityEngine_AI_NavMeshBuildSource_array *)0x0) {
      method_14 = *(MethodInfo_2E1BDA0 **)(*(long *)(extraout_RDX_09 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26266c6;
      System_Linq_Enumerable_WhereArrayIterator_NavMeshBuildSource____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_03,pSVar30,method_14);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0x140) = 0x26268b3;
  pSVar31 = pSVar13;
  pSVar10 = pSVar34;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0x140) = pSVar34;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x148) = pSVar30;
  *(long *)((long)ppSVar25 + -0x150) = extraout_RDX_09;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x158) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x160) = pSVar13;
  if (*(long *)(extraout_RDX_10 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x26268e1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_10);
  }
  if (pSVar10 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02626b93:
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b98;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626ba2;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626bad;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_10);
label_02626bad:
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626bb8;
    il2cpp_runtime_helper_022b2fd0(pSVar10,pIVar15);
  }
  else {
    if (pSVar31 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02626b93;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x262690c;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar10->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626955;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_10 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626a35;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar10->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_10 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626a79;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar10->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar10,pSVar31,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_02626bad;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626955:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x262695f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x262696a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar10,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_10 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x26269f0;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar10->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626ae0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626ae7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626aef;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_18 = *(MethodInfo_2E20140 **)(*(long *)(extraout_RDX_10 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b08;
        System_Linq_Enumerable_WhereEnumerableIterator_object____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar31,method_18);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626ae0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b27;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b2f;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_10 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b4b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar10->klass->_2).naturalAligment) &&
         ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_19 = *(MethodInfo_2E227E0 **)(*(long *)(extraout_RDX_10 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626b81;
        System_Linq_Enumerable_WhereListIterator_object____ctor(pSVar12,pSVar10,pSVar31,method_19);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_02626bad;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_10 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626985;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x262698d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_10 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x26269a9;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0x168) = 0x26269b7;
    source_04 = (System_Object_array *)il2cpp_runtime_helper_023051f0(pSVar10,pSVar13);
    if (source_04 != (System_Object_array *)0x0) {
      method_17 = *(MethodInfo_2E1C160 **)(*(long *)(extraout_RDX_10 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0x168) = 0x26269d6;
      System_Linq_Enumerable_WhereArrayIterator_object____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_04,pSVar31,method_17);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0x168) = 0x2626bc3;
  pSVar30 = pSVar13;
  pSVar34 = pSVar10;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0x168) = pSVar10;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x170) = pSVar31;
  *(long *)((long)ppSVar25 + -0x178) = extraout_RDX_10;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x180) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x188) = pSVar13;
  if (*(long *)(extraout_RDX_11 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626bf1;
    il2cpp_runtime_helper_02300a20(extraout_RDX_11);
  }
  if (pSVar34 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_02626ea3:
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626ea8;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626eb2;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626ebd;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_11);
label_02626ebd:
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626ec8;
    il2cpp_runtime_helper_022b2fd0(pSVar34,pIVar15);
  }
  else {
    if (pSVar30 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_02626ea3;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626c1c;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar34->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626c65;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_11 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626d45;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar34->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_11 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -400) = 0x2626d89;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar34->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar34,pSVar30,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_02626ebd;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626c65:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626c6f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626c7a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar34,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_11 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626d00;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar34->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626df0:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -400) = 0x2626df7;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626dff;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_21 = *(MethodInfo_2E20640 **)(*(long *)(extraout_RDX_11 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626e18;
        System_Linq_Enumerable_WhereEnumerableIterator_PlayerLoopSystem____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar34,pSVar30,method_21);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626df0;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626e37;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626e3f;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_11 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626e5b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar34->klass->_2).naturalAligment) &&
         ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_22 = *(MethodInfo_2E22A80 **)(*(long *)(extraout_RDX_11 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -400) = 0x2626e91;
        System_Linq_Enumerable_WhereListIterator_PlayerLoopSystem____ctor(pSVar12,pSVar34,pSVar30,method_22);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_02626ebd;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_11 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626c95;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626c9d;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_11 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626cb9;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -400) = 0x2626cc7;
    source_05 = (UnityEngine_LowLevel_PlayerLoopSystem_array *)il2cpp_runtime_helper_023051f0(pSVar34,pSVar13);
    if (source_05 != (UnityEngine_LowLevel_PlayerLoopSystem_array *)0x0) {
      method_20 = *(MethodInfo_2E1C390 **)(*(long *)(extraout_RDX_11 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -400) = 0x2626ce6;
      System_Linq_Enumerable_WhereArrayIterator_PlayerLoopSystem____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_05,pSVar30,method_20);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -400) = 0x2626ed3;
  pSVar31 = pSVar13;
  pSVar10 = pSVar34;
  il2cpp_runtime_helper_022b2fd0();
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -400) = pSVar34;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x198) = pSVar30;
  *(long *)((long)ppSVar25 + -0x1a0) = extraout_RDX_11;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x1a8) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x1b0) = pSVar13;
  if (*(long *)(extraout_RDX_12 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626f01;
    il2cpp_runtime_helper_02300a20(extraout_RDX_12);
  }
  if (pSVar10 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_026271b3:
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271b8;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271c2;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271cd;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,extraout_RDX_12);
label_026271cd:
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271d8;
    il2cpp_runtime_helper_022b2fd0(pSVar10,pIVar15);
  }
  else {
    if (pSVar31 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_026271b3;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x10);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626f2c;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    pSVar19 = pSVar10->klass;
    bVar20 = (pSVar19->_2).naturalAligment;
    if (*(byte *)(lVar8 + 0x130) <= bVar20) {
      pSVar13 = (System_Func_TSource__bool__o *)(pSVar19->_2).typeHierarchy;
      if (*(long *)((long)pSVar13 + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) != lVar8) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02626f75;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_12 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627055;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar10->klass;
        bVar20 = (pSVar19->_2).naturalAligment;
      }
      bVar21 = (pIVar15->_2).naturalAligment;
      if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_12 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627099;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar10->klass;
          bVar20 = (pSVar19->_2).naturalAligment;
        }
        bVar21 = (pIVar15->_2).naturalAligment;
        if ((bVar21 <= bVar20) && ((pSVar19->_2).typeHierarchy[(ulong)bVar21 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar10,pSVar31,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
      goto label_026271cd;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x20);
    bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02626f75:
    if ((bVar20 & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626f7f;
      lVar8 = il2cpp_runtime_helper_023009c0(lVar8);
    }
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626f8a;
    lVar8 = il2cpp_runtime_helper_023051f0(pSVar10,lVar8);
    if (lVar8 == 0) {
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_12 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627010;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar10->klass->_2).naturalAligment < bVar20) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
joined_r0x02627100:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627107;
          lVar8 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x262710f;
        pSVar14 = (System_Linq_Enumerable_WhereEnumerableIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
        method_24 = *(MethodInfo_2E20BB0 **)(*(long *)(extraout_RDX_12 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627128;
        System_Linq_Enumerable_WhereEnumerableIterator_RoleSpriteDefinition____ctor
                  (pSVar14,(System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar31,method_24);
        return (System_Collections_Generic_List_T__o *)pSVar14;
      }
      if ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar8 + 0x135);
        goto joined_r0x02627100;
      }
      lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x40);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2627147;
        lVar8 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x262714f;
      pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
      pIVar15 = *(Il2CppClass **)(*(long *)(extraout_RDX_12 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x262716b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar10->klass->_2).naturalAligment) &&
         ((pSVar10->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        method_25 = *(MethodInfo_2E22DE0 **)(*(long *)(extraout_RDX_12 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271a1;
        System_Linq_Enumerable_WhereListIterator_RoleSpriteDefinition____ctor
                  (pSVar12,pSVar10,pSVar31,method_25);
        return (System_Collections_Generic_List_T__o *)pSVar12;
      }
      goto label_026271cd;
    }
    lVar8 = *(long *)(*(long *)(extraout_RDX_12 + 0x38) + 0x28);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626fa5;
      lVar8 = il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626fad;
    pSVar12 = (System_Linq_Enumerable_WhereListIterator_TSource__o *)il2cpp_runtime_helper_023052d0(lVar8);
    pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(extraout_RDX_12 + 0x38) + 0x20);
    if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626fc9;
      pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
    }
    *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626fd7;
    source_06 = (PatreonEffects_RoleSpriteDefinition_array *)il2cpp_runtime_helper_023051f0(pSVar10,pSVar13);
    if (source_06 != (PatreonEffects_RoleSpriteDefinition_array *)0x0) {
      method_23 = *(MethodInfo_2E1C660 **)(*(long *)(extraout_RDX_12 + 0x38) + 0x30);
      *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x2626ff6;
      System_Linq_Enumerable_WhereArrayIterator_RoleSpriteDefinition____ctor
                ((System_Linq_Enumerable_WhereArrayIterator_TSource__o *)pSVar12,source_06,pSVar31,method_23);
      return (System_Collections_Generic_List_T__o *)pSVar12;
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0x1b8) = 0x26271e3;
  pSVar30 = pSVar13;
  pSVar34 = pSVar10;
  auVar35 = il2cpp_runtime_helper_022b2fd0();
  lVar8 = auVar35._8_8_;
  *(undefined8 *)((long)ppSVar25 + -0x1b8) = unaff_RBP;
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0x1c0) = pSVar10;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x1c8) = pSVar31;
  *(long *)((long)ppSVar25 + -0x1d0) = extraout_RDX_12;
  *(System_Linq_Enumerable_WhereListIterator_TSource__o **)((long)ppSVar25 + -0x1d8) = pSVar12;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x1e0) = pSVar13;
  *(long *)((long)ppSVar25 + -0x1e8) = auVar35._0_8_;
  if (*(long *)(lVar8 + 0x38) == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627213;
    il2cpp_runtime_helper_02300a20(lVar8);
  }
  if (pSVar34 == (System_Collections_Generic_List_TSource__o *)0x0) {
    puVar11 = &"source";
label_026274d7:
    *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26274dc;
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
    *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26274e6;
    pSVar28 = System_Linq_Error__ArgumentNull(pSVar5,(MethodInfo *)0x0);
    *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26274f1;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2b10(pSVar28,lVar8);
  }
  else {
    if (pSVar30 == (System_Func_TSource__bool__o *)0x0) {
      puVar11 = (undefined8 *)&"predicate";
      goto label_026274d7;
    }
    pIVar15 = *(Il2CppClass **)(*(long *)(lVar8 + 0x38) + 0x10);
    if (((pIVar15->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262723e;
      pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
    }
    pSVar19 = pSVar34->klass;
    bVar21 = (pSVar19->_2).naturalAligment;
    bVar20 = (pIVar15->_2).naturalAligment;
    if (bVar21 < bVar20) {
      lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
      bVar20 = *(byte *)(lVar16 + 0x135);
joined_r0x02627262:
      if ((bVar20 & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627291;
        lVar16 = il2cpp_runtime_helper_023009c0(lVar16);
      }
      *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262729c;
      lVar16 = il2cpp_runtime_helper_023051f0(pSVar34,lVar16);
      if (lVar16 != 0) {
        lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x28);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26272b7;
          lVar16 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26272bf;
        pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(lVar16);
        pSVar13 = *(System_Func_TSource__bool__o **)(*(long *)(lVar8 + 0x38) + 0x20);
        pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x30);
        if ((pSVar13[2].fields.delegate_trampoline & 0x10000000000) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26272e2;
          pSVar13 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023009c0(pSVar13);
        }
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26272f0;
        lVar16 = il2cpp_runtime_helper_023051f0(pSVar34,pSVar13);
        if (lVar16 != 0) {
          uVar29 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x30);
          *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262730c;
          (*pcVar2)(pSVar4,lVar16,pSVar30,uVar29);
          return pSVar4;
        }
        goto label_026274fc;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(lVar8 + 0x38) + 0x38);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627326;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((pSVar34->klass->_2).naturalAligment < bVar20) {
        lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar16 + 0x135);
joined_r0x0262741b:
        if ((bVar20 & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627422;
          lVar16 = il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262742a;
        pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(lVar16);
        pcVar2 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x58);
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627440;
        (*pcVar2)(pSVar4,pSVar34,pSVar30);
        return pSVar4;
      }
      if ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x50);
        bVar20 = *(byte *)(lVar16 + 0x135);
        goto joined_r0x0262741b;
      }
      lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x40);
      if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627464;
        lVar16 = il2cpp_runtime_helper_023009c0();
      }
      *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262746c;
      pSVar4 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(lVar16);
      pIVar15 = *(Il2CppClass **)(*(long *)(lVar8 + 0x38) + 0x38);
      pSVar13 = (System_Func_TSource__bool__o *)**(undefined8 **)(*(long *)(lVar8 + 0x38) + 0x48);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262748f;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= (pSVar34->klass->_2).naturalAligment) &&
         ((pSVar34->klass->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        uVar29 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48);
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26274c2;
        (*(code *)pSVar13)(pSVar4,pSVar34,pSVar30,uVar29);
        return pSVar4;
      }
    }
    else {
      if ((pSVar19->_2).typeHierarchy[(ulong)bVar20 - 1] != pIVar15) {
        lVar16 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20);
        bVar20 = *(byte *)(lVar16 + 0x135);
        goto joined_r0x02627262;
      }
      pIVar15 = *(Il2CppClass **)(*(long *)(lVar8 + 0x38) + 0x10);
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x262736b;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
        pSVar19 = pSVar34->klass;
        bVar21 = (pSVar19->_2).naturalAligment;
      }
      bVar20 = (pIVar15->_2).naturalAligment;
      if ((bVar20 <= bVar21) && ((pSVar19->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
        pIVar15 = *(Il2CppClass **)(*(long *)(lVar8 + 0x38) + 0x10);
        if (((pIVar15->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26273af;
          pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
          pSVar19 = pSVar34->klass;
          bVar21 = (pSVar19->_2).naturalAligment;
        }
        bVar20 = (pIVar15->_2).naturalAligment;
        if ((bVar20 <= bVar21) && ((pSVar19->_2).typeHierarchy[(ulong)bVar20 - 1] == pIVar15)) {
          pSVar4 = (System_Collections_Generic_List_T__o *)
                   (*(pSVar19->vtable)._15_Remove.methodPtr)
                             (pSVar34,pSVar30,(pSVar19->vtable)._15_Remove.method);
          return pSVar4;
        }
      }
    }
  }
  *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x26274fc;
  il2cpp_runtime_helper_022b2fd0(pSVar34,pIVar15);
label_026274fc:
  *(undefined8 *)((long)ppSVar25 + -0x1f0) = 0x2627507;
  pSVar31 = pSVar13;
  pSVar10 = pSVar34;
  il2cpp_runtime_helper_022b2fd0(pSVar34,pSVar13);
  *(System_Collections_Generic_List_TSource__o **)((long)ppSVar25 + -0x1f0) = pSVar34;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x1f8) = pSVar30;
  *(System_Func_TSource__bool__o **)((long)ppSVar25 + -0x200) = pSVar13;
  lVar8 = *(long *)(extraout_RDX_13 + 0x38);
  if (lVar8 == 0) {
    *(undefined8 *)((long)ppSVar25 + -0x208) = 0x262752f;
    il2cpp_runtime_helper_02300a20(extraout_RDX_13);
    lVar8 = *(long *)(extraout_RDX_13 + 0x38);
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)(*(code *)**(undefined8 **)(lVar8 + 0x10))(pSVar10,pSVar31)
  ;
  return pSVar4;
}


// Utility.Util$$EnumToList<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_T__o* Utility_Util__EnumToList___Il2CppFullySharedGenericType_ (const MethodInfo_2650800* method);
// 0x2750800

System_Collections_Generic_List_T__o *
Utility_Util__EnumToList___Il2CppFullySharedGenericType_(MethodInfo_2650800 *method)

{
  System_RuntimeTypeHandle_o handle;
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo_2650800_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Array_o *pSVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  undefined1 auVar5 [16];
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_2650800_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar2 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict_Int32Enum_ (const MethodInfo_2650060* method);
// 0x2750060

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict_Int32Enum_(MethodInfo_2650060 *method)

{
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  int32_t value;
  bool_conflict bVar1;
  MethodInfo_2650060_RGCTXs *pMVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_Dictionary_string__T__o *__this_03;
  System_Collections_Generic_List_T__o *__this_04;
  System_String_o *key;
  long *plVar4;
  long unaff_R15;
  undefined1 auVar5 [12];
  undefined8 in_stack_ffffffffffffff98;
  Il2CppClass *in_stack_ffffffffffffffa0;
  Il2CppObject *in_stack_ffffffffffffffa8;
  undefined4 local_50;
  undefined4 uStack_4c;
  Il2CppClass *local_48;
  Il2CppObject *pIStack_40;
  int32_t local_38;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_2650060_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_2650060_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      pMVar2 = method->rgctx_data;
    }
  }
  local_48 = (Il2CppClass *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  _local_38 = (InvokerMethod)0x0;
  pIVar3 = pMVar2->_0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_03 = (System_Collections_Generic_Dictionary_string__T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_3100780 *)
             method->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = Utility_Util__EnumToList_Int32Enum_
                        ((MethodInfo_2650770 *)method->rgctx_data->_2_Utility_Util_EnumToList_T_);
  if (__this_04 != (System_Collections_Generic_List_T__o *)0x0) {
    System_Collections_Generic_List_Int32Enum___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_04,
               (MethodInfo_3601C00 *)method->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator);
    _local_38 = (InvokerMethod)CONCAT44(uStack_4c,local_50);
    local_48 = in_stack_ffffffffffffffa0;
    pIStack_40 = in_stack_ffffffffffffffa8;
    if (__this_03 == (System_Collections_Generic_Dictionary_string__T__o *)0x0) {
      __this_00.fields._8_8_ = in_stack_ffffffffffffffa0;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_00.fields._current = in_stack_ffffffffffffffa8;
      bVar1 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                        (__this_00,(MethodInfo_3216100 *)&stack0xffffffffffffffb8);
      if ((char)bVar1 != '\0') goto label_02750203;
      unaff_R15 = 0;
    }
    else {
      unaff_R15 = 0;
      while (__this.fields._8_8_ = in_stack_ffffffffffffffa0,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98,
            __this.fields._current = in_stack_ffffffffffffffa8,
            bVar1 = System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext
                              (__this,(MethodInfo_3216100 *)&stack0xffffffffffffffb8), (char)bVar1 != '\0') {
        value = local_38;
        in_stack_ffffffffffffffa0 = method->rgctx_data->_8_T;
        if (((in_stack_ffffffffffffffa0->_2).field_0x6d & 1) == 0) {
          in_stack_ffffffffffffffa0 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(in_stack_ffffffffffffffa0);
        }
        in_stack_ffffffffffffffa8 = (Il2CppObject *)0xffffffffffffffff;
        key = System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffa0,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__Int32Enum___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_03,(Il2CppObject *)key,
                   value,(MethodInfo_31013D0 *)
                         method->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext);
      }
    }
    while( true ) {
      __this_01.fields._8_8_ = in_stack_ffffffffffffffa0;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_01.fields._current = in_stack_ffffffffffffffa8;
      System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
                (__this_01,(MethodInfo_32160F0 *)&stack0xffffffffffffffb8);
      if (unaff_R15 == 0) {
        return __this_03;
      }
label_027501fb:
      il2cpp_runtime_helper_022fefe0(unaff_R15);
label_02750203:
      in_stack_ffffffffffffffa0 = method->rgctx_data->_8_T;
      if (((in_stack_ffffffffffffffa0->_2).field_0x6d & 1) == 0) {
        in_stack_ffffffffffffffa0 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(in_stack_ffffffffffffffa0);
      }
      in_stack_ffffffffffffffa8 = (Il2CppObject *)0xffffffffffffffff;
      System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffa0,(MethodInfo *)0x0);
      auVar5 = il2cpp_runtime_helper_022b2c90();
      if (auVar5._8_4_ != 1) break;
      plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
      unaff_R15 = *plVar4;
      __cxa_end_catch();
    }
    __this_02.fields._8_8_ = in_stack_ffffffffffffffa0;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
    __this_02.fields._current = in_stack_ffffffffffffffa8;
    System_Collections_Generic_List_Enumerator_Int32Enum___Dispose
              (__this_02,(MethodInfo_32160F0 *)&stack0xffffffffffffffb8);
    _Unwind_Resume(auVar5._0_8_);
  }
  il2cpp_runtime_helper_022b2c90();
  goto label_027501fb;
}


// Utility.Util$$EnumToDict<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_Dictionary_string__T__o* Utility_Util__EnumToDict___Il2CppFullySharedGenericType_ (const MethodInfo_2650300* method);
// 0x2750300

System_Collections_Generic_Dictionary_string__T__o *
Utility_Util__EnumToDict___Il2CppFullySharedGenericType_(MethodInfo_2650300 *method)

{
  byte bVar1;
  Il2CppMethodPointer pIVar2;
  MethodInfo *pMVar3;
  InvokerMethod pIVar4;
  code *pcVar5;
  undefined8 *puVar6;
  MethodInfo_2650300 *pMVar7;
  char cVar8;
  long lVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  void *pvVar12;
  size_t *psVar13;
  MethodInfo_2650300_RGCTXs *pMVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  MethodInfo_2650300 *pMVar18;
  void *pvVar19;
  undefined8 *puVar20;
  void *pvVar21;
  void *pvVar22;
  size_t __n;
  void *__src;
  undefined1 auVar23 [12];
  undefined8 uStack_90;
  long alStack_88 [2];
  undefined8 *puStack_78;
  long lStack_70;
  void *pvStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  void *pvStack_50;
  MethodInfo_2650300_RGCTXs *pMStack_48;
  void *pvStack_40;
  MethodInfo_2650300 *pMStack_38;
  
  pMStack_48 = method->rgctx_data;
  if (pMStack_48 == (MethodInfo_2650300_RGCTXs *)0x0) {
    uStack_90 = 0x2750329;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    pMStack_48 = method->rgctx_data;
    if (pMStack_48 == (MethodInfo_2650300_RGCTXs *)0x0) {
      uStack_90 = 0x275033a;
      il2cpp_runtime_helper_02300a20(method);
      pMStack_48 = method->rgctx_data;
    }
  }
  pIVar10 = pMStack_48->_8_T;
  uVar15 = (pMStack_48->_5_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  pvStack_40 = (void *)(ulong)uVar15;
  uStack_58 = (ulong)(pIVar10->_2).actualSize;
  if (((pMStack_48->_5_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_90 = 0x275036a;
    lVar9 = il2cpp_runtime_helper_023009c0();
    uVar15 = *(uint *)(lVar9 + 0xfc);
    pMStack_48 = method->rgctx_data;
    pIVar10 = pMStack_48->_8_T;
  }
  lVar9 = -((ulong)(uVar15 + 0x10) + 0xf & 0xfffffffffffffff0);
  lVar16 = (long)alStack_88 + lVar9;
  lStack_70 = lVar16;
  pMStack_38 = method;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)alStack_88 + lVar9 + -8) = 0x27503a5;
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar10);
    pMStack_48 = method->rgctx_data;
  }
  pvVar19 = pvStack_40;
  __n = uStack_58;
  alStack_88[1] = lVar16 - ((ulong)((pIVar10->_2).actualSize + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar17 = uStack_58 + 0xf & 0xfffffffffffffff0;
  __src = (void *)(alStack_88[1] - uVar17);
  puStack_78 = (undefined8 *)((long)__src - uVar17);
  uVar11 = (long)pvStack_40 + 0xfU & 0xfffffffffffffff0;
  pvVar21 = (void *)((long)puStack_78 - uVar11);
  pvVar22 = (void *)((long)pvVar21 - uVar11);
  *(undefined8 *)((long)pvVar22 + -8) = 0x275041b;
  memset(pvVar22,0,(size_t)pvVar19);
  pvVar19 = (void *)((long)pvVar22 - uVar17);
  pvStack_50 = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2750432;
  memset(pvVar19,0,__n);
  pIVar10 = pMStack_48->_0_System_Collections_Generic_Dictionary_string__T_;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x2750447;
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pMVar18 = pMStack_38;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2750453;
  pMStack_48 = (MethodInfo_2650300_RGCTXs *)il2cpp_runtime_helper_023052d0(pIVar10);
  pIVar2 = pMVar18->rgctx_data->_1_System_Collections_Generic_Dictionary_string__T___ctor->methodPointer;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2750464;
  (*pIVar2)();
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x275047c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = pMVar18->rgctx_data->_2_Utility_Util_EnumToList_T_->methodPointer;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2750486;
  pvVar12 = (void *)(*pIVar2)();
  if (pvVar12 != (void *)0x0) {
    pMVar3 = pMVar18->rgctx_data->_4_System_Collections_Generic_List_T__GetEnumerator;
    pIVar2 = pMVar3->methodPointer;
    pIVar4 = pMVar3->invoker_method;
    pvStack_68 = pvVar21;
    *(undefined8 *)((long)pvVar19 + -8) = 0x27504ab;
    (*pIVar4)(pIVar2,pMVar3,pvVar12,&pvStack_68,pvVar21);
    pvVar12 = pvStack_40;
    *(undefined8 *)((long)pvVar19 + -8) = 0x27504ba;
    memcpy(pvVar22,pvVar21,(size_t)pvVar12);
    puVar6 = puStack_78;
    pvStack_40 = pvVar22;
    if (pMStack_48 == (MethodInfo_2650300_RGCTXs *)0x0) {
      pcVar5 = ((pMVar18->rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)->_1).image;
      *(undefined8 *)((long)pvVar19 + -8) = 0x27505b6;
      cVar8 = (*pcVar5)(pvVar22);
      if (cVar8 != '\0') goto label_02750615;
    }
    else {
      while( true ) {
        pcVar5 = ((pMVar18->rgctx_data[1]._0_System_Collections_Generic_Dictionary_string__T_)->_1).image;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2750507;
        cVar8 = (*pcVar5)(pvVar22);
        if (cVar8 == '\0') break;
        pMVar3 = pMVar18->rgctx_data->_6_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar2 = pMVar3->methodPointer;
        pIVar4 = pMVar3->invoker_method;
        pvStack_68 = __src;
        *(undefined8 *)((long)pvVar19 + -8) = 0x275052a;
        (*pIVar4)(pIVar2,pMVar3,pvVar22,&pvStack_68,__src);
        pvVar22 = pvStack_50;
        uVar11 = uStack_58;
        *(undefined8 *)((long)pvVar19 + -8) = 0x275053a;
        memcpy(pvVar22,__src,uVar11);
        pMVar14 = pMVar18->rgctx_data;
        pIVar10 = pMVar14->_8_T;
        if (((pIVar10->_2).field_0x6d & 1) == 0) {
          *(undefined8 *)((long)pvVar19 + -8) = 0x2750553;
          pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar10);
          pMVar14 = pMVar18->rgctx_data;
        }
        pvVar22 = pvStack_50;
        lVar9 = alStack_88[1];
        pMVar3 = pMVar14->_10_System_Collections_Generic_Dictionary_string__T__Add;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2750571;
        il2cpp_runtime_helper_022b35c0(pIVar10,pMVar3,lVar9,pvVar22,0,&pvStack_68);
        pvVar22 = pvStack_50;
        uVar11 = uStack_58;
        pvVar21 = pvStack_68;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2750585;
        memcpy(puVar6,pvVar22,uVar11);
        pMVar7 = pMStack_38;
        pvVar22 = pvStack_40;
        pMVar14 = pMStack_48;
        pMVar3 = pMVar18->rgctx_data->_11_System_Collections_Generic_List_Enumerator_T__MoveNext;
        pIVar2 = pMVar3->methodPointer;
        puVar20 = puVar6;
        if (-1 < (int)(pMVar18->rgctx_data->_8_T->_1).byval_arg.bits) {
          puVar20 = (undefined8 *)*puVar6;
        }
        pIVar4 = pMVar3->invoker_method;
        pvStack_68 = pvVar21;
        puStack_60 = puVar20;
        *(undefined8 *)((long)pvVar19 + -8) = 0x27504fa;
        (*pIVar4)(pIVar2,pMVar3,pMVar14,&pvStack_68,puVar20);
        pMVar18 = pMVar7;
      }
    }
    __n = 0;
    pMVar14 = pMVar18->rgctx_data;
    pIVar10 = pMVar14->_5_System_Collections_Generic_List_Enumerator_T_;
    bVar1 = (pIVar10->_2).field_0x6d;
    while( true ) {
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x27505d3;
        pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pMVar14 = pMVar18->rgctx_data;
      }
      lVar9 = lStack_70;
      pMVar3 = pMVar14[1]._1_System_Collections_Generic_Dictionary_string__T___ctor;
      *(undefined8 *)((long)pvVar19 + -8) = 0x27505f0;
      il2cpp_runtime_helper_022b35c0(pIVar10,pMVar3,lVar9,pvVar22,0,0);
      if (__n == 0) {
        return (System_Collections_Generic_Dictionary_string__T__o *)pMStack_48;
      }
label_0275060d:
      *(undefined8 *)((long)pvVar19 + -8) = 0x2750615;
      il2cpp_runtime_helper_022fefe0(__n);
label_02750615:
      pMVar3 = pMVar18->rgctx_data->_6_System_Collections_Generic_List_Enumerator_T__get_Current;
      pIVar2 = pMVar3->methodPointer;
      pIVar4 = pMVar3->invoker_method;
      pvStack_68 = __src;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2750631;
      (*pIVar4)(pIVar2,pMVar3,pvVar22,&pvStack_68,__src);
      pvVar22 = pvStack_50;
      uVar11 = uStack_58;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2750641;
      memcpy(pvVar22,__src,uVar11);
      pMVar14 = pMStack_38->rgctx_data;
      pIVar10 = pMVar14->_8_T;
      if (((pIVar10->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x275065b;
        pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pMVar14 = pMStack_38->rgctx_data;
      }
      pvVar22 = pvStack_50;
      lVar9 = alStack_88[1];
      pMVar3 = pMVar14->_10_System_Collections_Generic_Dictionary_string__T__Add;
      *(undefined8 *)((long)pvVar19 + -8) = 0x275067e;
      il2cpp_runtime_helper_022b35c0(pIVar10,pMVar3,lVar9,pvVar22,0,&pvStack_68);
      pvVar22 = pvStack_50;
      uVar11 = uStack_58;
      puVar6 = puStack_78;
      *(undefined8 *)((long)pvVar19 + -8) = 0x275068f;
      memcpy(puVar6,pvVar22,uVar11);
      *(undefined8 *)((long)pvVar19 + -8) = 0x2750694;
      auVar23 = il2cpp_runtime_helper_022b2c90();
      if (auVar23._8_4_ != 1) break;
      *(undefined8 *)((long)pvVar19 + -8) = 0x27506e2;
      psVar13 = (size_t *)__cxa_begin_catch(auVar23._0_8_);
      __n = *psVar13;
      *(undefined8 *)((long)pvVar19 + -8) = 0x27506ea;
      __cxa_end_catch();
      pMVar14 = pMStack_38->rgctx_data;
      pIVar10 = pMVar14->_5_System_Collections_Generic_List_Enumerator_T_;
      bVar1 = (pIVar10->_2).field_0x6d;
      pMVar18 = pMStack_38;
      pvVar22 = pvStack_40;
    }
    pMVar14 = pMStack_38->rgctx_data;
    pIVar10 = pMVar14->_5_System_Collections_Generic_List_Enumerator_T_;
    if (((pIVar10->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)pvVar19 + -8) = 0x275072c;
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      pMVar14 = pMStack_38->rgctx_data;
    }
    pvVar22 = pvStack_40;
    lVar9 = lStack_70;
    pMVar3 = pMVar14[1]._1_System_Collections_Generic_Dictionary_string__T___ctor;
    *(undefined8 *)((long)pvVar19 + -8) = 0x275074e;
    il2cpp_runtime_helper_022b35c0(pIVar10,pMVar3,lVar9,pvVar22,0,0);
    *(undefined8 *)((long)pvVar19 + -8) = 0x275075b;
    _Unwind_Resume(auVar23._0_8_);
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x275060d;
  il2cpp_runtime_helper_022b2c90();
  goto label_0275060d;
}


// Utility.Util$$FormatFloat
// il2cpp: System_String_o* Utility_Util__FormatFloat (float num, int32_t decimalPlaces, const MethodInfo* method);
// 0x4494f10

System_String_o * Utility_Util__FormatFloat(float num,int32_t decimalPlaces,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  float extraout_XMM0_Da;
  float local_c;
  
  local_c = num;
  if (g_data_057ae926 == '\0') {
    il2cpp_runtime_helper_023445d0(&"0.");
    num = (float)il2cpp_runtime_helper_023445d0();
    g_data_057ae926 = '\x01';
  }
  method_00 = "0";
  if (decimalPlaces != 0) {
    pSVar1 = System_String__CreateString_3afdbf0((System_String_o *)0x0,0x30,decimalPlaces,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)System_String__Concat_3ae5ba0("0.",pSVar1,(MethodInfo *)0x0);
    num = extraout_XMM0_Da;
  }
  pSVar1 = System_Single__ToString_3cccfe0(num,(System_String_o *)&local_c,method_00);
  return pSVar1;
}


// Utility.Util$$MultiplyVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__MultiplyVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x4494f90

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
// 0x4494fa0

UnityEngine_Vector2_o
Utility_Util__MultiplyVectors_4394fa0(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  
  UVar1.fields.y = a.fields.y * b.fields.y;
  UVar1.fields.x = a.fields.x * b.fields.x;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Utility.Util$$DivideVectors
// il2cpp: UnityEngine_Vector3_o Utility_Util__DivideVectors (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x4494fb0

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
// 0x4494fc0

UnityEngine_Vector2_o
Utility_Util__DivideVectors_4394fc0(UnityEngine_Vector2_o a,UnityEngine_Vector2_o b,MethodInfo *method)

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
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems_object_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_2651630* method);
// 0x2751630

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems_object_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_2651630 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_List_T__array *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar6;
  MethodInfo_2651630_RGCTXs *pMVar7;
  Il2CppClass *pIVar8;
  System_Collections_Generic_List_List_T___o *__this_02;
  undefined8 *puVar9;
  System_Collections_Generic_List_object__o *unaff_RBP;
  int iVar10;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  Il2CppObject *item;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  pMVar7 = method->rgctx_data;
  if (pMVar7 == (MethodInfo_2651630_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar7 = method->rgctx_data;
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  pIVar8 = pMVar7->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_02 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_helper_023052d0(pIVar8);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             (MethodInfo_362B8B0 *)method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if ((items->fields)._size == 0) {
      return __this_02;
    }
    pIVar8 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    if (((pIVar8->_2).field_0x6d & 1) == 0) {
      pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    unaff_RBP = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar8);
    System_Collections_Generic_List_object____ctor
              (unaff_RBP,(MethodInfo_362B8B0 *)method->rgctx_data->_4_System_Collections_Generic_List_T___ctor
              );
    if (__this_02 != (System_Collections_Generic_List_List_T___o *)0x0) {
      pMVar3 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_02->fields)._items;
      if (pSVar4 != (System_Collections_Generic_List_T__array *)0x0) {
        uVar2 = (__this_02->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_02->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (System_Collections_Generic_List_T__o *)unaff_RBP;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,unaff_RBP);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)unaff_RBP,
                     (MethodInfo_362C220 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)items,
                   (MethodInfo_362CEB0 *)
                   method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator);
        iVar10 = 0;
        pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar13 = (Il2CppType *)local_48._8_8_;
        item = local_38;
        while( true ) {
          __this.fields._8_8_ = pIVar13;
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this.fields._current = item;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') {
            unaff_RBP = (System_Collections_Generic_List_object__o *)0x0;
            goto label_027518a9;
          }
          iVar10 = iVar10 + 1;
          pIVar14 = item;
          if (groupSize + 1 <= iVar10) break;
label_02751860:
          if (unaff_RBP == (System_Collections_Generic_List_object__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
label_027518d5:
            il2cpp_runtime_helper_022b2c90();
            goto label_027518da;
          }
          pMVar3 = method->rgctx_data->_11_System_Collections_Generic_List_T__Add;
          piVar1 = &(unaff_RBP->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (unaff_RBP->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto label_027518d5;
          uVar2 = (unaff_RBP->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (unaff_RBP->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar2,item);
            item = pIVar14;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (unaff_RBP,item,(MethodInfo_362C220 *)pMVar3->klass->rgctx_data[0xe].method);
            item = pIVar14;
          }
        }
        pIVar8 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
        if (((pIVar8->_2).field_0x6d & 1) == 0) {
          pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar8);
        }
        unaff_RBP = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar8);
        System_Collections_Generic_List_object____ctor
                  (unaff_RBP,
                   (MethodInfo_362B8B0 *)method->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
        pMVar3 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_02->fields)._items;
        if (pSVar4 != (System_Collections_Generic_List_T__array *)0x0) {
          uVar2 = (__this_02->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_02->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (System_Collections_Generic_List_T__o *)unaff_RBP;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,unaff_RBP);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)unaff_RBP,
                       (MethodInfo_362C220 *)pMVar3->klass->rgctx_data[0xe].method);
          }
          iVar10 = 1;
          goto label_02751860;
        }
label_027518da:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  item = pIVar14;
  do {
    auVar11 = il2cpp_runtime_helper_022fefe0(unaff_RBP);
    if (auVar11._8_4_ != 1) {
      __this_01.fields._8_8_ = pIVar13;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_01.fields._current = item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar11._0_8_);
    }
    puVar9 = (undefined8 *)__cxa_begin_catch(auVar11._0_8_);
    unaff_RBP = (System_Collections_Generic_List_object__o *)*puVar9;
    __cxa_end_catch();
label_027518a9:
    __this_00.fields._8_8_ = pIVar13;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_00.fields._current = item;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (unaff_RBP != (System_Collections_Generic_List_object__o *)0x0);
  return __this_02;
}


// Utility.Util$$GroupItems<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupItems___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t groupSize, const MethodInfo_2651980* method);
// 0x2751980

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupItems___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t groupSize,MethodInfo_2651980 *method)

{
  Il2CppMethodPointer pIVar1;
  MethodInfo *pMVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  Il2CppClass *pIVar14;
  System_Collections_Generic_List_List_T___c *pSVar15;
  System_Collections_Generic_List_List_T___c *pSVar16;
  undefined8 *puVar17;
  MethodInfo_2651980_RGCTXs *pMVar18;
  ulong __n;
  System_Collections_Generic_List_List_T___c *__src;
  void *pvVar19;
  System_Collections_Generic_List_List_T___c *__src_00;
  ulong uVar20;
  undefined1 auVar21 [12];
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  System_Collections_Generic_List_List_T___c *local_58;
  undefined1 *local_50;
  int local_44;
  void *local_40;
  System_Collections_Generic_List_List_T___c *local_38;
  
  pMVar18 = method->rgctx_data;
  local_44 = groupSize;
  if (pMVar18 == (MethodInfo_2651980_RGCTXs *)0x0) {
    uStack_90 = 0x27519ab;
    il2cpp_runtime_helper_02300a20(method);
    pMVar18 = method->rgctx_data;
  }
  uVar10 = (pMVar18->_7_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  __n = (ulong)uVar10;
  auStack_88._32_8_ = ZEXT48((pMVar18->_10_T->_2).actualSize);
  local_58 = (System_Collections_Generic_List_List_T___c *)items;
  if (((pMVar18->_7_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_90 = 0x27519dc;
    lVar12 = il2cpp_runtime_helper_023009c0();
    uVar10 = *(uint *)(lVar12 + 0xfc);
    pMVar18 = method->rgctx_data;
  }
  uVar5 = auStack_88._32_8_;
  local_50 = auStack_88 + -((ulong)(uVar10 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar20 = auStack_88._32_8_ + 0xf & 0xfffffffffffffff0;
  __src_00 = (System_Collections_Generic_List_List_T___c *)(local_50 + -uVar20);
  uVar13 = __n + 0xf & 0xfffffffffffffff0;
  auStack_88._16_8_ = (long)__src_00 - uVar13;
  pvVar19 = (void *)(auStack_88._16_8_ - uVar13);
  auStack_88._8_8_ = __n;
  local_40 = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2751a47;
  memset(pvVar19,0,__n);
  pvVar19 = (void *)((long)pvVar19 - uVar20);
  auStack_88._24_8_ = pvVar19;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2751a5e;
  memset(pvVar19,0,uVar5);
  pIVar14 = pMVar18->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar14->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751a6f;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __src = local_58;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2751a7b;
  pSVar15 = (System_Collections_Generic_List_List_T___c *)il2cpp_runtime_helper_023052d0(pIVar14);
  pIVar1 = method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor->methodPointer;
  *(undefined8 *)((long)pvVar19 + -8) = 0x2751a8b;
  (*pIVar1)(pSVar15);
  if (__src != (System_Collections_Generic_List_List_T___c *)0x0) {
    pIVar1 = method->rgctx_data->_3_System_Collections_Generic_List_T__get_Count->methodPointer;
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751aa1;
    iVar11 = (*pIVar1)(__src);
    if (iVar11 == 0) {
      return (System_Collections_Generic_List_List_T___o *)pSVar15;
    }
    pIVar14 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    if (((pIVar14->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751abf;
      pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751ac7;
    pSVar16 = (System_Collections_Generic_List_List_T___c *)il2cpp_runtime_helper_023052d0(pIVar14);
    pIVar1 = method->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751ad7;
    (*pIVar1)(pSVar16);
    if (pSVar15 != (System_Collections_Generic_List_List_T___c *)0x0) {
      pMVar2 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
      pIVar1 = pMVar2->methodPointer;
      pIVar3 = pMVar2->invoker_method;
      auStack_88._40_8_ = pSVar15;
      local_38 = pSVar16;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751b03;
      (*pIVar3)(pIVar1,pMVar2,pSVar15,&local_38,pSVar16);
      pSVar15 = local_58;
      __src = (System_Collections_Generic_List_List_T___c *)auStack_88._16_8_;
      pMVar2 = method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator;
      pIVar1 = pMVar2->methodPointer;
      local_38 = (System_Collections_Generic_List_List_T___c *)auStack_88._16_8_;
      pIVar3 = pMVar2->invoker_method;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751b23;
      (*pIVar3)(pIVar1,pMVar2,pSVar15,&local_38,__src);
      pvVar8 = local_40;
      uVar5 = auStack_88._8_8_;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751b33;
      memcpy(pvVar8,__src,uVar5);
      local_44 = local_44 + 1;
      iVar11 = 0;
      while( true ) {
        pvVar8 = local_40;
        pIVar1 = method->rgctx_data->_12_System_Collections_Generic_List_Enumerator_T__MoveNext->methodPointer
        ;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751b5c;
        cVar9 = (*pIVar1)(pvVar8);
        pvVar8 = local_40;
        if (cVar9 == '\0') {
          __src = (System_Collections_Generic_List_List_T___c *)0x0;
          goto label_02751c3a;
        }
        pMVar2 = method->rgctx_data->_8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar1 = pMVar2->methodPointer;
        pIVar3 = pMVar2->invoker_method;
        local_38 = __src_00;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751b81;
        (*pIVar3)(pIVar1,pMVar2,pvVar8,&local_38,__src_00);
        uVar6 = auStack_88._32_8_;
        uVar5 = auStack_88._24_8_;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751b91;
        memcpy((void *)uVar5,__src_00,uVar6);
        uVar5 = auStack_88._40_8_;
        iVar11 = iVar11 + 1;
        if (local_44 <= iVar11) {
          pIVar14 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
          if (((pIVar14->_2).field_0x6d & 1) == 0) {
            *(undefined8 *)((long)pvVar19 + -8) = 0x2751bb8;
            pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar14);
          }
          *(undefined8 *)((long)pvVar19 + -8) = 0x2751bcc;
          pSVar16 = (System_Collections_Generic_List_List_T___c *)il2cpp_runtime_helper_023052d0(pIVar14);
          pIVar1 = method->rgctx_data->_4_System_Collections_Generic_List_T___ctor->methodPointer;
          *(undefined8 *)((long)pvVar19 + -8) = 0x2751bdc;
          (*pIVar1)(pSVar16);
          pMVar2 = method->rgctx_data->_5_System_Collections_Generic_List_List_T___Add;
          pIVar1 = pMVar2->methodPointer;
          pIVar3 = pMVar2->invoker_method;
          local_38 = pSVar16;
          *(undefined8 *)((long)pvVar19 + -8) = 0x2751bf8;
          (*pIVar3)(pIVar1,pMVar2,(void *)uVar5,&local_38,pSVar16);
          iVar11 = 1;
          __src = (System_Collections_Generic_List_List_T___c *)uVar5;
        }
        uVar6 = auStack_88._32_8_;
        uVar5 = auStack_88._24_8_;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751c0e;
        memcpy(__src_00,(void *)uVar5,uVar6);
        if (pSVar16 == (System_Collections_Generic_List_List_T___c *)0x0) break;
        pMVar2 = method->rgctx_data->_11_System_Collections_Generic_List_T__Add;
        pIVar1 = pMVar2->methodPointer;
        pSVar15 = __src_00;
        if (-1 < (int)(method->rgctx_data->_10_T->_1).byval_arg.bits) {
          pSVar15 = (__src_00->_1).image;
        }
        pIVar3 = pMVar2->invoker_method;
        local_38 = pSVar15;
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751b4e;
        (*pIVar3)(pIVar1,pMVar2,pSVar16,&local_38,pSVar15);
      }
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751c8e;
      il2cpp_runtime_helper_022b2c90();
    }
  }
  *(undefined8 *)((long)pvVar19 + -8) = 0x2751c93;
  il2cpp_runtime_helper_022b2c90();
  do {
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751c9b;
    auVar21 = il2cpp_runtime_helper_022fefe0(__src);
    if (auVar21._8_4_ != 1) {
      pMVar18 = method->rgctx_data;
      pIVar14 = pMVar18->_7_System_Collections_Generic_List_Enumerator_T_;
      if (((pIVar14->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)pvVar19 + -8) = 0x2751d18;
        pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pMVar18 = method->rgctx_data;
      }
      pvVar8 = local_40;
      puVar7 = local_50;
      pIVar4 = pMVar18[1]._0_System_Collections_Generic_List_List_T__;
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751d36;
      il2cpp_runtime_helper_022b35c0(pIVar14,pIVar4,puVar7,pvVar8,0,0);
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751d43;
      _Unwind_Resume(auVar21._0_8_);
    }
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751cdd;
    puVar17 = (undefined8 *)__cxa_begin_catch(auVar21._0_8_);
    __src = (System_Collections_Generic_List_List_T___c *)*puVar17;
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751ce5;
    __cxa_end_catch();
label_02751c3a:
    uVar5 = auStack_88._40_8_;
    pMVar18 = method->rgctx_data;
    pIVar14 = pMVar18->_7_System_Collections_Generic_List_Enumerator_T_;
    if (((pIVar14->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)((long)pvVar19 + -8) = 0x2751c54;
      pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      pMVar18 = method->rgctx_data;
    }
    pvVar8 = local_40;
    puVar7 = local_50;
    pIVar4 = pMVar18[1]._0_System_Collections_Generic_List_List_T__;
    *(undefined8 *)((long)pvVar19 + -8) = 0x2751c72;
    il2cpp_runtime_helper_022b35c0(pIVar14,pIVar4,puVar7,pvVar8,0,0);
  } while (__src != (System_Collections_Generic_List_List_T___c *)0x0);
  return (System_Collections_Generic_List_List_T___o *)(System_Collections_Generic_List_List_T___c *)uVar5;
}


// Utility.Util$$GroupBuckets<object>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets_object_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_2650DB0* method);
// 0x2750db0

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets_object_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_2650DB0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_T__array *pSVar5;
  System_Object_array *pSVar6;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar7;
  MethodInfo_2650DB0_RGCTXs *pMVar8;
  Il2CppClass *pIVar9;
  System_Collections_Generic_List_List_T___o *__this_03;
  System_Collections_Generic_List_object__o *pSVar10;
  MethodInfo_2650DB0 *__this_04;
  ulong *puVar11;
  uint uVar12;
  ulong uVar13;
  int32_t index;
  undefined1 auVar14 [12];
  undefined8 in_stack_ffffffffffffff88;
  MethodInfo_2650DB0 *pMVar15;
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  uVar13 = (ulong)(uint)buckets;
  pMVar8 = method->rgctx_data;
  if (pMVar8 == (MethodInfo_2650DB0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar8 = method->rgctx_data;
  }
  pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = pMVar8->_0_System_Collections_Generic_List_List_T__;
  if (((pIVar9->_2).field_0x6d & 1) == 0) {
    pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_03 = (System_Collections_Generic_List_List_T___o *)il2cpp_runtime_helper_023052d0(pIVar9);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,
             (MethodInfo_362B8B0 *)method->rgctx_data->_1_System_Collections_Generic_List_List_T____ctor);
  pMVar15 = method;
  if (0 < buckets) {
    if (__this_03 == (System_Collections_Generic_List_List_T___o *)0x0) goto label_0275105b;
    pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
    bVar2 = (pIVar9->_2).field_0x6d;
    while( true ) {
      if ((bVar2 & 1) == 0) {
        pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar9);
      System_Collections_Generic_List_object____ctor
                (pSVar10,(MethodInfo_362B8B0 *)method->rgctx_data->_3_System_Collections_Generic_List_T___ctor
                );
      pMVar4 = method->rgctx_data->_4_System_Collections_Generic_List_List_T___Add;
      piVar1 = &(__this_03->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_03->fields)._items;
      if (pSVar5 == (System_Collections_Generic_List_T__array *)0x0) goto label_0275104c;
      uVar12 = (__this_03->fields)._size;
      if (uVar12 < (uint)pSVar5->max_length) {
        (__this_03->fields)._size = uVar12 + 1;
        pSVar5->m_Items[(int)uVar12] = (System_Collections_Generic_List_T__o *)pSVar10;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar12,pSVar10);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)pSVar10,
                   (MethodInfo_362C220 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      uVar12 = (int)uVar13 - 1;
      uVar13 = (ulong)uVar12;
      if (uVar12 == 0) break;
      pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
      bVar2 = (pIVar9->_2).field_0x6d;
    }
  }
  if (items != (System_Collections_Generic_List_T__o *)0x0) {
    if (buckets == 0) {
      return __this_03;
    }
    iVar3 = (items->fields)._size;
    if (iVar3 == 0) {
      return __this_03;
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)items,
               (MethodInfo_362CEB0 *)method->rgctx_data->_6_System_Collections_Generic_List_T__GetEnumerator);
    if (__this_03 == (System_Collections_Generic_List_List_T___o *)0x0) {
      __this_00.fields._8_8_ = pMVar15;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_00.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar7 != '\0') goto label_0275109b;
    }
    else {
      uVar13 = (ulong)(buckets - 1U);
      index = 0;
      pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      while (__this.fields._8_8_ = pMVar15,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
            __this.fields._current = (Il2CppObject *)pSVar16,
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
            local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar16, (char)bVar7 != '\0') {
        __this_04 = (MethodInfo_2650DB0 *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_03,index,
                               (MethodInfo_362BED0 *)
                               method->rgctx_data->_11_System_Collections_Generic_List_List_T___get_Item);
        method = __this_04;
        if (__this_04 == (MethodInfo_2650DB0 *)0x0) goto label_02751051;
        pMVar4 = pMVar15->rgctx_data->_12_System_Collections_Generic_List_T__Add;
        piVar1 = (int32_t *)((long)&__this_04->name + 4);
        *piVar1 = *piVar1 + 1;
        pSVar6 = ((System_Collections_Generic_List_object__Fields *)&__this_04->invoker_method)->_items;
        if (pSVar6 == (System_Object_array *)0x0) goto label_02751056;
        uVar12 = *(uint *)&__this_04->name;
        if (uVar12 < (uint)pSVar6->max_length) {
          *(uint *)&__this_04->name = uVar12 + 1;
          pSVar6->m_Items[(int)uVar12] = local_48.fields._current;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar12,local_48.fields._current);
          method = pMVar15;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,local_48.fields._current,
                     (MethodInfo_362C220 *)pMVar4->klass->rgctx_data[0xe].method);
          method = pMVar15;
        }
        index = index + (uint)(index < (int)(buckets - 1U) && iVar3 / buckets <= *(int *)&__this_04->name);
        pMVar15 = method;
      }
    }
    uVar13 = 0;
    pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    goto label_02751023;
  }
label_0275104c:
  il2cpp_runtime_helper_022b2c90();
label_02751051:
  il2cpp_runtime_helper_022b2c90();
label_02751056:
  il2cpp_runtime_helper_022b2c90();
label_0275105b:
  pIVar9 = method->rgctx_data->_2_System_Collections_Generic_List_T_;
  if (((pIVar9->_2).field_0x6d & 1) == 0) {
    pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(pIVar9);
  System_Collections_Generic_List_object____ctor
            (pSVar10,(MethodInfo_362B8B0 *)pMVar15->rgctx_data->_3_System_Collections_Generic_List_T___ctor);
  il2cpp_runtime_helper_022b2c90();
  do {
    il2cpp_runtime_helper_022fefe0(uVar13);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar16;
label_0275109b:
    auVar14 = il2cpp_runtime_helper_022b2c90();
    if (auVar14._8_4_ != 1) {
      __this_02.fields._8_8_ = pMVar15;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar14._0_8_);
    }
    puVar11 = (ulong *)__cxa_begin_catch(auVar14._0_8_);
    uVar13 = *puVar11;
    __cxa_end_catch();
    pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
label_02751023:
    __this_01.fields._8_8_ = pMVar15;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_01.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (uVar13 != 0);
  return __this_03;
}


// Utility.Util$$GroupBuckets<__Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_List_T___o* Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* items, int32_t buckets, const MethodInfo_2651130* method);
// 0x2751130

System_Collections_Generic_List_List_T___o *
Utility_Util__GroupBuckets___Il2CppFullySharedGenericType_
          (System_Collections_Generic_List_T__o *items,int32_t buckets,MethodInfo_2651130 *method)

{
  byte bVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  Il2CppClass *pIVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  MethodInfo_2651130_RGCTXs *__s;
  Il2CppClass *pIVar12;
  MethodInfo_2651130_RGCTXs *pMVar13;
  Il2CppClass *pIVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  Il2CppClass *pIVar17;
  ulong __n;
  ulong uVar18;
  void **__s_00;
  MethodInfo *pMVar19;
  MethodInfo *pMVar20;
  int iVar21;
  undefined1 auVar22 [12];
  undefined8 uStack_b0;
  MethodInfo_2651130_RGCTXs MStack_a8;
  MethodInfo_2651130_RGCTXs *local_38;
  
  pMVar13 = method->rgctx_data;
  MStack_a8._12_System_Collections_Generic_List_T__Add = (MethodInfo *)items;
  if (pMVar13 == (MethodInfo_2651130_RGCTXs *)0x0) {
    uStack_b0 = 0x275115c;
    il2cpp_runtime_helper_02300a20(method);
    pMVar13 = method->rgctx_data;
  }
  pMVar20 = (MethodInfo *)&method->rgctx_data;
  uVar8 = (pMVar13->_7_System_Collections_Generic_List_Enumerator_T_->_2).actualSize;
  __n = (ulong)uVar8;
  pIVar17 = (Il2CppClass *)(ulong)(pMVar13->_10_T->_2).actualSize;
  if (((pMVar13->_7_System_Collections_Generic_List_Enumerator_T_->_2).field_0x6d & 1) == 0) {
    uStack_b0 = 0x275118a;
    lVar10 = il2cpp_runtime_helper_023009c0();
    uVar8 = *(uint *)(lVar10 + 0xfc);
    pMVar13 = *(MethodInfo_2651130_RGCTXs **)pMVar20;
  }
  MStack_a8._6_System_Collections_Generic_List_T__GetEnumerator =
       (MethodInfo *)((long)&MStack_a8 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0));
  uVar18 = (ulong)((long)pIVar17 + 0xfU) & 0xfffffffffffffff0;
  MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current =
       (MethodInfo *)((long)MStack_a8._6_System_Collections_Generic_List_T__GetEnumerator - uVar18);
  MStack_a8._2_System_Collections_Generic_List_T_ =
       (Il2CppClass *)((long)MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current - uVar18);
  uVar11 = __n + 0xf & 0xfffffffffffffff0;
  MStack_a8._3_System_Collections_Generic_List_T___ctor =
       (MethodInfo *)((long)MStack_a8._2_System_Collections_Generic_List_T_ - uVar11);
  __s_00 = (void **)((long)MStack_a8._3_System_Collections_Generic_List_T___ctor - uVar11);
  MStack_a8._9_System_Collections_Generic_List_Enumerator_T_ = (Il2CppClass *)__n;
  MStack_a8._10_T = (Il2CppClass *)__s_00;
  __s_00[0xffffffffffffffff] = (void *)0x2751207;
  memset(__s_00,0,__n);
  __s = (MethodInfo_2651130_RGCTXs *)((long)__s_00 - uVar18);
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x2751220
  ;
  memset(__s,0,(size_t)pIVar17);
  pIVar12 = pMVar13->_0_System_Collections_Generic_List_List_T__;
  MStack_a8._4_System_Collections_Generic_List_List_T___Add = (MethodInfo *)pIVar17;
  if (((pIVar12->_2).field_0x6d & 1) == 0) {
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751235;
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x275123d
  ;
  MStack_a8._11_System_Collections_Generic_List_List_T___get_Item = (MethodInfo *)il2cpp_runtime_helper_023052d0(pIVar12);
  pIVar2 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_1_System_Collections_Generic_List_List_T____ctor->
           methodPointer;
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x275124d
  ;
  (*pIVar2)();
  MStack_a8._5_System_Collections_Generic_List_T__get_Count = (MethodInfo *)__s;
  MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext = pMVar20;
  if (0 < buckets) {
    pIVar12 = (Il2CppClass *)__s;
    if (MStack_a8._11_System_Collections_Generic_List_List_T___get_Item == (MethodInfo *)0x0)
    goto label_027514d2;
    pIVar17 = (Il2CppClass *)&local_38;
    pIVar12 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_2_System_Collections_Generic_List_T_;
    bVar1 = (pIVar12->_2).field_0x6d;
    iVar21 = buckets;
    while( true ) {
      if ((bVar1 & 1) == 0) {
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x27512ca;
        pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      }
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751285;
      pMVar13 = (MethodInfo_2651130_RGCTXs *)il2cpp_runtime_helper_023052d0(pIVar12);
      pIVar2 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_3_System_Collections_Generic_List_T___ctor->
               methodPointer;
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751294;
      (*pIVar2)(pMVar13);
      pMVar4 = MStack_a8._11_System_Collections_Generic_List_List_T___get_Item;
      pMVar19 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_4_System_Collections_Generic_List_List_T___Add;
      pIVar2 = pMVar19->methodPointer;
      pIVar3 = pMVar19->invoker_method;
      local_38 = pMVar13;
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x27512af;
      (*pIVar3)(pIVar2,pMVar19,pMVar4,(void **)pIVar17,pMVar13);
      iVar21 = iVar21 + -1;
      if (iVar21 == 0) break;
      pIVar12 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_2_System_Collections_Generic_List_T_;
      bVar1 = (pIVar12->_2).field_0x6d;
    }
  }
  pMVar19 = MStack_a8._12_System_Collections_Generic_List_T__Add;
  pIVar12 = (Il2CppClass *)0x0;
  if (MStack_a8._12_System_Collections_Generic_List_T__Add != (MethodInfo *)0x0) {
    pIVar2 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_5_System_Collections_Generic_List_T__get_Count->
             methodPointer;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x27512e8;
    iVar21 = (*pIVar2)(pMVar19);
    pIVar17 = MStack_a8._10_T;
    if (buckets == 0) {
      return (System_Collections_Generic_List_List_T___o *)
             MStack_a8._11_System_Collections_Generic_List_List_T___get_Item;
    }
    if (iVar21 == 0) {
      return (System_Collections_Generic_List_List_T___o *)
             MStack_a8._11_System_Collections_Generic_List_List_T___get_Item;
    }
    pIVar2 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_5_System_Collections_Generic_List_T__get_Count->
             methodPointer;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751309;
    MStack_a8._7_System_Collections_Generic_List_Enumerator_T_._4_4_ = (*pIVar2)(pMVar19);
    pMVar5 = MStack_a8._3_System_Collections_Generic_List_T___ctor;
    MStack_a8._7_System_Collections_Generic_List_Enumerator_T_._4_4_ =
         MStack_a8._7_System_Collections_Generic_List_Enumerator_T_._4_4_ / buckets;
    pMVar4 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_6_System_Collections_Generic_List_T__GetEnumerator;
    pIVar2 = pMVar4->methodPointer;
    local_38 = (MethodInfo_2651130_RGCTXs *)MStack_a8._3_System_Collections_Generic_List_T___ctor;
    pIVar3 = pMVar4->invoker_method;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751332;
    (*pIVar3)(pIVar2,pMVar4,pMVar19,&local_38,pMVar5);
    pIVar12 = MStack_a8._9_System_Collections_Generic_List_Enumerator_T_;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751341;
    memcpy(pIVar17,pMVar5,(size_t)pIVar12);
    if (MStack_a8._11_System_Collections_Generic_List_List_T___get_Item == (MethodInfo *)0x0) {
      pIVar2 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->
               _13_System_Collections_Generic_List_Enumerator_T__MoveNext->methodPointer;
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751475;
      cVar7 = (*pIVar2)(pIVar17);
      pMVar19 = pMVar20;
      if (cVar7 != '\0') goto label_0275150c;
    }
    else {
      MStack_a8._12_System_Collections_Generic_List_T__Add =
           (MethodInfo *)((ulong)MStack_a8._12_System_Collections_Generic_List_T__Add & 0xffffffff00000000);
      MStack_a8._9_System_Collections_Generic_List_Enumerator_T_ =
           (Il2CppClass *)
           CONCAT44(MStack_a8._9_System_Collections_Generic_List_Enumerator_T_._4_4_,buckets + -1);
      while( true ) {
        pMVar20 = (MethodInfo *)&local_38;
        pIVar2 = (*(MethodInfo_2651130_RGCTXs **)
                   MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->
                 _13_System_Collections_Generic_List_Enumerator_T__MoveNext->methodPointer;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x2751370;
        cVar7 = (*pIVar2)(pIVar17);
        pMVar19 = MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
        pMVar4 = MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current;
        if (cVar7 == '\0') break;
        pMVar5 = (*(MethodInfo_2651130_RGCTXs **)
                   MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->
                 _8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar2 = pMVar5->methodPointer;
        local_38 = (MethodInfo_2651130_RGCTXs *)
                   MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current;
        pIVar3 = pMVar5->invoker_method;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x275139a;
        (*pIVar3)(pIVar2,pMVar5,pIVar17,(void **)pMVar20,pMVar4);
        pMVar5 = MStack_a8._5_System_Collections_Generic_List_T__get_Count;
        pIVar17 = (Il2CppClass *)MStack_a8._4_System_Collections_Generic_List_List_T___Add;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x27513b0;
        memcpy(pMVar5,pMVar4,(size_t)pIVar17);
        pMVar4 = MStack_a8._11_System_Collections_Generic_List_List_T___get_Item;
        pMVar19 = (*(MethodInfo_2651130_RGCTXs **)pMVar19)->
                  _11_System_Collections_Generic_List_List_T___get_Item;
        pIVar2 = pMVar19->methodPointer;
        MStack_a8._7_System_Collections_Generic_List_Enumerator_T_._0_4_ =
             (int)MStack_a8._12_System_Collections_Generic_List_T__Add;
        local_38 = (MethodInfo_2651130_RGCTXs *)((long)&MStack_a8 + 0x38);
        pIVar3 = pMVar19->invoker_method;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x27513d9;
        (*pIVar3)(pIVar2,pMVar19,pMVar4,(void **)pMVar20,(void *)((long)&MStack_a8 + 8));
        pIVar12 = MStack_a8._2_System_Collections_Generic_List_T_;
        pMVar19 = MStack_a8._1_System_Collections_Generic_List_List_T____ctor;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x27513f5;
        memcpy(pIVar12,pMVar5,(size_t)pIVar17);
        if (pMVar19 == (void *)0x0) {
          __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
               (MethodInfo *)0x27514cd;
          il2cpp_runtime_helper_022b2c90();
          goto label_027514cd;
        }
        pMVar20 = (*(MethodInfo_2651130_RGCTXs **)
                    MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->
                  _12_System_Collections_Generic_List_T__Add;
        pIVar2 = pMVar20->methodPointer;
        iVar21 = (int)MStack_a8._9_System_Collections_Generic_List_Enumerator_T_;
        if (-1 < (int)((*(MethodInfo_2651130_RGCTXs **)
                         MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->_10_T->_1).
                      byval_arg.bits) {
          pIVar12 = (pIVar12->_1).image;
        }
        pIVar3 = pMVar20->invoker_method;
        local_38 = (MethodInfo_2651130_RGCTXs *)pIVar12;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x2751431;
        (*pIVar3)(pIVar2,pMVar20,pMVar19,&local_38,pIVar12);
        pIVar2 = (*(MethodInfo_2651130_RGCTXs **)
                   MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->
                 _5_System_Collections_Generic_List_T__get_Count->methodPointer;
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x2751441;
        iVar9 = (*pIVar2)(pMVar19);
        MStack_a8._12_System_Collections_Generic_List_T__Add =
             (MethodInfo *)
             CONCAT44(MStack_a8._12_System_Collections_Generic_List_T__Add._4_4_,
                      (int)MStack_a8._12_System_Collections_Generic_List_T__Add +
                      (uint)((int)MStack_a8._12_System_Collections_Generic_List_T__Add < iVar21 &&
                            MStack_a8._7_System_Collections_Generic_List_Enumerator_T_._4_4_ <= iVar9));
        pIVar17 = MStack_a8._10_T;
      }
    }
    pIVar12 = (Il2CppClass *)0x0;
    pMVar13 = *(MethodInfo_2651130_RGCTXs **)pMVar19;
    pIVar14 = pMVar13->_7_System_Collections_Generic_List_Enumerator_T_;
    pMVar20 = pMVar19;
    if (((pIVar14->_2).field_0x6d & 1) != 0) goto label_0275149a;
    goto label_0275148f;
  }
label_027514cd:
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x27514d2
  ;
  il2cpp_runtime_helper_022b2c90();
label_027514d2:
  pIVar14 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->_2_System_Collections_Generic_List_T_;
  if (((pIVar14->_2).field_0x6d & 1) == 0) {
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x27514e7;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x27514ef
  ;
  uVar15 = il2cpp_runtime_helper_023052d0(pIVar14);
  pIVar2 = (*(MethodInfo_2651130_RGCTXs **)
             MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext)->
           _3_System_Collections_Generic_List_T___ctor->methodPointer;
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x27514ff
  ;
  (*pIVar2)(uVar15);
  __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext = (MethodInfo *)0x2751504
  ;
  il2cpp_runtime_helper_022b2c90();
  do {
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x275150c;
    il2cpp_runtime_helper_022fefe0(pIVar12);
label_0275150c:
    pMVar19 = MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current;
    pMVar20 = (*(MethodInfo_2651130_RGCTXs **)pMVar20)->
              _8_System_Collections_Generic_List_Enumerator_T__get_Current;
    pIVar2 = pMVar20->methodPointer;
    local_38 = (MethodInfo_2651130_RGCTXs *)
               MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current;
    pIVar3 = pMVar20->invoker_method;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751528;
    (*pIVar3)(pIVar2,pMVar20,pIVar17,&local_38,pMVar19);
    pMVar4 = MStack_a8._8_System_Collections_Generic_List_Enumerator_T__get_Current;
    pMVar19 = MStack_a8._5_System_Collections_Generic_List_T__get_Count;
    pMVar20 = MStack_a8._4_System_Collections_Generic_List_List_T___Add;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x2751539;
    memcpy(pMVar19,pMVar4,(size_t)pMVar20);
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x275153e;
    auVar22 = il2cpp_runtime_helper_022b2c90();
    if (auVar22._8_4_ != 1) {
      pMVar13 = *(MethodInfo_2651130_RGCTXs **)
                 MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
      pIVar17 = pMVar13->_7_System_Collections_Generic_List_Enumerator_T_;
      if (((pIVar17->_2).field_0x6d & 1) == 0) {
        __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
             (MethodInfo *)0x27515e5;
        pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pMVar13 = *(MethodInfo_2651130_RGCTXs **)
                   MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
      }
      pIVar14 = MStack_a8._10_T;
      pMVar20 = MStack_a8._6_System_Collections_Generic_List_T__GetEnumerator;
      pIVar12 = pMVar13[1]._0_System_Collections_Generic_List_List_T__;
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751606;
      il2cpp_runtime_helper_022b35c0(pIVar17,pIVar12,pMVar20,pIVar14,0,0);
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751613;
      _Unwind_Resume(auVar22._0_8_);
    }
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x27515a0;
    puVar16 = (undefined8 *)__cxa_begin_catch(auVar22._0_8_);
    pIVar12 = (Il2CppClass *)*puVar16;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x27515a8;
    __cxa_end_catch();
    pMVar13 = *(MethodInfo_2651130_RGCTXs **)
               MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
    pIVar14 = pMVar13->_7_System_Collections_Generic_List_Enumerator_T_;
    pIVar17 = MStack_a8._10_T;
    pMVar19 = MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
    pMVar20 = MStack_a8._13_System_Collections_Generic_List_Enumerator_T__MoveNext;
    if (((pIVar14->_2).field_0x6d & 1) == 0) {
label_0275148f:
      __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
           (MethodInfo *)0x2751494;
      pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      pMVar13 = *(MethodInfo_2651130_RGCTXs **)pMVar19;
      pMVar20 = pMVar19;
    }
label_0275149a:
    pMVar19 = MStack_a8._6_System_Collections_Generic_List_T__GetEnumerator;
    pIVar6 = pMVar13[1]._0_System_Collections_Generic_List_List_T__;
    __s[0xffffffffffffffff]._13_System_Collections_Generic_List_Enumerator_T__MoveNext =
         (MethodInfo *)0x27514b0;
    il2cpp_runtime_helper_022b35c0(pIVar14,pIVar6,pMVar19,pIVar17,0,0);
  } while (pIVar12 != (Il2CppClass *)0x0);
  return (System_Collections_Generic_List_List_T___o *)
         MStack_a8._11_System_Collections_Generic_List_List_T___get_Item;
}


// Utility.Util$$GetRandomFromWeightedList
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedList (System_Collections_Generic_List_object__o* values, System_Collections_Generic_List_float__o* weights, const MethodInfo* method);
// 0x4494fd0

Il2CppObject *
Utility_Util__GetRandomFromWeightedList
          (System_Collections_Generic_List_object__o *values,System_Collections_Generic_List_float__o *weights
          ,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  System_Collections_Generic_List_Enumerator_T__o __this_02;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  long *plVar4;
  int32_t index;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffff98;
  float in_stack_ffffffffffffffa0;
  float fVar8;
  undefined4 in_stack_ffffffffffffffa4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  undefined1 local_38 [24];
  
  if (g_data_057ae927 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_Single_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Object_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    g_data_057ae927 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  if (weights == (System_Collections_Generic_List_float__o *)0x0) goto label_04495195;
  System_Collections_Generic_List_float___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,weights,MethodInfo_List_1_T_Enumerator_System_Single_GetEnumerator);
  in_stack_ffffffffffffffa0 = 0.0;
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  while (__this.fields._index = (int32_t)in_stack_ffffffffffffffa0,
        __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98,
        __this.fields._version = in_stack_ffffffffffffffa4, __this.fields._current = (Il2CppObject *)pSVar9,
        bVar2 = System_Collections_Generic_List_Enumerator_float___MoveNext
                          (__this,(MethodInfo_321E110 *)&stack0xffffffffffffffa8), (char)bVar2 != '\0') {
    in_stack_ffffffffffffffa0 = in_stack_ffffffffffffffa0 + (float)local_38._16_4_;
  }
  __this_00.fields._index = (int32_t)in_stack_ffffffffffffffa0;
  __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
  __this_00.fields._version = in_stack_ffffffffffffffa4;
  __this_00.fields._current = (Il2CppObject *)pSVar9;
  System_Collections_Generic_List_Enumerator_float___Dispose
            (__this_00,(MethodInfo_321E100 *)&stack0xffffffffffffffa8);
  while( true ) {
    index = 0;
    fVar5 = UnityEngine_Random__Range(0.0,in_stack_ffffffffffffffa0,(MethodInfo *)0x0);
    if (values != (System_Collections_Generic_List_object__o *)0x0) break;
label_04495195:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) goto label_044951d7;
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_01.fields._index = (int32_t)in_stack_ffffffffffffffa0;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
    __this_01.fields._version = in_stack_ffffffffffffffa4;
    __this_01.fields._current = (Il2CppObject *)pSVar9;
    System_Collections_Generic_List_Enumerator_float___Dispose
              (__this_01,(MethodInfo_321E100 *)&stack0xffffffffffffffa8);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
label_044951d7:
      __this_02.fields._index = (int32_t)in_stack_ffffffffffffffa0;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff98;
      __this_02.fields._version = in_stack_ffffffffffffffa4;
      __this_02.fields._current = (Il2CppObject *)pSVar9;
      System_Collections_Generic_List_Enumerator_float___Dispose
                (__this_02,(MethodInfo_321E100 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar7._0_8_);
    }
  }
  if (0 < (values->fields)._size) {
    index = 0;
    fVar8 = 0.0;
    if (0.0 <= fVar5) goto label_04495152;
    do {
      do {
        fVar6 = System_Collections_Generic_List_float___get_Item(weights,index,MethodInfo_Single_get_Item);
        fVar8 = fVar8 + fVar6;
        index = index + 1;
        if ((values->fields)._size <= index) {
          index = 0;
          goto label_04495175;
        }
      } while (fVar5 < fVar8);
label_04495152:
      fVar6 = System_Collections_Generic_List_float___get_Item(weights,index,MethodInfo_Single_get_Item);
    } while (fVar6 + fVar8 <= fVar5);
  }
label_04495175:
  pIVar3 = System_Collections_Generic_List_object___get_Item(values,index,MethodInfo_Object_get_Item);
  return pIVar3;
}


// Utility.Util$$GetRandomFromWeightedNode
// il2cpp: Il2CppObject* Utility_Util__GetRandomFromWeightedNode (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4495210

Il2CppObject * Utility_Util__GetRandomFromWeightedNode(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

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
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  long *plVar11;
  Il2CppObject *extraout_RAX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_01;
  float item;
  float extraout_XMM0_Da;
  float fVar12;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int32_t iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  int32_t iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  _union_14 _Var32;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  float local_b0;
  int32_t iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined4 uStack_9c;
  int32_t iStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  int32_t iStack_88;
  int32_t iStack_84;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae928 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Single);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae928 = '\x01';
  }
  uVar27 = 0;
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  uVar21 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar26 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar19 = 0;
  uVar20 = 0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  _Var32.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (Il2CppType **)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_object);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_Object);
  __this_05 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_float);
  System_Collections_Generic_List_float____ctor(__this_05,MethodInfo_List_1_System_Single);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,node,(MethodInfo *)0x0);
    local_38.genericMethod = local_80.genericMethod;
    local_68 = (InvokerMethod)CONCAT44(iStack_ac,local_b0);
    pcStack_60 = (char *)CONCAT44(uStack_a4,uStack_a8);
    local_58 = (Il2CppClass *)CONCAT44(uStack_9c,local_a0);
    pIStack_50 = (Il2CppType *)CONCAT44(uStack_94,iStack_98);
    local_48 = (Il2CppType **)CONCAT44(uStack_8c,local_90);
    _Stack_40._4_4_ = iStack_84;
    _Stack_40._0_4_ = iStack_88;
    local_78 = local_c0;
    pSStack_70 = pSStack_b8;
    __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar14;
    __this.fields.m_Enumerator.fields._0_8_ = pIVar13;
    __this.fields.m_Enumerator.fields.m_Object.fields._version = uVar16;
    __this.fields.m_Enumerator.fields.m_Object.fields._index = uVar17;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = uVar19;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = uVar20;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = uVar21;
    __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = uVar23;
    __this.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = uVar24;
    __this.fields.m_Enumerator.fields.m_Object.fields._36_4_ = uVar26;
    __this.fields.m_Enumerator.fields.m_Array.fields._list._0_4_ = uVar27;
    __this.fields.m_Enumerator.fields.m_Array.fields._list._4_4_ = uVar29;
    __this.fields.m_Enumerator.fields.m_Array.fields._index = uVar30;
    __this.fields.m_Enumerator.fields.m_Array.fields._version = uVar31;
    __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var32.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
    __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._version = (int32_t)local_b0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._index = iStack_ac;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = uStack_a8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = uStack_a4;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = local_a0;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = uStack_9c;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_98;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._36_4_ = uStack_94;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list._0_4_ = local_90;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list._4_4_ = uStack_8c;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._index = iStack_88;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._version = iStack_84;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
    fVar12 = local_b0;
    fVar22 = local_a0;
    fVar28 = local_90;
    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,(MethodInfo *)&stack0xfffffffffffffef8)
    ;
    method_00 = extraout_RDX;
    if ((char)bVar6 == '\0') {
label_0449555d:
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_01;
      }
      pIVar9 = Utility_Util__GetRandomFromWeightedList(__this_04,__this_05,method_00);
      return pIVar9;
    }
    in_XMM1_Da = local_b0;
    in_XMM2_Da = local_a0;
    in_XMM3_Da = local_90;
    pIVar13 = local_c0;
    pSVar15 = pSStack_b8;
    iVar18 = iStack_ac;
    uVar16 = uStack_a8;
    uVar17 = uStack_a4;
    uVar19 = uStack_9c;
    iVar25 = iStack_98;
    uVar20 = uStack_94;
    uVar21 = uStack_8c;
    uVar23 = iStack_88;
    uVar24 = iStack_84;
    _Var32 = local_80;
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      do {
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
        __this_02.fields.m_Enumerator.fields._0_8_ = pIVar13;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._version = (int32_t)fVar12;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._index = iVar18;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = uVar16;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = uVar17;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = fVar22;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = uVar19;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iVar25;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._36_4_ = uVar20;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list._0_4_ = fVar28;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list._4_4_ = uVar21;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._index = uVar23;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._version = uVar24;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var32.genericMethod;
        pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044955c6;
        pIVar9 = (Il2CppObject *)
                 (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_04->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_04->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_044955c6;
        uVar2 = (__this_04->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_04->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar9;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_04,pIVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar10 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
        plVar11 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                    (node,uVar10,(node->klass->vtable)._7_get_Item.method);
        if ((plVar11 == (long *)0x0) ||
           (item = (float)(**(code **)(*plVar11 + 0x388))(plVar11), lVar5 = MethodInfo_Void_Add,
           __this_05 == (System_Collections_Generic_List_float__o *)0x0)) goto label_044955c6;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_05->fields)._items;
        if (pSVar4 == (System_Single_array *)0x0) goto label_044955c6;
        uVar2 = (__this_05->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_05->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
        }
        else {
          System_Collections_Generic_List_float___AddWithResize
                    (__this_05,item,*(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
        }
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar15;
        __this_01.fields.m_Enumerator.fields._0_8_ = pIVar13;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._version = (int32_t)fVar12;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._index = iVar18;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = uVar16;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = uVar17;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = fVar22;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = uVar19;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iVar25;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._36_4_ = uVar20;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list._0_4_ = fVar28;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list._4_4_ = uVar21;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._index = uVar23;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._version = uVar24;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var32.genericMethod;
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
        method_00 = extraout_RDX_00;
      } while ((char)bVar6 != '\0');
      goto label_0449555d;
    }
    __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
    __this_03.fields.m_Enumerator.fields._0_8_ = local_c0;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._version = (int32_t)fVar12;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._index = iStack_ac;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._0_4_ = uStack_a8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key._4_4_ = uStack_a4;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._0_4_ = fVar22;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value._4_4_ = uStack_9c;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType = iStack_98;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._36_4_ = uStack_94;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._list._0_4_ = fVar28;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._list._4_4_ = uStack_8c;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._index = iStack_88;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._version = iStack_84;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
    pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                       (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
    in_XMM1_Da = local_b0;
    in_XMM2_Da = local_a0;
    in_XMM3_Da = local_90;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Da = local_b0;
      in_XMM2_Da = local_a0;
      in_XMM3_Da = local_90;
    }
    pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044955cb;
  }
label_044955c6:
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
label_044955cb:
  (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)(pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  fVar12 = (in_XMM1_Da - in_XMM3_Da) * (in_XMM1_Da - in_XMM3_Da) +
           (extraout_XMM0_Da - in_XMM2_Da) * (extraout_XMM0_Da - in_XMM2_Da);
  if (fVar12 < 0.0) {
    sqrtf(fVar12);
    return extraout_RAX;
  }
  return pIVar9;
}


// Utility.Util$$DistanceIgnoreY
// il2cpp: float Utility_Util__DistanceIgnoreY (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, const MethodInfo* method);
// 0x44955f0

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
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary_object__object_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_2651D60* method);
// 0x2751d60

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary_object__object_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_2651D60 *method)

{
  MethodInfo_2651D60_RGCTXs **ppMVar1;
  Il2CppClass **ppIVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *vtableDispatch;
  MethodInfo_2651D60_RGCTXs *pMVar6;
  Il2CppClass *pIVar7;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar8;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  long lVar10;
  char *pcVar11;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uVar12;
  void *pvVar13;
  System_Collections_Generic_List_TValue__o *pSVar14;
  System_Predicate_T__o *match;
  long lVar15;
  ulong extraout_RDX;
  int iVar16;
  undefined1 auVar17 [16];
  MethodInfo *method_00;
  
  ppMVar1 = &method->rgctx_data;
  pMVar6 = method->rgctx_data;
  if (pMVar6 == (MethodInfo_2651D60_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    pMVar6 = *ppMVar1;
    if (pMVar6 != (MethodInfo_2651D60_RGCTXs *)0x0) goto label_02751d9c;
    il2cpp_runtime_helper_02300a20(method);
    pIVar7 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) goto label_02751f06;
label_02751dad:
    if (*(int *)&(pIVar7->_2).field_0x1c == 0) goto label_02751f1b;
label_02751dba:
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) goto label_02751f35;
label_02751dcf:
    keySelector = *(System_Func_TSource__TKey__o **)((long)pIVar7->static_fields + 8);
  }
  else {
label_02751d9c:
    pIVar7 = pMVar6->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) != 0) goto label_02751dad;
label_02751f06:
    lVar10 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar10 + 0xe4) != 0) goto label_02751dba;
label_02751f1b:
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) != 0) goto label_02751dcf;
label_02751f35:
    lVar10 = il2cpp_runtime_helper_023009c0(pIVar7);
    keySelector = *(System_Func_TSource__TKey__o **)(*(long *)(lVar10 + 0xb8) + 8);
  }
  if (keySelector == (System_Func_TSource__TKey__o *)0x0) {
    if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar10 + 0xe4) != 0) goto label_02751e05;
label_02751eca:
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = *ppMVar1;
      pIVar7 = pMVar6->_3_Utility_Util___c__33_TKey__TValue_;
      bVar3 = (pIVar7->_2).field_0x6d;
    }
    else {
      if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_02751eca;
label_02751e05:
      pMVar6 = *ppMVar1;
      pIVar7 = pMVar6->_3_Utility_Util___c__33_TKey__TValue_;
      bVar3 = (pIVar7->_2).field_0x6d;
    }
    if ((bVar3 & 1) == 0) {
      il2cpp_runtime_helper_023009c0(pIVar7);
      pMVar6 = *ppMVar1;
    }
    pIVar7 = pMVar6->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) {
      pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_helper_023052d0(pIVar7);
    System_Func_KeyValuePair_object__object___object____ctor();
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) {
      pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
    }
    *(System_Func_TSource__TKey__o **)((long)pIVar7->static_fields + 8) = keySelector;
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) {
      pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
    }
    il2cpp_runtime_helper_022b4080((long)pIVar7->static_fields + 8,keySelector);
  }
  source = System_Linq_Enumerable__OrderBy_KeyValuePair_object__object___object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)dict,keySelector,
                      (MethodInfo_2516C70 *)
                      (*ppMVar1)->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_);
  pMVar6 = *ppMVar1;
  method_00 = pMVar6->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__;
  pSVar8 = System_Linq_Enumerable__ToList_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (MethodInfo_2524FB0 *)method_00);
  iVar16 = (int)method_00;
  if (pSVar8 == (System_Collections_Generic_List_TSource__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    ppIVar2 = &pMVar6->_7_System_Collections_Generic_IEnumerable_KeyValuePair_TKey__TValue__;
    pIVar7 = pMVar6->_7_System_Collections_Generic_IEnumerable_KeyValuePair_TKey__TValue__;
    if (pIVar7 == (Il2CppClass *)0x0) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      pIVar7 = *ppIVar2;
      if (pIVar7 != (Il2CppClass *)0x0) goto label_027521dc;
      il2cpp_runtime_helper_02300a20(pMVar6);
      pcVar11 = (pMVar6->_7_System_Collections_Generic_IEnumerable_KeyValuePair_TKey__TValue__->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) goto label_02752343;
label_027521ed:
      if (*(int *)(pcVar11 + 0xe4) == 0) goto label_02752358;
label_027521fa:
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) goto label_02752372;
label_0275220f:
      lVar10 = *(long *)(*(long *)(pcVar11 + 0xb8) + 8);
    }
    else {
label_027521dc:
      pcVar11 = (pIVar7->_1).namespaze;
      if ((pcVar11[0x135] & 1U) != 0) goto label_027521ed;
label_02752343:
      lVar10 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar10 + 0xe4) != 0) goto label_027521fa;
label_02752358:
      il2cpp_runtime_helper_02337ed0();
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) != 0) goto label_0275220f;
label_02752372:
      lVar10 = il2cpp_runtime_helper_023009c0(pcVar11);
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
    }
    if (lVar10 == 0) {
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0();
        if (*(int *)(lVar10 + 0xe4) != 0) goto label_02752245;
label_02752307:
        il2cpp_runtime_helper_02337ed0();
        pIVar7 = *ppIVar2;
        pcVar11 = (pIVar7->_1).namespaze;
        bVar3 = pcVar11[0x135];
      }
      else {
        if (*(int *)(pcVar11 + 0xe4) == 0) goto label_02752307;
label_02752245:
        pIVar7 = *ppIVar2;
        pcVar11 = (pIVar7->_1).namespaze;
        bVar3 = pcVar11[0x135];
      }
      if ((bVar3 & 1) == 0) {
        pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
        pIVar7 = *ppIVar2;
      }
      uVar12 = **(undefined8 **)(pcVar11 + 0xb8);
      pcVar11 = (pIVar7->_1).name;
      if ((pcVar11[0x135] & 1U) == 0) {
        pcVar11 = (char *)il2cpp_runtime_helper_023009c0();
      }
      lVar10 = il2cpp_runtime_helper_023052d0(pcVar11);
      (*(code *)**(undefined8 **)&((*ppIVar2)->_1).byval_arg.bits)
                (lVar10,uVar12,((*ppIVar2)->_1).byval_arg.data);
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) {
        pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
      }
      *(long *)(*(long *)(pcVar11 + 0xb8) + 8) = lVar10;
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) {
        pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
      }
      il2cpp_runtime_helper_022b4080(*(long *)(pcVar11 + 0xb8) + 8,lVar10);
    }
    __this = (System_Collections_Generic_HashSet_object__o *)
             (**(code **)((*ppIVar2)->_1).this_arg.data)(source,lVar10);
    pIVar7 = ((*ppIVar2)->_1).castClass;
    lVar10 = (*(pIVar7->_1).image)();
    if (lVar10 == 0) {
      il2cpp_runtime_helper_022b2c90();
      lVar10 = *(long *)&(pIVar7->_1).this_arg.bits;
      if (lVar10 == 0) {
        il2cpp_runtime_helper_02300a20(pIVar7);
        lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
        bVar3 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x18);
        bVar3 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar3 & 1) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0();
        iVar16 = *(int *)(lVar10 + 0xe4);
      }
      else {
        iVar16 = *(int *)(lVar10 + 0xe4);
      }
      if (iVar16 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
        bVar3 = *(byte *)(lVar10 + 0x135);
      }
      else {
        lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
        bVar3 = *(byte *)(lVar10 + 0x135);
      }
      if ((bVar3 & 1) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
        match = *(System_Predicate_T__o **)(*(long *)(lVar10 + 0xb8) + 8);
      }
      else {
        match = *(System_Predicate_T__o **)(*(long *)(lVar10 + 0xb8) + 8);
      }
      if (match != (System_Predicate_T__o *)0x0) {
        while (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
label_02752794:
          lVar10 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar10 + 0xe4) == 0) {
label_027527a9:
            il2cpp_runtime_helper_02337ed0();
            lVar15 = *(long *)&(pIVar7->_1).this_arg.bits;
            lVar10 = *(long *)(lVar15 + 0x18);
            bVar3 = *(byte *)(lVar10 + 0x135);
          }
          else {
label_027526db:
            lVar15 = *(long *)&(pIVar7->_1).this_arg.bits;
            lVar10 = *(long *)(lVar15 + 0x18);
            bVar3 = *(byte *)(lVar10 + 0x135);
          }
          if ((bVar3 & 1) == 0) {
            il2cpp_runtime_helper_023009c0(lVar10);
            lVar15 = *(long *)&(pIVar7->_1).this_arg.bits;
          }
          lVar10 = *(long *)(lVar15 + 0x10);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0();
          }
          match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(lVar10);
          System_Predicate_object____ctor();
          lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
          }
          *(System_Predicate_T__o **)(*(long *)(lVar10 + 0xb8) + 8) = match;
          lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = il2cpp_runtime_helper_023009c0(lVar10);
          }
          il2cpp_runtime_helper_022b4080(*(long *)(lVar10 + 0xb8) + 8,match);
        }
        System_Collections_Generic_HashSet_object___RemoveWhere
                  (__this,match,*(MethodInfo_33E3910 **)(*(long *)&(pIVar7->_1).this_arg.bits + 0x30));
        return (System_Collections_Generic_List_TValue__o *)__this;
      }
      lVar10 = *(long *)(*(long *)&(pIVar7->_1).this_arg.bits + 0x18);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) goto label_02752794;
      if (*(int *)(lVar10 + 0xe4) == 0) goto label_027527a9;
      goto label_027526db;
    }
    (*((((*ppIVar2)->_1).parent)->_1).image)(lVar10);
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar12 = (**(code **)((*ppIVar2)->_1).generic_class)(lVar10,(iVar16 + -1) * (int)extraout_RDX);
    uVar12 = (**(code **)((*ppIVar2)->_1).typeMetadataHandle)(uVar12,extraout_RDX & 0xffffffff);
    pcVar11 = ((*ppIVar2)->_1).namespaze;
    if ((pcVar11[0x135] & 1U) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar10 + 0xe4) != 0) goto label_02752427;
label_02752534:
      il2cpp_runtime_helper_02337ed0();
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) != 0) goto label_0275243c;
label_0275254e:
      lVar10 = il2cpp_runtime_helper_023009c0(pcVar11);
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x10);
    }
    else {
      if (*(int *)(pcVar11 + 0xe4) == 0) goto label_02752534;
label_02752427:
      pcVar11 = ((*ppIVar2)->_1).namespaze;
      if ((pcVar11[0x135] & 1U) == 0) goto label_0275254e;
label_0275243c:
      lVar10 = *(long *)(*(long *)(pcVar11 + 0xb8) + 0x10);
    }
    if (lVar10 != 0) goto label_0275256a;
    pcVar11 = ((*ppIVar2)->_1).namespaze;
    if ((pcVar11[0x135] & 1U) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar10 + 0xe4) != 0) goto label_02752472;
label_027525b3:
      il2cpp_runtime_helper_02337ed0();
      pIVar7 = *ppIVar2;
      pcVar11 = (pIVar7->_1).namespaze;
      bVar3 = pcVar11[0x135];
    }
    else {
      if (*(int *)(pcVar11 + 0xe4) == 0) goto label_027525b3;
label_02752472:
      pIVar7 = *ppIVar2;
      pcVar11 = (pIVar7->_1).namespaze;
      bVar3 = pcVar11[0x135];
    }
    if ((bVar3 & 1) == 0) {
      pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
      pIVar7 = *ppIVar2;
    }
    uVar4 = **(undefined8 **)(pcVar11 + 0xb8);
    pvVar13 = (pIVar7->_1).interopData;
    if ((*(byte *)((long)pvVar13 + 0x135) & 1) == 0) {
      pvVar13 = (void *)il2cpp_runtime_helper_023009c0();
    }
    lVar10 = il2cpp_runtime_helper_023052d0(pvVar13);
    (**(code **)((*ppIVar2)->_1).fields)(lVar10,uVar4,((*ppIVar2)->_1).klass);
    pcVar11 = ((*ppIVar2)->_1).namespaze;
    if ((pcVar11[0x135] & 1U) == 0) {
      pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
    }
    *(long *)(*(long *)(pcVar11 + 0xb8) + 0x10) = lVar10;
    pcVar11 = ((*ppIVar2)->_1).namespaze;
    if ((pcVar11[0x135] & 1U) == 0) {
      pcVar11 = (char *)il2cpp_runtime_helper_023009c0(pcVar11);
    }
    il2cpp_runtime_helper_022b4080(*(long *)(pcVar11 + 0xb8) + 0x10,lVar10);
label_0275256a:
    auVar17 = (**(code **)((*ppIVar2)->_1).events)(uVar12,lVar10);
    puVar5 = ((*ppIVar2)->_1).methods;
    vtableDispatch = (code *)*puVar5;
    pSVar14 = (System_Collections_Generic_List_TValue__o *)
              (*vtableDispatch)(auVar17._0_8_,puVar5,auVar17._8_8_,vtableDispatch);
    return pSVar14;
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = System_Linq_Enumerable__Skip_KeyValuePair_object__object__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                      (pageNumber + -1) * elementsPerPage,
                      (MethodInfo_2521A00 *)
                      (*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__);
  pSVar9 = System_Linq_Enumerable__Take_KeyValuePair_object__object__
                     (pSVar9,elementsPerPage,
                      (MethodInfo_2521E10 *)
                      (*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__);
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar10 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar10 + 0xe4) != 0) goto label_02751fe9;
label_027520f9:
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) != 0) goto label_02751ffe;
label_02752113:
    lVar10 = il2cpp_runtime_helper_023009c0(pIVar7);
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(lVar10 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_027520f9;
label_02751fe9:
    pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar7->_2).field_0x6d & 1) == 0) goto label_02752113;
label_02751ffe:
    selector = *(System_Func_TSource__TResult__o **)((long)pIVar7->static_fields + 0x10);
  }
  if (selector != (System_Func_TSource__TResult__o *)0x0) goto label_0275212f;
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar10 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar10 + 0xe4) != 0) goto label_02752034;
label_0275217b:
    il2cpp_runtime_helper_02337ed0();
    pMVar6 = *ppMVar1;
    pIVar7 = pMVar6->_3_Utility_Util___c__33_TKey__TValue_;
    bVar3 = (pIVar7->_2).field_0x6d;
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_0275217b;
label_02752034:
    pMVar6 = *ppMVar1;
    pIVar7 = pMVar6->_3_Utility_Util___c__33_TKey__TValue_;
    bVar3 = (pIVar7->_2).field_0x6d;
  }
  if ((bVar3 & 1) == 0) {
    il2cpp_runtime_helper_023009c0(pIVar7);
    pMVar6 = *ppMVar1;
  }
  pIVar7 = pMVar6->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar7->_2).field_0x6d & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(pIVar7);
  System_Func_KeyValuePair_object__object___object____ctor();
  pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar7->_2).field_0x6d & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
  }
  *(System_Func_TSource__TResult__o **)((long)pIVar7->static_fields + 0x10) = selector;
  pIVar7 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar7->_2).field_0x6d & 1) == 0) {
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
  }
  il2cpp_runtime_helper_022b4080((long)pIVar7->static_fields + 0x10,selector);
label_0275212f:
  source_00 = System_Linq_Enumerable__Select_KeyValuePair_object__object___object_
                        (pSVar9,selector,
                         (MethodInfo_2517EA0 *)
                         (*ppMVar1)->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_);
  pSVar8 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_2525430 *)(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_);
  return (System_Collections_Generic_List_TValue__o *)pSVar8;
}


// Utility.Util$$PaginateDictionary<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
// il2cpp: System_Collections_Generic_List_TValue__o* Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_Dictionary_TKey__TValue__o* dict, int32_t pageNumber, int32_t elementsPerPage, const MethodInfo_26521A0* method);
// 0x27521a0

System_Collections_Generic_List_TValue__o *
Utility_Util__PaginateDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
          (System_Collections_Generic_Dictionary_TKey__TValue__o *dict,int32_t pageNumber,
          int32_t elementsPerPage,MethodInfo_26521A0 *method)

{
  MethodInfo_26521A0_RGCTXs **ppMVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  Il2CppMethodPointer vtableDispatch;
  MethodInfo_26521A0_RGCTXs *pMVar5;
  Il2CppClass *pIVar6;
  long lVar7;
  System_Collections_Generic_HashSet_object__o *__this;
  undefined8 uVar8;
  System_Collections_Generic_List_TValue__o *pSVar9;
  System_Predicate_T__o *match;
  Il2CppRGCTXData *pIVar10;
  MethodInfo *pMVar11;
  undefined1 auVar12 [16];
  
  ppMVar1 = &method->rgctx_data;
  pMVar5 = method->rgctx_data;
  if (pMVar5 == (MethodInfo_26521A0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    pMVar5 = *ppMVar1;
    if (pMVar5 != (MethodInfo_26521A0_RGCTXs *)0x0) goto label_027521dc;
    il2cpp_runtime_helper_02300a20(method);
    pIVar6 = method->rgctx_data->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) goto label_02752343;
label_027521ed:
    if (*(int *)&(pIVar6->_2).field_0x1c == 0) goto label_02752358;
label_027521fa:
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) goto label_02752372;
label_0275220f:
    lVar7 = *(long *)((long)pIVar6->static_fields + 8);
  }
  else {
label_027521dc:
    pIVar6 = pMVar5->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) != 0) goto label_027521ed;
label_02752343:
    lVar7 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto label_027521fa;
label_02752358:
    il2cpp_runtime_helper_02337ed0();
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) != 0) goto label_0275220f;
label_02752372:
    lVar7 = il2cpp_runtime_helper_023009c0(pIVar6);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  if (lVar7 == 0) {
    if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
      lVar7 = il2cpp_runtime_helper_023009c0();
      if (*(int *)(lVar7 + 0xe4) != 0) goto label_02752245;
label_02752307:
      il2cpp_runtime_helper_02337ed0();
      pMVar5 = *ppMVar1;
      pIVar6 = pMVar5->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    else {
      if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_02752307;
label_02752245:
      pMVar5 = *ppMVar1;
      pIVar6 = pMVar5->_3_Utility_Util___c__33_TKey__TValue_;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    if ((bVar2 & 1) == 0) {
      pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
      pMVar5 = *ppMVar1;
    }
    uVar8 = *(undefined8 *)pIVar6->static_fields;
    pIVar6 = pMVar5->_2_System_Func_KeyValuePair_TKey__TValue___TKey_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) {
      pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    }
    lVar7 = il2cpp_runtime_helper_023052d0(pIVar6);
    (*(*ppMVar1)->_5_System_Func_KeyValuePair_TKey__TValue___TKey___ctor->methodPointer)
              (lVar7,uVar8,(*ppMVar1)->_4_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_0);
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) {
      pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
    }
    *(long *)((long)pIVar6->static_fields + 8) = lVar7;
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) {
      pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
    }
    il2cpp_runtime_helper_022b4080((long)pIVar6->static_fields + 8,lVar7);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           (*(*ppMVar1)->_6_System_Linq_Enumerable_OrderBy_KeyValuePair_TKey__TValue___TKey_->methodPointer)
                     (dict,lVar7);
  pMVar11 = (*ppMVar1)->_9_System_Linq_Enumerable_ToList_KeyValuePair_TKey__TValue__;
  lVar7 = (*pMVar11->methodPointer)();
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
    if ((pMVar11->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar11);
      pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    else {
      pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    if ((bVar2 & 1) == 0) {
      lVar7 = il2cpp_runtime_helper_023009c0();
      iVar3 = *(int *)(lVar7 + 0xe4);
    }
    else {
      iVar3 = *(int *)&(pIVar6->_2).field_0x1c;
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    else {
      pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
      bVar2 = (pIVar6->_2).field_0x6d;
    }
    if ((bVar2 & 1) == 0) {
      lVar7 = il2cpp_runtime_helper_023009c0(pIVar6);
      match = *(System_Predicate_T__o **)(*(long *)(lVar7 + 0xb8) + 8);
    }
    else {
      match = *(System_Predicate_T__o **)((long)pIVar6->static_fields + 8);
    }
    if (match != (System_Predicate_T__o *)0x0) {
      while (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_02752794:
        lVar7 = il2cpp_runtime_helper_023009c0();
        if (*(int *)(lVar7 + 0xe4) == 0) {
label_027527a9:
          il2cpp_runtime_helper_02337ed0();
          pIVar10 = (pMVar11->field7_0x38).rgctx_data;
          pIVar6 = pIVar10[3].klass;
          bVar2 = (pIVar6->_2).field_0x6d;
        }
        else {
label_027526db:
          pIVar10 = (pMVar11->field7_0x38).rgctx_data;
          pIVar6 = pIVar10[3].klass;
          bVar2 = (pIVar6->_2).field_0x6d;
        }
        if ((bVar2 & 1) == 0) {
          il2cpp_runtime_helper_023009c0(pIVar6);
          pIVar10 = (pMVar11->field7_0x38).rgctx_data;
        }
        pIVar6 = pIVar10[2].klass;
        if (((pIVar6->_2).field_0x6d & 1) == 0) {
          pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        }
        match = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(pIVar6);
        System_Predicate_object____ctor();
        pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
        if (((pIVar6->_2).field_0x6d & 1) == 0) {
          pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
        }
        *(System_Predicate_T__o **)((long)pIVar6->static_fields + 8) = match;
        pIVar6 = (pMVar11->field7_0x38).rgctx_data[3].klass;
        if (((pIVar6->_2).field_0x6d & 1) == 0) {
          pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
        }
        il2cpp_runtime_helper_022b4080((long)pIVar6->static_fields + 8,match);
      }
      System_Collections_Generic_HashSet_object___RemoveWhere
                (__this,match,(MethodInfo_33E3910 *)(pMVar11->field7_0x38).rgctx_data[6].method);
      return (System_Collections_Generic_List_TValue__o *)__this;
    }
    if (((((pMVar11->field7_0x38).rgctx_data[3].klass)->_2).field_0x6d & 1) == 0) goto label_02752794;
    if (*(int *)&(((pMVar11->field7_0x38).rgctx_data[3].klass)->_2).field_0x1c == 0) goto label_027527a9;
    goto label_027526db;
  }
  (*(*ppMVar1)->_11_System_Collections_Generic_List_KeyValuePair_TKey__TValue___get_Count->methodPointer)
            (lVar7);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar8 = (*(*ppMVar1)->_12_System_Linq_Enumerable_Skip_KeyValuePair_TKey__TValue__->methodPointer)
                    (lVar7,(ulong)(uint)((pageNumber + -1) * elementsPerPage));
  uVar8 = (*(*ppMVar1)->_13_System_Linq_Enumerable_Take_KeyValuePair_TKey__TValue__->methodPointer)
                    (uVar8,(ulong)(uint)elementsPerPage);
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto label_02752427;
label_02752534:
    il2cpp_runtime_helper_02337ed0();
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) != 0) goto label_0275243c;
label_0275254e:
    lVar7 = il2cpp_runtime_helper_023009c0(pIVar6);
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_02752534;
label_02752427:
    pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
    if (((pIVar6->_2).field_0x6d & 1) == 0) goto label_0275254e;
label_0275243c:
    lVar7 = *(long *)((long)pIVar6->static_fields + 0x10);
  }
  if (lVar7 != 0) goto label_0275256a;
  if ((((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x6d & 1) == 0) {
    lVar7 = il2cpp_runtime_helper_023009c0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto label_02752472;
label_027525b3:
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = *ppMVar1;
    pIVar6 = pMVar5->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar6->_2).field_0x6d;
  }
  else {
    if (*(int *)&((*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_->_2).field_0x1c == 0) goto label_027525b3;
label_02752472:
    pMVar5 = *ppMVar1;
    pIVar6 = pMVar5->_3_Utility_Util___c__33_TKey__TValue_;
    bVar2 = (pIVar6->_2).field_0x6d;
  }
  if ((bVar2 & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
    pMVar5 = *ppMVar1;
  }
  uVar4 = *(undefined8 *)pIVar6->static_fields;
  pIVar6 = pMVar5->_14_System_Func_KeyValuePair_TKey__TValue___TValue_;
  if (((pIVar6->_2).field_0x6d & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  lVar7 = il2cpp_runtime_helper_023052d0(pIVar6);
  (*(*ppMVar1)->_16_System_Func_KeyValuePair_TKey__TValue___TValue___ctor->methodPointer)
            (lVar7,uVar4,(*ppMVar1)->_15_Utility_Util___c__33_TKey__TValue___PaginateDictionary_b__33_1);
  pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar6->_2).field_0x6d & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
  }
  *(long *)((long)pIVar6->static_fields + 0x10) = lVar7;
  pIVar6 = (*ppMVar1)->_3_Utility_Util___c__33_TKey__TValue_;
  if (((pIVar6->_2).field_0x6d & 1) == 0) {
    pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar6);
  }
  il2cpp_runtime_helper_022b4080((long)pIVar6->static_fields + 0x10,lVar7);
label_0275256a:
  auVar12 = (*(*ppMVar1)->_17_System_Linq_Enumerable_Select_KeyValuePair_TKey__TValue___TValue_->methodPointer
            )(uVar8,lVar7);
  vtableDispatch = (*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_->methodPointer;
  pSVar9 = (System_Collections_Generic_List_TValue__o *)
           (*vtableDispatch)
                     (auVar12._0_8_,(*ppMVar1)->_19_System_Linq_Enumerable_ToList_TValue_,auVar12._8_8_,
                      vtableDispatch);
  return pSVar9;
}


// Utility.Util$$ColorText
// il2cpp: System_String_o* Utility_Util__ColorText (System_String_o* text, System_String_o* color, const MethodInfo* method);
// 0x4495630

System_String_o * Utility_Util__ColorText(System_String_o *text,System_String_o *color,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  Il2CppObject *arg0;
  MethodInfo *extraout_RDX;
  System_String_array *unaff_RBX;
  undefined4 uVar2;
  Il2CppObject *arg1;
  undefined8 uStack_30;
  System_String_array *pSStack_28;
  
  if (g_data_057ae929 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&">");
    il2cpp_runtime_helper_023445d0(&"<color=");
    g_data_057ae929 = '\x01';
    method = extraout_RDX;
  }
  uVar2 = 5;
  arg1 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5,method);
  pSVar1 = "<color=";
  pSStack_28 = unaff_RBX;
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      arg1 = (Il2CppObject *)values->m_Items;
      values->m_Items[0] = "<color=";
      il2cpp_runtime_helper_022b4080();
      uVar2 = SUB84(pSVar1,0);
      if (1 < (uint)values->max_length) {
        arg1 = (Il2CppObject *)(values->m_Items + 1);
        values->m_Items[1] = color;
        il2cpp_runtime_helper_022b4080();
        pSVar1 = ">";
        uVar2 = SUB84(color,0);
        if (2 < (uint)values->max_length) {
          arg1 = (Il2CppObject *)(values->m_Items + 2);
          values->m_Items[2] = ">";
          il2cpp_runtime_helper_022b4080();
          uVar2 = SUB84(pSVar1,0);
          if (3 < (uint)values->max_length) {
            arg1 = (Il2CppObject *)(values->m_Items + 3);
            values->m_Items[3] = text;
            il2cpp_runtime_helper_022b4080();
            uVar2 = SUB84(text,0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = "</color>";
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              pSVar1 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              return pSVar1;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pSStack_28 = values;
  }
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae92a == '\0') {
    il2cpp_runtime_helper_023445d0(&"<size={0}>{1}</size>");
    g_data_057ae92a = '\x01';
  }
  uStack_30 = CONCAT44(uVar2,(undefined4)uStack_30);
  arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_30 + 4);
  pSVar1 = System_String__Format_3af78e0("<size={0}>{1}</size>",arg0,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$SizeText
// il2cpp: System_String_o* Utility_Util__SizeText (System_String_o* text, int32_t size, const MethodInfo* method);
// 0x4495740

System_String_o * Utility_Util__SizeText(System_String_o *text,int32_t size,MethodInfo *method)

{
  Il2CppObject *arg0;
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  undefined1 auStack_14 [4];
  
  if (g_data_057ae92a == '\0') {
    il2cpp_runtime_helper_023445d0(&"<size={0}>{1}</size>");
    g_data_057ae92a = '\x01';
    method = extraout_RDX;
  }
  arg0 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,auStack_14,method);
  pSVar1 = System_String__Format_3af78e0("<size={0}>{1}</size>",arg0,(Il2CppObject *)text,(MethodInfo *)0x0);
  return pSVar1;
}


// Utility.Util$$RichTextTag
// il2cpp: System_String_o* Utility_Util__RichTextTag (System_String_o* text, System_String_o* tag, System_String_o* value, const MethodInfo* method);
// 0x44957a0

System_String_o *
Utility_Util__RichTextTag
          (System_String_o *text,System_String_o *tag,System_String_o *value,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o *extraout_RAX;
  undefined8 in_XMM1_Qa;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  
  if (g_data_057ae92b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"=");
    il2cpp_runtime_helper_023445d0(&"<");
    il2cpp_runtime_helper_023445d0(&"</");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ae92b = '\x01';
  }
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,9);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = "<";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = tag;
        il2cpp_runtime_helper_022b4080(values->m_Items + 1,tag);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = "=";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = value;
            il2cpp_runtime_helper_022b4080(values->m_Items + 3,value);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = ">";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = text;
                il2cpp_runtime_helper_022b4080(values->m_Items + 5,text);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = "</";
                  il2cpp_runtime_helper_022b4080();
                  if (7 < (uint)values->max_length) {
                    values->m_Items[7] = tag;
                    il2cpp_runtime_helper_022b4080(values->m_Items + 7,tag);
                    if (8 < (uint)values->max_length) {
                      values->m_Items[8] = ">";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 8);
                      pSVar1 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
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
    il2cpp_runtime_helper_022b2ca0();
  }
  rotation.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  rotation.fields.z = (float)(int)in_XMM1_Qa;
  rotation.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  UVar2.fields.x = UVar2.fields.x * 0.017453292;
  UVar2.fields.y = 0.0;
  UVar2.fields.z = 0.0;
  UnityEngine_Quaternion__Internal_FromEulerRad(UVar2,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.Util$$ConstrainedToX
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToX (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x4495940

UnityEngine_Quaternion_o Utility_Util__ConstrainedToX(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  UnityEngine_Quaternion_Fields UVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o euler;
  
  UVar2 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar2.fields.x * 57.29578;
  euler.fields.y = UVar2.fields.y * 57.29578;
  euler.fields.z = UVar2.fields.z * 57.29578;
  UVar2 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  UVar2.fields.x = UVar2.fields.x * 0.017453292;
  UVar2.fields.y = 0.0;
  UVar2.fields.z = 0.0;
  UVar1 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(UVar2,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar1;
}


// Utility.Util$$ConstrainedToY
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToY (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x4495980

UnityEngine_Quaternion_o Utility_Util__ConstrainedToY(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  
  UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar3.fields.x * 57.29578;
  euler.fields.y = UVar3.fields.y * 57.29578;
  euler.fields.z = UVar3.fields.z * 57.29578;
  UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = UVar3.fields.y * 0.017453292;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Utility.Util$$ConstrainedToZ
// il2cpp: UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ (UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x44959c0

UnityEngine_Quaternion_o Utility_Util__ConstrainedToZ(UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Quaternion_Fields UVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  
  UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
  euler.fields.x = UVar3.fields.x * 57.29578;
  euler.fields.y = UVar3.fields.y * 57.29578;
  euler.fields.z = UVar3.fields.z * 57.29578;
  UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  auVar1._4_8_ = 0;
  auVar1._0_4_ = UVar3.fields.z * 0.017453292;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Utility.Util$$GetAllTitanAgentIds
// il2cpp: System_Collections_Generic_List_int__o* Utility_Util__GetAllTitanAgentIds (const MethodInfo* method);
// 0x4495a00

System_Collections_Generic_List_int__o * Utility_Util__GetAllTitanAgentIds(MethodInfo *method)

{
  long lVar1;
  System_Func_TSource__TResult__o *pSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar3;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_List_TSource__o *pSVar5;
  
  if (g_data_057ae92c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Nullable_1_Int32_Select_KeyValuePai);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Select_Nullable_1_Int32_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32_ToList_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Nullable_1_Int32_Where_Nullable_1_I);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_int_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_KeyValuePair_float_string_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_int_int);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Int32_GetAllTitanAgentIds_b__41_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetAllTitanAgentIds_b__41_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetAllTitanAgentIds_b__41_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae92c = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = (System_Collections_Generic_IEnumerable_TSource__o *)**(undefined8 **)(TypeInfo_Util + 0xb8);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar2 == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_KeyValuePair_float_string_int);
    System_Func_KeyValuePair_float__object___Nullable_int_____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar1 + 0x18) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar2);
  }
  pSVar3 = System_Linq_Enumerable__Select_KeyValuePair_float__object___Nullable_int__
                     (pSVar4,pSVar2,MethodInfo_IEnumerable_1_System_Nullable_1_Int32_Select_KeyValuePai);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_bool);
    System_Func_Nullable_int___bool____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar1 + 0x20) = predicate;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,predicate);
  }
  pSVar4 = System_Linq_Enumerable__Where_Nullable_int__
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,MethodInfo_IEnumerable_1_System_Nullable_1_Int32_Where_Nullable_1_I);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    pSVar2 = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (pSVar2 == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_int_int);
    System_Func_Nullable_int___int____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar1 + 0x28) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar2);
  }
  pSVar3 = System_Linq_Enumerable__Select_Nullable_int___int_(pSVar4,pSVar2,MethodInfo_IEnumerable_1_System_Int32_Select_Nullable_1_Int32_Int32);
  pSVar5 = System_Linq_Enumerable__ToList_int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,MethodInfo_List_1_System_Int32_ToList_Int32);
  return (System_Collections_Generic_List_int__o *)pSVar5;
}


// Utility.Util$$GetNavMeshAgentIDBySize
// il2cpp: int32_t Utility_Util__GetNavMeshAgentIDBySize (float size, const MethodInfo* method);
// 0x4495d10

int32_t Utility_Util__GetNavMeshAgentIDBySize(float size,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AI_NavMeshBuildSettings_o __this;
  UnityEngine_AI_NavMeshBuildSettings_o __this_00;
  int32_t iVar2;
  bool_conflict bVar3;
  System_Nullable_int__o SVar4;
  System_String_o *pSVar5;
  int iVar6;
  MethodInfo *pMVar7;
  MethodInfo *in_RSI;
  System_String_o *a;
  System_Collections_Generic_KeyValuePair_float__object__o SVar8;
  undefined8 in_stack_ffffffffffffff10;
  int32_t iVar9;
  undefined8 in_stack_ffffffffffffff18;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppClass *pIVar14;
  Il2CppType *pIVar15;
  Il2CppMethodPointer pIStack_98;
  Il2CppMethodPointer pIStack_90;
  InvokerMethod pIStack_88;
  char *pcStack_80;
  Il2CppClass *pIStack_78;
  Il2CppType *pIStack_70;
  MethodInfo *pMStack_58;
  undefined8 *puStack_50;
  System_String_o *pSStack_48;
  undefined8 *puStack_40;
  float fStack_2c;
  
  fStack_2c = size;
  if (g_data_057ae92d == '\0') {
    puStack_40 = (undefined8 *)0x4495d37;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Key);
    puStack_40 = (undefined8 *)0x4495d43;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    puStack_40 = (undefined8 *)0x4495d4f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    puStack_40 = (undefined8 *)0x4495d5b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
    puStack_40 = (undefined8 *)0x4495d67;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    puStack_40 = (undefined8 *)0x4495d73;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    puStack_40 = (undefined8 *)0x4495d7f;
    size = (float)il2cpp_runtime_helper_023445d0(&"minTitan");
    g_data_057ae92d = '\x01';
  }
  pMVar7 = (MethodInfo *)0x0;
  iVar6 = *(int *)((long)&TypeInfo_Util[9].monitor + 4);
  pSVar5 = "minTitan";
  while( true ) {
    if (iVar6 == 0) {
      puStack_40 = (undefined8 *)0x4495dc4;
      size = (float)il2cpp_runtime_helper_02337ed0(size);
    }
    iVar6 = (int)pMVar7;
    a = TypeInfo_Util;
    if (*(long *)TypeInfo_Util[7].fields == 0) break;
    iVar1 = *(int *)(*(long *)TypeInfo_Util[7].fields + 0x18);
    if (*(int *)((long)&TypeInfo_Util[9].monitor + 4) == 0) {
      puStack_40 = (undefined8 *)0x4495deb;
      il2cpp_runtime_helper_02337ed0(size);
    }
    if (iVar1 <= iVar6) {
      puStack_40 = (undefined8 *)0x4495e55;
      SVar4 = Utility_Util__GetNavMeshAgentID(pSVar5,in_RSI);
      return SVar4.fields.value;
    }
    a = (System_String_o *)0x0;
    if (*(System_Collections_Generic_List_T__o **)TypeInfo_Util[7].fields ==
        (System_Collections_Generic_List_T__o *)0x0) break;
    puStack_40 = (undefined8 *)0x4495e0c;
    in_RSI = pMVar7;
    SVar8 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                      (*(System_Collections_Generic_List_T__o **)TypeInfo_Util[7].fields,iVar6,MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
    size = SVar8.fields.key;
    if (size <= fStack_2c) {
      if (*(int *)((long)&TypeInfo_Util[9].monitor + 4) == 0) {
        puStack_40 = (undefined8 *)0x4495e28;
        il2cpp_runtime_helper_02337ed0();
      }
      a = (System_String_o *)0x0;
      if (*(System_Collections_Generic_List_T__o **)TypeInfo_Util[7].fields ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      puStack_40 = (undefined8 *)0x4495e45;
      SVar8 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                        (*(System_Collections_Generic_List_T__o **)TypeInfo_Util[7].fields,iVar6,MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
      pSVar5 = (System_String_o *)SVar8.fields.value;
      size = SVar8.fields.key;
      in_RSI = pMVar7;
    }
    pMVar7 = (MethodInfo *)(ulong)(iVar6 + 1);
    iVar6 = *(int *)((long)&TypeInfo_Util[9].monitor + 4);
  }
  puStack_40 = (undefined8 *)0x4495e6b;
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_Util;
  puStack_50 = &MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item;
  pMStack_58 = pMVar7;
  pSStack_48 = pSVar5;
  if (g_data_057ae92f == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae92f = '\x01';
  }
  iVar6 = 0;
  iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
  if (0 < iVar2) {
    do {
      UnityEngine_AI_NavMesh__GetSettingsByIndex
                ((UnityEngine_AI_NavMeshBuildSettings_o *)&pIStack_98,iVar6,(MethodInfo *)0x0);
      __this.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff18;
      __this.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
      __this.fields.m_AgentTypeID = (int)in_stack_ffffffffffffff10;
      __this.fields.m_AgentRadius = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
      __this.fields._16_8_ = pIStack_98;
      __this.fields._24_8_ = pIStack_90;
      __this.fields._32_8_ = pIStack_88;
      __this.fields._40_8_ = pcStack_80;
      __this.fields._48_8_ = pIStack_78;
      __this.fields._56_8_ = pIStack_70;
      pIVar10 = pIStack_98;
      pIVar11 = pIStack_90;
      pIVar12 = pIStack_88;
      pcVar13 = pcStack_80;
      pIVar14 = pIStack_78;
      pIVar15 = pIStack_70;
      iVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                        (__this,(MethodInfo *)&stack0xffffffffffffff20);
      pSVar5 = UnityEngine_AI_NavMesh__GetSettingsNameFromID(iVar2,(MethodInfo *)0x0);
      bVar3 = System_String__op_Equality(a,pSVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        __this_00.fields.m_AgentHeight = (float)(int)in_stack_ffffffffffffff18;
        __this_00.fields.m_AgentSlope = (float)(int)((ulong)in_stack_ffffffffffffff18 >> 0x20);
        __this_00.fields.m_AgentTypeID = (int)in_stack_ffffffffffffff10;
        __this_00.fields.m_AgentRadius = (float)(int)((ulong)in_stack_ffffffffffffff10 >> 0x20);
        __this_00.fields._16_8_ = pIVar10;
        __this_00.fields._24_8_ = pIVar11;
        __this_00.fields._32_8_ = pIVar12;
        __this_00.fields._40_8_ = pcVar13;
        __this_00.fields._48_8_ = pIVar14;
        __this_00.fields._56_8_ = pIVar15;
        iVar2 = UnityEngine_AI_NavMeshBuildSettings__get_agentTypeID
                          (__this_00,(MethodInfo *)&stack0xffffffffffffff20);
        iVar9 = 0;
        System_Nullable_int____ctor((System_Nullable_int__o)&stack0xffffffffffffff18,iVar2,MethodInfo_Nullable_1_Int32);
        return iVar9;
      }
      iVar6 = iVar6 + 1;
      iVar2 = UnityEngine_AI_NavMesh__GetSettingsCount((MethodInfo *)0x0);
    } while (iVar6 < iVar2);
  }
  return 0;
}


// Utility.Util$$GetAgentSettingsCorrected
// il2cpp: UnityEngine_AI_NavMeshBuildSettings_o Utility_Util__GetAgentSettingsCorrected (float size, const MethodInfo* method);
// 0x4495f90

UnityEngine_AI_NavMeshBuildSettings_o *
Utility_Util__GetAgentSettingsCorrected
          (UnityEngine_AI_NavMeshBuildSettings_o *__return_storage_ptr__,float size,MethodInfo *method)

{
  int iVar1;
  UnityEngine_AI_NavMeshBuildSettings_o __this;
  UnityEngine_AI_NavMeshBuildSettings_o __this_00;
  UnityEngine_AI_NavMeshBuildSettings_o __this_01;
  UnityEngine_AI_NavMeshBuildSettings_o __this_02;
  int32_t agentTypeID;
  System_String_o *name;
  System_Nullable_int__Fields SVar2;
  UnityEngine_AI_NavMeshBuildSettings_o *pUVar3;
  uint index;
  float fVar4;
  System_Collections_Generic_KeyValuePair_float__object__o SVar5;
  float fVar6;
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
  
  if (g_data_057ae92e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"minTitan");
    g_data_057ae92e = '\x01';
  }
  fVar4 = 0.5;
  fVar6 = 0.5;
  index = 0;
  iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  name = "minTitan";
  while( true ) {
    if (iVar1 == 0) {
      fVar4 = (float)il2cpp_runtime_helper_02337ed0(fVar4);
    }
    if (**(long **)(TypeInfo_Util + 0xb8) == 0) break;
    iVar1 = *(int *)(**(long **)(TypeInfo_Util + 0xb8) + 0x18);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(fVar4);
    }
    if (iVar1 <= (int)index) {
      SVar2 = (System_Nullable_int__Fields)Utility_Util__GetNavMeshAgentID(name,method);
      agentTypeID = System_Nullable_int___get_Value
                              ((System_Nullable_int__o)&stack0xffffffffffffff40,MethodInfo_Int32_get_Value);
      UnityEngine_AI_NavMesh__GetSettingsByID
                ((UnityEngine_AI_NavMeshBuildSettings_o *)&local_70,agentTypeID,(MethodInfo *)0x0);
      __this.fields.m_AgentRadius = size;
      __this.fields.m_AgentTypeID = (int32_t)fVar6;
      __this.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this.fields.m_AgentSlope = (float)SVar2.value;
      __this.fields._16_8_ = local_70;
      __this.fields._24_8_ = pIStack_68;
      __this.fields._32_8_ = local_60;
      __this.fields._40_8_ = pcStack_58;
      __this.fields._48_8_ = local_50;
      __this.fields._56_8_ = pIStack_48;
      fVar4 = UnityEngine_AI_NavMeshBuildSettings__get_agentRadius
                        (__this,(MethodInfo *)&stack0xffffffffffffff48);
      __this_00.fields.m_AgentRadius = size;
      __this_00.fields.m_AgentTypeID = (int32_t)fVar6;
      __this_00.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_00.fields.m_AgentSlope = (float)SVar2.value;
      __this_00.fields._16_8_ = local_70;
      __this_00.fields._24_8_ = pIStack_68;
      __this_00.fields._32_8_ = local_60;
      __this_00.fields._40_8_ = pcStack_58;
      __this_00.fields._48_8_ = local_50;
      __this_00.fields._56_8_ = pIStack_48;
      UnityEngine_AI_NavMeshBuildSettings__set_agentRadius
                (__this_00,fVar4 / fVar6,(MethodInfo *)&stack0xffffffffffffff48);
      __this_01.fields.m_AgentRadius = size;
      __this_01.fields.m_AgentTypeID = (int32_t)fVar6;
      __this_01.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_01.fields.m_AgentSlope = (float)SVar2.value;
      __this_01.fields._16_8_ = local_70;
      __this_01.fields._24_8_ = pIStack_68;
      __this_01.fields._32_8_ = local_60;
      __this_01.fields._40_8_ = pcStack_58;
      __this_01.fields._48_8_ = local_50;
      __this_01.fields._56_8_ = pIStack_48;
      fVar4 = UnityEngine_AI_NavMeshBuildSettings__get_agentHeight
                        (__this_01,(MethodInfo *)&stack0xffffffffffffff48);
      __this_02.fields.m_AgentRadius = size;
      __this_02.fields.m_AgentTypeID = (int32_t)fVar6;
      __this_02.fields.m_AgentHeight = (float)SVar2.hasValue;
      __this_02.fields.m_AgentSlope = (float)SVar2.value;
      __this_02.fields._16_8_ = local_70;
      __this_02.fields._24_8_ = pIStack_68;
      __this_02.fields._32_8_ = local_60;
      __this_02.fields._40_8_ = pcStack_58;
      __this_02.fields._48_8_ = local_50;
      __this_02.fields._56_8_ = pIStack_48;
      UnityEngine_AI_NavMeshBuildSettings__set_agentHeight
                (__this_02,fVar4 / fVar6,(MethodInfo *)&stack0xffffffffffffff48);
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
    SVar5 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                      ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8),index,
                       MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
    fVar4 = SVar5.fields.key;
    if (fVar4 <= size) {
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      SVar5 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                        ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8),index,
                         MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
      fVar6 = SVar5.fields.key;
      if ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8) ==
          (System_Collections_Generic_List_T__o *)0x0) break;
      method = (MethodInfo *)(ulong)index;
      SVar5 = System_Collections_Generic_List_KeyValuePair_float__object____get_Item
                        ((System_Collections_Generic_List_T__o *)**(undefined8 **)(TypeInfo_Util + 0xb8),index,
                         MethodInfo_KeyValuePair_2_System_Single_System_String_get_Item);
      name = (System_String_o *)SVar5.fields.value;
      fVar4 = SVar5.fields.key;
    }
    index = index + 1;
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  pUVar3 = (UnityEngine_AI_NavMeshBuildSettings_o *)il2cpp_runtime_helper_022b2c90();
  return pUVar3;
}


// Utility.Util$$GetNavMeshAgentID
// il2cpp: System_Nullable_int__o Utility_Util__GetNavMeshAgentID (System_String_o* name, const MethodInfo* method);
// 0x4495e70

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
  
  if (g_data_057ae92f == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae92f = '\x01';
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
        System_Nullable_int____ctor((System_Nullable_int__o)&stack0xffffffffffffff50,iVar1,MethodInfo_Nullable_1_Int32);
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
// 0x4496220

UnityEngine_Vector3_o Utility_Util__Abs(UnityEngine_Vector3_o v,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields._0_8_ = v.fields._0_8_ & 0x7fffffff7fffffff;
  UVar1.fields.z = ABS(v.fields.z);
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// Utility.Util$$EnumMax<__Il2CppFullySharedGenericType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Utility_Util__EnumMax___Il2CppFullySharedGenericType_ (const MethodInfo_264FE30* method);
// 0x274fe30

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Utility_Util__EnumMax___Il2CppFullySharedGenericType_(MethodInfo_264FE30 *method)

{
  System_RuntimeTypeHandle_o handle;
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  MethodInfo_264FE30 *__dest;
  System_RuntimeTypeHandle_Fields *pSVar5;
  System_Type_o *enumType;
  System_Array_o *pSVar6;
  void *extraout_RDX;
  void *__src;
  long in_RSI;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  MethodInfo_264FE30 *pMStack_38;
  
  pSVar5 = *(System_RuntimeTypeHandle_Fields **)(in_RSI + 0x38);
  pMStack_38 = method;
  if (pSVar5 == (System_RuntimeTypeHandle_Fields *)0x0) {
    uStack_50 = 0x274fe59;
    il2cpp_runtime_helper_02300a20();
    pSVar5 = *(System_RuntimeTypeHandle_Fields **)(in_RSI + 0x38);
  }
  __n = (ulong)*(uint *)(pSVar5[4].value + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = (void *)((long)&uStack_48 + lVar4);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pSVar5->value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274fe99;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274fea3;
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274febb;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274fec5;
  pSVar6 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pcVar1 = (code *)**(undefined8 **)(*(long *)(in_RSI + 0x38) + 8);
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274fed3;
  uStack_48 = (*pcVar1)(pSVar6);
  puVar2 = *(undefined8 **)(*(long *)(in_RSI + 0x38) + 0x18);
  uVar3 = *puVar2;
  pcVar1 = (code *)puVar2[2];
  pvStack_40 = __src;
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274fef3;
  (*pcVar1)(uVar3,puVar2,0,&uStack_48,__src);
  __dest = pMStack_38;
  *(undefined8 *)((long)&uStack_50 + lVar4) = 0x274ff02;
  UVar7.klass = memcpy(__dest,__src,__n);
  UVar7.monitor = extraout_RDX;
  return UVar7;
}


// Utility.Util$$EnumMaxValue<Int32Enum>
// il2cpp: int32_t Utility_Util__EnumMaxValue_Int32Enum_ (const MethodInfo_264FF20* method);
// 0x274ff20

int32_t Utility_Util__EnumMaxValue_Int32Enum_(MethodInfo_264FF20 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_264FF20_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_264FF20_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_264FF20_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$EnumMaxValue<__Il2CppFullySharedGenericType>
// il2cpp: int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_ (const MethodInfo_264FFC0* method);
// 0x274ffc0

int32_t Utility_Util__EnumMaxValue___Il2CppFullySharedGenericType_(MethodInfo_264FFC0 *method)

{
  System_RuntimeTypeHandle_o handle;
  int32_t iVar1;
  MethodInfo_264FFC0_RGCTXs *pMVar2;
  System_Type_o *enumType;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  
  pMVar2 = method->rgctx_data;
  if (pMVar2 == (MethodInfo_264FFC0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
    pMVar2 = method->rgctx_data;
    if (pMVar2 == (MethodInfo_264FFC0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(method);
      pMVar2 = method->rgctx_data;
    }
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar2->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = (System_Collections_IEnumerable_o *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  source_00 = System_Linq_Enumerable__Cast_int_(source,MethodInfo_IEnumerable_1_System_Int32_Cast_Int32);
  iVar1 = System_Linq_Enumerable__Max
                    ((System_Collections_Generic_IEnumerable_int__o *)source_00,(MethodInfo *)0x0);
  return iVar1;
}


// Utility.Util$$IsValidFileName
// il2cpp: bool Utility_Util__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x4496230

bool_conflict Utility_Util__IsValidFileName(System_String_o *fileName,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  System_Char_array *anyOf;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Char_array *anyOf_00;
  System_String_o *a;
  uint uVar3;
  double dVar4;
  double in_XMM1_Qa;
  
  if (g_data_057ae930 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F826);
    il2cpp_runtime_helper_023445d0(&"LPT3");
    il2cpp_runtime_helper_023445d0(&"NUL");
    il2cpp_runtime_helper_023445d0(&"COM2");
    il2cpp_runtime_helper_023445d0(&"AUX");
    il2cpp_runtime_helper_023445d0(&"CON");
    il2cpp_runtime_helper_023445d0(&"LPT2");
    il2cpp_runtime_helper_023445d0(&"COM1");
    il2cpp_runtime_helper_023445d0(&"COM6");
    il2cpp_runtime_helper_023445d0(&"COM5");
    il2cpp_runtime_helper_023445d0(&"COM8");
    il2cpp_runtime_helper_023445d0(&"COM4");
    il2cpp_runtime_helper_023445d0(&"LPT8");
    il2cpp_runtime_helper_023445d0(&"LPT7");
    il2cpp_runtime_helper_023445d0(&"LPT5");
    il2cpp_runtime_helper_023445d0(&"COM3");
    il2cpp_runtime_helper_023445d0(&"LPT6");
    il2cpp_runtime_helper_023445d0(&"LPT9");
    il2cpp_runtime_helper_023445d0(&"COM7");
    il2cpp_runtime_helper_023445d0(&"PRN");
    il2cpp_runtime_helper_023445d0(&"COM9");
    il2cpp_runtime_helper_023445d0(&"LPT4");
    il2cpp_runtime_helper_023445d0(&"LPT1");
    g_data_057ae930 = '\x01';
  }
  anyOf = (System_Char_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_char,0x1a);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
            ((System_Array_o *)anyOf,fld_CFDA27D1AF5335BEE2318E3A995EB958CD65016C9C7899DCB564F826,(MethodInfo *)0x0);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0x16);
  if (source != (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
    if (*(int *)&source[1].monitor != 0) {
      source[2].klass = "CON";
      il2cpp_runtime_helper_022b4080(source + 2);
      if (1 < *(uint *)&source[1].monitor) {
        source[2].monitor = "PRN";
        il2cpp_runtime_helper_022b4080(&source[2].monitor);
        if (2 < *(uint *)&source[1].monitor) {
          source[3].klass = "AUX";
          il2cpp_runtime_helper_022b4080(source + 3);
          if (3 < *(uint *)&source[1].monitor) {
            source[3].monitor = "NUL";
            il2cpp_runtime_helper_022b4080(&source[3].monitor);
            if (4 < *(uint *)&source[1].monitor) {
              source[4].klass = "COM1";
              il2cpp_runtime_helper_022b4080(source + 4);
              if (5 < *(uint *)&source[1].monitor) {
                source[4].monitor = "COM2";
                il2cpp_runtime_helper_022b4080(&source[4].monitor);
                if (6 < *(uint *)&source[1].monitor) {
                  source[5].klass = "COM3";
                  il2cpp_runtime_helper_022b4080(source + 5);
                  if (7 < *(uint *)&source[1].monitor) {
                    source[5].monitor = "COM4";
                    il2cpp_runtime_helper_022b4080(&source[5].monitor);
                    if (8 < *(uint *)&source[1].monitor) {
                      source[6].klass = "COM5";
                      il2cpp_runtime_helper_022b4080(source + 6);
                      if (9 < *(uint *)&source[1].monitor) {
                        source[6].monitor = "COM6";
                        il2cpp_runtime_helper_022b4080(&source[6].monitor);
                        if (10 < *(uint *)&source[1].monitor) {
                          source[7].klass = "COM7";
                          il2cpp_runtime_helper_022b4080(source + 7);
                          if (0xb < *(uint *)&source[1].monitor) {
                            source[7].monitor = "COM8";
                            il2cpp_runtime_helper_022b4080(&source[7].monitor);
                            if (0xc < *(uint *)&source[1].monitor) {
                              source[8].klass = "COM9";
                              il2cpp_runtime_helper_022b4080(source + 8);
                              if (0xd < *(uint *)&source[1].monitor) {
                                source[8].monitor = "LPT1";
                                il2cpp_runtime_helper_022b4080(&source[8].monitor);
                                if (0xe < *(uint *)&source[1].monitor) {
                                  source[9].klass = "LPT2";
                                  il2cpp_runtime_helper_022b4080(source + 9);
                                  if (0xf < *(uint *)&source[1].monitor) {
                                    source[9].monitor = "LPT3";
                                    il2cpp_runtime_helper_022b4080(&source[9].monitor);
                                    if (0x10 < *(uint *)&source[1].monitor) {
                                      source[10].klass = "LPT4";
                                      il2cpp_runtime_helper_022b4080(source + 10);
                                      if (0x11 < *(uint *)&source[1].monitor) {
                                        source[10].monitor = "LPT5";
                                        il2cpp_runtime_helper_022b4080(&source[10].monitor);
                                        if (0x12 < *(uint *)&source[1].monitor) {
                                          source[0xb].klass = "LPT6";
                                          il2cpp_runtime_helper_022b4080(source + 0xb);
                                          if (0x13 < *(uint *)&source[1].monitor) {
                                            source[0xb].monitor = "LPT7";
                                            il2cpp_runtime_helper_022b4080(&source[0xb].monitor);
                                            if (0x14 < *(uint *)&source[1].monitor) {
                                              source[0xc].klass = "LPT8";
                                              il2cpp_runtime_helper_022b4080(source + 0xc);
                                              if (0x15 < *(uint *)&source[1].monitor) {
                                                source[0xc].monitor = "LPT9";
                                                il2cpp_runtime_helper_022b4080(&source[0xc].monitor);
                                                if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                                                  il2cpp_runtime_helper_02337ed0();
                                                }
                                                anyOf_00 = System_IO_Path__GetInvalidFileNameChars
                                                                     ((MethodInfo *)0x0);
                                                if (fileName != (System_String_o *)0x0) {
                                                  iVar1 = System_String__IndexOfAny
                                                                    (fileName,anyOf_00,(MethodInfo *)0x0);
                                                  uVar3 = 0;
                                                  if (iVar1 == -1) {
                                                    iVar1 = System_String__IndexOfAny
                                                                      (fileName,anyOf,(MethodInfo *)0x0);
                                                    uVar3 = 0;
                                                    if (iVar1 == -1) {
                                                      bVar2 = System_Linq_Enumerable__Contains_object_
                                                                        (source,(Il2CppObject *)fileName,
                                                                         MethodInfo_Boolean_Contains_String);
                                                      uVar3 = 0;
                                                      if ((char)bVar2 == '\0') {
                                                        a = System_String__Trim(fileName,(MethodInfo *)0x0);
                                                        bVar2 = System_String__op_Equality
                                                                          (a,fileName,(MethodInfo *)0x0);
                                                        uVar3 = 0;
                                                        if ((char)bVar2 != '\0') {
                                                          uVar3 = (uint)((fileName->fields)._stringLength <
                                                                        0x32);
                                                        }
                                                      }
                                                    }
                                                  }
                                                  return uVar3;
                                                }
                                                goto label_04496795;
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_04496795:
  dVar4 = (double)il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(dVar4 <= in_XMM1_Qa);
}


// Utility.Util$$GetPhotonTimestampDifference
// il2cpp: double Utility_Util__GetPhotonTimestampDifference (double sentTime, double serverTime, const MethodInfo* method);
// 0x44967a0

double Utility_Util__GetPhotonTimestampDifference(double sentTime,double serverTime,MethodInfo *method)

{
  return (*(double *)(&g_data_00d19cf0 + (ulong)(sentTime <= serverTime) * 8) - sentTime) + serverTime;
}


// Utility.Util$$ForceScalableParticleSystemMinMaxCurveMode
// il2cpp: bool Utility_Util__ForceScalableParticleSystemMinMaxCurveMode (UnityEngine_ParticleSystem_MinMaxCurve_o curve, UnityEngine_ParticleSystem_MinMaxCurve_o* newCurve, float scale, const MethodInfo* method);
// 0x44967d0

bool_conflict
Utility_Util__ForceScalableParticleSystemMinMaxCurveMode
          (UnityEngine_ParticleSystem_MinMaxCurve_o curve,UnityEngine_ParticleSystem_MinMaxCurve_o *newCurve,
          float scale,MethodInfo *method)

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
    valueStart = UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin(__this_02,(MethodInfo *)&curve);
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
      il2cpp_runtime_helper_022b4080(&(newCurve->fields).m_CurveMin,0);
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
    valueStart = UnityEngine_ParticleSystem_MinMaxCurve__get_constant(__this_00,(MethodInfo *)&curve);
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
  method_00 = (MethodInfo *)UnityEngine_AnimationCurve__Linear(0.0,valueStart,1.0,fVar2,(MethodInfo *)0x0);
  iVar1 = 0;
  fVar2 = 0.0;
  uVar3 = 0;
  uVar4 = 0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_4e734b0
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
  il2cpp_runtime_helper_022b4080(&(newCurve->fields).m_CurveMin,0);
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
}


// Utility.Util$$ScaleParticleStartSize
// il2cpp: void Utility_Util__ScaleParticleStartSize (UnityEngine_ParticleSystem_MainModule_o main, float scale, const MethodInfo* method);
// 0x44968d0

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
  if (g_data_057ae931 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae931 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
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
// 0x44969c0

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
  if (g_data_057ae932 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae932 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
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
// 0x4496ab0

bool_conflict Utility_Util__IsValidResourcePath(System_String_o *path,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_T__o *__this;
  Il2CppObject *__this_00;
  long lVar7;
  ulong uVar8;
  MethodInfo *method_00;
  System_String_o *unaff_R15;
  float in_XMM1_Da;
  System_Collections_Generic_KeyValuePair_float__object__o item;
  System_Collections_Generic_KeyValuePair_float__object__o item_00;
  System_Collections_Generic_KeyValuePair_float__object__o item_01;
  System_Collections_Generic_KeyValuePair_float__object__o __this_01;
  System_Collections_Generic_KeyValuePair_float__object__o __this_02;
  System_Collections_Generic_KeyValuePair_float__object__o __this_03;
  Il2CppObject local_70;
  Il2CppObject local_60;
  Il2CppObject local_50;
  ulong uStack_40;
  System_String_array *pSStack_38;
  System_String_o *pSStack_30;
  
  if (g_data_057ae933 == '\0') {
    pSStack_30 = (System_String_o *)0x4496ad0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae933 = '\x01';
  }
  uVar8 = 0;
  pSStack_30 = (System_String_o *)0x4496ae3;
  bVar5 = System_String__IsNullOrEmpty(path,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return 0;
  }
  if (path != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x2f;
    pSStack_30 = (System_String_o *)0x4496b01;
    pSVar6 = System_String__Split(path,0x2f,0,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      uVar8 = 0;
      uVar2 = (uint)pSVar6->max_length;
      if (0 < (int)uVar2) {
        do {
          if (uVar2 <= uVar8) {
            pSStack_30 = (System_String_o *)0x4496b73;
            il2cpp_runtime_helper_022b2ca0();
            path = (System_String_o *)pSVar6;
            goto label_04496b73;
          }
          unaff_R15 = pSVar6->m_Items[uVar8];
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            pSStack_30 = (System_String_o *)0x4496b58;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_30 = (System_String_o *)0x4496b28;
          bVar5 = Utility_Util__IsValidFileName(unaff_R15,method_00);
          uVar8 = uVar8 + 1;
          if ((char)bVar5 == '\0') {
            return 0;
          }
          uVar2 = (uint)pSVar6->max_length;
        } while ((long)uVar8 < (long)(int)uVar2);
      }
      return (bool_conflict)CONCAT71((int7)(uVar8 >> 8),1);
    }
  }
label_04496b73:
  pSStack_30 = (System_String_o *)0x4496b78;
  il2cpp_runtime_helper_022b2c90();
  uStack_40 = uVar8;
  pSStack_38 = (System_String_array *)path;
  pSStack_30 = unaff_R15;
  if (g_data_057ae934 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Single_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_Single_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KeyValuePair_float_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"avgTitan");
    il2cpp_runtime_helper_023445d0(&"maxTitan");
    il2cpp_runtime_helper_023445d0(&"smallTitan");
    g_data_057ae934 = '\x01';
  }
  __this = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_KeyValuePair_float_string);
  System_Collections_Generic_List_KeyValuePair_float__object_____ctor(__this,MethodInfo_List_1_KeyValuePair_2_System_Single_System_String);
  local_50.klass = (Il2CppClass *)0x0;
  local_50.monitor = (Il2CppObject *)0x0;
  __this_01.fields.value = &local_50;
  __this_01.fields._0_8_ = 0x3f800000;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            (__this_01,in_XMM1_Da,"smallTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
  lVar4 = MethodInfo_Void_Add;
  if (__this != (System_Collections_Generic_List_T__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      lVar7 = (long)(int)uVar2;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        *(undefined4 *)(pSVar3->m_Items + lVar7 * 2) = local_50.klass._0_4_;
        pSVar3->m_Items[lVar7 * 2 + 1] = local_50.monitor;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar7 * 2 + 1,0);
      }
      else {
        item.fields.value = local_50.monitor;
        item.fields._0_8_ = (ulong)local_50.klass & 0xffffffff;
        System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                  (__this,item,*(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      local_60.klass = (Il2CppClass *)0x0;
      local_60.monitor = (Il2CppObject *)0x0;
      __this_02.fields.value = &local_60;
      __this_02.fields._0_8_ = 0x40000000;
      System_Collections_Generic_KeyValuePair_float__object____ctor
                (__this_02,in_XMM1_Da,"avgTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        lVar7 = (long)(int)uVar2;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          *(undefined4 *)(pSVar3->m_Items + lVar7 * 2) = local_60.klass._0_4_;
          pSVar3->m_Items[lVar7 * 2 + 1] = local_60.monitor;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar7 * 2 + 1,0);
        }
        else {
          item_00.fields.value = local_60.monitor;
          item_00.fields._0_8_ = (ulong)local_60.klass & 0xffffffff;
          System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                    (__this,item_00,*(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
        }
        local_70.klass = (Il2CppClass *)0x0;
        local_70.monitor = (Il2CppObject *)0x0;
        __this_03.fields.value = &local_70;
        __this_03.fields._0_8_ = 0x40400000;
        System_Collections_Generic_KeyValuePair_float__object____ctor
                  (__this_03,in_XMM1_Da,"maxTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          lVar7 = (long)(int)uVar2;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            *(undefined4 *)(pSVar3->m_Items + lVar7 * 2) = local_70.klass._0_4_;
            pSVar3->m_Items[lVar7 * 2 + 1] = local_70.monitor;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar7 * 2 + 1,0);
          }
          else {
            item_01.fields.value = local_70.monitor;
            item_01.fields._0_8_ = (ulong)local_70.klass & 0xffffffff;
            System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                      (__this,item_01,
                       *(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_Util + 0xb8) = __this;
          bVar5 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Util + 0xb8),__this);
          return bVar5;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae935 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae935 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  bVar5 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return bVar5;
}


// Utility.Util$$.cctor
// il2cpp: void Utility_Util___cctor (const MethodInfo* method);
// 0x4496b80

void Utility_Util___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_T__o *__this;
  Il2CppObject *__this_00;
  long lVar5;
  float in_XMM1_Da;
  System_Collections_Generic_KeyValuePair_float__object__o item;
  System_Collections_Generic_KeyValuePair_float__object__o item_00;
  System_Collections_Generic_KeyValuePair_float__object__o item_01;
  System_Collections_Generic_KeyValuePair_float__object__o __this_01;
  System_Collections_Generic_KeyValuePair_float__object__o __this_02;
  System_Collections_Generic_KeyValuePair_float__object__o __this_03;
  Il2CppObject IStack_48;
  Il2CppObject IStack_38;
  Il2CppObject IStack_28;
  
  if (g_data_057ae934 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_Single_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_KeyValuePair_2_System_Single_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_KeyValuePair_float_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"avgTitan");
    il2cpp_runtime_helper_023445d0(&"maxTitan");
    il2cpp_runtime_helper_023445d0(&"smallTitan");
    g_data_057ae934 = '\x01';
  }
  __this = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_KeyValuePair_float_string);
  System_Collections_Generic_List_KeyValuePair_float__object_____ctor(__this,MethodInfo_List_1_KeyValuePair_2_System_Single_System_String);
  IStack_28.klass = (Il2CppClass *)0x0;
  IStack_28.monitor = (Il2CppObject *)0x0;
  __this_01.fields.value = &IStack_28;
  __this_01.fields._0_8_ = 0x3f800000;
  System_Collections_Generic_KeyValuePair_float__object____ctor
            (__this_01,in_XMM1_Da,"smallTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
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
        *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = IStack_28.klass._0_4_;
        pSVar3->m_Items[lVar5 * 2 + 1] = IStack_28.monitor;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar5 * 2 + 1,0);
      }
      else {
        item.fields.value = IStack_28.monitor;
        item.fields._0_8_ = (ulong)IStack_28.klass & 0xffffffff;
        System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                  (__this,item,*(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      IStack_38.klass = (Il2CppClass *)0x0;
      IStack_38.monitor = (Il2CppObject *)0x0;
      __this_02.fields.value = &IStack_38;
      __this_02.fields._0_8_ = 0x40000000;
      System_Collections_Generic_KeyValuePair_float__object____ctor
                (__this_02,in_XMM1_Da,"avgTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this->fields)._size;
        lVar5 = (long)(int)uVar2;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = IStack_38.klass._0_4_;
          pSVar3->m_Items[lVar5 * 2 + 1] = IStack_38.monitor;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar5 * 2 + 1,0);
        }
        else {
          item_00.fields.value = IStack_38.monitor;
          item_00.fields._0_8_ = (ulong)IStack_38.klass & 0xffffffff;
          System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                    (__this,item_00,*(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
        }
        IStack_48.klass = (Il2CppClass *)0x0;
        IStack_48.monitor = (Il2CppObject *)0x0;
        __this_03.fields.value = &IStack_48;
        __this_03.fields._0_8_ = 0x40400000;
        System_Collections_Generic_KeyValuePair_float__object____ctor
                  (__this_03,in_XMM1_Da,"maxTitan",MethodInfo_KeyValuePair_2_System_Single_System_String);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (__this->fields)._size;
          lVar5 = (long)(int)uVar2;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            *(undefined4 *)(pSVar3->m_Items + lVar5 * 2) = IStack_48.klass._0_4_;
            pSVar3->m_Items[lVar5 * 2 + 1] = IStack_48.monitor;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + lVar5 * 2 + 1,0);
          }
          else {
            item_01.fields.value = IStack_48.monitor;
            item_01.fields._0_8_ = (ulong)IStack_48.klass & 0xffffffff;
            System_Collections_Generic_List_KeyValuePair_float__object____AddWithResize
                      (__this,item_01,
                       *(MethodInfo_3532D20 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          **(undefined8 **)(TypeInfo_Util + 0xb8) = __this;
          il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Util + 0xb8),__this);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae935 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae935 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this_00;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_00);
  return;
}


