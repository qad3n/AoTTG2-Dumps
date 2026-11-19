// Type: Gisketch.Aottg2UI.Actions.GisketchTransformSearch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchTransformSearch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchTransformSearch$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x53aaac0
// eh: try 0x53aabff..0x53aad31 -> pad 0x53aad44 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53aad60..0x53aad65 -> pad 0x53aae05 cleanup
// eh: try 0x53aae08..0x53aae12 -> pad 0x53aae1a catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53aabed: nop dword ptr [rax]
// asm:   0x53aad1d: jmp 0x53aad67
// asm:   0x53aad36: jmp 0x53aad44
// asm:   0x53aad38: jmp 0x53aad44
// asm:   0x53aad3a: jmp 0x53aad44
// asm:   0x53aad3c: jmp 0x53aad44
// asm:   0x53aad3e: jmp 0x53aad44
// asm:   0x53aad40: jmp 0x53aad44
// asm:   0x53aad42: jmp 0x53aad44
// asm:   0x53aad44: mov rbx, rax
// asm:   0x53aad47: cmp edx, 1
// asm:   0x53aad4a: jne 0x53aae08
// asm:   0x53aad50: mov rdi, rbx
// asm:   0x53aad53: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53aad58: mov r14, qword ptr [rax]
// asm:   0x53aad5b: mov qword ptr [rsp + 0x10], r14
// asm:   0x53aad60: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53aade6: test r14, r14
// asm:   0x53aade9: jne 0x53aadfd
// asm:   0x53aadfd: mov rdi, r14
// asm:   0x53aae00: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53aae05: mov rbx, rax
// asm:   0x53aae08: lea rdi, [rsp + 0x10]
// asm:   0x53aae0d: call 0x2d4bf20  ; il2cpp_runtime_helper_02d4bf20()
// asm:   0x53aae12: mov rdi, rbx
// asm:   0x53aae15: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53aae1a: mov rdi, rax
// asm:   0x53aae1d: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *a;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07542c07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07542c07 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  if (!bVar4) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar6 = root;
    }
    else {
      local_58 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_58;
      local_48 = 0;
      local_38 = &local_50;
      do {
        pIVar7 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_053aac23;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_053aac23:
        bVar4 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        pIVar7 = local_58;
        if (!bVar4) {
          pUVar6 = (UnityEngine_Transform_o *)0x0;
          break;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
              goto label_053aacb7;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_053aacb7:
        pUVar6 = (UnityEngine_Transform_o *)(*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        method_00 = extraout_RDX;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar6->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
          }
        }
        pUVar6 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar6,name,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar4);
      pIVar7 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar7->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        local_50 = pIVar7;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_IDisposable) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_053aaddd;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_053aaddd:
        (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      }
    }
  }
  return pUVar6;
}


