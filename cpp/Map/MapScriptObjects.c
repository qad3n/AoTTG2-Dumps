// Type: Map.MapScriptObjects
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapScriptObjects.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapScript/MapScriptObjects.cs
// --------------------------------

// Map.MapScriptObjects$$DeserializeSkippingErrors
// il2cpp: void Map_MapScriptObjects__DeserializeSkippingErrors (Map_MapScriptObjects_o* __this, System_String_o* csv, System_Collections_Generic_List_string__o* errors, const MethodInfo* method);
// 0x59a3700
// eh: try 0x59a37f5..0x59a3937 -> pad 0x59a3940 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x59a3957..0x59a3a78 -> pad 0x59a3a7a (+1 call sites) cleanup
// eh: try 0x59a3a7d..0x59a3a82 -> pad 0x59a3a8a catch (...) [compiler noexcept guard]
// asm: 79 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a393c: jmp 0x59a3940
// asm:   0x59a393e: jmp 0x59a3940
// asm:   0x59a3940: mov r12, rax
// asm:   0x59a3943: cmp edx, 1
// asm:   0x59a3946: jne 0x59a3a82
// asm:   0x59a394c: mov rdi, r12
// asm:   0x59a394f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59a3954: mov r12, rax
// asm:   0x59a3957: lea rdi, [rip + 0x18d4762]  ; TypeInfo_System_Exception
// asm:   0x59a395e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a3963: mov rcx, qword ptr [r12]
// asm:   0x59a3967: mov rsi, qword ptr [rcx]
// asm:   0x59a396a: mov rdi, rax
// asm:   0x59a396d: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59a3972: test al, al
// asm:   0x59a3974: je 0x59a3a56
// asm:   0x59a397a: mov r12, qword ptr [r12]
// asm:   0x59a397e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a3983: test rbp, rbp
// asm:   0x59a3986: je 0x59a3a4c
// asm:   0x59a398c: cmp dword ptr [rbp + 0x10], 0x50
// asm:   0x59a3990: jle 0x59a39c2
// asm:   0x59a3992: mov rdi, rbp
// asm:   0x59a3995: xor esi, esi
// asm:   0x59a3997: mov edx, 0x50
// asm:   0x59a399c: xor ecx, ecx
// asm:   0x59a399e: call 0x54042f0  ; System_String__Substring()
// asm:   0x59a39a3: mov rbp, rax
// asm:   0x59a39a6: lea rdi, [rip + 0x192d77b]  ; "..."
// asm:   0x59a39ad: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a39b2: mov rdi, rbp
// asm:   0x59a39b5: mov rsi, rax
// asm:   0x59a39b8: xor edx, edx
// asm:   0x59a39ba: call 0x53f0320  ; System_String__Concat()
// asm:   0x59a39bf: mov rbp, rax
// asm:   0x59a39c2: test r12, r12
// asm:   0x59a39c5: je 0x59a3a4c
// asm:   0x59a39cb: mov rax, qword ptr [r12]
// asm:   0x59a39cf: mov rsi, qword ptr [rax + 0x190]
// asm:   0x59a39d6: mov rdi, r12
// asm:   0x59a39d9: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x59a39df: mov r12, rax
// asm:   0x59a39e2: lea rdi, [rip + 0x19382bf]  ; "Failed to read map object ("
// asm:   0x59a39e9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a39ee: mov r13, rax
// asm:   0x59a39f1: lea rdi, [rip + 0x192c8d0]  ; "): "
// asm:   0x59a39f8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a39fd: mov rdi, r13
// asm:   0x59a3a00: mov rsi, rbp
// asm:   0x59a3a03: mov rdx, rax
// asm:   0x59a3a06: mov rcx, r12
// asm:   0x59a3a09: xor r8d, r8d
// asm:   0x59a3a0c: call 0x5402810  ; System_String__Concat()
// asm:   0x59a3a11: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x59a3a16: test rbx, rbx
// asm:   0x59a3a19: je 0x59a3a4c
// asm:   0x59a3a1b: mov rbp, rax
// asm:   0x59a3a1e: lea rdi, [rip + 0x18f2f33]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x59a3a25: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x59a3a2a: mov rdi, rbx
// asm:   0x59a3a2d: mov rsi, rbp
// asm:   0x59a3a30: mov rdx, rax
// asm:   0x59a3a33: call 0x2fa8fa0  ; il2cpp_runtime_helper_02fa8fa0()
// asm:   0x59a3a38: jmp 0x59a37fd
// asm:   0x59a3a56: mov edi, 8
// asm:   0x59a3a5b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59a3a60: mov rcx, qword ptr [r12]
// asm:   0x59a3a64: mov qword ptr [rax], rcx
// asm:   0x59a3a67: lea rsi, [rip + 0x1489a92]
// asm:   0x59a3a6e: mov rdi, rax
// asm:   0x59a3a71: xor edx, edx
// asm:   0x59a3a73: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59a3a78: jmp 0x59a3a7a
// asm:   0x59a3a7a: mov r12, rax
// asm:   0x59a3a7d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a3a82: mov rdi, r12
// asm:   0x59a3a85: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59a3a8a: mov rdi, rax
// asm:   0x59a3a8d: call 0x2ab61e0  ; __clang_call_terminate()

void Map_MapScriptObjects__DeserializeSkippingErrors
               (Map_MapScriptObjects_o *__this,System_String_o *csv,
               System_Collections_Generic_List_string__o *errors,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int length;
  System_Collections_Generic_List_MapScriptBaseObject__o *pSVar3;
  Map_MapScriptBaseObject_array *pMVar4;
  Il2CppType *handle;
  MethodInfo *pMVar5;
  bool bVar6;
  uint16_t separator;
  uint uVar7;
  System_String_array *pSVar8;
  System_String_o *a;
  System_Type_o *pSVar9;
  Map_MapScriptBaseObject_o *item;
  uint uVar10;
  
  if (Il2CppMethodInitialized_07545a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Map_MapScriptBaseObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptBaseObject);
    Il2CppMethodInitialized_07545a9f = '\x01';
  }
  pSVar3 = (__this->fields).Objects;
  if (pSVar3 != (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    separator = (*(__this->klass->vtable)._4_get_Delimiter.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_Delimiter.method);
    if (csv != (System_String_o *)0x0) {
      pSVar8 = System_String__Split(csv,separator,0,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_array *)0x0) {
        uVar7 = (uint)pSVar8->max_length;
        if (0 < (int)uVar7) {
          uVar10 = 0;
          do {
            if (uVar7 <= uVar10) {
              ThrowIndexOutOfRangeException();
            }
            if (pSVar8->m_Items[(int)uVar10] == (System_String_o *)0x0) goto label_059a3a4c;
            a = System_String__Trim(pSVar8->m_Items[(int)uVar10],(MethodInfo *)0x0);
            bVar6 = System_String__op_Equality
                              (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
            handle = TypeRef_Map_MapScriptBaseObject;
            if (!bVar6) {
              pSVar3 = (__this->fields).Objects;
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              pSVar9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
              item = (Map_MapScriptBaseObject_o *)
                     (*(__this->klass->vtable)._17_DeserializeValue.methodPtr)
                               (__this,pSVar9,a,(__this->klass->vtable)._17_DeserializeValue.method);
              pMVar5 = MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_Add;
              if (pSVar3 == (System_Collections_Generic_List_MapScriptBaseObject__o *)0x0) {
label_059a3925:
                ThrowNullReferenceException();
              }
              if (item != (Map_MapScriptBaseObject_o *)0x0) {
                bVar2 = (TypeInfo_Map_MapScriptBaseObject->_2).typeHierarchyDepth;
                if (((((Il2CppClass *)item->klass)->_2).typeHierarchyDepth < bVar2) ||
                   ((((Il2CppClass *)item->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                    (Il2CppClass *)TypeInfo_Map_MapScriptBaseObject)) {
                  il2cpp_codegen_raise_invalid_cast_exception(item);
                }
              }
              piVar1 = &(pSVar3->fields)._version;
              *piVar1 = *piVar1 + 1;
              pMVar4 = (pSVar3->fields)._items;
              if (pMVar4 == (Map_MapScriptBaseObject_array *)0x0) goto label_059a3925;
              uVar7 = (pSVar3->fields)._size;
              if (uVar7 < (uint)pMVar4->max_length) {
                (pSVar3->fields)._size = uVar7 + 1;
                pMVar4->m_Items[(int)uVar7] = item;
                Il2CppCodeGenWriteBarrier(pMVar4->m_Items + (int)uVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
            }
            uVar10 = uVar10 + 1;
            uVar7 = (uint)pSVar8->max_length;
          } while ((int)uVar10 < (int)uVar7);
        }
        return;
      }
    }
  }
label_059a3a4c:
  ThrowNullReferenceException();
}


// Map.MapScriptObjects$$DeserializeValue
// il2cpp: Il2CppObject* Map_MapScriptObjects__DeserializeValue (Map_MapScriptObjects_o* __this, System_Type_o* t, System_String_o* value, const MethodInfo* method);
// 0x59a4770

Il2CppObject *
Map_MapScriptObjects__DeserializeValue
          (Map_MapScriptObjects_o *__this,System_Type_o *t,System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t separator;
  Map_MapScriptSceneObject_o *__this_00;
  System_String_array *pSVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Scene");
    Il2CppMethodInitialized_07545aa0 = '\x01';
  }
  __this_00 = (Map_MapScriptSceneObject_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
  Utility_BaseCSVObject___ctor((Utility_BaseCSVObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
    separator = (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._4_get_Delimiter.methodPtr)
                          (__this_00,
                           (((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._4_get_Delimiter.method);
    if (value != (System_String_o *)0x0) {
      pSVar2 = System_String__Split(value,separator,0,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((int)pSVar2->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        method_00 = (MethodInfo *)"Scene";
        bVar1 = System_String__op_Equality(pSVar2->m_Items[0],"Scene",(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
          Map_MapScriptSceneObject___ctor(__this_00,method_00);
          if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) goto label_059a485b;
        }
        (*(((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.methodPtr)
                  (__this_00,value,
                   (((Utility_BaseCSVObject_c *)__this_00->klass)->vtable)._9_Deserialize.method);
        return (Il2CppObject *)__this_00;
      }
    }
  }
label_059a485b:
  ThrowNullReferenceException();
}


// Map.MapScriptObjects$$.ctor
// il2cpp: void Map_MapScriptObjects___ctor (Map_MapScriptObjects_o* __this, const MethodInfo* method);
// 0x59a2ed0

void Map_MapScriptObjects___ctor(Map_MapScriptObjects_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapScriptBaseObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07545aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
    Il2CppMethodInitialized_07545aa1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MapScriptBaseObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MapScriptBaseObject_ctor);
  (__this->fields).Objects = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Objects);
  Utility_BaseCSVContainer___ctor((Utility_BaseCSVContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


