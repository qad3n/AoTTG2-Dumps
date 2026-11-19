// Type: Settings.HashSetSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/HashSetSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_4F63FE0* method);
// 0x5063fe0

void Settings_HashSetSetting_int____ctor
               (Settings_HashSetSetting_int__o *__this,System_Collections_Generic_HashSet_T__o *defaultValue,
               MethodInfo_4F63FE0 *method)

{
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_42DA2C0 *)method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_4F64940* method);
// 0x5064940

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor
               (Settings_HashSetSetting_T__o *__this,System_Collections_Generic_HashSet_T__o *defaultValue,
               MethodInfo_4F64940 *method)

{
  MethodInfo *pMVar1;
  System_Collections_Generic_HashSet_T__o *pSStack_8;
  
  pMVar1 = method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor;
  pSStack_8 = defaultValue;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,&pSStack_8,defaultValue);
  return;
}


// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, const MethodInfo_4F64000* method);
// 0x5064000

void Settings_HashSetSetting_int____ctor_4f64000
               (Settings_HashSetSetting_int__o *__this,MethodInfo_4F64000 *method)

{
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_int__o *__this_00;
  undefined8 extraout_RDX;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_42DA2B0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,
             (MethodInfo_4FA7520 *)method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor);
  (__this->fields).DefaultValue = (System_Collections_Generic_HashSet_T__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, const MethodInfo_4F64970* method);
// 0x5064970

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor_4f64970
               (Settings_HashSetSetting_T__o *__this,MethodInfo_4F64970 *method)

{
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_T__o *pSVar1;
  undefined8 extraout_RDX;
  
  (*method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor->methodPointer)();
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pSVar1 = (System_Collections_Generic_HashSet_T__o *)il2cpp_codegen_object_new(klass);
  (*method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor->methodPointer)(pSVar1);
  (__this->fields).DefaultValue = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.HashSetSetting<int>$$SetDefault
// il2cpp: void Settings_HashSetSetting_int___SetDefault (Settings_HashSetSetting_int__o* __this, const MethodInfo_4F64090* method);
// 0x5064090

void Settings_HashSetSetting_int___SetDefault
               (Settings_HashSetSetting_int__o *__this,MethodInfo_4F64090 *method)

{
  System_Collections_Generic_HashSet_T__o *collection;
  Il2CppClass *klass;
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  collection = (__this->fields).DefaultValue;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_HashSet_int____ctor_4fa7660
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_4FA7660 *)method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_42DA280 *)method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault (Settings_HashSetSetting_T__o* __this, const MethodInfo_4F64A00* method);
// 0x5064a00

void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_HashSetSetting_T__o *__this,MethodInfo_4F64A00 *method)

{
  System_Collections_Generic_HashSet_T__o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppClass *klass;
  Il2CppObject *pIVar3;
  Il2CppObject *pIStack_28;
  
  pSVar1 = (__this->fields).DefaultValue;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  pIVar3 = il2cpp_codegen_object_new(klass);
  (*method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor->methodPointer)(pIVar3,pSVar1);
  pMVar2 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
  pIStack_28 = pIVar3;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,__this,&pIStack_28,pIVar3);
  return;
}


// Settings.HashSetSetting<int>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting_int___DeserializeFromJsonObject (Settings_HashSetSetting_int__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_4F64110* method);
// 0x5064110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5064311: jmp 0x5064436

void Settings_HashSetSetting_int___DeserializeFromJsonObject
               (Settings_HashSetSetting_int__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_4F64110 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_HashSet_int__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Type_o *pSVar6;
  System_Type_o *pSVar7;
  System_String_o *obj;
  int32_t *piVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_o SStack_c0;
  SimpleJSONFixed_JSONNode_Enumerator_o SStack_78;
  
  if (Il2CppMethodInitialized_075420ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075420ee = '\x01';
  }
  pIVar3 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar3->_2).bitflags1 & 1) == 0) {
    pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_codegen_object_new(pIVar3);
  System_Collections_Generic_HashSet_int____ctor
            (__this_00,
             (MethodInfo_4FA7520 *)method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor);
  if ((json != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar4 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                         (json,(json->klass->vtable)._45_get_AsArray.method),
     pSVar4 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
    (*(pSVar4->klass->vtable)._32_GetEnumerator.methodPtr)
              (&SStack_c0,pSVar4,(pSVar4->klass->vtable)._32_GetEnumerator.method);
    SStack_78.fields.m_Array.fields._current = SStack_c0.fields.m_Array.fields._current;
    SStack_78.fields.m_Array.fields._list = SStack_c0.fields.m_Array.fields._list;
    SStack_78.fields.m_Array.fields._index = SStack_c0.fields.m_Array.fields._index;
    SStack_78.fields.m_Array.fields._version = SStack_c0.fields.m_Array.fields._version;
    SStack_78.fields.m_Object.fields._current.fields.value =
         SStack_c0.fields.m_Object.fields._current.fields.value;
    SStack_78.fields.m_Object.fields._getEnumeratorRetType =
         SStack_c0.fields.m_Object.fields._getEnumeratorRetType;
    SStack_78.fields.m_Object.fields._36_4_ = SStack_c0.fields.m_Object.fields._36_4_;
    SStack_78.fields.m_Object.fields._version = SStack_c0.fields.m_Object.fields._version;
    SStack_78.fields.m_Object.fields._index = SStack_c0.fields.m_Object.fields._index;
    SStack_78.fields.m_Object.fields._current.fields.key =
         SStack_c0.fields.m_Object.fields._current.fields.key;
    SStack_78.fields.m_Object.fields._dictionary = SStack_c0.fields.m_Object.fields._dictionary;
    bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(&SStack_78,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current(&SStack_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
        pSVar7 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)&(g_data_07556710->_1).byval_arg,(MethodInfo *)0x0);
        bVar2 = System_Type__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
        if (bVar2) {
          if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05064436;
          SStack_c0.fields.type =
               (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                         (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
          obj = (System_String_o *)il2cpp_vm_Object_Box(g_data_07556710,&SStack_c0);
          if (__this_00 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_05064436;
label_050643a5:
          pIVar3 = method->klass->rgctx_data->_10_T;
          if (((pIVar3->_2).bitflags1 & 1) == 0) {
            pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
          }
          if (obj == (System_String_o *)0x0) goto label_05064436;
          if ((obj->klass->_1).element_class != (pIVar3->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar3);
          }
          piVar8 = il2cpp_vm_Object_Unbox((Il2CppObject *)obj);
          System_Collections_Generic_HashSet_int___Add
                    (__this_00,*piVar8,
                     (MethodInfo_4FA8AF0 *)
                     method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add);
        }
        else {
          SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
          pSVar7 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)(g_data_07556758 + 0x20),(MethodInfo *)0x0);
          bVar2 = System_Type__op_Equality(pSVar6,pSVar7,(MethodInfo *)0x0);
          if (bVar2) {
            if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
               (obj = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method),
               __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) goto label_050643a5;
            goto label_05064436;
          }
        }
        bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(&SStack_78,(MethodInfo *)0x0);
      } while (bVar2);
    }
    if (__this != (Settings_HashSetSetting_int__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                 (MethodInfo_42DA280 *)
                 method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
      return;
    }
  }
label_05064436:
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject (Settings_HashSetSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_4F64A80* method);
// 0x5064a80

void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject
               (Settings_HashSetSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_4F64A80 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  _func_65 *p_Var2;
  _func_68 *p_Var3;
  InvokerMethod pIVar4;
  System_RuntimeTypeHandle_o SVar5;
  _func_4 *p_Var6;
  _func_7 *p_Var7;
  long lVar8;
  Settings_HashSetSetting_T__o *pSVar9;
  undefined1 *puVar10;
  bool bVar11;
  Il2CppClass *pIVar12;
  SimpleJSONFixed_JSONArray_o *pSVar13;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_Type_o *pSVar15;
  System_Type_o *pSVar16;
  Il2CppObject *pIVar17;
  System_String_o *pSVar18;
  undefined1 *puVar19;
  MethodInfo *pMVar20;
  Il2CppMethodPointer pIVar21;
  int32_t *piVar22;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 uStack_b0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_a8;
  Settings_HashSetSetting_T__o *local_60;
  undefined1 *local_58;
  int32_t local_4c;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  undefined1 local_31;
  
  if (g_data_075420f0 == '\0') {
    uStack_b0 = 0x5064aaf;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    g_data_075420f0 = '\x01';
  }
  pSVar1 = method->klass->rgctx_data;
  lVar8 = -((ulong)(pSVar1->_10_T->_2).stack_slot_size + 0xf & 0xfffffffffffffff0);
  puVar19 = (undefined1 *)((long)&local_a8 + lVar8);
  local_a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.m_Array.fields._index = 0;
  local_a8.m_Array.fields._version = 0;
  local_a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._getEnumeratorRetType = 0;
  local_a8.m_Object.fields._36_4_ = 0;
  local_a8.m_Object.fields._version = 0;
  local_a8.m_Object.fields._index = 0;
  local_a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.type = 0;
  local_a8._4_4_ = 0;
  local_a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  pIVar12 = pSVar1->_0_System_Collections_Generic_HashSet_T_;
  local_58 = puVar19;
  if (((pIVar12->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)&uStack_b0 + lVar8) = 0x5064b12;
    pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
    puVar19 = (undefined1 *)((long)&local_a8 + lVar8);
  }
  *(undefined8 *)(puVar19 + -8) = 0x5064b1a;
  local_40 = il2cpp_codegen_object_new(pIVar12);
  pIVar21 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor->methodPointer;
  *(undefined8 *)(puVar19 + -8) = 0x5064b32;
  (*pIVar21)();
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar20 = (json->klass->vtable)._45_get_AsArray.method;
    p_Var2 = (json->klass->vtable)._45_get_AsArray.methodPtr;
    local_60 = __this;
    *(undefined8 *)(puVar19 + -8) = 0x5064b52;
    pSVar13 = (*p_Var2)(json,pMVar20);
    if (pSVar13 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pMVar20 = (pSVar13->klass->vtable)._32_GetEnumerator.method;
      p_Var3 = (pSVar13->klass->vtable)._32_GetEnumerator.methodPtr;
      *(undefined8 *)(puVar19 + -8) = 0x5064b78;
      (*p_Var3)((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_a8,pSVar13,pMVar20);
      *(undefined8 *)(puVar19 + -8) = 0x5064b82;
      bVar11 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                         ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_a8,(MethodInfo *)0x0);
      if (bVar11) {
        do {
          *(undefined8 *)(puVar19 + -8) = 0x5064bdc;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_a8,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)(puVar19 + -8) = 0x5064bfa;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          *(undefined8 *)(puVar19 + -8) = 0x5064c07;
          pSVar14 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
          SVar5.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)(puVar19 + -8) = 0x5064c2e;
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          *(undefined8 *)(puVar19 + -8) = 0x5064c38;
          pSVar15 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
          *(undefined8 *)(puVar19 + -8) = 0x5064c4a;
          pSVar16 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)&(g_data_07556710->_1).byval_arg,(MethodInfo *)0x0);
          *(undefined8 *)(puVar19 + -8) = 0x5064c57;
          bVar11 = System_Type__op_Equality(pSVar15,pSVar16,(MethodInfo *)0x0);
          if (bVar11) {
            if (pSVar14 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05064e0a;
            pMVar20 = (pSVar14->klass->vtable)._35_get_AsInt.method;
            p_Var6 = (pSVar14->klass->vtable)._35_get_AsInt.methodPtr;
            *(undefined8 *)(puVar19 + -8) = 0x5064c7b;
            local_4c = (*p_Var6)(pSVar14,pMVar20);
            *(undefined8 *)(puVar19 + -8) = 0x5064c8b;
            pIVar17 = il2cpp_vm_Object_Box(g_data_07556710,&local_4c);
            pIVar12 = method->klass->rgctx_data->_10_T;
            if (((pIVar12->_2).bitflags1 & 1) == 0) {
              *(undefined8 *)(puVar19 + -8) = 0x5064cae;
              pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
            }
            puVar10 = local_58;
            *(undefined8 *)(puVar19 + -8) = 0x5064cbd;
            pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_030d6290(pIVar17,pIVar12,puVar10);
            if (local_40 == (Il2CppObject *)0x0) goto label_05064e0a;
            pSVar1 = method->klass->rgctx_data;
            if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
              pIVar12 = ((Il2CppObject *)pIVar12)->klass;
            }
            pMVar20 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
            pIVar21 = pMVar20->methodPointer;
            piVar22 = (int32_t *)&local_31;
            local_48 = (Il2CppObject *)pIVar12;
label_05064bb7:
            pIVar17 = local_40;
            pIVar4 = pMVar20->invoker_method;
            *(undefined8 *)(puVar19 + -8) = 0x5064bba;
            (*pIVar4)(pIVar21,pMVar20,pIVar17,&local_48,piVar22);
          }
          else {
            SVar5.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
              *(undefined8 *)(puVar19 + -8) = 0x5064d14;
              il2cpp_codegen_runtime_class_init(g_data_075567a8);
            }
            *(undefined8 *)(puVar19 + -8) = 0x5064d1e;
            pSVar15 = System_Type__GetTypeFromHandle(SVar5,(MethodInfo *)0x0);
            *(undefined8 *)(puVar19 + -8) = 0x5064d33;
            pSVar16 = System_Type__GetTypeFromHandle
                                ((System_RuntimeTypeHandle_o)(g_data_07556758 + 0x20),(MethodInfo *)0x0);
            *(undefined8 *)(puVar19 + -8) = 0x5064d40;
            bVar11 = System_Type__op_Equality(pSVar15,pSVar16,(MethodInfo *)0x0);
            if (bVar11) {
              if (pSVar14 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pMVar20 = (pSVar14->klass->vtable)._9_get_Value.method;
                p_Var7 = (pSVar14->klass->vtable)._9_get_Value.methodPtr;
                *(undefined8 *)(puVar19 + -8) = 0x5064d64;
                pSVar18 = (*p_Var7)(pSVar14,pMVar20);
                pIVar12 = method->klass->rgctx_data->_10_T;
                if (((pIVar12->_2).bitflags1 & 1) == 0) {
                  *(undefined8 *)(puVar19 + -8) = 0x5064d87;
                  pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
                }
                puVar10 = local_58;
                *(undefined8 *)(puVar19 + -8) = 0x5064d96;
                pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_030d6290(pSVar18,pIVar12,puVar10);
                if (local_40 != (Il2CppObject *)0x0) {
                  pSVar1 = method->klass->rgctx_data;
                  if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
                    pIVar12 = ((Il2CppObject *)pIVar12)->klass;
                  }
                  pMVar20 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
                  pIVar21 = pMVar20->methodPointer;
                  piVar22 = &local_4c;
                  local_48 = (Il2CppObject *)pIVar12;
                  goto label_05064bb7;
                }
              }
              goto label_05064e0a;
            }
          }
          *(undefined8 *)(puVar19 + -8) = 0x5064bc7;
          bVar11 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_a8,(MethodInfo *)0x0);
        } while (bVar11);
      }
      pIVar17 = local_40;
      pSVar9 = local_60;
      if (local_60 != (Settings_HashSetSetting_T__o *)0x0) {
        pMVar20 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
        pIVar21 = pMVar20->methodPointer;
        local_48 = local_40;
        pIVar4 = pMVar20->invoker_method;
        *(undefined8 *)(puVar19 + -8) = 0x5064dfb;
        (*pIVar4)(pIVar21,pMVar20,pSVar9,&local_48,pIVar17);
        return;
      }
    }
  }
label_05064e0a:
  *(undefined8 *)(puVar19 + -8) = 0x5064e0f;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting_int___SerializeToJsonObject (Settings_HashSetSetting_int__o* __this, const MethodInfo_4F64450* method);
// 0x5064450
// eh: try 0x5064547..0x5064779 -> pad 0x506479e (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x50647ba..0x50647bf -> pad 0x50647c4 cleanup
// eh: try 0x50647c7..0x50647d1 -> pad 0x50647d9 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x506477e: mov rdi, rbx
// asm:   0x5064781: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5064786: jmp 0x50647a2
// asm:   0x5064788: jmp 0x50647a2
// asm:   0x506478a: jmp 0x50647a2
// asm:   0x506478c: jmp 0x50647a2
// asm:   0x506478e: jmp 0x50647a2
// asm:   0x5064790: jmp 0x50647a2
// asm:   0x5064792: jmp 0x50647a2
// asm:   0x5064794: jmp 0x50647a2
// asm:   0x5064796: jmp 0x50647a2
// asm:   0x5064798: jmp 0x50647a2
// asm:   0x506479a: jmp 0x50647a2
// asm:   0x506479c: jmp 0x50647a2
// asm:   0x506479e: jmp 0x50647a2
// asm:   0x50647a0: jmp 0x50647a2
// asm:   0x50647a2: mov r14, rax
// asm:   0x50647a5: cmp edx, 1
// asm:   0x50647a8: jne 0x50647c7
// asm:   0x50647aa: mov rdi, r14
// asm:   0x50647ad: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x50647b2: mov rbx, qword ptr [rax]
// asm:   0x50647b5: mov qword ptr [rsp + 0x18], rbx
// asm:   0x50647ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x50647bf: jmp 0x5064727
// asm:   0x50647c4: mov r14, rax
// asm:   0x50647c7: lea rdi, [rsp + 0x18]
// asm:   0x50647cc: call 0x2ce4990  ; il2cpp_runtime_helper_02ce4990()
// asm:   0x50647d1: mov rdi, r14
// asm:   0x50647d4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x50647d9: mov rdi, rax
// asm:   0x50647dc: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting_int___SerializeToJsonObject
          (Settings_HashSetSetting_int__o *__this,MethodInfo_4F64450 *method)

{
  void *data;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_RuntimeTypeHandle_o SVar1;
  undefined4 uVar2;
  bool bVar3;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_Type_o *pSVar4;
  System_Type_o *pSVar5;
  Il2CppObject *obj;
  int32_t *piVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *s;
  Il2CppObject IStack_70;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  
  IStack_70.klass = (Il2CppClass *)method;
  if (Il2CppMethodInitialized_075420ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075420ef = '\x01';
  }
  SStack_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_60,__this_00,
             (MethodInfo_4FA8440 *)
             method->klass->rgctx_data->_13_System_Collections_Generic_HashSet_T__GetEnumerator);
  SStack_48.fields._current = pIStack_50;
  SStack_48.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_60._0_8_;
  SStack_48.fields._index = auStack_60._8_4_;
  SStack_48.fields._version = auStack_60._12_4_;
  auStack_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIStack_50 = &IStack_70;
  data = (void *)((long)&IStack_70.monitor + 4);
  auStack_60._8_8_ = &SStack_48;
  while( true ) {
    while( true ) {
      bVar3 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                        (&SStack_48,
                         (MethodInfo_4C3AEE0 *)
                         (((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->
                         _17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext);
      if (!bVar3) {
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (&SStack_48,
                   (MethodInfo_4C3AED0 *)
                   (((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->
                   _19_System_Collections_Generic_HashSet_T__Contains);
        return (SimpleJSONFixed_JSONNode_o *)__this_01;
      }
      uVar2 = SStack_48.fields._current._0_4_;
      SVar1.fields.value =
           (System_RuntimeTypeHandle_Fields)(((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->_9_T;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      pSVar5 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)(g_data_07556710 + 0x20),(MethodInfo *)0x0);
      bVar3 = System_Type__op_Equality(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (bVar3) break;
      SVar1.fields.value =
           (System_RuntimeTypeHandle_Fields)(((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->_9_T;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      pSVar4 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      pSVar5 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)&(g_data_07556758->_1).byval_arg,(MethodInfo *)0x0);
      bVar3 = System_Type__op_Equality(pSVar4,pSVar5,(MethodInfo *)0x0);
      if (bVar3) {
        IStack_70.monitor._4_4_ = uVar2;
        s = (System_String_o *)
            il2cpp_vm_Object_Box((((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->_10_T,data);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        if ((s != (System_String_o *)0x0) && (s->klass != g_data_07556758)) {
          il2cpp_codegen_raise_invalid_cast_exception(s);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(__this_01->klass->vtable)._21_Add.methodPtr)
                  (__this_01,pSVar7,(__this_01->klass->vtable)._21_Add.method);
      }
    }
    IStack_70.monitor._4_4_ = uVar2;
    obj = il2cpp_vm_Object_Box((((IStack_70.klass)->_1).byval_arg.data)->rgctx_data->_10_T,data);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    if (obj == (Il2CppObject *)0x0) break;
    if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj);
    }
    piVar6 = il2cpp_vm_Object_Unbox(obj);
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(*piVar6,(MethodInfo *)0x0);
    if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
    (*(__this_01->klass->vtable)._21_Add.methodPtr)
              (__this_01,pSVar7,(__this_01->klass->vtable)._21_Add.method);
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject (Settings_HashSetSetting_T__o* __this, const MethodInfo_4F64E10* method);
// 0x5064e10
// eh: try 0x5064fda..0x5065289 -> pad 0x50652b0 (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x50652cf..0x50652d4 -> pad 0x50652d9 cleanup
// eh: try 0x50652dc..0x50652e5 -> pad 0x50652ed catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x506528e: mov rdi, rbx
// asm:   0x5065291: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5065296: jmp 0x50652b4
// asm:   0x5065298: jmp 0x50652b4
// asm:   0x506529a: jmp 0x50652b4
// asm:   0x506529c: jmp 0x50652b4
// asm:   0x506529e: jmp 0x50652b4
// asm:   0x50652a0: jmp 0x50652b4
// asm:   0x50652a2: jmp 0x50652b4
// asm:   0x50652a4: jmp 0x50652b4
// asm:   0x50652a6: jmp 0x50652b4
// asm:   0x50652a8: jmp 0x50652b4
// asm:   0x50652aa: jmp 0x50652b4
// asm:   0x50652ac: jmp 0x50652b4
// asm:   0x50652ae: jmp 0x50652b4
// asm:   0x50652b0: jmp 0x50652b4
// asm:   0x50652b2: jmp 0x50652b4
// asm:   0x50652b4: mov r14, rax
// asm:   0x50652b7: mov r15, qword ptr [rbp - 0x30]
// asm:   0x50652bb: cmp edx, 1
// asm:   0x50652be: jne 0x50652dc
// asm:   0x50652c0: mov rdi, r14
// asm:   0x50652c3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x50652c8: mov rbx, qword ptr [rax]
// asm:   0x50652cb: mov qword ptr [rbp - 0x70], rbx
// asm:   0x50652cf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x50652d4: jmp 0x506520b
// asm:   0x50652d9: mov r14, rax
// asm:   0x50652dc: lea rdi, [rbp - 0x70]
// asm:   0x50652e0: call 0x2ce49d0  ; il2cpp_runtime_helper_02ce49d0()
// asm:   0x50652e5: mov rdi, r14
// asm:   0x50652e8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x50652ed: mov rdi, rax
// asm:   0x50652f0: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject
          (Settings_HashSetSetting_T__o *__this,MethodInfo_4F64E10 *method)

{
  int32_t n;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  System_RuntimeTypeHandle_o SVar4;
  _func_53 *p_Var5;
  Settings_HashSetSetting_T__o *pSVar6;
  undefined1 *puVar7;
  ulong __n;
  char cVar8;
  bool bVar9;
  uint uVar10;
  Il2CppClass *pIVar11;
  ulong uVar12;
  SimpleJSONFixed_JSONArray_o *pSVar13;
  System_Type_o *pSVar14;
  System_Type_o *pSVar15;
  Il2CppObject *obj;
  int32_t *piVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  System_String_o *s;
  Settings_HashSetSetting_T__RGCTXs *pSVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 *puStack_90;
  Settings_HashSetSetting_T__o *pSStack_88;
  ulong uStack_80;
  undefined1 *puStack_78;
  MethodInfo_4F64E10 **ppMStack_70;
  undefined1 **ppuStack_68;
  undefined1 **ppuStack_60;
  undefined1 *puStack_58;
  ulong uStack_50;
  undefined1 *puStack_48;
  MethodInfo_4F64E10 *pMStack_40;
  SimpleJSONFixed_JSONArray_o *pSStack_38;
  
  pSStack_88 = __this;
  pMStack_40 = method;
  if (g_data_075420f1 == '\0') {
    uStack_a0 = 0x5064e41;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    uStack_a0 = 0x5064e4d;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    g_data_075420f1 = '\x01';
  }
  pSVar18 = method->klass->rgctx_data;
  pIVar11 = pSVar18->_14_System_Collections_Generic_HashSet_Enumerator_T_;
  uVar10 = (pIVar11->_2).stack_slot_size;
  uVar21 = (ulong)uVar10;
  uStack_50 = (ulong)(pSVar18->_10_T->_2).stack_slot_size;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    uStack_a0 = 0x5064e89;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
    uVar10 = (pIVar11->_2).stack_slot_size;
  }
  __n = uStack_50;
  puStack_58 = auStack_98 + -((ulong)(uVar10 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar19 = uStack_50 + 0xf & 0xfffffffffffffff0;
  puVar23 = puStack_58 + -uVar19;
  uVar12 = uVar21 + 0xf & 0xfffffffffffffff0;
  puVar22 = puVar23 + -uVar12;
  puVar20 = puVar22 + -uVar12;
  uStack_80 = uVar21;
  puStack_48 = puVar20;
  *(undefined8 *)(puVar20 + -8) = 0x5064ee9;
  memset(puVar20,0,uVar21);
  puVar20 = puVar20 + -uVar19;
  *(undefined8 *)(puVar20 + -8) = 0x5064eff;
  memset(puVar20,0,__n);
  *(undefined8 *)(puVar20 + -8) = 0x5064f0e;
  pSVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  *(undefined8 *)(puVar20 + -8) = 0x5064f1b;
  SimpleJSONFixed_JSONArray___ctor(pSVar13,(MethodInfo *)0x0);
  pSVar6 = pSStack_88;
  if (pSStack_88 != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = pMStack_40->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    pSStack_38 = pSVar13;
    *(undefined8 *)(puVar20 + -8) = 0x5064f4b;
    (*pIVar3)(pIVar2,pMVar1,pSVar6,(void **)0x0,&puStack_78);
    puVar7 = puStack_78;
    if (puStack_78 != (undefined1 *)0x0) {
      pMVar1 = pMStack_40->klass->rgctx_data->_13_System_Collections_Generic_HashSet_T__GetEnumerator;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      puStack_78 = puVar22;
      *(undefined8 *)(puVar20 + -8) = 0x5064f7c;
      (*pIVar3)(pIVar2,pMVar1,puVar7,&puStack_78,puVar22);
      puVar7 = puStack_48;
      uVar21 = uStack_80;
      *(undefined8 *)(puVar20 + -8) = 0x5064f8c;
      memcpy(puVar7,puVar22,uVar21);
      puStack_78 = (undefined1 *)0x0;
      ppMStack_70 = &pMStack_40;
      ppuStack_68 = &puStack_58;
      ppuStack_60 = &puStack_48;
      while( true ) {
        while( true ) {
          puVar22 = puStack_48;
          pIVar2 = pMStack_40->klass->rgctx_data->
                   _17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext->methodPointer;
          *(undefined8 *)(puVar20 + -8) = 0x5064fdc;
          cVar8 = (*pIVar2)(puVar22);
          pSVar13 = pSStack_38;
          puVar22 = puStack_48;
          if (cVar8 == '\0') {
            pSVar18 = pMStack_40->klass->rgctx_data;
            pIVar11 = pSVar18->_14_System_Collections_Generic_HashSet_Enumerator_T_;
            if (((pIVar11->_2).bitflags1 & 1) == 0) {
              *(undefined8 *)(puVar20 + -8) = 0x506522c;
              pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
              pSVar18 = pMStack_40->klass->rgctx_data;
            }
            puVar23 = puStack_48;
            puVar22 = puStack_58;
            pMVar1 = pSVar18->_19_System_Collections_Generic_HashSet_T__Contains;
            *(undefined8 *)(puVar20 + -8) = 0x5065258;
            il2cpp_runtime_helper_030d6e00(pIVar11,pMVar1,puVar22,puVar23,0,0);
            return (SimpleJSONFixed_JSONNode_o *)pSVar13;
          }
          pMVar1 = pMStack_40->klass->rgctx_data->
                   _15_System_Collections_Generic_HashSet_Enumerator_T__get_Current;
          pIVar2 = pMVar1->methodPointer;
          pIVar3 = pMVar1->invoker_method;
          puStack_90 = puVar23;
          *(undefined8 *)(puVar20 + -8) = 0x5065012;
          (*pIVar3)(pIVar2,pMVar1,puVar22,&puStack_90,puVar23);
          uVar21 = uStack_50;
          *(undefined8 *)(puVar20 + -8) = 0x5065021;
          memcpy(puVar20,puVar23,uVar21);
          SVar4.fields.value = (System_RuntimeTypeHandle_Fields)pMStack_40->klass->rgctx_data->_9_T;
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)(puVar20 + -8) = 0x5065049;
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          *(undefined8 *)(puVar20 + -8) = 0x5065053;
          pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
          *(undefined8 *)(puVar20 + -8) = 0x5065065;
          pSVar15 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)(g_data_07556710 + 0x20),(MethodInfo *)0x0);
          *(undefined8 *)(puVar20 + -8) = 0x5065072;
          bVar9 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
          uVar21 = uStack_50;
          if (bVar9) break;
          SVar4.fields.value = (System_RuntimeTypeHandle_Fields)pMStack_40->klass->rgctx_data->_9_T;
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            *(undefined8 *)(puVar20 + -8) = 0x5065148;
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          *(undefined8 *)(puVar20 + -8) = 0x5065152;
          pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
          *(undefined8 *)(puVar20 + -8) = 0x5065167;
          pSVar15 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)&(g_data_07556758->_1).byval_arg,(MethodInfo *)0x0);
          *(undefined8 *)(puVar20 + -8) = 0x5065174;
          bVar9 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
          uVar21 = uStack_50;
          if (bVar9) {
            *(undefined8 *)(puVar20 + -8) = 0x506518b;
            memcpy(puVar23,puVar20,uVar21);
            pIVar11 = pMStack_40->klass->rgctx_data->_10_T;
            *(undefined8 *)(puVar20 + -8) = 0x50651a6;
            s = (System_String_o *)il2cpp_vm_Object_Box(pIVar11,puVar23);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              *(undefined8 *)(puVar20 + -8) = 0x50651c1;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            if ((s != (System_String_o *)0x0) && (s->klass != g_data_07556758)) {
              *(undefined8 *)(puVar20 + -8) = 0x5065289;
              il2cpp_codegen_raise_invalid_cast_exception(s);
            }
            *(undefined8 *)(puVar20 + -8) = 0x50651e0;
            pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
            pSVar13 = pSStack_38;
            if (pSStack_38 == (SimpleJSONFixed_JSONArray_o *)0x0) {
              *(undefined8 *)(puVar20 + -8) = 0x5065281;
              ThrowNullReferenceException();
            }
            pMVar1 = (pSStack_38->klass->vtable)._21_Add.method;
            p_Var5 = (pSStack_38->klass->vtable)._21_Add.methodPtr;
            *(undefined8 *)(puVar20 + -8) = 0x5065200;
            (*p_Var5)(pSVar13,pSVar17,pMVar1);
          }
        }
        *(undefined8 *)(puVar20 + -8) = 0x5065089;
        memcpy(puVar23,puVar20,uVar21);
        pIVar11 = pMStack_40->klass->rgctx_data->_10_T;
        *(undefined8 *)(puVar20 + -8) = 0x50650a4;
        obj = il2cpp_vm_Object_Box(pIVar11,puVar23);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          *(undefined8 *)(puVar20 + -8) = 0x50650bf;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        if (obj == (Il2CppObject *)0x0) break;
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          *(undefined8 *)(puVar20 + -8) = 0x506527c;
          il2cpp_codegen_raise_invalid_cast_exception(obj);
        }
        *(undefined8 *)(puVar20 + -8) = 0x50650e6;
        piVar16 = il2cpp_vm_Object_Unbox(obj);
        n = *piVar16;
        *(undefined8 *)(puVar20 + -8) = 0x50650ef;
        pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_5763b60(n,(MethodInfo *)0x0);
        pSVar13 = pSStack_38;
        if (pSStack_38 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
        pMVar1 = (pSStack_38->klass->vtable)._21_Add.method;
        p_Var5 = (pSStack_38->klass->vtable)._21_Add.methodPtr;
        *(undefined8 *)(puVar20 + -8) = 0x5065111;
        (*p_Var5)(pSVar13,pSVar17,pMVar1);
      }
      *(undefined8 *)(puVar20 + -8) = 0x5065274;
      ThrowNullReferenceException();
    }
  }
  *(undefined8 *)(puVar20 + -8) = 0x506528e;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Contains
// il2cpp: bool Settings_HashSetSetting_int___Contains (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_4F647F0* method);
// 0x50647f0

bool Settings_HashSetSetting_int___Contains
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_4F647F0 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool bVar1;
  
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_int___Contains
                    (__this_00,item,
                     (MethodInfo_4FA7E00 *)
                     method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
  return bVar1;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Contains
// il2cpp: bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_4F65300* method);
// 0x5065300

bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_4F65300 *method)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar5;
  undefined8 *__dest;
  undefined8 *puVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48 [2];
  undefined1 local_31;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)local_48 + lVar4);
  puVar6 = __dest;
  local_48[0] = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar6 = *(undefined8 **)(lVar1 + 0x60);
    uVar2 = *puVar6;
    pcVar3 = (code *)puVar6[2];
    *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x506535e;
    (*pcVar3)(uVar2,puVar6,__this,0,local_48 + 1);
    pUVar5 = local_48[1];
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_48;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x5065389;
    memcpy(__dest,__src,__n);
    puVar6 = (undefined8 *)((long)local_48 + lVar4);
    if (local_48[1] != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar6 = *(undefined8 **)(lVar1 + 0x98);
      uVar2 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar3 = (code *)puVar6[2];
      local_48[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
      *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x50653be;
      (*pcVar3)(uVar2,puVar6,pUVar5,local_48 + 1,&local_31);
      return (bool)local_31;
    }
  }
  puVar6[-1] = 0x50653d6;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Add
// il2cpp: void Settings_HashSetSetting_int___Add (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_4F64820* method);
// 0x5064820

void Settings_HashSetSetting_int___Add
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_4F64820 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Add
            (__this_00,item,
             (MethodInfo_4FA8AF0 *)method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Add
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_4F653E0* method);
// 0x50653e0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_4F653E0 *method)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar5;
  undefined8 *__dest;
  undefined8 *puVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48 [2];
  undefined1 local_31;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)local_48 + lVar4);
  puVar6 = __dest;
  local_48[0] = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar6 = *(undefined8 **)(lVar1 + 0x60);
    uVar2 = *puVar6;
    pcVar3 = (code *)puVar6[2];
    *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x506543e;
    (*pcVar3)(uVar2,puVar6,__this,0,local_48 + 1);
    pUVar5 = local_48[1];
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_48;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x5065469;
    memcpy(__dest,__src,__n);
    puVar6 = (undefined8 *)((long)local_48 + lVar4);
    if (local_48[1] != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar6 = *(undefined8 **)(lVar1 + 0x58);
      uVar2 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar3 = (code *)puVar6[2];
      local_48[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
      *(undefined8 *)((long)local_48 + lVar4 + -8) = 0x506549b;
      (*pcVar3)(uVar2,puVar6,pUVar5,local_48 + 1,&local_31);
      return;
    }
  }
  puVar6[-1] = 0x50654af;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Remove
// il2cpp: void Settings_HashSetSetting_int___Remove (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_4F64850* method);
// 0x5064850

void Settings_HashSetSetting_int___Remove
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_4F64850 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Remove
            (__this_00,item,
             (MethodInfo_4FA80C0 *)method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear)
  ;
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Remove
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_4F654B0* method);
// 0x50654b0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_4F654B0 *method)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar5;
  undefined8 *__dest;
  undefined8 *puVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_48 [2];
  undefined1 uStack_31;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_48 + lVar4);
  puVar6 = __dest;
  apUStack_48[0] = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar6 = *(undefined8 **)(lVar1 + 0x60);
    uVar2 = *puVar6;
    pcVar3 = (code *)puVar6[2];
    *(undefined8 *)((long)apUStack_48 + lVar4 + -8) = 0x506550e;
    (*pcVar3)(uVar2,puVar6,__this,0,apUStack_48 + 1);
    pUVar5 = apUStack_48[1];
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)apUStack_48;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)apUStack_48 + lVar4 + -8) = 0x5065539;
    memcpy(__dest,__src,__n);
    puVar6 = (undefined8 *)((long)apUStack_48 + lVar4);
    if (apUStack_48[1] != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar6 = *(undefined8 **)(lVar1 + 0xa0);
      uVar2 = *puVar6;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar3 = (code *)puVar6[2];
      apUStack_48[1] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest;
      *(undefined8 *)((long)apUStack_48 + lVar4 + -8) = 0x506556e;
      (*pcVar3)(uVar2,puVar6,pUVar5,apUStack_48 + 1,&uStack_31);
      return;
    }
  }
  puVar6[-1] = 0x5065582;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Toggle
// il2cpp: void Settings_HashSetSetting_int___Toggle (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_4F64880* method);
// 0x5064880

void Settings_HashSetSetting_int___Toggle
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_4F64880 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  bool bVar2;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar2 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,item,
                       (MethodInfo_4FA7E00 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value;
    if (bVar2) {
      if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        System_Collections_Generic_HashSet_int___Remove
                  (pSVar1,item,
                   (MethodInfo_4FA80C0 *)
                   method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear);
        return;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      System_Collections_Generic_HashSet_int___Add
                (pSVar1,item,
                 (MethodInfo_4FA8AF0 *)
                 method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Toggle
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_4F65590* method);
// 0x5065590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x506575f: jmp 0x50656eb

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_4F65590 *method)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  Settings_HashSetSetting_T__o *pSVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong uVar12;
  undefined8 *__dest;
  undefined8 uStack_80;
  undefined8 *apuStack_78 [2];
  ulong local_68;
  void *local_60;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_58;
  Settings_HashSetSetting_T__o *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  char local_31;
  
  pvVar8 = item.monitor;
  pUVar11 = item.klass;
  lVar2 = *(long *)(*(long *)((long)pvVar8 + 0x20) + 0xc0);
  uVar12 = (ulong)*(uint *)(*(long *)(lVar2 + 0x50) + 0xfc);
  lVar5 = -(uVar12 + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apuStack_78 + lVar5);
  puVar10 = __dest;
  local_48 = pUVar11;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar10 = *(undefined8 **)(lVar2 + 0x60);
    uVar3 = *puVar10;
    pcVar4 = (code *)puVar10[2];
    local_50 = __this;
    *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x50655f3;
    (*pcVar4)(uVar3,puVar10,__this,0,&local_40);
    apuStack_78[1] = local_40;
    lVar2 = *(long *)((long)pvVar8 + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_48;
    if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar11;
    }
    local_68 = uVar12;
    local_60 = pvVar8;
    local_58 = pUVar11;
    *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x506562d;
    memcpy(__dest,__src,uVar12);
    puVar6 = apuStack_78[1];
    puVar10 = (undefined8 *)((long)apuStack_78 + lVar5);
    if (apuStack_78[1] != (undefined8 *)0x0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      puVar10 = *(undefined8 **)(lVar2 + 0x98);
      uVar3 = *puVar10;
      local_40 = __dest;
      if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
        local_40 = (undefined8 *)*__dest;
      }
      pcVar4 = (code *)puVar10[2];
      *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x506566a;
      (*pcVar4)(uVar3,puVar10,puVar6,&local_40,&local_31);
      pSVar7 = local_50;
      pvVar8 = local_60;
      uVar12 = local_68;
      puVar10 = *(undefined8 **)(*(long *)(*(long *)((long)local_60 + 0x20) + 0xc0) + 0x60);
      uVar3 = *puVar10;
      if (local_31 == '\0') {
        pcVar4 = (code *)puVar10[2];
        *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x5065715;
        (*pcVar4)(uVar3,puVar10,pSVar7,0,&local_40);
        puVar6 = local_40;
        lVar2 = *(long *)((long)pvVar8 + 0x20);
        pUVar11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_48;
        if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
          pUVar11 = local_58;
        }
        *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x5065741;
        memcpy(__dest,pUVar11,uVar12);
        puVar10 = (undefined8 *)((long)apuStack_78 + lVar5);
        puVar9 = (undefined1 *)((long)apuStack_78 + lVar5);
        if (puVar6 == (undefined8 *)0x0) goto label_05065761;
        lVar2 = *(long *)(lVar2 + 0xc0);
        puVar10 = *(undefined8 **)(lVar2 + 0x58);
        uVar3 = *puVar10;
        iVar1 = *(int *)(*(long *)(lVar2 + 0x50) + 0x28);
      }
      else {
        pcVar4 = (code *)puVar10[2];
        *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x5065697;
        (*pcVar4)(uVar3,puVar10,pSVar7,0);
        puVar6 = local_40;
        lVar2 = *(long *)((long)pvVar8 + 0x20);
        pUVar11 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_48;
        if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
          pUVar11 = local_58;
        }
        *(undefined8 *)((long)apuStack_78 + lVar5 + -8) = 0x50656c3;
        memcpy(__dest,pUVar11,uVar12);
        puVar10 = (undefined8 *)((long)apuStack_78 + lVar5);
        puVar9 = (undefined1 *)((long)apuStack_78 + lVar5);
        if (puVar6 == (undefined8 *)0x0) goto label_05065761;
        lVar2 = *(long *)(lVar2 + 0xc0);
        puVar10 = *(undefined8 **)(lVar2 + 0xa0);
        uVar3 = *puVar10;
        iVar1 = *(int *)(*(long *)(lVar2 + 0x50) + 0x28);
      }
      if (-1 < iVar1) {
        puVar9 = (undefined1 *)((long)apuStack_78 + lVar5);
        __dest = (undefined8 *)*__dest;
      }
      pcVar4 = (code *)puVar10[2];
      local_40 = __dest;
      *(undefined8 *)(puVar9 + -8) = 0x50656fd;
      (*pcVar4)(uVar3,puVar10,puVar6,&local_40,&local_31);
      return;
    }
  }
label_05065761:
  puVar10[-1] = 0x5065766;
  ThrowNullReferenceException();
}


// Settings.HashSetSetting<int>$$Clear
// il2cpp: void Settings_HashSetSetting_int___Clear (Settings_HashSetSetting_int__o* __this, const MethodInfo_4F64910* method);
// 0x5064910

void Settings_HashSetSetting_int___Clear(Settings_HashSetSetting_int__o *__this,MethodInfo_4F64910 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_HashSet_int__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_int___Clear
            (__this_00,
             (MethodInfo_4FA7DB0 *)method->klass->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Clear
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear (Settings_HashSetSetting_T__o* __this, const MethodInfo_4F65770* method);
// 0x5065770

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear
               (Settings_HashSetSetting_T__o *__this,MethodInfo_4F65770 *method)

{
  MethodInfo *pMVar1;
  long local_10;
  
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,(void **)0x0,&local_10);
    if (local_10 != 0) {
      (*((method->klass->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_)->_1).image)();
      return;
    }
  }
  ThrowNullReferenceException();
}


