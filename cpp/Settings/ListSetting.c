// Type: Settings.ListSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ListSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ListSetting.cs
// --------------------------------

// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, System_Collections_Generic_List_T__o* defaultValue, const MethodInfo_1755D40* method);
// 0x181755d40

void Settings_ListSetting_object____ctor
               (Settings_ListSetting_T__o *__this,System_Collections_Generic_List_T__o *defaultValue,
               MethodInfo_1755D40 *method)

{
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)method->klass->rgctx_data->_1_Settings_TypedSetting_HashSet_T____ctor);
  return;
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, const MethodInfo_182B830* method);
// 0x18182b830

void Settings_ListSetting_object____ctor_182b830
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,MethodInfo_182B830 *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pMVar3 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_00->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar4->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[(int)uVar2] = defaultValue;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,defaultValue);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,defaultValue,(MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,__this_00);
      (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, Il2CppObject* defaultValue, int32_t count, const MethodInfo_182B9E0* method);
// 0x18182b9e0

void Settings_ListSetting_object____ctor_182b9e0
               (Settings_ListSetting_T__o *__this,Il2CppObject *defaultValue,int32_t count,
               MethodInfo_182B9E0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar5;
  Il2CppObject *to;
  int iVar6;
  
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (defaultValue != (Il2CppObject *)0x0) {
    uVar5 = (*defaultValue->klass->vtable[5].methodPtr)(defaultValue,defaultValue->klass->vtable[5].method);
    if (0 < count) {
      iVar6 = 0;
      do {
        to = System_Activator__CreateInstance_object_
                       ((MethodInfo_5D2E30 *)method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_)
        ;
        Settings_ListSetting_object___CopyLimits
                  (__this,defaultValue,to,
                   (MethodInfo_182A8F0 *)method->klass->rgctx_data->_9_Settings_ListSetting_T__CopyLimits);
        if (to == (Il2CppObject *)0x0) goto label_18182bb9b;
        (*to->klass->vtable[6].methodPtr)(to,uVar5,to->klass->vtable[6].method);
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_18182bb9b;
        pSVar3 = (__this_00->fields)._items;
        pMVar4 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pSVar3 == (System_Object_array *)0x0) goto label_18182bb9b;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3->m_Items[(int)uVar2] = to;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,to);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,to,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < count);
    }
    (__this->fields).DefaultValue = (System_Collections_Generic_List_T__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,__this_00);
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
    return;
  }
label_18182bb9b:
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$.ctor
// il2cpp: void Settings_ListSetting_object____ctor (Settings_ListSetting_T__o* __this, const MethodInfo_182B940* method);
// 0x18182b940

void Settings_ListSetting_object____ctor_182b940(Settings_ListSetting_T__o *__this,MethodInfo_182B940 *method)

{
  Il2CppClass *klass;
  System_Collections_Generic_List_T__o *__this_00;
  
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)method->klass->rgctx_data->_3_Settings_TypedSetting_List_T____ctor);
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_T__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  (__this->fields).DefaultValue = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DefaultValue,__this_00);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.ListSetting<object>$$SetDefault
// il2cpp: void Settings_ListSetting_object___SetDefault (Settings_ListSetting_T__o* __this, const MethodInfo_182B520* method);
// 0x18182b520
// eh: try 0x18182b600..0x18182b826 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18182b78d: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18182b792: mov rcx, qword ptr [rax]
// asm:   0x18182b795: mov rax, qword ptr [rcx + 0x20]
// asm:   0x18182b799: mov rdx, qword ptr [rax + 0xc0]
// asm:   0x18182b7a0: mov rdx, qword ptr [rdx + 0x80]
// asm:   0x18182b7a7: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18182b7ac: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18182b7b1: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18182b7b6: test rcx, rcx
// asm:   0x18182b7b9: jne 0x18182b826
// asm:   0x18182b7bb: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x18182b7c3: mov rbx, qword ptr [rsp + 0xb0]
// asm:   0x18182b826: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Settings_ListSetting_object___SetDefault(Settings_ListSetting_T__o *__this,MethodInfo_182B520 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *pMVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_02;
  Il2CppObject *to;
  Il2CppObject *from;
  undefined8 uVar7;
  Il2CppObject local_res10;
  System_Collections_Generic_List_Enumerator_object__o local_70;
  undefined1 local_58 [16];
  Il2CppObject *local_48;
  
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  local_res10.klass = (Il2CppClass *)method;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)
             (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
             _4_System_Collections_Generic_List_T___ctor);
  __this_00 = (__this->fields).DefaultValue;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res10.monitor = __this_02;
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_58,__this_00,
             (MethodInfo_91F180 *)
             (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
             _10_System_Collections_Generic_List_T__GetEnumerator);
  local_70.fields._list = (System_Collections_Generic_List_T__o *)local_58._0_8_;
  local_70.fields._index = local_58._8_4_;
  local_70.fields._version = local_58._12_4_;
  local_70.fields._current = local_48;
  local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48 = &local_res10;
  local_58._8_8_ = &local_70;
  while( true ) {
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_70,
                       (MethodInfo_153A2A0 *)
                       (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
                       _15_System_Collections_Generic_List_Enumerator_T__MoveNext);
    pIVar5 = local_70.fields._current;
    if (!bVar6) {
      System_Configuration_ConfigurationCollectionAttribute___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
                 (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
                 _17_Settings_TypedSetting_List_T___set_Value);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_02,
                 (MethodInfo_E8F4C0 *)
                 (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
                 _18_Settings_TypedSetting_List_T___get_Value);
      return;
    }
    to = System_Activator__CreateInstance_object_
                   ((MethodInfo_5D2E30 *)
                    (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
                    _8_System_Activator_CreateInstance_T_);
    __this_01 = (System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (__this_01->fields)._size) {
      pMVar3 = (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->
               _14_Settings_ListSetting_T__CopyDefaultLimits;
      from = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (__this_01,0,(MethodInfo_92B830 *)pMVar3->klass->rgctx_data[0x14].method);
      Settings_ListSetting_object___CopyLimits
                (__this,from,to,(MethodInfo_182A8F0 *)pMVar3->klass->rgctx_data[9].method);
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    uVar7 = (*pIVar5->klass->vtable[5].methodPtr)(pIVar5,pIVar5->klass->vtable[5].method);
    if (to == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    (*to->klass->vtable[6].methodPtr)(to,uVar7,to->klass->vtable[6].method);
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) break;
    pMVar3 = (((local_res10.klass)->_1).byval_arg.data)->rgctx_data->_6_System_Collections_Generic_List_T__Add
    ;
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (__this_02->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (__this_02->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (__this_02->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar4->m_Items[(int)uVar2] = to;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,to);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_02,to,(MethodInfo_93DD50 *)pMVar3->klass->rgctx_data[0xe].method);
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$DeserializeFromJsonObject
// il2cpp: void Settings_ListSetting_object___DeserializeFromJsonObject (Settings_ListSetting_T__o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo_182AE20* method);
// 0x18182ae20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18182af4f: nop 

void Settings_ListSetting_object___DeserializeFromJsonObject
               (Settings_ListSetting_T__o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo_182AE20 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  bool bVar7;
  Il2CppClass *klass;
  System_Collections_Generic_List_object__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Il2CppObject *to;
  Il2CppObject *from;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_e8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_98;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  SimpleJSONFixed_JSONNode_Enumerator_o local_78;
  
  if (Il2CppMethodInitialized_184341baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184341baa = '\x01';
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
  klass = method->klass->rgctx_data->_0_System_Collections_Generic_List_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_codegen_object_new(klass);
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)method->klass->rgctx_data->_4_System_Collections_Generic_List_T___ctor);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar8 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      pSVar9 = (*(pSVar8->klass->vtable)._32_GetEnumerator.methodPtr)
                         (&local_78,pSVar8,(pSVar8->klass->vtable)._32_GetEnumerator.method);
      local_e8.type = (pSVar9->fields).type;
      local_e8._4_4_ = *(undefined4 *)&(pSVar9->fields).field_0x4;
      local_e8.m_Object.fields._dictionary = (pSVar9->fields).m_Object.fields._dictionary;
      local_e8.m_Object.fields._version = (pSVar9->fields).m_Object.fields._version;
      local_e8.m_Object.fields._index = (pSVar9->fields).m_Object.fields._index;
      local_e8.m_Object.fields._current.fields.key = (pSVar9->fields).m_Object.fields._current.fields.key;
      local_e8.m_Object.fields._current.fields.value = (pSVar9->fields).m_Object.fields._current.fields.value;
      local_e8.m_Object.fields._getEnumeratorRetType = (pSVar9->fields).m_Object.fields._getEnumeratorRetType;
      local_e8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar9->fields).m_Object.fields.field_0x24;
      local_e8.m_Array.fields._list = (pSVar9->fields).m_Array.fields._list;
      local_e8.m_Array.fields._index = (pSVar9->fields).m_Array.fields._index;
      local_e8.m_Array.fields._version = (pSVar9->fields).m_Array.fields._version;
      local_e8.m_Array.fields._current = (pSVar9->fields).m_Array.fields._current;
      bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
      if (bVar7) {
        do {
          pSVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (&local_88,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_e8,(MethodInfo *)0x0)
          ;
          pSVar6 = (pSVar10->fields).key;
          pSVar11 = (pSVar10->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_98.fields.key = pSVar6;
          local_98.fields.value = pSVar11;
          pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_98,(MethodInfo *)0x0);
          to = System_Activator__CreateInstance_object_
                         ((MethodInfo_5D2E30 *)
                          method->klass->rgctx_data->_8_System_Activator_CreateInstance_T_);
          pSVar3 = (__this->fields).DefaultValue;
          if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_18182b0f3;
          if (0 < (pSVar3->fields)._size) {
            pMVar4 = method->klass->rgctx_data->_14_Settings_ListSetting_T__CopyDefaultLimits;
            from = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue,0,
                              (MethodInfo_92B830 *)pMVar4->klass->rgctx_data[0x14].method);
            Settings_ListSetting_object___CopyLimits
                      (__this,from,to,(MethodInfo_182A8F0 *)pMVar4->klass->rgctx_data[9].method);
          }
          if (to == (Il2CppObject *)0x0) goto label_18182b0f3;
          (*to->klass->vtable[6].methodPtr)(to,pSVar11,to->klass->vtable[6].method);
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_18182b0f3;
          pSVar5 = (__this_00->fields)._items;
          pMVar4 = method->klass->rgctx_data->_6_System_Collections_Generic_List_T__Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          if (pSVar5 == (System_Object_array *)0x0) goto label_18182b0f3;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            if ((uint)pSVar5->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar5->m_Items[(int)uVar2] = to;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,to);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,to,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_e8,(MethodInfo *)0x0);
        } while (bVar7);
      }
      if (__this != (Settings_ListSetting_T__o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)__this_00,
                   (MethodInfo_E8F4C0 *)
                   method->klass->rgctx_data->_18_Settings_TypedSetting_List_T___get_Value);
        return;
      }
    }
  }
label_18182b0f3:
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_ListSetting_object___SerializeToJsonObject (Settings_ListSetting_T__o* __this, const MethodInfo_182B370* method);
// 0x18182b370
// eh: try 0x18182b440..0x18182b51a -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18182b4c0: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18182b4c5: mov rcx, qword ptr [rax]
// asm:   0x18182b4c8: mov rax, qword ptr [rcx + 0x20]
// asm:   0x18182b4cc: mov rdx, qword ptr [rax + 0xc0]
// asm:   0x18182b4d3: mov rdx, qword ptr [rdx + 0x80]
// asm:   0x18182b4da: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18182b4df: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18182b4e4: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18182b4e9: test rcx, rcx
// asm:   0x18182b4ec: jne 0x18182b51a
// asm:   0x18182b4ee: mov rbx, qword ptr [rsp + 0x70]
// asm:   0x18182b51a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
Settings_ListSetting_object___SerializeToJsonObject
          (Settings_ListSetting_T__o *__this,MethodInfo_182B370 *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  bool bVar1;
  SimpleJSONFixed_JSONArray_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Il2CppClass *local_res10;
  System_Collections_Generic_List_Enumerator_object__o local_40;
  undefined1 local_28 [16];
  Il2CppObject *local_18;
  
  local_res10 = (Il2CppClass *)method;
  if (Il2CppMethodInitialized_184341bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    Il2CppMethodInitialized_184341bab = '\x01';
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (__this->fields)._value, __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_28,__this_00,
               (MethodInfo_91F180 *)
               ((local_res10->_1).byval_arg.data)->rgctx_data->
               _10_System_Collections_Generic_List_T__GetEnumerator);
    local_40.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
    local_40.fields._index = local_28._8_4_;
    local_40.fields._version = local_28._12_4_;
    local_40.fields._current = local_18;
    local_28._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_18 = (Il2CppObject *)&local_res10;
    local_28._8_8_ = &local_40;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_40,
                         (MethodInfo_153A2A0 *)
                         ((local_res10->_1).byval_arg.data)->rgctx_data->
                         _15_System_Collections_Generic_List_Enumerator_T__MoveNext);
      if (!bVar1) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                   ((local_res10->_1).byval_arg.data)->rgctx_data->
                   _17_Settings_TypedSetting_List_T___set_Value);
        return (SimpleJSONFixed_JSONNode_o *)__this_01;
      }
      if (local_40.fields._current == (Il2CppObject *)0x0) break;
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(local_40.fields._current)->klass->vtable[5].methodPtr)
                         (local_40.fields._current,(local_40.fields._current)->klass->vtable[5].method);
      if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                (__this_01,pSVar2,(__this_01->klass->vtable)._21_Add.method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$GetCount
// il2cpp: int32_t Settings_ListSetting_object___GetCount (Settings_ListSetting_T__o* __this, const MethodInfo_182B100* method);
// 0x18182b100

int32_t Settings_ListSetting_object___GetCount(Settings_ListSetting_T__o *__this,MethodInfo_182B100 *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar1 = (__this->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$GetItemAt
// il2cpp: Settings_BaseSetting_o* Settings_ListSetting_object___GetItemAt (Settings_ListSetting_T__o* __this, int32_t index, const MethodInfo_182B120* method);
// 0x18182b120

Settings_BaseSetting_o *
Settings_ListSetting_object___GetItemAt
          (Settings_ListSetting_T__o *__this,int32_t index,MethodInfo_182B120 *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Settings_BaseSetting_o *pSVar1;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    pSVar1 = (Settings_BaseSetting_o *)
             System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       (__this_00,index,
                        (MethodInfo_92B830 *)
                        method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$GetItems
// il2cpp: System_Collections_Generic_List_BaseSetting__o* Settings_ListSetting_object___GetItems (Settings_ListSetting_T__o* __this, const MethodInfo_182B160* method);
// 0x18182b160
// eh: try 0x18182b250..0x18182b360 -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18182b301: mov rax, qword ptr [rsp + 0x50]
// asm:   0x18182b306: mov rcx, qword ptr [rax]
// asm:   0x18182b309: mov rax, qword ptr [rcx + 0x20]
// asm:   0x18182b30d: mov rdx, qword ptr [rax + 0xc0]
// asm:   0x18182b314: mov rdx, qword ptr [rdx + 0x80]
// asm:   0x18182b31b: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x18182b320: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18182b325: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18182b32a: test rcx, rcx
// asm:   0x18182b32d: jne 0x18182b360
// asm:   0x18182b32f: mov rbx, qword ptr [rsp + 0x70]
// asm:   0x18182b360: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_Collections_Generic_List_BaseSetting__o *
Settings_ListSetting_object___GetItems(Settings_ListSetting_T__o *__this,MethodInfo_182B160 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Settings_BaseSetting_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_BaseSetting__o *__this_01;
  Il2CppClass *local_res10;
  System_Collections_Generic_List_Enumerator_object__o local_40;
  undefined1 local_28 [16];
  Settings_BaseSetting_o *local_18;
  
  local_res10 = (Il2CppClass *)method;
  if (Il2CppMethodInitialized_184341bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseSetting);
    Il2CppMethodInitialized_184341bac = '\x01';
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseSetting_ctor);
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (__this->fields)._value, __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_28,__this_00,
               (MethodInfo_91F180 *)
               ((local_res10->_1).byval_arg.data)->rgctx_data->
               _10_System_Collections_Generic_List_T__GetEnumerator);
    local_40.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
    local_40.fields._index = local_28._8_4_;
    local_40.fields._version = local_28._12_4_;
    local_40.fields._current = (Il2CppObject *)local_18;
    local_28._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_18 = (Settings_BaseSetting_o *)&local_res10;
    local_28._8_8_ = &local_40;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_40,
                         (MethodInfo_153A2A0 *)
                         ((local_res10->_1).byval_arg.data)->rgctx_data->
                         _15_System_Collections_Generic_List_Enumerator_T__MoveNext);
      pMVar4 = MethodInfo_System_Collections_Generic_List_BaseSetting_Add;
      if (!bVar5) {
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_40,
                   ((local_res10->_1).byval_arg.data)->rgctx_data->
                   _17_Settings_TypedSetting_List_T___set_Value);
        return __this_01;
      }
      if (__this_01 == (System_Collections_Generic_List_BaseSetting__o *)0x0) break;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_01->fields)._items;
      if (pSVar3 == (Settings_BaseSetting_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = (Settings_BaseSetting_o *)local_40.fields._current;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,local_40.fields._current);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,local_40.fields._current,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$AddItem
// il2cpp: void Settings_ListSetting_object___AddItem (Settings_ListSetting_T__o* __this, Settings_BaseSetting_o* item, const MethodInfo_182A740* method);
// 0x18182a740

void Settings_ListSetting_object___AddItem
               (Settings_ListSetting_T__o *__this,Settings_BaseSetting_o *item,MethodInfo_182A740 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_ListSetting_T__RGCTXs *pSVar3;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  Il2CppClass *klass;
  Il2CppObject *item_00;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(__this->fields)._value,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    pSVar3 = method->klass->rgctx_data;
    klass = pSVar3->_5_T;
    pMVar4 = pSVar3->_6_System_Collections_Generic_List_T__Add;
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
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this_00->fields)._items;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pSVar5->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,item_00,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[(int)uVar2] = item_00;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2,item_00);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$Clear
// il2cpp: void Settings_ListSetting_object___Clear (Settings_ListSetting_T__o* __this, const MethodInfo_182A820* method);
// 0x18182a820

void Settings_ListSetting_object___Clear(Settings_ListSetting_T__o *__this,MethodInfo_182A820 *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if ((__this != (Settings_ListSetting_T__o *)0x0) &&
     (pSVar2 = (__this->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Settings.ListSetting<object>$$CopyLimits
// il2cpp: void Settings_ListSetting_object___CopyLimits (Settings_ListSetting_T__o* __this, Il2CppObject* from, Il2CppObject* to, const MethodInfo_182A8F0* method);
// 0x18182a8f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18182abea: jmp 0x18182aa4b
// asm:   0x18182ac75: jmp 0x18182aae6

void Settings_ListSetting_object___CopyLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *from,Il2CppObject *to,
               MethodInfo_182A8F0 *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184341bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_NameSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184341bad = '\x01';
  }
  if (from != (Il2CppObject *)0x0) {
    pIVar2 = from->klass;
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
      bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Settings_ColorSetting))
      {
        bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
        if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_ColorSetting)
           ) {
          il2cpp_codegen_raise_invalid_cast_exception(from);
        }
        if (to != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_ColorSetting->_2).typeHierarchyDepth;
          if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
             ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_ColorSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(to);
          }
label_18182aae6:
          *(undefined4 *)&to[2].monitor = *(undefined4 *)&from[2].monitor;
          return;
        }
label_18182ae0e:
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
      {
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting
           )) {
          bVar1 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
          if ((pIVar2->_2).typeHierarchyDepth < bVar1) {
            return;
          }
          if ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_NameSetting
             ) {
            return;
          }
          bVar1 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
          if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_NameSetting
             )) {
            il2cpp_codegen_raise_invalid_cast_exception(from);
          }
          if (to != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
            if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
               ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_NameSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(to);
            }
            *(undefined4 *)&to[2].monitor = *(undefined4 *)&from[2].monitor;
            bVar1 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
            if ((bVar1 <= (from->klass->_2).typeHierarchyDepth) &&
               ((from->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_NameSetting)) {
              bVar1 = (TypeInfo_Settings_NameSetting->_2).typeHierarchyDepth;
              if ((bVar1 <= (to->klass->_2).typeHierarchyDepth) &&
                 ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_Settings_NameSetting)) {
                *(undefined4 *)&to[3].klass = *(undefined4 *)&from[3].klass;
                return;
              }
              il2cpp_codegen_raise_invalid_cast_exception(to);
            }
            il2cpp_codegen_raise_invalid_cast_exception(from);
          }
        }
        else {
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
             ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(from);
          }
          if (to != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
            if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
               ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(to);
            }
            goto label_18182aae6;
          }
        }
        goto label_18182ae0e;
      }
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting))
      {
        il2cpp_codegen_raise_invalid_cast_exception(from);
      }
      if (to == (Il2CppObject *)0x0) goto label_18182ae0e;
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
         ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(to);
      }
      *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((from->klass->_2).typeHierarchyDepth < bVar1) ||
         ((from->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(from);
      }
      bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
      if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
         ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_FloatSetting
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(to);
      }
    }
    else {
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(from);
      }
      if (to == (Il2CppObject *)0x0) goto label_18182ae0e;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
         ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      {
        il2cpp_codegen_raise_invalid_cast_exception(to);
      }
      *(undefined4 *)&to[2].klass = *(undefined4 *)&from[2].klass;
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((from->klass->_2).typeHierarchyDepth < bVar1) ||
         ((from->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting
         )) {
        il2cpp_codegen_raise_invalid_cast_exception(from);
      }
      bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
      if (((to->klass->_2).typeHierarchyDepth < bVar1) ||
         ((to->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting))
      {
        il2cpp_codegen_raise_invalid_cast_exception(to);
      }
    }
    *(undefined4 *)((longlong)&to[2].klass + 4) = *(undefined4 *)((longlong)&from[2].klass + 4);
  }
  return;
}


// Settings.ListSetting<object>$$CopyDefaultLimits
// il2cpp: void Settings_ListSetting_object___CopyDefaultLimits (Settings_ListSetting_T__o* __this, Il2CppObject* to, const MethodInfo_182A870* method);
// 0x18182a870

void Settings_ListSetting_object___CopyDefaultLimits
               (Settings_ListSetting_T__o *__this,Il2CppObject *to,MethodInfo_182A870 *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  Il2CppObject *from;
  
  pSVar1 = (__this->fields).DefaultValue;
  if (pSVar1 != (System_Collections_Generic_List_T__o *)0x0) {
    if (0 < (pSVar1->fields)._size) {
      from = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)(__this->fields).DefaultValue,0,
                        (MethodInfo_92B830 *)
                        method->klass->rgctx_data->_21_System_Collections_Generic_List_T__Clear);
      Settings_ListSetting_object___CopyLimits
                (__this,from,to,
                 (MethodInfo_182A8F0 *)method->klass->rgctx_data->_9_Settings_ListSetting_T__CopyLimits);
    }
    return;
  }
  ThrowNullReferenceException();
}


