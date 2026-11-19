// Type: Utility.CSVCompression
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CSVCompression.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CSVCompression.cs
// --------------------------------

// Utility.CSVCompression.<>c$$.cctor
// il2cpp: void Utility_CSVCompression___c___cctor (const MethodInfo* method);
// 0x5dea750

void Utility_CSVCompression___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075482bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression_c);
    Il2CppMethodInitialized_075482bc = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Utility_CSVCompression_c->static_fields->__9 = (Utility_CSVCompression___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CSVCompression_c->static_fields->__9);
  return;
}


// Utility.CSVCompression.<>c$$.ctor
// il2cpp: void Utility_CSVCompression___c___ctor (Utility_CSVCompression___c_o* __this, const MethodInfo* method);
// 0x5dea7c0

void Utility_CSVCompression___c___ctor(Utility_CSVCompression___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression.<>c$$<CompressSymbol>b__4_0
// il2cpp: int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0 (Utility_CSVCompression___c_o* __this, System_Collections_Generic_KeyValuePair_string__int__o x, const MethodInfo* method);
// 0x5dea7d0

int32_t Utility_CSVCompression___c___CompressSymbol_b__4_0
                  (Utility_CSVCompression___c_o *__this,
                  System_Collections_Generic_KeyValuePair_string__int__o x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075482bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_int_get_Value);
    Il2CppMethodInitialized_075482bd = '\x01';
  }
  return x.fields.value;
}


// Utility.CSVCompression$$Compress
// il2cpp: System_Object_array* Utility_CSVCompression__Compress (System_String_o* source, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x5de8710
// eh: try 0x5de8c13..0x5de8dfb -> pad 0x5de8e18 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de8e34..0x5de8e39 -> pad 0x5de8e5e cleanup
// eh: try 0x5de8e61..0x5de8e6b -> pad 0x5de8e73 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de8e10: jmp 0x5de8e1c
// asm:   0x5de8e12: jmp 0x5de8e1c
// asm:   0x5de8e14: jmp 0x5de8e1c
// asm:   0x5de8e16: jmp 0x5de8e1c
// asm:   0x5de8e18: jmp 0x5de8e1c
// asm:   0x5de8e1a: jmp 0x5de8e1c
// asm:   0x5de8e1c: mov rbp, rax
// asm:   0x5de8e1f: cmp edx, 1
// asm:   0x5de8e22: jne 0x5de8e61
// asm:   0x5de8e24: mov rdi, rbp
// asm:   0x5de8e27: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de8e2c: mov rbp, qword ptr [rax]
// asm:   0x5de8e2f: mov qword ptr [rsp + 0x28], rbp
// asm:   0x5de8e34: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de8e39: lea rax, [rip + 0x14a7350]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose
// asm:   0x5de8e40: mov rsi, qword ptr [rax]
// asm:   0x5de8e43: lea rdi, [rsp + 0x10]
// asm:   0x5de8e48: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5de8e4d: test rbp, rbp
// asm:   0x5de8e50: je 0x5de8ca5
// asm:   0x5de8e56: mov rdi, rbp
// asm:   0x5de8e59: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de8e5e: mov rbp, rax
// asm:   0x5de8e61: lea rdi, [rsp + 0x28]
// asm:   0x5de8e66: call 0x2fdf190  ; il2cpp_runtime_helper_02fdf190()
// asm:   0x5de8e6b: mov rdi, rbp
// asm:   0x5de8e6e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de8e73: mov rdi, rax
// asm:   0x5de8e76: call 0x2ab61e0  ; __clang_call_terminate()

System_Object_array *
Utility_CSVCompression__Compress
          (System_String_o *source,int32_t deltaRows,uint16_t containerDelimiter,uint16_t rowDelimiter,
          MethodInfo *method)

{
  int32_t *piVar1;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  bool bVar2;
  uint uVar3;
  System_Collections_Generic_List_string____o *__this_00;
  System_String_array *pSVar4;
  System_String_o *pSVar5;
  System_String_array *item;
  System_String_array_array *outputArr;
  System_Collections_Generic_List_string__o *__this_01;
  ulong uVar6;
  System_Byte_array *pSVar7;
  SimpleJSONFixed_JSONObject_o *__this_02;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_String_o *s;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Object_array *pSVar9;
  Il2CppObject *pIVar10;
  Il2CppRGCTXData *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  ulong uVar12;
  uint uVar13;
  uint16_t local_74;
  uint16_t local_72;
  System_Collections_Generic_Dictionary_string__string__o *local_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_Byte_array *local_38;
  
  local_74 = rowDelimiter;
  local_72 = containerDelimiter;
  if (Il2CppMethodInitialized_075482b4 == '\0') {
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
    Il2CppMethodInitialized_075482b4 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_array_ctor);
  if (source == (System_String_o *)0x0) {
label_05de8d74:
    ThrowNullReferenceException();
  }
  method_00 = (Il2CppRGCTXData *)0x0;
  pSVar4 = System_String__Split(source,containerDelimiter,0,(MethodInfo *)0x0);
  if (pSVar4 == (System_String_array *)0x0) goto label_05de8d74;
  uVar3 = (uint)pSVar4->max_length;
  if (__this_00 == (System_Collections_Generic_List_string____o *)0x0) {
    if ((0 < (int)uVar3) && (pSVar4->m_Items[0] != (System_String_o *)0x0)) {
      pSVar5 = System_String__Trim(pSVar4->m_Items[0],(MethodInfo *)0x0);
      if (pSVar5 != (System_String_o *)0x0) {
        System_String__Split(pSVar5,rowDelimiter,0,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    goto label_05de8d74;
  }
  if (0 < (int)uVar3) {
    uVar13 = 0;
    do {
      while( true ) {
        if (uVar3 <= uVar13) goto label_05de8d42;
        if (pSVar4->m_Items[(int)uVar13] == (System_String_o *)0x0) goto label_05de8d74;
        pSVar5 = System_String__Trim(pSVar4->m_Items[(int)uVar13],(MethodInfo *)0x0);
        if (pSVar5 == (System_String_o *)0x0) goto label_05de8d74;
        item = System_String__Split(pSVar5,rowDelimiter,0,(MethodInfo *)0x0);
        pMVar11 = MethodInfo_System_Collections_Generic_List_string_array_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (Il2CppRGCTXData *)(__this_00->fields)._items;
        if (method_00 == (Il2CppRGCTXData *)0x0) goto label_05de8d74;
        uVar3 = (__this_00->fields)._size;
        if (*(uint *)&method_00[3].rgctxDataDummy <= uVar3) break;
        (__this_00->fields)._size = uVar3 + 1;
        method_00[(long)(int)uVar3 + 4].method = (MethodInfo *)item;
        Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar3 + 4].rgctxDataDummy);
        uVar13 = uVar13 + 1;
        uVar3 = (uint)pSVar4->max_length;
        if ((int)uVar3 <= (int)uVar13) goto label_05de8960;
      }
      method_00 = pMVar11->klass->rgctx_data;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,&item->obj,
                 (MethodInfo_395D230 *)method_00[0xe].method);
      uVar13 = uVar13 + 1;
      uVar3 = (uint)pSVar4->max_length;
    } while ((int)uVar13 < (int)uVar3);
  }
label_05de8960:
  outputArr = (System_String_array_array *)
              System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,
                         (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_array_ToArray
                        );
  local_70 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (outputArr == (System_String_array_array *)0x0) goto label_05de8d74;
  if (outputArr->max_length != 0) {
    pMVar11 = extraout_RDX;
    if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
      pMVar11 = extraout_RDX_00;
    }
    Utility_CSVCompression__CompressDelta(outputArr,deltaRows,pMVar11);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (0 < (int)outputArr->max_length) {
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      pSVar4 = outputArr->m_Items[0];
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      pSVar5 = System_Char__ToString(&local_74,(MethodInfo *)0x0);
      System_String__Join(pSVar5,pSVar4,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
    uVar6 = outputArr->max_length & 0xffffffff;
    uVar12 = 0;
    do {
      if (uVar6 <= uVar12) goto label_05de8d42;
      pSVar4 = outputArr->m_Items[uVar12];
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      pSVar5 = System_Char__ToString(&local_74,(MethodInfo *)0x0);
      pSVar5 = System_String__Join(pSVar5,pSVar4,(MethodInfo *)0x0);
      pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 == (System_String_array *)0x0) goto label_05de8d74;
      uVar3 = (__this_01->fields)._size;
      if (uVar3 < (uint)pSVar4->max_length) {
        (__this_01->fields)._size = uVar3 + 1;
        pSVar4->m_Items[(int)uVar3] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      uVar12 = uVar12 + 1;
      uVar3 = (uint)outputArr->max_length;
      uVar6 = (ulong)uVar3;
      method_00 = (Il2CppRGCTXData *)(long)(int)uVar3;
    } while ((long)uVar12 < (long)method_00);
  }
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  __this = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  pSVar5 = System_Char__ToString(&local_72,(MethodInfo *)0x0);
  if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_05de8d74;
  pSVar4 = (System_String_array *)
           System_Collections_Generic_List_object___ToArray
                     ((System_Collections_Generic_List_object__o *)__this_01,
                      (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
  pSVar5 = System_String__Join(pSVar5,pSVar4,(MethodInfo *)0x0);
  if (__this == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_05de8d74;
  pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this,pSVar5,1,(MethodInfo *)method_00);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
  if (local_70 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_05de8d74;
  __this_03 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
                         (MethodInfo_4AAD0F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Keys);
  if (__this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_05de8d74;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_50,
             __this_03,
             (MethodInfo_511A520 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_string_GetEnumerator);
  local_58 = local_40;
  local_68 = (undefined1  [8])local_50._0_8_;
  puStack_60 = (undefined1 *)local_50._8_8_;
  local_50._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50._8_8_ = local_68;
  local_38 = pSVar7;
  if (__this_02 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                       local_68,(MethodInfo_4CE7080 *)
                                MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
                      );
    if (bVar2) {
      pSVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
                          (Il2CppObject *)local_58,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
  else {
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_68,(MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_MoveNext
                        );
      pSVar5 = local_58;
      if (!bVar2) break;
      s = System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)local_70,
                     (Il2CppObject *)local_58,
                     (MethodInfo_4AAD450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
      (*(__this_02->klass->vtable)._20_Add.methodPtr)
                (__this_02,pSVar5,pSVar8,(__this_02->klass->vtable)._20_Add.method);
    }
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_68,
             (MethodInfo_4CE7070 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_string_Dispose);
  pSVar9 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  pSVar7 = local_38;
  if (pSVar9 == (System_Object_array *)0x0) goto label_05de8d74;
  if (local_38 != (System_Byte_array *)0x0) {
    pIVar10 = il2cpp_vm_Object_IsInst(&local_38->obj,(((pSVar9->obj).klass)->_1).element_class);
    if (pIVar10 == (Il2CppObject *)0x0) goto label_05de8d47;
  }
  if ((int)pSVar9->max_length != 0) {
    pSVar9->m_Items[0] = &pSVar7->obj;
    Il2CppCodeGenWriteBarrier(pSVar9->m_Items);
    if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pIVar10 = il2cpp_vm_Object_IsInst((Il2CppObject *)__this_02,(((pSVar9->obj).klass)->_1).element_class);
      if (pIVar10 == (Il2CppObject *)0x0) {
label_05de8d47:
        pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
      }
    }
    if ((pSVar9->max_length & 0xfffffffe) != 0) {
      pSVar9->m_Items[1] = (Il2CppObject *)__this_02;
      Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1);
      return pSVar9;
    }
  }
label_05de8d42:
  ThrowIndexOutOfRangeException();
}


// Utility.CSVCompression$$Decompress
// il2cpp: System_String_o* Utility_CSVCompression__Decompress (System_Byte_array* source, SimpleJSONFixed_JSONNode_o* symbolTable, int32_t deltaRows, uint16_t containerDelimiter, uint16_t rowDelimiter, const MethodInfo* method);
// 0x5de9220
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de9276: jmp 0x5de9658

System_String_o *
Utility_CSVCompression__Decompress
          (System_Byte_array *source,SimpleJSONFixed_JSONNode_o *symbolTable,int32_t deltaRows,
          uint16_t containerDelimiter,uint16_t rowDelimiter,MethodInfo *method)

{
  int32_t *piVar1;
  Utility_Algorithms_BrotliAlgorithm_o *pUVar2;
  uint uVar3;
  System_Text_Encoding_o *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_string____o *__this;
  System_String_array *pSVar7;
  System_String_array *item;
  System_String_array_array *pSVar8;
  System_Collections_Generic_List_string__o *__this_00;
  ulong uVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  uint uVar11;
  ulong uVar12;
  uint16_t local_34;
  uint16_t local_32;
  
  if (Il2CppMethodInitialized_075482b5 == '\0') {
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
    Il2CppMethodInitialized_075482b5 = '\x01';
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) goto label_05de9311;
label_05de9263:
    pUVar2 = TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  }
  else {
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor != 0) goto label_05de9263;
label_05de9311:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
    pUVar2 = TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  }
  if (pUVar2 != (Utility_Algorithms_BrotliAlgorithm_o *)0x0) {
    if ((source == (System_Byte_array *)0x0) || (source->max_length == 0)) {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      pSVar4 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      pSVar5 = (*(pUVar2->klass->vtable)._5_Decompress.methodPtr)
                         (pUVar2,source,0x1000,0xa00000,(pUVar2->klass->vtable)._5_Decompress.method);
      if (pSVar4 == (System_Text_Encoding_o *)0x0) goto label_05de9658;
      pSVar6 = (*(pSVar4->klass->vtable)._35_GetString.methodPtr)
                         (pSVar4,pSVar5,(pSVar4->klass->vtable)._35_GetString.method);
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string_array);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_array_ctor);
    if ((pSVar6 != (System_String_o *)0x0) &&
       (pSVar7 = System_String__Split(pSVar6,containerDelimiter,0,(MethodInfo *)0x0),
       pSVar7 != (System_String_array *)0x0)) {
      uVar3 = (uint)pSVar7->max_length;
      if (__this == (System_Collections_Generic_List_string____o *)0x0) {
        if ((0 < (int)uVar3) && (pSVar7->m_Items[0] != (System_String_o *)0x0)) {
          System_String__Split(pSVar7->m_Items[0],rowDelimiter,0,(MethodInfo *)0x0);
          ThrowNullReferenceException();
        }
      }
      else {
        if (0 < (int)uVar3) {
          uVar11 = 0;
          do {
            while( true ) {
              if (uVar3 <= uVar11) goto label_05de9645;
              if (pSVar7->m_Items[(int)uVar11] == (System_String_o *)0x0) goto label_05de9658;
              item = System_String__Split(pSVar7->m_Items[(int)uVar11],rowDelimiter,0,(MethodInfo *)0x0);
              pMVar10 = MethodInfo_System_Collections_Generic_List_string_array_Add;
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this->fields)._items;
              if (pSVar8 == (System_String_array_array *)0x0) goto label_05de9658;
              uVar3 = (__this->fields)._size;
              if ((uint)pSVar8->max_length <= uVar3) break;
              (__this->fields)._size = uVar3 + 1;
              pSVar8->m_Items[(int)uVar3] = item;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar3);
              uVar11 = uVar11 + 1;
              uVar3 = (uint)pSVar7->max_length;
              if ((int)uVar3 <= (int)uVar11) goto label_05de949d;
            }
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,&item->obj,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
            uVar11 = uVar11 + 1;
            uVar3 = (uint)pSVar7->max_length;
          } while ((int)uVar11 < (int)uVar3);
        }
label_05de949d:
        pSVar8 = (System_String_array_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this,
                            (MethodInfo_395F5A0 *)
                            MethodInfo_System_Collections_Generic_List_string_array_ToArray);
        if (pSVar8 != (System_String_array_array *)0x0) {
          if (pSVar8->max_length != 0) {
            pMVar10 = extraout_RDX;
            if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
              pMVar10 = extraout_RDX_00;
            }
            Utility_CSVCompression__DecompressDelta(pSVar8,deltaRows,pMVar10);
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
          if (0 < (int)pSVar8->max_length) {
            if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
              pSVar7 = pSVar8->m_Items[0];
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              pSVar6 = System_Char__ToString(&local_34,(MethodInfo *)0x0);
              System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
            uVar9 = pSVar8->max_length & 0xffffffff;
            uVar12 = 0;
            do {
              if (uVar9 <= uVar12) {
label_05de9645:
                ThrowIndexOutOfRangeException();
              }
              pSVar7 = pSVar8->m_Items[uVar12];
              if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_07556750);
              }
              pSVar6 = System_Char__ToString(&local_34,(MethodInfo *)0x0);
              pSVar6 = System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
              pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this_00->fields)._items;
              if (pSVar7 == (System_String_array *)0x0) goto label_05de9658;
              uVar3 = (__this_00->fields)._size;
              if (uVar3 < (uint)pSVar7->max_length) {
                (__this_00->fields)._size = uVar3 + 1;
                pSVar7->m_Items[(int)uVar3] = pSVar6;
                Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                           (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
              }
              uVar12 = uVar12 + 1;
              uVar3 = (uint)pSVar8->max_length;
              uVar9 = (ulong)uVar3;
            } while ((long)uVar12 < (long)(int)uVar3);
          }
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          pSVar6 = System_Char__ToString(&local_32,(MethodInfo *)0x0);
          if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar7 = (System_String_array *)
                     System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_object__o *)__this_00,
                                (MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_string_ToArray);
            pSVar6 = System_String__Join(pSVar6,pSVar7,(MethodInfo *)0x0);
            return pSVar6;
          }
        }
      }
    }
  }
label_05de9658:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$CompressDelta
// il2cpp: void Utility_CSVCompression__CompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x5de8e80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de9095: nop word ptr cs:[rax + rax]

void Utility_CSVCompression__CompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  System_String_array *pSVar4;
  System_String_array *pSVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  
  if (Il2CppMethodInitialized_075482b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_075482b6 = '\x01';
  }
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,100);
  if (outputArr == (System_String_array_array *)0x0) {
label_05de90d4:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)outputArr->max_length;
  if (pSVar4 == (System_String_array *)0x0) {
    if (uVar3 != 0) {
      if ((outputArr->m_Items[0] != (System_String_array *)0x0) &&
         ((int)outputArr->m_Items[0]->max_length < 1)) {
label_05de8f58:
        if (1 < (int)uVar3) {
          if (deltaRows < 1) {
            uVar11 = uVar3 - 2;
            if (uVar3 - 1 < uVar3 - 2) {
              uVar11 = uVar3 - 1;
            }
            uVar11 = uVar11 + 1;
            uVar6 = 1;
            if (0x20 < uVar11) {
              uVar6 = 0x20;
              if ((uVar11 & 0x1f) != 0) {
                uVar6 = uVar11 & 0x1f;
              }
              iVar9 = uVar11 - uVar6;
              uVar6 = (uVar11 - uVar6) + 1;
              do {
                iVar9 = iVar9 + -0x20;
              } while (iVar9 != 0);
            }
            do {
              if (uVar3 <= uVar6) goto label_05de8f37;
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < (int)uVar3);
          }
          else {
            if (pSVar4 == (System_String_array *)0x0) {
              if ((outputArr->m_Items[1] != (System_String_array *)0x0) &&
                 ((int)outputArr->m_Items[1]->max_length == 0)) goto label_05de8f37;
              goto label_05de90d4;
            }
            uVar11 = 1;
            do {
              if (uVar3 <= uVar11) goto label_05de8f37;
              pSVar1 = outputArr->m_Items[(int)uVar11];
              if (pSVar1 == (System_String_array *)0x0) goto label_05de90d4;
              uVar8 = 0;
              do {
                if (((uint)pSVar1->max_length <= uVar8) || ((uint)pSVar4->max_length <= uVar8))
                goto label_05de8f37;
                bVar2 = System_String__op_Equality
                                  (pSVar1->m_Items[uVar8],pSVar4->m_Items[uVar8],(MethodInfo *)0x0);
                uVar7 = (ulong)(uint)pSVar1->max_length;
                if (bVar2) {
                  if (uVar7 <= uVar8) goto label_05de8f37;
                  pSVar1->m_Items[uVar8] = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
                  pSVar5 = pSVar1;
                }
                else {
                  if ((uVar7 <= uVar8) || ((uint)pSVar4->max_length <= uVar8)) goto label_05de8f37;
                  pSVar4->m_Items[uVar8] = pSVar1->m_Items[uVar8];
                  pSVar5 = pSVar4;
                }
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + uVar8);
                uVar8 = uVar8 + 1;
              } while (uVar8 != (uint)deltaRows);
              uVar11 = uVar11 + 1;
              uVar3 = (uint)outputArr->max_length;
            } while ((int)uVar11 < (int)uVar3);
          }
        }
        return;
      }
      goto label_05de90d4;
    }
  }
  else if (uVar3 != 0) {
    lVar10 = 0;
    uVar8 = 0;
    do {
      pSVar1 = outputArr->m_Items[0];
      if (pSVar1 == (System_String_array *)0x0) goto label_05de90d4;
      uVar11 = (uint)pSVar1->max_length;
      if ((long)(int)uVar11 <= (long)uVar8) goto label_05de8f58;
      if ((uVar11 <= uVar8) || ((uint)pSVar4->max_length <= uVar8)) break;
      pSVar4->m_Items[uVar8] = pSVar1->m_Items[uVar8];
      Il2CppCodeGenWriteBarrier((void **)((long)pSVar4->m_Items + lVar10));
      uVar8 = uVar8 + 1;
      uVar3 = (uint)outputArr->max_length;
      lVar10 = lVar10 + 8;
    } while (uVar3 != 0);
  }
label_05de8f37:
  ThrowIndexOutOfRangeException();
}


// Utility.CSVCompression$$CompressSymbol
// il2cpp: void Utility_CSVCompression__CompressSymbol (System_String_array_array* outputArr, System_Collections_Generic_Dictionary_string__string__o* symbolTable, const MethodInfo* method);
// 0x5de99a0
// eh: try 0x5de9e7f..0x5dea00d -> pad 0x5dea025 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dea046..0x5dea04b -> pad 0x5dea217 cleanup
// eh: try 0x5dea21a..0x5dea224 -> pad 0x5dea22c catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de9d0b: jmp 0x5de9d25
// asm:   0x5de9e2d: nop dword ptr [rax]
// asm:   0x5de9ee9: nop dword ptr [rax]
// asm:   0x5dea00d: jmp 0x5dea025
// asm:   0x5dea00f: jmp 0x5dea025
// asm:   0x5dea011: jmp 0x5dea025
// asm:   0x5dea013: jmp 0x5dea025
// asm:   0x5dea015: jmp 0x5dea025
// asm:   0x5dea017: jmp 0x5dea025
// asm:   0x5dea019: jmp 0x5dea025
// asm:   0x5dea01b: jmp 0x5dea025
// asm:   0x5dea01d: jmp 0x5dea025
// asm:   0x5dea01f: jmp 0x5dea025
// asm:   0x5dea021: jmp 0x5dea025
// asm:   0x5dea023: jmp 0x5dea025
// asm:   0x5dea025: mov rbp, rax
// asm:   0x5dea028: cmp edx, 1
// asm:   0x5dea02b: jne 0x5dea21a
// asm:   0x5dea031: mov rdi, rbp
// asm:   0x5dea034: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dea039: mov rax, qword ptr [rax]
// asm:   0x5dea03c: mov r14, rax
// asm:   0x5dea03f: mov qword ptr [rsp + 0x28], rax
// asm:   0x5dea044: xor ebx, ebx
// asm:   0x5dea046: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dea07c: nop dword ptr [rax]
// asm:   0x5dea1c9: nop dword ptr [rax]
// asm:   0x5dea20f: mov rdi, r14
// asm:   0x5dea212: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dea217: mov rbp, rax
// asm:   0x5dea21a: lea rdi, [rsp + 0x28]
// asm:   0x5dea21f: call 0x2fdf1c0  ; il2cpp_runtime_helper_02fdf1c0()
// asm:   0x5dea224: mov rdi, rbp
// asm:   0x5dea227: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dea22c: mov rdi, rax
// asm:   0x5dea22f: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CSVCompression__CompressSymbol
               (System_String_array_array *outputArr,
               System_Collections_Generic_Dictionary_string__string__o *symbolTable,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  ulong uVar6;
  Utility_CSVCompression___c_StaticFields *pUVar7;
  System_Func_T__TResult__o *__this_00;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  il2cpp_array_size_t iVar10;
  System_String_o *pSVar11;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  long lVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int index;
  undefined1 auVar18 [12];
  MethodInfo *pMStack_68;
  Il2CppObject *pIStack_58;
  System_Collections_Generic_Dictionary_string__string__o *pSStack_50;
  System_Collections_Generic_Dictionary_string__string__o *pSStack_48;
  undefined8 uStack_40;
  Il2CppObject **ppIStack_38;
  
  pSStack_48 = symbolTable;
  if (Il2CppMethodInitialized_075482b7 == '\0') {
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
    Il2CppMethodInitialized_075482b7 = '\x01';
  }
  pIStack_58 = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
  }
  pMStack_68 = (MethodInfo *)Utility_CSVCompression__ToBase62(0,(MethodInfo *)symbolTable);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  pSStack_50 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  if (outputArr != (System_String_array_array *)0x0) {
    uVar16 = (uint)outputArr->max_length;
    if (__this == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      if ((int)uVar16 < 1) goto label_05dea20a;
      uVar17 = 0;
      do {
        if (outputArr->m_Items[(int)uVar17] == (System_String_array *)0x0) goto label_05dea20a;
        uVar6 = outputArr->m_Items[(int)uVar17]->max_length;
        if (0 < (int)uVar6) goto label_05dea1fe;
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
    else if (0 < (int)uVar16) {
      uVar17 = 0;
      do {
        if (uVar16 <= uVar17) goto label_05dea205;
        pSVar1 = outputArr->m_Items[(int)uVar17];
        if (pSVar1 == (System_String_array *)0x0) goto label_05dea20a;
        if (0 < (int)pSVar1->max_length) {
          uVar6 = pSVar1->max_length & 0xffffffff;
          uVar14 = 0;
          do {
            if (uVar6 <= uVar14) goto label_05dea205;
            pSVar11 = pSVar1->m_Items[uVar14];
            bVar4 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                              ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                               (Il2CppObject *)pSVar11,
                               (MethodInfo_4A9D990 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
            if (bVar4) {
              iVar5 = System_Collections_Generic_Dictionary_object__int___get_Item
                                ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                                 (Il2CppObject *)pSVar11,
                                 (MethodInfo_4A9D700 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
              System_Collections_Generic_Dictionary_object__int___set_Item
                        ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                         (Il2CppObject *)pSVar11,iVar5 + 1,
                         (MethodInfo_4A9D760 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_set_Item);
            }
            else {
              System_Collections_Generic_Dictionary_object__int___Add
                        ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                         (Il2CppObject *)pSVar11,1,
                         (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                        );
            }
            uVar14 = uVar14 + 1;
            uVar16 = (uint)pSVar1->max_length;
            uVar6 = (ulong)uVar16;
          } while ((long)uVar14 < (long)(int)uVar16);
        }
        uVar17 = uVar17 + 1;
        uVar16 = (uint)outputArr->max_length;
      } while ((int)uVar17 < (int)uVar16);
    }
    if (__this != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
      pMVar12 = pMStack_68;
      bVar4 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                         (Il2CppObject *)pMStack_68,
                         (MethodInfo_4A9D990 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
      index = 0;
      if (bVar4) {
        index = 0;
        do {
          index = index + 1;
          if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
          }
          pMStack_68 = (MethodInfo *)Utility_CSVCompression__ToBase62(index,pMVar12);
          pMVar12 = pMStack_68;
          bVar4 = System_Collections_Generic_Dictionary_object__int___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__int__o *)__this,
                             (Il2CppObject *)pMStack_68,
                             (MethodInfo_4A9D990 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_int_ContainsKey);
        } while (bVar4);
      }
      if ((TypeInfo_Utility_CSVCompression_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
        pUVar7 = TypeInfo_Utility_CSVCompression_c->static_fields;
        __this_00 = (System_Func_T__TResult__o *)pUVar7->__9__4_0;
      }
      else {
        pUVar7 = TypeInfo_Utility_CSVCompression_c->static_fields;
        __this_00 = (System_Func_T__TResult__o *)pUVar7->__9__4_0;
      }
      if (__this_00 == (System_Func_T__TResult__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_Utility_CSVCompression_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression_c);
          pUVar7 = TypeInfo_Utility_CSVCompression_c->static_fields;
        }
        pIVar8 = (Il2CppObject *)pUVar7->__9;
        __this_00 = (System_Func_T__TResult__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_string_int_int)
        ;
        System_Func_KeyValuePair_object__int___int____ctor
                  (__this_00,pIVar8,(intptr_t)MethodInfo_Utility_CSVCompression_c_CompressSymbol_b__4_0,
                   (MethodInfo_4F0FC60 *)0x0);
        pUVar7 = TypeInfo_Utility_CSVCompression_c->static_fields;
        pUVar7->__9__4_0 = (System_Func_KeyValuePair_string__int___int__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&pUVar7->__9__4_0);
      }
      pIVar8 = (Il2CppObject *)
               System_Linq_Enumerable__OrderByDescending_KeyValuePair_object__int___int_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                          (System_Func_TSource__TKey__o *)__this_00,
                          (MethodInfo_34F2150 *)
                          MethodInfo_System_Linq_Enumerable_OrderByDescending_KeyValuePair_string_int_int);
      if (pIVar8 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar8->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerable_KeyValuePair_string__int___c **)
                 ((long)&pIVar3->interfaceType + lVar13) ==
                TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_int) {
              pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
              goto label_05de9e01;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar6 * 0x10 != lVar13);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar8,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IEnumerable_KeyValuePair_string_int,0);
label_05de9e01:
        pIStack_58 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        uStack_40 = 0;
        ppIStack_38 = &pIStack_58;
        iVar15 = 0;
        do {
          pIVar8 = pIStack_58;
          if (pIStack_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar2 = pIStack_58->klass;
          uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar6 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar13) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                goto label_05de9ea3;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar6 * 0x10 != lVar13);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIStack_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05de9ea3:
          bVar4 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
          pIVar8 = pIStack_58;
          if (!bVar4) {
label_05dea04b:
            pIVar8 = pIStack_58;
            if (pIStack_58 == (Il2CppObject *)0x0) goto label_05dea0b6;
            pIVar2 = pIStack_58->klass;
            uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar6 == 0) goto label_05dea08f;
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar13 = 0;
            goto label_05dea080;
          }
          if (pIStack_58 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar2 = pIStack_58->klass;
          uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar6 != 0) {
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)
                   ((long)&pIVar3->interfaceType + lVar13) ==
                  TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_int) {
                pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
                goto label_05de9f23;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar6 * 0x10 != lVar13);
          }
          pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIStack_58,
                              (Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IEnumerator_KeyValuePair_string_int,0);
label_05de9f23:
          auVar18 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
          pMVar12 = auVar18._0_8_;
          if ((auVar18._8_4_ < 3) || (10000 < iVar15)) goto label_05dea04b;
          if (pMVar12 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          if (pMStack_68 == (MethodInfo *)0x0) {
            ThrowNullReferenceException();
          }
          if (((System_String_Fields *)&pMStack_68->invoker_method)->_stringLength <
              *(int *)&pMVar12->invoker_method) {
            if (pSStack_48 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_48,
                       (Il2CppObject *)pMStack_68,(Il2CppObject *)pMVar12,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            if (pSStack_50 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
              ThrowNullReferenceException();
            }
            method_00 = pMVar12;
            System_Collections_Generic_Dictionary_object__object___Add
                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                       (Il2CppObject *)pMVar12,(Il2CppObject *)pMStack_68,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
            if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
            }
            index = index + 1;
            pMStack_68 = (MethodInfo *)Utility_CSVCompression__ToBase62(index,method_00);
            if (pMStack_68 == (MethodInfo *)0x0) {
              ThrowNullReferenceException();
            }
            iVar15 = iVar15 + ((System_String_Fields *)&pMStack_68->invoker_method)->_stringLength +
                     *(int *)&pMVar12->invoker_method + 6;
          }
        } while( true );
      }
    }
  }
  goto label_05dea20a;
  while (lVar13 = lVar13 + 0x10, uVar6 * 0x10 != lVar13) {
label_05dea080:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_05dea0ad;
    }
  }
label_05dea08f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIStack_58,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05dea0ad:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
label_05dea0b6:
  iVar10 = outputArr->max_length;
  uVar16 = (uint)iVar10;
  if (0 < (int)uVar16) {
    if (pSStack_50 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      uVar17 = 0;
      do {
        if (uVar16 <= uVar17) goto label_05dea205;
        if (outputArr->m_Items[(int)uVar17] == (System_String_array *)0x0) goto label_05dea20a;
        uVar6 = outputArr->m_Items[(int)uVar17]->max_length;
        if (0 < (int)uVar6) goto label_05dea1fe;
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar16);
    }
    else {
      uVar16 = 0;
      do {
        if ((uint)iVar10 <= uVar16) goto label_05dea205;
        pSVar1 = outputArr->m_Items[(int)uVar16];
        if (pSVar1 == (System_String_array *)0x0) goto label_05dea20a;
        if (0 < (int)pSVar1->max_length) {
          uVar6 = pSVar1->max_length & 0xffffffff;
          lVar13 = 0;
          uVar14 = 0;
          do {
            if (uVar6 <= uVar14) goto label_05dea205;
            bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                              ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                               (Il2CppObject *)pSVar1->m_Items[uVar14],
                               (MethodInfo_4AAD6F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
            if (bVar4) {
              if (((uint)pSVar1->max_length <= uVar14) ||
                 (pSVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_50,
                                       (Il2CppObject *)pSVar1->m_Items[uVar14],
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                      ), (uint)pSVar1->max_length <= uVar14)) goto label_05dea205;
              pSVar1->m_Items[uVar14] = pSVar11;
              Il2CppCodeGenWriteBarrier((void **)((long)pSVar1->m_Items + lVar13));
            }
            uVar14 = uVar14 + 1;
            uVar17 = (uint)pSVar1->max_length;
            uVar6 = (ulong)uVar17;
            lVar13 = lVar13 + 8;
          } while ((long)uVar14 < (long)(int)uVar17);
          iVar10 = outputArr->max_length;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < (int)iVar10);
    }
  }
  return;
label_05dea1fe:
  if ((uVar6 & 0xffffffff) == 0) {
label_05dea205:
    ThrowIndexOutOfRangeException();
  }
label_05dea20a:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$DecompressDelta
// il2cpp: void Utility_CSVCompression__DecompressDelta (System_String_array_array* outputArr, int32_t deltaRows, const MethodInfo* method);
// 0x5de9750
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de98b4: jmp 0x5de9995
// asm:   0x5de9919: nop dword ptr [rax]
// asm:   0x5de9925: nop word ptr cs:[rax + rax]

void Utility_CSVCompression__DecompressDelta
               (System_String_array_array *outputArr,int32_t deltaRows,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppClass *pIVar2;
  bool bVar3;
  uint uVar4;
  Il2CppObject *obj;
  System_String_array *pSVar5;
  System_String_array *pSVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_075482b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_075482b8 = '\x01';
  }
  if (outputArr != (System_String_array_array *)0x0) {
    if ((int)outputArr->max_length == 0) {
label_05de9995:
      ThrowIndexOutOfRangeException();
    }
    if (outputArr->m_Items[0] != (System_String_array *)0x0) {
      pSVar5 = (System_String_array *)0x0;
      obj = System_Array__Clone((System_Array_o *)outputArr->m_Items[0],(MethodInfo *)0x0);
      pIVar2 = TypeInfo_string_array;
      if ((obj != (Il2CppObject *)0x0) &&
         (pSVar5 = (System_String_array *)il2cpp_vm_Object_IsInst(obj,TypeInfo_string_array),
         pSVar5 == (System_String_array *)0x0)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar2);
      }
      uVar4 = (uint)outputArr->max_length;
      if (1 < (int)uVar4) {
        if (deltaRows < 1) {
          uVar10 = uVar4 - 2;
          if (uVar4 - 1 < uVar4 - 2) {
            uVar10 = uVar4 - 1;
          }
          uVar10 = uVar10 + 1;
          uVar7 = 1;
          if (0x20 < uVar10) {
            uVar7 = 0x20;
            if ((uVar10 & 0x1f) != 0) {
              uVar7 = uVar10 & 0x1f;
            }
            iVar8 = uVar10 - uVar7;
            uVar7 = (uVar10 - uVar7) + 1;
            do {
              iVar8 = iVar8 + -0x20;
            } while (iVar8 != 0);
          }
          do {
            if (uVar4 <= uVar7) goto label_05de9995;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar4);
        }
        else {
          if (pSVar5 == (System_String_array *)0x0) {
            pSVar5 = outputArr->m_Items[1];
            if ((pSVar5 != (System_String_array *)0x0) &&
               (((int)pSVar5->max_length == 0 ||
                ((bVar3 = System_String__op_Equality
                                    (pSVar5->m_Items[0],
                                     (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                     (MethodInfo *)0x0), !bVar3 && ((int)pSVar5->max_length == 0))))))
            goto label_05de9995;
            goto label_05de995d;
          }
          uVar10 = 1;
          do {
            if (uVar4 <= uVar10) goto label_05de9995;
            pSVar1 = outputArr->m_Items[(int)uVar10];
            if (pSVar1 == (System_String_array *)0x0) goto label_05de995d;
            uVar9 = 0;
            do {
              if ((uint)pSVar1->max_length <= uVar9) goto label_05de9995;
              bVar3 = System_String__op_Equality
                                (pSVar1->m_Items[uVar9],
                                 (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
              if (bVar3) {
                if (((uint)pSVar5->max_length <= uVar9) || ((uint)pSVar1->max_length <= uVar9))
                goto label_05de9995;
                pSVar1->m_Items[uVar9] = pSVar5->m_Items[uVar9];
                pSVar6 = pSVar1;
              }
              else {
                if (((uint)pSVar1->max_length <= uVar9) || ((uint)pSVar5->max_length <= uVar9))
                goto label_05de9995;
                pSVar5->m_Items[uVar9] = pSVar1->m_Items[uVar9];
                pSVar6 = pSVar5;
              }
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + uVar9);
              uVar9 = uVar9 + 1;
            } while (uVar9 != (uint)deltaRows);
            uVar10 = uVar10 + 1;
            uVar4 = (uint)outputArr->max_length;
          } while ((int)uVar10 < (int)uVar4);
        }
      }
      return;
    }
  }
label_05de995d:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$DecompressSymbol
// il2cpp: void Utility_CSVCompression__DecompressSymbol (System_String_array_array* outputArr, SimpleJSONFixed_JSONNode_o* symbolTable, const MethodInfo* method);
// 0x5dea530

void Utility_CSVCompression__DecompressSymbol
               (System_String_array_array *outputArr,SimpleJSONFixed_JSONNode_o *symbolTable,
               MethodInfo *method)

{
  System_String_array *pSVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *d;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075482b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075482b9 = '\x01';
  }
  if (outputArr == (System_String_array_array *)0x0) {
label_05dea6c6:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)outputArr->max_length;
  if (symbolTable == (SimpleJSONFixed_JSONNode_o *)0x0) {
    if (0 < (int)uVar3) {
      uVar6 = 0;
      do {
        if (outputArr->m_Items[(int)uVar6] == (System_String_array *)0x0) goto label_05dea6c6;
        uVar4 = outputArr->m_Items[(int)uVar6]->max_length;
        if (0 < (int)uVar4) {
          if ((uVar4 & 0xffffffff) == 0) goto label_05dea6c1;
          goto label_05dea6c6;
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
    }
  }
  else if (0 < (int)uVar3) {
    uVar6 = 0;
    do {
      if (uVar3 <= uVar6) {
label_05dea6c1:
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = outputArr->m_Items[(int)uVar6];
      if (pSVar1 == (System_String_array *)0x0) goto label_05dea6c6;
      if (0 < (int)pSVar1->max_length) {
        uVar4 = pSVar1->max_length & 0xffffffff;
        lVar8 = 0;
        uVar7 = 0;
        do {
          if (uVar4 <= uVar7) goto label_05dea6c1;
          bVar2 = (*(symbolTable->klass->vtable)._28_HasKey.methodPtr)
                            (symbolTable,pSVar1->m_Items[uVar7],(symbolTable->klass->vtable)._28_HasKey.method
                            );
          if (bVar2) {
            if ((uint)pSVar1->max_length <= uVar7) goto label_05dea6c1;
            d = (*(symbolTable->klass->vtable)._7_get_Item.methodPtr)
                          (symbolTable,pSVar1->m_Items[uVar7],(symbolTable->klass->vtable)._7_get_Item.method)
            ;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit_5763740(d,(MethodInfo *)0x0);
            if ((uint)pSVar1->max_length <= uVar7) goto label_05dea6c1;
            pSVar1->m_Items[uVar7] = pSVar5;
            Il2CppCodeGenWriteBarrier((void **)((long)pSVar1->m_Items + lVar8));
          }
          uVar7 = uVar7 + 1;
          uVar3 = (uint)pSVar1->max_length;
          uVar4 = (ulong)uVar3;
          lVar8 = lVar8 + 8;
        } while ((long)uVar7 < (long)(int)uVar3);
      }
      uVar6 = uVar6 + 1;
      uVar3 = (uint)outputArr->max_length;
    } while ((int)uVar6 < (int)uVar3);
  }
  return;
}


// Utility.CSVCompression$$ToBase62
// il2cpp: System_String_o* Utility_CSVCompression__ToBase62 (int32_t index, const MethodInfo* method);
// 0x5dea240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dea46b: jmp 0x5dea4de

System_String_o * Utility_CSVCompression__ToBase62(int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_Char_array *pSVar8;
  
  if (Il2CppMethodInitialized_075482ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Reverse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075482ba = '\x01';
  }
  if (index == 0) {
    if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
    }
    pSVar8 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
    if (pSVar8 != (System_Char_array *)0x0) {
      if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556750);
      }
      if ((int)pSVar8->max_length != 0) {
        pSVar6 = System_Char__ToString(pSVar8->m_Items,(MethodInfo *)0x0);
        return pSVar6;
      }
label_05dea529:
      ThrowIndexOutOfRangeException();
    }
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
    }
    pSVar8 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
    if (pSVar8 != (System_Char_array *)0x0) {
      if (index < 1) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05dea524;
      }
      else {
        iVar2 = (int)pSVar8->max_length;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
            pSVar8 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
            if (pSVar8 == (System_Char_array *)0x0) goto label_05dea524;
          }
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          if ((uint)((long)index % (long)iVar2) < (uint)pSVar8->max_length) {
            System_Char__ToString
                      (pSVar8->m_Items + ((long)index % (long)iVar2 & 0xffffffff),(MethodInfo *)0x0);
            ThrowNullReferenceException();
          }
          goto label_05dea529;
        }
        do {
          while( true ) {
            lVar4 = (long)index;
            index = index / iVar2;
            if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
            }
            pSVar8 = TypeInfo_Utility_CSVCompression->static_fields->Alphabet;
            if (pSVar8 == (System_Char_array *)0x0) goto label_05dea524;
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            if ((uint)pSVar8->max_length <= (uint)(lVar4 % (long)iVar2)) goto label_05dea529;
            pSVar6 = System_Char__ToString
                               (pSVar8->m_Items + (lVar4 % (long)iVar2 & 0xffffffff),(MethodInfo *)0x0);
            pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar7 = (__this->fields)._items;
            if (pSVar7 == (System_String_array *)0x0) goto label_05dea524;
            uVar3 = (__this->fields)._size;
            if ((uint)pSVar7->max_length <= uVar3) break;
            (__this->fields)._size = uVar3 + 1;
            pSVar7->m_Items[(int)uVar3] = pSVar6;
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items + (int)uVar3);
            if (index < 1) goto label_05dea4de;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        } while (0 < index);
      }
label_05dea4de:
      System_Collections_Generic_List_object___Reverse
                ((System_Collections_Generic_List_object__o *)__this,
                 (MethodInfo_395F250 *)MethodInfo_System_Collections_Generic_List_string_Reverse);
      pSVar7 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join("",pSVar7,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
label_05dea524:
  ThrowNullReferenceException();
}


// Utility.CSVCompression$$.ctor
// il2cpp: void Utility_CSVCompression___ctor (Utility_CSVCompression_o* __this, const MethodInfo* method);
// 0x5dea6d0

void Utility_CSVCompression___ctor(Utility_CSVCompression_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CSVCompression$$.cctor
// il2cpp: void Utility_CSVCompression___cctor (const MethodInfo* method);
// 0x5dea6e0

void Utility_CSVCompression___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if (Il2CppMethodInitialized_075482bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
    Il2CppMethodInitialized_075482bb = '\x01';
  }
  if ("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789" == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__ToCharArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",(MethodInfo *)0x0);
  TypeInfo_Utility_CSVCompression->static_fields->Alphabet = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CSVCompression->static_fields->Alphabet);
  return;
}


