// Type: Map.CustomLogicTransferData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/CustomLogicTransferData.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Map_CustomLogicTransferData___c__DisplayClass10_0___ctor (Map_CustomLogicTransferData___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x596c030

void Map_CustomLogicTransferData___c__DisplayClass10_0___ctor
               (Map_CustomLogicTransferData___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$<TryReceive>b__0
// il2cpp: void Map_CustomLogicTransferData___c__DisplayClass10_0___TryReceive_b__0 (Map_CustomLogicTransferData___c__DisplayClass10_0_o* __this, System_Byte_array_array* orderedMessage, int32_t __, const MethodInfo* method);
// 0x596c590

void Map_CustomLogicTransferData___c__DisplayClass10_0___TryReceive_b__0
               (Map_CustomLogicTransferData___c__DisplayClass10_0_o *__this,
               System_Byte_array_array *orderedMessage,int32_t __,MethodInfo *method)

{
  uint8_t uVar1;
  Map_CustomLogicTransferData_o *pMVar2;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  System_Collections_Generic_List_byte__o *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Text_Encoding_o *pSVar6;
  
  if (Il2CppMethodInitialized_0754598b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_0754598b = '\x01';
  }
  if (orderedMessage != (System_Byte_array_array *)0x0) {
    if ((int)orderedMessage->max_length == 0) {
label_0596c772:
      ThrowIndexOutOfRangeException();
    }
    pSVar4 = orderedMessage->m_Items[0];
    if (pSVar4 != (System_Byte_array *)0x0) {
      if ((int)pSVar4->max_length == 0) goto label_0596c772;
      uVar1 = pSVar4->m_Items[0];
      if (uVar1 == 0) {
        pMVar2 = (__this->fields).__4__this;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
        System_Collections_Generic_List_byte____ctor
                  (pSVar3,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
        if (pMVar2 == (Map_CustomLogicTransferData_o *)0x0) goto label_0596c76d;
        (pMVar2->fields)._compressed = pSVar3;
        Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._compressed);
      }
      pMVar2 = (__this->fields).__4__this;
      if (pMVar2 != (Map_CustomLogicTransferData_o *)0x0) {
        if ((orderedMessage->max_length & 0xfffffffe) == 0) goto label_0596c772;
        pSVar3 = (pMVar2->fields)._compressed;
        if (pSVar3 != (System_Collections_Generic_List_byte__o *)0x0) {
          System_Collections_Generic_List_byte___AddRange
                    (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)orderedMessage->m_Items[1],
                     (MethodInfo_51E2AF0 *)MethodInfo_System_Collections_Generic_List_byte_AddRange);
          if (uVar1 != 2) {
            return;
          }
          if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
          }
          pMVar2 = (__this->fields).__4__this;
          if ((pMVar2 != (Map_CustomLogicTransferData_o *)0x0) &&
             (pSVar3 = (pMVar2->fields)._compressed, pSVar3 != (System_Collections_Generic_List_byte__o *)0x0)
             ) {
            __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
                        TypeInfo_Utility_DataCompressors->static_fields->Brotli;
            pSVar4 = System_Collections_Generic_List_byte___ToArray
                               (pSVar3,(MethodInfo_51E4BA0 *)
                                       MethodInfo_System_Collections_Generic_List_byte_ToArray);
            if (__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                 (__this_00,pSVar4,0x1000,0xa00000,(MethodInfo *)0x0);
              (__this->fields).completedSource = pSVar5;
              Il2CppCodeGenWriteBarrier(&(__this->fields).completedSource);
              pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
              if ((uint)orderedMessage->max_length < 3) goto label_0596c772;
              if (pSVar6 != (System_Text_Encoding_o *)0x0) {
                pSVar5 = (*(pSVar6->klass->vtable)._35_GetString.methodPtr)
                                   (pSVar6,orderedMessage->m_Items[2],
                                    (pSVar6->klass->vtable)._35_GetString.method);
                (__this->fields).completedHash = pSVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields).completedHash);
                (__this->fields).completed = true;
                return;
              }
            }
          }
        }
      }
    }
  }
label_0596c76d:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$get_Messages
// il2cpp: System_Collections_Generic_IReadOnlyList_byte______o* Map_CustomLogicTransferData__get_Messages (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x596c020

System_Collections_Generic_IReadOnlyList_byte______o *
Map_CustomLogicTransferData__get_Messages(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_byte______o *)(__this->fields)._messages;
}


// Map.CustomLogicTransferData$$Prepare
// il2cpp: void Map_CustomLogicTransferData__Prepare (Map_CustomLogicTransferData_o* __this, System_String_o* source, System_String_o* hash, const MethodInfo* method);
// 0x5969f90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5969fdc: jmp 0x596a5c7

void Map_CustomLogicTransferData__Prepare
               (Map_CustomLogicTransferData_o *__this,System_String_o *source,System_String_o *hash,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_byte______o **targetAddress;
  uint uVar2;
  int iVar3;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  System_Byte_array_array_array *pSVar4;
  MethodInfo *pMVar5;
  int iVar6;
  System_Byte_array *pSVar7;
  System_Collections_Generic_List_byte__o *pSVar8;
  System_Collections_Generic_List_byte______o *pSVar9;
  System_Byte_array_array *pSVar10;
  System_Collections_Generic_List_T__o *__this_01;
  System_Byte_array *pSVar11;
  System_Text_Encoding_o *pSVar12;
  int count;
  int index;
  System_Byte_array **targetAddress_00;
  uint8_t uVar13;
  
  if (Il2CppMethodInitialized_07545987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_GetRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor_71939c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_07545987 = '\x01';
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) goto label_0596a083;
label_05969fc9:
    __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
                TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  }
  else {
    if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor != 0) goto label_05969fc9;
label_0596a083:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
    __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
                TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  }
  if (__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    pSVar7 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this_00,source,1,(MethodInfo *)0x0);
    pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
    System_Collections_Generic_List_byte____ctor_51e2100
              (pSVar8,(System_Collections_Generic_IEnumerable_T__o *)pSVar7,
               (MethodInfo_51E2100 *)MethodInfo_System_Collections_Generic_List_byte_ctor_71939c8);
    (__this->fields)._compressed = pSVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed);
    pSVar9 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar9,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    pSVar10 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
    pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
    if (pSVar10 != (System_Byte_array_array *)0x0) {
      if ((int)pSVar10->max_length != 0) {
        pSVar10->m_Items[0] = pSVar7;
        Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
        pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
        if ((pSVar10->max_length & 0xfffffffe) != 0) {
          pSVar10->m_Items[1] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1);
          pMVar5 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
          if (pSVar9 != (System_Collections_Generic_List_byte______o *)0x0) {
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar9->fields)._items;
            if (pSVar4 != (System_Byte_array_array_array *)0x0) {
              uVar2 = (pSVar9->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar9->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = pSVar10;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar10,
                           (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              targetAddress = &(__this->fields)._messages;
              (__this->fields)._messages = pSVar9;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pSVar8 = (__this->fields)._compressed;
              if (pSVar8 != (System_Collections_Generic_List_byte__o *)0x0) {
                iVar6 = 0;
                index = 0;
                do {
                  iVar3 = (pSVar8->fields)._size;
                  if (iVar3 <= index) {
                    if (iVar3 != 0) {
                      return;
                    }
                    pSVar9 = *targetAddress;
                    pSVar10 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,3);
                    pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                    if (pSVar7 != (System_Byte_array *)0x0) {
                      if ((int)pSVar7->max_length == 0) goto label_0596a5cc;
                      pSVar7->m_Items[0] = 2;
                      if (pSVar10 != (System_Byte_array_array *)0x0) {
                        if ((int)pSVar10->max_length == 0) goto label_0596a5cc;
                        pSVar10->m_Items[0] = pSVar7;
                        Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
                        pSVar7 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
                        if ((pSVar10->max_length & 0xfffffffe) == 0) goto label_0596a5cc;
                        pSVar10->m_Items[1] = pSVar7;
                        Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1);
                        pSVar12 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                        if (pSVar12 != (System_Text_Encoding_o *)0x0) {
                          pSVar7 = (*(pSVar12->klass->vtable)._18_GetBytes.methodPtr)
                                             (pSVar12,hash,(pSVar12->klass->vtable)._18_GetBytes.method);
                          if ((uint)pSVar10->max_length < 3) goto label_0596a5cc;
                          pSVar10->m_Items[2] = pSVar7;
                          Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 2);
                          pMVar5 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                          if (pSVar9 != (System_Collections_Generic_List_byte______o *)0x0) {
                            piVar1 = &(pSVar9->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar4 = (pSVar9->fields)._items;
                            if (pSVar4 != (System_Byte_array_array_array *)0x0) {
                              uVar2 = (pSVar9->fields)._size;
                              if (uVar2 < (uint)pSVar4->max_length) {
                                (pSVar9->fields)._size = uVar2 + 1;
                                pSVar4->m_Items[(int)uVar2] = pSVar10;
                                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
                                return;
                              }
                              System_Collections_Generic_List_object___AddWithResize
                                        ((System_Collections_Generic_List_object__o *)pSVar9,
                                         (Il2CppObject *)pSVar10,
                                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                              return;
                            }
                          }
                        }
                      }
                    }
                    break;
                  }
                  count = iVar6 + iVar3;
                  if (9999 < count) {
                    count = 10000;
                  }
                  __this_01 = System_Collections_Generic_List_byte___GetRange
                                        (pSVar8,index,count,
                                         (MethodInfo_51E37B0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_GetRange);
                  if (__this_01 == (System_Collections_Generic_List_T__o *)0x0) break;
                  uVar13 = (count + index == iVar3) + 1;
                  pSVar7 = System_Collections_Generic_List_byte___ToArray
                                     ((System_Collections_Generic_List_byte__o *)__this_01,
                                      (MethodInfo_51E4BA0 *)
                                      MethodInfo_System_Collections_Generic_List_byte_ToArray);
                  pSVar9 = *targetAddress;
                  if (count + index == iVar3) {
                    pSVar10 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,3);
                    pSVar11 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                    if (pSVar11 == (System_Byte_array *)0x0) break;
                    if ((int)pSVar11->max_length == 0) goto label_0596a5cc;
                    pSVar11->m_Items[0] = uVar13;
                    if (pSVar10 == (System_Byte_array_array *)0x0) break;
                    if ((int)pSVar10->max_length == 0) goto label_0596a5cc;
                    pSVar10->m_Items[0] = pSVar11;
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
                    if ((pSVar10->max_length & 0xfffffffe) == 0) goto label_0596a5cc;
                    pSVar10->m_Items[1] = pSVar7;
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items + 1);
                    pSVar12 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                    if (pSVar12 == (System_Text_Encoding_o *)0x0) break;
                    pSVar7 = (*(pSVar12->klass->vtable)._18_GetBytes.methodPtr)
                                       (pSVar12,hash,(pSVar12->klass->vtable)._18_GetBytes.method);
                    if ((uint)pSVar10->max_length < 3) goto label_0596a5cc;
                    targetAddress_00 = pSVar10->m_Items + 2;
                    pSVar10->m_Items[2] = pSVar7;
                  }
                  else {
                    pSVar10 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
                    pSVar11 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                    if (pSVar11 == (System_Byte_array *)0x0) break;
                    if ((int)pSVar11->max_length == 0) goto label_0596a5cc;
                    pSVar11->m_Items[0] = uVar13;
                    if (pSVar10 == (System_Byte_array_array *)0x0) break;
                    if ((int)pSVar10->max_length == 0) goto label_0596a5cc;
                    pSVar10->m_Items[0] = pSVar11;
                    Il2CppCodeGenWriteBarrier(pSVar10->m_Items);
                    if ((pSVar10->max_length & 0xfffffffe) == 0) goto label_0596a5cc;
                    targetAddress_00 = pSVar10->m_Items + 1;
                    pSVar10->m_Items[1] = pSVar7;
                  }
                  Il2CppCodeGenWriteBarrier(targetAddress_00);
                  pMVar5 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                  if (pSVar9 == (System_Collections_Generic_List_byte______o *)0x0) break;
                  piVar1 = &(pSVar9->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (pSVar9->fields)._items;
                  if (pSVar4 == (System_Byte_array_array_array *)0x0) break;
                  uVar2 = (pSVar9->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (pSVar9->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = pSVar10;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar9,&pSVar10->obj,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                  index = index + 10000;
                  pSVar8 = (__this->fields)._compressed;
                  iVar6 = iVar6 + -10000;
                } while (pSVar8 != (System_Collections_Generic_List_byte__o *)0x0);
              }
            }
          }
          goto label_0596a5c7;
        }
      }
label_0596a5cc:
      ThrowIndexOutOfRangeException();
    }
  }
label_0596a5c7:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$TryReceive
// il2cpp: bool Map_CustomLogicTransferData__TryReceive (Map_CustomLogicTransferData_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, System_String_o** source, System_String_o** hash, const MethodInfo* method);
// 0x596a9a0

bool Map_CustomLogicTransferData__TryReceive
               (Map_CustomLogicTransferData_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,System_String_o **source,System_String_o **hash,MethodInfo *method)

{
  Map_OrderedTransferReceiver_o *__this_00;
  Map_CustomLogicTransferData___c__DisplayClass10_0_o *__this_01;
  System_Func_T1__T2__T3__TResult__o *__this_02;
  System_Action_T1__T2__o *__this_03;
  System_Action_o *__this_04;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (Il2CppMethodInitialized_07545988 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_byte_array_array_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransferData_ResetReceiveState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransferData_ValidateMessage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_byte_array_array_int_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_CustomLogicTransferData_c__DisplayClass10_0_TryReceive_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData_c__DisplayClass10_0);
    Il2CppMethodInitialized_07545988 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData_c__DisplayClass10_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_CustomLogicTransferData___c__DisplayClass10_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).completedSource = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).completedSource);
    (__this_01->fields).completedHash = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).completedHash);
    (__this_01->fields).completed = false;
    __this_00 = (__this->fields)._receiver;
    __this_02 = (System_Func_T1__T2__T3__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_byte_array_array_int_int_bool);
    System_Func_object__int__int__bool____ctor
              (__this_02,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_CustomLogicTransferData_ValidateMessage,
               (MethodInfo_4F24B20 *)0x0);
    __this_03 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_byte_array_array_int);
    System_Action_object__int____ctor
              (__this_03,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_Map_CustomLogicTransferData_c__DisplayClass10_0_TryReceive_b__0,
               (MethodInfo_4A89C60 *)0x0);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (__this_04,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Map_CustomLogicTransferData_ResetReceiveState,(MethodInfo *)0x0);
    if (__this_00 != (Map_OrderedTransferReceiver_o *)0x0) {
      Map_OrderedTransferReceiver__TryReceive
                (__this_00,message,messageIndex,messageTotal,
                 (System_Func_byte______int__int__bool__o *)__this_02,
                 (System_Action_byte______int__o *)__this_03,__this_04,in_stack_ffffffffffffffa0);
      *source = (__this_01->fields).completedSource;
      Il2CppCodeGenWriteBarrier(source);
      *hash = (__this_01->fields).completedHash;
      Il2CppCodeGenWriteBarrier(hash);
      return (__this_01->fields).completed;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$ValidateMessage
// il2cpp: bool Map_CustomLogicTransferData__ValidateMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x596c2d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596c390: call 0x30d63b0  ; ThrowIndexOutOfRangeException()

bool Map_CustomLogicTransferData__ValidateMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  System_Byte_array *pSVar2;
  int iVar3;
  bool bVar4;
  
  if (message != (System_Byte_array_array *)0x0) {
    iVar3 = (int)message->max_length;
    if (iVar3 < 2) {
      return false;
    }
    pSVar2 = message->m_Items[0];
    if (pSVar2 != (System_Byte_array *)0x0) {
      if ((int)pSVar2->max_length != 1) {
        return false;
      }
      uVar1 = pSVar2->m_Items[0];
      if (uVar1 == 2) {
        if (messageTotal + -1 != messageIndex) {
          return false;
        }
        if (iVar3 != 3) {
          return false;
        }
        if (message->m_Items[1] != (System_Byte_array *)0x0) {
          if (10000 < (int)message->m_Items[1]->max_length) {
            return false;
          }
          if (message->m_Items[2] != (System_Byte_array *)0x0) {
            iVar3 = (int)message->m_Items[2]->max_length;
            bVar4 = SBORROW4(iVar3,0x401);
            iVar3 = iVar3 + -0x401;
            goto label_0596c386;
          }
        }
      }
      else if (uVar1 == 1) {
        if (messageIndex < 1) {
          return false;
        }
        if (messageTotal + -1 <= messageIndex) {
          return false;
        }
        if (iVar3 != 2) {
          return false;
        }
        if (message->m_Items[1] != (System_Byte_array *)0x0) {
          iVar3 = (int)message->m_Items[1]->max_length;
          bVar4 = SBORROW4(iVar3,0x2711);
          iVar3 = iVar3 + -0x2711;
label_0596c386:
          return bVar4 != iVar3 < 0;
        }
      }
      else {
        if (uVar1 != 0) {
          return false;
        }
        if (messageIndex != 0) {
          return false;
        }
        if (iVar3 != 2) {
          return false;
        }
        if (message->m_Items[1] != (System_Byte_array *)0x0) {
          return (int)message->m_Items[1]->max_length == 0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$Reset
// il2cpp: void Map_CustomLogicTransferData__Reset (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x59696e0

void Map_CustomLogicTransferData__Reset(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  Map_OrderedTransferReceiver_o *pMVar1;
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  System_Collections_Generic_List_byte__o *__this_01;
  
  pMVar1 = (__this->fields)._receiver;
  if (pMVar1 != (Map_OrderedTransferReceiver_o *)0x0) {
    if (Il2CppMethodInitialized_0754598e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
      Il2CppMethodInitialized_0754598e = '\x01';
    }
    __this_00 = (pMVar1->fields)._pending;
    if (__this_00 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
      System_Collections_Generic_SortedDictionary_int__object___Clear
                ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_4055EA0 *)
                 MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
      (pMVar1->fields)._expectedIndex = 0;
      (pMVar1->fields)._messageTotal = 0;
      (pMVar1->fields)._receivedBytes = 0;
      (pMVar1->fields)._active = false;
      if (Il2CppMethodInitialized_07545989 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
        Il2CppMethodInitialized_07545989 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
      System_Collections_Generic_List_byte____ctor
                (__this_01,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
      (__this->fields)._compressed = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$ResetReceiveState
// il2cpp: void Map_CustomLogicTransferData__ResetReceiveState (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x596c400

void Map_CustomLogicTransferData__ResetReceiveState(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_byte__o *__this_00;
  
  if (Il2CppMethodInitialized_07545989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_07545989 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            (__this_00,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  (__this->fields)._compressed = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed);
  return;
}


// Map.CustomLogicTransferData$$.ctor
// il2cpp: void Map_CustomLogicTransferData___ctor (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x596ac80

void Map_CustomLogicTransferData___ctor(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_byte__o *__this_00;
  System_Collections_Generic_List_byte______o *__this_01;
  Map_OrderedTransferReceiver_o *__this_02;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754598a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_OrderedTransferReceiver);
    Il2CppMethodInitialized_0754598a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            (__this_00,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  (__this->fields)._compressed = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
  (__this->fields)._messages = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._messages);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_OrderedTransferReceiver);
  Map_OrderedTransferReceiver___ctor(__this_02,0x80000000,method_00);
  (__this->fields)._receiver = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._receiver);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


