// Type: Settings.SetSettingsContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SetSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// --------------------------------

// Settings.SetSettingsContainer.<>c<object>$$.cctor
// il2cpp: void Settings_SetSettingsContainer___c_object____cctor (const MethodInfo_8E16E0* method);
// 0x1808e16e0

void
Settings_SetSettingsContainer___c_object____cctor(MethodInfo_8E16E0* method)

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


// Settings.SetSettingsContainer.<>c<object>$$.ctor
// il2cpp: void Settings_SetSettingsContainer___c_object____ctor (Settings_SetSettingsContainer___c_T__o* __this, const MethodInfo_54C890* method);
// 0x18054c890

void
Settings_SetSettingsContainer___c_object____ctor(Settings_SetSettingsContainer___c_T__o* __this, MethodInfo_54C890* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_0
// il2cpp: bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_0 (Settings_SetSettingsContainer___c_T__o* __this, Il2CppObject* x, const MethodInfo_8C44D0* method);
// 0x1808c44d0

bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_0
               (Settings_SetSettingsContainer___c_T__o *__this,Il2CppObject *x,MethodInfo_8C44D0 *method)

{
  if (Il2CppMethodInitialized_18433dfd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18433dfd8 = '\x01';
  }
  if ((x != (Il2CppObject *)0x0) && (x[3].monitor != (void *)0x0)) {
    return (bool)*(undefined1 *)((longlong)x[3].monitor + 0x19);
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer.<>c<object>$$<SetPresetsFromJsonString>b__17_1
// il2cpp: bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_1 (Settings_SetSettingsContainer___c_T__o* __this, Il2CppObject* x, const MethodInfo_8C4520* method);
// 0x1808c4520

bool Settings_SetSettingsContainer___c_object____SetPresetsFromJsonString_b__17_1
               (Settings_SetSettingsContainer___c_T__o *__this,Il2CppObject *x,MethodInfo_8C4520 *method)

{
  if (Il2CppMethodInitialized_18433dfd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18433dfd9 = '\x01';
  }
  if ((x != (Il2CppObject *)0x0) && (x[3].monitor != (void *)0x0)) {
    return (bool)*(undefined1 *)((longlong)x[3].monitor + 0x19);
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$get_PresetsOnly
// il2cpp: bool Settings_SetSettingsContainer_object___get_PresetsOnly (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_668280* method);
// 0x180668280

bool
Settings_SetSettingsContainer_object___get_PresetsOnly(Settings_SetSettingsContainer_T__o* __this, MethodInfo_668280* method)

{
  return false;
}


// Settings.SetSettingsContainer<object>$$get_AllowPresets
// il2cpp: bool Settings_SetSettingsContainer_object___get_AllowPresets (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_8ED110* method);
// 0x1808ed110

bool
Settings_SetSettingsContainer_object___get_AllowPresets(Settings_SetSettingsContainer_T__o* __this, MethodInfo_8ED110* method)

{
  return true;
}


// Settings.SetSettingsContainer<object>$$Validate
// il2cpp: bool Settings_SetSettingsContainer_object___Validate (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8F660* method);
// 0x180c8f660

bool Settings_SetSettingsContainer_object___Validate
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8F660 *method)

{
  Settings_ListSetting_T__o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    iVar1 = Settings_ListSetting_object___GetCount
                      (__this_00,
                       (MethodInfo_182B100 *)method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
    return 0 < iVar1;
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$Apply
// il2cpp: void Settings_SetSettingsContainer_object___Apply (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8E5D0* method);
// 0x180c8e5d0

void Settings_SetSettingsContainer_object___Apply
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8E5D0 *method)

{
  if (__this != (Settings_SetSettingsContainer_T__o *)0x0) {
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    Settings_SetSettingsContainer_object___MigrateUniqueIds
              (__this,(MethodInfo_C8EED0 *)
                      method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T__MigrateUniqueIds);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$MigrateUniqueIds
// il2cpp: void Settings_SetSettingsContainer_object___MigrateUniqueIds (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8EED0* method);
// 0x180c8eed0
// eh: try 0x180c8efc2..0x180c8f0ce -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180c8f089: mov rdx, qword ptr [rip + 0x33e7448]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x180c8f090: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x180c8f095: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x180c8f09a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x180c8f09f: test rcx, rcx
// asm:   0x180c8f0a2: jne 0x180c8f0ce
// asm:   0x180c8f0ce: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Settings_SetSettingsContainer_object___MigrateUniqueIds
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8EED0 *method)

{
  byte bVar1;
  Settings_ListSetting_T__o *__this_00;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_BaseSetting__o *__this_02;
  System_Guid_o *pSVar4;
  System_String_o *value;
  System_Guid_Fields local_50;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_18433ee7a == '\0') {
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
    Il2CppMethodInitialized_18433ee7a = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  local_50._a = 0;
  local_50._b = 0;
  local_50._c = 0;
  local_50._d = '\0';
  local_50._e = '\0';
  local_50._f = '\0';
  local_50._g = '\0';
  local_50._h = '\0';
  local_50._i = '\0';
  local_50._j = '\0';
  local_50._k = '\0';
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    __this_02 = Settings_ListSetting_object___GetItems
                          (__this_00,
                           (MethodInfo_182B160 *)
                           method->klass->rgctx_data->_4_Settings_ListSetting_T__GetItems);
    if (__this_02 != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                (&local_40,(System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_28.fields._list = local_40.fields._list;
      local_28.fields._index = local_40.fields._index;
      local_28.fields._version = local_40.fields._version;
      local_28.fields._current = local_40.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        pIVar2 = local_28.fields._current;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
          return;
        }
        if (local_28.fields._current == (Il2CppObject *)0x0) break;
        bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if ((((local_28.fields._current)->klass->_2).typeHierarchyDepth < bVar1) ||
           (((local_28.fields._current)->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_28.fields._current);
        }
        if (local_28.fields._current[4].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_String__IsNullOrEmpty
                          (((local_28.fields._current[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
        if (bVar3) {
          __this_01 = pIVar2[4].klass;
          pSVar4 = System_Guid__NewGuid((System_Guid_o *)&local_40,(MethodInfo *)0x0);
          local_50._a = (pSVar4->fields)._a;
          local_50._b = (pSVar4->fields)._b;
          local_50._c = (pSVar4->fields)._c;
          local_50._d = (pSVar4->fields)._d;
          local_50._e = (pSVar4->fields)._e;
          local_50._f = (pSVar4->fields)._f;
          local_50._g = (pSVar4->fields)._g;
          local_50._h = (pSVar4->fields)._h;
          local_50._i = (pSVar4->fields)._i;
          local_50._j = (pSVar4->fields)._j;
          local_50._k = (pSVar4->fields)._k;
          value = System_Guid__ToString((System_Guid_o *)&local_50,(MethodInfo *)0x0);
          if (__this_01 == (Il2CppClass *)0x0) {
            ThrowNullReferenceException();
          }
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSelectedSet
// il2cpp: Settings_BaseSetSetting_o* Settings_SetSettingsContainer_object___GetSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8EAF0* method);
// 0x180c8eaf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180c8ec04: jmp 0x180c8ebcd

Settings_BaseSetSetting_o *
Settings_SetSettingsContainer_object___GetSelectedSet
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8EAF0 *method)

{
  byte bVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  int32_t iVar4;
  int32_t iVar5;
  Settings_BaseSetSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_18433ee7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18433ee7b = '\x01';
  }
  pSVar2 = (__this->fields).SelectedSetIndex;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) &&
     (pSVar3 = (__this->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) {
    iVar5 = (pSVar2->fields)._value;
    iVar4 = Settings_ListSetting_object___GetCount
                      (pSVar3,(MethodInfo_182B100 *)
                              method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar5 = System_Math__Min_1b2c2d0(iVar5,iVar4 + -1,(MethodInfo *)0x0);
    iVar5 = System_Math__Max_1b2c0d0(iVar5,0,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).Sets;
    if (pSVar3 != (Settings_ListSetting_T__o *)0x0) {
      pSVar6 = (Settings_BaseSetSetting_o *)
               Settings_ListSetting_object___GetItemAt
                         (pSVar3,iVar5,
                          (MethodInfo_182B120 *)
                          method->klass->rgctx_data->_5_Settings_ListSetting_T__GetItemAt);
      if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6,TypeInfo_Settings_BaseSetSetting);
        }
      }
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSelectedSetIndex
// il2cpp: Settings_IntSetting_o* Settings_SetSettingsContainer_object___GetSelectedSetIndex (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_5853F0* method);
// 0x1805853f0

Settings_IntSetting_o*
Settings_SetSettingsContainer_object___GetSelectedSetIndex(Settings_SetSettingsContainer_T__o* __this, MethodInfo_5853F0* method)

{
  return (__this->fields).SelectedSetIndex;
}


// Settings.SetSettingsContainer<object>$$CreateSet
// il2cpp: void Settings_SetSettingsContainer_object___CreateSet (Settings_SetSettingsContainer_T__o* __this, System_String_o* name, const MethodInfo_C8E8E0* method);
// 0x180c8e8e0

void Settings_SetSettingsContainer_object___CreateSet
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *name,MethodInfo_C8E8E0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *item;
  System_Guid_o *pSVar6;
  System_String_o *value;
  System_Guid_Fields local_48;
  System_Guid_o local_38;
  
  if (Il2CppMethodInitialized_18433ee7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_18433ee7c = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  item = System_Activator__CreateInstance_object_
                   ((MethodInfo_5D2E30 *)method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  if ((item != (Il2CppObject *)0x0) && (item[3].klass != (Il2CppClass *)0x0)) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)item[3].klass,(Il2CppObject *)name,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_00 = item[4].klass;
    pSVar6 = System_Guid__NewGuid(&local_38,(MethodInfo *)0x0);
    local_48._a = (pSVar6->fields)._a;
    local_48._b = (pSVar6->fields)._b;
    local_48._c = (pSVar6->fields)._c;
    local_48._d = (pSVar6->fields)._d;
    local_48._e = (pSVar6->fields)._e;
    local_48._f = (pSVar6->fields)._f;
    local_48._g = (pSVar6->fields)._g;
    local_48._h = (pSVar6->fields)._h;
    local_48._i = (pSVar6->fields)._i;
    local_48._j = (pSVar6->fields)._j;
    local_48._k = (pSVar6->fields)._k;
    value = System_Guid__ToString((System_Guid_o *)&local_48,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppClass *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pSVar3 = (__this->fields).Sets;
      if ((pSVar3 != (Settings_ListSetting_T__o *)0x0) &&
         (__this_01 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
         __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
        pSVar4 = (__this_01->fields)._items;
        pMVar5 = method->klass->rgctx_data->_11_System_Collections_Generic_List_T__Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if ((uint)pSVar4->max_length <= uVar2) {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_01,item,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            return;
          }
          (__this_01->fields)._size = uVar2 + 1;
          if (uVar2 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
            return;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CopySelectedSet
// il2cpp: void Settings_SetSettingsContainer_object___CopySelectedSet (Settings_SetSettingsContainer_T__o* __this, System_String_o* name, const MethodInfo_C8E740* method);
// 0x180c8e740

void Settings_SetSettingsContainer_object___CopySelectedSet
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *name,MethodInfo_C8E740 *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *__this_00;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *item;
  undefined8 uVar6;
  System_Guid_o *pSVar7;
  System_String_o *value;
  System_Guid_Fields local_48;
  System_Guid_o local_38;
  
  if (Il2CppMethodInitialized_18433ee7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_18433ee7d = '\x01';
  }
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  item = System_Activator__CreateInstance_object_
                   ((MethodInfo_5D2E30 *)method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  uVar6 = il2cpp_runtime_helper_1800c4110(__this,method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet)
  ;
  if (item != (Il2CppObject *)0x0) {
    (*item->klass->vtable[10].methodPtr)(item,uVar6,item->klass->vtable[10].method);
    if (item[3].klass != (Il2CppClass *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)item[3].klass,(Il2CppObject *)name,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      if (item[3].monitor != (Settings_TypedSetting_bool__o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  (item[3].monitor,false,(MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value)
        ;
        __this_00 = item[4].klass;
        pSVar7 = System_Guid__NewGuid(&local_38,(MethodInfo *)0x0);
        local_48._a = (pSVar7->fields)._a;
        local_48._b = (pSVar7->fields)._b;
        local_48._c = (pSVar7->fields)._c;
        local_48._d = (pSVar7->fields)._d;
        local_48._e = (pSVar7->fields)._e;
        local_48._f = (pSVar7->fields)._f;
        local_48._g = (pSVar7->fields)._g;
        local_48._h = (pSVar7->fields)._h;
        local_48._i = (pSVar7->fields)._i;
        local_48._j = (pSVar7->fields)._j;
        local_48._k = (pSVar7->fields)._k;
        value = System_Guid__ToString((System_Guid_o *)&local_48,(MethodInfo *)0x0);
        if (__this_00 != (Il2CppClass *)0x0) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          pSVar3 = (__this->fields).Sets;
          if ((pSVar3 != (Settings_ListSetting_T__o *)0x0) &&
             (__this_01 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
             __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
            pSVar4 = (__this_01->fields)._items;
            pMVar5 = method->klass->rgctx_data->_11_System_Collections_Generic_List_T__Add;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            if (pSVar4 != (System_Object_array *)0x0) {
              uVar2 = (__this_01->fields)._size;
              if ((uint)pSVar4->max_length <= uVar2) {
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,item,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                return;
              }
              (__this_01->fields)._size = uVar2 + 1;
              if (uVar2 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[(int)uVar2] = item;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
                return;
              }
              ThrowIndexOutOfRangeException();
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CanDeleteSelectedSet
// il2cpp: bool Settings_SetSettingsContainer_object___CanDeleteSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8E620* method);
// 0x180c8e620

bool Settings_SetSettingsContainer_object___CanDeleteSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8E620 *method)

{
  Settings_ListSetting_T__o *__this_00;
  MethodInfo *pMVar1;
  int32_t iVar2;
  longlong lVar3;
  
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    iVar2 = Settings_ListSetting_object___GetCount
                      (__this_00,
                       (MethodInfo_182B100 *)method->klass->rgctx_data->_2_Settings_ListSetting_T__GetCount);
    if (iVar2 < 2) {
      return false;
    }
    pMVar1 = method->klass->rgctx_data->_13_Settings_SetSettingsContainer_T__CanEditSelectedSet;
    if (Il2CppMethodInitialized_18433ee7e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      Il2CppMethodInitialized_18433ee7e = '\x01';
    }
    lVar3 = il2cpp_runtime_helper_1800c4110(__this,pMVar1->klass->rgctx_data[0xc].rgctxDataDummy);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x38) != 0)) {
      return *(char *)(*(longlong *)(lVar3 + 0x38) + 0x19) == '\0';
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$CanEditSelectedSet
// il2cpp: bool Settings_SetSettingsContainer_object___CanEditSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8E6D0* method);
// 0x180c8e6d0

bool Settings_SetSettingsContainer_object___CanEditSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8E6D0 *method)

{
  longlong lVar1;
  
  if (Il2CppMethodInitialized_18433ee7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18433ee7e = '\x01';
  }
  lVar1 = il2cpp_runtime_helper_1800c4110(__this,method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet)
  ;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) {
    return *(char *)(*(longlong *)(lVar1 + 0x38) + 0x19) == '\0';
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$DeleteSelectedSet
// il2cpp: void Settings_SetSettingsContainer_object___DeleteSelectedSet (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8EA30* method);
// 0x180c8ea30

void Settings_SetSettingsContainer_object___DeleteSelectedSet
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8EA30 *method)

{
  Settings_ListSetting_T__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_SetSettingsContainer_T__RGCTXs *pSVar2;
  MethodInfo *method_00;
  Il2CppObject *obj;
  Il2CppClass *klass;
  Il2CppObject *item;
  
  pSVar1 = (__this->fields).Sets;
  if (pSVar1 != (Settings_ListSetting_T__o *)0x0) {
    __this_00 = (System_Collections_Generic_List_object__o *)(pSVar1->fields)._value;
    obj = (Il2CppObject *)
          il2cpp_runtime_helper_1800c4110(__this,method->klass->rgctx_data->_12_Settings_SetSettingsContainer_T__GetSelectedSet)
    ;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar2 = method->klass->rgctx_data;
      klass = pSVar2->_7_T;
      method_00 = pSVar2->_14_System_Collections_Generic_List_T__Remove;
      if (((klass->_2).bitflags1 & 1) == 0) {
        klass = il2cpp_codegen_class_init_checked(klass);
      }
      if (obj == (Il2CppObject *)0x0) {
        item = (Il2CppObject *)0x0;
      }
      else {
        item = il2cpp_vm_Object_IsInst(obj,klass);
        if (item == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
        }
      }
      System_Collections_Generic_List_object___Remove(__this_00,item,(MethodInfo_947340 *)method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSets
// il2cpp: Settings_IListSetting_o* Settings_SetSettingsContainer_object___GetSets (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8EEC0* method);
// 0x180c8eec0

Settings_IListSetting_o*
Settings_SetSettingsContainer_object___GetSets(Settings_SetSettingsContainer_T__o* __this, MethodInfo_C8EEC0* method)

{
  return (__this->fields).Sets;
}


// Settings.SetSettingsContainer<object>$$SetPresetsFromJsonString
// il2cpp: void Settings_SetSettingsContainer_object___SetPresetsFromJsonString (Settings_SetSettingsContainer_T__o* __this, System_String_o* json, const MethodInfo_C8F0E0* method);
// 0x180c8f0e0

void Settings_SetSettingsContainer_object___SetPresetsFromJsonString
               (Settings_SetSettingsContainer_T__o *__this,System_String_o *json,MethodInfo_C8F0E0 *method)

{
  int32_t *piVar1;
  int32_t length;
  Settings_ListSetting_T__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  Settings_SetSettingsContainer_T__RGCTXs *pSVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  System_Collections_Generic_List_object__o *__this_00;
  char cVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  System_Predicate_T__o *pSVar9;
  Il2CppObject *pIVar10;
  int index;
  
  if (Il2CppMethodInitialized_18433ee7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_18433ee7f = '\x01';
  }
  pIVar7 = method->klass->rgctx_data->_0_Settings_SetSettingsContainer_T_;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  pIVar8 = il2cpp_codegen_object_new(pIVar7);
  il2cpp_runtime_helper_1800c4240(pIVar8,method->klass->rgctx_data->_15_Settings_SetSettingsContainer_T___ctor);
  if (pIVar8 != (Il2CppObject *)0x0) {
    (*pIVar8->klass->vtable[9].methodPtr)(pIVar8,json,pIVar8->klass->vtable[9].method);
    cVar6 = (*(__this->klass->vtable)._25_get_AllowPresets.methodPtr)
                      (__this,(__this->klass->vtable)._25_get_AllowPresets.method);
    if (cVar6 == '\0') {
      pSVar2 = (__this->fields).Sets;
      if (pSVar2 != (Settings_ListSetting_T__o *)0x0) {
        pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
        pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar7->_2).bitflags1 & 1) == 0) {
          pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
        }
        if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(pIVar7);
        }
        pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
        if (((pIVar7->_2).bitflags1 & 1) == 0) {
          pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
        }
        pSVar9 = *(System_Predicate_T__o **)((longlong)pIVar7->static_fields + 8);
        if (pSVar9 == (System_Predicate_T__o *)0x0) {
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar7);
          }
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          pIVar8 = *(Il2CppObject **)pIVar7->static_fields;
          pIVar7 = method->klass->rgctx_data->_18_System_Predicate_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          pSVar9 = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar7);
          pSVar4 = method->klass->rgctx_data;
          System_Predicate_object____ctor
                    ((System_Predicate_object__o *)pSVar9,pIVar8,
                     (intptr_t)
                     pSVar4->_20_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_0,
                     (MethodInfo_B61EB0 *)pSVar4->_21_System_Predicate_T___ctor);
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          *(System_Predicate_T__o **)((longlong)pIVar7->static_fields + 8) = pSVar9;
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar7->static_fields + 8),pSVar9);
        }
        if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    (pSVar3,pSVar9,
                     (MethodInfo_946210 *)
                     method->klass->rgctx_data->_22_System_Collections_Generic_List_T__RemoveAll);
          return;
        }
      }
    }
    else {
      cVar6 = (*(__this->klass->vtable)._24_get_PresetsOnly.methodPtr)(__this);
      pSVar2 = (__this->fields).Sets;
      if (pSVar2 != (Settings_ListSetting_T__o *)0x0) {
        if (cVar6 == '\0') {
          pSVar3 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(pIVar7);
          }
          pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
          if (((pIVar7->_2).bitflags1 & 1) == 0) {
            pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
          }
          pSVar9 = *(System_Predicate_T__o **)((longlong)pIVar7->static_fields + 0x10);
          if (pSVar9 == (System_Predicate_T__o *)0x0) {
            pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
            if (((pIVar7->_2).bitflags1 & 1) == 0) {
              pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
            }
            if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(pIVar7);
            }
            pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
            if (((pIVar7->_2).bitflags1 & 1) == 0) {
              pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
            }
            pIVar10 = *(Il2CppObject **)pIVar7->static_fields;
            pIVar7 = method->klass->rgctx_data->_18_System_Predicate_T_;
            if (((pIVar7->_2).bitflags1 & 1) == 0) {
              pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
            }
            pSVar9 = (System_Predicate_T__o *)il2cpp_codegen_object_new(pIVar7);
            pSVar4 = method->klass->rgctx_data;
            System_Predicate_object____ctor
                      ((System_Predicate_object__o *)pSVar9,pIVar10,
                       (intptr_t)
                       pSVar4->_25_Settings_SetSettingsContainer___c_T___SetPresetsFromJsonString_b__17_1,
                       (MethodInfo_B61EB0 *)pSVar4->_21_System_Predicate_T___ctor);
            pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
            if (((pIVar7->_2).bitflags1 & 1) == 0) {
              pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
            }
            *(System_Predicate_T__o **)((longlong)pIVar7->static_fields + 0x10) = pSVar9;
            pIVar7 = method->klass->rgctx_data->_19_Settings_SetSettingsContainer___c_T_;
            if (((pIVar7->_2).bitflags1 & 1) == 0) {
              pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
            }
            Il2CppCodeGenWriteBarrier((void **)((longlong)pIVar7->static_fields + 0x10),pSVar9);
          }
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_180c8f64d;
          System_Collections_Generic_List_object___RemoveAll
                    (pSVar3,pSVar9,
                     (MethodInfo_946210 *)
                     method->klass->rgctx_data->_22_System_Collections_Generic_List_T__RemoveAll);
        }
        else {
          pSVar5 = (pSVar2->fields)._value;
          if (pSVar5 == (System_Collections_Generic_List_T__o *)0x0) goto label_180c8f64d;
          length = (pSVar5->fields)._size;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          (pSVar5->fields)._size = 0;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
          }
        }
        index = 0;
        while ((pIVar8[3].monitor != (void *)0x0 &&
               (pSVar3 = *(System_Collections_Generic_List_object__o **)((longlong)pIVar8[3].monitor + 0x20),
               pSVar3 != (System_Collections_Generic_List_object__o *)0x0))) {
          if ((pSVar3->fields)._size <= index) {
            return;
          }
          pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (pSVar3,index,
                               (MethodInfo_92B830 *)
                               method->klass->rgctx_data->_26_System_Collections_Generic_List_T__get_Item);
          if ((pIVar10 == (Il2CppObject *)0x0) || (pIVar10[3].monitor == (Settings_TypedSetting_bool__o *)0x0)
             ) break;
          Settings_TypedSetting_bool___set_Value
                    (pIVar10[3].monitor,true,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar2 = (__this->fields).Sets;
          if ((pSVar2 == (Settings_ListSetting_T__o *)0x0) ||
             ((pIVar8[3].monitor == (void *)0x0 ||
              (pSVar3 = *(System_Collections_Generic_List_object__o **)((longlong)pIVar8[3].monitor + 0x20),
              pSVar3 == (System_Collections_Generic_List_object__o *)0x0)))) break;
          __this_00 = (System_Collections_Generic_List_object__o *)(pSVar2->fields)._value;
          pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              (pSVar3,index,
                               (MethodInfo_92B830 *)
                               method->klass->rgctx_data->_26_System_Collections_Generic_List_T__get_Item);
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) break;
          System_Collections_Generic_List_object___Insert
                    (__this_00,index,pIVar10,
                     (MethodInfo_945FE0 *)
                     method->klass->rgctx_data->_27_System_Collections_Generic_List_T__Insert);
          index = index + 1;
        }
      }
    }
  }
label_180c8f64d:
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$GetSetNames
// il2cpp: System_String_array* Settings_SetSettingsContainer_object___GetSetNames (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8EC20* method);
// 0x180c8ec20
// eh: try 0x180c8ed60..0x180c8eeb5 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180c8ee45: mov rdx, qword ptr [rip + 0x33e768c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x180c8ee4c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x180c8ee51: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x180c8ee56: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x180c8ee5b: test rcx, rcx
// asm:   0x180c8ee5e: jne 0x180c8eeb5
// asm:   0x180c8ee60: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x180c8eeb5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_array *
Settings_SetSettingsContainer_object___GetSetNames
          (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8EC20 *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_ListSetting_T__o *__this_00;
  System_String_o *item;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_01;
  System_Collections_Generic_List_BaseSetting__o *__this_02;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_18433ee80 == '\0') {
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
    Il2CppMethodInitialized_18433ee80 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields).Sets;
  if (__this_00 != (Settings_ListSetting_T__o *)0x0) {
    __this_02 = Settings_ListSetting_object___GetItems
                          (__this_00,
                           (MethodInfo_182B160 *)
                           method->klass->rgctx_data->_4_Settings_ListSetting_T__GetItems);
    if (__this_02 != (System_Collections_Generic_List_BaseSetting__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_02,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (!bVar6) break;
        if (local_18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_Settings_BaseSetSetting->_2).typeHierarchyDepth;
        if (((local_18->klass->_2).typeHierarchyDepth < bVar2) ||
           ((local_18->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_18);
        }
        if (local_18[3].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        item = ((local_18[3].klass)->_1).byval_arg.data;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          if ((uint)pSVar4->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        pUVar7 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_01,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        return (System_String_array *)pUVar7;
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SetSettingsContainer<object>$$.ctor
// il2cpp: void Settings_SetSettingsContainer_object____ctor (Settings_SetSettingsContainer_T__o* __this, const MethodInfo_C8F6A0* method);
// 0x180c8f6a0

void Settings_SetSettingsContainer_object____ctor
               (Settings_SetSettingsContainer_T__o *__this,MethodInfo_C8F6A0 *method)

{
  Settings_IntSetting_o *__this_00;
  Il2CppObject *defaultValue;
  Il2CppClass *klass;
  Settings_ListSetting_T__o *__this_01;
  
  if (Il2CppMethodInitialized_18433ee81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_18433ee81 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(__this_00,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SelectedSetIndex = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SelectedSetIndex,__this_00);
  defaultValue = System_Activator__CreateInstance_object_
                           ((MethodInfo_5D2E30 *)
                            method->klass->rgctx_data->_6_System_Activator_CreateInstance_T_);
  klass = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_01 = (Settings_ListSetting_T__o *)il2cpp_codegen_object_new(klass);
  Settings_ListSetting_object____ctor_182b830
            (__this_01,defaultValue,
             (MethodInfo_182B830 *)method->klass->rgctx_data->_29_Settings_ListSetting_T___ctor);
  (__this->fields).Sets = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sets,__this_01);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


