// Type: PatreonEffects.PatreonHelper
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/PatreonEffects/PatreonHelper.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_String_array* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x59c8630

bool PatreonEffects_PatreonHelper__HasTier
               (System_String_array *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (tierIds != (System_String_array *)0x0) {
    uVar4 = tierIds->max_length;
    if (uVar4 == 0) {
      return false;
    }
    if ((int)uVar4 < 1) {
      return false;
    }
    uVar5 = 0;
    do {
      if ((uVar4 & 0xffffffff) <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = tierIds->m_Items[uVar5];
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        if (pSVar3 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
        bVar2 = System_String__Equals_52ffe30(pSVar3,targetTier,4,(MethodInfo *)0x0);
        if (bVar2) {
          return true;
        }
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)tierIds->max_length;
      uVar4 = (ulong)uVar1;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasTier
// il2cpp: bool PatreonEffects_PatreonHelper__HasTier (System_Collections_IEnumerable_o* tierIds, System_String_o* targetTier, const MethodInfo* method);
// 0x59c86d0
// eh: try 0x59c882f..0x59c8a1c -> pad 0x59c8a36 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x59c8a4e..0x59c8a53 -> pad 0x59c8a58 cleanup
// eh: try 0x59c8a5b..0x59c8a65 -> pad 0x59c8a6d catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c87d0: lea r13, [rip + 0x18b0c21]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x59c87d7: xor r15d, r15d
// asm:   0x59c87da: lea r14, [rip + 0x1b8dee7]
// asm:   0x59c87e1: jmp 0x59c87fe
// asm:   0x59c87f0: mov rbp, qword ptr [rsp + 8]
// asm:   0x59c87f5: test rbp, rbp
// asm:   0x59c87f8: je 0x59c8a0d
// asm:   0x59c881f: nop 
// asm:   0x59c8974: jmp 0x59c897c
// asm:   0x59c89be: nop 
// asm:   0x59c89f6: test r15, r15
// asm:   0x59c89f9: jne 0x59c8a1c
// asm:   0x59c8a1c: mov rdi, r15
// asm:   0x59c8a1f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59c8a24: jmp 0x59c8a36
// asm:   0x59c8a26: jmp 0x59c8a36
// asm:   0x59c8a28: jmp 0x59c8a36
// asm:   0x59c8a2a: jmp 0x59c8a36
// asm:   0x59c8a2c: jmp 0x59c8a36
// asm:   0x59c8a2e: jmp 0x59c8a36
// asm:   0x59c8a30: jmp 0x59c8a36
// asm:   0x59c8a32: jmp 0x59c8a36
// asm:   0x59c8a34: jmp 0x59c8a36
// asm:   0x59c8a36: mov rbx, rax
// asm:   0x59c8a39: cmp edx, 1
// asm:   0x59c8a3c: jne 0x59c8a5b
// asm:   0x59c8a3e: mov rdi, rbx
// asm:   0x59c8a41: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59c8a46: mov r15, qword ptr [rax]
// asm:   0x59c8a49: mov qword ptr [rsp + 0x20], r15
// asm:   0x59c8a4e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59c8a53: jmp 0x59c8979
// asm:   0x59c8a58: mov rbx, rax
// asm:   0x59c8a5b: lea rdi, [rsp + 0x20]
// asm:   0x59c8a60: call 0x2fd5410  ; il2cpp_runtime_helper_02fd5410()
// asm:   0x59c8a65: mov rdi, rbx
// asm:   0x59c8a68: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59c8a6d: mov rdi, rax
// asm:   0x59c8a70: call 0x2ab61e0  ; __clang_call_terminate()

bool PatreonEffects_PatreonHelper__HasTier_58c86d0
               (System_Collections_IEnumerable_o *tierIds,System_String_o *targetTier,MethodInfo *method)

{
  System_Collections_IEnumerable_c *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppClass *pIVar3;
  char cVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  ulong uVar9;
  System_String_o *value;
  long lVar10;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  System_String_o *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  local_50 = targetTier;
  if (Il2CppMethodInitialized_07545c20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_07545c20 = '\x01';
  }
  local_60 = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (tierIds == (System_Collections_IEnumerable_o *)0x0) {
    cVar4 = '\0';
  }
  else {
    pSVar1 = tierIds->klass;
    uVar9 = (ulong)(pSVar1->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar2 = (pSVar1->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerable_c **)((long)&pIVar2->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerable) {
          pVVar6 = pSVar1->vtable + *(int *)((long)&pIVar2->offset + lVar10);
          goto label_059c8799;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)tierIds,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_059c8799:
    pIVar7 = (Il2CppObject *)(*pVVar6->methodPtr)((Il2CppObject *)tierIds,pVVar6->method);
    local_48 = 0;
    local_40 = &local_60;
    local_38 = &local_58;
    do {
      do {
        do {
          local_60 = pIVar7;
          if (pIVar7 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIVar7->klass;
          uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar2 = (pIVar3->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar10) ==
                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar10);
                goto label_059c8853;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_059c8853:
          cVar4 = (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
          pIVar7 = local_60;
          if (cVar4 == '\0') {
            cVar4 = '\0';
            goto label_059c897c;
          }
          if (local_60 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = local_60->klass;
          uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar2 = (pIVar3->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar10) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar6 = pIVar3->vtable + (*(int *)((long)&pIVar2->offset + lVar10) + 1);
                goto label_059c88e7;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_059c88e7:
          pSVar8 = (System_String_o *)(*pVVar6->methodPtr)(pIVar7,pVVar6->method);
          pIVar7 = local_60;
        } while (pSVar8 == (System_String_o *)0x0);
        value = pSVar8;
        if ((Il2CppClass *)pSVar8->klass != g_data_07556758) {
          value = (System_String_o *)0x0;
        }
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (bVar5) {
          value = (System_String_o *)(*((Il2CppClass *)pSVar8->klass)->vtable[3].methodPtr)(pSVar8);
        }
        bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        pIVar7 = local_60;
      } while (bVar5);
      if (value == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar8 = System_String__Trim(value,(MethodInfo *)0x0);
      bVar5 = System_String__Equals_52ffe30(pSVar8,local_50,4,(MethodInfo *)0x0);
      pIVar7 = local_60;
    } while (!bVar5);
label_059c897c:
    pIVar7 = il2cpp_vm_Object_IsInst(local_60,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar7->klass;
      uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
      local_58 = pIVar7;
      if (uVar9 != 0) {
        pIVar2 = (pIVar3->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar10) == TypeInfo_System_IDisposable
             ) {
            pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar2->offset + lVar10);
            goto label_059c89ed;
          }
          lVar10 = lVar10 + 0x10;
        } while (uVar9 * 0x10 != lVar10);
      }
      pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_059c89ed:
      (*pVVar6->methodPtr)(pIVar7,pVVar6->method);
    }
  }
  return (bool)cVar4;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteBool
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteBool (Photon_Realtime_Player_o* player, System_String_o* key, bool* value, const MethodInfo* method);
// 0x59c8a80

bool PatreonEffects_PatreonHelper__TryGetRemoteBool
               (Photon_Realtime_Player_o *player,System_String_o *key,bool *value,MethodInfo *method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  
  *value = false;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    obj = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if (obj == (Il2CppObject *)0x0) {
      return false;
    }
    if (obj->klass == g_data_075566f0) {
      puVar1 = il2cpp_vm_Object_Unbox(obj);
      *value = (bool)*puVar1;
      return true;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteString
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteString (Photon_Realtime_Player_o* player, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x59c8ad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c8b2a: jne 0x59c8b4e

bool PatreonEffects_PatreonHelper__TryGetRemoteString
               (Photon_Realtime_Player_o *player,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *value_00;
  bool bVar2;
  
  *value = (System_String_o *)0x0;
  bVar2 = false;
  Il2CppCodeGenWriteBarrier(value);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = false;
    value_00 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
    if ((value_00 != (System_String_o *)0x0) && (bVar2 = false, value_00->klass == g_data_07556758)) {
      bVar2 = false;
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (!bVar1) {
        *value = value_00;
        Il2CppCodeGenWriteBarrier(value);
        bVar2 = true;
      }
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$TryParseTierIdsString
// il2cpp: bool PatreonEffects_PatreonHelper__TryParseTierIdsString (System_String_o* raw, System_Collections_Generic_List_string__o** parsed, const MethodInfo* method);
// 0x59c8b60
// eh: try 0x59c8c65..0x59c8e4d -> pad 0x59c8e5b (+19 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x59c8e99..0x59c914a -> pad 0x59c914a (+1 call sites) cleanup
// eh: try 0x59c914d..0x59c9152 -> pad 0x59c915a catch (...) [compiler noexcept guard]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c8cf2: jmp 0x59c8d3a
// asm:   0x59c8e4d: jmp 0x59c8e71
// asm:   0x59c8e4f: jmp 0x59c8e71
// asm:   0x59c8e51: jmp 0x59c8e71
// asm:   0x59c8e53: jmp 0x59c8e71
// asm:   0x59c8e55: jmp 0x59c8e71
// asm:   0x59c8e57: jmp 0x59c8e71
// asm:   0x59c8e59: jmp 0x59c8e71
// asm:   0x59c8e5b: jmp 0x59c8e71
// asm:   0x59c8e5d: jmp 0x59c8e71
// asm:   0x59c8e5f: jmp 0x59c8e71
// asm:   0x59c8e61: jmp 0x59c8e71
// asm:   0x59c8e63: jmp 0x59c8e71
// asm:   0x59c8e65: jmp 0x59c8e71
// asm:   0x59c8e67: jmp 0x59c8e71
// asm:   0x59c8e69: jmp 0x59c8e71
// asm:   0x59c8e6b: jmp 0x59c8e71
// asm:   0x59c8e6d: jmp 0x59c8e71
// asm:   0x59c8e6f: jmp 0x59c8e71
// asm:   0x59c8e71: mov rbx, rax
// asm:   0x59c8e74: cmp edx, 1
// asm:   0x59c8e77: jne 0x59c9152
// asm:   0x59c8e7d: mov rdi, rbx
// asm:   0x59c8e80: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59c8e85: mov rbx, rax
// asm:   0x59c8e88: lea rax, [rip + 0x1b8d839]
// asm:   0x59c8e8f: mov rdi, qword ptr [rax + 0x10]
// asm:   0x59c8e93: mov rax, qword ptr [rbx]
// asm:   0x59c8e96: mov rsi, qword ptr [rax]
// asm:   0x59c8e99: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x59c8e9e: test al, al
// asm:   0x59c8ea0: je 0x59c9129
// asm:   0x59c8ea6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59c8ffd: nop dword ptr [rax]
// asm:   0x59c902a: jmp 0x59c911f
// asm:   0x59c9129: mov edi, 8
// asm:   0x59c912e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x59c9133: mov rcx, qword ptr [rbx]
// asm:   0x59c9136: mov qword ptr [rax], rcx
// asm:   0x59c9139: lea rsi, [rip + 0x14643c0]
// asm:   0x59c9140: mov rdi, rax
// asm:   0x59c9143: xor edx, edx
// asm:   0x59c9145: call 0x6e255c0  ; __cxa_throw()
// asm:   0x59c914a: mov rbx, rax
// asm:   0x59c914d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59c9152: mov rdi, rbx
// asm:   0x59c9155: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59c915a: mov rdi, rax
// asm:   0x59c915d: call 0x2ab61e0  ; __clang_call_terminate()

bool PatreonEffects_PatreonHelper__TryParseTierIdsString
               (System_String_o *raw,System_Collections_Generic_List_string__o **parsed,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  int32_t iVar6;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_List_string__o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_array *pSVar9;
  ulong uVar10;
  System_String_o *pSVar11;
  int iVar12;
  ulong uVar13;
  
  if (Il2CppMethodInitialized_07545c21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_07545c21 = '\x01';
  }
  *parsed = (System_Collections_Generic_List_string__o *)0x0;
  Il2CppCodeGenWriteBarrier(parsed);
  bVar5 = System_String__IsNullOrEmpty(raw,(MethodInfo *)0x0);
  if (bVar5) {
    return false;
  }
  if (raw != (System_String_o *)0x0) {
    value = System_String__Trim(raw,(MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar5) {
      return false;
    }
    if (value == (System_String_o *)0x0) goto label_059c911f;
    bVar5 = System_String__StartsWith(value,"[",(MethodInfo *)0x0);
    if ((bVar5) && (bVar5 = System_String__EndsWith(value,"]",(MethodInfo *)0x0), bVar5)) {
      a = SimpleJSONFixed_JSON__Parse(value,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar5 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method);
        if (bVar5) {
          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)pSVar7,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          iVar12 = 0;
          if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
            while (iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                     (a,(a->klass->vtable)._11_get_Count.method), iVar12 < iVar6) {
              pSVar8 = (*(a->klass->vtable)._5_get_Item.methodPtr)
                                 (a,iVar12,(a->klass->vtable)._5_get_Item.method);
              if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_059c8e39:
                ThrowNullReferenceException();
              }
              pSVar11 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
              bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
              iVar12 = iVar12 + 1;
              if (!bVar5) {
label_059c8e3e:
                ThrowNullReferenceException();
              }
            }
          }
          else {
            for (; iVar6 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                                     (a,(a->klass->vtable)._11_get_Count.method), iVar12 < iVar6;
                iVar12 = iVar12 + 1) {
              pSVar8 = (*(a->klass->vtable)._5_get_Item.methodPtr)
                                 (a,iVar12,(a->klass->vtable)._5_get_Item.method);
              if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059c8e39;
              pSVar11 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
              bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
              pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (!bVar5) {
                piVar1 = &(pSVar7->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar9 = (pSVar7->fields)._items;
                if (pSVar9 == (System_String_array *)0x0) goto label_059c8e3e;
                uVar2 = (pSVar7->fields)._size;
                if (uVar2 < (uint)pSVar9->max_length) {
                  (pSVar7->fields)._size = uVar2 + 1;
                  pSVar9->m_Items[(int)uVar2] = pSVar11;
                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar11,
                             (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                }
              }
            }
          }
          if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          if (0 < (pSVar7->fields)._size) {
            *parsed = pSVar7;
            Il2CppCodeGenWriteBarrier(parsed);
            return true;
          }
        }
      }
    }
    iVar6 = System_String__IndexOf(value,0x2c,(MethodInfo *)0x0);
    if (-1 < iVar6) {
      pSVar9 = System_String__Split(value,0x2c,0,(MethodInfo *)0x0);
      pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar7,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (pSVar9 == (System_String_array *)0x0) goto label_059c911f;
      iVar12 = (int)pSVar9->max_length;
      uVar10 = pSVar9->max_length & 0xffffffff;
      if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) {
        if (iVar12 < 1) goto label_059c911f;
        uVar13 = 0;
        do {
          if (uVar10 <= uVar13) goto label_059c9124;
          if (pSVar9->m_Items[uVar13] == (System_String_o *)0x0) {
            bVar5 = System_String__IsNullOrEmpty
                              ((System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          }
          else {
            pSVar11 = System_String__Trim(pSVar9->m_Items[uVar13],(MethodInfo *)0x0);
            bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
          }
          if (!bVar5) goto label_059c911f;
          uVar13 = uVar13 + 1;
          uVar2 = (uint)pSVar9->max_length;
          uVar10 = (ulong)uVar2;
        } while ((long)uVar13 < (long)(int)uVar2);
      }
      else if (0 < iVar12) {
        uVar13 = 0;
        do {
          if (uVar10 <= uVar13) {
label_059c9124:
            ThrowIndexOutOfRangeException();
          }
          if (pSVar9->m_Items[uVar13] == (System_String_o *)0x0) {
            pSVar11 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          else {
            pSVar11 = System_String__Trim(pSVar9->m_Items[uVar13],(MethodInfo *)0x0);
          }
          bVar5 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          if (!bVar5) {
            piVar1 = &(pSVar7->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar7->fields)._items;
            if (pSVar3 == (System_String_array *)0x0) goto label_059c911f;
            uVar2 = (pSVar7->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar7->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar11;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pSVar11,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          uVar13 = uVar13 + 1;
          uVar2 = (uint)pSVar9->max_length;
          uVar10 = (ulong)uVar2;
        } while ((long)uVar13 < (long)(int)uVar2);
      }
      if (pSVar7 == (System_Collections_Generic_List_string__o *)0x0) goto label_059c911f;
      if (0 < (pSVar7->fields)._size) goto label_059c90fd;
    }
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar7,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar7->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar9 = (pSVar7->fields)._items;
      if (pSVar9 != (System_String_array *)0x0) {
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar9->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar9->m_Items[(int)uVar2] = value;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)value,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
label_059c90fd:
        *parsed = pSVar7;
        Il2CppCodeGenWriteBarrier(parsed);
        return true;
      }
    }
  }
label_059c911f:
  ThrowNullReferenceException();
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierIds
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds (Photon_Realtime_Player_o* player, System_Collections_IEnumerable_o** tierIds, const MethodInfo* method);
// 0x59c9170

bool PatreonEffects_PatreonHelper__TryGetRemoteTierIds
               (Photon_Realtime_Player_o *player,System_Collections_IEnumerable_o **tierIds,MethodInfo *method
               )

{
  bool bVar1;
  System_String_o *raw;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_string__o *local_20;
  
  if (Il2CppMethodInitialized_07545c22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545c22 = '\x01';
  }
  local_20 = (System_Collections_Generic_List_string__o *)0x0;
  *tierIds = (System_Collections_IEnumerable_o *)0x0;
  Il2CppCodeGenWriteBarrier(tierIds);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return false;
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  raw = (System_String_o *)
        PhotonExtensions__GetCustomProperty
                  (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TierIds,(MethodInfo *)0x0);
  if (raw == (System_String_o *)0x0) {
    return false;
  }
  if (raw->klass == g_data_07556758) {
    bVar1 = PatreonEffects_PatreonHelper__TryParseTierIdsString(raw,&local_20,(MethodInfo *)raw->klass);
    if (!bVar1) {
      return false;
    }
    *tierIds = (System_Collections_IEnumerable_o *)local_20;
  }
  else {
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)raw,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
    if (pIVar2 == (Il2CppObject *)0x0) {
      return false;
    }
    *tierIds = (System_Collections_IEnumerable_o *)pIVar2;
  }
  Il2CppCodeGenWriteBarrier(tierIds);
  return true;
}


// PatreonEffects.PatreonHelper$$ToTierLabel
// il2cpp: System_String_o* PatreonEffects_PatreonHelper__ToTierLabel (bool hasTier2, bool hasTier3, const MethodInfo* method);
// 0x59c9270
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c92a4: lea rax, [rip + 0x192313d]  ; "Tier 2"
// asm:   0x59c92ab: mov rax, qword ptr [rax]
// asm:   0x59c92ae: test bl, bl
// asm:   0x59c92b0: jne 0x59c92ba
// asm:   0x59c92b2: jmp 0x59c92c4

System_String_o * PatreonEffects_PatreonHelper__ToTierLabel(bool hasTier2,bool hasTier3,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545c23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Tier 2");
    il2cpp_codegen_initialize_runtime_metadata(&"Tier 3");
    Il2CppMethodInitialized_07545c23 = '\x01';
  }
  pSVar1 = "Tier 2";
  if (!hasTier2) {
    pSVar1 = (System_String_o *)0x0;
  }
  if (hasTier3) {
    pSVar1 = "Tier 3";
  }
  return pSVar1;
}


// PatreonEffects.PatreonHelper$$TryGetLocalPatreonFlags
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags (bool* linked, bool* hasTier2, bool* hasTier3, const MethodInfo* method);
// 0x59c92d0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c9343: jmp 0x59c94c9
// asm:   0x59c93c3: jmp 0x59c94d7
// asm:   0x59c9450: jmp 0x59c94d7

bool PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags
               (bool *linked,bool *hasTier2,bool *hasTier3,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *pAVar3;
  
  if (Il2CppMethodInitialized_07545c24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c24 = '\x01';
  }
  *linked = false;
  *hasTier2 = false;
  *hasTier3 = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_059c9356;
label_059c9326:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_059c9332;
label_059c9375:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_059c9326;
label_059c9356:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_059c9375;
label_059c9332:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_059c93d6;
label_059c93a4:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_059c93b0;
label_059c93f5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_059c93a4;
label_059c93d6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_059c93f5;
label_059c93b0:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_059c94d7;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_059c9463;
label_059c9431:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_059c943d;
label_059c9482:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_059c9431;
label_059c9463:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_059c9482;
label_059c943d:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
     (pAVar2 = (pAVar1->fields).Profile,
     pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
    pAVar3 = (pAVar2->fields).Patreon;
    if (pAVar3 == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
      return false;
    }
    *linked = (pAVar3->fields).Linked;
    *hasTier2 = (pAVar3->fields).HasTier2;
    *hasTier3 = (pAVar3->fields).HasTier3;
    return true;
  }
label_059c94d7:
  ThrowNullReferenceException();
}


// PatreonEffects.PatreonHelper$$TryGetLocalTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel (System_String_o** tierLabel, const MethodInfo* method);
// 0x59c94e0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c9580: mov esi, 0
// asm:   0x59c9585: test bl, bl
// asm:   0x59c9587: jne 0x59c95e5
// asm:   0x59c95e5: lea rax, [rip + 0x1922dfc]  ; "Tier 2"
// asm:   0x59c95ec: mov rsi, qword ptr [rax]
// asm:   0x59c95ef: test bpl, bpl
// asm:   0x59c95f2: jne 0x59c958e
// asm:   0x59c95f4: jmp 0x59c9598

bool PatreonEffects_PatreonHelper__TryGetLocalTierLabel(System_String_o **tierLabel,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  MethodInfo *in_RCX;
  System_String_o *pSVar5;
  bool local_1b;
  bool local_1a;
  bool local_19;
  
  if (Il2CppMethodInitialized_07545c25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c25 = '\x01';
  }
  local_19 = false;
  local_1a = false;
  local_1b = false;
  *tierLabel = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(tierLabel);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = false;
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    bVar3 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags(&local_19,&local_1a,&local_1b,in_RCX);
    bVar1 = local_1a;
    bVar2 = local_1b;
    bVar4 = false;
    if ((bVar3) && (local_19 != false)) {
      if (Il2CppMethodInitialized_07545c23 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Tier 2");
        il2cpp_codegen_initialize_runtime_metadata(&"Tier 3");
        Il2CppMethodInitialized_07545c23 = '\x01';
      }
      pSVar5 = "Tier 2";
      if (bVar1 == false) {
        pSVar5 = (System_String_o *)0x0;
      }
      if (bVar2 != false) {
        pSVar5 = "Tier 3";
      }
      *tierLabel = pSVar5;
      Il2CppCodeGenWriteBarrier(tierLabel);
      bVar4 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
      bVar4 = !bVar4;
    }
  }
  return bVar4;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteTierLabel
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel (Photon_Realtime_Player_o* player, System_String_o** tierLabel, const MethodInfo* method);
// 0x59c9600
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c9704: mov esi, 0
// asm:   0x59c9709: test bpl, bpl
// asm:   0x59c970c: je 0x59c974b
// asm:   0x59c970e: lea rax, [rip + 0x1922cd3]  ; "Tier 2"
// asm:   0x59c9715: mov rsi, qword ptr [rax]
// asm:   0x59c9718: test bl, bl
// asm:   0x59c971c: jmp 0x59c9759

bool PatreonEffects_PatreonHelper__TryGetRemoteTierLabel
               (Photon_Realtime_Player_o *player,System_String_o **tierLabel,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Il2CppObject *obj;
  char *pcVar3;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o *pSVar4;
  System_Collections_IEnumerable_o *local_20;
  
  if (Il2CppMethodInitialized_07545c26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767500");
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_07545c26 = '\x01';
  }
  local_20 = (System_Collections_IEnumerable_o *)0x0;
  *tierLabel = (System_String_o *)0x0;
  bVar1 = false;
  Il2CppCodeGenWriteBarrier(tierLabel);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((((obj == (Il2CppObject *)0x0) || (method_00 = obj->klass, method_00 != g_data_075566f0)) ||
        (pcVar3 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar3 != '\0')) &&
       (bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_20,(MethodInfo *)method_00),
       bVar1)) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_58c86d0(local_20,"28767500",method_01);
      bVar2 = PatreonEffects_PatreonHelper__HasTier_58c86d0(local_20,"28767505",method_02);
      if (Il2CppMethodInitialized_07545c23 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Tier 2");
        il2cpp_codegen_initialize_runtime_metadata(&"Tier 3");
        Il2CppMethodInitialized_07545c23 = '\x01';
      }
      pSVar4 = "Tier 2";
      if (!bVar1) {
        pSVar4 = (System_String_o *)0x0;
      }
      if (bVar2) {
        pSVar4 = "Tier 3";
      }
      *tierLabel = pSVar4;
      Il2CppCodeGenWriteBarrier(tierLabel);
      bVar1 = System_String__IsNullOrEmpty(*tierLabel,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteDisplayName
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName (Photon_Realtime_Player_o* player, System_String_o** displayName, const MethodInfo* method);
// 0x59c9780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c9819: jne 0x59c983b

bool PatreonEffects_PatreonHelper__TryGetRemoteDisplayName
               (Photon_Realtime_Player_o *player,System_String_o **displayName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545c27 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName;
  *displayName = (System_String_o *)0x0;
  bVar3 = false;
  Il2CppCodeGenWriteBarrier(displayName);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = false;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = false, pSVar2->klass == g_data_07556758)) {
      bVar3 = false;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        *displayName = pSVar2;
        Il2CppCodeGenWriteBarrier(displayName);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$TryGetRemoteAccountId
// il2cpp: bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId (Photon_Realtime_Player_o* player, System_String_o** accountId, const MethodInfo* method);
// 0x59c9850
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59c98e9: jne 0x59c990b

bool PatreonEffects_PatreonHelper__TryGetRemoteAccountId
               (Photon_Realtime_Player_o *player,System_String_o **accountId,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_07545c28 = '\x01';
  }
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->AccountId;
  *accountId = (System_String_o *)0x0;
  bVar3 = false;
  Il2CppCodeGenWriteBarrier(accountId);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = false;
    pSVar2 = (System_String_o *)PhotonExtensions__GetCustomProperty(player,pSVar2,(MethodInfo *)0x0);
    if ((pSVar2 != (System_String_o *)0x0) && (bVar3 = false, pSVar2->klass == g_data_07556758)) {
      bVar3 = false;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        *accountId = pSVar2;
        Il2CppCodeGenWriteBarrier(accountId);
        bVar3 = true;
      }
    }
  }
  return bVar3;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess (const MethodInfo* method);
// 0x59c9920

bool PatreonEffects_PatreonHelper__LocalPlayerHasNameEffectAccess(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  bool bVar2;
  bool local_b;
  bool local_a;
  bool local_9;
  
  if (Il2CppMethodInitialized_07545c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c29 = '\x01';
  }
  local_9 = false;
  local_a = false;
  local_b = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = false;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags(&local_9,&local_a,&local_b,in_RCX);
    bVar2 = false;
    if ((bVar1) && (local_9 != false)) {
      bVar2 = local_b != false || local_a != false;
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c99b0

bool PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Il2CppObject *obj;
  char *pcVar3;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_IEnumerable_o *local_18;
  
  if (Il2CppMethodInitialized_07545c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767500");
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_07545c2a = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (((obj != (Il2CppObject *)0x0) && (method_00 = obj->klass, method_00 == g_data_075566f0)) &&
       (pcVar3 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar3 == '\0')) {
      return false;
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_18,(MethodInfo *)method_00);
    if (bVar1) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_58c86d0(local_18,"28767500",method_01);
      bVar2 = true;
      if (!bVar1) {
        bVar2 = PatreonEffects_PatreonHelper__HasTier_58c86d0(local_18,"28767505",method_02);
      }
      return bVar2;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasNameEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasNameEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c0f10

bool PatreonEffects_PatreonHelper__HasNameEffectAccess(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  bool bVar2;
  bool local_b;
  bool local_a;
  bool local_9;
  
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return false;
  }
  if ((player->fields).IsLocal == false) {
    bVar1 = PatreonEffects_PatreonHelper__RemotePlayerHasNameEffectAccess(player,method);
    return bVar1;
  }
  if (Il2CppMethodInitialized_07545c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c29 = '\x01';
  }
  local_9 = false;
  local_a = false;
  local_b = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = false;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags(&local_9,&local_a,&local_b,in_RCX);
    bVar2 = false;
    if ((bVar1) && (local_9 != false)) {
      bVar2 = local_b != false || local_a != false;
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$LocalPlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess (const MethodInfo* method);
// 0x59c9aa0

bool PatreonEffects_PatreonHelper__LocalPlayerHasCharacterEffectAccess(MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  bool bVar2;
  bool local_b;
  bool local_a;
  bool local_9;
  
  if (Il2CppMethodInitialized_07545c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c2b = '\x01';
  }
  local_a = false;
  local_b = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = false;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags(&local_a,&local_9,&local_b,in_RCX);
    bVar2 = false;
    if ((bVar1) && (local_a != false)) {
      bVar2 = local_b != false;
    }
  }
  return bVar2;
}


// PatreonEffects.PatreonHelper$$RemotePlayerHasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c9b30

bool PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *obj;
  char *pcVar2;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *method_00;
  MethodInfo *method_01;
  System_Collections_IEnumerable_o *local_18;
  
  if (Il2CppMethodInitialized_07545c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"28767505");
    Il2CppMethodInitialized_07545c2c = '\x01';
  }
  local_18 = (System_Collections_IEnumerable_o *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    obj = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->PatreonLinked,
                     (MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (((obj != (Il2CppObject *)0x0) && (method_00 = obj->klass, method_00 == g_data_075566f0)) &&
       (pcVar2 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar2 == '\0')) {
      return false;
    }
    bVar1 = PatreonEffects_PatreonHelper__TryGetRemoteTierIds(player,&local_18,(MethodInfo *)method_00);
    if (bVar1) {
      bVar1 = PatreonEffects_PatreonHelper__HasTier_58c86d0(local_18,"28767505",method_01);
      return bVar1;
    }
  }
  return false;
}


// PatreonEffects.PatreonHelper$$HasCharacterEffectAccess
// il2cpp: bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59c9c00

bool PatreonEffects_PatreonHelper__HasCharacterEffectAccess
               (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  bool bVar2;
  bool local_b;
  bool local_a;
  bool local_9;
  
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return false;
  }
  if ((player->fields).IsLocal == false) {
    bVar1 = PatreonEffects_PatreonHelper__RemotePlayerHasCharacterEffectAccess(player,method);
    return bVar1;
  }
  if (Il2CppMethodInitialized_07545c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07545c2b = '\x01';
  }
  local_a = false;
  local_b = false;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = false;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = PatreonEffects_PatreonHelper__TryGetLocalPatreonFlags(&local_a,&local_9,&local_b,in_RCX);
    bVar2 = false;
    if ((bVar1) && (local_a != false)) {
      bVar2 = local_b != false;
    }
  }
  return bVar2;
}


