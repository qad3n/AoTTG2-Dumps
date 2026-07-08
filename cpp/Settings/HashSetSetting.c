// Type: Settings.HashSetSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/HashSetSetting.cs
// Prior source: NEW in this update
// --------------------------------

// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_3342100* method);
// 0x3442100

void Settings_HashSetSetting<int>___ctor
               (Settings_HashSetSetting_int__o *__this,
               System_Collections_Generic_HashSet_T__o *defaultValue,MethodInfo_3342100 *method)

{
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_29B42E0 *)
             method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, System_Collections_Generic_HashSet_T__o* defaultValue, const MethodInfo_3342BB0* method);
// 0x3442bb0

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>___ctor
               (Settings_HashSetSetting_T__o *__this,
               System_Collections_Generic_HashSet_T__o *defaultValue,MethodInfo_3342BB0 *method)

{
  MethodInfo *pMVar1;
  System_Collections_Generic_HashSet_T__o *pSStack_8;
  
  pMVar1 = method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor;
  pSStack_8 = defaultValue;
  (*pMVar1->invoker_method)(pMVar1->methodPointer,pMVar1,__this,&pSStack_8,defaultValue);
  return;
}


// Settings.HashSetSetting<int>$$.ctor
// il2cpp: void Settings_HashSetSetting_int____ctor (Settings_HashSetSetting_int__o* __this, const MethodInfo_3342120* method);
// 0x3442120

void Settings_HashSetSetting<int>___ctor
               (Settings_HashSetSetting_int__o *__this,MethodInfo_3342120 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar2;
  System_Collections_Generic_HashSet_T__o *__this_00;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar3;
  undefined8 extraout_RDX;
  
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_29B42D0 *)
             method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor);
  pIVar2 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_glue(pIVar2);
  pMVar1 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  pSVar3 = (System_Collections_Generic_IEqualityComparer_T__o *)
           il2cpp_glue_02544830(pMVar1->klass->rgctx_data->rgctxDataDummy);
  pMVar1 = pMVar1->klass->rgctx_data[3].method;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (pSVar3 == (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
    pSVar3 = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_glue_02544830(pMVar1->klass->rgctx_data->rgctxDataDummy);
  }
  (__this_00->fields)._comparer = pSVar3;
  il2cpp_runtime_glue(&(__this_00->fields)._comparer,pSVar3);
  (__this_00->fields)._count = 0;
  (__this_00->fields)._lastIndex = 0;
  (__this_00->fields)._freeList = -1;
  (__this_00->fields)._version = 0;
  (__this->fields).DefaultValue = __this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  if (__this != (Settings_HashSetSetting_int__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType____ctor (Settings_HashSetSetting_T__o* __this, const MethodInfo_3342BE0* method);
// 0x3442be0

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>___ctor
               (Settings_HashSetSetting_T__o *__this,MethodInfo_3342BE0 *method)

{
  Il2CppMethodPointer vtable_dispatch;
  Il2CppClass *pIVar1;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  undefined8 extraout_RDX;
  
  (*method->klass->rgctx_data->_3_Settings_TypedSetting_HashSet_T____ctor->methodPointer)();
  pIVar1 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pSVar2 = (System_Collections_Generic_HashSet_T__o *)il2cpp_runtime_glue(pIVar1);
  (*method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor->methodPointer)
            (pSVar2);
  (__this->fields).DefaultValue = pSVar2;
  il2cpp_runtime_glue(&__this->fields,pSVar2);
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$SetDefault
// il2cpp: void Settings_HashSetSetting_int___SetDefault (Settings_HashSetSetting_int__o* __this, const MethodInfo_3342230* method);
// 0x3442230

void Settings_HashSetSetting<int>__SetDefault
               (Settings_HashSetSetting_int__o *__this,MethodInfo_3342230 *method)

{
  System_Collections_Generic_HashSet_T__o *collection;
  MethodInfo *pMVar1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  
  collection = (__this->fields).DefaultValue;
  pIVar2 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(pIVar2);
  pMVar1 = method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor;
  comparer = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_glue_02544830(pMVar1->klass->rgctx_data->rgctxDataDummy);
  System_Collections_Generic_HashSet<int>___ctor
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,comparer,
             (MethodInfo_334FD20 *)pMVar1->klass->rgctx_data[8].method);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_29B42A0 *)
             method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
  return;
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SetDefault
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___SetDefault (Settings_HashSetSetting_T__o* __this, const MethodInfo_3342C70* method);
// 0x3442c70

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__SetDefault
               (Settings_HashSetSetting_T__o *__this,MethodInfo_3342C70 *method)

{
  System_Collections_Generic_HashSet_T__o *pSVar1;
  MethodInfo *pMVar2;
  Il2CppClass *pIVar3;
  void *pvVar4;
  void *local_28;
  
  pSVar1 = (__this->fields).DefaultValue;
  pIVar3 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar3->_2).field_0x6d & 1) == 0) {
    pIVar3 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  pvVar4 = (void *)il2cpp_runtime_glue(pIVar3);
  (*method->klass->rgctx_data->_6_System_Collections_Generic_HashSet_T___ctor->methodPointer)
            (pvVar4,pSVar1);
  pMVar2 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
  local_28 = pvVar4;
  (*pMVar2->invoker_method)(pMVar2->methodPointer,pMVar2,__this,&local_28,pvVar4);
  return;
}


// Settings.HashSetSetting<int>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting_int___DeserializeFromJsonObject (Settings_HashSetSetting_int__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_33422D0* method);
// 0x34422d0

void Settings_HashSetSetting<int>__DeserializeFromJsonObject
               (Settings_HashSetSetting_int__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_33422D0 *method)

{
  MethodInfo *pMVar1;
  System_RuntimeTypeHandle_o SVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_HashSet_int__o *__this_03;
  System_Collections_Generic_IEqualityComparer_T__o *pSVar5;
  long *plVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Type_o *pSVar8;
  System_Type_o *pSVar9;
  Il2CppClass *pIVar10;
  int32_t *piVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  InvokerMethod pIVar14;
  char *pcVar15;
  Il2CppType *pIVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  undefined4 auStack_78 [2];
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  
  if (DAT_057004e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057004e4 = '\x01';
  }
  pIVar4 = method->klass->rgctx_data->_0_System_Collections_Generic_HashSet_T_;
  if (((pIVar4->_2).field_0x6d & 1) == 0) {
    pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_03 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(pIVar4);
  pMVar1 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor;
  pSVar5 = (System_Collections_Generic_IEqualityComparer_T__o *)
           il2cpp_glue_02544830(pMVar1->klass->rgctx_data->rgctxDataDummy);
  pMVar1 = pMVar1->klass->rgctx_data[3].method;
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  if (pSVar5 == (System_Collections_Generic_IEqualityComparer_T__o *)0x0) {
    pSVar5 = (System_Collections_Generic_IEqualityComparer_T__o *)
             il2cpp_glue_02544830(pMVar1->klass->rgctx_data->rgctxDataDummy);
  }
  (__this_03->fields)._comparer = pSVar5;
  il2cpp_runtime_glue(&(__this_03->fields)._comparer,pSVar5);
  (__this_03->fields)._count = 0;
  (__this_03->fields)._lastIndex = 0;
  (__this_03->fields)._freeList = -1;
  (__this_03->fields)._version = 0;
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar6 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x338))(auStack_78,plVar6,*(undefined8 *)(*plVar6 + 0x340));
      pIVar12 = (Il2CppMethodPointer)CONCAT44(auStack_78[1],auStack_78[0]);
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
      __this_00.fields._0_8_ = __this_03;
      __this_00.fields.m_Object.fields._8_8_ = pIVar12;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_68;
      __this_00.fields.m_Object.fields._32_8_ = pcStack_60;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_58;
      __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
      __this_00.fields.m_Array.fields._current = pSStack_48;
      bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar3 != '\0') {
        pIVar13 = pIStack_70;
        pIVar14 = pIStack_68;
        pcVar15 = pcStack_60;
        pIVar4 = pIStack_58;
        pIVar16 = pIStack_50;
        pSVar17 = pSStack_48;
        do {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_02.fields._0_8_ = __this_03;
          __this_02.fields.m_Object.fields._8_8_ = pIVar12;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar13;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_02.fields.m_Object.fields._32_8_ = pcVar15;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar4;
          __this_02.fields.m_Array.fields._8_8_ = pIVar16;
          __this_02.fields.m_Array.fields._current = pSVar17;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
          SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
          pSVar9 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)(DAT_05711068 + 0x20),(MethodInfo *)0x0);
          bVar3 = System_Type__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            SVar2.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar8 = System_Type__GetTypeFromHandle(SVar2,(MethodInfo *)0x0);
            pSVar9 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)(DAT_057110b0 + 0x20),(MethodInfo *)0x0)
            ;
            bVar3 = System_Type__op_Equality(pSVar8,pSVar9,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                plVar6 = (long *)(*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                           (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                goto LAB_034425b5;
              }
              goto LAB_03442658;
            }
          }
          else {
            if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03442658;
            auStack_78[0] =
                 (*(pSVar7->klass->vtable)._35_get_AsInt.methodPtr)
                           (pSVar7,(pSVar7->klass->vtable)._35_get_AsInt.method);
            plVar6 = (long *)il2cpp_runtime_glue(DAT_05711068,auStack_78);
LAB_034425b5:
            pIVar10 = method->klass->rgctx_data->_10_T;
            if (((pIVar10->_2).field_0x6d & 1) == 0) {
              pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar10);
            }
            if (plVar6 == (long *)0x0) goto LAB_03442658;
            if (*(Il2CppClass **)(*plVar6 + 0x40) != (pIVar10->_1).element_class) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(plVar6,pIVar10);
            }
            piVar11 = (int32_t *)il2cpp_glue_022c7330(plVar6);
            System_Collections_Generic_HashSet<int>__AddIfNotPresent
                      (__this_03,*piVar11,
                       (MethodInfo_3353530 *)
                       method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->
                       klass->rgctx_data[0x15].method);
          }
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_01.fields._0_8_ = __this_03;
          __this_01.fields.m_Object.fields._8_8_ = pIVar12;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar13;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar14;
          __this_01.fields.m_Object.fields._32_8_ = pcVar15;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar4;
          __this_01.fields.m_Array.fields._8_8_ = pIVar16;
          __this_01.fields.m_Array.fields._current = pSVar17;
          bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar3 != '\0');
      }
      if (__this != (Settings_HashSetSetting_int__o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_03,
                   (MethodInfo_29B42A0 *)
                   method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value);
        return;
      }
    }
  }
LAB_03442658:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$DeserializeFromJsonObject
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___DeserializeFromJsonObject (Settings_HashSetSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_3342CF0* method);
// 0x3442cf0

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__DeserializeFromJsonObject
               (Settings_HashSetSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo_3342CF0 *method)

{
  Settings_HashSetSetting_T__RGCTXs *pSVar1;
  code *pcVar2;
  InvokerMethod pIVar3;
  System_RuntimeTypeHandle_o SVar4;
  long lVar5;
  SimpleJSONFixed_JSONNode_Enumerator_Fields *pSVar6;
  bool_conflict bVar7;
  Il2CppClass *pIVar8;
  void *pvVar9;
  long *plVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_Type_o *pSVar12;
  System_Type_o *pSVar13;
  undefined8 uVar14;
  Il2CppMethodPointer pIVar15;
  SimpleJSONFixed_JSONNode_Enumerator_Fields *pSVar16;
  MethodInfo *pMVar17;
  Il2CppMethodPointer pIVar18;
  undefined4 *puVar19;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
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
  void *local_40;
  undefined4 local_38 [2];
  
  local_98._72_8_ = __this;
  if (DAT_057004e6 == '\0') {
    uStack_f0 = 0x3442d23;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057004e6 = '\x01';
  }
  pSVar1 = method->klass->rgctx_data;
  lVar5 = -((ulong)(pSVar1->_10_T->_2).actualSize + 0xf & 0xfffffffffffffff0);
  pSVar16 = (SimpleJSONFixed_JSONNode_Enumerator_Fields *)(auStack_e8 + lVar5);
  local_98._48_8_ = (Il2CppType **)0x0;
  local_98._56_8_ = (Il2CppRGCTXData *)0x0;
  local_98._32_8_ = (Il2CppClass *)0x0;
  local_98._40_8_ = (Il2CppType *)0x0;
  local_98._16_8_ = (InvokerMethod)0x0;
  local_98._24_8_ = (char *)0x0;
  local_98._0_8_ = (Il2CppMethodPointer)0x0;
  local_98._8_8_ = (Il2CppMethodPointer)0x0;
  local_98._64_8_ = (void *)0x0;
  pIVar8 = pSVar1->_0_System_Collections_Generic_HashSet_T_;
  local_48 = pSVar16;
  if (((pIVar8->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442d83;
    pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442d8b;
  pvVar9 = (void *)il2cpp_runtime_glue(pIVar8);
  pIVar15 = method->klass->rgctx_data->_4_System_Collections_Generic_HashSet_T___ctor->methodPointer
  ;
  *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442da2;
  (*pIVar15)(pvVar9);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar17 = (json->klass->vtable)._45_get_AsArray.method;
    pIVar15 = (json->klass->vtable)._45_get_AsArray.methodPtr;
    local_40 = pvVar9;
    *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442dc2;
    plVar10 = (long *)(*pIVar15)(json,pMVar17);
    if (plVar10 != (long *)0x0) {
      uVar14 = *(undefined8 *)(*plVar10 + 0x340);
      pcVar2 = *(code **)(*plVar10 + 0x338);
      *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442de5;
      (*pcVar2)(auStack_e8 + 8,plVar10,uVar14);
      local_98._64_8_ = local_a0;
      local_98._48_8_ = local_b0;
      local_98._56_8_ = _Stack_a8;
      local_98._32_8_ = local_c0;
      local_98._40_8_ = pIStack_b8;
      local_98._16_8_ = local_d0;
      local_98._24_8_ = pcStack_c8;
      local_98._0_8_ = auStack_e8._8_8_;
      local_98._8_8_ = auStack_e8._16_8_;
      *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442e2d;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar16,(MethodInfo *)local_98);
      if ((char)bVar7 != '\0') {
        do {
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442e87;
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar16,
                                 (MethodInfo *)local_98);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442ea5;
            il2cpp_init_class();
          }
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442eb2;
          pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
          SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442ed9;
            il2cpp_init_class();
          }
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442ee3;
          pSVar12 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442ef5;
          pSVar13 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)(DAT_05711068 + 0x20),(MethodInfo *)0x0);
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442f02;
          bVar7 = System_Type__op_Equality(pSVar12,pSVar13,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442fc4;
              il2cpp_init_class();
            }
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442fce;
            pSVar12 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442fe3;
            pSVar13 = System_Type__GetTypeFromHandle
                                ((System_RuntimeTypeHandle_o)(DAT_057110b0 + 0x20),(MethodInfo *)0x0
                                );
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442ff0;
            bVar7 = System_Type__op_Equality(pSVar12,pSVar13,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                pMVar17 = (pSVar11->klass->vtable)._9_get_Value.method;
                pIVar15 = (pSVar11->klass->vtable)._9_get_Value.methodPtr;
                *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3443014;
                uVar14 = (*pIVar15)(pSVar11,pMVar17);
                pIVar8 = method->klass->rgctx_data->_10_T;
                if (((pIVar8->_2).field_0x6d & 1) == 0) {
                  *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3443037;
                  pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar8);
                }
                pSVar6 = local_48;
                *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3443046;
                pIVar15 = (Il2CppMethodPointer)il2cpp_glue_02274a70(uVar14,pIVar8,pSVar6);
                if (local_40 != (void *)0x0) {
                  pSVar1 = method->klass->rgctx_data;
                  pMVar17 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
                  pIVar18 = pMVar17->methodPointer;
                  if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
                    pIVar15 = *(Il2CppMethodPointer *)pIVar15;
                  }
                  puVar19 = local_38;
                  auStack_e8._8_8_ = pIVar15;
                  goto LAB_03442e62;
                }
              }
              goto LAB_034430c4;
            }
          }
          else {
            if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_034430c4;
            pMVar17 = (pSVar11->klass->vtable)._35_get_AsInt.method;
            pIVar15 = (pSVar11->klass->vtable)._35_get_AsInt.methodPtr;
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442f26;
            local_38[0] = (*pIVar15)(pSVar11,pMVar17);
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442f36;
            uVar14 = il2cpp_runtime_glue(DAT_05711068,local_38);
            pIVar8 = method->klass->rgctx_data->_10_T;
            if (((pIVar8->_2).field_0x6d & 1) == 0) {
              *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442f59;
              pIVar8 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar8);
            }
            pSVar6 = local_48;
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442f68;
            pIVar15 = (Il2CppMethodPointer)il2cpp_glue_02274a70(uVar14,pIVar8,pSVar6);
            if (local_40 == (void *)0x0) goto LAB_034430c4;
            pSVar1 = method->klass->rgctx_data;
            pMVar17 = pSVar1->_11_System_Collections_Generic_HashSet_T__Add;
            pIVar18 = pMVar17->methodPointer;
            if (-1 < (int)(pSVar1->_10_T->_1).byval_arg.bits) {
              pIVar15 = *(Il2CppMethodPointer *)pIVar15;
            }
            puVar19 = (undefined4 *)((long)local_38 + 7);
            auStack_e8._8_8_ = pIVar15;
LAB_03442e62:
            pvVar9 = local_40;
            pIVar3 = pMVar17->invoker_method;
            *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442e65;
            (*pIVar3)(pIVar18,pMVar17,pvVar9,(void **)(auStack_e8 + 8),puVar19);
          }
          *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x3442e72;
          bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o)*pSVar16,(MethodInfo *)local_98)
          ;
        } while ((char)bVar7 != '\0');
      }
      pvVar9 = local_40;
      uVar14 = local_98._72_8_;
      if ((Settings_HashSetSetting_T__o *)local_98._72_8_ != (Settings_HashSetSetting_T__o *)0x0) {
        pMVar17 = method->klass->rgctx_data->_8_Settings_TypedSetting_HashSet_T___set_Value;
        pIVar15 = pMVar17->methodPointer;
        auStack_e8._8_8_ = local_40;
        pIVar3 = pMVar17->invoker_method;
        *(undefined8 *)(auStack_e8 + lVar5 + -8) = 0x34430b5;
        (*pIVar3)(pIVar15,pMVar17,(void *)uVar14,(void **)(auStack_e8 + 8),pvVar9);
        return;
      }
    }
  }
LAB_034430c4:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(auStack_e8 + lVar5 + -8) = &UNK_034430c9;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting_int___SerializeToJsonObject (Settings_HashSetSetting_int__o* __this, const MethodInfo_3342670* method);
// 0x3442670

/* WARNING: Removing unreachable block (ram,0x0344295c) */
/* WARNING: Removing unreachable block (ram,0x03442994) */

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting<int>__SerializeToJsonObject
          (Settings_HashSetSetting_int__o *__this,MethodInfo_3342670 *method)

{
  MethodInfo_3180B50 *method_00;
  System_RuntimeTypeHandle_o SVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONArray_o *__this_02;
  System_Type_o *pSVar3;
  System_Type_o *pSVar4;
  long *plVar5;
  int32_t *piVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *s;
  int32_t iVar8;
  int32_t iVar9;
  int32_t iVar10;
  Il2CppMethodPointer pIVar11;
  System_Int32_array *pSVar12;
  Il2CppMethodPointer pIStack_48;
  Il2CppMethodPointer pIStack_40;
  int32_t iStack_38;
  
  if (DAT_057004e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057004e5 = '\x01';
  }
  pIStack_48 = (Il2CppMethodPointer)0x0;
  pIStack_40 = (Il2CppMethodPointer)0x0;
  _iStack_38 = (System_Int32_array *)0x0;
  __this_02 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_02,(MethodInfo *)0x0);
  if ((__this == (Settings_HashSetSetting_int__o *)0x0) ||
     (method_00 = (MethodInfo_3180B50 *)(__this->fields)._value,
     method_00 == (MethodInfo_3180B50 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar8 = 0;
  iVar10 = 0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pSVar12 = (System_Int32_array *)0x0;
  System_Collections_Generic_HashSet_Enumerator<int>___ctor
            ((System_Collections_Generic_HashSet_Enumerator_T__o)ZEXT824(0),
             (System_Collections_Generic_HashSet_T__o *)&stack0xffffffffffffff98,method_00);
  pIStack_48 = (Il2CppMethodPointer)CONCAT44(iVar10,iVar8);
  pIStack_40 = pIVar11;
  _iStack_38 = pSVar12;
  while( true ) {
    while( true ) {
      __this_00.fields._set._4_4_ = iVar10;
      __this_00.fields._set._0_4_ = iVar8;
      __this_00.fields._8_8_ = pIVar11;
      __this_00.fields._current = &pSVar12->obj;
      bVar2 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                        (__this_00,(MethodInfo_3180BA0 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') {
        __this_01.fields._set._4_4_ = iVar10;
        __this_01.fields._set._0_4_ = iVar8;
        __this_01.fields._8_8_ = pIVar11;
        __this_01.fields._current = &pSVar12->obj;
        System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                  (__this_01,(MethodInfo_3180B90 *)&stack0xffffffffffffffb8);
        return (SimpleJSONFixed_JSONNode_o *)__this_02;
      }
      iVar9 = iStack_38;
      SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      pSVar4 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)(DAT_05711068 + 0x20),(MethodInfo *)0x0);
      bVar2 = System_Type__op_Equality(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') break;
      SVar1.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
      if (*(int *)(DAT_05711100 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = System_Type__GetTypeFromHandle(SVar1,(MethodInfo *)0x0);
      pSVar4 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)&(DAT_057110b0->_1).byval_arg,
                          (MethodInfo *)0x0);
      bVar2 = System_Type__op_Equality(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        s = (System_String_o *)il2cpp_runtime_glue(method->klass->rgctx_data->_10_T);
        iVar8 = iVar9;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
          iVar8 = iVar9;
        }
        if ((s != (System_String_o *)0x0) && (s->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(s);
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        if (__this_02 == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(__this_02->klass->vtable)._21_Add.methodPtr)
                  (__this_02,pSVar7,(__this_02->klass->vtable)._21_Add.method);
      }
    }
    plVar5 = (long *)il2cpp_runtime_glue(method->klass->rgctx_data->_10_T,&stack0xffffffffffffff98);
    iVar8 = iVar9;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
      iVar8 = iVar9;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar5);
    }
    piVar6 = (int32_t *)il2cpp_glue_022c7330(plVar5);
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(*piVar6,(MethodInfo *)0x0);
    if (__this_02 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
    (*(__this_02->klass->vtable)._21_Add.methodPtr)
              (__this_02,pSVar7,(__this_02->klass->vtable)._21_Add.method);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_HashSetSetting___Il2CppFullySharedGenericType___SerializeToJsonObject (Settings_HashSetSetting_T__o* __this, const MethodInfo_33430D0* method);
// 0x34430d0

/* WARNING: Removing unreachable block (ram,0x034434fe) */
/* WARNING: Removing unreachable block (ram,0x034434c9) */

SimpleJSONFixed_JSONNode_o *
Settings_HashSetSetting<__Il2CppFullySharedGenericType>__SerializeToJsonObject
          (Settings_HashSetSetting_T__o *__this,MethodInfo_33430D0 *method)

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
  System_String_o *s;
  Il2CppClass *pIVar19;
  Settings_HashSetSetting_T__RGCTXs *pSVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
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
  if (DAT_057004e7 == '\0') {
    uStack_80 = 0x34430fd;
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    uStack_80 = 0x3443109;
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057004e7 = '\x01';
  }
  pSVar20 = method->klass->rgctx_data;
  pIVar19 = pSVar20->_14_System_Collections_Generic_HashSet_Enumerator_T_;
  uVar9 = (pIVar19->_2).actualSize;
  uVar23 = (ulong)uVar9;
  local_48 = (ulong)(pSVar20->_10_T->_2).actualSize;
  if (((pIVar19->_2).field_0x6d & 1) == 0) {
    uStack_80 = 0x3443145;
    lVar11 = il2cpp_glue_022c28b0();
    uVar9 = *(uint *)(lVar11 + 0xfc);
  }
  __n = local_48;
  local_50 = auStack_78 + -((ulong)(uVar9 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar21 = local_48 + 0xf & 0xfffffffffffffff0;
  puVar24 = local_50 + -uVar21;
  uVar12 = uVar23 + 0xf & 0xfffffffffffffff0;
  local_68 = puVar24 + -uVar12;
  puVar22 = local_68 + -uVar12;
  local_38 = puVar22;
  *(undefined8 *)(puVar22 + -8) = 0x34431a5;
  memset(puVar22,0,uVar23);
  puVar22 = puVar22 + -uVar21;
  local_60 = puVar22;
  *(undefined8 *)(puVar22 + -8) = 0x34431bc;
  memset(puVar22,0,__n);
  *(undefined8 *)(puVar22 + -8) = 0x34431cb;
  pSVar13 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  local_58 = pSVar13;
  *(undefined8 *)(puVar22 + -8) = 0x34431d9;
  SimpleJSONFixed_JSONArray___ctor(pSVar13,(MethodInfo *)0x0);
  pSVar5 = local_70;
  if (local_70 != (Settings_HashSetSetting_T__o *)0x0) {
    pMVar1 = method->klass->rgctx_data->_12_Settings_TypedSetting_HashSet_T___get_Value;
    pIVar2 = pMVar1->methodPointer;
    pIVar3 = pMVar1->invoker_method;
    *(undefined8 *)(puVar22 + -8) = 0x3443201;
    (*pIVar3)(pIVar2,pMVar1,pSVar5,(void **)0x0,&local_40);
    puVar7 = local_40;
    puVar6 = local_68;
    if (local_40 != (undefined1 *)0x0) {
      pMVar1 = method->klass->rgctx_data->_13_System_Collections_Generic_HashSet_T__GetEnumerator;
      pIVar2 = pMVar1->methodPointer;
      local_40 = local_68;
      pIVar3 = pMVar1->invoker_method;
      *(undefined8 *)(puVar22 + -8) = 0x3443232;
      (*pIVar3)(pIVar2,pMVar1,puVar7,&local_40,puVar6);
      puVar7 = local_38;
      *(undefined8 *)(puVar22 + -8) = 0x3443241;
      memcpy(puVar7,puVar6,uVar23);
      while( true ) {
        while( true ) {
          puVar6 = local_38;
          pIVar2 = method->klass->rgctx_data->
                   _17_System_Collections_Generic_HashSet_Enumerator_T__MoveNext->methodPointer;
          *(undefined8 *)(puVar22 + -8) = 0x3443268;
          cVar8 = (*pIVar2)(puVar6);
          puVar6 = local_38;
          if (cVar8 == '\0') {
            pSVar20 = method->klass->rgctx_data;
            pIVar19 = pSVar20->_14_System_Collections_Generic_HashSet_Enumerator_T_;
            if (((pIVar19->_2).field_0x6d & 1) == 0) {
              *(undefined8 *)(puVar22 + -8) = 0x3443493;
              pIVar19 = (Il2CppClass *)il2cpp_glue_022c28b0();
              pSVar20 = method->klass->rgctx_data;
            }
            puVar6 = local_38;
            puVar24 = local_50;
            pMVar1 = pSVar20->_19_System_Collections_Generic_HashSet_T__Contains;
            *(undefined8 *)(puVar22 + -8) = 0x34434bb;
            il2cpp_glue_022754b0(pIVar19,pMVar1,puVar24,puVar6,0,0);
            return (SimpleJSONFixed_JSONNode_o *)local_58;
          }
          pMVar1 = method->klass->rgctx_data->
                   _15_System_Collections_Generic_HashSet_Enumerator_T__get_Current;
          pIVar2 = pMVar1->methodPointer;
          pIVar3 = pMVar1->invoker_method;
          local_40 = puVar24;
          *(undefined8 *)(puVar22 + -8) = 0x3443294;
          (*pIVar3)(pIVar2,pMVar1,puVar6,&local_40,puVar24);
          uVar23 = local_48;
          puVar6 = local_60;
          *(undefined8 *)(puVar22 + -8) = 0x34432a4;
          memcpy(puVar6,puVar24,uVar23);
          SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            *(undefined8 *)(puVar22 + -8) = 0x34432c8;
            il2cpp_init_class();
          }
          *(undefined8 *)(puVar22 + -8) = 0x34432d2;
          pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
          *(undefined8 *)(puVar22 + -8) = 0x34432e4;
          pSVar15 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)(DAT_05711068 + 0x20),(MethodInfo *)0x0);
          *(undefined8 *)(puVar22 + -8) = 0x34432f1;
          bVar10 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
          uVar23 = local_48;
          puVar6 = local_60;
          if ((char)bVar10 != '\0') break;
          SVar4.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_9_T;
          if (*(int *)(DAT_05711100 + 0xe4) == 0) {
            *(undefined8 *)(puVar22 + -8) = 0x34433b4;
            il2cpp_init_class();
          }
          *(undefined8 *)(puVar22 + -8) = 0x34433be;
          pSVar14 = System_Type__GetTypeFromHandle(SVar4,(MethodInfo *)0x0);
          *(undefined8 *)(puVar22 + -8) = 0x34433d3;
          pSVar15 = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)&(DAT_057110b0->_1).byval_arg,
                               (MethodInfo *)0x0);
          *(undefined8 *)(puVar22 + -8) = 0x34433e0;
          bVar10 = System_Type__op_Equality(pSVar14,pSVar15,(MethodInfo *)0x0);
          uVar23 = local_48;
          puVar6 = local_60;
          if ((char)bVar10 != '\0') {
            *(undefined8 *)(puVar22 + -8) = 0x34433f8;
            memcpy(puVar24,puVar6,uVar23);
            pIVar19 = method->klass->rgctx_data->_10_T;
            *(undefined8 *)(puVar22 + -8) = 0x344340f;
            s = (System_String_o *)il2cpp_runtime_glue(pIVar19);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar22 + -8) = 0x344342a;
              il2cpp_init_class();
            }
            if ((s != (System_String_o *)0x0) && (s->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar22 + -8) = 0x34434f9;
              il2cpp_unwind_resume(s);
            }
            *(undefined8 *)(puVar22 + -8) = 0x3443449;
            pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
            pSVar13 = local_58;
            if (local_58 == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar22 + -8) = 0x34434f1;
              il2cpp_raise_exception();
            }
            pMVar1 = (local_58->klass->vtable)._21_Add.method;
            pIVar2 = (local_58->klass->vtable)._21_Add.methodPtr;
            *(undefined8 *)(puVar22 + -8) = 0x3443469;
            (*pIVar2)(pSVar13,pSVar18,pMVar1);
          }
        }
        *(undefined8 *)(puVar22 + -8) = 0x3443309;
        memcpy(puVar24,puVar6,uVar23);
        pIVar19 = method->klass->rgctx_data->_10_T;
        *(undefined8 *)(puVar22 + -8) = 0x3443320;
        plVar16 = (long *)il2cpp_runtime_glue(pIVar19,puVar24);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          *(undefined8 *)(puVar22 + -8) = 0x344333b;
          il2cpp_init_class();
        }
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar22 + -8) = 0x34434e7;
          il2cpp_raise_exception();
        }
        if (*(long *)(*plVar16 + 0x40) != *(long *)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar22 + -8) = 0x34434e2;
          il2cpp_unwind_resume(plVar16);
        }
        *(undefined8 *)(puVar22 + -8) = 0x3443362;
        piVar17 = (int32_t *)il2cpp_glue_022c7330(plVar16);
        n = *piVar17;
        *(undefined8 *)(puVar22 + -8) = 0x344336b;
        pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit(n,(MethodInfo *)0x0);
        pSVar13 = local_58;
        if (local_58 == (SimpleJSONFixed_JSONArray_o *)0x0) break;
        pMVar1 = (local_58->klass->vtable)._21_Add.method;
        pIVar2 = (local_58->klass->vtable)._21_Add.methodPtr;
        *(undefined8 *)(puVar22 + -8) = 0x344338b;
        (*pIVar2)(pSVar13,pSVar18,pMVar1);
      }
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar22 + -8) = 0x34434ec;
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar22 + -8) = 0x34434fe;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$Contains
// il2cpp: bool Settings_HashSetSetting_int___Contains (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_3342A20* method);
// 0x3442a20

bool_conflict
Settings_HashSetSetting<int>__Contains
          (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_3342A20 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  bool_conflict bVar1;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<int>__Contains
                      (__this_00,item,
                       (MethodInfo_3350460 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Contains
// il2cpp: bool Settings_HashSetSetting___Il2CppFullySharedGenericType___Contains (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_3343670* method);
// 0x3443670

bool_conflict
Settings_HashSetSetting<__Il2CppFullySharedGenericType>__Contains
          (Settings_HashSetSetting_T__o *__this,
          Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,MethodInfo_3343670 *method)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  undefined1 local_31;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)&stack0xffffffffffffffb8 + lVar4);
  local_48 = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x60);
    uVar6 = *puVar2;
    pcVar3 = (code *)puVar2[2];
    *(undefined8 *)((long)&pUStack_50 + lVar4) = 0x34436ce;
    (*pcVar3)(uVar6,puVar2,__this,0,&stack0xffffffffffffffc0);
    pvVar5 = local_40;
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)&pUStack_50 + lVar4) = 0x34436f9;
    memcpy(__dest,__src,__n);
    if (local_40 != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar2 = *(undefined8 **)(lVar1 + 0x98);
      uVar6 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar3 = (code *)puVar2[2];
      local_40 = __dest;
      *(undefined8 *)((long)&pUStack_50 + lVar4) = 0x344372e;
      uVar6 = (*pcVar3)(uVar6,puVar2,pvVar5,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),local_31);
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&pUStack_50 + lVar4) = &UNK_03443745;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$Add
// il2cpp: void Settings_HashSetSetting_int___Add (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_3342A50* method);
// 0x3442a50

void Settings_HashSetSetting<int>__Add
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_3342A50 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet<int>__AddIfNotPresent
              (__this_00,item,
               (MethodInfo_3353530 *)
               method->klass->rgctx_data->_11_System_Collections_Generic_HashSet_T__Add->klass->
               rgctx_data[0x15].method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Add
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Add (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_3343750* method);
// 0x3443750

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__Add
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
               MethodInfo_3343750 *method)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)&stack0xffffffffffffffb8 + lVar5);
  local_48 = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x60);
    uVar3 = *puVar2;
    pcVar4 = (code *)puVar2[2];
    *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x34437ae;
    (*pcVar4)(uVar3,puVar2,__this,0,&stack0xffffffffffffffc0);
    pvVar6 = local_40;
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x34437d9;
    memcpy(__dest,__src,__n);
    if (local_40 != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar2 = *(undefined8 **)(lVar1 + 0x58);
      uVar3 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar4 = (code *)puVar2[2];
      local_40 = __dest;
      *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x344380b;
      (*pcVar4)(uVar3,puVar2,pvVar6,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&pUStack_50 + lVar5) = &UNK_0344381f;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$Remove
// il2cpp: void Settings_HashSetSetting_int___Remove (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_3342A90* method);
// 0x3442a90

void Settings_HashSetSetting<int>__Remove
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_3342A90 *method)

{
  System_Collections_Generic_HashSet_int__o *__this_00;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    System_Collections_Generic_HashSet<int>__Remove
              (__this_00,item,
               (MethodInfo_3350700 *)
               method->klass->rgctx_data->_21_System_Collections_Generic_HashSet_T__Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Remove
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Remove (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_3343820* method);
// 0x3443820

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__Remove
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
               MethodInfo_3343820 *method)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUStack_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  
  pUVar7 = item.klass;
  lVar1 = *(long *)(*(long *)((long)item.monitor + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(*(long *)(lVar1 + 0x50) + 0xfc);
  lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)&stack0xffffffffffffffb8 + lVar5);
  local_48 = pUVar7;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar2 = *(undefined8 **)(lVar1 + 0x60);
    uVar3 = *puVar2;
    pcVar4 = (code *)puVar2[2];
    *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x344387e;
    (*pcVar4)(uVar3,puVar2,__this,0,&stack0xffffffffffffffc0);
    pvVar6 = local_40;
    lVar1 = *(long *)((long)item.monitor + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar1 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar7;
    }
    *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x34438a9;
    memcpy(__dest,__src,__n);
    if (local_40 != (void *)0x0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      puVar2 = *(undefined8 **)(lVar1 + 0xa0);
      uVar3 = *puVar2;
      if (-1 < *(int *)(*(long *)(lVar1 + 0x50) + 0x28)) {
        __dest = (undefined8 *)*__dest;
      }
      pcVar4 = (code *)puVar2[2];
      local_40 = __dest;
      *(undefined8 *)((long)&pUStack_50 + lVar5) = 0x34438de;
      (*pcVar4)(uVar3,puVar2,pvVar6,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&pUStack_50 + lVar5) = &UNK_034438f2;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$Toggle
// il2cpp: void Settings_HashSetSetting_int___Toggle (Settings_HashSetSetting_int__o* __this, int32_t item, const MethodInfo_3342AC0* method);
// 0x3442ac0

void Settings_HashSetSetting<int>__Toggle
               (Settings_HashSetSetting_int__o *__this,int32_t item,MethodInfo_3342AC0 *method)

{
  System_Collections_Generic_HashSet_int__o *pSVar1;
  Settings_HashSetSetting_T__RGCTXs *pSVar2;
  bool_conflict bVar3;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value,
     pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
    bVar3 = System_Collections_Generic_HashSet<int>__Contains
                      (pSVar1,item,
                       (MethodInfo_3350460 *)
                       method->klass->rgctx_data->_20_System_Collections_Generic_HashSet_T__Remove);
    pSVar1 = (System_Collections_Generic_HashSet_int__o *)(__this->fields)._value;
    if (pSVar1 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      pSVar2 = method->klass->rgctx_data;
      if ((char)bVar3 != '\0') {
        System_Collections_Generic_HashSet<int>__Remove
                  (pSVar1,item,
                   (MethodInfo_3350700 *)pSVar2->_21_System_Collections_Generic_HashSet_T__Clear);
        return;
      }
      System_Collections_Generic_HashSet<int>__AddIfNotPresent
                (pSVar1,item,
                 (MethodInfo_3353530 *)
                 pSVar2->_11_System_Collections_Generic_HashSet_T__Add->klass->rgctx_data[0x15].
                 method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Toggle
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Toggle (Settings_HashSetSetting_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item, const MethodInfo_3343900* method);
// 0x3443900

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__Toggle
               (Settings_HashSetSetting_T__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o item,
               MethodInfo_3343900 *method)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  Settings_HashSetSetting_T__o *pSVar8;
  void *pvVar9;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 *__dest;
  ulong uVar11;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_70 [2];
  ulong local_60;
  void *local_58;
  Settings_HashSetSetting_T__o *local_50;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_48;
  undefined8 *local_40;
  char local_31;
  
  pvVar9 = item.monitor;
  pUVar10 = item.klass;
  lVar2 = *(long *)(*(long *)((long)pvVar9 + 0x20) + 0xc0);
  uVar11 = (ulong)*(uint *)(*(long *)(lVar2 + 0x50) + 0xfc);
  lVar7 = -(uVar11 + 0xf & 0xfffffffffffffff0);
  __dest = (undefined8 *)((long)apUStack_70 + lVar7 + 8);
  local_48 = pUVar10;
  if (__this != (Settings_HashSetSetting_T__o *)0x0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x60);
    uVar4 = *puVar3;
    pcVar5 = (code *)puVar3[2];
    local_50 = __this;
    *(undefined8 *)((long)apUStack_70 + lVar7) = 0x3443962;
    (*pcVar5)(uVar4,puVar3,__this,0,&stack0xffffffffffffffc0);
    puVar3 = local_40;
    lVar2 = *(long *)((long)pvVar9 + 0x20);
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
    if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
      __src = pUVar10;
    }
    apUStack_70[1] = pUVar10;
    local_58 = pvVar9;
    *(undefined8 *)((long)apUStack_70 + lVar7) = 0x3443994;
    memcpy(__dest,__src,uVar11);
    if (puVar3 != (undefined8 *)0x0) {
      local_60 = uVar11;
      lVar2 = *(long *)(lVar2 + 0xc0);
      puVar6 = *(undefined8 **)(lVar2 + 0x98);
      uVar4 = *puVar6;
      local_40 = __dest;
      if (-1 < *(int *)(*(long *)(lVar2 + 0x50) + 0x28)) {
        local_40 = (undefined8 *)*__dest;
      }
      pcVar5 = (code *)puVar6[2];
      *(undefined8 *)((long)apUStack_70 + lVar7) = 0x34439d9;
      (*pcVar5)(uVar4,puVar6,puVar3,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
      pSVar8 = local_50;
      pvVar9 = local_58;
      puVar3 = *(undefined8 **)(*(long *)(*(long *)((long)local_58 + 0x20) + 0xc0) + 0x60);
      uVar4 = *puVar3;
      pcVar5 = (code *)puVar3[2];
      *(undefined8 *)((long)apUStack_70 + lVar7) = 0x3443a00;
      (*pcVar5)(uVar4,puVar3,pSVar8,0,&stack0xffffffffffffffc0);
      puVar3 = local_40;
      uVar11 = local_60;
      lVar2 = *(long *)((long)pvVar9 + 0x20);
      pUVar10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffb8;
      if (*(int *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x50) + 0x28) < 0) {
        pUVar10 = apUStack_70[1];
      }
      *(undefined8 *)((long)apUStack_70 + lVar7) = 0x3443a2b;
      memcpy(__dest,pUVar10,uVar11);
      if (puVar3 != (undefined8 *)0x0) {
        lVar2 = *(long *)(lVar2 + 0xc0);
        if (local_31 == '\0') {
          puVar6 = *(undefined8 **)(lVar2 + 0x58);
          uVar4 = *puVar6;
          iVar1 = *(int *)(*(long *)(lVar2 + 0x50) + 0x28);
        }
        else {
          puVar6 = *(undefined8 **)(lVar2 + 0xa0);
          uVar4 = *puVar6;
          iVar1 = *(int *)(*(long *)(lVar2 + 0x50) + 0x28);
        }
        if (-1 < iVar1) {
          __dest = (undefined8 *)*__dest;
        }
        pcVar5 = (code *)puVar6[2];
        local_40 = __dest;
        *(undefined8 *)((long)apUStack_70 + lVar7) = 0x3443a66;
        (*pcVar5)(uVar4,puVar6,puVar3,&stack0xffffffffffffffc0,&stack0xffffffffffffffcf);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)apUStack_70 + lVar7) = &UNK_03443a8d;
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<int>$$Clear
// il2cpp: void Settings_HashSetSetting_int___Clear (Settings_HashSetSetting_int__o* __this, const MethodInfo_3342B50* method);
// 0x3442b50

void Settings_HashSetSetting<int>__Clear
               (Settings_HashSetSetting_int__o *__this,MethodInfo_3342B50 *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_HashSet_T__o *pSVar2;
  System_Int32_array *array;
  
  if ((__this != (Settings_HashSetSetting_int__o *)0x0) &&
     (pSVar2 = (__this->fields)._value, pSVar2 != (System_Collections_Generic_HashSet_T__o *)0x0)) {
    length = (pSVar2->fields)._lastIndex;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._slots,0,length,(MethodInfo *)0x0);
      array = (pSVar2->fields)._buckets;
      if (array == (System_Int32_array *)0x0) goto LAB_03442b9d;
      System_Array__Clear((System_Array_o *)array,0,(int32_t)array->max_length,(MethodInfo *)0x0);
      (pSVar2->fields)._count = 0;
      (pSVar2->fields)._lastIndex = 0;
      (pSVar2->fields)._freeList = -1;
    }
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
LAB_03442b9d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.HashSetSetting<__Il2CppFullySharedGenericType>$$Clear
// il2cpp: void Settings_HashSetSetting___Il2CppFullySharedGenericType___Clear (Settings_HashSetSetting_T__o* __this, const MethodInfo_3343A90* method);
// 0x3443a90

void Settings_HashSetSetting<__Il2CppFullySharedGenericType>__Clear
               (Settings_HashSetSetting_T__o *__this,MethodInfo_3343A90 *method)

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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


