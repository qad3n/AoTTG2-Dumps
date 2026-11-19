// Type: Map.MapObject
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapObject.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapObject.cs
// --------------------------------

// Map.MapObject$$.ctor
// il2cpp: void Map_MapObject___ctor (Map_MapObject_o* __this, int32_t parent, UnityEngine_GameObject_o* gameObject, Map_MapScriptBaseObject_o* scriptObject, const MethodInfo* method);
// 0x59a19e0

void Map_MapObject___ctor
               (Map_MapObject_o *__this,int32_t parent,UnityEngine_GameObject_o *gameObject,
               Map_MapScriptBaseObject_o *scriptObject,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_GameObject_o *pUVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  UnityEngine_Collider_array *pUVar2;
  UnityEngine_Renderer_array *pUVar3;
  
  if (Il2CppMethodInitialized_07545a87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Renderer_array);
    Il2CppMethodInitialized_07545a87 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
  (__this->fields).ComponentInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ComponentInstances);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Parent = parent;
  targetAddress = &(__this->fields).GameObject;
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields).ScriptObject = scriptObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScriptObject);
  pUVar1 = (__this->fields).GameObject;
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = (UnityEngine_Collider_array *)
             UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                       (pUVar1,(MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Collider);
    (__this->fields).colliderCache = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).colliderCache);
    if (scriptObject != (Map_MapScriptBaseObject_o *)0x0) {
      if ((scriptObject->fields).Static == false) {
        pUVar1 = *targetAddress;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_059a1b1f;
        pUVar3 = (UnityEngine_Renderer_array *)
                 UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (pUVar1,(MethodInfo_353C030 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      }
      else {
        pUVar3 = (UnityEngine_Renderer_array *)SZArrayNew(TypeInfo_UnityEngine_Renderer_array,0);
      }
      (__this->fields).renderCache = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).renderCache);
      return;
    }
  }
label_059a1b1f:
  ThrowNullReferenceException();
}


// Map.MapObject$$RegisterComponentInstance
// il2cpp: void Map_MapObject__RegisterComponentInstance (Map_MapObject_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x59a1b30

void Map_MapObject__RegisterComponentInstance
               (Map_MapObject_o *__this,CustomLogic_CustomLogicComponentInstance_o *instance,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07545a88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_07545a88 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapObject$$FindComponentInstance
// il2cpp: CustomLogic_CustomLogicComponentInstance_o* Map_MapObject__FindComponentInstance (Map_MapObject_o* __this, System_String_o* name, const MethodInfo* method);
// 0x59a1bd0
// fidelity: the machine code has facts this C leaves out:
//   virtual call through vtable slot 6
// eh: try 0x59a1c74..0x59a1ce9 -> pad 0x59a1cf4 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59a1d0c..0x59a1d11 -> pad 0x59a1d36 cleanup
// eh: try 0x59a1d39..0x59a1d43 -> pad 0x59a1d4b catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a1c69: nop dword ptr [rax]
// asm:   0x59a1cee: jmp 0x59a1cf4
// asm:   0x59a1cf0: jmp 0x59a1cf4
// asm:   0x59a1cf2: jmp 0x59a1cf4
// asm:   0x59a1cf4: mov rbx, rax
// asm:   0x59a1cf7: cmp edx, 1
// asm:   0x59a1cfa: jne 0x59a1d39
// asm:   0x59a1cfc: mov rdi, rbx
// asm:   0x59a1cff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59a1d04: mov rbx, qword ptr [rax]
// asm:   0x59a1d07: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59a1d0c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59a1d11: lea rax, [rip + 0x18ebd18]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x59a1d18: mov rsi, qword ptr [rax]
// asm:   0x59a1d1b: mov rdi, rsp
// asm:   0x59a1d1e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59a1d23: test rbx, rbx
// asm:   0x59a1d26: jne 0x59a1d2e
// asm:   0x59a1d28: xor ebx, ebx
// asm:   0x59a1d2a: xor ebp, ebp
// asm:   0x59a1d2c: jmp 0x59a1cce
// asm:   0x59a1d2e: mov rdi, rbx
// asm:   0x59a1d31: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59a1d36: mov rbx, rax
// asm:   0x59a1d39: lea rdi, [rsp + 0x20]
// asm:   0x59a1d3e: call 0x2fd4d60  ; il2cpp_runtime_helper_02fd4d60()
// asm:   0x59a1d43: mov rdi, rbx
// asm:   0x59a1d46: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59a1d4b: mov rdi, rax
// asm:   0x59a1d4e: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicComponentInstance_o *
Map_MapObject__FindComponentInstance(Map_MapObject_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  System_String_o *a;
  CustomLogic_CustomLogicComponentInstance_o *pCVar2;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07545a89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    Il2CppMethodInitialized_07545a89 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ComponentInstances;
  if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                      );
    pCVar3 = (CustomLogic_CustomLogicComponentInstance_o *)local_58.fields._current;
    if (!bVar1) {
      iVar4 = 5;
      pCVar3 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
      goto label_059a1cbc;
    }
    if ((CustomLogic_CustomLogicComponentInstance_o *)local_58.fields._current ==
        (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = (*(((CustomLogic_CustomLogicComponentInstance_c *)(local_58.fields._current)->klass)->vtable).
          _6_get_ClassName.methodPtr)
                  (local_58.fields._current,
                   (((CustomLogic_CustomLogicComponentInstance_c *)(local_58.fields._current)->klass)->vtable)
                   ._6_get_ClassName.method);
    bVar1 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
  } while (!bVar1);
  iVar4 = 4;
label_059a1cbc:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
             (MethodInfo_4C45C40 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  pCVar2 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (iVar4 == 4) {
    pCVar2 = pCVar3;
  }
  return pCVar2;
}


