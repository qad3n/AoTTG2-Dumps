// Type: Utility.CSVCompression
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CSVCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CSVCompression.cs
// --------------------------------

// Utility.CSVCompression.<>c$$.cctor
// il2cpp: void Utility_CSVCompression___c___cctor (const MethodInfo* method);
// 0x182340db0

void Utility_CSVCompression___c___cctor(MethodInfo *method)

{
  Utility_CSVCompression___c_o *__this;
  
  if (Il2CppMethodInitialized_184347810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression_c);
    Il2CppMethodInitialized_184347810 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Utility_CSVCompression_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CSVCompression_c->static_fields->__9,__this);
  return;
}


// Utility.CSVCompression.<>c$$.ctor
// il2cpp: void Utility_CSVCompression___c___ctor (Utility_CSVCompression___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_CSVCompression___c___ctor(Utility_CSVCompression___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression.<>c$$<CompressSymbol>b__4_0
// il2cpp: int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0 (Utility_CSVCompression___c_o* __this, System_Collections_Generic_KeyValuePair_string__int__o x, const MethodInfo* method);
// 0x182340550

int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0
                  (Utility_CSVCompression___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__int__o *x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_int_get_Value);
    Il2CppMethodInitialized_184347811 = 1;
    return (x->fields).value;
  }
  return (x->fields).value;
}


// Utility.CSVCompression$$Compress
// il2cpp: System_Object_array* Utility_CSVCompression__Compress (System_String_o* source, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x18232db40
// eh: try 0x18232e070..0x18232e1bf -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232dccf: nop 
// asm:   0x18232e0f4: mov rdx, qword ptr [rip + 0x1d90445]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
// asm:   0x18232e0fb: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18232e100: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18232e105: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232e10a: test rcx, rcx
// asm:   0x18232e10d: jne 0x18232e1bf
// asm:   0x18232e113: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x18232e118: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18232e1bf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_Object_array *
Utility_CSVCompression__Compress
          (System_String_o *source,int32_t deltaRows,uint16_t containerDelimiter,uint16_t rowDelimiter,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array_array *pSVar3;
  Utility_Algorithms_BrotliAlgorithm_o *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string____o *__this;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  System_String_array *item;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_Text_Encoding_o *pSVar10;
  System_Byte_array *pSVar11;
  SimpleJSONFixed_JSONObject_o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  System_Object_array *pSVar13;
  Il2CppObject *pIVar14;
  uint uVar15;
  MethodInfo *method_00;
  uint16_t local_res18 [4];
  uint16_t local_res20 [4];
  undefined1 local_58 [16];
  System_String_o *local_48;
  undefined1 local_40 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_38;
  System_String_o *local_30;
  
  local_res18[0] = containerDelimiter;
  local_res20[0] = rowDelimiter;
  if (Il2CppMethodInitialized_184347808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_array_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184347808 = '\x01';
  }
  local_40 = (undefined1  [8])0x0;
  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_30 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_array_ctor);
  if (source != (System_String_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pSVar7 = System_String__Split(source,local_res18[0],0,(MethodInfo *)0x0);
    if (pSVar7 != (System_String_array *)0x0) {
      uVar15 = 0;
      while ((int)uVar15 < (int)pSVar7->max_length) {
        if ((uint)pSVar7->max_length <= uVar15) goto label_18232e1e5;
        if (pSVar7->m_Items[(int)uVar15] == (System_String_o *)0x0) goto label_18232e1b3;
        pSVar8 = System_String__Trim(pSVar7->m_Items[(int)uVar15],(MethodInfo *)0x0);
        if (pSVar8 == (System_String_o *)0x0) goto label_18232e1b3;
        method_00 = (MethodInfo *)0x0;
        item = System_String__Split(pSVar8,local_res20[0],0,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_array_Add;
        if (__this == (System_Collections_Generic_List_string____o *)0x0) goto label_18232e1b3;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_String_array_array *)0x0) goto label_18232e1b3;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) goto label_18232e1e5;
          pSVar3->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
          uVar15 = uVar15 + 1;
        }
        else {
          method_00 = pMVar5->klass->rgctx_data[0xe].method;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,&item->obj,
                     (MethodInfo_93DD50 *)method_00);
          uVar15 = uVar15 + 1;
        }
      }
      if (__this != (System_Collections_Generic_List_string____o *)0x0) {
        pUVar9 = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this,
                            (MethodInfo_929FE0 *)
                            MethodInfo_System_Collections_Generic_List_string_array_ToArray);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
        if (pUVar9 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                       *)0x0) {
          if (pUVar9->max_length != 0) {
            if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
            }
            method_00 = (MethodInfo *)0x0;
            Utility_CSVCompression__CompressDelta
                      ((System_String_array_array *)pUVar9,deltaRows,(MethodInfo *)0x0);
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          uVar15 = 0;
          while ((int)uVar15 < (int)pUVar9->max_length) {
            if ((uint)pUVar9->max_length <= uVar15) goto label_18232e1e5;
            pSVar7 = (System_String_array *)(&pUVar9->m_Items[0].fields.message)[(int)uVar15];
            if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354e48);
            }
            pSVar8 = System_Char__ToString(local_res20,(System_IFormatProvider_o *)0x0,method_00);
            method_00 = (MethodInfo *)0x0;
            pSVar8 = System_String__Join(pSVar8,pSVar7,(MethodInfo *)0x0);
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_18232e1b3;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this_01->fields)._items;
            if (pSVar7 == (System_String_array *)0x0) goto label_18232e1b3;
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar7->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              if ((uint)pSVar7->max_length <= uVar2) goto label_18232e1e5;
              pSVar7->m_Items[(int)uVar2] = pSVar8;
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar2,pSVar8);
              uVar15 = uVar15 + 1;
            }
            else {
              method_00 = pMVar5->klass->rgctx_data[0xe].method;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar8,
                         (MethodInfo_93DD50 *)method_00);
              uVar15 = uVar15 + 1;
            }
          }
          if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
          }
          pUVar4 = TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          pSVar8 = System_Char__ToString(local_res18,(System_IFormatProvider_o *)0x0,method_00);
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            pUVar9 = System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_T__o *)__this_01,
                                (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray
                               );
            pSVar8 = System_String__Join(pSVar8,(System_String_array *)pUVar9,(MethodInfo *)0x0);
            if (pUVar4 != (Utility_Algorithms_BrotliAlgorithm_o *)0x0) {
              if (Il2CppMethodInitialized_184347869 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_byte);
                Il2CppMethodInitialized_184347869 = '\x01';
              }
              bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
              if (bVar6) {
                pSVar11 = (System_Byte_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_byte);
              }
              else {
                pSVar10 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                if (pSVar10 == (System_Text_Encoding_o *)0x0) goto label_18232e1b3;
                pSVar11 = (*(pSVar10->klass->vtable)._18_GetBytes.methodPtr)
                                    (pSVar10,pSVar8,(pSVar10->klass->vtable)._18_GetBytes.method);
                pSVar11 = (*(pUVar4->klass->vtable)._4_Compress.methodPtr)
                                    (pUVar4,pSVar11,1,(pUVar4->klass->vtable)._4_Compress.method);
              }
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
              SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
              if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                __this_03 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                            System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                                       (MethodInfo_13C6500 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys
                                      );
                if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)
                {
                  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                              *)local_58,__this_03,
                             (MethodInfo_F1E4D0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator
                            );
                  local_40 = (undefined1  [8])local_58._0_8_;
                  pUStack_38 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58._8_8_;
                  local_30 = local_48;
                  local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                  local_58._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40;
                  while( true ) {
                    bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                        *)local_40,
                                       (MethodInfo_156BDD0 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
                                      );
                    pSVar8 = local_30;
                    if (!bVar6) break;
                    s = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                                   (Il2CppObject *)local_30,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
                    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                    }
                    pSVar12 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
                    if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                      ThrowNullReferenceException();
                    }
                    (*(__this_02->klass->vtable)._20_Add.methodPtr)
                              (__this_02,pSVar8,pSVar12,(__this_02->klass->vtable)._20_Add.method);
                  }
                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40,
                             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
                            );
                  pSVar13 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                  if (pSVar13 != (System_Object_array *)0x0) {
                    if (pSVar11 != (System_Byte_array *)0x0) {
                      pIVar14 = il2cpp_vm_Object_IsInst
                                          (&pSVar11->obj,(((pSVar13->obj).klass)->_1).element_class);
                      if (pIVar14 == (Il2CppObject *)0x0) {
                        pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
                      }
                    }
                    if ((int)pSVar13->max_length != 0) {
                      pSVar13->m_Items[0] = &pSVar11->obj;
                      Il2CppCodeGenWriteBarrier(pSVar13->m_Items,pSVar11);
                      if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
                        pIVar14 = il2cpp_vm_Object_IsInst
                                            ((Il2CppObject *)__this_02,
                                             (((pSVar13->obj).klass)->_1).element_class);
                        if (pIVar14 == (Il2CppObject *)0x0) {
                          pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
                        }
                      }
                      if (1 < (uint)pSVar13->max_length) {
                        pSVar13->m_Items[1] = (Il2CppObject *)__this_02;
                        Il2CppCodeGenWriteBarrier(pSVar13->m_Items + 1,__this_02);
                        return pSVar13;
                      }
                    }
label_18232e1e5:
                    ThrowIndexOutOfRangeException();
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_18232e1b3:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$Decompress
// il2cpp: System_String_o* Utility_CSVCompression__Decompress (System_Byte_array* source, SimpleJSONFixed_JSONNode_o* symbolTable, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x18232e500

System_String_o *
Utility_CSVCompression__Decompress
          (System_Byte_array *source,SimpleJSONFixed_JSONNode_o *symbolTable,int32_t deltaRows,
          uint16_t containerDelimiter,uint16_t rowDelimiter,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Utility_Algorithms_BrotliAlgorithm_o *pUVar3;
  System_String_array_array *pSVar4;
  MethodInfo *pMVar5;
  System_Text_Encoding_o *pSVar6;
  System_Byte_array *pSVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_List_string____o *__this;
  System_String_array *pSVar9;
  System_String_array *item;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar10;
  System_Collections_Generic_List_string__o *__this_00;
  uint uVar11;
  MethodInfo *method_00;
  uint16_t local_res20 [4];
  
  local_res20[0] = containerDelimiter;
  if (Il2CppMethodInitialized_184347809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_array_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184347809 = '\x01';
  }
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  pUVar3 = TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if (pUVar3 != (Utility_Algorithms_BrotliAlgorithm_o *)0x0) {
    if ((source == (System_Byte_array *)0x0) || (source->max_length == 0)) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      pSVar7 = (*(pUVar3->klass->vtable)._5_Decompress.methodPtr)
                         (pUVar3,source,0x1000,0xa00000,(pUVar3->klass->vtable)._5_Decompress.method);
      if (pSVar6 == (System_Text_Encoding_o *)0x0) goto label_18232e8dc;
      pSVar8 = (*(pSVar6->klass->vtable)._34_GetString.methodPtr)
                         (pSVar6,pSVar7,(pSVar6->klass->vtable)._34_GetString.method);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string_array);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_array_ctor);
    if (pSVar8 != (System_String_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pSVar9 = System_String__Split(pSVar8,local_res20[0],0,(MethodInfo *)0x0);
      if (pSVar9 != (System_String_array *)0x0) {
        uVar11 = 0;
        while ((int)uVar11 < (int)pSVar9->max_length) {
          if ((uint)pSVar9->max_length <= uVar11) goto label_18232e8e2;
          if (pSVar9->m_Items[(int)uVar11] == (System_String_o *)0x0) goto label_18232e8dc;
          method_00 = (MethodInfo *)0x0;
          item = System_String__Split(pSVar9->m_Items[(int)uVar11],rowDelimiter,0,(MethodInfo *)0x0);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_array_Add;
          if (__this == (System_Collections_Generic_List_string____o *)0x0) goto label_18232e8dc;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this->fields)._items;
          if (pSVar4 == (System_String_array_array *)0x0) goto label_18232e8dc;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) goto label_18232e8e2;
            pSVar4->m_Items[(int)uVar2] = item;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
            uVar11 = uVar11 + 1;
          }
          else {
            method_00 = pMVar5->klass->rgctx_data[0xe].method;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,&item->obj,
                       (MethodInfo_93DD50 *)method_00);
            uVar11 = uVar11 + 1;
          }
        }
        if (__this != (System_Collections_Generic_List_string____o *)0x0) {
          pUVar10 = System_Collections_Generic_List_object___ToArray
                              ((System_Collections_Generic_List_T__o *)__this,
                               (MethodInfo_929FE0 *)
                               MethodInfo_System_Collections_Generic_List_string_array_ToArray);
          if (pUVar10 !=
              (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
               *)0x0) {
            if (pUVar10->max_length != 0) {
              if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
              }
              method_00 = (MethodInfo *)0x0;
              Utility_CSVCompression__DecompressDelta
                        ((System_String_array_array *)pUVar10,deltaRows,(MethodInfo *)0x0);
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
            uVar11 = 0;
            while ((int)uVar11 < (int)pUVar10->max_length) {
              if ((uint)pUVar10->max_length <= uVar11) {
label_18232e8e2:
                ThrowIndexOutOfRangeException();
              }
              pSVar9 = (System_String_array *)(&pUVar10->m_Items[0].fields.message)[(int)uVar11];
              if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_184354e48);
              }
              pSVar8 = System_Char__ToString(&rowDelimiter,(System_IFormatProvider_o *)0x0,method_00);
              method_00 = (MethodInfo *)0x0;
              pSVar8 = System_String__Join(pSVar8,pSVar9,(MethodInfo *)0x0);
              pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_18232e8dc;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar9 = (__this_00->fields)._items;
              if (pSVar9 == (System_String_array *)0x0) goto label_18232e8dc;
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar9->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                if ((uint)pSVar9->max_length <= uVar2) goto label_18232e8e2;
                pSVar9->m_Items[(int)uVar2] = pSVar8;
                Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar2,pSVar8);
                uVar11 = uVar11 + 1;
              }
              else {
                method_00 = pMVar5->klass->rgctx_data[0xe].method;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar8,
                           (MethodInfo_93DD50 *)method_00);
                uVar11 = uVar11 + 1;
              }
            }
            if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_184354e48);
            }
            pSVar8 = System_Char__ToString(local_res20,(System_IFormatProvider_o *)0x0,method_00);
            if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
              pUVar10 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_T__o *)__this_00,
                                   (MethodInfo_929FE0 *)
                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
              pSVar8 = System_String__Join(pSVar8,(System_String_array *)pUVar10,(MethodInfo *)0x0);
              return pSVar8;
            }
          }
        }
      }
    }
  }
label_18232e8dc:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$CompressDelta
// il2cpp: void Utility_CSVCompression__CompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x18232d260

void Utility_CSVCompression__CompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass **targetAddress;
  Il2CppClass *pIVar4;
  uint uVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_18434780a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_18434780a = '\x01';
  }
  pIVar3 = SZArrayNew(TypeInfo_string_array,100);
  if (outputArr != (System_String_array_array *)0x0) {
    uVar5 = 0;
    while ((int)outputArr->max_length != 0) {
      pSVar1 = outputArr->m_Items[0];
      if (pSVar1 == (System_String_array *)0x0) goto label_18232d418;
      if ((int)pSVar1->max_length <= (int)uVar5) {
        uVar5 = 1;
        goto label_18232d326;
      }
      if ((uint)pSVar1->max_length <= uVar5) break;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_18232d418;
      if (*(uint *)&pIVar3[1].monitor <= uVar5) break;
      pIVar4 = (Il2CppClass *)pSVar1->m_Items[(int)uVar5];
      (&pIVar3[2].klass)[(int)uVar5] = pIVar4;
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass + (int)uVar5,pIVar4);
      uVar5 = uVar5 + 1;
    }
label_18232d412:
    ThrowIndexOutOfRangeException();
  }
label_18232d418:
  ThrowNullReferenceException();
label_18232d326:
  if ((int)outputArr->max_length <= (int)uVar5) {
    return;
  }
  if ((uint)outputArr->max_length <= uVar5) goto label_18232d412;
  if (0 < deltaRows) {
    pSVar1 = outputArr->m_Items[(int)uVar5];
    uVar6 = 0;
    if (pSVar1 == (System_String_array *)0x0) goto label_18232d418;
    do {
      if ((uint)pSVar1->max_length <= uVar6) goto label_18232d412;
      if (pIVar3 == (Il2CppObject *)0x0) goto label_18232d418;
      if (*(uint *)&pIVar3[1].monitor <= uVar6) goto label_18232d412;
      bVar2 = System_String__op_Equality
                        (pSVar1->m_Items[(int)uVar6],(System_String_o *)(&pIVar3[2].klass)[(int)uVar6],
                         (MethodInfo *)0x0);
      if ((uint)pSVar1->max_length <= uVar6) goto label_18232d412;
      if (bVar2) {
        pIVar4 = (Il2CppClass *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        pSVar1->m_Items[(int)uVar6] = (System_String_o *)pIVar4;
        targetAddress = (Il2CppClass **)(pSVar1->m_Items + (int)uVar6);
      }
      else {
        if (*(uint *)&pIVar3[1].monitor <= uVar6) goto label_18232d412;
        pIVar4 = (Il2CppClass *)pSVar1->m_Items[(int)uVar6];
        targetAddress = &pIVar3[2].klass + (int)uVar6;
        (&pIVar3[2].klass)[(int)uVar6] = pIVar4;
      }
      Il2CppCodeGenWriteBarrier(targetAddress,pIVar4);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < deltaRows);
  }
  uVar5 = uVar5 + 1;
  goto label_18232d326;
}


// Utility.CSVCompression$$CompressSymbol
// il2cpp: void Utility_CSVCompression__CompressSymbol (System_String_array_array* outputArr, System_Collections_Generic_Dictionary_string__string__o* symbolTable, const MethodInfo* method);
// 0x18232d420
// eh: try 0x18232d7e0..0x18232db2d -> pad 0x183324010 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232d60b: nop dword ptr [rax + rax]
// asm:   0x18232d6a6: nop word ptr [rax + rax]
// asm:   0x18232d9d0: jmp 0x18232da36
// asm:   0x18232d9e9: jmp 0x18232da36
// asm:   0x18232da02: jmp 0x18232da36
// asm:   0x18232da04: mov r8, qword ptr [rsp + 0x48]
// asm:   0x18232da09: cmp qword ptr [r8], 0
// asm:   0x18232da0d: je 0x18232da20
// asm:   0x18232da0f: xor ecx, ecx
// asm:   0x18232da11: mov r8, qword ptr [r8]
// asm:   0x18232da14: mov rdx, qword ptr [rip + 0x1d6b8e5]  ; TypeInfo_System_IDisposable
// asm:   0x18232da1b: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x18232da20: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x18232da25: test rcx, rcx
// asm:   0x18232da28: jne 0x18232db2d
// asm:   0x18232da2e: xor r12d, r12d
// asm:   0x18232da31: mov r15, qword ptr [rsp + 0x30]
// asm:   0x18232da36: mov esi, r12d
// asm:   0x18232da39: mov eax, r12d
// asm:   0x18232da3c: mov r14, qword ptr [rsp + 0x20]
// asm:   0x18232da41: mov r13, qword ptr [rsp + 0xa0]
// asm:   0x18232da49: nop dword ptr [rax]
// asm:   0x18232da7c: nop dword ptr [rax]
// asm:   0x18232db2d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 

void Utility_CSVCompression__CompressSymbol
               (System_String_array_array *outputArr,
               System_Collections_Generic_Dictionary_string__string__o *symbolTable,MethodInfo *method)

{
  ushort uVar1;
  System_String_array *pSVar2;
  System_String_o *key;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *value;
  bool bVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Func_KeyValuePair_string__int___int__o *__this_01;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  undefined8 *puVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_18434780b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_KeyValuePair_string_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_string_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_int_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_CSVCompression_c_CompressSymbol_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression_c);
    Il2CppMethodInitialized_18434780b = '\x01';
  }
  if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
  }
  pSVar7 = Utility_CSVCompression__ToBase62(0,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (outputArr != (System_String_array_array *)0x0) {
    for (uVar16 = 0; (int)uVar16 < (int)outputArr->max_length; uVar16 = uVar16 + 1) {
      if ((uint)outputArr->max_length <= uVar16) goto label_18232db33;
      pSVar2 = outputArr->m_Items[(int)uVar16];
      uVar13 = 0;
      if (pSVar2 == (System_String_array *)0x0) goto label_18232db39;
      while (uVar14 = (uint)pSVar2->max_length, (int)uVar13 < (int)uVar14) {
        if (uVar14 <= uVar13) goto label_18232db33;
        if (__this == (System_Collections_Generic_Dictionary_string__int__o *)0x0) goto label_18232db39;
        key = pSVar2->m_Items[(int)uVar13];
        bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key
                           ,(MethodInfo_1455450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
        if (bVar5) {
          iVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (Il2CppObject *)key,
                             (MethodInfo_147A530 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
          System_Collections_Generic_Dictionary_object__int___set_Item
                    ((System_Collections_Generic_Dictionary_object__int__o *)__this,(Il2CppObject *)key,
                     iVar6 + 1,
                     (MethodInfo_147A820 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
          uVar13 = uVar13 + 1;
        }
        else {
          System_Collections_Generic_Dictionary_object__int___Add
                    ((System_Collections_Generic_Dictionary_object__int__o *)__this,(Il2CppObject *)key,1,
                     (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
          uVar13 = uVar13 + 1;
        }
      }
    }
    uVar13 = 0;
    uVar16 = uVar13;
    if (__this != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      while (bVar5 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                               ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                                (Il2CppObject *)pSVar7,
                                (MethodInfo_1455450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey),
            bVar5) {
        if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
        }
        pSVar7 = Utility_CSVCompression__ToBase62(uVar16 + 1,(MethodInfo *)0x0);
        uVar16 = uVar16 + 1;
      }
      if ((TypeInfo_Utility_CSVCompression_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
      }
      __this_01 = TypeInfo_Utility_CSVCompression_c->static_fields->__9__4_0;
      if (__this_01 == (System_Func_KeyValuePair_string__int___int__o *)0x0) {
        if ((TypeInfo_Utility_CSVCompression_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
        }
        pIVar8 = (Il2CppObject *)TypeInfo_Utility_CSVCompression_c->static_fields->__9;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_int_int)
        ;
        System_Converter_AccelStructAdapter_InstanceIDs__int____ctor
                  ((System_Converter_AccelStructAdapter_InstanceIDs__int__o *)__this_01,pIVar8,
                   (intptr_t)MethodInfo_Utility_CSVCompression_c_CompressSymbol_b__4_0,
                   (MethodInfo_13859D0 *)0x0);
        TypeInfo_Utility_CSVCompression_c->static_fields->__9__4_0 = __this_01;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CSVCompression_c->static_fields->__9__4_0,__this_01);
      }
      pIVar8 = (Il2CppObject *)
               System_Linq_Enumerable__OrderByDescending_object__int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                          (System_Func_TSource__TKey__o *)__this_01,
                          (MethodInfo_6C0F60 *)
                          MethodInfo_System_Linq_Enumerable_OrderByDescending_KeyValuePair_string_int_int);
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar8 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_int,pIVar8);
        uVar14 = uVar13;
        do {
          if (pIVar8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIVar8->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          uVar12 = 0;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            uVar11 = uVar12;
            do {
              if (pIVar4[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                pVVar9 = pIVar3->vtable + pIVar4[uVar11].offset;
                goto label_18232d846;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar1);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_18232d846:
          bVar5 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
          uVar15 = uVar13;
          if (!bVar5) {
            if (pIVar8 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
            }
            goto label_18232da50;
          }
          if (pIVar8 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = pIVar8->klass;
          uVar1 = (pIVar3->_2).interface_offsets_count;
          if (uVar1 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            do {
              if (pIVar4[uVar12].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_int) {
                pVVar9 = pIVar3->vtable + pIVar4[uVar12].offset;
                goto label_18232d8b6;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar1);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar8,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_int,0
                             );
label_18232d8b6:
          puVar10 = (undefined8 *)(*pVVar9->methodPtr)(local_48,pIVar8);
          if (*(int *)(puVar10 + 1) < 3) {
            if (pIVar8 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
            }
            goto label_18232da50;
          }
          if (10000 < (int)uVar14) {
            if (pIVar8 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
            }
            goto label_18232da50;
          }
          value = (Il2CppObject *)*puVar10;
          if (value == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          if (pSVar7 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          if ((pSVar7->fields)._stringLength < *(int *)&value[1].klass) {
            if (symbolTable == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)symbolTable,
                       (Il2CppObject *)pSVar7,value,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,value,
                       (Il2CppObject *)pSVar7,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
            }
            uVar16 = uVar16 + 1;
            pSVar7 = Utility_CSVCompression__ToBase62(uVar16,(MethodInfo *)0x0);
            if (pSVar7 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            uVar14 = uVar14 + 6 + *(int *)&value[1].klass + (pSVar7->fields)._stringLength;
          }
        } while( true );
      }
    }
  }
label_18232db39:
  ThrowNullReferenceException();
label_18232da50:
  if ((int)outputArr->max_length <= (int)uVar15) {
    return;
  }
  if ((uint)outputArr->max_length <= uVar15) {
label_18232db33:
    ThrowIndexOutOfRangeException();
  }
  pSVar2 = outputArr->m_Items[(int)uVar15];
  uVar16 = uVar13;
  if (pSVar2 == (System_String_array *)0x0) goto label_18232db39;
  for (; uVar14 = (uint)pSVar2->max_length, (int)uVar16 < (int)uVar14; uVar16 = uVar16 + 1) {
    if (uVar14 <= uVar16) goto label_18232db33;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_18232db39;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)pSVar2->m_Items[(int)uVar16],
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    if (bVar5) {
      if (((uint)pSVar2->max_length <= uVar16) ||
         (pSVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                              (Il2CppObject *)pSVar2->m_Items[(int)uVar16],
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item),
         (uint)pSVar2->max_length <= uVar16)) goto label_18232db33;
      pSVar2->m_Items[(int)uVar16] = pSVar7;
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar16,pSVar7);
    }
  }
  uVar15 = uVar15 + 1;
  goto label_18232da50;
}


// Utility.CSVCompression$$DecompressDelta
// il2cpp: void Utility_CSVCompression__DecompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x18232e1f0

void Utility_CSVCompression__DecompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  Il2CppObject *obj;
  Il2CppObject *pIVar3;
  Il2CppClass **targetAddress;
  Il2CppClass *pIVar4;
  uint uVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_18434780c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_18434780c = '\x01';
  }
  if (outputArr != (System_String_array_array *)0x0) {
    if ((int)outputArr->max_length == 0) {
label_18232e390:
      ThrowIndexOutOfRangeException();
    }
    if (outputArr->m_Items[0] != (System_String_array *)0x0) {
      obj = System_Collections_Hashtable_HashtableEnumerator__Clone
                      ((System_Collections_Hashtable_HashtableEnumerator_o *)outputArr->m_Items[0],
                       (MethodInfo *)0x0);
      pIVar4 = TypeInfo_string_array;
      if (obj == (Il2CppObject *)0x0) {
        pIVar3 = (Il2CppObject *)0x0;
      }
      else {
        pIVar3 = il2cpp_vm_Object_IsInst(obj,TypeInfo_string_array);
        if (pIVar3 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar4);
        }
      }
      uVar6 = 1;
      do {
        if ((int)outputArr->max_length <= (int)uVar6) {
          return;
        }
        if ((uint)outputArr->max_length <= uVar6) goto label_18232e390;
        if (0 < deltaRows) {
          pSVar1 = outputArr->m_Items[(int)uVar6];
          uVar5 = 0;
          if (pSVar1 == (System_String_array *)0x0) break;
          do {
            if ((uint)pSVar1->max_length <= uVar5) goto label_18232e390;
            bVar2 = System_String__op_Equality
                              (pSVar1->m_Items[(int)uVar5],
                               (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
            if (bVar2) {
              if (pIVar3 == (Il2CppObject *)0x0) goto label_18232e396;
              if ((*(uint *)&pIVar3[1].monitor <= uVar5) || ((uint)pSVar1->max_length <= uVar5))
              goto label_18232e390;
              pIVar4 = (&pIVar3[2].klass)[(int)uVar5];
              targetAddress = (Il2CppClass **)(pSVar1->m_Items + (int)uVar5);
              pSVar1->m_Items[(int)uVar5] = (System_String_o *)pIVar4;
            }
            else {
              if ((uint)pSVar1->max_length <= uVar5) goto label_18232e390;
              if (pIVar3 == (Il2CppObject *)0x0) goto label_18232e396;
              if (*(uint *)&pIVar3[1].monitor <= uVar5) goto label_18232e390;
              pIVar4 = (Il2CppClass *)pSVar1->m_Items[(int)uVar5];
              targetAddress = &pIVar3[2].klass + (int)uVar5;
              (&pIVar3[2].klass)[(int)uVar5] = pIVar4;
            }
            Il2CppCodeGenWriteBarrier(targetAddress,pIVar4);
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < deltaRows);
        }
        uVar6 = uVar6 + 1;
      } while( true );
    }
  }
label_18232e396:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$DecompressSymbol
// il2cpp: void Utility_CSVCompression__DecompressSymbol (System_String_array_array* outputArr, SimpleJSONFixed_JSONNode_o* symbolTable, const MethodInfo* method);
// 0x18232e3a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232e3ec: nop dword ptr [rax]

void Utility_CSVCompression__DecompressSymbol
               (System_String_array_array *outputArr,SimpleJSONFixed_JSONNode_o *symbolTable,
               MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  bool bVar3;
  System_Xml_Schema_XmlSchema_o *d;
  System_String_o *value;
  uint uVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_18434780d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_18434780d = '\x01';
  }
  if (outputArr != (System_String_array_array *)0x0) {
    uVar5 = 0;
    do {
      if ((int)outputArr->max_length <= (int)uVar5) {
        return;
      }
      if ((uint)outputArr->max_length <= uVar5) {
label_18232e4eb:
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = outputArr->m_Items[(int)uVar5];
      uVar4 = 0;
      if (pSVar2 == (System_String_array *)0x0) break;
      for (; uVar1 = (uint)pSVar2->max_length, (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
        if (uVar1 <= uVar4) goto label_18232e4eb;
        if (symbolTable == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18232e4f1;
        bVar3 = (*(symbolTable->klass->vtable)._28_HasKey.methodPtr)
                          (symbolTable,(MethodInfo *)pSVar2->m_Items[(int)uVar4]);
        if (bVar3) {
          if ((uint)pSVar2->max_length <= uVar4) goto label_18232e4eb;
          d = (*(symbolTable->klass->vtable)._7_get_Item.methodPtr)
                        (symbolTable,(MethodInfo *)pSVar2->m_Items[(int)uVar4]);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          value = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450
                            ((SimpleJSONFixed_JSONNode_o *)d,(MethodInfo *)0x0);
          if ((uint)pSVar2->max_length <= uVar4) goto label_18232e4eb;
          pSVar2->m_Items[(int)uVar4] = value;
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar4,value);
        }
      }
      uVar5 = uVar5 + 1;
    } while( true );
  }
label_18232e4f1:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$ToBase62
// il2cpp: System_String_o* Utility_CSVCompression__ToBase62 (int32_t index, const MethodInfo* method);
// 0x18232e8f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232eaa7: mov rax, qword ptr [rip + 0x1dab33a]  ; TypeInfo_Utility_CSVCompression
// asm:   0x18232eaae: jmp 0x18232e9d4

System_String_o * Utility_CSVCompression__ToBase62(int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Char_array *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  int iVar6;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar7;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  uint uVar8;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_18434780e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Reverse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434780e = '\x01';
  }
  if (index == 0) {
    if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
    }
    pSVar3 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
    if (pSVar3 == (System_Char_array *)0x0) goto label_18232eb5c;
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    if ((int)pSVar3->max_length == 0) {
label_18232eb62:
      ThrowIndexOutOfRangeException();
    }
    pSVar7 = System_Char__ToString(pSVar3->m_Items,(System_IFormatProvider_o *)0x0,in_R8);
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
    }
    pSVar3 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
    if (pSVar3 == (System_Char_array *)0x0) {
label_18232eb5c:
      ThrowNullReferenceException();
    }
    if (index < 1) {
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18232eb5c;
    }
    else {
      iVar2 = (int)pSVar3->max_length;
      do {
        if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
        }
        pSVar3 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
        if (pSVar3 == (System_Char_array *)0x0) goto label_18232eb5c;
        iVar6 = index / iVar2;
        uVar8 = index % iVar2;
        if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e48);
        }
        if ((uint)pSVar3->max_length <= uVar8) goto label_18232eb62;
        pSVar7 = System_Char__ToString(pSVar3->m_Items + (int)uVar8,(System_IFormatProvider_o *)0x0,in_R8);
        pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_18232eb5c;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) goto label_18232eb5c;
        uVar8 = (__this->fields)._size;
        if (uVar8 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar8 + 1;
          if ((uint)pSVar4->max_length <= uVar8) goto label_18232eb62;
          pSVar4->m_Items[(int)uVar8] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar8,pSVar7);
        }
        else {
          in_R8 = pMVar5->klass->rgctx_data[0xe].method;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar7,
                     (MethodInfo_93DD50 *)in_R8);
        }
        index = iVar6;
      } while (0 < iVar6);
    }
    System_Collections_Generic_List_object___Reverse
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_947A90 *)MethodInfo_System_Collections_Generic_List_string_Reverse);
    value = System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_T__o *)__this,
                       (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pSVar7 = System_String__Join("",(System_String_array *)value,(MethodInfo *)0x0);
  }
  return pSVar7;
}


// Utility.CSVCompression$$.ctor
// il2cpp: void Utility_CSVCompression___ctor (Utility_CSVCompression_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_CSVCompression___ctor(Utility_CSVCompression_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression$$.cctor
// il2cpp: void Utility_CSVCompression___cctor (const MethodInfo* method);
// 0x18232eb70

void Utility_CSVCompression___cctor(MethodInfo *method)

{
  System_Char_array *value;
  
  if (Il2CppMethodInitialized_18434780f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    Il2CppMethodInitialized_18434780f = '\x01';
  }
  if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" != (System_String_o *)0x0) {
    value = System_String__ToCharArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",(MethodInfo *)0x0);
    TypeInfo_Utility_CSVCompression->static_fields->Alphabet = value;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CSVCompression->static_fields->Alphabet,value);
    return;
  }
  ThrowNullReferenceException();
}


