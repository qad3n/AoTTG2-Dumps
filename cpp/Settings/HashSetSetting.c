// Type: Settings.HashSetSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HashSetSetting.cs
// Prior real C# source: none
// --------------------------------

// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_33C6A90* method);
// 0x34c6a90

void Settings_HashSetSetting_int____ctor
               (Settings_HashSetSetting_int__o *__this,System_Collections_Generic_HashSet_T__o *defaultValue,
               MethodInfo_33C6A90 *method)

{
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_2A240D0 *)method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_33C7540* method);
// 0x34c7540

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor
               (Settings_HashSetSetting_T__o *__this,System_Collections_Generic_HashSet_T__o *defaultValue,
               MethodInfo_33C7540 *method)

{
  MethodInfo *pMVar1;
  System_Collections_Generic_HashSet_T__o *pSStack_8;
  
  pMVar1 = method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor;
  pSStack_8 = defaultValue;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,&pSStack_8,defaultValue);
  return;
}


// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, const MethodInfo_33C6AB0* method);
// 0x34c6ab0

void Settings_HashSetSetting_int____ctor_33c6ab0
               (Settings_HashSetSetting_int__o *__this,MethodInfo_33C6AB0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *collection;
  Il2CppClass *pIVar2;
  System_Collections_Generic_HashSet_T__o *__this_00;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar3;
  long lVar4;
  System_Collections_Generic_HashSet_int__o *__this_01;
  undefined8 extraout_RDX;
  Settings_TypedSetting_T__o *__this_02;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_2A240C0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor);
  pIVar2 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  pMVar1 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  pSVar3 = (System_Collections_Generic_IEqualityComparer_T__o *)
           il2cpp_runtime_helper_02583d40(pMVar1->klass->rgctx_data->rgctxDataDummy);
  pMVar1 = pMVar1->klass->rgctx_data[3].method;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (pSVar3 == (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
    pSVar3 = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_runtime_helper_02583d40(pMVar1->klass->rgctx_data->rgctxDataDummy);
  }
  (__this_00->fields)._comparer = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._comparer,pSVar3);
  (__this_00->fields)._count = 0;
  (__this_00->fields)._lastIndex = 0;
  (__this_00->fields)._freeList = -1;
  (__this_00->fields)._version = 0;
  __this_02 = (Settings_TypedSetting_T__o *)&__this->fields;
  (__this->fields).DefaultValue = __this_00;
  il2cpp_runtime_helper_022b4080();
  if (__this != (Settings_HashSetSetting_int__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  collection = (__this_02->fields).DefaultValue;
  lVar4 = **(long **)(*(long *)&(__this_00->fields)._count + 0xc0);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = il2cpp_runtime_helper_023009c0();
  }
  __this_01 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(lVar4);
  lVar4 = *(long *)(*(long *)(*(long *)&(__this_00->fields)._count + 0xc0) + 0x30);
  pSVar3 = (System_Collections_Generic_IEqualityComparer_T__o *)
           il2cpp_runtime_helper_02583d40(**(undefined8 **)(*(long *)(lVar4 + 0x20) + 0xc0));
  System_Collections_Generic_HashSet_int____ctor_33d46b0
            (__this_01,(System_Collections_Generic_IEnumerable_T__o *)collection,pSVar3,
             *(MethodInfo_33D46B0 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x40));
  Settings_TypedSetting_object___set_Value
            (__this_02,(Il2CppObject *)__this_01,
             *(MethodInfo_2A24090 **)(*(long *)(*(long *)&(__this_00->fields)._count + 0xc0) + 0x40));
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, const MethodInfo_33C7570* method);
// 0x34c7570

void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor_33c7570
               (Settings_HashSetSetting_T__o *__this,MethodInfo_33C7570 *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 uVar1;
  undefined8 *puVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_HashSet_T__o *pSVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  Settings_HashSetSetting_T__Fields *pSVar8;
  undefined8 uStack_40;
  System_Collections_Generic_HashSet_T__o *pSStack_38;
  
  (*method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor->methodPointer)();
  pIVar3 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pSVar4 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  (*method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor->methodPointer)(pSVar4);
  pSVar8 = &__this->fields;
  (__this->fields).DefaultValue = pSVar4;
  pSVar7 = pSVar4;
  il2cpp_runtime_helper_022b4080();
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
    return;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  uVar1 = pSVar8[1].DefaultValue;
  lVar5 = **(long **)(*(long *)&(pSVar7->fields)._count + 0xc0);
  pSStack_38 = pSVar4;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = il2cpp_runtime_helper_023009c0();
  }
  uVar6 = il2cpp_runtime_helper_023052d0(lVar5);
  (*(code *)**(undefined8 **)(*(long *)(*(long *)&(pSVar7->fields)._count + 0xc0) + 0x30))(uVar6,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(*(long *)&(pSVar7->fields)._count + 0xc0) + 0x40);
  uStack_40 = uVar6;
  (*(code *)puVar2[2])(*puVar2,puVar2,pSVar8,&uStack_40,uVar6);
  return;
}


// Settings.HashSetSetting<int>$$SetDefault
// il2cpp: void Settings_HashSetSetting_int___SetDefault (Settings_HashSetSetting_int__o* __this, const MethodInfo_33C6BC0* method);
// 0x34c6bc0

void Settings_HashSetSetting_int___SetDefault
               (Settings_HashSetSetting_int__o *__this,MethodInfo_33C6BC0 *method)

{
  System_Collections_Generic_HashSet_T__o *collection;
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  
  collection = (__this->fields).DefaultValue;
  pIVar2 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  pMVar1 = method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor;
  comparer = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_runtime_helper_02583d40(pMVar1->klass->rgctx_data->rgctxDataDummy);
  System_Collections_Generic_HashSet_int____ctor_33d46b0
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,comparer,
             (MethodInfo_33D46B0 *)pMVar1->klass->rgctx_data[8].method);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_2A24090 *)method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault (Settings_HashSetSetting_T__o* __this, const MethodInfo_33C7600* method);
// 0x34c7600

void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault
               (Settings_HashSetSetting_T__o *__this,MethodInfo_33C7600 *method)

{
  System_Collections_Generic_HashSet_T__o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  void *pvStack_28;
  
  pSVar1 = (__this->fields).DefaultValue;
  pIVar3 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  pvVar4 = (void *)il2cpp_runtime_helper_023052d0(pIVar3);
  (*method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor->methodPointer)(pvVar4,pSVar1);
  pMVar2 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
  pvStack_28 = pvVar4;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,__this,&pvStack_28,pvVar4);
  return;
}


// Settings.HashSetSetting<int>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting_int___DeserializeFromJsonObject (Settings_HashSetSetting_int__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_33C6C60* method);
// 0x34c6c60

void Settings_HashSetSetting_int___DeserializeFromJsonObject
               (Settings_HashSetSetting_int__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_33C6C60 *method)

{
  System_RuntimeTypeHandle_o SVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  bool_conflict bVar2;
  Il2CppClass *pIVar3;
  System_Collections_Generic_HashSet_int__o *left;
  _union_332946 _Var4;
  long *plVar5;
  System_Type_o *pSVar6;
  Il2CppClass *pIVar7;
  int32_t *piVar8;
  SimpleJSONFixed_JSONArray_o *__this_06;
  System_Type_o *pSVar9;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  _union_332946 *p_Var11;
  MethodInfo *pMVar12;
  Il2CppRGCTXData *unaff_R15;
  _union_332946 _Var13;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auVar14 [12];
  int32_t in_stack_fffffffffffffec0;
  int32_t iVar15;
  int32_t in_stack_fffffffffffffec4;
  Il2CppMethodPointer in_stack_fffffffffffffec8;
  System_Int32_array *in_stack_fffffffffffffed0;
  Il2CppMethodPointer pIStack_120;
  Il2CppMethodPointer pIStack_118;
  System_Int32_array *pSStack_110;
  System_Collections_Generic_HashSet_int__o *pSStack_108;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSStack_100;
  MethodInfo_33C6C60 *pMStack_f8;
  MethodInfo *pMStack_f0;
  Il2CppRGCTXData *pIStack_e8;
  _union_332946 _Stack_e0;
  System_Collections_Generic_HashSet_int__o *__this_07;
  Il2CppMethodPointer pIVar16;
  Il2CppMethodPointer pIVar17;
  InvokerMethod pIVar18;
  char *pcVar19;
  Il2CppType *pIVar20;
  undefined4 uStack_78;
  undefined4 uStack_74;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  
  if (g_data_057a8e29 == '\0') {
    _Stack_e0.genericMethod = (void *)0x34c6c91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e29 = '\x01';
  }
  pIVar3 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    _Stack_e0.genericMethod = (void *)0x34c6cd4;
    pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  _Stack_e0.genericMethod = (void *)0x34c6cdc;
  left = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_023052d0(pIVar3);
  pMVar12 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  _Stack_e0.genericMethod = (void *)0x34c6d01;
  _Var4.genericMethod = (void *)il2cpp_runtime_helper_02583d40(pMVar12->klass->rgctx_data->rgctxDataDummy);
  pMVar12 = pMVar12->klass->rgctx_data[3].method;
  _Stack_e0.genericMethod = (void *)0x34c6d1d;
  System_Object___ctor((Il2CppObject *)left,(MethodInfo *)0x0);
  if (_Var4.genericMethod == (SimpleJSONFixed_JSONNode_o *)0x0) {
    _Stack_e0.genericMethod = (void *)0x34c6d35;
    _Var4.genericMethod = (void *)il2cpp_runtime_helper_02583d40(pMVar12->klass->rgctx_data->rgctxDataDummy);
  }
  (left->fields)._comparer = (System_Collections_Generic_IEqualityComparer_T__o *)_Var4;
  _Stack_e0.genericMethod = (void *)0x34c6d4b;
  il2cpp_runtime_helper_022b4080(&(left->fields)._comparer,_Var4.genericMethod);
  (left->fields)._count = 0;
  (left->fields)._lastIndex = 0;
  (left->fields)._freeList = -1;
  (left->fields)._version = 0;
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    _Stack_e0.genericMethod = (void *)0x34c6d82;
    __this_07 = left;
    plVar5 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method);
    if (plVar5 != (long *)0x0) {
      _Stack_e0.genericMethod = (void *)0x34c6da3;
      (**(code **)(*plVar5 + 0x338))(&stack0xffffffffffffff88,plVar5,*(undefined8 *)(*plVar5 + 0x340));
      pIVar16 = (Il2CppMethodPointer)CONCAT44(uStack_74,uStack_78);
      _Stack_e0.genericMethod = (void *)0x34c6dea;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
      __this_03.fields._0_8_ = __this_07;
      __this_03.fields.m_Object.fields._8_8_ = pIVar16;
      __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_68;
      __this_03.fields.m_Object.fields._32_8_ = pcStack_60;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_58;
      __this_03.fields.m_Array.fields._8_8_ = pIStack_50;
      __this_03.fields.m_Array.fields._current = pSStack_48;
      bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar2 != '\0') {
        json = (SimpleJSONFixed_JSONNode_o *)&stack0xffffffffffffff38;
        unaff_R15 = (Il2CppRGCTXData *)&g_data_057b9b70;
        pIVar17 = pIStack_70;
        pIVar18 = pIStack_68;
        pcVar19 = pcStack_60;
        pIVar3 = pIStack_58;
        pIVar20 = pIStack_50;
        pSVar10 = pSStack_48;
        do {
          _Stack_e0.genericMethod = (void *)0x34c6e1c;
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_05.fields._0_8_ = __this_07;
          __this_05.fields.m_Object.fields._8_8_ = pIVar16;
          __this_05.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
          __this_05.fields.m_Object.fields._32_8_ = pcVar19;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar3;
          __this_05.fields.m_Array.fields._8_8_ = pIVar20;
          __this_05.fields.m_Array.fields._current = pSVar10;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current(__this_05,(MethodInfo *)json);
          pMVar12 = (MethodInfo *)aKeyValue.fields.value;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            _Stack_e0.genericMethod = (void *)0x34c6e3a;
            il2cpp_runtime_helper_02337ed0();
          }
          _Stack_e0.genericMethod = (void *)0x34c6e47;
          _Var4.genericMethod = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
          SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            _Stack_e0.genericMethod = (void *)0x34c6e6e;
            il2cpp_runtime_helper_02337ed0();
          }
          _Stack_e0.genericMethod = (void *)0x34c6e78;
          left = (System_Collections_Generic_HashSet_int__o *)
                 System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
          _Stack_e0.genericMethod = (void *)0x34c6e8a;
          pSVar6 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0);
          _Stack_e0.genericMethod = (void *)0x34c6e97;
          bVar2 = System_Type__op_Equality((System_Type_o *)left,pSVar6,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              _Stack_e0.genericMethod = (void *)0x34c6ef4;
              il2cpp_runtime_helper_02337ed0();
            }
            _Stack_e0.genericMethod = (void *)0x34c6efe;
            left = (System_Collections_Generic_HashSet_int__o *)
                   System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
            _Stack_e0.genericMethod = (void *)0x34c6f13;
            pSVar6 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
            _Stack_e0.genericMethod = (void *)0x34c6f20;
            bVar2 = System_Type__op_Equality((System_Type_o *)left,pSVar6,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if (_Var4.genericMethod != (SimpleJSONFixed_JSONNode_o *)0x0) {
                _Stack_e0.genericMethod = (void *)0x34c6f45;
                _Var4.genericMethod =
                     (void *)(**(code **)(*(long *)_Var4.genericMethod + 0x1c8))
                                       (_Var4.genericMethod,
                                        *(undefined8 *)(*(long *)_Var4.genericMethod + 0x1d0));
                goto label_034c6f45;
              }
              goto label_034c6fe8;
            }
          }
          else {
            if (_Var4.genericMethod == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_034c6fe8;
            _Stack_e0.genericMethod = (void *)0x34c6eb8;
            uStack_78 = (**(code **)(*(long *)_Var4.genericMethod + 0x368))
                                  (_Var4.genericMethod,*(undefined8 *)(*(long *)_Var4.genericMethod + 0x370));
            _Stack_e0.genericMethod = (void *)0x34c6eca;
            _Var4.genericMethod = (void *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&stack0xffffffffffffff88);
label_034c6f45:
            pIVar7 = method->klass->rgctx_data->_10_T;
            if (((pIVar7->_2).field_0x6d & 1) == 0) {
              _Stack_e0.genericMethod = (void *)0x34c6f68;
              pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar7);
            }
            if (_Var4.genericMethod == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_034c6fe8;
            if (*(Il2CppClass **)(*(long *)_Var4.genericMethod + 0x40) != (pIVar7->_1).element_class)
            goto label_034c6fed;
            _Stack_e0.genericMethod = (void *)0x34c6f83;
            piVar8 = (int32_t *)il2cpp_runtime_helper_02305440(_Var4.genericMethod);
            _Stack_e0.genericMethod = (void *)0x34c6faf;
            System_Collections_Generic_HashSet_int___AddIfNotPresent
                      (__this_07,*piVar8,
                       (MethodInfo_33D7EC0 *)
                       method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->klass->
                       rgctx_data[0x15].method);
          }
          _Stack_e0.genericMethod = (void *)0x34c6e0a;
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_04.fields._0_8_ = __this_07;
          __this_04.fields.m_Object.fields._8_8_ = pIVar16;
          __this_04.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar17;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar18;
          __this_04.fields.m_Object.fields._32_8_ = pcVar19;
          __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar3;
          __this_04.fields.m_Array.fields._8_8_ = pIVar20;
          __this_04.fields.m_Array.fields._current = pSVar10;
          bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_04,(MethodInfo *)json);
        } while ((char)bVar2 != '\0');
      }
      if (__this != (Settings_HashSetSetting_int__o *)0x0) {
        _Stack_e0.genericMethod = (void *)0x34c6fd6;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_07,
                   (MethodInfo_2A24090 *)
                   method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
        return;
      }
    }
  }
label_034c6fe8:
  _Stack_e0.genericMethod = (void *)0x34c6fed;
  pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_034c6fed:
  _Stack_e0.genericMethod = (void *)0x34c6ff8;
  _Var13 = _Var4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_108 = left;
  pSStack_100 = (System_Collections_Generic_HashSet_Enumerator_T__c *)json;
  pMStack_f8 = method;
  pMStack_f0 = pMVar12;
  pIStack_e8 = unaff_R15;
  _Stack_e0 = _Var4;
  if (g_data_057a8e2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e2a = '\x01';
  }
  pIStack_120 = (Il2CppMethodPointer)0x0;
  pIStack_118 = (Il2CppMethodPointer)0x0;
  pSStack_110 = (System_Int32_array *)0x0;
  __this_06 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_06,(MethodInfo *)0x0);
  if ((_Var13.genericMethod == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (*(void **)((long)_Var13.genericMethod + 0x18) == (MethodInfo_3214F00 *)0x0)) {
label_034c731f:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar14 = il2cpp_runtime_helper_022fefe0(_Var13.genericMethod);
      if (auVar14._8_4_ != 1) {
        __this_02.fields._set._4_4_ = in_stack_fffffffffffffec4;
        __this_02.fields._set._0_4_ = in_stack_fffffffffffffec0;
        __this_02.fields._8_8_ = in_stack_fffffffffffffec8;
        __this_02.fields._current = &in_stack_fffffffffffffed0->obj;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (__this_02,(MethodInfo_3214F40 *)&pIStack_120);
        _Unwind_Resume(auVar14._0_8_);
      }
      p_Var11 = (_union_332946 *)__cxa_begin_catch(auVar14._0_8_);
      _Var13 = (_union_332946)p_Var11->genericMethod;
      __cxa_end_catch();
label_034c72c6:
      __this_01.fields._set._4_4_ = in_stack_fffffffffffffec4;
      __this_01.fields._set._0_4_ = in_stack_fffffffffffffec0;
      __this_01.fields._8_8_ = in_stack_fffffffffffffec8;
      __this_01.fields._current = &in_stack_fffffffffffffed0->obj;
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                (__this_01,(MethodInfo_3214F40 *)&pIStack_120);
    } while (_Var13.genericMethod != (SimpleJSONFixed_JSONNode_o *)0x0);
    return;
  }
  in_stack_fffffffffffffec0 = 0;
  in_stack_fffffffffffffec4 = 0;
  in_stack_fffffffffffffec8 = (Il2CppMethodPointer)0x0;
  in_stack_fffffffffffffed0 = (System_Int32_array *)0x0;
  System_Collections_Generic_HashSet_Enumerator_int____ctor
            ((System_Collections_Generic_HashSet_Enumerator_T__o)ZEXT824(0),
             (System_Collections_Generic_HashSet_T__o *)&stack0xfffffffffffffec0,
             *(void **)((long)_Var13.genericMethod + 0x18));
  pIStack_120 = (Il2CppMethodPointer)CONCAT44(in_stack_fffffffffffffec4,in_stack_fffffffffffffec0);
  _Var13.genericMethod = &g_data_057b9b70;
  pIStack_118 = in_stack_fffffffffffffec8;
  pSStack_110 = in_stack_fffffffffffffed0;
label_034c70e0:
  __this_00.fields._set._4_4_ = in_stack_fffffffffffffec4;
  __this_00.fields._set._0_4_ = in_stack_fffffffffffffec0;
  __this_00.fields._8_8_ = in_stack_fffffffffffffec8;
  __this_00.fields._current = &in_stack_fffffffffffffed0->obj;
  bVar2 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                    (__this_00,(MethodInfo_3214F50 *)&pIStack_120);
  if ((char)bVar2 == '\0') {
    _Var13.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
    goto label_034c72c6;
  }
  iVar15 = (int32_t)pSStack_110;
  SVar1.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)(pIVar7->_1).byval_arg.data + 0xc0) + 0x48))->
       value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0)
  ;
  bVar2 = System_Type__op_Equality(pSVar6,pSVar9,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') goto label_034c71f0;
  s = (System_String_o *)
      il2cpp_runtime_helper_02304f30(*(undefined8 *)(*(long *)((long)(pIVar7->_1).byval_arg.data + 0xc0) + 0x50),
                         &stack0xfffffffffffffec0);
  in_stack_fffffffffffffec0 = iVar15;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_stack_fffffffffffffec0 = iVar15;
  }
  if (s == (System_String_o *)0x0) {
label_034c7308:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((s->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      il2cpp_runtime_helper_022b2fd0(s);
      goto label_034c7308;
    }
    piVar8 = (int32_t *)il2cpp_runtime_helper_02305440(s);
    pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(*piVar8,(MethodInfo *)0x0);
    if (__this_06 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      (*(__this_06->klass->vtable)._21_Add.methodPtr)
                (__this_06,pSVar10,(__this_06->klass->vtable)._21_Add.method);
      goto label_034c70e0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  goto label_034c7312;
label_034c71f0:
  SVar1.fields.value =
       (System_RuntimeTypeHandle_Fields)
       ((System_RuntimeTypeHandle_Fields *)(*(long *)((long)(pIVar7->_1).byval_arg.data + 0xc0) + 0x48))->
       value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar9 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
  bVar2 = System_Type__op_Equality(pSVar6,pSVar9,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    s = (System_String_o *)
        il2cpp_runtime_helper_02304f30(*(undefined8 *)(*(long *)((long)(pIVar7->_1).byval_arg.data + 0xc0) + 0x50));
    in_stack_fffffffffffffec0 = iVar15;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_fffffffffffffec0 = iVar15;
    }
    if ((s == (System_String_o *)0x0) || (s->klass == g_data_057b9c00)) {
      pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
      if (__this_06 != (SimpleJSONFixed_JSONArray_o *)0x0) {
        (*(__this_06->klass->vtable)._21_Add.methodPtr)
                  (__this_06,pSVar10,(__this_06->klass->vtable)._21_Add.method);
        goto label_034c70e0;
      }
label_034c7312:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2fd0(s);
    goto label_034c731f;
  }
  goto label_034c70e0;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject (Settings_HashSetSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_33C7680* method);
// 0x34c7680

void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject
               (Settings_HashSetSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_33C7680 *method)

{
  int32_t n;
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  System_Type_c *pSVar2;
  undefined8 uVar3;
  code *pcVar4;
  InvokerMethod pIVar5;
  System_RuntimeTypeHandle_o SVar6;
  size_t sVar7;
  void *pvVar8;
  void *__src;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields *pSVar12;
  MethodInfo *pMVar13;
  char cVar14;
  bool_conflict bVar15;
  uint uVar16;
  Il2CppClass *pIVar17;
  MethodInfo *pMVar18;
  long *plVar19;
  Il2CppMethodPointer pIVar20;
  long lVar21;
  ulong uVar22;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Type_o *pSVar23;
  System_Type_o *pSVar24;
  int32_t *piVar25;
  SimpleJSONFixed_JSONNode_o *pSVar26;
  undefined8 *puVar27;
  long lVar28;
  SimpleJSONFixed_JSONNode_Enumerator_Fields *pSVar29;
  ulong uVar30;
  MethodInfo *pMVar31;
  Il2CppMethodPointer pIVar32;
  void *pvVar33;
  undefined4 *puVar34;
  MethodInfo *unaff_R12;
  ulong __n;
  undefined8 *unaff_R13;
  undefined1 *__src_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auVar35 [12];
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  long alStack_158 [6];
  void *apvStack_128 [7];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  InvokerMethod local_d0;
  char *pcStack_c8;
  Il2CppClass *local_c0;
  Il2CppType *pIStack_b8;
  Il2CppType **local_b0;
  _union_13 _Stack_a8;
  _union_14 local_a0;
  undefined1 local_98 [80];
  SimpleJSONFixed_JSONNode_Enumerator_Fields *local_48;
  MethodInfo *local_40;
  undefined4 local_38 [2];
  
  local_98._72_8_ = __this;
  if (g_data_057a8e2b == '\0') {
    uStack_f0 = 0x34c76b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e2b = '\x01';
  }
  pSVar1 = method->klass->rgctx_data;
  lVar11 = -((ulong)(pSVar1->_10_T->_2).actualSize + 0xf & 0xfffffffffffffff0);
  pSVar29 = (SimpleJSONFixed_JSONNode_Enumerator_Fields *)(auStack_e8 + lVar11);
  local_98._48_8_ = (Il2CppType **)0x0;
  local_98._56_8_ = (Il2CppRGCTXData *)0x0;
  local_98._32_8_ = (Il2CppClass *)0x0;
  local_98._40_8_ = (Il2CppType *)0x0;
  local_98._16_8_ = (InvokerMethod)0x0;
  local_98._24_8_ = (char *)0x0;
  local_98._0_8_ = (Il2CppMethodPointer)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._64_8_ = (void *)0x0;
  pIVar17 = pSVar1->_0_System_Collections_Generic_HashSet_T_;
  local_48 = pSVar29;
  if (((pIVar17->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7713;
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c771b;
  pMVar18 = (MethodInfo *)il2cpp_runtime_helper_023052d0(pIVar17);
  pIVar17 = (Il2CppClass *)method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  pSVar2 = (pIVar17->_1).image;
  *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7732;
  pMVar31 = pMVar18;
  (*(code *)pSVar2)();
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pIVar17 = (Il2CppClass *)(json->klass->vtable)._45_get_AsArray.method;
    pIVar20 = (json->klass->vtable)._45_get_AsArray.methodPtr;
    local_40 = pMVar18;
    *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7752;
    pMVar31 = (MethodInfo *)json;
    plVar19 = (long *)(*pIVar20)();
    if (plVar19 != (long *)0x0) {
      uVar3 = *(undefined8 *)(*plVar19 + 0x340);
      pcVar4 = *(code **)(*plVar19 + 0x338);
      *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7775;
      (*pcVar4)(auStack_e8 + 8,plVar19,uVar3);
      local_98._64_8_ = local_a0;
      local_98._48_8_ = local_b0;
      local_98._56_8_ = _Stack_a8;
      local_98._32_8_ = local_c0;
      local_98._40_8_ = pIStack_b8;
      local_98._16_8_ = local_d0;
      local_98._24_8_ = pcStack_c8;
      local_98._0_8_ = auStack_e8._8_8_;
      local_98._8_8_ = auStack_e8._16_8_;
      pMVar31 = (MethodInfo *)local_98;
      pIVar17 = (Il2CppClass *)0x0;
      *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c77bd;
      bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                         ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar29,pMVar31);
      if ((char)bVar15 != '\0') {
        unaff_R12 = (MethodInfo *)local_98;
        unaff_R13 = &g_data_057b9b70;
        do {
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7817;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar29,unaff_R12);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7835;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7842;
          json = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
          SVar6.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7869;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7873;
          pMVar18 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7885;
          pIVar17 = (Il2CppClass *)
                    System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0);
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7892;
          pMVar31 = pMVar18;
          bVar15 = System_Type__op_Equality
                             ((System_Type_o *)pMVar18,(System_Type_o *)pIVar17,(MethodInfo *)0x0);
          if ((char)bVar15 == '\0') {
            SVar6.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7954;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c795e;
            pMVar18 = (MethodInfo *)System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7973;
            pIVar17 = (Il2CppClass *)
                      System_Type__GetTypeFromHandle
                                ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7980;
            pMVar31 = pMVar18;
            bVar15 = System_Type__op_Equality
                               ((System_Type_o *)pMVar18,(System_Type_o *)pIVar17,(MethodInfo *)0x0);
            if ((char)bVar15 != '\0') {
              if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pMVar31 = (json->klass->vtable)._9_get_Value.method;
                pIVar20 = (json->klass->vtable)._9_get_Value.methodPtr;
                *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c79a4;
                pMVar18 = (MethodInfo *)(*pIVar20)(json,pMVar31);
                pIVar17 = method->klass->rgctx_data->_10_T;
                if (((pIVar17->_2).field_0x6d & 1) == 0) {
                  *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c79c7;
                  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar17);
                }
                pSVar12 = local_48;
                *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c79d6;
                pMVar31 = pMVar18;
                pIVar20 = (Il2CppMethodPointer)il2cpp_runtime_helper_022b2b80(pMVar18,pIVar17,pSVar12);
                if (local_40 != (MethodInfo *)0x0) {
                  pSVar1 = method->klass->rgctx_data;
                  pMVar31 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
                  pIVar32 = pMVar31->methodPointer;
                  if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
                    pIVar20 = *(Il2CppMethodPointer *)pIVar20;
                  }
                  puVar34 = local_38;
                  auStack_e8._8_8_ = pIVar20;
                  goto label_034c77f2;
                }
              }
              goto label_034c7a54;
            }
          }
          else {
            if (json == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_034c7a54;
            pMVar31 = (json->klass->vtable)._35_get_AsInt.method;
            pIVar20 = (json->klass->vtable)._35_get_AsInt.methodPtr;
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c78b6;
            local_38[0] = (*pIVar20)(json,pMVar31);
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c78c6;
            pMVar18 = (MethodInfo *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,local_38);
            pIVar17 = method->klass->rgctx_data->_10_T;
            if (((pIVar17->_2).field_0x6d & 1) == 0) {
              *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c78e9;
              pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar17);
            }
            pSVar12 = local_48;
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c78f8;
            pMVar31 = pMVar18;
            pIVar20 = (Il2CppMethodPointer)il2cpp_runtime_helper_022b2b80(pMVar18,pIVar17,pSVar12);
            if (local_40 == (MethodInfo *)0x0) goto label_034c7a54;
            pSVar1 = method->klass->rgctx_data;
            pMVar31 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
            pIVar32 = pMVar31->methodPointer;
            if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
              pIVar20 = *(Il2CppMethodPointer *)pIVar20;
            }
            puVar34 = (undefined4 *)((long)local_38 + 7);
            auStack_e8._8_8_ = pIVar20;
label_034c77f2:
            pMVar18 = local_40;
            pIVar5 = pMVar31->invoker_method;
            *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c77f5;
            (*pIVar5)(pIVar32,pMVar31,pMVar18,(void **)(auStack_e8 + 8),puVar34);
          }
          pIVar17 = (Il2CppClass *)0x0;
          *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7802;
          pMVar31 = unaff_R12;
          bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar29,unaff_R12);
          pMVar18 = unaff_R12;
        } while ((char)bVar15 != '\0');
      }
      pMVar13 = local_40;
      uVar3 = local_98._72_8_;
      if ((Settings_HashSetSetting_T__o *)local_98._72_8_ != (Settings_HashSetSetting_T__o *)0x0) {
        pMVar31 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
        pIVar20 = pMVar31->methodPointer;
        auStack_e8._8_8_ = local_40;
        pIVar5 = pMVar31->invoker_method;
        *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7a45;
        (*pIVar5)(pIVar20,pMVar31,(void *)uVar3,(void **)(auStack_e8 + 8),pMVar13);
        return;
      }
    }
  }
label_034c7a54:
  *(undefined8 *)(auStack_e8 + lVar11 + -8) = 0x34c7a59;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)(auStack_e8 + lVar11 + -8) = &stack0xfffffffffffffff8;
  *(MethodInfo_33C7680 **)((long)apvStack_128 + lVar11 + 0x30) = method;
  *(SimpleJSONFixed_JSONNode_o **)((long)apvStack_128 + lVar11 + 0x28) = json;
  *(undefined8 **)((long)apvStack_128 + lVar11 + 0x20) = unaff_R13;
  *(MethodInfo **)((long)apvStack_128 + lVar11 + 0x18) = unaff_R12;
  *(MethodInfo **)((long)apvStack_128 + lVar11 + 0x10) = pMVar18;
  *(MethodInfo **)((long)alStack_158 + lVar11) = pMVar31;
  if (g_data_057a8e2c == '\0') {
    *(undefined8 *)((long)&uStack_168 + lVar11) = 0x34c7a8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    *(undefined8 *)((long)&uStack_168 + lVar11) = 0x34c7a99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e2c = '\x01';
  }
  lVar21 = *(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0);
  lVar28 = *(long *)(lVar21 + 0x70);
  uVar16 = *(uint *)(lVar28 + 0xfc);
  __n = (ulong)uVar16;
  *(ulong *)((long)alStack_158 + lVar11 + 0x28) = (ulong)*(uint *)(*(long *)(lVar21 + 0x50) + 0xfc);
  if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
    *(undefined8 *)((long)&uStack_168 + lVar11) = 0x34c7ad5;
    lVar21 = il2cpp_runtime_helper_023009c0();
    uVar16 = *(uint *)(lVar21 + 0xfc);
  }
  *(undefined1 **)((long)alStack_158 + lVar11 + 0x20) =
       auStack_160 + (lVar11 - ((ulong)(uVar16 + 0x10) + 0xf & 0xfffffffffffffff0));
  sVar7 = *(size_t *)((long)alStack_158 + lVar11 + 0x28);
  uVar30 = sVar7 + 0xf & 0xfffffffffffffff0;
  __src_00 = auStack_160 + (lVar11 - ((ulong)(uVar16 + 0x10) + 0xf & 0xfffffffffffffff0)) + -uVar30;
  uVar22 = __n + 0xf & 0xfffffffffffffff0;
  lVar21 = (long)__src_00 - uVar22;
  *(long *)((long)alStack_158 + lVar11 + 8) = lVar21;
  pvVar33 = (void *)(lVar21 - uVar22);
  *(void **)((long)apvStack_128 + lVar11 + 8) = pvVar33;
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7b35;
  memset(pvVar33,0,__n);
  pvVar33 = (void *)((long)pvVar33 - uVar30);
  *(void **)((long)alStack_158 + lVar11 + 0x10) = pvVar33;
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7b4c;
  memset(pvVar33,0,sVar7);
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7b5b;
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  *(SimpleJSONFixed_JSONArray_o **)((long)alStack_158 + lVar11 + 0x18) = __this_00;
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7b69;
  SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
  pvVar8 = *(void **)((long)alStack_158 + lVar11);
  if (pvVar8 != (void *)0x0) {
    pMVar31 = *(MethodInfo **)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x60);
    pIVar20 = pMVar31->methodPointer;
    pIVar5 = pMVar31->invoker_method;
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7b91;
    (*pIVar5)(pIVar20,pMVar31,pvVar8,(void **)0x0,(void *)((long)apvStack_128 + lVar11));
    pvVar8 = *(void **)((long)apvStack_128 + lVar11);
    if (pvVar8 != (void *)0x0) {
      pMVar31 = *(MethodInfo **)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x68);
      pIVar20 = pMVar31->methodPointer;
      __src = *(void **)((long)alStack_158 + lVar11 + 8);
      *(void **)((long)apvStack_128 + lVar11) = __src;
      pIVar5 = pMVar31->invoker_method;
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7bc2;
      (*pIVar5)(pIVar20,pMVar31,pvVar8,(void **)((long)apvStack_128 + lVar11),__src);
      pvVar8 = *(void **)((long)apvStack_128 + lVar11 + 8);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7bd1;
      memcpy(pvVar8,__src,__n);
label_034c7be0:
      uVar3 = *(undefined8 *)((long)apvStack_128 + lVar11 + 8);
      pcVar4 = (code *)**(undefined8 **)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x88);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7bf8;
      cVar14 = (*pcVar4)(uVar3);
      if (cVar14 == '\0') {
        __src_00 = (undefined1 *)0x0;
        goto label_034c7e06;
      }
      pMVar31 = *(MethodInfo **)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x78);
      pIVar20 = pMVar31->methodPointer;
      *(undefined1 **)((long)apvStack_128 + lVar11) = __src_00;
      pvVar8 = *(void **)((long)apvStack_128 + lVar11 + 8);
      pIVar5 = pMVar31->invoker_method;
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c24;
      (*pIVar5)(pIVar20,pMVar31,pvVar8,(void **)((long)apvStack_128 + lVar11),__src_00);
      pvVar8 = *(void **)((long)alStack_158 + lVar11 + 0x10);
      sVar7 = *(size_t *)((long)alStack_158 + lVar11 + 0x28);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c34;
      memcpy(pvVar8,__src_00,sVar7);
      SVar6.fields.value =
           *(System_RuntimeTypeHandle_Fields *)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x48);
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c58;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c62;
      pSVar23 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c74;
      pSVar24 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c81;
      bVar15 = System_Type__op_Equality(pSVar23,pSVar24,(MethodInfo *)0x0);
      if ((char)bVar15 == '\0') goto label_034c7d20;
      pvVar8 = *(void **)((long)alStack_158 + lVar11 + 0x10);
      sVar7 = *(size_t *)((long)alStack_158 + lVar11 + 0x28);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7c99;
      memcpy(__src_00,pvVar8,sVar7);
      uVar3 = *(undefined8 *)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x50);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7cb0;
      plVar19 = (long *)il2cpp_runtime_helper_02304f30(uVar3,__src_00);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7ccb;
        il2cpp_runtime_helper_02337ed0();
      }
      if (plVar19 == (long *)0x0) {
label_034c7e72:
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e77;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (*(long *)(*plVar19 + 0x40) != *(long *)(g_data_057b9bb8 + 0x40)) {
          *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e72;
          il2cpp_runtime_helper_022b2fd0(plVar19);
          goto label_034c7e72;
        }
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7cf2;
        piVar25 = (int32_t *)il2cpp_runtime_helper_02305440(plVar19);
        n = *piVar25;
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7cfb;
        pSVar26 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        plVar19 = *(long **)((long)alStack_158 + lVar11 + 0x18);
        if (plVar19 != (long *)0x0) {
          uVar3 = *(undefined8 *)(*plVar19 + 0x290);
          pcVar4 = *(code **)(*plVar19 + 0x288);
          *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d1b;
          (*pcVar4)(plVar19,pSVar26,uVar3);
          goto label_034c7be0;
        }
      }
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e7c;
      il2cpp_runtime_helper_022b2c90();
      goto label_034c7e7c;
    }
  }
label_034c7e89:
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e8e;
  il2cpp_runtime_helper_022b2c90();
  do {
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e96;
    auVar35 = il2cpp_runtime_helper_022fefe0(__src_00);
    if (auVar35._8_4_ != 1) {
      lVar21 = *(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0);
      lVar28 = *(long *)(lVar21 + 0x70);
      if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7fb6;
        lVar28 = il2cpp_runtime_helper_023009c0();
        lVar21 = *(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0);
      }
      uVar3 = *(undefined8 *)(lVar21 + 0x90);
      uVar9 = *(undefined8 *)((long)alStack_158 + lVar11 + 0x20);
      uVar10 = *(undefined8 *)((long)apvStack_128 + lVar11 + 8);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7fde;
      il2cpp_runtime_helper_022b35c0(lVar28,uVar3,uVar9,uVar10,0,0);
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7feb;
      _Unwind_Resume(auVar35._0_8_);
    }
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7f82;
    puVar27 = (undefined8 *)__cxa_begin_catch(auVar35._0_8_);
    __src_00 = (undefined1 *)*puVar27;
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7f8a;
    __cxa_end_catch();
label_034c7e06:
    lVar21 = *(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0);
    lVar28 = *(long *)(lVar21 + 0x70);
    if ((*(byte *)(lVar28 + 0x135) & 1) == 0) {
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e23;
      lVar28 = il2cpp_runtime_helper_023009c0();
      lVar21 = *(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0);
    }
    uVar3 = *(undefined8 *)((long)alStack_158 + lVar11 + 0x20);
    uVar9 = *(undefined8 *)(lVar21 + 0x90);
    uVar10 = *(undefined8 *)((long)apvStack_128 + lVar11 + 8);
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e4b;
    il2cpp_runtime_helper_022b35c0(lVar28,uVar9,uVar3,uVar10,0,0);
  } while (__src_00 != (undefined1 *)0x0);
  return;
label_034c7d20:
  SVar6.fields.value =
       *(System_RuntimeTypeHandle_Fields *)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x48);
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d44;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d4e;
  pSVar23 = System_Type__GetTypeFromHandle(SVar6,(MethodInfo *)0x0);
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d63;
  pSVar24 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
  *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d70;
  bVar15 = System_Type__op_Equality(pSVar23,pSVar24,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    pvVar8 = *(void **)((long)alStack_158 + lVar11 + 0x10);
    sVar7 = *(size_t *)((long)alStack_158 + lVar11 + 0x28);
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d88;
    memcpy(__src_00,pvVar8,sVar7);
    uVar3 = *(undefined8 *)(*(long *)((long)(pIVar17->_1).byval_arg.data + 0xc0) + 0x50);
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7d9f;
    pSVar23 = (System_Type_o *)il2cpp_runtime_helper_02304f30(uVar3);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7dba;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pSVar23 == (System_Type_o *)0x0) || (pSVar23->klass == g_data_057b9c00)) {
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7dd9;
      pSVar26 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar23,(MethodInfo *)0x0);
      plVar19 = *(long **)((long)alStack_158 + lVar11 + 0x18);
      if (plVar19 != (long *)0x0) {
        uVar3 = *(undefined8 *)(*plVar19 + 0x290);
        pcVar4 = *(code **)(*plVar19 + 0x288);
        *(undefined8 *)((long)pvVar33 + -8) = 0x34c7df9;
        (*pcVar4)(plVar19,pSVar26,uVar3);
        goto label_034c7be0;
      }
label_034c7e7c:
      *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e81;
      il2cpp_runtime_helper_022b2c90();
    }
    *(undefined8 *)((long)pvVar33 + -8) = 0x34c7e89;
    il2cpp_runtime_helper_022b2fd0(pSVar23);
    goto label_034c7e89;
  }
  goto label_034c7be0;
}


// Settings.HashSetSetting<int>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting_int___SerializeToJsonObject (Settings_HashSetSetting_int__o* __this, const MethodInfo_33C7000* method);
// 0x34c7000

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting_int___SerializeToJsonObject
          (Settings_HashSetSetting_int__o *__this,MethodInfo_33C7000 *method)

{
  MethodInfo_3214F00 *method_00;
  System_RuntimeTypeHandle_o SVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONArray_o *__this_03;
  System_Type_o *pSVar3;
  System_Type_o *pSVar4;
  System_String_o *s;
  int32_t *piVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [12];
  int32_t in_stack_ffffffffffffff98;
  int32_t iVar9;
  int32_t in_stack_ffffffffffffff9c;
  Il2CppMethodPointer in_stack_ffffffffffffffa0;
  System_Int32_array *in_stack_ffffffffffffffa8;
  Il2CppMethodPointer pIStack_48;
  Il2CppMethodPointer pIStack_40;
  int32_t iStack_38;
  
  if (g_data_057a8e2a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e2a = '\x01';
  }
  pIStack_48 = (Il2CppMethodPointer)0x0;
  pIStack_40 = (Il2CppMethodPointer)0x0;
  _iStack_38 = (System_Int32_array *)0x0;
  __this_03 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_03,(MethodInfo *)0x0);
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (method_00 = (MethodInfo_3214F00 *)(__this->fields)._value, method_00 == (MethodInfo_3214F00 *)0x0)) {
label_034c731f:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar8 = il2cpp_runtime_helper_022fefe0(__this);
      if (auVar8._8_4_ != 1) {
        __this_02.fields._set._4_4_ = in_stack_ffffffffffffff9c;
        __this_02.fields._set._0_4_ = in_stack_ffffffffffffff98;
        __this_02.fields._8_8_ = in_stack_ffffffffffffffa0;
        __this_02.fields._current = &in_stack_ffffffffffffffa8->obj;
        System_Collections_Generic_HashSet_Enumerator_int___Dispose
                  (__this_02,(MethodInfo_3214F40 *)&stack0xffffffffffffffb8);
        _Unwind_Resume(auVar8._0_8_);
      }
      puVar7 = (undefined8 *)__cxa_begin_catch(auVar8._0_8_);
      __this = (Settings_HashSetSetting_int__o *)*puVar7;
      __cxa_end_catch();
label_034c72c6:
      __this_01.fields._set._4_4_ = in_stack_ffffffffffffff9c;
      __this_01.fields._set._0_4_ = in_stack_ffffffffffffff98;
      __this_01.fields._8_8_ = in_stack_ffffffffffffffa0;
      __this_01.fields._current = &in_stack_ffffffffffffffa8->obj;
      System_Collections_Generic_HashSet_Enumerator_int___Dispose
                (__this_01,(MethodInfo_3214F40 *)&stack0xffffffffffffffb8);
    } while (__this != (Settings_HashSetSetting_int__o *)0x0);
    return (SimpleJSONFixed_JSONNode_o *)__this_03;
  }
  in_stack_ffffffffffffff98 = 0;
  in_stack_ffffffffffffff9c = 0;
  in_stack_ffffffffffffffa0 = (Il2CppMethodPointer)0x0;
  in_stack_ffffffffffffffa8 = (System_Int32_array *)0x0;
  System_Collections_Generic_HashSet_Enumerator_int____ctor
            ((System_Collections_Generic_HashSet_Enumerator_T__o)ZEXT824(0),
             (System_Collections_Generic_HashSet_T__o *)&stack0xffffffffffffff98,method_00);
  pIStack_48 = (Il2CppMethodPointer)CONCAT44(in_stack_ffffffffffffff9c,in_stack_ffffffffffffff98);
  __this = (Settings_HashSetSetting_int__o *)&g_data_057b9b70;
  pIStack_40 = in_stack_ffffffffffffffa0;
  _iStack_38 = in_stack_ffffffffffffffa8;
label_034c70e0:
  __this_00.fields._set._4_4_ = in_stack_ffffffffffffff9c;
  __this_00.fields._set._0_4_ = in_stack_ffffffffffffff98;
  __this_00.fields._8_8_ = in_stack_ffffffffffffffa0;
  __this_00.fields._current = &in_stack_ffffffffffffffa8->obj;
  bVar2 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext
                    (__this_00,(MethodInfo_3214F50 *)&stack0xffffffffffffffb8);
  if ((char)bVar2 == '\0') {
    __this = (Settings_HashSetSetting_int__o *)0x0;
    goto label_034c72c6;
  }
  iVar9 = iStack_38;
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0)
  ;
  bVar2 = System_Type__op_Equality(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') goto label_034c71f0;
  s = (System_String_o *)il2cpp_runtime_helper_02304f30(method->klass->rgctx_data->_10_T,&stack0xffffffffffffff98);
  in_stack_ffffffffffffff98 = iVar9;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_stack_ffffffffffffff98 = iVar9;
  }
  if (s == (System_String_o *)0x0) {
label_034c7308:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((s->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      il2cpp_runtime_helper_022b2fd0(s);
      goto label_034c7308;
    }
    piVar5 = (int32_t *)il2cpp_runtime_helper_02305440(s);
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(*piVar5,(MethodInfo *)0x0);
    if (__this_03 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      (*(__this_03->klass->vtable)._21_Add.methodPtr)
                (__this_03,pSVar6,(__this_03->klass->vtable)._21_Add.method);
      goto label_034c70e0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  goto label_034c7312;
label_034c71f0:
  SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
  pSVar4 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
  bVar2 = System_Type__op_Equality(pSVar3,pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    s = (System_String_o *)il2cpp_runtime_helper_02304f30(method->klass->rgctx_data->_10_T);
    in_stack_ffffffffffffff98 = iVar9;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_stack_ffffffffffffff98 = iVar9;
    }
    if ((s == (System_String_o *)0x0) || (s->klass == g_data_057b9c00)) {
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
      if (__this_03 != (SimpleJSONFixed_JSONArray_o *)0x0) {
        (*(__this_03->klass->vtable)._21_Add.methodPtr)
                  (__this_03,pSVar6,(__this_03->klass->vtable)._21_Add.method);
        goto label_034c70e0;
      }
label_034c7312:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2fd0(s);
    goto label_034c731f;
  }
  goto label_034c70e0;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject (Settings_HashSetSetting_T__o* __this, const MethodInfo_33C7A60* method);
// 0x34c7a60

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject
          (Settings_HashSetSetting_T__o *__this,MethodInfo_33C7A60 *method)

{
  int32_t n;
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  System_RuntimeTypeHandle_o SVar4;
  Settings_HashSetSetting_T__o *pSVar5;
  undefined1 *puVar6;
  ulong __n;
  undefined1 *puVar7;
  char cVar8;
  uint uVar9;
  bool_conflict bVar10;
  long lVar11;
  ulong uVar12;
  SimpleJSONFixed_JSONArray_o *pSVar13;
  System_Type_o *pSVar14;
  System_Type_o *pSVar15;
  long *plVar16;
  int32_t *piVar17;
  SimpleJSONFixed_JSONNode_o *pSVar18;
  undefined8 *puVar19;
  Il2CppClass *pIVar20;
  Settings_HashSetSetting_T__RGCTXs *pSVar21;
  ulong uVar22;
  undefined1 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  undefined1 auVar26 [12];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  Settings_HashSetSetting_T__o *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  SimpleJSONFixed_JSONArray_o *local_58;
  undefined1 *local_50;
  ulong local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_70 = __this;
  if (g_data_057a8e2c == '\0') {
    uStack_80 = 0x34c7a8d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    uStack_80 = 0x34c7a99;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057a8e2c = '\x01';
  }
  pSVar21 = method->klass->rgctx_data;
  pIVar20 = pSVar21->_14_System_Collections_Generic_HashSet_Enumerator_T_;
  uVar9 = (pIVar20->_2).actualSize;
  uVar24 = (ulong)uVar9;
  local_48 = (ulong)(pSVar21->_10_T->_2).actualSize;
  if (((pIVar20->_2).field_0x6d & 1) == 0) {
    uStack_80 = 0x34c7ad5;
    lVar11 = il2cpp_runtime_helper_023009c0();
    uVar9 = *(uint *)(lVar11 + 0xfc);
  }
  __n = local_48;
  local_50 = auStack_78 + -((ulong)(uVar9 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar22 = local_48 + 0xf & 0xfffffffffffffff0;
  puVar25 = local_50 + -uVar22;
  uVar12 = uVar24 + 0xf & 0xfffffffffffffff0;
  local_68 = puVar25 + -uVar12;
  puVar23 = local_68 + -uVar12;
  local_38 = puVar23;
  *(undefined8 *)(puVar23 + -8) = 0x34c7b35;
  memset(puVar23,0,uVar24);
  puVar23 = puVar23 + -uVar22;
  local_60 = puVar23;
  *(undefined8 *)(puVar23 + -8) = 0x34c7b4c;
  memset(puVar23,0,__n);
  *(undefined8 *)(puVar23 + -8) = 0x34c7b5b;
  pSVar13 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  local_58 = pSVar13;
  *(undefined8 *)(puVar23 + -8) = 0x34c7b69;
  SimpleJSONFixed_JSONArray___ctor(pSVar13,(MethodInfo *)0x0);
  pSVar5 = local_70;
  if (local_70 != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    *(undefined8 *)(puVar23 + -8) = 0x34c7b91;
    (*pIVar3)(pIVar2,pMVar1,pSVar5,(void **)0x0,&local_40);
    puVar7 = local_40;
    puVar6 = local_68;
    if (local_40 != (undefined1 *)0x0) {
      pMVar1 = method->klass->rgctx_data->_13_System_Collections_Generic_HashSet_T__GetEnumerator;
      pIVar2 = pMVar1->methodPointer;
      local_40 = local_68;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)(puVar23 + -8) = 0x34c7bc2;
      (*pIVar3)(pIVar2,pMVar1,puVar7,&local_40,puVar6);
      puVar7 = local_38;
      *(undefined8 *)(puVar23 + -8) = 0x34c7bd1;
      memcpy(puVar7,puVar6,uVar24);
label_034c7be0:
      puVar6 = local_38;
      pIVar2 = method->klass->rgctx_data->_17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext->
               methodPointer;
      *(undefined8 *)(puVar23 + -8) = 0x34c7bf8;
      cVar8 = (*pIVar2)(puVar6);
      puVar6 = local_38;
      if (cVar8 == '\0') {
        puVar25 = (undefined1 *)0x0;
        goto label_034c7e06;
      }
      pMVar1 = method->klass->rgctx_data->_15_System_Collections_Generic_HashSet_Enumerator_T__get_Current;
      pIVar2 = pMVar1->methodPointer;
      pIVar3 = pMVar1->invoker_method;
      local_40 = puVar25;
      *(undefined8 *)(puVar23 + -8) = 0x34c7c24;
      (*pIVar3)(pIVar2,pMVar1,puVar6,&local_40,puVar25);
      uVar24 = local_48;
      puVar6 = local_60;
      *(undefined8 *)(puVar23 + -8) = 0x34c7c34;
      memcpy(puVar6,puVar25,uVar24);
      SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x34c7c58;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar23 + -8) = 0x34c7c62;
      pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
      *(undefined8 *)(puVar23 + -8) = 0x34c7c74;
      pSVar15 = System_Type__GetTypeFromHandle
                          ((System_RuntimeTypeHandle_o)(g_data_057b9bb8 + 0x20),(MethodInfo *)0x0);
      *(undefined8 *)(puVar23 + -8) = 0x34c7c81;
      bVar10 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
      uVar24 = local_48;
      puVar6 = local_60;
      if ((char)bVar10 == '\0') goto label_034c7d20;
      *(undefined8 *)(puVar23 + -8) = 0x34c7c99;
      memcpy(puVar25,puVar6,uVar24);
      pIVar20 = method->klass->rgctx_data->_10_T;
      *(undefined8 *)(puVar23 + -8) = 0x34c7cb0;
      plVar16 = (long *)il2cpp_runtime_helper_02304f30(pIVar20,puVar25);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x34c7ccb;
        il2cpp_runtime_helper_02337ed0();
      }
      if (plVar16 == (long *)0x0) {
label_034c7e72:
        *(undefined8 *)(puVar23 + -8) = 0x34c7e77;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        if (*(long *)(*plVar16 + 0x40) != *(long *)(g_data_057b9bb8 + 0x40)) {
          *(undefined8 *)(puVar23 + -8) = 0x34c7e72;
          il2cpp_runtime_helper_022b2fd0(plVar16);
          goto label_034c7e72;
        }
        *(undefined8 *)(puVar23 + -8) = 0x34c7cf2;
        piVar17 = (int32_t *)il2cpp_runtime_helper_02305440(plVar16);
        n = *piVar17;
        *(undefined8 *)(puVar23 + -8) = 0x34c7cfb;
        pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        pSVar13 = local_58;
        if (local_58 != (SimpleJSONFixed_JSONArray_o *)0x0) {
          pMVar1 = (local_58->klass->vtable)._21_Add.method;
          pIVar2 = (local_58->klass->vtable)._21_Add.methodPtr;
          *(undefined8 *)(puVar23 + -8) = 0x34c7d1b;
          (*pIVar2)(pSVar13,pSVar18,pMVar1);
          goto label_034c7be0;
        }
      }
      *(undefined8 *)(puVar23 + -8) = 0x34c7e7c;
      il2cpp_runtime_helper_022b2c90();
      goto label_034c7e7c;
    }
  }
label_034c7e89:
  *(undefined8 *)(puVar23 + -8) = 0x34c7e8e;
  il2cpp_runtime_helper_022b2c90();
  do {
    *(undefined8 *)(puVar23 + -8) = 0x34c7e96;
    auVar26 = il2cpp_runtime_helper_022fefe0(puVar25);
    if (auVar26._8_4_ != 1) {
      pSVar21 = method->klass->rgctx_data;
      pIVar20 = pSVar21->_14_System_Collections_Generic_HashSet_Enumerator_T_;
      if (((pIVar20->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)(puVar23 + -8) = 0x34c7fb6;
        pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pSVar21 = method->klass->rgctx_data;
      }
      puVar6 = local_38;
      puVar25 = local_50;
      pMVar1 = pSVar21->_19_System_Collections_Generic_HashSet_T__Contains;
      *(undefined8 *)(puVar23 + -8) = 0x34c7fde;
      il2cpp_runtime_helper_022b35c0(pIVar20,pMVar1,puVar25,puVar6,0,0);
      *(undefined8 *)(puVar23 + -8) = 0x34c7feb;
      _Unwind_Resume(auVar26._0_8_);
    }
    *(undefined8 *)(puVar23 + -8) = 0x34c7f82;
    puVar19 = (undefined8 *)__cxa_begin_catch(auVar26._0_8_);
    puVar25 = (undefined1 *)*puVar19;
    *(undefined8 *)(puVar23 + -8) = 0x34c7f8a;
    __cxa_end_catch();
label_034c7e06:
    pSVar21 = method->klass->rgctx_data;
    pIVar20 = pSVar21->_14_System_Collections_Generic_HashSet_Enumerator_T_;
    if (((pIVar20->_2).field_0x6d & 1) == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x34c7e23;
      pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
      pSVar21 = method->klass->rgctx_data;
    }
    puVar7 = local_38;
    puVar6 = local_50;
    pMVar1 = pSVar21->_19_System_Collections_Generic_HashSet_T__Contains;
    *(undefined8 *)(puVar23 + -8) = 0x34c7e4b;
    il2cpp_runtime_helper_022b35c0(pIVar20,pMVar1,puVar6,puVar7,0,0);
  } while (puVar25 != (undefined1 *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)local_58;
label_034c7d20:
  SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    *(undefined8 *)(puVar23 + -8) = 0x34c7d44;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar23 + -8) = 0x34c7d4e;
  pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
  *(undefined8 *)(puVar23 + -8) = 0x34c7d63;
  pSVar15 = System_Type__GetTypeFromHandle
                      ((System_RuntimeTypeHandle_o)&(g_data_057b9c00->_1).byval_arg,(MethodInfo *)0x0);
  *(undefined8 *)(puVar23 + -8) = 0x34c7d70;
  bVar10 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
  uVar24 = local_48;
  puVar6 = local_60;
  if ((char)bVar10 != '\0') {
    *(undefined8 *)(puVar23 + -8) = 0x34c7d88;
    memcpy(puVar25,puVar6,uVar24);
    pIVar20 = method->klass->rgctx_data->_10_T;
    *(undefined8 *)(puVar23 + -8) = 0x34c7d9f;
    pSVar14 = (System_Type_o *)il2cpp_runtime_helper_02304f30(pIVar20);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar23 + -8) = 0x34c7dba;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((pSVar14 == (System_Type_o *)0x0) || (pSVar14->klass == g_data_057b9c00)) {
      *(undefined8 *)(puVar23 + -8) = 0x34c7dd9;
      pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar14,(MethodInfo *)0x0);
      pSVar13 = local_58;
      if (local_58 != (SimpleJSONFixed_JSONArray_o *)0x0) {
        pMVar1 = (local_58->klass->vtable)._21_Add.method;
        pIVar2 = (local_58->klass->vtable)._21_Add.methodPtr;
        *(undefined8 *)(puVar23 + -8) = 0x34c7df9;
        (*pIVar2)(pSVar13,pSVar18,pMVar1);
        goto label_034c7be0;
      }
label_034c7e7c:
      *(undefined8 *)(puVar23 + -8) = 0x34c7e81;
      il2cpp_runtime_helper_022b2c90();
    }
    *(undefined8 *)(puVar23 + -8) = 0x34c7e89;
    il2cpp_runtime_helper_022b2fd0(pSVar14);
    goto label_034c7e89;
  }
  goto label_034c7be0;
}


// Settings.HashSetSetting<int>$$Contains
// il2cpp: bool Settings_HashSetSetting_int___Contains (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_33C73B0* method);
// 0x34c73b0

bool_conflict
Settings_HashSetSetting_int___Contains
          (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_33C73B0 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  long lVar2;
  System_Array_o *array;
  undefined8 *puVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long extraout_RDX_02;
  long unaff_RBX;
  int32_t item_00;
  undefined4 in_register_00000034;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar5 = CONCAT44(in_register_00000034,item);
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar4 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,item,
                       (MethodInfo_33D4DF0 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    return bVar4;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar4 = System_Collections_Generic_HashSet_int___AddIfNotPresent
                      (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),(int32_t)uVar5,
                       *(MethodInfo_33D7EC0 **)
                        (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x58
                                                      ) + 0x20) + 0xc0) + 0xa8));
    return bVar4;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar4 = System_Collections_Generic_HashSet_int___Remove
                      (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),(int32_t)uVar5,
                       *(MethodInfo_33D5090 **)(*(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0) + 0xa0));
    return bVar4;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    item_00 = (int32_t)uVar5;
    lStack_38 = 0x34c7482;
    bVar4 = System_Collections_Generic_HashSet_int___Contains
                      (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),item_00,
                       *(MethodInfo_33D4DF0 **)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 0x98));
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18);
    unaff_RBX = extraout_RDX_01;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      lVar6 = *(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0);
      if ((char)bVar4 != '\0') {
        bVar4 = System_Collections_Generic_HashSet_int___Remove
                          (pSVar1,item_00,*(MethodInfo_33D5090 **)(lVar6 + 0xa0));
        return bVar4;
      }
      bVar4 = System_Collections_Generic_HashSet_int___AddIfNotPresent
                        (pSVar1,item_00,
                         *(MethodInfo_33D7EC0 **)
                          (*(long *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x20) + 0xc0) + 0xa8));
      return bVar4;
    }
  }
  lVar6 = 0;
  lStack_38 = 0x34c74d4;
  bVar4 = il2cpp_runtime_helper_022b2c90();
  lStack_38 = unaff_RBX;
  if ((lVar6 != 0) && (lVar2 = *(long *)(lVar6 + 0x18), lVar2 != 0)) {
    if (0 < *(int32_t *)(lVar2 + 0x24)) {
      uVar5 = 0;
      uStack_40 = 0x34c7503;
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x18),0,*(int32_t *)(lVar2 + 0x24),(MethodInfo *)0x0);
      array = *(System_Array_o **)(lVar2 + 0x10);
      lVar6 = 0;
      if (array == (System_Array_o *)0x0) goto label_034c752d;
      uStack_40 = 0x34c7518;
      System_Array__Clear(array,0,*(int32_t *)&array[1].monitor,(MethodInfo *)0x0);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
      bVar4 = extraout_EAX;
    }
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    return bVar4;
  }
label_034c752d:
  uStack_40 = 0x34c7532;
  il2cpp_runtime_helper_022b2c90();
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(extraout_RDX_02 + 0x20) + 0xc0) + 8);
  uStack_40 = uVar5;
  (*(code *)puVar3[2])(*puVar3,puVar3,lVar6,&uStack_40);
  return (bool_conflict)uStack_40;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Contains
// il2cpp: bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_33C8000* method);
// 0x34c8000

bool_conflict
Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains
          (Settings_HashSetSetting_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
          MethodInfo_33C8000 *method)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  size_t __n;
  Il2CppRGCTXData *pIVar7;
  MethodInfo *pMVar8;
  Il2CppMethodPointer pIVar9;
  InvokerMethod pIVar10;
  bool_conflict bVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  long extraout_RDX;
  long extraout_RDX_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *extraout_RDX_01;
  undefined8 *puVar16;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar17;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar18;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Il2CppObject *__this_00;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long unaff_R13;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *unaff_R14;
  ulong uVar22;
  long alStack_178 [11];
  undefined1 auStack_120 [80];
  long lStack_d0;
  undefined1 uStack_c1;
  long alStack_c0 [6];
  undefined1 auStack_90 [80];
  undefined8 *local_40;
  undefined1 local_31;
  
  pvVar15 = item.monitor;
  pUVar17 = item.klass;
  lVar4 = *(long *)(*(long *)((long)pvVar15 + 0x20) + 0xc0);
  uVar22 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  lVar20 = -(uVar22 + 0xf & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(auStack_90 + lVar20 + 0x48);
  puVar13 = (undefined8 *)0x0;
  pUVar18 = pUVar17;
  auStack_90._72_8_ = pUVar17;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar13 = *(undefined8 **)(lVar4 + 0x60);
    uVar12 = *puVar13;
    pcVar5 = (code *)puVar13[2];
    *(undefined8 *)(auStack_90 + lVar20 + 0x40) = 0x34c805e;
    (*pcVar5)(uVar12,puVar13,__this,0,&local_40);
    puVar21 = local_40;
    unaff_R13 = *(long *)((long)pvVar15 + 0x20);
    pUVar18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_90 + 0x48);
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar18 = pUVar17;
    }
    *(undefined8 *)(auStack_90 + lVar20 + 0x40) = 0x34c8089;
    puVar13 = puVar16;
    memcpy(puVar16,pUVar18,uVar22);
    pvVar15 = (void *)0x0;
    unaff_R14 = pUVar17;
    if (local_40 != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0x98);
      uVar12 = *puVar13;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar16 = (undefined8 *)*puVar16;
      }
      pcVar5 = (code *)puVar13[2];
      local_40 = puVar16;
      *(undefined8 *)(auStack_90 + lVar20 + 0x40) = 0x34c80be;
      uVar12 = (*pcVar5)(uVar12,puVar13,puVar21,&local_40,&local_31);
      return (bool_conflict)CONCAT71((int7)((ulong)uVar12 >> 8),local_31);
    }
  }
  *(undefined8 *)(auStack_90 + lVar20 + 0x40) = 0x34c80d5;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)(auStack_90 + lVar20 + 0x40) = &stack0xfffffffffffffff8;
  *(ulong *)(auStack_90 + lVar20 + 0x38) = uVar22;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(auStack_90 + lVar20 + 0x30) = unaff_R14;
  *(long *)(auStack_90 + lVar20 + 0x28) = unaff_R13;
  *(void **)(auStack_90 + lVar20 + 0x20) = pvVar15;
  *(undefined8 **)(auStack_90 + lVar20 + 0x18) = puVar16;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(auStack_90 + lVar20) = pUVar18;
  lVar4 = *(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0);
  uVar22 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  puVar21 = (undefined8 *)(auStack_90 + (lVar20 - (uVar22 + 0xf & 0xfffffffffffffff0)));
  puVar16 = (undefined8 *)0x0;
  pUVar17 = pUVar18;
  lVar19 = extraout_RDX;
  if (puVar13 != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(lVar4 + 0x60);
    uVar12 = *puVar16;
    pcVar5 = (code *)puVar16[2];
    puVar21[-1] = 0x34c813e;
    (*pcVar5)(uVar12,puVar16,puVar13,0,auStack_90 + lVar20 + 8);
    unaff_R13 = *(long *)(extraout_RDX + 0x20);
    lVar4 = *(long *)(auStack_90 + lVar20 + 8);
    pUVar17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_90 + lVar20);
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar17 = pUVar18;
    }
    puVar21[-1] = 0x34c8169;
    puVar16 = puVar21;
    memcpy(puVar21,pUVar17,uVar22);
    lVar19 = 0;
    unaff_R14 = pUVar18;
    if (lVar4 != 0) {
      puVar16 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0x58);
      uVar12 = *puVar16;
      puVar13 = puVar21;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar13 = (undefined8 *)*puVar21;
      }
      *(undefined8 **)(auStack_90 + lVar20 + 8) = puVar13;
      pcVar5 = (code *)puVar16[2];
      puVar21[-1] = 0x34c819b;
      bVar11 = (*pcVar5)(uVar12,puVar16,lVar4,auStack_90 + lVar20 + 8,auStack_90 + lVar20 + 0x17);
      return bVar11;
    }
  }
  puVar21[-1] = 0x34c81af;
  il2cpp_runtime_helper_022b2c90();
  puVar21[-1] = auStack_90 + lVar20 + 0x40;
  puVar21[-2] = uVar22;
  puVar21[-3] = unaff_R14;
  puVar21[-4] = unaff_R13;
  puVar21[-5] = lVar19;
  puVar21[-6] = puVar21;
  puVar21[-9] = pUVar17;
  lVar4 = *(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0);
  uVar22 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  __dest = (undefined8 *)((long)puVar21 + (-0x48 - (uVar22 + 0xf & 0xfffffffffffffff0)));
  puVar13 = (undefined8 *)0x0;
  pUVar18 = pUVar17;
  lVar20 = extraout_RDX_00;
  if (puVar16 != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(lVar4 + 0x60);
    uVar12 = *puVar13;
    pcVar5 = (code *)puVar13[2];
    __dest[-1] = 0x34c820e;
    (*pcVar5)(uVar12,puVar13,puVar16,0,puVar21 + -8);
    unaff_R13 = *(long *)(extraout_RDX_00 + 0x20);
    lVar4 = puVar21[-8];
    pUVar18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(puVar21 + -9);
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar18 = pUVar17;
    }
    __dest[-1] = 0x34c8239;
    puVar13 = __dest;
    memcpy(__dest,pUVar18,uVar22);
    lVar20 = 0;
    unaff_R14 = pUVar17;
    if (lVar4 != 0) {
      puVar16 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0xa0);
      uVar12 = *puVar16;
      puVar13 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar13 = (undefined8 *)*__dest;
      }
      puVar21[-8] = puVar13;
      pcVar5 = (code *)puVar16[2];
      __dest[-1] = 0x34c826e;
      bVar11 = (*pcVar5)(uVar12,puVar16,lVar4,puVar21 + -8,(long)puVar21 + -0x31);
      return bVar11;
    }
  }
  __dest[-1] = 0x34c8282;
  il2cpp_runtime_helper_022b2c90();
  __dest[-1] = puVar21 + -1;
  __dest[-2] = uVar22;
  __dest[-3] = unaff_R14;
  __dest[-4] = unaff_R13;
  __dest[-5] = lVar20;
  __dest[-6] = __dest;
  __dest[-9] = pUVar18;
  lVar4 = *(long *)((long)(extraout_RDX_01->_1).byval_arg.data + 0xc0);
  uVar2 = *(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  uVar22 = (ulong)uVar2;
  puVar21 = (undefined8 *)((long)__dest + (-0x68 - (uVar22 + 0xf & 0xfffffffffffffff0)));
  puVar16 = (undefined8 *)0x0;
  pUVar17 = extraout_RDX_01;
  __src = pUVar18;
  if (puVar13 != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(lVar4 + 0x60);
    uVar12 = *puVar16;
    __dest[-10] = puVar13;
    pcVar5 = (code *)puVar16[2];
    puVar21[-1] = 0x34c82f2;
    (*pcVar5)(uVar12,puVar16,puVar13,0,__dest + -8);
    __dest[-0xb] = extraout_RDX_01;
    pvVar15 = (extraout_RDX_01->_1).byval_arg.data;
    iVar3 = *(int *)(*(long *)(*(long *)((long)pvVar15 + 0xc0) + 0x50) + 0x28);
    lVar4 = __dest[-8];
    __dest[-0xd] = pUVar18;
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(__dest + -9);
    if (iVar3 < 0) {
      __src = pUVar18;
    }
    puVar21[-1] = 0x34c8324;
    puVar16 = puVar21;
    memcpy(puVar21,__src,uVar22);
    pUVar17 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
    unaff_R14 = pUVar18;
    if (lVar4 != 0) {
      unaff_R14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(__dest + -9);
      __dest[-0xc] = uVar22;
      lVar20 = *(long *)((long)pvVar15 + 0xc0);
      puVar16 = *(undefined8 **)(lVar20 + 0x98);
      uVar12 = *puVar16;
      puVar13 = puVar21;
      if (-1 < *(int *)(*(long *)(lVar20 + 0x50) + 0x28)) {
        puVar13 = (undefined8 *)*puVar21;
      }
      __dest[-8] = puVar13;
      pcVar5 = (code *)puVar16[2];
      puVar21[-1] = 0x34c8369;
      (*pcVar5)(uVar12,puVar16,lVar4,__dest + -8,(long)__dest + -0x31);
      cVar1 = *(char *)((long)__dest + -0x31);
      uVar22 = (ulong)CONCAT31((int3)(uVar2 >> 8),cVar1);
      lVar4 = __dest[-0xb];
      puVar16 = *(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x60);
      uVar12 = *puVar16;
      uVar6 = __dest[-10];
      pcVar5 = (code *)puVar16[2];
      puVar21[-1] = 0x34c8390;
      (*pcVar5)(uVar12,puVar16,uVar6,0,__dest + -8);
      pvVar15 = (void *)__dest[-8];
      pUVar17 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(lVar4 + 0x20);
      __src = unaff_R14;
      if (*(int *)&(pUVar17->rgctx_data[10].method)->return_type < 0) {
        __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest[-0xd];
      }
      __n = __dest[-0xc];
      puVar21[-1] = 0x34c83bb;
      puVar16 = puVar21;
      memcpy(puVar21,__src,__n);
      if (pvVar15 != (void *)0x0) {
        pIVar7 = pUVar17->rgctx_data;
        if (cVar1 == '\0') {
          pMVar8 = pIVar7[0xb].method;
          pIVar9 = pMVar8->methodPointer;
          iVar3 = *(int *)&(pIVar7[10].method)->return_type;
        }
        else {
          pMVar8 = pIVar7[0x14].method;
          pIVar9 = pMVar8->methodPointer;
          iVar3 = *(int *)&(pIVar7[10].method)->return_type;
        }
        puVar16 = puVar21;
        if (-1 < iVar3) {
          puVar16 = (undefined8 *)*puVar21;
        }
        __dest[-8] = puVar16;
        pIVar10 = pMVar8->invoker_method;
        puVar21[-1] = 0x34c83f6;
        bVar11 = (*pIVar10)(pIVar9,pMVar8,pvVar15,(void **)(__dest + -8),(void *)((long)__dest + -0x31));
        return bVar11;
      }
    }
  }
  puVar21[-1] = 0x34c841d;
  il2cpp_runtime_helper_022b2c90();
  puVar21[-1] = pUVar17;
  pUVar18 = __src;
  if (puVar16 != (undefined8 *)0x0) {
    pUVar18 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)
               (*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0x60);
    pvVar15 = (pUVar18->_1).image;
    pcVar5 = (code *)(pUVar18->_1).name;
    puVar21[-4] = 0x34c844c;
    (*pcVar5)(pvVar15,pUVar18,puVar16,0,puVar21 + -2);
    pUVar17 = __src;
    if (puVar21[-2] != 0) {
      pcVar5 = (code *)**(undefined8 **)(*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0xa8);
      puVar21[-4] = 0x34c846a;
      bVar11 = (*pcVar5)();
      return bVar11;
    }
  }
  __this_00 = (Il2CppObject *)0x0;
  puVar21[-4] = 0x34c8475;
  il2cpp_runtime_helper_022b2c90();
  puVar21[-4] = uVar22;
  puVar21[-5] = unaff_R14;
  puVar21[-6] = pUVar17;
  uVar12 = **(undefined8 **)((long)(pUVar18->_1).byval_arg.data + 0xc0);
  puVar21[-7] = 0x34c849e;
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar12);
  lVar4 = *(long *)(*(long *)((long)(pUVar18->_1).byval_arg.data + 0xc0) + 0x18);
  puVar21[-7] = 0x34c84ba;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (pIVar14 == (Il2CppClass *)0x0) {
    uVar12 = **(undefined8 **)(*(long *)(lVar4 + 0x20) + 0xc0);
    puVar21[-7] = 0x34c84d2;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar12);
  }
  __this_00[3].klass = pIVar14;
  puVar21[-7] = 0x34c84e5;
  bVar11 = il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar14);
  __this_00[2].klass = (Il2CppClass *)0x0;
  *(undefined4 *)&__this_00[2].monitor = 0xffffffff;
  *(undefined4 *)&__this_00[3].monitor = 0;
  return bVar11;
}


// Settings.HashSetSetting<int>$$Add
// il2cpp: void Settings_HashSetSetting_int___Add (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_33C73E0* method);
// 0x34c73e0

void Settings_HashSetSetting_int___Add
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_33C73E0 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  long lVar2;
  System_Array_o *array;
  undefined8 *puVar3;
  bool_conflict bVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long extraout_RDX_01;
  long unaff_RBX;
  int32_t item_00;
  undefined4 in_register_00000034;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_38;
  long lStack_30;
  
  uVar5 = CONCAT44(in_register_00000034,item);
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet_int___AddIfNotPresent
              (pSVar1,item,
               (MethodInfo_33D7EC0 *)
               method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->klass->rgctx_data
               [0x15].method);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet_int___Remove
              (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),(int32_t)uVar5,
               *(MethodInfo_33D5090 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0xa0));
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    item_00 = (int32_t)uVar5;
    lStack_30 = 0x34c7482;
    bVar4 = System_Collections_Generic_HashSet_int___Contains
                      (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),item_00,
                       *(MethodInfo_33D4DF0 **)(*(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0) + 0x98));
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18);
    unaff_RBX = extraout_RDX_00;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      lVar6 = *(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0);
      if ((char)bVar4 != '\0') {
        System_Collections_Generic_HashSet_int___Remove(pSVar1,item_00,*(MethodInfo_33D5090 **)(lVar6 + 0xa0))
        ;
        return;
      }
      System_Collections_Generic_HashSet_int___AddIfNotPresent
                (pSVar1,item_00,
                 *(MethodInfo_33D7EC0 **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x20) + 0xc0) + 0xa8))
      ;
      return;
    }
  }
  lVar6 = 0;
  lStack_30 = 0x34c74d4;
  il2cpp_runtime_helper_022b2c90();
  lStack_30 = unaff_RBX;
  if ((lVar6 != 0) && (lVar2 = *(long *)(lVar6 + 0x18), lVar2 != 0)) {
    if (0 < *(int32_t *)(lVar2 + 0x24)) {
      uVar5 = 0;
      uStack_38 = 0x34c7503;
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x18),0,*(int32_t *)(lVar2 + 0x24),(MethodInfo *)0x0);
      array = *(System_Array_o **)(lVar2 + 0x10);
      lVar6 = 0;
      if (array == (System_Array_o *)0x0) goto label_034c752d;
      uStack_38 = 0x34c7518;
      System_Array__Clear(array,0,*(int32_t *)&array[1].monitor,(MethodInfo *)0x0);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
    }
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    return;
  }
label_034c752d:
  uStack_38 = 0x34c7532;
  il2cpp_runtime_helper_022b2c90();
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(extraout_RDX_01 + 0x20) + 0xc0) + 8);
  uStack_38 = uVar5;
  (*(code *)puVar3[2])(*puVar3,puVar3,lVar6,&uStack_38);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Add
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_33C80E0* method);
// 0x34c80e0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_33C80E0 *method)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  size_t __n;
  Il2CppRGCTXData *pIVar9;
  MethodInfo *pMVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  long lVar13;
  void *pvVar14;
  undefined8 *puVar15;
  Il2CppClass *pIVar16;
  void *pvVar17;
  long extraout_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *extraout_RDX_00;
  undefined8 *puVar18;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar19;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar20;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Il2CppObject *__this_00;
  long lVar21;
  undefined8 *__dest_00;
  long unaff_R13;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *unaff_R14;
  ulong uVar22;
  long alStack_130 [11];
  undefined1 auStack_d8 [80];
  long lStack_88;
  undefined1 uStack_79;
  long alStack_78 [5];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_48;
  undefined8 *puStack_40;
  
  pvVar17 = item.monitor;
  pUVar20 = item.klass;
  lVar4 = *(long *)(*(long *)((long)pvVar17 + 0x20) + 0xc0);
  uVar22 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  lVar7 = -(uVar22 + 0xf & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)((long)&stack0xffffffffffffffb8 + lVar7);
  puVar15 = (undefined8 *)0x0;
  pUVar19 = pUVar20;
  pUStack_48 = pUVar20;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar15 = *(undefined8 **)(lVar4 + 0x60);
    uVar5 = *puVar15;
    pcVar6 = (code *)puVar15[2];
    *(undefined8 *)((long)&pUStack_50 + lVar7) = 0x34c813e;
    (*pcVar6)(uVar5,puVar15,__this,0,&stack0xffffffffffffffc0);
    pvVar14 = puStack_40;
    unaff_R13 = *(long *)((long)pvVar17 + 0x20);
    pUVar19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar19 = pUVar20;
    }
    *(undefined8 *)((long)&pUStack_50 + lVar7) = 0x34c8169;
    puVar15 = puVar18;
    memcpy(puVar18,pUVar19,uVar22);
    pvVar17 = (void *)0x0;
    unaff_R14 = pUVar20;
    if (puStack_40 != (void *)0x0) {
      puVar15 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0x58);
      uVar5 = *puVar15;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar18 = (undefined8 *)*puVar18;
      }
      pcVar6 = (code *)puVar15[2];
      puStack_40 = puVar18;
      *(undefined8 *)((long)&pUStack_50 + lVar7) = 0x34c819b;
      (*pcVar6)(uVar5,puVar15,pvVar14,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      return;
    }
  }
  *(undefined8 *)((long)&pUStack_50 + lVar7) = 0x34c81af;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)((long)&pUStack_50 + lVar7) = &stack0xfffffffffffffff8;
  *(ulong *)((long)alStack_78 + lVar7 + 0x20) = uVar22;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_78 + lVar7 + 0x18) = unaff_R14;
  *(long *)((long)alStack_78 + lVar7 + 0x10) = unaff_R13;
  *(void **)((long)alStack_78 + lVar7 + 8) = pvVar17;
  *(undefined8 **)((long)alStack_78 + lVar7) = puVar18;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(auStack_d8 + lVar7 + 0x48) = pUVar19;
  lVar4 = *(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0);
  uVar22 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  lVar13 = lVar7 - (uVar22 + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)(auStack_d8 + lVar13 + 0x48);
  puVar18 = (undefined8 *)0x0;
  pUVar20 = pUVar19;
  lVar21 = extraout_RDX;
  if (puVar15 != (undefined8 *)0x0) {
    puVar18 = *(undefined8 **)(lVar4 + 0x60);
    uVar5 = *puVar18;
    pcVar6 = (code *)puVar18[2];
    __dest[-1] = 0x34c820e;
    (*pcVar6)(uVar5,puVar18,puVar15,0,(long)&lStack_88 + lVar7);
    unaff_R13 = *(long *)(extraout_RDX + 0x20);
    lVar4 = *(long *)((long)&lStack_88 + lVar7);
    pUVar20 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_d8 + lVar7 + 0x48);
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar20 = pUVar19;
    }
    __dest[-1] = 0x34c8239;
    puVar18 = __dest;
    memcpy(__dest,pUVar20,uVar22);
    lVar21 = 0;
    unaff_R14 = pUVar19;
    if (lVar4 != 0) {
      puVar18 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0xa0);
      uVar5 = *puVar18;
      puVar15 = __dest;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar15 = (undefined8 *)*__dest;
      }
      *(undefined8 **)((long)&lStack_88 + lVar7) = puVar15;
      pcVar6 = (code *)puVar18[2];
      __dest[-1] = 0x34c826e;
      (*pcVar6)(uVar5,puVar18,lVar4,(long)&lStack_88 + lVar7,&uStack_79 + lVar7);
      return;
    }
  }
  __dest[-1] = 0x34c8282;
  il2cpp_runtime_helper_022b2c90();
  __dest[-1] = (long)&pUStack_50 + lVar7;
  __dest[-2] = uVar22;
  __dest[-3] = unaff_R14;
  __dest[-4] = unaff_R13;
  __dest[-5] = lVar21;
  __dest[-6] = __dest;
  __dest[-9] = pUVar20;
  lVar4 = *(long *)((long)(extraout_RDX_00->_1).byval_arg.data + 0xc0);
  uVar2 = *(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  uVar22 = (ulong)uVar2;
  __dest_00 = (undefined8 *)((long)__dest + (-0x68 - (uVar22 + 0xf & 0xfffffffffffffff0)));
  puVar15 = (undefined8 *)0x0;
  pUVar19 = extraout_RDX_00;
  __src = pUVar20;
  if (puVar18 != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(lVar4 + 0x60);
    uVar5 = *puVar15;
    __dest[-10] = puVar18;
    pcVar6 = (code *)puVar15[2];
    __dest_00[-1] = 0x34c82f2;
    (*pcVar6)(uVar5,puVar15,puVar18,0,__dest + -8);
    __dest[-0xb] = extraout_RDX_00;
    pvVar17 = (extraout_RDX_00->_1).byval_arg.data;
    iVar3 = *(int *)(*(long *)(*(long *)((long)pvVar17 + 0xc0) + 0x50) + 0x28);
    lVar4 = __dest[-8];
    __dest[-0xd] = pUVar20;
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(__dest + -9);
    if (iVar3 < 0) {
      __src = pUVar20;
    }
    __dest_00[-1] = 0x34c8324;
    puVar15 = __dest_00;
    memcpy(__dest_00,__src,uVar22);
    pUVar19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
    unaff_R14 = pUVar20;
    if (lVar4 != 0) {
      unaff_R14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(__dest + -9);
      __dest[-0xc] = uVar22;
      lVar7 = *(long *)((long)pvVar17 + 0xc0);
      puVar18 = *(undefined8 **)(lVar7 + 0x98);
      uVar5 = *puVar18;
      puVar15 = __dest_00;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x50) + 0x28)) {
        puVar15 = (undefined8 *)*__dest_00;
      }
      __dest[-8] = puVar15;
      pcVar6 = (code *)puVar18[2];
      __dest_00[-1] = 0x34c8369;
      (*pcVar6)(uVar5,puVar18,lVar4,__dest + -8,auStack_d8 + lVar13 + 0x17);
      cVar1 = auStack_d8[lVar13 + 0x17];
      uVar22 = (ulong)CONCAT31((int3)(uVar2 >> 8),cVar1);
      lVar4 = __dest[-0xb];
      puVar18 = *(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x60);
      uVar5 = *puVar18;
      uVar8 = __dest[-10];
      pcVar6 = (code *)puVar18[2];
      __dest_00[-1] = 0x34c8390;
      (*pcVar6)(uVar5,puVar18,uVar8,0,__dest + -8);
      pvVar17 = (void *)__dest[-8];
      pUVar19 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(lVar4 + 0x20);
      __src = unaff_R14;
      if (*(int *)&(pUVar19->rgctx_data[10].method)->return_type < 0) {
        __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)__dest[-0xd];
      }
      __n = __dest[-0xc];
      __dest_00[-1] = 0x34c83bb;
      puVar15 = __dest_00;
      memcpy(__dest_00,__src,__n);
      if (pvVar17 != (void *)0x0) {
        pIVar9 = pUVar19->rgctx_data;
        if (cVar1 == '\0') {
          pMVar10 = pIVar9[0xb].method;
          pIVar11 = pMVar10->methodPointer;
          iVar3 = *(int *)&(pIVar9[10].method)->return_type;
        }
        else {
          pMVar10 = pIVar9[0x14].method;
          pIVar11 = pMVar10->methodPointer;
          iVar3 = *(int *)&(pIVar9[10].method)->return_type;
        }
        puVar18 = __dest_00;
        if (-1 < iVar3) {
          puVar18 = (undefined8 *)*__dest_00;
        }
        __dest[-8] = puVar18;
        pIVar12 = pMVar10->invoker_method;
        __dest_00[-1] = 0x34c83f6;
        (*pIVar12)(pIVar11,pMVar10,pvVar17,(void **)(__dest + -8),auStack_d8 + lVar13 + 0x17);
        return;
      }
    }
  }
  __dest_00[-1] = 0x34c841d;
  il2cpp_runtime_helper_022b2c90();
  __dest_00[-1] = pUVar19;
  pUVar20 = __src;
  if (puVar15 != (undefined8 *)0x0) {
    pUVar20 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)
               (*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0x60);
    pvVar17 = (pUVar20->_1).image;
    pcVar6 = (code *)(pUVar20->_1).name;
    __dest_00[-4] = 0x34c844c;
    (*pcVar6)(pvVar17,pUVar20,puVar15,0,__dest_00 + -2);
    pUVar19 = __src;
    if (__dest_00[-2] != 0) {
      pcVar6 = (code *)**(undefined8 **)(*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0xa8);
      __dest_00[-4] = 0x34c846a;
      (*pcVar6)();
      return;
    }
  }
  __this_00 = (Il2CppObject *)0x0;
  __dest_00[-4] = 0x34c8475;
  il2cpp_runtime_helper_022b2c90();
  __dest_00[-4] = uVar22;
  __dest_00[-5] = unaff_R14;
  __dest_00[-6] = pUVar19;
  uVar5 = **(undefined8 **)((long)(pUVar20->_1).byval_arg.data + 0xc0);
  __dest_00[-7] = 0x34c849e;
  pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar5);
  lVar4 = *(long *)(*(long *)((long)(pUVar20->_1).byval_arg.data + 0xc0) + 0x18);
  __dest_00[-7] = 0x34c84ba;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (pIVar16 == (Il2CppClass *)0x0) {
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0x20) + 0xc0);
    __dest_00[-7] = 0x34c84d2;
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar5);
  }
  __this_00[3].klass = pIVar16;
  __dest_00[-7] = 0x34c84e5;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar16);
  __this_00[2].klass = (Il2CppClass *)0x0;
  *(undefined4 *)&__this_00[2].monitor = 0xffffffff;
  *(undefined4 *)&__this_00[3].monitor = 0;
  return;
}


// Settings.HashSetSetting<int>$$Remove
// il2cpp: void Settings_HashSetSetting_int___Remove (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_33C7420* method);
// 0x34c7420

void Settings_HashSetSetting_int___Remove
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_33C7420 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  long lVar2;
  System_Array_o *array;
  undefined8 *puVar3;
  bool_conflict bVar4;
  long extraout_RDX;
  long extraout_RDX_00;
  long unaff_RBX;
  int32_t item_00;
  undefined4 in_register_00000034;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_30;
  long lStack_28;
  
  uVar5 = CONCAT44(in_register_00000034,item);
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet_int___Remove
              (pSVar1,item,
               (MethodInfo_33D5090 *)
               method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear);
    return;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  if ((lVar6 != 0) &&
     (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18) !=
      (System_Collections_Generic_HashSet_int__o *)0x0)) {
    item_00 = (int32_t)uVar5;
    lStack_28 = 0x34c7482;
    bVar4 = System_Collections_Generic_HashSet_int___Contains
                      (*(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18),item_00,
                       *(MethodInfo_33D4DF0 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x98));
    pSVar1 = *(System_Collections_Generic_HashSet_int__o **)(lVar6 + 0x18);
    unaff_RBX = extraout_RDX;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      lVar6 = *(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0);
      if ((char)bVar4 != '\0') {
        System_Collections_Generic_HashSet_int___Remove(pSVar1,item_00,*(MethodInfo_33D5090 **)(lVar6 + 0xa0))
        ;
        return;
      }
      System_Collections_Generic_HashSet_int___AddIfNotPresent
                (pSVar1,item_00,
                 *(MethodInfo_33D7EC0 **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x58) + 0x20) + 0xc0) + 0xa8))
      ;
      return;
    }
  }
  lVar6 = 0;
  lStack_28 = 0x34c74d4;
  il2cpp_runtime_helper_022b2c90();
  lStack_28 = unaff_RBX;
  if ((lVar6 != 0) && (lVar2 = *(long *)(lVar6 + 0x18), lVar2 != 0)) {
    if (0 < *(int32_t *)(lVar2 + 0x24)) {
      uVar5 = 0;
      local_30 = 0x34c7503;
      System_Array__Clear(*(System_Array_o **)(lVar2 + 0x18),0,*(int32_t *)(lVar2 + 0x24),(MethodInfo *)0x0);
      array = *(System_Array_o **)(lVar2 + 0x10);
      lVar6 = 0;
      if (array == (System_Array_o *)0x0) goto label_034c752d;
      local_30 = 0x34c7518;
      System_Array__Clear(array,0,*(int32_t *)&array[1].monitor,(MethodInfo *)0x0);
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
    }
    *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
    return;
  }
label_034c752d:
  local_30 = 0x34c7532;
  il2cpp_runtime_helper_022b2c90();
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0) + 8);
  local_30 = uVar5;
  (*(code *)puVar3[2])(*puVar3,puVar3,lVar6,&local_30);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Remove
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_33C81B0* method);
// 0x34c81b0

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_33C81B0 *method)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  size_t __n;
  Il2CppRGCTXData *pIVar9;
  MethodInfo *pMVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  long lVar13;
  undefined8 *puVar14;
  Il2CppClass *pIVar15;
  void *pvVar16;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *extraout_RDX;
  undefined8 *puVar17;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar18;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar19;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  Il2CppObject *__this_00;
  undefined8 *puVar20;
  long unaff_R13;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *unaff_R14;
  ulong uVar21;
  long alStack_e8 [11];
  undefined1 auStack_90 [80];
  undefined8 *puStack_40;
  undefined1 uStack_31;
  
  pvVar16 = item.monitor;
  pUVar18 = item.klass;
  lVar4 = *(long *)(*(long *)((long)pvVar16 + 0x20) + 0xc0);
  uVar21 = (ulong)*(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  lVar13 = -(uVar21 + 0xf & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(auStack_90 + lVar13 + 0x48);
  puVar14 = (undefined8 *)0x0;
  pUVar19 = pUVar18;
  auStack_90._72_8_ = pUVar18;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar14 = *(undefined8 **)(lVar4 + 0x60);
    uVar5 = *puVar14;
    pcVar6 = (code *)puVar14[2];
    *(undefined8 *)(auStack_90 + lVar13 + 0x40) = 0x34c820e;
    (*pcVar6)(uVar5,puVar14,__this,0,&puStack_40);
    puVar20 = puStack_40;
    unaff_R13 = *(long *)((long)pvVar16 + 0x20);
    pUVar19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_90 + 0x48);
    if (*(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28) < 0) {
      pUVar19 = pUVar18;
    }
    *(undefined8 *)(auStack_90 + lVar13 + 0x40) = 0x34c8239;
    puVar14 = puVar17;
    memcpy(puVar17,pUVar19,uVar21);
    pvVar16 = (void *)0x0;
    unaff_R14 = pUVar18;
    if (puStack_40 != (undefined8 *)0x0) {
      puVar14 = *(undefined8 **)(*(long *)(unaff_R13 + 0xc0) + 0xa0);
      uVar5 = *puVar14;
      if (-1 < *(int *)(*(long *)(*(long *)(unaff_R13 + 0xc0) + 0x50) + 0x28)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      pcVar6 = (code *)puVar14[2];
      puStack_40 = puVar17;
      *(undefined8 *)(auStack_90 + lVar13 + 0x40) = 0x34c826e;
      (*pcVar6)(uVar5,puVar14,puVar20,&puStack_40,&uStack_31);
      return;
    }
  }
  *(undefined8 *)(auStack_90 + lVar13 + 0x40) = 0x34c8282;
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 **)(auStack_90 + lVar13 + 0x40) = &stack0xfffffffffffffff8;
  *(ulong *)(auStack_90 + lVar13 + 0x38) = uVar21;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(auStack_90 + lVar13 + 0x30) = unaff_R14;
  *(long *)(auStack_90 + lVar13 + 0x28) = unaff_R13;
  *(void **)(auStack_90 + lVar13 + 0x20) = pvVar16;
  *(undefined8 **)(auStack_90 + lVar13 + 0x18) = puVar17;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(auStack_90 + lVar13) = pUVar19;
  lVar4 = *(long *)((long)(extraout_RDX->_1).byval_arg.data + 0xc0);
  uVar2 = *(uint *)(*(long *)(lVar4 + 0x50) + 0xfc);
  uVar21 = (ulong)uVar2;
  puVar20 = (undefined8 *)((long)alStack_e8 + (lVar13 - (uVar21 + 0xf & 0xfffffffffffffff0)) + 0x38);
  puVar17 = (undefined8 *)0x0;
  pUVar18 = extraout_RDX;
  __src = pUVar19;
  if (puVar14 != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(lVar4 + 0x60);
    uVar5 = *puVar17;
    *(undefined8 **)((long)alStack_e8 + lVar13 + 0x50) = puVar14;
    pcVar6 = (code *)puVar17[2];
    puVar20[-1] = 0x34c82f2;
    (*pcVar6)(uVar5,puVar17,puVar14,0,auStack_90 + lVar13 + 8);
    *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_e8 + lVar13 + 0x48) =
         extraout_RDX;
    pvVar16 = (extraout_RDX->_1).byval_arg.data;
    iVar3 = *(int *)(*(long *)(*(long *)((long)pvVar16 + 0xc0) + 0x50) + 0x28);
    lVar4 = *(long *)(auStack_90 + lVar13 + 8);
    *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_e8 + lVar13 + 0x38) = pUVar19;
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_90 + lVar13);
    if (iVar3 < 0) {
      __src = pUVar19;
    }
    puVar20[-1] = 0x34c8324;
    puVar17 = puVar20;
    memcpy(puVar20,__src,uVar21);
    pUVar18 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
    unaff_R14 = pUVar19;
    if (lVar4 != 0) {
      unaff_R14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(auStack_90 + lVar13);
      *(ulong *)((long)alStack_e8 + lVar13 + 0x40) = uVar21;
      lVar7 = *(long *)((long)pvVar16 + 0xc0);
      puVar17 = *(undefined8 **)(lVar7 + 0x98);
      uVar5 = *puVar17;
      puVar14 = puVar20;
      if (-1 < *(int *)(*(long *)(lVar7 + 0x50) + 0x28)) {
        puVar14 = (undefined8 *)*puVar20;
      }
      *(undefined8 **)(auStack_90 + lVar13 + 8) = puVar14;
      pcVar6 = (code *)puVar17[2];
      puVar20[-1] = 0x34c8369;
      (*pcVar6)(uVar5,puVar17,lVar4,auStack_90 + lVar13 + 8,auStack_90 + lVar13 + 0x17);
      cVar1 = auStack_90[lVar13 + 0x17];
      uVar21 = (ulong)CONCAT31((int3)(uVar2 >> 8),cVar1);
      lVar4 = *(long *)((long)alStack_e8 + lVar13 + 0x48);
      puVar17 = *(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x60);
      uVar5 = *puVar17;
      uVar8 = *(undefined8 *)((long)alStack_e8 + lVar13 + 0x50);
      pcVar6 = (code *)puVar17[2];
      puVar20[-1] = 0x34c8390;
      (*pcVar6)(uVar5,puVar17,uVar8,0,auStack_90 + lVar13 + 8);
      pvVar16 = *(void **)(auStack_90 + lVar13 + 8);
      pUVar18 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)(lVar4 + 0x20);
      __src = unaff_R14;
      if (*(int *)&(pUVar18->rgctx_data[10].method)->return_type < 0) {
        __src = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_e8 + lVar13 + 0x38)
        ;
      }
      __n = *(size_t *)((long)alStack_e8 + lVar13 + 0x40);
      puVar20[-1] = 0x34c83bb;
      puVar17 = puVar20;
      memcpy(puVar20,__src,__n);
      if (pvVar16 != (void *)0x0) {
        pIVar9 = pUVar18->rgctx_data;
        if (cVar1 == '\0') {
          pMVar10 = pIVar9[0xb].method;
          pIVar11 = pMVar10->methodPointer;
          iVar3 = *(int *)&(pIVar9[10].method)->return_type;
        }
        else {
          pMVar10 = pIVar9[0x14].method;
          pIVar11 = pMVar10->methodPointer;
          iVar3 = *(int *)&(pIVar9[10].method)->return_type;
        }
        puVar17 = puVar20;
        if (-1 < iVar3) {
          puVar17 = (undefined8 *)*puVar20;
        }
        *(undefined8 **)(auStack_90 + lVar13 + 8) = puVar17;
        pIVar12 = pMVar10->invoker_method;
        puVar20[-1] = 0x34c83f6;
        (*pIVar12)(pIVar11,pMVar10,pvVar16,(void **)(auStack_90 + lVar13 + 8),auStack_90 + lVar13 + 0x17);
        return;
      }
    }
  }
  puVar20[-1] = 0x34c841d;
  il2cpp_runtime_helper_022b2c90();
  puVar20[-1] = pUVar18;
  pUVar19 = __src;
  if (puVar17 != (undefined8 *)0x0) {
    pUVar19 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)
               (*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0x60);
    pvVar16 = (pUVar19->_1).image;
    pcVar6 = (code *)(pUVar19->_1).name;
    puVar20[-4] = 0x34c844c;
    (*pcVar6)(pvVar16,pUVar19,puVar17,0,puVar20 + -2);
    pUVar18 = __src;
    if (puVar20[-2] != 0) {
      pcVar6 = (code *)**(undefined8 **)(*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0xa8);
      puVar20[-4] = 0x34c846a;
      (*pcVar6)();
      return;
    }
  }
  __this_00 = (Il2CppObject *)0x0;
  puVar20[-4] = 0x34c8475;
  il2cpp_runtime_helper_022b2c90();
  puVar20[-4] = uVar21;
  puVar20[-5] = unaff_R14;
  puVar20[-6] = pUVar18;
  uVar5 = **(undefined8 **)((long)(pUVar19->_1).byval_arg.data + 0xc0);
  puVar20[-7] = 0x34c849e;
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar5);
  lVar4 = *(long *)(*(long *)((long)(pUVar19->_1).byval_arg.data + 0xc0) + 0x18);
  puVar20[-7] = 0x34c84ba;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (pIVar15 == (Il2CppClass *)0x0) {
    uVar5 = **(undefined8 **)(*(long *)(lVar4 + 0x20) + 0xc0);
    puVar20[-7] = 0x34c84d2;
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar5);
  }
  __this_00[3].klass = pIVar15;
  puVar20[-7] = 0x34c84e5;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar15);
  __this_00[2].klass = (Il2CppClass *)0x0;
  *(undefined4 *)&__this_00[2].monitor = 0xffffffff;
  *(undefined4 *)&__this_00[3].monitor = 0;
  return;
}


// Settings.HashSetSetting<int>$$Toggle
// il2cpp: void Settings_HashSetSetting_int___Toggle (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_33C7450* method);
// 0x34c7450

void Settings_HashSetSetting_int___Toggle
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_33C7450 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  Settings_HashSetSetting_T__RGCTXs *pSVar2;
  long lVar3;
  System_Array_o *array;
  undefined8 *puVar4;
  bool_conflict bVar5;
  long extraout_RDX;
  MethodInfo_33C7450 *unaff_RBX;
  undefined4 in_register_00000034;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_28;
  MethodInfo_33C7450 *pMStack_20;
  
  uVar6 = CONCAT44(in_register_00000034,item);
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    pMStack_20 = (MethodInfo_33C7450 *)0x34c7482;
    bVar5 = System_Collections_Generic_HashSet_int___Contains
                      (pSVar1,item,
                       (MethodInfo_33D4DF0 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value;
    unaff_RBX = method;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      pSVar2 = method->klass->rgctx_data;
      if ((char)bVar5 != '\0') {
        System_Collections_Generic_HashSet_int___Remove
                  (pSVar1,item,(MethodInfo_33D5090 *)pSVar2->_21_System_Collections_Generic_HashSet_T__Clear);
        return;
      }
      System_Collections_Generic_HashSet_int___AddIfNotPresent
                (pSVar1,item,
                 (MethodInfo_33D7EC0 *)
                 pSVar2->_11_System_Collections_Generic_HashSet_T__Add->klass->rgctx_data[0x15].method);
      return;
    }
  }
  lVar7 = 0;
  pMStack_20 = (MethodInfo_33C7450 *)0x34c74d4;
  il2cpp_runtime_helper_022b2c90();
  pMStack_20 = unaff_RBX;
  if ((lVar7 != 0) && (lVar3 = *(long *)(lVar7 + 0x18), lVar3 != 0)) {
    if (0 < *(int32_t *)(lVar3 + 0x24)) {
      uVar6 = 0;
      uStack_28 = 0x34c7503;
      System_Array__Clear(*(System_Array_o **)(lVar3 + 0x18),0,*(int32_t *)(lVar3 + 0x24),(MethodInfo *)0x0);
      array = *(System_Array_o **)(lVar3 + 0x10);
      lVar7 = 0;
      if (array == (System_Array_o *)0x0) goto label_034c752d;
      uStack_28 = 0x34c7518;
      System_Array__Clear(array,0,*(int32_t *)&array[1].monitor,(MethodInfo *)0x0);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined4 *)(lVar3 + 0x28) = 0xffffffff;
    }
    *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
    return;
  }
label_034c752d:
  uStack_28 = 0x34c7532;
  il2cpp_runtime_helper_022b2c90();
  puVar4 = *(undefined8 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 8);
  uStack_28 = uVar6;
  (*(code *)puVar4[2])(*puVar4,puVar4,lVar7,&uStack_28);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Toggle
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_33C8290* method);
// 0x34c8290

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_33C8290 *method)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  void *pvVar6;
  Il2CppRGCTXData *pIVar7;
  MethodInfo *pMVar8;
  Il2CppMethodPointer pIVar9;
  InvokerMethod pIVar10;
  long lVar11;
  ulong __n;
  Settings_HashSetSetting_T__o *pSVar12;
  undefined8 *puVar13;
  Il2CppClass *pIVar14;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar15;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar16;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 *puVar17;
  Il2CppObject *__this_00;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *unaff_R14;
  ulong __n_00;
  long alStack_a0 [5];
  long alStack_78 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_68;
  ulong local_60;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_58;
  Settings_HashSetSetting_T__o *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  char local_31;
  
  pUVar15 = item.monitor;
  pUVar16 = item.klass;
  lVar3 = *(long *)((long)(pUVar15->_1).byval_arg.data + 0xc0);
  uVar1 = *(uint *)(*(long *)(lVar3 + 0x50) + 0xfc);
  __n_00 = (ulong)uVar1;
  lVar11 = -(__n_00 + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)&local_68 + lVar11);
  puVar17 = (undefined8 *)0x0;
  __src = pUVar16;
  local_48 = pUVar16;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar17 = *(undefined8 **)(lVar3 + 0x60);
    uVar4 = *puVar17;
    pcVar5 = (code *)puVar17[2];
    local_50 = __this;
    *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c82f2;
    (*pcVar5)(uVar4,puVar17,__this,0,&stack0xffffffffffffffc0);
    puVar13 = local_40;
    pvVar6 = (pUVar15->_1).byval_arg.data;
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)((long)pvVar6 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar16;
    }
    local_68 = pUVar16;
    local_58 = pUVar15;
    *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c8324;
    puVar17 = __dest;
    memcpy(__dest,__src,__n_00);
    pUVar15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
    unaff_R14 = pUVar16;
    if (puVar13 != (undefined8 *)0x0) {
      unaff_R14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
      local_60 = __n_00;
      lVar3 = *(long *)((long)pvVar6 + 0xc0);
      puVar17 = *(undefined8 **)(lVar3 + 0x98);
      uVar4 = *puVar17;
      local_40 = __dest;
      if (-1 < *(int *)(*(long *)(lVar3 + 0x50) + 0x28)) {
        local_40 = (undefined8 *)*__dest;
      }
      pcVar5 = (code *)puVar17[2];
      *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c8369;
      (*pcVar5)(uVar4,puVar17,puVar13,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      pSVar12 = local_50;
      pUVar15 = local_58;
      __n_00 = (ulong)CONCAT31((int3)(uVar1 >> 8),local_31);
      puVar17 = *(undefined8 **)(*(long *)((long)(local_58->_1).byval_arg.data + 0xc0) + 0x60);
      uVar4 = *puVar17;
      pcVar5 = (code *)puVar17[2];
      *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c8390;
      (*pcVar5)(uVar4,puVar17,pSVar12,0,&stack0xffffffffffffffc0);
      puVar13 = local_40;
      __n = local_60;
      pUVar15 = (pUVar15->_1).byval_arg.data;
      __src = unaff_R14;
      if (*(int *)&(pUVar15->rgctx_data[10].method)->return_type < 0) {
        __src = local_68;
      }
      *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c83bb;
      puVar17 = __dest;
      memcpy(__dest,__src,__n);
      if (puVar13 != (undefined8 *)0x0) {
        pIVar7 = pUVar15->rgctx_data;
        if (local_31 == '\0') {
          pMVar8 = pIVar7[0xb].method;
          pIVar9 = pMVar8->methodPointer;
          iVar2 = *(int *)&(pIVar7[10].method)->return_type;
        }
        else {
          pMVar8 = pIVar7[0x14].method;
          pIVar9 = pMVar8->methodPointer;
          iVar2 = *(int *)&(pIVar7[10].method)->return_type;
        }
        if (-1 < iVar2) {
          __dest = (undefined8 *)*__dest;
        }
        pIVar10 = pMVar8->invoker_method;
        local_40 = __dest;
        *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c83f6;
        (*pIVar10)(pIVar9,pMVar8,puVar13,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
        return;
      }
    }
  }
  *(undefined8 *)((long)alStack_78 + lVar11 + 8) = 0x34c841d;
  il2cpp_runtime_helper_022b2c90();
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_78 + lVar11 + 8) = pUVar15;
  pUVar16 = __src;
  if (puVar17 != (undefined8 *)0x0) {
    pUVar16 = *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)
               (*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0x60);
    pvVar6 = (pUVar16->_1).image;
    pcVar5 = (code *)(pUVar16->_1).name;
    *(undefined8 *)((long)alStack_a0 + lVar11 + 0x18) = 0x34c844c;
    (*pcVar5)(pvVar6,pUVar16,puVar17,0,(long)alStack_78 + lVar11);
    pUVar15 = __src;
    if (*(long *)((long)alStack_78 + lVar11) != 0) {
      pcVar5 = (code *)**(undefined8 **)(*(long *)((long)(__src->_1).byval_arg.data + 0xc0) + 0xa8);
      *(undefined8 *)((long)alStack_a0 + lVar11 + 0x18) = 0x34c846a;
      (*pcVar5)();
      return;
    }
  }
  __this_00 = (Il2CppObject *)0x0;
  *(undefined8 *)((long)alStack_a0 + lVar11 + 0x18) = 0x34c8475;
  il2cpp_runtime_helper_022b2c90();
  *(ulong *)((long)alStack_a0 + lVar11 + 0x18) = __n_00;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_a0 + lVar11 + 0x10) = unaff_R14;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((long)alStack_a0 + lVar11 + 8) = pUVar15;
  uVar4 = **(undefined8 **)((long)(pUVar16->_1).byval_arg.data + 0xc0);
  *(undefined8 *)((long)alStack_a0 + lVar11) = 0x34c849e;
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar4);
  lVar3 = *(long *)(*(long *)((long)(pUVar16->_1).byval_arg.data + 0xc0) + 0x18);
  *(undefined8 *)((long)alStack_a0 + lVar11) = 0x34c84ba;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (pIVar14 == (Il2CppClass *)0x0) {
    uVar4 = **(undefined8 **)(*(long *)(lVar3 + 0x20) + 0xc0);
    *(undefined8 *)((long)alStack_a0 + lVar11) = 0x34c84d2;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(uVar4);
  }
  __this_00[3].klass = pIVar14;
  *(undefined8 *)((long)alStack_a0 + lVar11) = 0x34c84e5;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar14);
  __this_00[2].klass = (Il2CppClass *)0x0;
  *(undefined4 *)&__this_00[2].monitor = 0xffffffff;
  *(undefined4 *)&__this_00[3].monitor = 0;
  return;
}


// Settings.HashSetSetting<int>$$Clear
// il2cpp: void Settings_HashSetSetting_int___Clear (Settings_HashSetSetting_int__o* __this, const MethodInfo_33C74E0* method);
// 0x34c74e0

void Settings_HashSetSetting_int___Clear(Settings_HashSetSetting_int__o *__this,MethodInfo_33C74E0 *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  System_Int32_array *array;
  undefined8 *puVar3;
  long extraout_RDX;
  MethodInfo_33C74E0 *pMStack_10;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar2 = (__this->fields)._value, pSVar2 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    length = (pSVar2->fields)._lastIndex;
    if (0 < length) {
      method = (MethodInfo_33C74E0 *)0x0;
      pMStack_10 = (MethodInfo_33C74E0 *)0x34c7503;
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._slots,0,length,(MethodInfo *)0x0);
      array = (pSVar2->fields)._buckets;
      __this = (Settings_HashSetSetting_int__o *)0x0;
      if (array == (System_Int32_array *)0x0) goto label_034c752d;
      pMStack_10 = (MethodInfo_33C74E0 *)0x34c7518;
      System_Array__Clear((System_Array_o *)array,0,(int32_t)array->max_length,(MethodInfo *)0x0);
      (pSVar2->fields)._count = 0;
      (pSVar2->fields)._lastIndex = 0;
      (pSVar2->fields)._freeList = -1;
    }
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
label_034c752d:
  pMStack_10 = (MethodInfo_33C74E0 *)0x34c7532;
  il2cpp_runtime_helper_022b2c90();
  puVar3 = *(undefined8 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 8);
  pMStack_10 = method;
  (*(code *)puVar3[2])(*puVar3,puVar3,__this,&pMStack_10);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Clear
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear (Settings_HashSetSetting_T__o* __this, const MethodInfo_33C8420* method);
// 0x34c8420

void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear
               (Settings_HashSetSetting_T__o *__this,MethodInfo_33C8420 *method)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;
  Il2CppObject *__this_00;
  long local_10;
  
  pMVar2 = (MethodInfo *)method;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar2 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,__this,(void **)0x0,&local_10);
    if (local_10 != 0) {
      (*((method->klass->rgctx_data[1]._0_System_Collections_Generic_HashSet_T_)->_1).image)();
      return;
    }
  }
  __this_00 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(pMVar2->klass->rgctx_data->rgctxDataDummy);
  pMVar2 = pMVar2->klass->rgctx_data[3].method;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (pIVar1 == (Il2CppClass *)0x0) {
    pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_0279b410(pMVar2->klass->rgctx_data->rgctxDataDummy);
  }
  __this_00[3].klass = pIVar1;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,pIVar1);
  __this_00[2].klass = (Il2CppClass *)0x0;
  *(undefined4 *)&__this_00[2].monitor = 0xffffffff;
  *(undefined4 *)&__this_00[3].monitor = 0;
  return;
}


