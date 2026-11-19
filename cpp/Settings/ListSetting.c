// Type: Settings.ListSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ListSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ListSetting.cs
// --------------------------------

// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, System_Collections_Generic_List_T__o* defaultValue, const MethodInfo_515D3D0* method);
// 0x525d3d0

void Settings_ListSetting_object____ctor
               (Settings_ListSetting_T__o *__this,System_Collections_Generic_List_T__o *defaultValue,
               MethodInfo_515D3D0 *method)

{
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_42DA2C0 *)method->klass->rgctx_data->_1_Settings_TypedSetting_List_T____ctor);
  return;
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_515D3F0* method);
// 0x525d3f0

void Settings_ListSetting_object____ctor_515d3f0
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_515D3F0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_42DA2B0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_List_object____ctor
            (__this_00,
             (MethodInfo_395C910 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar3 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = defaultValue;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,defaultValue,(MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
      (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, int32_t count, const MethodInfo_515D4F0* method);
// 0x525d4f0

void Settings_ListSetting_object____ctor_515d4f0
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,int32_t count,
               MethodInfo_515D4F0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  
  method_00 = (MethodInfo *)method;
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_42DA2B0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_List_object____ctor
            (__this_00,
             (MethodInfo_395C910 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (defaultValue == (Il2CppObject *)0x0) {
label_0525d5b2:
    ThrowNullReferenceException();
  }
  uVar4 = (*defaultValue->klass->vtable[5].methodPtr)(defaultValue,defaultValue->klass->vtable[5].method);
  if (0 < count) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
      pMVar6 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
      pIVar5 = System_Activator__CreateInstance_object_((MethodInfo_333BC30 *)pMVar6);
      Settings_ListSetting_object___CopyLimits
                ((Settings_ListSetting_T__o *)pMVar6,defaultValue,pIVar5,(MethodInfo_515E200 *)method_00);
      if (pIVar5 != (Il2CppObject *)0x0) {
        (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,uVar4,pIVar5->klass->vtable[6].method);
        ThrowNullReferenceException();
      }
      goto label_0525d5b2;
    }
    do {
      while( true ) {
        pMVar6 = method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_;
        pIVar5 = System_Activator__CreateInstance_object_((MethodInfo_333BC30 *)pMVar6);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pMVar6,defaultValue,pIVar5,(MethodInfo_515E200 *)method_00);
        if (pIVar5 == (Il2CppObject *)0x0) goto label_0525d5b2;
        (*pIVar5->klass->vtable[6].methodPtr)(pIVar5,uVar4,pIVar5->klass->vtable[6].method);
        method_00 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_0525d5b2;
        uVar2 = (__this_00->fields)._size;
        if ((uint)pSVar3->max_length <= uVar2) break;
        method_00 = (MethodInfo *)(ulong)(uVar2 + 1);
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pIVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        count = count + -1;
        if (count == 0) goto label_0525d670;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,pIVar5,(MethodInfo_395D230 *)method_00->klass->rgctx_data[0xe].method);
      count = count + -1;
    } while (count != 0);
  }
label_0525d670:
  (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, const MethodInfo_515D6D0* method);
// 0x525d6d0

void Settings_ListSetting_object____ctor_515d6d0(Settings_ListSetting_T__o *__this,MethodInfo_515D6D0 *method)

{
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 extraout_RDX;
  
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_42DA2B0 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_List_object____ctor
            (__this_00,
             (MethodInfo_395C910 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue);
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.ListSetting<object>$$SetDefault
// il2cpp: void Settings_ListSetting_object___SetDefault (Settings_ListSetting_T__o* __this, const MethodInfo_515D760* method);
// 0x525d760
// eh: try 0x525d83f..0x525d976 -> pad 0x525d97e (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x525d99e..0x525d9a3 -> pad 0x525da0a cleanup
// eh: try 0x525da0d..0x525da17 -> pad 0x525da1f catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x525d976: jmp 0x525d986
// asm:   0x525d978: jmp 0x525d986
// asm:   0x525d97a: jmp 0x525d986
// asm:   0x525d97c: jmp 0x525d986
// asm:   0x525d97e: jmp 0x525d986
// asm:   0x525d980: jmp 0x525d986
// asm:   0x525d982: jmp 0x525d986
// asm:   0x525d984: jmp 0x525d986
// asm:   0x525d986: mov rbx, rax
// asm:   0x525d989: cmp edx, 1
// asm:   0x525d98c: jne 0x525da0d
// asm:   0x525d98e: mov rdi, rbx
// asm:   0x525d991: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x525d996: mov r15, qword ptr [rax]
// asm:   0x525d999: mov qword ptr [rsp + 8], r15
// asm:   0x525d99e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x525da02: mov rdi, r15
// asm:   0x525da05: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x525da0a: mov rbx, rax
// asm:   0x525da0d: lea rdi, [rsp + 8]
// asm:   0x525da12: call 0x2d43bb0  ; il2cpp_runtime_helper_02d43bb0()
// asm:   0x525da17: mov rdi, rbx
// asm:   0x525da1a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x525da1f: mov rdi, rax
// asm:   0x525da22: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_ListSetting_object___SetDefault(Settings_ListSetting_T__o *__this,MethodInfo_515D760 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *to;
  Il2CppObject *from;
  undefined8 uVar6;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_object__o *pSVar7;
  undefined1 auStack_68 [16];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_58;
  Il2CppObject *pIStack_50;
  undefined1 auStack_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  Il2CppObject *pIStack_38;
  
  auStack_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  pIStack_38 = (Il2CppObject *)0x0;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  auStack_68._0_8_ = method;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_List_object____ctor
            (__this_00,
             (MethodInfo_395C910 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  pSVar7 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
  if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)(auStack_68 + 8),pSVar7,
               (MethodInfo_395E050 *)
               method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
    pIStack_38 = pIStack_50;
    auStack_48 = (undefined1  [8])auStack_68._8_8_;
    pSStack_40 = pSStack_58;
    auStack_68._8_8_ = (System_Collections_Generic_List_T__o *)0x0;
    pSStack_58 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
    pIStack_50 = (Il2CppObject *)auStack_68;
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                              (MethodInfo_4C45C50 *)
                              (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
                              _15_System_Collections_Generic_List_Enumerator_T__MoveNext), pIVar4 = pIStack_38
          , bVar5) {
      to = System_Activator__CreateInstance_object_
                     ((MethodInfo_333BC30 *)
                      (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
                      _8_System_Activator_CreateInstance_T_);
      pSVar7 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
      if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      if (0 < (pSVar7->fields)._size) {
        from = System_Collections_Generic_List_object___get_Item
                         (pSVar7,0,(MethodInfo_395CF20 *)
                                   (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
                                   _14_Settings_ListSetting_T__CopyDefaultLimits->klass->rgctx_data[0x14].
                                   method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)pSVar7,from,to,(MethodInfo_515E200 *)in_RCX);
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      uVar6 = (*pIVar4->klass->vtable[5].methodPtr)(pIVar4,pIVar4->klass->vtable[5].method);
      if (to == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*to->klass->vtable[6].methodPtr)(to,uVar6,to->klass->vtable[6].method);
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_0525d962:
        ThrowNullReferenceException();
      }
      in_RCX = (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
               _6_System_Collections_Generic_List_T__Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto label_0525d962;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        in_RCX = (MethodInfo *)(ulong)(uVar2 + 1);
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = to;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,to,(MethodInfo_395D230 *)in_RCX->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
               (MethodInfo_4C45C40 *)
               (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
               _17_Settings_TypedSetting_List_T___set_Value);
    if (__this != (Settings_ListSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                 (MethodInfo_42DA280 *)
                 (*(Settings_ListSetting_T__c **)(auStack_68._0_8_ + 0x20))->rgctx_data->
                 _18_Settings_TypedSetting_List_T___get_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$DeserializeFromJsonObject
// il2cpp: void Settings_ListSetting_object___DeserializeFromJsonObject (Settings_ListSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_515DA30* method);
// 0x525da30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x525db10: mov r12, rsp
// asm:   0x525db13: jmp 0x525db4c

void Settings_ListSetting_object___DeserializeFromJsonObject
               (Settings_ListSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo_515DA30 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  bool bVar4;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  Il2CppObject *to;
  Il2CppObject *from;
  SimpleJSONFixed_JSONArray_c *method_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_075424ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075424ff = '\x01';
  }
  SStack_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.m_Array.fields._index = 0;
  SStack_78.m_Array.fields._version = 0;
  SStack_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_78.m_Object.fields._getEnumeratorRetType = 0;
  SStack_78.m_Object.fields._36_4_ = 0;
  SStack_78.m_Object.fields._version = 0;
  SStack_78.m_Object.fields._index = 0;
  SStack_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_78.type = 0;
  SStack_78._4_4_ = 0;
  SStack_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_List_object____ctor
            (__this_00,
             (MethodInfo_395C910 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if ((json == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar5 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                         (json,(json->klass->vtable)._45_get_AsArray.method),
     pSVar5 == (SimpleJSONFixed_JSONArray_o *)0x0)) {
label_0525dc80:
    ThrowNullReferenceException();
  }
  method_00 = pSVar5->klass;
  (*(method_00->vtable)._32_GetEnumerator.methodPtr)
            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,pSVar5,
             (method_00->vtable)._32_GetEnumerator.method);
  bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
  if (bVar4) {
    do {
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
      to = System_Activator__CreateInstance_object_
                     ((MethodInfo_333BC30 *)method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
      __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_0525dc80;
      if (0 < (__this_01->fields)._size) {
        from = System_Collections_Generic_List_object___get_Item
                         (__this_01,0,
                          (MethodInfo_395CF20 *)
                          method->klass->rgctx_data->_14_Settings_ListSetting_T__CopyDefaultLimits->klass->
                          rgctx_data[0x14].method);
        Settings_ListSetting_object___CopyLimits
                  ((Settings_ListSetting_T__o *)__this_01,from,to,(MethodInfo_515E200 *)method_00);
      }
      if ((to == (Il2CppObject *)0x0) ||
         ((*to->klass->vtable[6].methodPtr)(to,pSVar6,to->klass->vtable[6].method),
         __this_00 == (System_Collections_Generic_List_object__o *)0x0)) goto label_0525dc80;
      method_00 = (SimpleJSONFixed_JSONArray_c *)
                  method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto label_0525dc80;
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        method_00 = (SimpleJSONFixed_JSONArray_c *)(ulong)(uVar2 + 1);
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = to;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,to,
                   *(MethodInfo_395D230 **)(*(long *)((long)(method_00->_1).byval_arg.data + 0xc0) + 0x70));
      }
      bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
    } while (bVar4);
  }
  else if (__this == (Settings_ListSetting_T__o *)0x0) goto label_0525dc80;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
             (MethodInfo_42DA280 *)method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
  return;
}


// Settings.ListSetting<object>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ListSetting_object___SerializeToJsonObject (Settings_ListSetting_T__o* __this, const MethodInfo_515DC90* method);
// 0x525dc90
// eh: try 0x525dd64..0x525de2a -> pad 0x525de32 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x525de4c..0x525de51 -> pad 0x525de56 cleanup
// eh: try 0x525de59..0x525de63 -> pad 0x525de6b catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x525ddc3: xor r14d, r14d
// asm:   0x525ddfe: mov rdi, r14
// asm:   0x525de01: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x525de2a: jmp 0x525de34
// asm:   0x525de2c: jmp 0x525de34
// asm:   0x525de2e: jmp 0x525de34
// asm:   0x525de30: jmp 0x525de34
// asm:   0x525de32: jmp 0x525de34
// asm:   0x525de34: mov r14, rax
// asm:   0x525de37: cmp edx, 1
// asm:   0x525de3a: jne 0x525de59
// asm:   0x525de3c: mov rdi, r14
// asm:   0x525de3f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x525de44: mov r14, qword ptr [rax]
// asm:   0x525de47: mov qword ptr [rsp + 0x28], r14
// asm:   0x525de4c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x525de51: jmp 0x525ddc6
// asm:   0x525de56: mov r14, rax
// asm:   0x525de59: lea rdi, [rsp + 0x28]
// asm:   0x525de5e: call 0x2d43bf0  ; il2cpp_runtime_helper_02d43bf0()
// asm:   0x525de63: mov rdi, r14
// asm:   0x525de66: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x525de6b: mov rdi, rax
// asm:   0x525de6e: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_ListSetting_object___SerializeToJsonObject
          (Settings_ListSetting_T__o *__this,MethodInfo_515DC90 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  bool bVar1;
  SimpleJSONFixed_JSONArray_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo_515DC90 *pMStack_50;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  System_Collections_Generic_List_Enumerator_T__o *pSStack_28;
  MethodInfo_515DC90 **ppMStack_20;
  
  pMStack_50 = method;
  if (Il2CppMethodInitialized_07542500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    Il2CppMethodInitialized_07542500 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_48,__this_00,
             (MethodInfo_395E050 *)
             method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
  uStack_30 = 0;
  ppMStack_20 = &pMStack_50;
  pSStack_28 = &SStack_48;
  if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                       (MethodInfo_4C45C50 *)
                       method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if (bVar1) {
      if (SStack_48.fields._current != (Il2CppObject *)0x0) {
        (*(SStack_48.fields._current)->klass->vtable[5].methodPtr)
                  (SStack_48.fields._current,(SStack_48.fields._current)->klass->vtable[5].method);
        ThrowNullReferenceException();
      }
label_0525de10:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                              (MethodInfo_4C45C50 *)
                              pMStack_50->klass->rgctx_data->
                              _15_System_Collections_Generic_List_Enumerator_T__MoveNext), bVar1) {
      if (SStack_48.fields._current == (Il2CppObject *)0x0) goto label_0525de10;
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(SStack_48.fields._current)->klass->vtable[5].methodPtr)
                         (SStack_48.fields._current,(SStack_48.fields._current)->klass->vtable[5].method);
      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                (__this_01,pSVar2,(__this_01->klass->vtable)._21_Add.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
             (MethodInfo_4C45C40 *)pMStack_50->klass->rgctx_data->_17_Settings_TypedSetting_List_T___set_Value
            );
  return (SimpleJSONFixed_JSONNode_o *)__this_01;
}


// Settings.ListSetting<object>$$GetCount
// il2cpp: int32_t Settings_ListSetting_object___GetCount (Settings_ListSetting_T__o* __this, const MethodInfo_515DE80* method);
// 0x525de80

int32_t Settings_ListSetting_object___GetCount(Settings_ListSetting_T__o *__this,MethodInfo_515DE80 *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (pSVar1 = (__this->fields)._value, pSVar1 == (System_Collections_Generic_List_T__o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size;
}


// Settings.ListSetting<object>$$GetItemAt
// il2cpp: Settings_BaseSetting_o* Settings_ListSetting_object___GetItemAt (Settings_ListSetting_T__o* __this, int32_t index, const MethodInfo_515DEA0* method);
// 0x525dea0

Settings_BaseSetting_o *
Settings_ListSetting_object___GetItemAt
          (Settings_ListSetting_T__o *__this,int32_t index,MethodInfo_515DEA0 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Settings_BaseSetting_o *pSVar1;
  
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = (Settings_BaseSetting_o *)
           System_Collections_Generic_List_object___get_Item
                     (__this_00,index,
                      (MethodInfo_395CF20 *)
                      method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
  return pSVar1;
}


// Settings.ListSetting<object>$$GetItems
// il2cpp: System_Collections_Generic_List_BaseSetting__o* Settings_ListSetting_object___GetItems (Settings_ListSetting_T__o* __this, const MethodInfo_515DED0* method);
// 0x525ded0
// eh: try 0x525dfcf..0x525e08d -> pad 0x525e09c (+4 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x525e0b8..0x525e0bd -> pad 0x525e0bf cleanup
// eh: try 0x525e0c2..0x525e0cc -> pad 0x525e0d4 catch (...) [compiler noexcept guard]
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x525e04e: xor r14d, r14d
// asm:   0x525e092: mov rdi, r14
// asm:   0x525e095: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x525e09a: jmp 0x525e0a0
// asm:   0x525e09c: jmp 0x525e0a0
// asm:   0x525e09e: jmp 0x525e0a0
// asm:   0x525e0a0: mov rbx, rax
// asm:   0x525e0a3: cmp edx, 1
// asm:   0x525e0a6: jne 0x525e0c2
// asm:   0x525e0a8: mov rdi, rbx
// asm:   0x525e0ab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x525e0b0: mov r14, qword ptr [rax]
// asm:   0x525e0b3: mov qword ptr [rsp + 0x28], r14
// asm:   0x525e0b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x525e0bd: jmp 0x525e051
// asm:   0x525e0bf: mov rbx, rax
// asm:   0x525e0c2: lea rdi, [rsp + 0x28]
// asm:   0x525e0c7: call 0x2d43c30  ; il2cpp_runtime_helper_02d43c30()
// asm:   0x525e0cc: mov rdi, rbx
// asm:   0x525e0cf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x525e0d4: mov rdi, rax
// asm:   0x525e0d7: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_BaseSetting__o *
Settings_ListSetting_object___GetItems(Settings_ListSetting_T__o *__this,MethodInfo_515DED0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_BaseSetting_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_BaseSetting__o *__this_01;
  MethodInfo_515DED0 *local_60;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  System_Collections_Generic_List_Enumerator_T__o *local_38;
  MethodInfo_515DED0 **local_30;
  
  local_60 = method;
  if (Il2CppMethodInitialized_07542501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseSetting);
    Il2CppMethodInitialized_07542501 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 == (System_Collections_Generic_List_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,__this_00,
             (MethodInfo_395E050 *)
             method->klass->rgctx_data->_10_System_Collections_Generic_List_T__GetEnumerator);
  local_40 = 0;
  local_30 = &local_60;
  local_38 = &local_58;
  if (__this_01 == (System_Collections_Generic_List_BaseSetting__o *)0x0) {
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       method->klass->rgctx_data->_15_System_Collections_Generic_List_Enumerator_T__MoveNext);
    if (bVar5) {
label_0525e088:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                              (MethodInfo_4C45C50 *)
                              method->klass->rgctx_data->
                              _15_System_Collections_Generic_List_Enumerator_T__MoveNext),
          pMVar4 = MethodInfo_System_Collections_Generic_List_BaseSetting_Add, bVar5) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_01->fields)._items;
      if (pSVar3 == (Settings_BaseSetting_array *)0x0) goto label_0525e088;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Settings_BaseSetting_o *)local_58.fields._current;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,local_58.fields._current,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      method = local_60;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
             (MethodInfo_4C45C40 *)local_60->klass->rgctx_data->_17_Settings_TypedSetting_List_T___set_Value);
  return __this_01;
}


// Settings.ListSetting<object>$$AddItem
// il2cpp: void Settings_ListSetting_object___AddItem (Settings_ListSetting_T__o* __this, Settings_BaseSetting_o* item, const MethodInfo_515E0E0* method);
// 0x525e0e0

void Settings_ListSetting_object___AddItem
               (Settings_ListSetting_T__o *__this,Settings_BaseSetting_o *item,MethodInfo_515E0E0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppClass *klass;
  Il2CppObject *item_00;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    klass = method->klass->rgctx_data->_5_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (item == (Settings_BaseSetting_o *)0x0) {
      item_00 = (Il2CppObject *)0x0;
    }
    else {
      item_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)item,klass);
      if (item_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(item,klass);
      }
    }
    pMVar3 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = item_00;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,item_00,(MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$Clear
// il2cpp: void Settings_ListSetting_object___Clear (Settings_ListSetting_T__o* __this, const MethodInfo_515E1C0* method);
// 0x525e1c0

void Settings_ListSetting_object___Clear(Settings_ListSetting_T__o *__this,MethodInfo_515E1C0 *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if ((__this == (Settings_ListSetting_T__o *)0x0) ||
     (pSVar2 = (__this->fields)._value, pSVar2 == (System_Collections_Generic_List_T__o *)0x0)) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (length < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  return;
}


// Settings.ListSetting<object>$$CopyLimits
// il2cpp: void Settings_ListSetting_object___CopyLimits (Settings_ListSetting_T__o* __this, Il2CppObject* from, Il2CppObject* to, const MethodInfo_515E200* method);
// 0x525e200

void Settings_ListSetting_object___CopyLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *from,Il2CppObject *to,
               MethodInfo_515E200 *method)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Settings_FloatSetting_c *pSVar5;
  Settings_IntSetting_c *pSVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  Il2CppClass *pIVar9;
  
  if (Il2CppMethodInitialized_07542502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_NameSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_07542502 = '\x01';
  }
  pSVar6 = TypeInfo_Settings_IntSetting;
  pSVar5 = TypeInfo_Settings_FloatSetting;
  if (from == (Il2CppObject *)0x0) {
    return;
  }
  pIVar4 = from->klass;
  bVar1 = (pIVar4->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
    bVar2 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
    uVar8 = (ulong)bVar2;
    if ((bVar1 < bVar2) ||
       (pIVar9 = (Il2CppClass *)TypeInfo_Settings_ColorSetting,
       (pIVar4->_2).typeHierarchy[uVar8 - 1] != (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
      bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        if (to != (Il2CppObject *)0x0) {
          if ((bVar2 <= (to->klass->_2).typeHierarchyDepth) &&
             ((to->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting
             )) {
            *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
            if ((bVar2 <= (from->klass->_2).typeHierarchyDepth) &&
               ((from->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)pSVar5)) {
              *(undefined4 *)((long)&to[2].klass + 4) = *(undefined4 *)((long)&from[2].klass + 4);
              return;
            }
            goto label_0525e4ab;
          }
          goto label_0525e49e;
        }
        goto label_0525e4a6;
      }
      bVar2 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      uVar8 = (ulong)bVar2;
      if ((bVar1 < bVar2) ||
         (pIVar9 = (Il2CppClass *)TypeInfo_Settings_StringSetting,
         (pIVar4->_2).typeHierarchy[uVar8 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
        bVar2 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
        if (bVar1 < bVar2) {
          return;
        }
        if ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Settings_NameSetting) {
          return;
        }
        pIVar7 = il2cpp_codegen_is_inst_class(from,(Il2CppClass *)TypeInfo_Settings_NameSetting);
        if (pIVar7 != (Il2CppObject *)0x0) {
          pIVar7 = il2cpp_codegen_is_inst_class(from,(Il2CppClass *)TypeInfo_Settings_NameSetting);
          uVar3 = *(undefined4 *)&pIVar7[2].monitor;
          pIVar7 = il2cpp_codegen_is_inst_class(to,(Il2CppClass *)TypeInfo_Settings_NameSetting);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pIVar7 = il2cpp_codegen_is_inst_class(to,(Il2CppClass *)TypeInfo_Settings_NameSetting);
            *(undefined4 *)&pIVar7[2].monitor = uVar3;
            pIVar7 = il2cpp_codegen_is_inst_class(from,(Il2CppClass *)TypeInfo_Settings_NameSetting);
            if (pIVar7 != (Il2CppObject *)0x0) {
              pIVar7 = il2cpp_codegen_is_inst_class(from,(Il2CppClass *)TypeInfo_Settings_NameSetting);
              uVar3 = *(undefined4 *)((long)&pIVar7[2].monitor + 4);
              pIVar7 = il2cpp_codegen_is_inst_class(to,(Il2CppClass *)TypeInfo_Settings_NameSetting);
              if (pIVar7 != (Il2CppObject *)0x0) {
                pIVar7 = il2cpp_codegen_is_inst_class(to,(Il2CppClass *)TypeInfo_Settings_NameSetting);
                *(undefined4 *)((long)&pIVar7[2].monitor + 4) = uVar3;
                return;
              }
            }
          }
        }
        goto label_0525e4a6;
      }
    }
    if (to == (Il2CppObject *)0x0) {
label_0525e4a6:
      ThrowNullReferenceException();
    }
    if (((byte)uVar8 <= (to->klass->_2).typeHierarchyDepth) &&
       ((to->klass->_2).typeHierarchy[uVar8 - 1] == pIVar9)) {
      *(undefined4 *)&to[2].monitor = *(undefined4 *)&from[2].monitor;
      return;
    }
  }
  else {
    if (to == (Il2CppObject *)0x0) goto label_0525e4a6;
    if ((bVar2 <= (to->klass->_2).typeHierarchyDepth) &&
       ((to->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
      if ((bVar2 <= (from->klass->_2).typeHierarchyDepth) &&
         ((from->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)pSVar6)) {
        *(undefined4 *)((long)&to[2].klass + 4) = *(undefined4 *)((long)&from[2].klass + 4);
        return;
      }
label_0525e4ab:
      il2cpp_codegen_raise_invalid_cast_exception(from);
    }
  }
label_0525e49e:
  il2cpp_codegen_raise_invalid_cast_exception(to);
}


// Settings.ListSetting<object>$$CopyDefaultLimits
// il2cpp: void Settings_ListSetting_object___CopyDefaultLimits (Settings_ListSetting_T__o* __this, Il2CppObject* to, const MethodInfo_515E4C0* method);
// 0x525e4c0

void Settings_ListSetting_object___CopyDefaultLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *to,MethodInfo_515E4C0 *method)

{
  Il2CppObject *from;
  MethodInfo_515E200 *in_RCX;
  System_Collections_Generic_List_object__o *__this_00;
  
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._size < 1) {
    return;
  }
  from = System_Collections_Generic_List_object___get_Item
                   (__this_00,0,
                    (MethodInfo_395CF20 *)
                    method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
  Settings_ListSetting_object___CopyLimits((Settings_ListSetting_T__o *)__this_00,from,to,in_RCX);
  return;
}


