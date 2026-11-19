// Type: Settings.SetSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SetSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// --------------------------------

// Settings.SetSettingsContainer.<>c<object>$$.cctor
// il2cpp: void Settings_SetSettingsContainer___c_object____cctor (const MethodInfo_385BCA0* method);
// 0x395bca0

void Settings_SetSettingsContainer___c_object____cctor(MethodInfo_385BCA0 *method)

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


// Settings.SetSettingsContainer.<>c<object>$$.ctor
// il2cpp: void Settings_SetSettingsContainer___c_object____ctor (Settings_SetSettingsContainer___c_T__o* __this, const MethodInfo_385BD80* method);
// 0x395bd80

void Settings_SetSettingsContainer___c_object____ctor
               (Settings_SetSettingsContainer___c_T__o *__this,MethodInfo_385BD80 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_0
// il2cpp: bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_0 (Settings_SetSettingsContainer___c_T__o* __this, Il2CppObject* x, const MethodInfo_385BD90* method);
// 0x395bd90

bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_0
               (Settings_SetSettingsContainer___c_T__o *__this,Il2CppObject *x,MethodInfo_385BD90 *method)

{
  if (Il2CppMethodInitialized_0753e8a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0753e8a7 = '\x01';
  }
  if ((x == (Il2CppObject *)0x0) || (x[3].monitor == (void *)0x0)) {
    ThrowNullReferenceException();
  }
  return (bool)*(undefined1 *)((long)x[3].monitor + 0x19);
}


// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_1
// il2cpp: bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_1 (Settings_SetSettingsContainer___c_T__o* __this, Il2CppObject* x, const MethodInfo_385BDD0* method);
// 0x395bdd0

bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_1
               (Settings_SetSettingsContainer___c_T__o *__this,Il2CppObject *x,MethodInfo_385BDD0 *method)

{
  if (Il2CppMethodInitialized_0753e8a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0753e8a8 = '\x01';
  }
  if ((x == (Il2CppObject *)0x0) || (x[3].monitor == (void *)0x0)) {
    ThrowNullReferenceException();
  }
  return (bool)*(undefined1 *)((long)x[3].monitor + 0x19);
}


// Settings.SetSettingsContainer<object>$$get_PresetsOnly
// il2cpp: bool Settings_SetSettingsContainer_object___get_PresetsOnly (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40474B0* method);
// 0x41474b0

bool Settings_SetSettingsContainer_object___get_PresetsOnly
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40474B0 *method)

{
  return false;
}


// Settings.SetSettingsContainer<object>$$get_AllowPresets
// il2cpp: bool Settings_SetSettingsContainer_object___get_AllowPresets (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40474C0* method);
// 0x41474c0

bool Settings_SetSettingsContainer_object___get_AllowPresets
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40474C0 *method)

{
  return true;
}


// Settings.SetSettingsContainer<object>$$Validate
// il2cpp: bool Settings_SetSettingsContainer_object___Validate (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40474D0* method);
// 0x41474d0

bool Settings_SetSettingsContainer_object___Validate
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40474D0 *method)

{
  Settings_ListSetting_T__o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Sets;
  if (__this_00 == (Settings_ListSetting_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = Settings_ListSetting_object___GetCount
                    (__this_00,
                     (MethodInfo_515DE80 *)method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
  return 0 < iVar1;
}


// Settings.SetSettingsContainer<object>$$Apply
// il2cpp: void Settings_SetSettingsContainer_object___Apply (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047500* method);
// 0x4147500

void Settings_SetSettingsContainer_object___Apply
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047500 *method)

{
  if (__this == (Settings_SetSettingsContainer_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  Settings_BaseSettingsContainer__Apply((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  Settings_SetSettingsContainer_object___MigrateUniqueIds
            (__this,(MethodInfo_4047540 *)
                    method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T__MigrateUniqueIds);
  return;
}


// Settings.SetSettingsContainer<object>$$MigrateUniqueIds
// il2cpp: void Settings_SetSettingsContainer_object___MigrateUniqueIds (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047540* method);
// 0x4147540
// eh: try 0x4147654..0x4147724 -> pad 0x4147735 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x414774f..0x4147754 -> pad 0x4147775 cleanup
// eh: try 0x4147778..0x4147782 -> pad 0x414778a catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4147729: jmp 0x4147737
// asm:   0x414772b: jmp 0x4147737
// asm:   0x414772d: jmp 0x4147737
// asm:   0x414772f: jmp 0x4147737
// asm:   0x4147731: jmp 0x4147737
// asm:   0x4147733: jmp 0x4147737
// asm:   0x4147735: jmp 0x4147737
// asm:   0x4147737: mov rbx, rax
// asm:   0x414773a: cmp edx, 1
// asm:   0x414773d: jne 0x4147778
// asm:   0x414773f: mov rdi, rbx
// asm:   0x4147742: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x4147747: mov rbx, qword ptr [rax]
// asm:   0x414774a: mov qword ptr [rsp + 8], rbx
// asm:   0x414774f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x4147754: lea rax, [rip + 0x314604d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x414775b: mov rsi, qword ptr [rax]
// asm:   0x414775e: lea rdi, [rsp + 0x30]
// asm:   0x4147763: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x4147768: test rbx, rbx
// asm:   0x414776b: je 0x41476fe
// asm:   0x414776d: mov rdi, rbx
// asm:   0x4147770: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x4147775: mov rbx, rax
// asm:   0x4147778: lea rdi, [rsp + 8]
// asm:   0x414777d: call 0x2b94780  ; il2cpp_runtime_helper_02b94780()
// asm:   0x4147782: mov rdi, rbx
// asm:   0x4147785: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x414778a: mov rdi, rax
// asm:   0x414778d: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_SetSettingsContainer_object___MigrateUniqueIds
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047540 *method)

{
  byte bVar1;
  Settings_ListSetting_T__o *__this_00;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_BaseSetting__o *__this_02;
  System_String_o *value;
  undefined1 auStack_70 [16];
  Il2CppObject *pIStack_60;
  System_Guid_o SStack_58;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_0753f76a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_0753f76a = '\x01';
  }
  SStack_58.fields = (System_Guid_Fields)ZEXT816(0);
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    __this_02 = Settings_ListSetting_object___GetItems
                          (__this_00,
                           (MethodInfo_515DED0 *)
                           method->klass->rgctx_data->_4_Settings_ListSetting_T__GetItems);
    if (__this_02 != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_70,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      SStack_48.fields._current = pIStack_60;
      SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_70._0_8_;
      SStack_48.fields._index = auStack_70._8_4_;
      SStack_48.fields._version = auStack_70._12_4_;
      auStack_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      auStack_70._8_8_ = &SStack_48;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        pIVar2 = SStack_48.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          return;
        }
        if (SStack_48.fields._current == (Il2CppObject *)0x0) break;
        bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if ((((SStack_48.fields._current)->klass->_2).typeHierarchyDepth < bVar1) ||
           (((SStack_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(SStack_48.fields._current);
        }
        if (SStack_48.fields._current[4].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_String__IsNullOrEmpty
                          (((SStack_48.fields._current[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = pIVar2[4].klass;
          SStack_58 = System_Guid__NewGuid((MethodInfo *)0x0);
          value = System_Guid__ToString(&SStack_58,(MethodInfo *)0x0);
          if (__this_01 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSelectedSet
// il2cpp: Settings_BaseSetSetting_o* Settings_SetSettingsContainer_object___GetSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40477A0* method);
// 0x41477a0

Settings_BaseSetSetting_o *
Settings_SetSettingsContainer_object___GetSelectedSet
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40477A0 *method)

{
  byte bVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  int32_t iVar4;
  int32_t iVar5;
  Settings_BaseSetSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_0753f76b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0753f76b = '\x01';
  }
  pSVar2 = (__this->fields).SelectedSetIndex;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (pSVar3 = (__this->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
    iVar5 = (pSVar2->fields)._value;
    iVar4 = Settings_ListSetting_object___GetCount
                      (pSVar3,(MethodInfo_515DE80 *)
                              method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar5 = System_Math__Min_54baeb0(iVar5,iVar4 + -1,(MethodInfo *)0x0);
    iVar5 = System_Math__Max_54bad40(iVar5,0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).Sets;
    if (pSVar3 != (Settings_ListSetting_T__o *)0x0) {
      pSVar6 = (Settings_BaseSetSetting_o *)
               Settings_ListSetting_object___GetItemAt
                         (pSVar3,iVar5,
                          (MethodInfo_515DEA0 *)
                          method->klass->rgctx_data->_5_Settings_ListSetting_T__GetItemAt);
      if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
        }
      }
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSelectedSetIndex
// il2cpp: Settings_IntSetting_o* Settings_SetSettingsContainer_object___GetSelectedSetIndex (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40478B0* method);
// 0x41478b0

Settings_IntSetting_o *
Settings_SetSettingsContainer_object___GetSelectedSetIndex
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40478B0 *method)

{
  return (__this->fields).SelectedSetIndex;
}


// Settings.SetSettingsContainer<object>$$CreateSet
// il2cpp: void Settings_SetSettingsContainer_object___CreateSet (Settings_SetSettingsContainer_T__o* __this, System_String_o* name, const MethodInfo_40478C0* method);
// 0x41478c0

void Settings_SetSettingsContainer_object___CreateSet
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *name,MethodInfo_40478C0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  Il2CppObject *item;
  System_String_o *value;
  System_Guid_o local_40;
  
  if (Il2CppMethodInitialized_0753f76c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_0753f76c = '\x01';
  }
  item = System_Activator__CreateInstance_object_
                   ((MethodInfo_333BC30 *)method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  if ((item != (Il2CppObject *)0x0) && (item[3].klass != (Il2CppClass *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)item[3].klass,(Il2CppObject *)name,
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_00 = item[4].klass;
    local_40 = System_Guid__NewGuid((MethodInfo *)0x0);
    value = System_Guid__ToString(&local_40,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppClass *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar3 = (__this->fields).Sets;
      if ((pSVar3 != (Settings_ListSetting_T__o *)0x0) &&
         (__this_01 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
         __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
        pMVar4 = method->klass->rgctx_data->_11_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_01->fields)._items;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CopySelectedSet
// il2cpp: void Settings_SetSettingsContainer_object___CopySelectedSet (Settings_SetSettingsContainer_T__o* __this, System_String_o* name, const MethodInfo_40479F0* method);
// 0x41479f0

void Settings_SetSettingsContainer_object___CopySelectedSet
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *name,MethodInfo_40479F0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *pMVar4;
  System_Object_array *pSVar5;
  Il2CppObject *item;
  Settings_BaseSetSetting_o *pSVar6;
  System_String_o *value;
  System_Guid_o local_40;
  
  if (Il2CppMethodInitialized_0753f76d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0753f76d = '\x01';
  }
  item = System_Activator__CreateInstance_object_
                   ((MethodInfo_333BC30 *)method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                     (__this,(MethodInfo_40477A0 *)
                             method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet);
  if (item != (Il2CppObject *)0x0) {
    (*item->klass->vtable[10].methodPtr)(item,pSVar6,item->klass->vtable[10].method);
    if (item[3].klass != (Il2CppClass *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)item[3].klass,(Il2CppObject *)name,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (item[3].monitor != (Settings_TypedSetting_bool__o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  (item[3].monitor,false,(MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value
                  );
        __this_00 = item[4].klass;
        local_40 = System_Guid__NewGuid((MethodInfo *)0x0);
        value = System_Guid__ToString(&local_40,(MethodInfo *)0x0);
        if (__this_00 != (Il2CppClass *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar3 = (__this->fields).Sets;
          if ((pSVar3 != (Settings_ListSetting_T__o *)0x0) &&
             (__this_01 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
             __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
            pMVar4 = method->klass->rgctx_data->_11_System_Collections_Generic_List_T__Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_01->fields)._items;
            if (pSVar5 != (System_Object_array *)0x0) {
              uVar2 = (__this_01->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (__this_01->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = item;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CanDeleteSelectedSet
// il2cpp: bool Settings_SetSettingsContainer_object___CanDeleteSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047B80* method);
// 0x4147b80

bool Settings_SetSettingsContainer_object___CanDeleteSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047B80 *method)

{
  Settings_ListSetting_T__o *__this_00;
  MethodInfo *pMVar1;
  Settings_BoolSetting_o *pSVar2;
  int32_t iVar3;
  Settings_BaseSetSetting_o *pSVar4;
  
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    iVar3 = Settings_ListSetting_object___GetCount
                      (__this_00,
                       (MethodInfo_515DE80 *)method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
    if (iVar3 < 2) {
      return false;
    }
    pMVar1 = method->klass->rgctx_data->_13_Settings_SetSettingsContainer_T__CanEditSelectedSet;
    if (Il2CppMethodInitialized_0753f76e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      Il2CppMethodInitialized_0753f76e = '\x01';
    }
    pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet
                       (__this,(MethodInfo_40477A0 *)pMVar1->klass->rgctx_data[0xc].method);
    if ((pSVar4 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar2 = (pSVar4->fields).Preset, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      return (pSVar2->fields)._value == false;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CanEditSelectedSet
// il2cpp: bool Settings_SetSettingsContainer_object___CanEditSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047C20* method);
// 0x4147c20

bool Settings_SetSettingsContainer_object___CanEditSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047C20 *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_BaseSetSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_0753f76e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_0753f76e = '\x01';
  }
  pSVar2 = Settings_SetSettingsContainer_object___GetSelectedSet
                     (__this,(MethodInfo_40477A0 *)
                             method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet);
  if ((pSVar2 == (Settings_BaseSetSetting_o *)0x0) ||
     (pSVar1 = (pSVar2->fields).Preset, pSVar1 == (Settings_BoolSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._value == false;
}


// Settings.SetSettingsContainer<object>$$DeleteSelectedSet
// il2cpp: void Settings_SetSettingsContainer_object___DeleteSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047C80* method);
// 0x4147c80

void Settings_SetSettingsContainer_object___DeleteSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047C80 *method)

{
  Settings_ListSetting_T__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_BaseSetSetting_o *obj;
  Il2CppClass *klass;
  Il2CppObject *item;
  
  pSVar1 = (__this->fields).Sets;
  if (pSVar1 != (Settings_ListSetting_T__o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    obj = Settings_SetSettingsContainer_object___GetSelectedSet
                    (__this,(MethodInfo_40477A0 *)
                            method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      klass = method->klass->rgctx_data->_7_T;
      if (((klass->_2).bitflags1 & 1) == 0) {
        klass = il2cpp_codegen_class_init_checked(klass);
      }
      if (obj == (Settings_BaseSetSetting_o *)0x0) {
        item = (Il2CppObject *)0x0;
      }
      else {
        item = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,klass);
        if (item == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
        }
      }
      System_Collections_Generic_List_object___Remove
                (__this_00,item,
                 (MethodInfo_395ED70 *)
                 method->klass->rgctx_data->_14_System_Collections_Generic_List_T__Remove);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSets
// il2cpp: Settings_IListSetting_o* Settings_SetSettingsContainer_object___GetSets (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_4047D30* method);
// 0x4147d30

Settings_IListSetting_o *
Settings_SetSettingsContainer_object___GetSets
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_4047D30 *method)

{
  return (Settings_IListSetting_o *)(__this->fields).Sets;
}


// Settings.SetSettingsContainer<object>$$SetPresetsFromJsonString
// il2cpp: void Settings_SetSettingsContainer_object___SetPresetsFromJsonString (Settings_SetSettingsContainer_T__o* __this, System_String_o* json, const MethodInfo_4047D40* method);
// 0x4147d40
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4147eb7: test r14, r14
// asm:   0x4147eba: jne 0x4148072
// asm:   0x4147ec0: jmp 0x41482b9
// asm:   0x4147f34: test rbx, rbx
// asm:   0x4147f3d: jmp 0x41482b9
// asm:   0x41481ff: nop 

void Settings_SetSettingsContainer_object___SetPresetsFromJsonString
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *json,MethodInfo_4047D40 *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_ListSetting_T__o *pSVar4;
  System_Collections_Generic_List_object__o *__this_00;
  char cVar5;
  Il2CppClass *pIVar6;
  Settings_SetSettingsContainer_T__o *__this_01;
  System_Predicate_T__o *pSVar7;
  Settings_ListSetting_T__o *pSVar8;
  Il2CppObject *pIVar9;
  Settings_SetSettingsContainer_T__RGCTXs *pSVar10;
  Settings_SetSettingsContainer_T__c *pSVar11;
  int32_t iVar12;
  Settings_SetSettingsContainer_T__c **ppSVar13;
  
  if (Il2CppMethodInitialized_0753f76f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0753f76f = '\x01';
  }
  ppSVar13 = &method->klass;
  pIVar6 = method->klass->rgctx_data->_0_Settings_SetSettingsContainer_T_;
  if (((pIVar6->_2).bitflags1 & 1) == 0) {
    pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
  }
  __this_01 = (Settings_SetSettingsContainer_T__o *)il2cpp_codegen_object_new(pIVar6);
  Settings_SetSettingsContainer_object____ctor
            (__this_01,
             (MethodInfo_40485F0 *)(*ppSVar13)->rgctx_data->_15_Settings_SetSettingsContainer_T___ctor);
  if (__this_01 != (Settings_SetSettingsContainer_T__o *)0x0) {
    (*(__this_01->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this_01,json,(__this_01->klass->vtable)._9_DeserializeFromJsonString.method);
    cVar5 = (*(__this->klass->vtable)._25_get_AllowPresets.methodPtr)
                      (__this,(__this->klass->vtable)._25_get_AllowPresets.method);
    if (cVar5 == '\0') {
      pSVar8 = (__this->fields).Sets;
      if (pSVar8 != (Settings_ListSetting_T__o *)0x0) {
        pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value;
        pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar6->_2).bitflags1 & 1) == 0) {
          pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
        }
        if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar6);
        }
        pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar6->_2).bitflags1 & 1) == 0) {
          pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          pSVar7 = *(System_Predicate_T__o **)((long)pIVar6->static_fields + 8);
        }
        else {
          pSVar7 = *(System_Predicate_T__o **)((long)pIVar6->static_fields + 8);
        }
        if (pSVar7 == (System_Predicate_T__o *)0x0) {
          pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar6);
          }
          pSVar10 = (*ppSVar13)->rgctx_data;
          pIVar6 = pSVar10->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
            pSVar10 = (*ppSVar13)->rgctx_data;
          }
          pIVar9 = *(Il2CppObject **)pIVar6->static_fields;
          pIVar6 = pSVar10->_18_System_Predicate_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          pSVar7 = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar6);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)pSVar7,pIVar9,
                     (intptr_t)
                     (*ppSVar13)->rgctx_data->
                     _20_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_0,
                     (MethodInfo_3DC95B0 *)(*ppSVar13)->rgctx_data->_21_System_Predicate_T___ctor);
          pSVar11 = *ppSVar13;
          pIVar6 = pSVar11->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
            pSVar11 = *ppSVar13;
          }
          *(System_Predicate_T__o **)((long)pIVar6->static_fields + 8) = pSVar7;
          pIVar6 = pSVar11->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          Il2CppCodeGenWriteBarrier((void **)((long)pIVar6->static_fields + 8));
        }
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    (pSVar3,pSVar7,
                     (MethodInfo_395EF50 *)
                     (*ppSVar13)->rgctx_data->_22_System_Collections_Generic_List_T__RemoveAll);
          return;
        }
      }
    }
    else {
      cVar5 = (*(__this->klass->vtable)._24_get_PresetsOnly.methodPtr)(__this);
      pSVar8 = (__this->fields).Sets;
      if (cVar5 == '\0') {
        if (pSVar8 == (Settings_ListSetting_T__o *)0x0) goto label_041482b9;
        pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value;
        pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar6->_2).bitflags1 & 1) == 0) {
          pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
        }
        if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar6);
        }
        pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar6->_2).bitflags1 & 1) == 0) {
          pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          pSVar7 = *(System_Predicate_T__o **)((long)pIVar6->static_fields + 0x10);
        }
        else {
          pSVar7 = *(System_Predicate_T__o **)((long)pIVar6->static_fields + 0x10);
        }
        if (pSVar7 == (System_Predicate_T__o *)0x0) {
          pIVar6 = (*ppSVar13)->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          if ((pIVar6->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar6);
          }
          pSVar10 = (*ppSVar13)->rgctx_data;
          pIVar6 = pSVar10->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
            pSVar10 = (*ppSVar13)->rgctx_data;
          }
          pIVar9 = *(Il2CppObject **)pIVar6->static_fields;
          pIVar6 = pSVar10->_18_System_Predicate_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          pSVar7 = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar6);
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)pSVar7,pIVar9,
                     (intptr_t)
                     (*ppSVar13)->rgctx_data->
                     _25_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_1,
                     (MethodInfo_3DC95B0 *)(*ppSVar13)->rgctx_data->_21_System_Predicate_T___ctor);
          pSVar11 = *ppSVar13;
          pIVar6 = pSVar11->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
            pSVar11 = *ppSVar13;
          }
          *(System_Predicate_T__o **)((long)pIVar6->static_fields + 0x10) = pSVar7;
          pIVar6 = pSVar11->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar6->_2).bitflags1 & 1) == 0) {
            pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
          }
          Il2CppCodeGenWriteBarrier((void **)((long)pIVar6->static_fields + 0x10));
        }
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_041482b9;
        System_Collections_Generic_List_object___RemoveAll
                  (pSVar3,pSVar7,
                   (MethodInfo_395EF50 *)
                   (*ppSVar13)->rgctx_data->_22_System_Collections_Generic_List_T__RemoveAll);
      }
      else {
        if ((pSVar8 == (Settings_ListSetting_T__o *)0x0) ||
           (pSVar2 = (pSVar8->fields)._value, pSVar2 == (System_Collections_Generic_List_T__o *)0x0))
        goto label_041482b9;
        piVar1 = &(pSVar2->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar12 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        if (0 < iVar12) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar12,(MethodInfo *)0x0);
        }
      }
      pSVar8 = (__this_01->fields).Sets;
      if (pSVar8 != (Settings_ListSetting_T__o *)0x0) {
        iVar12 = 0;
        while (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value,
              pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          if ((pSVar3->fields)._size <= iVar12) {
            return;
          }
          pIVar9 = System_Collections_Generic_List_object___get_Item
                             (pSVar3,iVar12,
                              (MethodInfo_395CF20 *)
                              (*ppSVar13)->rgctx_data->_26_System_Collections_Generic_List_T__get_Item);
          if ((pIVar9 == (Il2CppObject *)0x0) || (pIVar9[3].monitor == (Settings_TypedSetting_bool__o *)0x0))
          break;
          Settings_TypedSetting_bool___set_Value
                    (pIVar9[3].monitor,true,
                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar8 = (__this->fields).Sets;
          if ((pSVar8 == (Settings_ListSetting_T__o *)0x0) ||
             ((pSVar4 = (__this_01->fields).Sets, pSVar4 == (Settings_ListSetting_T__o *)0x0 ||
              (pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar4->fields)._value,
              pSVar3 == (System_Collections_Generic_List_object__o *)0x0)))) break;
          __this_00 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._value;
          pIVar9 = System_Collections_Generic_List_object___get_Item
                             (pSVar3,iVar12,
                              (MethodInfo_395CF20 *)
                              (*ppSVar13)->rgctx_data->_26_System_Collections_Generic_List_T__get_Item);
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          System_Collections_Generic_List_object___Insert
                    (__this_00,iVar12,pIVar9,
                     (MethodInfo_395E3E0 *)
                     (*ppSVar13)->rgctx_data->_27_System_Collections_Generic_List_T__Insert);
          iVar12 = iVar12 + 1;
          pSVar8 = (__this_01->fields).Sets;
          if (pSVar8 == (Settings_ListSetting_T__o *)0x0) break;
        }
      }
    }
  }
label_041482b9:
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSetNames
// il2cpp: System_String_array* Settings_SetSettingsContainer_object___GetSetNames (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40482D0* method);
// 0x41482d0
// eh: try 0x4148443..0x4148584 -> pad 0x4148586 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x41485a8..0x41485ad -> pad 0x41485d0 cleanup
// eh: try 0x41485d3..0x41485dd -> pad 0x41485e5 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x414840d: lea r15, [rip + 0x314539c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
// asm:   0x4148414: mov r14, rsp
// asm:   0x4148417: lea r12, [rip + 0x312d89a]  ; TypeInfo_Settings_BaseSetSetting
// asm:   0x414841e: lea r13, [rip + 0x314e533]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x4148425: jmp 0x4148448
// asm:   0x4148584: jmp 0x4148590
// asm:   0x4148586: jmp 0x4148590
// asm:   0x4148588: jmp 0x4148590
// asm:   0x414858a: jmp 0x4148590
// asm:   0x414858c: jmp 0x4148590
// asm:   0x414858e: jmp 0x4148590
// asm:   0x4148590: mov r14, rax
// asm:   0x4148593: cmp edx, 1
// asm:   0x4148596: jne 0x41485d3
// asm:   0x4148598: mov rdi, r14
// asm:   0x414859b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x41485a0: mov r14, qword ptr [rax]
// asm:   0x41485a3: mov qword ptr [rsp + 0x18], r14
// asm:   0x41485a8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x41485ad: lea rax, [rip + 0x31451f4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x41485b4: mov rsi, qword ptr [rax]
// asm:   0x41485b7: mov rdi, rsp
// asm:   0x41485ba: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x41485bf: test r14, r14
// asm:   0x41485c2: je 0x414850b
// asm:   0x41485c8: mov rdi, r14
// asm:   0x41485cb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x41485d0: mov r14, rax
// asm:   0x41485d3: lea rdi, [rsp + 0x18]
// asm:   0x41485d8: call 0x2b947b0  ; il2cpp_runtime_helper_02b947b0()
// asm:   0x41485dd: mov rdi, r14
// asm:   0x41485e0: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x41485e5: mov rdi, rax
// asm:   0x41485e8: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Settings_SetSettingsContainer_object___GetSetNames
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40482D0 *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *item;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_BaseSetting__o *__this_02;
  System_String_array *pSVar6;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  Il2CppObject *local_48;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  
  if (Il2CppMethodInitialized_0753f770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0753f770 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields).Sets;
  if ((__this_00 != (Settings_ListSetting_T__o *)0x0) &&
     (__this_02 = Settings_ListSetting_object___GetItems
                            (__this_00,
                             (MethodInfo_515DED0 *)
                             method->klass->rgctx_data->_4_Settings_ListSetting_T__GetItems),
     __this_02 != (System_Collections_Generic_List_BaseSetting__o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_02,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    local_48 = local_30;
    local_58 = (undefined1  [8])local_40._0_8_;
    puStack_50 = (undefined1 *)local_40._8_8_;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = local_58;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      local_40._8_8_ = local_58;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
      if (bVar5) {
        if (local_48 != (Il2CppObject *)0x0) {
          bVar2 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
          if ((bVar2 <= (local_48->klass->_2).typeHierarchyDepth) &&
             ((local_48->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
              (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
            if (local_48[3].klass != (Il2CppClass *)0x0) {
label_0414857f:
              ThrowNullReferenceException();
            }
label_04148575:
            ThrowNullReferenceException();
          }
label_0414857a:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
label_0414853f:
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext),
            pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add, bVar5) {
        if (local_48 == (Il2CppObject *)0x0) goto label_0414853f;
        bVar2 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if (((local_48->klass->_2).typeHierarchyDepth < bVar2) ||
           ((local_48->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) goto label_0414857a;
        if (local_48[3].klass == (Il2CppClass *)0x0) goto label_04148575;
        item = ((local_48[3].klass)->_1).byval_arg.data;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_01->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_0414857f;
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar6->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
              );
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar6 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$.ctor
// il2cpp: void Settings_SetSettingsContainer_object____ctor (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_40485F0* method);
// 0x41485f0

void Settings_SetSettingsContainer_object____ctor
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_40485F0 *method)

{
  Settings_IntSetting_o *__this_00;
  Il2CppObject *defaultValue;
  Il2CppClass *klass;
  Settings_ListSetting_T__o *__this_01;
  
  if (Il2CppMethodInitialized_0753f771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_0753f771 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(__this_00,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SelectedSetIndex = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SelectedSetIndex);
  defaultValue = System_Activator__CreateInstance_object_
                           ((MethodInfo_333BC30 *)
                            method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  klass = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_01 = (Settings_ListSetting_T__o *)il2cpp_codegen_object_new(klass);
  Settings_ListSetting_object____ctor_515d3f0
            (__this_01,defaultValue,
             (MethodInfo_515D3F0 *)method->klass->rgctx_data->_29_Settings_ListSetting_T___ctor);
  (__this->fields).Sets = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sets);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


