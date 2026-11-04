// Type: Settings.HashSetSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HashSetSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_1755D40* method);
// 0x181755d40

void
Settings_HashSetSetting_int____ctor(Settings_HashSetSetting_int__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, MethodInfo_1755D40* method)

{
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_1755D00* method);
// 0x181755d00

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor
               (Settings_HashSetSetting_T__o *__this,System_Collections_Generic_HashSet_T__o *defaultValue,
               MethodInfo_1755D00 *method)

{
  MethodInfo *pMVar1;
  System_Collections_Generic_HashSet_T__o *local_res10 [3];
  
  pMVar1 = method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor;
  local_res10[0] = defaultValue;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,local_res10,defaultValue);
  return;
}


// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, const MethodInfo_1755C60* method);
// 0x181755c60

void Settings_HashSetSetting_int____ctor_1755c60
               (Settings_HashSetSetting_int__o *__this,MethodInfo_1755C60 *method)

{
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,
             (MethodInfo_176CDF0 *)method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor);
  (__this->fields).DefaultValue = (System_Collections_Generic_HashSet_T__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,__this_00);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, const MethodInfo_1755BC0* method);
// 0x181755bc0

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor_1755bc0
               (Settings_HashSetSetting_T__o *__this,MethodInfo_1755BC0 *method)

{
  MethodInfo *pMVar1;
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_T__o *value;
  
  pMVar1 = method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor;
  (*pMVar1->methodPointer)(__this,pMVar1);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  value = (System_Collections_Generic_HashSet_T__o *)il2cpp_codegen_object_new(klass);
  pMVar1 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  (*pMVar1->methodPointer)(value,pMVar1);
  (__this->fields).DefaultValue = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,value);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.HashSetSetting<int>$$SetDefault
// il2cpp: void Settings_HashSetSetting_int___SetDefault (Settings_HashSetSetting_int__o* __this, const MethodInfo_17557B0* method);
// 0x1817557b0

void Settings_HashSetSetting_int___SetDefault
               (Settings_HashSetSetting_int__o *__this,MethodInfo_17557B0 *method)

{
  System_Collections_Generic_HashSet_T__o *collection;
  MethodInfo *pMVar1;
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  
  collection = (__this->fields).DefaultValue;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(klass);
  pMVar1 = method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor;
  comparer = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_runtime_helper_18001afc0(pMVar1->klass->rgctx_data->rgctxDataDummy);
  System_Collections_Generic_HashSet_int____ctor_176d010
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,comparer,
             (MethodInfo_176D010 *)pMVar1->klass->rgctx_data[8].method);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_E8F4C0 *)method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault (Settings_HashSetSetting_T__o* __this, const MethodInfo_1755860* method);
// 0x181755860

void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_HashSetSetting_T__o *__this,MethodInfo_1755860 *method)

{
  System_Collections_Generic_HashSet_T__o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  Il2CppObject *local_res8 [4];
  
  pSVar1 = (__this->fields).DefaultValue;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar3 = il2cpp_codegen_object_new(klass);
  pMVar2 = method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor;
  (*pMVar2->methodPointer)(pIVar3,pSVar1,pMVar2);
  pMVar2 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
  local_res8[0] = pIVar3;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,__this,local_res8,pIVar3);
  return;
}


// Settings.HashSetSetting<int>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting_int___DeserializeFromJsonObject (Settings_HashSetSetting_int__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_1754620* method);
// 0x181754620
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181754748: nop dword ptr [rax + rax]
// asm:   0x1817548ad: jmp 0x181754936

void Settings_HashSetSetting_int___DeserializeFromJsonObject
               (Settings_HashSetSetting_int__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_1754620 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  Settings_HashSetSetting_T__RGCTXs *pSVar2;
  bool bVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_HashSet_int__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar6;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Type_o *pSVar9;
  System_Type_o *pSVar10;
  System_String_o *pSVar11;
  int32_t *piVar12;
  MethodInfo *pMVar13;
  int32_t local_res10 [2];
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  SimpleJSONFixed_JSONNode_Enumerator_o local_78;
  
  if (Il2CppMethodInitialized_184341796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184341796 = '\x01';
  }
  local_e8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_e8.type = 0;
  local_e8._4_4_ = 0;
  local_e8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e8.m_Object.fields._version = 0;
  local_e8.m_Object.fields._index = 0;
  local_e8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e8.m_Object.fields._getEnumeratorRetType = 0;
  local_e8.m_Object.fields._36_4_ = 0;
  local_e8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e8.m_Array.fields._index = 0;
  local_e8.m_Array.fields._version = 0;
  pIVar4 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar4->_2).bitflags1 & 1) == 0) {
    pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(pIVar4);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,
             (MethodInfo_176CDF0 *)method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor);
  if ((json != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar5 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                         (json,(json->klass->vtable)._45_get_AsArray.method),
     pSVar5 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
    pSVar6 = (*(pSVar5->klass->vtable)._32_GetEnumerator.methodPtr)
                       (&local_78,pSVar5,(pSVar5->klass->vtable)._32_GetEnumerator.method);
    local_e8.type = (pSVar6->fields).type;
    local_e8._4_4_ = *(undefined4 *)&(pSVar6->fields).field_0x4;
    local_e8.m_Object.fields._dictionary = (pSVar6->fields).m_Object.fields._dictionary;
    local_e8.m_Object.fields._version = (pSVar6->fields).m_Object.fields._version;
    local_e8.m_Object.fields._index = (pSVar6->fields).m_Object.fields._index;
    local_e8.m_Object.fields._current.fields.key = (pSVar6->fields).m_Object.fields._current.fields.key;
    local_e8.m_Object.fields._current.fields.value = (pSVar6->fields).m_Object.fields._current.fields.value;
    local_e8.m_Object.fields._getEnumeratorRetType = (pSVar6->fields).m_Object.fields._getEnumeratorRetType;
    local_e8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar6->fields).m_Object.fields.field_0x24;
    local_e8.m_Array.fields._list = (pSVar6->fields).m_Array.fields._list;
    local_e8.m_Array.fields._index = (pSVar6->fields).m_Array.fields._index;
    local_e8.m_Array.fields._version = (pSVar6->fields).m_Array.fields._version;
    local_e8.m_Array.fields._current = (pSVar6->fields).m_Array.fields._current;
    bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
    if (bVar3) {
      do {
        pSVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,(MethodInfo *)0x0);
        pSVar11 = (pSVar7->fields).key;
        pSVar8 = (pSVar7->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_98.fields.key = pSVar11;
        local_98.fields.value = pSVar8;
        pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_98,(MethodInfo *)0x0);
        SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar9 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
        pSVar10 = System_Type__GetTypeFromHandle
                            ((System_RuntimeTypeHandle_o)&(g_data_184354e08->_1).byval_arg,(MethodInfo *)0x0);
        bVar3 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                          ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar9,
                           (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                           (MethodInfo_841F20 *)0x0);
        if (bVar3) {
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_1817549c6:
            ThrowNullReferenceException();
          }
          local_res10[0] =
               (*(pSVar8->klass->vtable)._35_get_AsInt.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._35_get_AsInt.method);
          pSVar11 = (System_String_o *)il2cpp_value_box(g_data_184354e08,local_res10);
          if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_1817549c6;
          pSVar2 = method->klass->rgctx_data;
          pIVar4 = pSVar2->_10_T;
          pMVar13 = pSVar2->_11_System_Collections_Generic_HashSet_T__Add;
          if (((pIVar4->_2).bitflags1 & 1) == 0) {
            pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
          }
          if (pSVar11 == (System_String_o *)0x0) goto label_1817549c6;
          if ((pSVar11->klass->_1).element_class != (pIVar4->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar11,pIVar4);
          }
label_181754936:
          piVar12 = il2cpp_object_unbox((Il2CppObject *)pSVar11);
          System_Collections_Generic_HashSet_int___AddIfNotPresent
                    (__this_00,*piVar12,(MethodInfo_1755D60 *)pMVar13->klass->rgctx_data[0x15].method);
        }
        else {
          SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          pSVar9 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
          pSVar10 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)(g_data_184354e50 + 0x20),(MethodInfo *)0x0);
          bVar3 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                            ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar9,
                             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar10,
                             (MethodInfo_841F20 *)0x0);
          if (bVar3) {
            if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (pSVar11 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method),
               __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
              pSVar2 = method->klass->rgctx_data;
              pIVar4 = pSVar2->_10_T;
              pMVar13 = pSVar2->_11_System_Collections_Generic_HashSet_T__Add;
              if (((pIVar4->_2).bitflags1 & 1) == 0) {
                pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
              }
              if (pSVar11 != (System_String_o *)0x0) {
                if ((pSVar11->klass->_1).element_class != (pIVar4->_1).element_class) {
                  il2cpp_codegen_raise_invalid_cast_exception(pSVar11,pIVar4);
                }
                goto label_181754936;
              }
            }
            goto label_1817549ae;
          }
        }
        bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
      } while (bVar3);
    }
    if (__this != (Settings_HashSetSetting_int__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                 (MethodInfo_E8F4C0 *)
                 method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
      return;
    }
  }
label_1817549ae:
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject (Settings_HashSetSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_17549D0* method);
// 0x1817549d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181754b22: nop dword ptr [rax]
// asm:   0x181754b26: nop word ptr [rax + rax]

void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject
               (Settings_HashSetSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_17549D0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  _func_56 *p_Var3;
  _func_65 *p_Var4;
  System_RuntimeTypeHandle_o SVar5;
  _func_7 *p_Var6;
  _func_4 *p_Var7;
  InvokerMethod pIVar8;
  Settings_HashSetSetting_T__c *pSVar9;
  longlong lVar10;
  bool bVar11;
  ulonglong uVar12;
  Il2CppClass *pIVar13;
  Il2CppObject *pIVar14;
  SimpleJSONFixed_JSONArray_o *pSVar15;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar16;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar17;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  System_Type_o *pSVar19;
  System_Type_o *pSVar20;
  System_String_o *pSVar21;
  System_String_c *pSVar22;
  Il2CppObject *pIVar23;
  Il2CppObject **ppIVar24;
  Settings_HashSetSetting_T__RGCTXs *pSVar25;
  ulonglong uVar26;
  Il2CppObject *local_res10;
  Il2CppObject *local_res18;
  int32_t local_res20 [2];
  undefined8 auStack_140 [5];
  longlong alStack_118 [2];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_a8;
  SimpleJSONFixed_JSONNode_Enumerator_o local_98;
  
  if (g_data_184341798 == '\0') {
    auStack_140[0] = 0x181754a0c;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    g_data_184341798 = '\x01';
  }
  uVar26 = (ulonglong)(method->klass->rgctx_data->_10_T->_2).stack_slot_size;
  uVar12 = uVar26 + 0xf;
  if (uVar12 <= uVar26) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x181754a45;
  lVar10 = -(uVar12 & 0xfffffffffffffff0);
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  pIVar13 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar13->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754a85;
    pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
  }
  *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754a8d;
  pIVar14 = il2cpp_codegen_object_new(pIVar13);
  pMVar1 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754aa8;
  (*pIVar2)(pIVar14,pMVar1);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar1 = (json->klass->vtable)._45_get_AsArray.method;
    p_Var3 = (json->klass->vtable)._45_get_AsArray.methodPtr;
    *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754ac5;
    pSVar15 = (*p_Var3)(json,pMVar1);
    if (pSVar15 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pMVar1 = (pSVar15->klass->vtable)._32_GetEnumerator.method;
      p_Var4 = (pSVar15->klass->vtable)._32_GetEnumerator.methodPtr;
      *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754ae6;
      pSVar16 = (*p_Var4)(&local_98,pSVar15,pMVar1);
      local_f8.type = (pSVar16->fields).type;
      local_f8._4_4_ = *(undefined4 *)&(pSVar16->fields).field_0x4;
      local_f8.m_Object.fields._dictionary = (pSVar16->fields).m_Object.fields._dictionary;
      local_f8.m_Object.fields._version = (pSVar16->fields).m_Object.fields._version;
      local_f8.m_Object.fields._index = (pSVar16->fields).m_Object.fields._index;
      local_f8.m_Object.fields._current.fields.key = (pSVar16->fields).m_Object.fields._current.fields.key;
      local_f8.m_Object.fields._current.fields.value = (pSVar16->fields).m_Object.fields._current.fields.value
      ;
      local_f8.m_Object.fields._getEnumeratorRetType = (pSVar16->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar16->fields).m_Object.fields.field_0x24;
      local_f8.m_Array.fields._list = (pSVar16->fields).m_Array.fields._list;
      local_f8.m_Array.fields._index = (pSVar16->fields).m_Array.fields._index;
      local_f8.m_Array.fields._version = (pSVar16->fields).m_Array.fields._version;
      local_f8.m_Array.fields._current = (pSVar16->fields).m_Array.fields._current;
      *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b1a;
      bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
      if (bVar11) {
        do {
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b40;
          pSVar17 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (&local_a8,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_f8,(MethodInfo *)0x0)
          ;
          pSVar22 = (System_String_c *)(pSVar17->fields).key;
          pSVar18 = (pSVar17->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b58;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_108.fields.key = (System_String_o *)pSVar22;
          local_108.fields.value = pSVar18;
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b68;
          pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_108,(MethodInfo *)0x0);
          SVar5.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b8f;
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754b99;
          pSVar19 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754bae;
          pSVar20 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)&(g_data_184354e08->_1).byval_arg,(MethodInfo *)0x0);
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754bbc;
          bVar11 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                             ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar19,
                              (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar20,
                              (MethodInfo_841F20 *)0x0);
          if (bVar11) {
            if (pSVar18 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_181754dcd:
              *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754dd2;
              ThrowNullReferenceException();
            }
            pMVar1 = (pSVar18->klass->vtable)._35_get_AsInt.method;
            p_Var7 = (pSVar18->klass->vtable)._35_get_AsInt.methodPtr;
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754cc5;
            local_res20[0] = (*p_Var7)(pSVar18,pMVar1);
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754cde;
            pIVar23 = il2cpp_value_box(g_data_184354e08,local_res20);
            pIVar13 = method->klass->rgctx_data->_10_T;
            if (((pIVar13->_2).bitflags1 & 1) == 0) {
              *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754d01;
              pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
            }
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754d0f;
            pSVar22 = (System_String_c *)il2cpp_runtime_helper_180416280(pIVar23,pIVar13,(longlong)&local_108 + lVar10);
            if (pIVar14 == (Il2CppObject *)0x0) goto label_181754dcd;
            if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
              pSVar22 = (pSVar22->_1).image;
            }
            pSVar25 = method->klass->rgctx_data;
            ppIVar24 = &local_res18;
label_181754d49:
            pMVar1 = pSVar25->_11_System_Collections_Generic_HashSet_T__Add;
            local_108.fields.key = (System_String_o *)pSVar22;
            *(Il2CppObject ***)((longlong)alStack_118 + lVar10) = ppIVar24;
            pIVar2 = pMVar1->methodPointer;
            pIVar8 = pMVar1->invoker_method;
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754d67;
            (*pIVar8)(pIVar2,pMVar1,pIVar14,(void **)&local_108,*(void **)((longlong)alStack_118 + lVar10));
          }
          else {
            SVar5.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
              *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754be8;
              il2cpp_codegen_runtime_class_init(g_data_184354ea0);
            }
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754bf2;
            pSVar19 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754c07;
            pSVar20 = System_Type__GetTypeFromHandle
                                ((System_RuntimeTypeHandle_o)(g_data_184354e50 + 0x20),(MethodInfo *)0x0);
            *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754c15;
            bVar11 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                               ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar19,
                                (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar20,
                                (MethodInfo_841F20 *)0x0);
            if (bVar11) {
              if (pSVar18 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pMVar1 = (pSVar18->klass->vtable)._9_get_Value.method;
                p_Var6 = (pSVar18->klass->vtable)._9_get_Value.methodPtr;
                *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754c39;
                pSVar21 = (*p_Var6)(pSVar18,pMVar1);
                pIVar13 = method->klass->rgctx_data->_10_T;
                if (((pIVar13->_2).bitflags1 & 1) == 0) {
                  *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754c5c;
                  pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
                }
                *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754c6a;
                pSVar22 = (System_String_c *)il2cpp_runtime_helper_180416280(pSVar21,pIVar13,(longlong)&local_108 + lVar10);
                if (pIVar14 != (Il2CppObject *)0x0) {
                  if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
                    pSVar22 = (pSVar22->_1).image;
                  }
                  pSVar25 = method->klass->rgctx_data;
                  ppIVar24 = &local_res10;
                  goto label_181754d49;
                }
              }
              goto label_181754dc7;
            }
          }
          *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754d72;
          bVar11 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        } while (bVar11);
      }
      if (__this != (Settings_HashSetSetting_T__o *)0x0) {
        pSVar9 = method->klass;
        *(Il2CppObject **)((longlong)alStack_118 + lVar10) = pIVar14;
        pMVar1 = pSVar9->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
        pIVar2 = pMVar1->methodPointer;
        pIVar8 = pMVar1->invoker_method;
        *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754dae;
        local_res10 = pIVar14;
        (*pIVar8)(pIVar2,pMVar1,__this,&local_res10,*(void **)((longlong)alStack_118 + lVar10));
        return;
      }
    }
  }
label_181754dc7:
  *(undefined8 *)((longlong)auStack_140 + lVar10) = 0x181754dcc;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting_int___SerializeToJsonObject (Settings_HashSetSetting_int__o* __this, const MethodInfo_1755420* method);
// 0x181755420
// eh: try 0x181755520..0x181755686 -> pad 0x183317870 catch Il2CppExceptionWrapper
// eh: try 0x181755686..0x1817556a6 -> pad 0x180209a70 cleanup
// eh: try 0x1817556a6..0x1817557a1 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181755519: nop dword ptr [rax]
// asm:   0x181755686: jmp 0x181755701
// asm:   0x181755738: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18175573d: mov rcx, qword ptr [rax]
// asm:   0x181755740: mov rax, qword ptr [rcx + 0x20]
// asm:   0x181755744: mov rdx, qword ptr [rax + 0xc0]
// asm:   0x18175574b: mov rdx, qword ptr [rdx + 0x90]
// asm:   0x181755752: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181755757: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18175575c: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181755761: test rcx, rcx
// asm:   0x181755764: jne 0x1817557a1
// asm:   0x181755766: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x1817557a1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting_int___SerializeToJsonObject
          (Settings_HashSetSetting_int__o *__this,MethodInfo_1755420 *method)

{
  System_Collections_Generic_HashSet_T__o *set;
  System_RuntimeTypeHandle_o SVar1;
  undefined4 uVar2;
  bool bVar3;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Type_o *pSVar4;
  System_Type_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  Il2CppObject *obj;
  int32_t *piVar8;
  System_String_o *s;
  undefined4 local_res8 [2];
  Il2CppObject local_res10;
  System_Collections_Generic_HashSet_Enumerator_T__o local_60;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  Il2CppObject *local_38;
  
  local_res10.klass = (Il2CppClass *)method;
  if (Il2CppMethodInitialized_184341797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184341797 = '\x01';
  }
  local_60.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (set = (__this->fields)._value, set == (System_Collections_Generic_HashSet_T__o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_48 = (undefined1  [8])0x0;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0;
  local_38 = (Il2CppObject *)0x0;
  local_res10.monitor = __this_00;
  System_Collections_Generic_HashSet_Enumerator_uint____ctor
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,set,
             (MethodInfo_153DC00 *)
             (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
             _13_System_Collections_Generic_HashSet_T__GetEnumerator->klass->rgctx_data[0x1c].method);
  local_60.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48;
  local_60.fields._index = (int32_t)uStack_40;
  local_60.fields._version = uStack_40._4_4_;
  local_60.fields._current = local_38;
  local_48 = (undefined1  [8])0x0;
  local_38 = &local_res10;
  uStack_40 = &local_60;
label_181755520:
  bVar3 = System_Collections_Generic_HashSet_Enumerator_uint___MoveNext
                    (&local_60,
                     (MethodInfo_1537E90 *)
                     (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
                     _17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
  if (!bVar3) {
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
               (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
               _19_System_Collections_Generic_HashSet_T__Contains);
    return (SimpleJSONFixed_JSONNode_o *)__this_00;
  }
  uVar2 = local_60.fields._current._0_4_;
  SVar1.fields.value =
       (System_RuntimeTypeHandle_Fields)(((local_res10.klass)->_1).byval_arg.data)->rgctx_data->_9_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)(g_data_184354e08 + 0x20),(MethodInfo *)0x0);
  bVar3 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar4,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar5,(MethodInfo_841F20 *)0x0
                    );
  if (!bVar3) goto code_r0x0001817555b9;
  local_res8[0] = uVar2;
  obj = il2cpp_value_box((((local_res10.klass)->_1).byval_arg.data)->rgctx_data->_10_T,local_res8);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  piVar8 = il2cpp_object_unbox(obj);
  pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(*piVar8,(MethodInfo *)0x0);
  if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    ThrowNullReferenceException();
  }
  goto label_181755701;
code_r0x0001817555b9:
  SVar1.fields.value =
       (System_RuntimeTypeHandle_Fields)(((local_res10.klass)->_1).byval_arg.data)->rgctx_data->_9_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar5 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)&(g_data_184354e50->_1).byval_arg,(MethodInfo *)0x0);
  bVar3 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                    ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar4,
                     (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar5,(MethodInfo_841F20 *)0x0
                    );
  if (bVar3) {
    local_res8[0] = uVar2;
    pSVar6 = (System_String_o *)
             il2cpp_value_box((((local_res10.klass)->_1).byval_arg.data)->rgctx_data->_10_T,local_res8);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    s = (System_String_o *)0x0;
    if (pSVar6 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar6->klass == g_data_184354e50) {
        s = pSVar6;
      }
      if (s == (System_String_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
    }
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      ThrowNullReferenceException();
    }
label_181755701:
    (*(__this_00->klass->vtable)._21_Add.methodPtr)
              (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
  }
  goto label_181755520;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject (Settings_HashSetSetting_T__o* __this, const MethodInfo_1754F30* method);
// 0x181754f30
// eh: try 0x181755180..0x181755328 -> pad 0x183315a60 catch Il2CppExceptionWrapper
// eh: try 0x181755328..0x181755351 -> pad 0x180209ab0 cleanup
// eh: try 0x181755351..0x18175541a -> pad 0x183315a60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181755328: jmp 0x1817553a5
// asm:   0x1817553cc: lea rcx, [rbp + 0x20]
// asm:   0x1817553d0: call 0x181751100  ; il2cpp_runtime_helper_181751100()
// asm:   0x1817553d5: mov rcx, qword ptr [rbp + 0x18]
// asm:   0x1817553d9: test rcx, rcx
// asm:   0x1817553dc: jne 0x18175541a
// asm:   0x1817553de: mov rdi, qword ptr [rbp + 8]
// asm:   0x18175541a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a65: push rbp
// asm:   0x183315a66: sub rsp, 0x30
// asm:   0x183315a6a: lea rbp, [rdx + 0x30]
// asm:   0x183315a6e: mov rax, qword ptr [rbp + 0x10]
// asm:   0x183315a72: mov rcx, qword ptr [rax]
// asm:   0x183315a75: mov qword ptr [rbp + 0x18], rcx
// asm:   0x183315a79: movabs rax, 0
// asm:   0x183315a83: add rsp, 0x30
// asm:   0x183315a87: pop rbp
// asm:   0x183315a88: ret 

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject
          (Settings_HashSetSetting_T__o *__this,MethodInfo_1754F30 *method)

{
  void *source;
  void *destination;
  int32_t n;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  System_RuntimeTypeHandle_o SVar4;
  _func_45 *p_Var5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  void *source_00;
  char cVar11;
  bool bVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  ulonglong uVar15;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Type_o *pSVar16;
  System_Type_o *pSVar17;
  System_String_o *pSVar18;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  Il2CppObject *obj;
  int32_t *piVar20;
  System_String_o *s;
  ulonglong size;
  ulonglong size_00;
  void *local_res8;
  MethodInfo_1754F30 *local_res10;
  void *local_res18;
  void *local_res20;
  undefined8 auStack_c0 [5];
  longlong alStack_98 [2];
  longlong local_88;
  SimpleJSONFixed_JSONArray_o *local_80;
  undefined8 local_70;
  MethodInfo_1754F30 **local_68;
  longlong *local_60;
  void **local_58;
  
  local_res10 = method;
  if (g_data_184341799 == '\0') {
    auStack_c0[0] = 0x181754f65;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    auStack_c0[0] = 0x181754f71;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    g_data_184341799 = '\x01';
  }
  size_00 = (ulonglong)
            (local_res10->klass->rgctx_data->_14_System_Collections_Generic_HashSet_Enumerator_T_->_2).
            stack_slot_size;
  size = (ulonglong)(local_res10->klass->rgctx_data->_10_T->_2).stack_slot_size;
  pIVar14 = local_res10->klass->rgctx_data->_14_System_Collections_Generic_HashSet_Enumerator_T_;
  if (((pIVar14->_2).bitflags1 & 1) == 0) {
    auStack_c0[0] = 0x181754fcb;
    pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
  }
  uVar13 = (pIVar14->_2).stack_slot_size + 0x10;
  uVar15 = (ulonglong)uVar13 + 0xf;
  if (uVar15 <= uVar13) {
    uVar15 = 0xffffffffffffff0;
  }
  auStack_c0[0] = 0x181754ff5;
  lVar6 = -(uVar15 & 0xfffffffffffffff0);
  local_88 = (longlong)&local_88 + lVar6;
  uVar15 = size + 0xf;
  if (uVar15 <= size) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar6) = 0x181755019;
  lVar7 = -(uVar15 & 0xfffffffffffffff0);
  source = (void *)((longlong)&local_88 + lVar7 + lVar6);
  uVar15 = size_00 + 0xf;
  if (uVar15 <= size_00) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar7 + lVar6) = 0x181755039;
  lVar8 = -(uVar15 & 0xfffffffffffffff0);
  local_res20 = (void *)((longlong)&local_88 + lVar8 + lVar7 + lVar6);
  uVar15 = size_00 + 0xf;
  if (uVar15 <= size_00) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar8 + lVar7 + lVar6) = 0x181755060;
  lVar9 = -(uVar15 & 0xfffffffffffffff0);
  local_res8 = (void *)((longlong)&local_88 + lVar9 + lVar8 + lVar7 + lVar6);
  *(undefined8 *)((longlong)auStack_c0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755079;
  il2cpp_runtime_helper_180522500(local_res8,0,size_00);
  uVar15 = size + 0xf;
  if (uVar15 <= size) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755091;
  lVar10 = -(uVar15 & 0xfffffffffffffff0);
  destination = (void *)((longlong)&local_88 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817550a6;
  il2cpp_runtime_helper_180522500(destination,0,size);
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817550b2;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817550bf;
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = local_res10->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    *(void ***)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = &local_res18;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817550fa;
    (*pIVar3)(pIVar2,pMVar1,__this,(void **)0x0,
              *(void **)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
    source_00 = local_res20;
    if (local_res18 != (void *)0x0) {
      local_80 = __this_00;
      pMVar1 = local_res10->klass->rgctx_data->_13_System_Collections_Generic_HashSet_T__GetEnumerator;
      *(void **)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_res20;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755148;
      (*pIVar3)(pIVar2,pMVar1,local_res18,&local_res20,
                *(void **)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175515a;
      memcpy(local_res8,source_00,size_00);
      local_70 = 0;
      local_68 = &local_res10;
      local_58 = &local_res8;
      local_60 = &local_88;
label_181755180:
      pMVar1 = local_res10->klass->rgctx_data->_17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext;
      pIVar2 = pMVar1->methodPointer;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817551a6;
      cVar11 = (*pIVar2)(local_res8,pMVar1);
      if (cVar11 == '\0') {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817553ca;
        il2cpp_runtime_helper_181751100(&local_68);
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
      pMVar1 = local_res10->klass->rgctx_data->
               _15_System_Collections_Generic_HashSet_Enumerator_T__get_Current;
      *(void **)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = source;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817551e8;
      local_res18 = source;
      (*pIVar3)(pIVar2,pMVar1,local_res8,&local_res18,
                *(void **)((longlong)alStack_98 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6));
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817551f6;
      memcpy(destination,source,size);
      SVar4.fields.value = (System_RuntimeTypeHandle_Fields)local_res10->klass->rgctx_data->_9_T;
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755221;
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175522b;
      pSVar16 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755240;
      pSVar17 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)(g_data_184354e08 + 0x20),(MethodInfo *)0x0);
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175524e;
      bVar12 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                         ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar16,
                          (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar17,
                          (MethodInfo_841F20 *)0x0);
      if (!bVar12) goto code_r0x000181755256;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755338;
      memcpy(source,destination,size);
      pIVar14 = local_res10->klass->rgctx_data->_10_T;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755356;
      obj = il2cpp_value_box(pIVar14,source);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175536e;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      if (obj == (Il2CppObject *)0x0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755419;
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755414;
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755397;
      piVar20 = il2cpp_object_unbox(obj);
      n = *piVar20;
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817553a0;
      pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit_1dc41d0(n,(MethodInfo *)0x0);
      if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175540f;
        ThrowNullReferenceException();
      }
      goto label_1817553a5;
    }
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817553fb;
  ThrowNullReferenceException();
code_r0x000181755256:
  SVar4.fields.value = (System_RuntimeTypeHandle_Fields)local_res10->klass->rgctx_data->_9_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755281;
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175528b;
  pSVar16 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817552a0;
  pSVar17 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(g_data_184354e50->_1).byval_arg,(MethodInfo *)0x0);
  *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817552ae;
  bVar12 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                     ((Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar16,
                      (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar17,
                      (MethodInfo_841F20 *)0x0);
  if (bVar12) {
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817552c4;
    memcpy(source,destination,size);
    pIVar14 = local_res10->klass->rgctx_data->_10_T;
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817552e2;
    pSVar18 = (System_String_o *)il2cpp_value_box(pIVar14,source);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817552fa;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    s = (System_String_o *)0x0;
    if (pSVar18 != (System_String_o *)0x0) {
      if ((Il2CppClass *)pSVar18->klass == g_data_184354e50) {
        s = pSVar18;
      }
      if (s == (System_String_o *)0x0) {
        *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175540a;
        il2cpp_codegen_raise_invalid_cast_exception(pSVar18);
      }
    }
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x18175531f;
    pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
      *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x181755401;
      ThrowNullReferenceException();
    }
label_1817553a5:
    pMVar1 = (__this_00->klass->vtable)._21_Add.method;
    p_Var5 = (__this_00->klass->vtable)._21_Add.methodPtr;
    *(undefined8 *)((longlong)auStack_c0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1817553bc;
    (*p_Var5)(__this_00,pSVar19,pMVar1);
  }
  goto label_181755180;
}


// Settings.HashSetSetting<int>$$Contains
// il2cpp: bool Settings_HashSetSetting_int___Contains (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_17545E0* method);
// 0x1817545e0

bool Settings_HashSetSetting_int___Contains
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_17545E0 *method)

{
  System_Collections_Generic_HashSet_T__o *__this_00;
  bool bVar1;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (__this->fields)._value, __this_00 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      (__this_00,item,
                       (MethodInfo_1759C90 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Contains
// il2cpp: bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_17544C0* method);
// 0x1817544c0

bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *item,MethodInfo_17544C0 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  undefined1 local_res8 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  void *local_res20;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_10_T->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x18175450e;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  destination = (undefined8 *)(&stack0xffffffffffffffd8 + lVar5);
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)item;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pSVar1 = method->klass->rgctx_data;
    *(void ***)((longlong)alStack_38 + lVar5) = &local_res10.monitor;
    pMVar2 = pSVar1->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar3 = pMVar2->methodPointer;
    pIVar4 = pMVar2->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754544;
    (*pIVar4)(pIVar3,pMVar2,__this,(void **)0x0,*(void **)((longlong)alStack_38 + lVar5));
    source = &local_res10;
    if ((int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits < 0) {
      source = item;
    }
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x18175456a;
    memcpy(destination,source,size);
    if (local_res10.monitor != (void *)0x0) {
      if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
        destination = (undefined8 *)*destination;
      }
      pSVar1 = method->klass->rgctx_data;
      *(undefined1 **)((longlong)alStack_38 + lVar5) = local_res8;
      pMVar2 = pSVar1->_20_System_Collections_Generic_HashSet_T__Remove;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1817545be;
      local_res20 = destination;
      (*pIVar4)(pIVar3,pMVar2,local_res10.monitor,&local_res20,*(void **)((longlong)alStack_38 + lVar5));
      return (bool)local_res8[0];
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1817545d1;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Add
// il2cpp: void Settings_HashSetSetting_int___Add (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_1754280* method);
// 0x181754280

void Settings_HashSetSetting_int___Add
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_1754280 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet_int___AddIfNotPresent
              (__this_00,item,
               (MethodInfo_1755D60 *)
               method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->klass->rgctx_data
               [0x15].method);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Add
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_17542D0* method);
// 0x1817542d0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *item,MethodInfo_17542D0 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  undefined1 local_res8 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  void *local_res20;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_10_T->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x18175431e;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  destination = (undefined8 *)(&stack0xffffffffffffffd8 + lVar5);
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)item;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pSVar1 = method->klass->rgctx_data;
    *(void ***)((longlong)alStack_38 + lVar5) = &local_res10.monitor;
    pMVar2 = pSVar1->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar3 = pMVar2->methodPointer;
    pIVar4 = pMVar2->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754354;
    (*pIVar4)(pIVar3,pMVar2,__this,(void **)0x0,*(void **)((longlong)alStack_38 + lVar5));
    source = &local_res10;
    if ((int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits < 0) {
      source = item;
    }
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x18175437a;
    memcpy(destination,source,size);
    if (local_res10.monitor != (void *)0x0) {
      if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
        destination = (undefined8 *)*destination;
      }
      pSVar1 = method->klass->rgctx_data;
      *(undefined1 **)((longlong)alStack_38 + lVar5) = local_res8;
      pMVar2 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1817543cb;
      local_res20 = destination;
      (*pIVar4)(pIVar3,pMVar2,local_res10.monitor,&local_res20,*(void **)((longlong)alStack_38 + lVar5));
      return;
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x1817543da;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Remove
// il2cpp: void Settings_HashSetSetting_int___Remove (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_1754EF0* method);
// 0x181754ef0

void Settings_HashSetSetting_int___Remove
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_1754EF0 *method)

{
  System_Collections_Generic_HashSet_T__o *__this_00;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (__this->fields)._value, __this_00 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    System_Collections_Generic_HashSet_Int32Enum___Remove
              (__this_00,item,
               (MethodInfo_17666A0 *)
               method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Remove
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_1754DE0* method);
// 0x181754de0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *item,MethodInfo_1754DE0 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  undefined8 *destination;
  undefined1 local_res8 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  void *local_res20;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_10_T->_2).stack_slot_size;
  uVar6 = size + 0xf;
  if (uVar6 <= size) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x181754e2e;
  lVar5 = -(uVar6 & 0xfffffffffffffff0);
  destination = (undefined8 *)(&stack0xffffffffffffffd8 + lVar5);
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)item;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pSVar1 = method->klass->rgctx_data;
    *(void ***)((longlong)alStack_38 + lVar5) = &local_res10.monitor;
    pMVar2 = pSVar1->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar3 = pMVar2->methodPointer;
    pIVar4 = pMVar2->invoker_method;
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754e64;
    (*pIVar4)(pIVar3,pMVar2,__this,(void **)0x0,*(void **)((longlong)alStack_38 + lVar5));
    source = &local_res10;
    if ((int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits < 0) {
      source = item;
    }
    *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754e8a;
    memcpy(destination,source,size);
    if (local_res10.monitor != (void *)0x0) {
      if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
        destination = (undefined8 *)*destination;
      }
      pSVar1 = method->klass->rgctx_data;
      *(undefined1 **)((longlong)alStack_38 + lVar5) = local_res8;
      pMVar2 = pSVar1->_21_System_Collections_Generic_HashSet_T__Clear;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754ede;
      local_res20 = destination;
      (*pIVar4)(pIVar3,pMVar2,local_res10.monitor,&local_res20,*(void **)((longlong)alStack_38 + lVar5));
      return;
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x181754eed;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Toggle
// il2cpp: void Settings_HashSetSetting_int___Toggle (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_17558F0* method);
// 0x1817558f0

void Settings_HashSetSetting_int___Toggle
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_17558F0 *method)

{
  System_Collections_Generic_HashSet_T__o *__this_00;
  System_Collections_Generic_HashSet_int__o *__this_01;
  bool bVar1;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (__this->fields)._value, __this_00 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_Int32Enum___Contains
                      (__this_00,item,
                       (MethodInfo_1759C90 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    __this_01 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value;
    if (__this_01 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      if (!bVar1) {
        System_Collections_Generic_HashSet_int___AddIfNotPresent
                  (__this_01,item,
                   (MethodInfo_1755D60 *)
                   method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->klass->rgctx_data
                   [0x15].method);
        return;
      }
      System_Collections_Generic_HashSet_Int32Enum___Remove
                ((System_Collections_Generic_HashSet_T__o *)__this_01,item,
                 (MethodInfo_17666A0 *)
                 method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Toggle
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_17559A0* method);
// 0x1817559a0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *item,MethodInfo_17559A0 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar8;
  ulonglong size;
  undefined8 *destination;
  MethodInfo *pMVar9;
  char local_res8 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  undefined8 *local_res20;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_10_T->_2).stack_slot_size;
  uVar7 = size + 0xf;
  if (uVar7 <= size) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1817559f2;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  destination = (undefined8 *)(&stack0xffffffffffffffc8 + lVar5);
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)item;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pSVar1 = method->klass->rgctx_data;
    *(void ***)((longlong)alStack_48 + lVar5) = &local_res10.monitor;
    pMVar9 = pSVar1->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar2 = pMVar9->methodPointer;
    pIVar3 = pMVar9->invoker_method;
    *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755a2b;
    (*pIVar3)(pIVar2,pMVar9,__this,(void **)0x0,*(void **)((longlong)alStack_48 + lVar5));
    pvVar6 = local_res10.monitor;
    pUVar8 = &local_res10;
    if ((int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits < 0) {
      pUVar8 = item;
    }
    *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755a55;
    memcpy(destination,pUVar8,size);
    if (pvVar6 != (void *)0x0) {
      local_res20 = destination;
      if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
        local_res20 = (undefined8 *)*destination;
      }
      pSVar1 = method->klass->rgctx_data;
      *(char **)((longlong)alStack_48 + lVar5) = local_res8;
      pMVar9 = pSVar1->_20_System_Collections_Generic_HashSet_T__Remove;
      pIVar2 = pMVar9->methodPointer;
      pIVar3 = pMVar9->invoker_method;
      *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755aad;
      (*pIVar3)(pIVar2,pMVar9,pvVar6,&local_res20,*(void **)((longlong)alStack_48 + lVar5));
      pSVar1 = method->klass->rgctx_data;
      pMVar9 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
      *(void ***)((longlong)alStack_48 + lVar5) = &local_res10.monitor;
      pIVar2 = pSVar1->_12_Settings_TypedSetting_HashSet_T___get_Value->methodPointer;
      pIVar3 = pMVar9->invoker_method;
      *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755ae3;
      (*pIVar3)(pIVar2,pMVar9,__this,(void **)0x0,*(void **)((longlong)alStack_48 + lVar5));
      pIVar4 = method->klass->rgctx_data->_10_T;
      if (local_res8[0] == '\0') {
        pUVar8 = &local_res10;
        if ((int)(pIVar4->_1).byval_arg.bits < 0) {
          pUVar8 = item;
        }
        *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755b13;
        memcpy(destination,pUVar8,size);
        if (local_res10.monitor == (void *)0x0) goto label_181755bb5;
        if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
          destination = (undefined8 *)*destination;
        }
        pMVar9 = method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add;
      }
      else {
        pUVar8 = &local_res10;
        if ((int)(pIVar4->_1).byval_arg.bits < 0) {
          pUVar8 = item;
        }
        *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755b80;
        memcpy(destination,pUVar8,size);
        if (local_res10.monitor == (void *)0x0) goto label_181755bb5;
        if (-1 < (int)(method->klass->rgctx_data->_10_T->_1).byval_arg.bits) {
          destination = (undefined8 *)*destination;
        }
        pMVar9 = method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear;
      }
      pIVar2 = pMVar9->methodPointer;
      *(char **)((longlong)alStack_48 + lVar5) = local_res8;
      pIVar3 = pMVar9->invoker_method;
      *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755b65;
      local_res20 = destination;
      (*pIVar3)(pIVar2,pMVar9,local_res10.monitor,&local_res20,*(void **)((longlong)alStack_48 + lVar5));
      return;
    }
  }
label_181755bb5:
  *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x181755bba;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Clear
// il2cpp: void Settings_HashSetSetting_int___Clear (Settings_HashSetSetting_int__o* __this, const MethodInfo_1754450* method);
// 0x181754450

void Settings_HashSetSetting_int___Clear(Settings_HashSetSetting_int__o *__this,MethodInfo_1754450 *method)

{
  int32_t *piVar1;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  System_Int32_array *pSVar3;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar2 = (__this->fields)._value, pSVar2 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    if (0 < (pSVar2->fields)._lastIndex) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._slots,0,(pSVar2->fields)._lastIndex,
                          (MethodInfo *)0x0);
      pSVar3 = (pSVar2->fields)._buckets;
      if (pSVar3 == (System_Int32_array *)0x0) goto label_1817544ad;
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._buckets,0,(int32_t)pSVar3->max_length,
                          (MethodInfo *)0x0);
      (pSVar2->fields)._freeList = -1;
      (pSVar2->fields)._count = 0;
      (pSVar2->fields)._lastIndex = 0;
    }
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
label_1817544ad:
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Clear
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear (Settings_HashSetSetting_T__o* __this, const MethodInfo_17543E0* method);
// 0x1817543e0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear
               (Settings_HashSetSetting_T__o *__this,MethodInfo_17543E0 *method)

{
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  longlong local_res8 [4];
  
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,(void **)0x0,local_res8);
    if (local_res8[0] != 0) {
      pIVar2 = method->klass->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_;
      (*(pIVar2->_1).image)(local_res8[0],pIVar2);
      return;
    }
  }
  ThrowNullReferenceException();
}


