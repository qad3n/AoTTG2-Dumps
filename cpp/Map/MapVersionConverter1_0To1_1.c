// Type: Map.MapVersionConverter1_0To1_1
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapVersionConverter1_0To1_1.cs
// Prior real C# source: none
// --------------------------------

// Map.MapVersionConverter1_0To1_1$$get_FromVersion
// il2cpp: System_String_o* Map_MapVersionConverter1_0To1_1__get_FromVersion (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x59a5db0

System_String_o *
Map_MapVersionConverter1_0To1_1__get_FromVersion(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.0");
    Il2CppMethodInitialized_07545ab2 = '\x01';
  }
  return "1.0";
}


// Map.MapVersionConverter1_0To1_1$$get_ToVersion
// il2cpp: System_String_o* Map_MapVersionConverter1_0To1_1__get_ToVersion (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x59a5de0

System_String_o *
Map_MapVersionConverter1_0To1_1__get_ToVersion(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545ab3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_07545ab3 = '\x01';
  }
  return "1.1";
}


// Map.MapVersionConverter1_0To1_1$$get_IsReversible
// il2cpp: bool Map_MapVersionConverter1_0To1_1__get_IsReversible (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x59a5e10

bool Map_MapVersionConverter1_0To1_1__get_IsReversible
               (Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  return true;
}


// Map.MapVersionConverter1_0To1_1$$get_Changes
// il2cpp: System_Collections_Generic_IReadOnlyList_string__o* Map_MapVersionConverter1_0To1_1__get_Changes (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x59a5e20

System_Collections_Generic_IReadOnlyList_string__o *
Map_MapVersionConverter1_0To1_1__get_Changes(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545ab4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    Il2CppMethodInitialized_07545ab4 = '\x01';
    uVar1 = (TypeInfo_Map_MapVersionConverter1_0To1_1->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapVersionConverter1_0To1_1->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter1_0To1_1);
    return TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList;
  }
  return *(System_Collections_Generic_IReadOnlyList_string__o **)
          ((Il2CppClass *)TypeInfo_Map_MapVersionConverter1_0To1_1)->static_fields;
}


// Map.MapVersionConverter1_0To1_1$$Upgrade
// il2cpp: void Map_MapVersionConverter1_0To1_1__Upgrade (Map_MapVersionConverter1_0To1_1_o* __this, Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x59a5e90
// eh: try 0x59a5f70..0x59a5fbb -> pad 0x59a5fc4 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59a5fdc..0x59a5fe1 -> pad 0x59a6000 cleanup
// eh: try 0x59a6003..0x59a600d -> pad 0x59a6015 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a5f8c: jmp 0x59a5f50
// asm:   0x59a5fc0: jmp 0x59a5fc4
// asm:   0x59a5fc2: jmp 0x59a5fc4
// asm:   0x59a5fc4: mov rbx, rax
// asm:   0x59a5fc7: cmp edx, 1
// asm:   0x59a5fca: jne 0x59a6003
// asm:   0x59a5fcc: mov rdi, rbx
// asm:   0x59a5fcf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59a5fd4: mov rbx, qword ptr [rax]
// asm:   0x59a5fd7: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59a5fdc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a5fe1: lea rax, [rip + 0x18e83f0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x59a5fe8: mov rsi, qword ptr [rax]
// asm:   0x59a5feb: mov rdi, rsp
// asm:   0x59a5fee: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59a5ff3: test rbx, rbx
// asm:   0x59a5ff6: je 0x59a5faa
// asm:   0x59a5ff8: mov rdi, rbx
// asm:   0x59a5ffb: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59a6000: mov rbx, rax
// asm:   0x59a6003: lea rdi, [rsp + 0x18]
// asm:   0x59a6008: call 0x2fd4d90  ; il2cpp_runtime_helper_02fd4d90()
// asm:   0x59a600d: mov rdi, rbx
// asm:   0x59a6010: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59a6015: mov rdi, rax
// asm:   0x59a6018: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapVersionConverter1_0To1_1__Upgrade
               (Map_MapVersionConverter1_0To1_1_o *__this,Map_MapScript_o *mapScript,MethodInfo *method)

{
  Map_MapScriptObjects_o *pMVar1;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545ab5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545ab5 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((mapScript == (Map_MapScript_o *)0x0) ||
      (pMVar1 = (mapScript->fields).Objects, pMVar1 == (Map_MapScriptObjects_o *)0x0)) ||
     (__this_00 = (pMVar1->fields).Objects,
     __this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) break;
    if (*(int *)((long)&local_48.fields._current[2].klass + 4) == 0) {
      if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
      }
      *(int32_t *)((long)&pIVar2[2].klass + 4) = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapVersionConverter1_0To1_1$$Downgrade
// il2cpp: void Map_MapVersionConverter1_0To1_1__Downgrade (Map_MapVersionConverter1_0To1_1_o* __this, Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x59a6020
// eh: try 0x59a60e3..0x59a6165 -> pad 0x59a616e (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59a6186..0x59a618b -> pad 0x59a61aa cleanup
// eh: try 0x59a61ad..0x59a61b7 -> pad 0x59a61bf catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a60df: nop 
// asm:   0x59a6118: jmp 0x59a6138
// asm:   0x59a616a: jmp 0x59a616e
// asm:   0x59a616c: jmp 0x59a616e
// asm:   0x59a616e: mov rbx, rax
// asm:   0x59a6171: cmp edx, 1
// asm:   0x59a6174: jne 0x59a61ad
// asm:   0x59a6176: mov rdi, rbx
// asm:   0x59a6179: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59a617e: mov rbx, qword ptr [rax]
// asm:   0x59a6181: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59a6186: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a618b: lea rax, [rip + 0x18e8246]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose
// asm:   0x59a6192: mov rsi, qword ptr [rax]
// asm:   0x59a6195: mov rdi, rsp
// asm:   0x59a6198: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59a619d: test rbx, rbx
// asm:   0x59a61a0: je 0x59a6153
// asm:   0x59a61a2: mov rdi, rbx
// asm:   0x59a61a5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59a61aa: mov rbx, rax
// asm:   0x59a61ad: lea rdi, [rsp + 0x20]
// asm:   0x59a61b2: call 0x2fd4dc0  ; il2cpp_runtime_helper_02fd4dc0()
// asm:   0x59a61b7: mov rdi, rbx
// asm:   0x59a61ba: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59a61bf: mov rdi, rax
// asm:   0x59a61c2: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapVersionConverter1_0To1_1__Downgrade
               (Map_MapVersionConverter1_0To1_1_o *__this,Map_MapScript_o *mapScript,MethodInfo *method)

{
  int iVar1;
  Map_MapScriptObjects_o *pMVar2;
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_Enumerator_T__o SStack_58;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  
  if (Il2CppMethodInitialized_07545ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_07545ab6 = '\x01';
  }
  SStack_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_58.fields._index = 0;
  SStack_58.fields._version = 0;
  SStack_58.fields._current = (Il2CppObject *)0x0;
  if (((mapScript == (Map_MapScript_o *)0x0) ||
      (pMVar2 = (mapScript->fields).Objects, pMVar2 == (Map_MapScriptObjects_o *)0x0)) ||
     (__this_00 = (pMVar2->fields).Objects,
     __this_00 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_GetEnumerator);
  uStack_38 = 0;
  puStack_30 = (undefined1 *)&SStack_58;
label_059a60e0:
  do {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_MoveNext);
    pIVar3 = SStack_58.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_58,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MapScriptBaseObject_Dispose);
      return;
    }
    if (SStack_58.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = *(int *)((long)&SStack_58.fields._current[2].klass + 4);
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_059a6120;
  } while (iVar1 != TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID);
  goto label_059a6138;
label_059a6120:
  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  if (iVar1 == TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID) {
label_059a6138:
    *(undefined4 *)((long)&pIVar3[2].klass + 4) = 0;
  }
  goto label_059a60e0;
}


// Map.MapVersionConverter1_0To1_1$$.ctor
// il2cpp: void Map_MapVersionConverter1_0To1_1___ctor (Map_MapVersionConverter1_0To1_1_o* __this, const MethodInfo* method);
// 0x59a5af0

void Map_MapVersionConverter1_0To1_1___ctor(Map_MapVersionConverter1_0To1_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapVersionConverter1_0To1_1$$.cctor
// il2cpp: void Map_MapVersionConverter1_0To1_1___cctor (const MethodInfo* method);
// 0x59a61d0

void Map_MapVersionConverter1_0To1_1___cctor(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar6;
  
  if (Il2CppMethodInitialized_07545ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_AsReadOnly);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter1_0To1_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Object ID 0 can be used as a parent.");
    il2cpp_codegen_initialize_runtime_metadata(&"Root object parent IDs change from 0 to -1.");
    Il2CppMethodInitialized_07545ab7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Root object parent IDs change from 0 to -1.";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar5 = "Object ID 0 can be used as a parent.";
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar6 = System_Collections_Generic_List_object___AsReadOnly
                           ((System_Collections_Generic_List_object__o *)__this,
                            (MethodInfo_395D4B0 *)MethodInfo_System_Collections_Generic_List_string_AsReadOnly
                           );
        TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList =
             (System_Collections_Generic_IReadOnlyList_string__o *)pSVar6;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapVersionConverter1_0To1_1->static_fields->ChangeList);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


