// Type: Settings.MobileInputBindingRegistry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/MobileInputBindingRegistry.cs
// Prior real C# source: none
// --------------------------------

// Settings.MobileInputBindingRegistry.<>c$$.cctor
// il2cpp: void Settings_MobileInputBindingRegistry___c___cctor (const MethodInfo* method);
// 0x59ce0b0

void Settings_MobileInputBindingRegistry___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545c4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry_c);
    Il2CppMethodInitialized_07545c4f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields->__9 =
       (Settings_MobileInputBindingRegistry___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields->__9);
  return;
}


// Settings.MobileInputBindingRegistry.<>c$$.ctor
// il2cpp: void Settings_MobileInputBindingRegistry___c___ctor (Settings_MobileInputBindingRegistry___c_o* __this, const MethodInfo* method);
// 0x59ce120

void Settings_MobileInputBindingRegistry___c___ctor
               (Settings_MobileInputBindingRegistry___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.MobileInputBindingRegistry.<>c$$<GetGroups>b__8_0
// il2cpp: System_String_o* Settings_MobileInputBindingRegistry___c___GetGroups_b__8_0 (Settings_MobileInputBindingRegistry___c_o* __this, Settings_MobileInputBinding_o* x, const MethodInfo* method);
// 0x59ce130

System_String_o *
Settings_MobileInputBindingRegistry___c___GetGroups_b__8_0
          (Settings_MobileInputBindingRegistry___c_o *__this,Settings_MobileInputBinding_o *x,
          MethodInfo *method)

{
  if (x == (Settings_MobileInputBinding_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields)._Group_k__BackingField;
}


// Settings.MobileInputBindingRegistry$$get_IsReady
// il2cpp: bool Settings_MobileInputBindingRegistry__get_IsReady (const MethodInfo* method);
// 0x59cceb0

bool Settings_MobileInputBindingRegistry__get_IsReady(MethodInfo *method)

{
  Settings_MobileInputBindingRegistry_c *method_00;
  
  if (Il2CppMethodInitialized_07545c46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07545c46 = '\x01';
  }
  method_00 = TypeInfo_Settings_MobileInputBindingRegistry;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  Settings_MobileInputBindingRegistry__EnsureLoaded((MethodInfo *)method_00);
  return TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_loaded;
}


// Settings.MobileInputBindingRegistry$$TryGetBinding
// il2cpp: bool Settings_MobileInputBindingRegistry__TryGetBinding (System_String_o* id, Settings_MobileInputBinding_o** binding, const MethodInfo* method);
// 0x59ccfb0

bool Settings_MobileInputBindingRegistry__TryGetBinding
               (System_String_o *id,Settings_MobileInputBinding_o **binding,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Settings_MobileInputBindingRegistry_c *method_00;
  
  if (Il2CppMethodInitialized_07545c47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545c47 = '\x01';
  }
  method_00 = TypeInfo_Settings_MobileInputBindingRegistry;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  Settings_MobileInputBindingRegistry__EnsureLoaded((MethodInfo *)method_00);
  bVar1 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_52ffe30(id,"None",4,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
      }
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_bindings;
      if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this,(Il2CppObject *)id,(Il2CppObject **)binding,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_TryGetValue
                        );
      return bVar1;
    }
  }
  *binding = (Settings_MobileInputBinding_o *)0x0;
  Il2CppCodeGenWriteBarrier(binding);
  return false;
}


// Settings.MobileInputBindingRegistry$$GetAll
// il2cpp: System_Collections_Generic_IEnumerable_MobileInputBinding__o* Settings_MobileInputBindingRegistry__GetAll (const MethodInfo* method);
// 0x59cd0a0

System_Collections_Generic_IEnumerable_MobileInputBinding__o *
Settings_MobileInputBindingRegistry__GetAll(MethodInfo *method)

{
  Settings_MobileInputBindingRegistry_c *method_00;
  
  if (Il2CppMethodInitialized_07545c48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    Il2CppMethodInitialized_07545c48 = '\x01';
  }
  method_00 = TypeInfo_Settings_MobileInputBindingRegistry;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  Settings_MobileInputBindingRegistry__EnsureLoaded((MethodInfo *)method_00);
  return (System_Collections_Generic_IEnumerable_MobileInputBinding__o *)
         TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_orderedBindings;
}


// Settings.MobileInputBindingRegistry$$GetGroups
// il2cpp: System_String_array* Settings_MobileInputBindingRegistry__GetGroups (const MethodInfo* method);
// 0x59cd0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cd1ab: jmp 0x59cd1c6

System_String_array * Settings_MobileInputBindingRegistry__GetGroups(MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputBinding__o *source;
  Il2CppObject *object;
  Settings_MobileInputBindingRegistry___c_StaticFields *pSVar1;
  System_Func_MobileInputBinding__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_01;
  System_String_array *pSVar2;
  Settings_MobileInputBindingRegistry_c *method_00;
  
  if (Il2CppMethodInitialized_07545c49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_MobileInputBinding_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_MobileInputBinding_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_MobileInputBindingRegistry_c_GetGroups_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry_c);
    Il2CppMethodInitialized_07545c49 = '\x01';
  }
  method_00 = TypeInfo_Settings_MobileInputBindingRegistry;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  Settings_MobileInputBindingRegistry__EnsureLoaded((MethodInfo *)method_00);
  source = TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_orderedBindings;
  if ((TypeInfo_Settings_MobileInputBindingRegistry_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry_c);
    pSVar1 = TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields;
    __this = pSVar1->__9__8_0;
  }
  else {
    pSVar1 = TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields;
    __this = pSVar1->__9__8_0;
  }
  if (__this == (System_Func_MobileInputBinding__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry_c)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry_c);
      pSVar1 = TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields;
    }
    object = (Il2CppObject *)pSVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_MobileInputBinding_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,object,
               (intptr_t)MethodInfo_Settings_MobileInputBindingRegistry_c_GetGroups_b__8_0,
               (MethodInfo_4F19B50 *)0x0);
    pSVar1 = TypeInfo_Settings_MobileInputBindingRegistry_c->static_fields;
    pSVar1->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pSVar1->__9__8_0);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this,
                         (MethodInfo_34F60F0 *)
                         MethodInfo_System_Linq_Enumerable_Select_MobileInputBinding_string);
  source_01 = System_Linq_Enumerable__Distinct_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_34E8B20 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (source_01,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// Settings.MobileInputBindingRegistry$$GetIdsForGroup
// il2cpp: System_String_array* Settings_MobileInputBindingRegistry__GetIdsForGroup (System_String_o* group, const MethodInfo* method);
// 0x59cd270
// eh: try 0x59cd42f..0x59cd51f -> pad 0x59cd52c (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59cd548..0x59cd54d -> pad 0x59cd572 cleanup
// eh: try 0x59cd575..0x59cd57f -> pad 0x59cd587 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cd51a: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x59cd524: jmp 0x59cd530
// asm:   0x59cd526: jmp 0x59cd530
// asm:   0x59cd528: jmp 0x59cd530
// asm:   0x59cd52a: jmp 0x59cd530
// asm:   0x59cd52c: jmp 0x59cd530
// asm:   0x59cd52e: jmp 0x59cd530
// asm:   0x59cd530: mov r14, rax
// asm:   0x59cd533: cmp edx, 1
// asm:   0x59cd536: jne 0x59cd575
// asm:   0x59cd538: mov rdi, r14
// asm:   0x59cd53b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59cd540: mov r14, qword ptr [rax]
// asm:   0x59cd543: mov qword ptr [rsp + 8], r14
// asm:   0x59cd548: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cd54d: lea rax, [rip + 0x18c101c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_Dispose
// asm:   0x59cd554: mov rsi, qword ptr [rax]
// asm:   0x59cd557: lea rdi, [rsp + 0x20]
// asm:   0x59cd55c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59cd561: test r14, r14
// asm:   0x59cd564: je 0x59cd4dd
// asm:   0x59cd56a: mov rdi, r14
// asm:   0x59cd56d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59cd572: mov r14, rax
// asm:   0x59cd575: lea rdi, [rsp + 8]
// asm:   0x59cd57a: call 0x2fd5690  ; il2cpp_runtime_helper_02fd5690()
// asm:   0x59cd57f: mov rdi, r14
// asm:   0x59cd582: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59cd587: mov rdi, rax
// asm:   0x59cd58a: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Settings_MobileInputBindingRegistry__GetIdsForGroup(System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MobileInputBinding__o *__this;
  Il2CppClass *item;
  MethodInfo *pMVar3;
  System_String_o *item_00;
  Il2CppObject *pIVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *pSVar6;
  Settings_MobileInputBindingRegistry_c *method_00;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_07545c4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputBinding_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07545c4a = '\x01';
  }
  method_00 = TypeInfo_Settings_MobileInputBindingRegistry;
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  Settings_MobileInputBindingRegistry__EnsureLoaded((MethodInfo *)method_00);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  item_00 = "None";
  pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar6->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar6->m_Items[(int)uVar2] = item_00;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item_00,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
      __this = TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_orderedBindings;
      if (__this != (System_Collections_Generic_List_MobileInputBinding__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                   (System_Collections_Generic_List_object__o *)__this,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputBinding_GetEnumerator);
        local_48.fields._current = local_50;
        local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
        local_48.fields._index = local_60._8_4_;
        local_48.fields._version = local_60._12_4_;
        local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_60._8_8_ = &local_48;
label_059cd437:
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_MoveNext);
        pIVar4 = local_48.fields._current;
        if (!bVar5) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&local_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputBinding_Dispose);
          source = System_Linq_Enumerable__Distinct_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)__this_00,
                              (MethodInfo_34E8B20 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
          pSVar6 = (System_String_array *)
                   System_Linq_Enumerable__ToArray_object_
                             (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
          return pSVar6;
        }
        bVar5 = System_String__IsNullOrEmpty(group,(MethodInfo *)0x0);
        if (!bVar5) goto label_059cd470;
        if (pIVar4 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        goto label_059cd48b;
      }
    }
  }
  ThrowNullReferenceException();
label_059cd470:
  if (pIVar4 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  bVar5 = System_String__op_Equality(pIVar4[1].monitor,group,(MethodInfo *)0x0);
  if (bVar5) {
label_059cd48b:
    pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
    item = pIVar4[1].klass;
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar6 = (__this_00->fields)._items;
    if (pSVar6 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = (System_String_o *)item;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
    }
  }
  goto label_059cd437;
}


// Settings.MobileInputBindingRegistry$$GetMovementId
// il2cpp: System_String_o* Settings_MobileInputBindingRegistry__GetMovementId (int32_t role, System_String_o* name, const MethodInfo* method);
// 0x59cd590

System_String_o *
Settings_MobileInputBindingRegistry__GetMovementId(int32_t role,System_String_o *name,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545c4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General.");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor.");
    Il2CppMethodInitialized_07545c4b = '\x01';
  }
  if (role == 5) {
    ppSVar1 = &"MapEditor.";
  }
  else {
    ppSVar1 = &"General.";
  }
  pSVar2 = System_String__Concat_52f0320(*ppSVar1,name,(MethodInfo *)0x0);
  return pSVar2;
}


// Settings.MobileInputBindingRegistry$$EnsureLoaded
// il2cpp: void Settings_MobileInputBindingRegistry__EnsureLoaded (const MethodInfo* method);
// 0x59ccf00

void Settings_MobileInputBindingRegistry__EnsureLoaded(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07545c4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07545c4c = '\x01';
    uVar2 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
    cVar1 = TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_loaded;
    klass = (Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry)->static_fields +
                     0x10);
    klass = (Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry;
  }
  if ((cVar1 != '\0') ||
     (TypeInfo_Settings_SettingsManager->static_fields->InputSettings == (Settings_InputSettings_o *)0x0)) {
    TypeInfo_Settings_MobileInputBindingRegistry = (Settings_MobileInputBindingRegistry_c *)klass;
    return;
  }
  TypeInfo_Settings_MobileInputBindingRegistry = (Settings_MobileInputBindingRegistry_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  Settings_MobileInputBindingRegistry__RegisterInputSettings((MethodInfo *)klass);
  TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_loaded = true;
  return;
}


// Settings.MobileInputBindingRegistry$$RegisterInputSettings
// il2cpp: void Settings_MobileInputBindingRegistry__RegisterInputSettings (const MethodInfo* method);
// 0x59cd5f0
// eh: try 0x59cd791..0x59cd9da -> pad 0x59cdec1 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59cda0d..0x59cdcc6 -> pad 0x59cdd8c (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59cdcdb..0x59cdce0 -> pad 0x59cdec1 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59cdd4b..0x59cdd85 -> pad 0x59cddab (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59cddcf..0x59cde98 -> pad 0x59cdea5 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59cdeab..0x59cdeb5 -> pad 0x59cdf0c catch (...) [compiler noexcept guard]
// eh: try 0x59cdeed..0x59cdef2 -> pad 0x59cdef7 cleanup
// eh: try 0x59cdefa..0x59cdf04 -> pad 0x59cdf0c catch (...) [compiler noexcept guard]
// asm: 80 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cd788: lea rbp, [rip + 0x18abc69]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59cd78f: jmp 0x59cd7ce
// asm:   0x59cd7a4: test rbx, rbx
// asm:   0x59cd7a7: lea rbp, [rip + 0x18abc4a]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59cd7ae: jne 0x59cde90
// asm:   0x59cd7b4: nop word ptr cs:[rax + rax]
// asm:   0x59cd7c0: mov rbx, qword ptr [rsp + 8]
// asm:   0x59cd7c5: test rbx, rbx
// asm:   0x59cd7c8: je 0x59cde6a
// asm:   0x59cd7ee: nop 
// asm:   0x59cda1c: nop dword ptr [rax]
// asm:   0x59cda20: mov rbx, qword ptr [rsp]
// asm:   0x59cda4d: nop dword ptr [rax]
// asm:   0x59cdd1c: nop dword ptr [rax]
// asm:   0x59cdd2f: jmp 0x59cd791
// asm:   0x59cdd8a: jmp 0x59cdd96
// asm:   0x59cdd8c: jmp 0x59cddaf
// asm:   0x59cdd8e: jmp 0x59cdd96
// asm:   0x59cdd90: jmp 0x59cdd96
// asm:   0x59cdd92: jmp 0x59cdd96
// asm:   0x59cdd94: jmp 0x59cddaf
// asm:   0x59cdd96: mov r15, rdx
// asm:   0x59cdd99: mov rbx, rax
// asm:   0x59cdd9c: lea r13, [rip + 0x18aeead]  ; TypeInfo_Settings_SettingsManager
// asm:   0x59cdda3: jmp 0x59cddb5
// asm:   0x59cdda5: jmp 0x59cddaf
// asm:   0x59cdda7: jmp 0x59cddaf
// asm:   0x59cdda9: jmp 0x59cddaf
// asm:   0x59cddab: jmp 0x59cddaf
// asm:   0x59cddad: jmp 0x59cddaf
// asm:   0x59cddaf: mov r15, rdx
// asm:   0x59cddb2: mov rbx, rax
// asm:   0x59cddb5: cmp r15d, 1
// asm:   0x59cddb9: jne 0x59cdeab
// asm:   0x59cddbf: mov rdi, rbx
// asm:   0x59cddc2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59cddc7: mov rbx, qword ptr [rax]
// asm:   0x59cddca: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59cddcf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cddd4: jmp 0x59cdccd
// asm:   0x59cde1e: nop 
// asm:   0x59cde90: mov rdi, rbx
// asm:   0x59cde93: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59cde9d: mov rdi, r14
// asm:   0x59cdea0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59cdea5: mov r15, rdx
// asm:   0x59cdea8: mov rbx, rax
// asm:   0x59cdeab: lea rdi, [rsp + 0x18]
// asm:   0x59cdeb0: call 0x2fd56c0  ; il2cpp_runtime_helper_02fd56c0()
// asm:   0x59cdeb5: jmp 0x59cded7
// asm:   0x59cdeb7: jmp 0x59cded1
// asm:   0x59cdeb9: jmp 0x59cded1
// asm:   0x59cdebb: jmp 0x59cded1
// asm:   0x59cdebd: jmp 0x59cded1
// asm:   0x59cdebf: jmp 0x59cded1
// asm:   0x59cdec1: jmp 0x59cded1
// asm:   0x59cdec3: jmp 0x59cded1
// asm:   0x59cdec5: jmp 0x59cded1
// asm:   0x59cdec7: jmp 0x59cded1
// asm:   0x59cdec9: jmp 0x59cded1
// asm:   0x59cdecb: jmp 0x59cded1
// asm:   0x59cdecd: jmp 0x59cded1
// asm:   0x59cdecf: jmp 0x59cded1
// asm:   0x59cded1: mov r15, rdx
// asm:   0x59cded4: mov rbx, rax
// asm:   0x59cded7: cmp r15d, 1
// asm:   0x59cdedb: jne 0x59cdefa
// asm:   0x59cdedd: mov rdi, rbx
// asm:   0x59cdee0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59cdee5: mov r14, qword ptr [rax]
// asm:   0x59cdee8: mov qword ptr [rsp + 0x30], r14
// asm:   0x59cdeed: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59cdef2: jmp 0x59cdddc
// asm:   0x59cdef7: mov rbx, rax
// asm:   0x59cdefa: lea rdi, [rsp + 0x30]
// asm:   0x59cdeff: call 0x2fd5760  ; il2cpp_runtime_helper_02fd5760()
// asm:   0x59cdf04: mov rdi, rbx
// asm:   0x59cdf07: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59cdf0c: mov rdi, rax
// asm:   0x59cdf0f: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_MobileInputBindingRegistry__RegisterInputSettings(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_InputSettings_o *pSVar4;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_MobileInputBinding__o *__this_00;
  Settings_MobileInputBinding_array *pSVar8;
  MethodInfo *pMVar9;
  char cVar10;
  bool bVar11;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  System_String_o *str0;
  Il2CppObject *pIVar14;
  System_String_o *str2;
  Settings_KeybindSetting_o *pSVar15;
  System_String_o *key;
  Settings_MobileInputBinding_o *__this_01;
  ulong uVar16;
  long lVar17;
  Il2CppObject *local_78;
  Il2CppObject *local_70;
  Il2CppObject *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  Il2CppObject **local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07545c4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputBinding_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07545c4d = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_78 = (Il2CppObject *)0x0;
  local_68 = (Il2CppObject *)0x0;
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
  if (((pSVar4 == (Settings_InputSettings_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Settings, pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0
      )) || (pIVar12 = (Il2CppObject *)
                       System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar5,(MethodInfo *)0x0),
            pIVar12 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar6 = pIVar12->klass;
  uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
  if (uVar16 != 0) {
    pIVar7 = (pIVar6->_1).interfaceOffsets;
    lVar17 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar7->interfaceType + lVar17) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
        goto label_059cd751;
      }
      lVar17 = lVar17 + 0x10;
    } while (uVar16 * 0x10 != lVar17);
  }
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                      (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_059cd751:
  pIVar12 = (Il2CppObject *)(*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  local_48 = 0;
  local_40 = &local_70;
  local_38 = &local_68;
  do {
    local_70 = pIVar12;
    if (pIVar12 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = pIVar12->klass;
    uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar7->interfaceType + lVar17) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
          goto label_059cd823;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059cd823:
    cVar10 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
    pIVar12 = local_70;
    if (cVar10 == '\0') {
      pIVar12 = il2cpp_vm_Object_IsInst(local_70,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar12 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar6 = pIVar12->klass;
      uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
      local_68 = pIVar12;
      if (uVar16 == 0) goto label_059cde2f;
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      lVar17 = 0;
      break;
    }
    if (local_70 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = local_70->klass;
    uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
    if (uVar16 != 0) {
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar17) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar13 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar17) + 1);
          goto label_059cd8b7;
        }
        lVar17 = lVar17 + 0x10;
      } while (uVar16 * 0x10 != lVar17);
    }
    pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_70,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059cd8b7:
    str0 = (System_String_o *)(*pVVar13->methodPtr)(pIVar12,pVVar13->method);
    if ((str0 != (System_String_o *)0x0) && (str0->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(str0);
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
    if (pSVar4 == (Settings_InputSettings_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pSVar4->fields).Settings;
    if (pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item
                        (pSVar5,(Il2CppObject *)str0,(MethodInfo *)0x0);
    pIVar12 = local_70;
    if (pIVar14 != (Il2CppObject *)0x0) {
      bVar2 = (TypeInfo_Settings_BaseSettingsContainer->_2).typeHierarchyDepth;
      if ((bVar2 <= (pIVar14->klass->_2).typeHierarchyDepth) &&
         ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer)) {
        if (pIVar14[1].monitor == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar12 = (Il2CppObject *)
                  System_Collections_Specialized_OrderedDictionary__get_Keys
                            (pIVar14[1].monitor,(MethodInfo *)0x0);
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = pIVar12->klass;
        uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_IEnumerable_c **)((long)&pIVar7->interfaceType + lVar17) ==
                TypeInfo_System_Collections_IEnumerable) {
              pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
              goto label_059cd9d1;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_059cd9d1:
        local_78 = (Il2CppObject *)(*pVVar13->methodPtr)(pIVar12,pVVar13->method);
        local_60 = 0;
        local_50 = &local_68;
        local_58 = (undefined1 *)&local_78;
label_059cda24:
        pIVar12 = local_78;
        if (local_78 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_78->klass;
        uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar16 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar17 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar17) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
              goto label_059cda83;
            }
            lVar17 = lVar17 + 0x10;
          } while (uVar16 * 0x10 != lVar17);
        }
        pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059cda83:
        bVar11 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
        pIVar12 = local_78;
        if (bVar11) {
          if (local_78 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = local_78->klass;
          uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar16 != 0) {
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar17) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar13 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar17) + 1);
                goto label_059cdb17;
              }
              lVar17 = lVar17 + 0x10;
            } while (uVar16 * 0x10 != lVar17);
          }
          pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                              (local_78,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059cdb17:
          str2 = (System_String_o *)(*pVVar13->methodPtr)(pIVar12,pVVar13->method);
          if ((str2 != (System_String_o *)0x0) && (str2->klass != g_data_07556758)) {
            il2cpp_codegen_raise_invalid_cast_exception(str2);
          }
          if (pIVar14[1].monitor == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar15 = (Settings_KeybindSetting_o *)
                    System_Collections_Specialized_OrderedDictionary__get_Item
                              (pIVar14[1].monitor,(Il2CppObject *)str2,(MethodInfo *)0x0);
          if (pSVar15 != (Settings_KeybindSetting_o *)0x0) {
            bVar2 = (TypeInfo_Settings_KeybindSetting->_2).typeHierarchyDepth;
            if ((bVar2 <= (((Il2CppClass *)pSVar15->klass)->_2).typeHierarchyDepth) &&
               ((((Il2CppClass *)pSVar15->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_KeybindSetting)) {
              key = System_String__Concat_5301f10(str0,".",str2,(MethodInfo *)0x0);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MobileInputBinding);
              System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
              (__this_01->fields)._Id_k__BackingField = key;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Id_k__BackingField);
              (__this_01->fields)._Group_k__BackingField = str0;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Group_k__BackingField);
              (__this_01->fields)._Name_k__BackingField = str2;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Name_k__BackingField);
              (__this_01->fields)._Keybind_k__BackingField = pSVar15;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Keybind_k__BackingField);
              if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry)
                ;
              }
              __this = (System_Collections_Generic_Dictionary_object__object__o *)
                       TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_bindings;
              if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_set_Item);
              pMVar9 = MethodInfo_System_Collections_Generic_List_MobileInputBinding_Add;
              __this_00 = TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_orderedBindings;
              if (__this_00 != (System_Collections_Generic_List_MobileInputBinding__o *)0x0) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar8 = (__this_00->fields)._items;
                if (pSVar8 != (Settings_MobileInputBinding_array *)0x0) {
                  uVar3 = (__this_00->fields)._size;
                  if (uVar3 < (uint)pSVar8->max_length) {
                    (__this_00->fields)._size = uVar3 + 1;
                    pSVar8->m_Items[(int)uVar3] = __this_01;
                    Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               (Il2CppObject *)__this_01,
                               (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
                  }
                  goto label_059cda24;
                }
              }
              ThrowNullReferenceException();
            }
          }
          goto label_059cda24;
        }
        pIVar14 = il2cpp_vm_Object_IsInst(local_78,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIVar12 = local_70;
        local_68 = pIVar14;
        if (pIVar14 != (Il2CppObject *)0x0) {
          pIVar6 = pIVar14->klass;
          uVar16 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar16 != 0) {
            pIVar7 = (pIVar6->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar17) ==
                  TypeInfo_System_IDisposable) {
                pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
                goto label_059cd79b;
              }
              lVar17 = lVar17 + 0x10;
            } while (uVar16 * 0x10 != lVar17);
          }
          pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar14,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059cd79b:
          (*pVVar13->methodPtr)(pIVar14,pVVar13->method);
          pIVar12 = local_70;
        }
      }
    }
  } while( true );
  while (lVar17 = lVar17 + 0x10, uVar16 * 0x10 != lVar17) {
    if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_System_IDisposable) {
      pVVar13 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
      goto label_059cde4d;
    }
  }
label_059cde2f:
  pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059cde4d:
  (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
  return;
}


// Settings.MobileInputBindingRegistry$$.cctor
// il2cpp: void Settings_MobileInputBindingRegistry___cctor (const MethodInfo* method);
// 0x59cdf20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59cdf48: cmp byte ptr [rip + 0x1b75667], 0

void Settings_MobileInputBindingRegistry___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalCaseSensitiveComparer_o *comparer;
  Settings_MobileInputBindingRegistry_StaticFields *pSVar2;
  System_Collections_Generic_Dictionary_string__MobileInputBinding__o *__this;
  System_Collections_Generic_List_MobileInputBinding__o *__this_00;
  
  if (Il2CppMethodInitialized_07545c4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputBinding_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MobileInputBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07545c4e = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_075435b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075435b6 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinal;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding)
  ;
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_MobileInputBinding_ctor);
  TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_bindings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_MobileInputBindingRegistry->static_fields->_bindings);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputBinding);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputBinding_ctor);
  pSVar2 = TypeInfo_Settings_MobileInputBindingRegistry->static_fields;
  pSVar2->_orderedBindings = __this_00;
  Il2CppCodeGenWriteBarrier(&pSVar2->_orderedBindings);
  return;
}


