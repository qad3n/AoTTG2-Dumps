// Type: UI.MapEditorVersionConversionPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorVersionConversionPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorVersionConversionPopup$$get_Width
// il2cpp: float UI_MapEditorVersionConversionPopup__get_Width (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7c90

float UI_MapEditorVersionConversionPopup__get_Width
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MapEditorVersionConversionPopup$$get_Height
// il2cpp: float UI_MapEditorVersionConversionPopup__get_Height (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7ca0

float UI_MapEditorVersionConversionPopup__get_Height
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 520.0;
}


// UI.MapEditorVersionConversionPopup$$get_LabelHeight
// il2cpp: float UI_MapEditorVersionConversionPopup__get_LabelHeight (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7cb0

float UI_MapEditorVersionConversionPopup__get_LabelHeight
                (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.MapEditorVersionConversionPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorVersionConversionPopup__get_HorizontalPadding (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7cc0

int32_t UI_MapEditorVersionConversionPopup__get_HorizontalPadding
                  (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 0x23;
}


// UI.MapEditorVersionConversionPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MapEditorVersionConversionPopup__get_PanelAlignment (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7cd0

int32_t UI_MapEditorVersionConversionPopup__get_PanelAlignment
                  (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorVersionConversionPopup$$Show
// il2cpp: void UI_MapEditorVersionConversionPopup__Show (UI_MapEditorVersionConversionPopup_o* __this, Map_MapVersionConversionResult_o* result, UnityEngine_Events_UnityAction_o* onConfirm, const MethodInfo* method);
// 0x5da66f0
// eh: try 0x5da6b7f..0x5da6d2c -> pad 0x5da70d1 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da6d7f..0x5da6e66 -> pad 0x5da6f22 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5da6ebf..0x5da6ee6 -> pad 0x5da70c9 catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da6f02..0x5da6f11 -> pad 0x5da6f1a (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5da6f41..0x5da707f -> pad 0x5da709d (+5 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5da70a3..0x5da70ad -> pad 0x5da7120 catch (...) [compiler noexcept guard]
// eh: try 0x5da7101..0x5da7106 -> pad 0x5da710b cleanup
// eh: try 0x5da710e..0x5da7118 -> pad 0x5da7120 catch (...) [compiler noexcept guard]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5da6b2e: lea r14, [rip + 0x14d28c3]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5da6b35: xor eax, eax
// asm:   0x5da6b37: mov qword ptr [rsp + 0x10], rax
// asm:   0x5da6b3c: lea r15, [rip + 0x14ca54d]  ; TypeInfo_System_Collections_Generic_IEnumerator_string
// asm:   0x5da6b43: lea r12, [rip + 0x1529aee]  ; "- "
// asm:   0x5da6b4a: nop word ptr [rax + rax]
// asm:   0x5da6be9: nop dword ptr [rax]
// asm:   0x5da6c5f: nop 
// asm:   0x5da6ee6: test r13, r13
// asm:   0x5da6ee9: jne 0x5da7077
// asm:   0x5da6eef: mov rbp, qword ptr [rsp + 0x20]
// asm:   0x5da6ef4: test rbp, rbp
// asm:   0x5da6ef7: jne 0x5da6b50
// asm:   0x5da6efd: jmp 0x5da7063
// asm:   0x5da6f16: jmp 0x5da6f22
// asm:   0x5da6f18: jmp 0x5da6f22
// asm:   0x5da6f1a: jmp 0x5da6f22
// asm:   0x5da6f1c: jmp 0x5da6f22
// asm:   0x5da6f1e: jmp 0x5da6f22
// asm:   0x5da6f20: jmp 0x5da6f22
// asm:   0x5da6f22: mov rbp, rdx
// asm:   0x5da6f25: mov r13, rax
// asm:   0x5da6f28: cmp ebp, 1
// asm:   0x5da6f2b: jne 0x5da70a3
// asm:   0x5da6f31: mov rdi, r13
// asm:   0x5da6f34: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da6f39: mov r13, qword ptr [rax]
// asm:   0x5da6f3c: mov qword ptr [rsp + 0x28], r13
// asm:   0x5da6f41: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da6f46: jmp 0x5da6e73
// asm:   0x5da6f8c: nop dword ptr [rax]
// asm:   0x5da7077: mov rdi, r13
// asm:   0x5da707a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da7098: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5da709d: mov rbp, rdx
// asm:   0x5da70a0: mov r13, rax
// asm:   0x5da70a3: lea rdi, [rsp + 0x28]
// asm:   0x5da70a8: call 0x2fddc90  ; il2cpp_runtime_helper_02fddc90()
// asm:   0x5da70ad: mov r14, qword ptr [rsp + 8]
// asm:   0x5da70b2: mov r15, qword ptr [rsp]
// asm:   0x5da70b6: lea r12, [rip + 0x153ad83]  ; "MapEditor"
// asm:   0x5da70bd: jmp 0x5da70e7
// asm:   0x5da70bf: jmp 0x5da70d1
// asm:   0x5da70c1: jmp 0x5da70d1
// asm:   0x5da70c3: jmp 0x5da70d1
// asm:   0x5da70c5: jmp 0x5da70d1
// asm:   0x5da70c7: jmp 0x5da70d1
// asm:   0x5da70c9: jmp 0x5da70d1
// asm:   0x5da70cb: jmp 0x5da70d1
// asm:   0x5da70cd: jmp 0x5da70d1
// asm:   0x5da70cf: jmp 0x5da70d1
// asm:   0x5da70d1: mov rbp, rdx
// asm:   0x5da70d4: mov r13, rax
// asm:   0x5da70d7: mov r14, qword ptr [rsp + 8]
// asm:   0x5da70dc: mov r15, qword ptr [rsp]
// asm:   0x5da70e0: lea r12, [rip + 0x153ad59]  ; "MapEditor"
// asm:   0x5da70e7: cmp ebp, 1
// asm:   0x5da70ea: jne 0x5da710e
// asm:   0x5da70ec: mov rdi, r13
// asm:   0x5da70ef: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5da70f4: mov rcx, qword ptr [rax]
// asm:   0x5da70f7: mov qword ptr [rsp + 0x10], rcx
// asm:   0x5da70fc: mov qword ptr [rsp + 0x38], rcx
// asm:   0x5da7101: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5da7106: jmp 0x5da6f5b
// asm:   0x5da710b: mov r13, rax
// asm:   0x5da710e: lea rdi, [rsp + 0x38]
// asm:   0x5da7113: call 0x2fddd20  ; il2cpp_runtime_helper_02fddd20()
// asm:   0x5da7118: mov rdi, r13
// asm:   0x5da711b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5da7120: mov rdi, rax
// asm:   0x5da7123: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MapEditorVersionConversionPopup__Show
               (UI_MapEditorVersionConversionPopup_o *__this,Map_MapVersionConversionResult_o *result,
               UnityEngine_Events_UnityAction_o *onConfirm,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  char cVar5;
  System_Text_StringBuilder_o *__this_01;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  System_Text_StringBuilder_o *pSVar9;
  VirtualInvokeData *pVVar10;
  System_String_o *pSVar11;
  ulong uVar12;
  long lVar13;
  MethodInfo *in_R9;
  Il2CppObject *local_60;
  Il2CppObject *local_58;
  undefined8 local_50;
  Il2CppObject **local_48;
  undefined8 local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075480d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_IMapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog");
    il2cpp_codegen_initialize_runtime_metadata(&"VersionRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Backup");
    il2cpp_codegen_initialize_runtime_metadata(&"Irreversible");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Reversible");
    il2cpp_codegen_initialize_runtime_metadata(&"- ");
    il2cpp_codegen_initialize_runtime_metadata(&"VersionConversion");
    Il2CppMethodInitialized_075480d2 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_60 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if ((result != (Map_MapVersionConversionResult_o *)0x0) && (args != (System_Object_array *)0x0)) {
    pSVar7 = (result->fields)._OriginalVersion_k__BackingField;
    if ((pSVar7 != (System_String_o *)0x0) &&
       (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((args->obj).klass)->_1).element_class),
       pIVar6 == (Il2CppObject *)0x0)) {
label_05da7089:
      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar7;
      Il2CppCodeGenWriteBarrier(args->m_Items);
      pSVar7 = (result->fields)._FinalVersion_k__BackingField;
      if ((pSVar7 != (System_String_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((args->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05da7089;
      if ((args->max_length & 0xfffffffe) != 0) {
        args->m_Items[1] = (Il2CppObject *)pSVar7;
        Il2CppCodeGenWriteBarrier(args->m_Items + 1);
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar1 = "VersionRange";
        pSVar11 = "VersionConversion";
        pSVar7 = "MapEditor";
        if (Il2CppMethodInitialized_075480fa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
          il2cpp_codegen_initialize_runtime_metadata(&"");
          Il2CppMethodInitialized_075480fa = '\x01';
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar7 = UI_UIManager__GetLocale
                           (pSVar7,pSVar11,pSVar1,"","",in_R9);
        pSVar7 = System_String__Format_5302cf0(pSVar7,args,(MethodInfo *)0x0);
        if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__AppendLine_530f250(__this_01,pSVar7,(MethodInfo *)0x0);
          bVar4 = Map_MapVersionConversionResult__get_IsReversible(result,(MethodInfo *)0x0);
          pSVar11 = "VersionConversion";
          pSVar7 = "MapEditor";
          if (bVar4) {
            ppSVar8 = &"Reversible";
          }
          else {
            ppSVar8 = &"Irreversible";
          }
          pSVar1 = *ppSVar8;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar7 = UI_UIManager__GetLocale
                             (pSVar7,pSVar11,pSVar1,"","",in_R9);
          System_Text_StringBuilder__AppendLine_530f250(__this_01,pSVar7,(MethodInfo *)0x0);
          pSVar7 = UI_UIManager__GetLocale
                             ("MapEditor","VersionConversion","Backup",
                              "","",in_R9);
          System_Text_StringBuilder__AppendLine_530f250(__this_01,pSVar7,(MethodInfo *)0x0);
          pSVar9 = System_Text_StringBuilder__AppendLine(__this_01,(MethodInfo *)0x0);
          pSVar7 = UI_UIManager__GetLocale
                             ("MapEditor","VersionConversion","Changelog",
                              "","",in_R9);
          if (pSVar9 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__AppendLine_530f250(pSVar9,pSVar7,(MethodInfo *)0x0);
            pIVar6 = (Il2CppObject *)(result->fields)._Converters_k__BackingField;
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar2 = pIVar6->klass;
              uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
              if (uVar12 != 0) {
                pIVar3 = (pIVar2->_1).interfaceOffsets;
                lVar13 = 0;
                do {
                  if (*(System_Collections_Generic_IEnumerable_IMapVersionConverter__c **)
                       ((long)&pIVar3->interfaceType + lVar13) ==
                      TypeInfo_System_Collections_Generic_IEnumerable_IMapVersionConverter) {
                    pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                    goto label_05da6b01;
                  }
                  lVar13 = lVar13 + 0x10;
                } while (uVar12 * 0x10 != lVar13);
              }
              pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar6,(Il2CppClass *)
                                          TypeInfo_System_Collections_Generic_IEnumerable_IMapVersionConverter
                                   ,0);
label_05da6b01:
              pIVar6 = (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
              local_40 = 0;
              local_38 = &local_58;
joined_r0x05da6b28:
              local_58 = pIVar6;
              if (pIVar6 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar2 = pIVar6->klass;
              uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
              if (uVar12 != 0) {
                pIVar3 = (pIVar2->_1).interfaceOffsets;
                lVar13 = 0;
                do {
                  if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar13) ==
                      (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                    pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                    goto label_05da6ba3;
                  }
                  lVar13 = lVar13 + 0x10;
                } while (uVar12 * 0x10 != lVar13);
              }
              pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05da6ba3:
              cVar5 = (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
              pIVar6 = local_58;
              if (cVar5 != '\0') {
                if (local_58 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar2 = local_58->klass;
                uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
                if (uVar12 != 0) {
                  pIVar3 = (pIVar2->_1).interfaceOffsets;
                  lVar13 = 0;
                  do {
                    if (*(System_Collections_Generic_IEnumerator_IMapVersionConverter__c **)
                         ((long)&pIVar3->interfaceType + lVar13) ==
                        TypeInfo_System_Collections_Generic_IEnumerator_IMapVersionConverter) {
                      pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                      goto label_05da6c23;
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (uVar12 * 0x10 != lVar13);
                }
                pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (local_58,(Il2CppClass *)
                                              TypeInfo_System_Collections_Generic_IEnumerator_IMapVersionConverter
                                     ,0);
label_05da6c23:
                pIVar6 = (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
                if (pIVar6 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar2 = pIVar6->klass;
                uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
                if (uVar12 != 0) {
                  pIVar3 = (pIVar2->_1).interfaceOffsets;
                  lVar13 = 0;
                  do {
                    if (*(Map_IMapVersionConverter_c **)((long)&pIVar3->interfaceType + lVar13) ==
                        TypeInfo_Map_IMapVersionConverter) {
                      pVVar10 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar13) + 3);
                      goto label_05da6ca8;
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (uVar12 * 0x10 != lVar13);
                }
                pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar6,(Il2CppClass *)TypeInfo_Map_IMapVersionConverter,3);
label_05da6ca8:
                pIVar6 = (Il2CppObject *)(*pVVar10->methodPtr)(pIVar6,pVVar10->method);
                if (pIVar6 == (Il2CppObject *)0x0) {
                  ThrowNullReferenceException();
                }
                pIVar2 = pIVar6->klass;
                uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
                if (uVar12 != 0) {
                  pIVar3 = (pIVar2->_1).interfaceOffsets;
                  lVar13 = 0;
                  do {
                    if (*(System_Collections_Generic_IEnumerable_string__c **)
                         ((long)&pIVar3->interfaceType + lVar13) ==
                        TypeInfo_System_Collections_Generic_IEnumerable_string) {
                      pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                      goto label_05da6d23;
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (uVar12 * 0x10 != lVar13);
                }
                pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar6,(Il2CppClass *)
                                            TypeInfo_System_Collections_Generic_IEnumerable_string,0);
label_05da6d23:
                pIVar6 = (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
                local_50 = 0;
                local_48 = &local_60;
                do {
                  local_60 = pIVar6;
                  if (pIVar6 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar2 = pIVar6->klass;
                  uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
                  if (uVar12 != 0) {
                    pIVar3 = (pIVar2->_1).interfaceOffsets;
                    lVar13 = 0;
                    do {
                      if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar13) ==
                          (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                        pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                        goto label_05da6da3;
                      }
                      lVar13 = lVar13 + 0x10;
                    } while (uVar12 * 0x10 != lVar13);
                  }
                  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05da6da3:
                  cVar5 = (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
                  __this_00 = local_60;
                  if (cVar5 == '\0') goto label_05da6e70;
                  if (local_60 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar2 = local_60->klass;
                  uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
                  if (uVar12 != 0) {
                    pIVar3 = (pIVar2->_1).interfaceOffsets;
                    lVar13 = 0;
                    do {
                      if (*(System_Collections_Generic_IEnumerator_string__c **)
                           ((long)&pIVar3->interfaceType + lVar13) ==
                          TypeInfo_System_Collections_Generic_IEnumerator_string) {
                        pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                        goto label_05da6e23;
                      }
                      lVar13 = lVar13 + 0x10;
                    } while (uVar12 * 0x10 != lVar13);
                  }
                  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_60,(Il2CppClass *)
                                                TypeInfo_System_Collections_Generic_IEnumerator_string,0);
label_05da6e23:
                  pSVar7 = (*pVVar10->methodPtr)(__this_00,pVVar10->method);
                  pSVar9 = System_Text_StringBuilder__Append_530ed80
                                     (__this_01,"- ",(MethodInfo *)0x0);
                  if (pSVar9 == (System_Text_StringBuilder_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  System_Text_StringBuilder__AppendLine_530f250(pSVar9,pSVar7,(MethodInfo *)0x0);
                  pIVar6 = local_60;
                } while( true );
              }
              if (local_58 == (Il2CppObject *)0x0) goto label_05da6fc6;
              pIVar2 = local_58->klass;
              uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
              if (uVar12 == 0) goto label_05da6f9f;
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar13 = 0;
              goto label_05da6f90;
            }
          }
        }
        goto label_05da707f;
      }
    }
    ThrowIndexOutOfRangeException();
  }
  goto label_05da707f;
label_05da6e70:
  pIVar6 = local_58;
  if (local_60 != (Il2CppObject *)0x0) {
    pIVar2 = local_60->klass;
    uVar12 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar12 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable)
        {
          pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_05da6edd;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar12 * 0x10 != lVar13);
    }
    pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_60,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05da6edd:
    (*pVVar10->methodPtr)(__this_00,pVVar10->method);
    pIVar6 = local_58;
  }
  goto joined_r0x05da6b28;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_05da6f90:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar10 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_05da6fbd;
    }
  }
label_05da6f9f:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath(local_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05da6fbd:
  (*pVVar10->methodPtr)(pIVar6,pVVar10->method);
label_05da6fc6:
  pSVar7 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
  if (pSVar7 != (System_String_o *)0x0) {
    pSVar7 = System_String__TrimEnd(pSVar7,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar11 = UI_UIManager__GetLocale
                        ("MapEditor","VersionConversion","Title",
                         "","",in_R9);
    UI_ConfirmPopup__Show((UI_ConfirmPopup_o *)__this,pSVar7,onConfirm,pSVar11,(MethodInfo *)0x0);
    return;
  }
label_05da707f:
  ThrowNullReferenceException();
}


// UI.MapEditorVersionConversionPopup$$.ctor
// il2cpp: void UI_MapEditorVersionConversionPopup___ctor (UI_MapEditorVersionConversionPopup_o* __this, const MethodInfo* method);
// 0x5da7d70

void UI_MapEditorVersionConversionPopup___ctor
               (UI_MapEditorVersionConversionPopup_o *__this,MethodInfo *method)

{
  UI_ConfirmPopup___ctor((UI_ConfirmPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


