// Type: Map.CustomLogicTransferData
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/CustomLogicTransferData.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Map_CustomLogicTransferData___c__DisplayClass10_0___ctor (Map_CustomLogicTransferData___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_CustomLogicTransferData___c__DisplayClass10_0___ctor(Map_CustomLogicTransferData___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransferData.<>c__DisplayClass10_0$$<TryReceive>b__0
// il2cpp: void Map_CustomLogicTransferData___c__DisplayClass10_0___TryReceive_b__0 (Map_CustomLogicTransferData___c__DisplayClass10_0_o* __this, System_Byte_array_array* orderedMessage, int32_t __, const MethodInfo* method);
// 0x181e9a820

void Map_CustomLogicTransferData___c__DisplayClass10_0___TryReceive_b__0
               (Map_CustomLogicTransferData___c__DisplayClass10_0_o *__this,
               System_Byte_array_array *orderedMessage,int32_t __,MethodInfo *method)

{
  uint8_t uVar1;
  System_Byte_array *pSVar2;
  Map_CustomLogicTransferData_o *pMVar3;
  System_Collections_Generic_List_T__o *__this_00;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  System_Collections_Generic_List_byte__o *pSVar4;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *data;
  System_String_o *pSVar5;
  System_Text_Encoding_o *pSVar6;
  
  if (Il2CppMethodInitialized_184344ffb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_184344ffb = '\x01';
  }
  if (orderedMessage != (System_Byte_array_array *)0x0) {
    if ((int)orderedMessage->max_length == 0) {
label_181e9aa1e:
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = orderedMessage->m_Items[0];
    if (pSVar2 != (System_Byte_array *)0x0) {
      if ((int)pSVar2->max_length == 0) goto label_181e9aa1e;
      uVar1 = pSVar2->m_Items[0];
      if (uVar1 == '\0') {
        pMVar3 = (__this->fields).__4__this;
        pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
        System_Collections_Generic_List_byte____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)pSVar4,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
        if (pMVar3 == (Map_CustomLogicTransferData_o *)0x0) goto label_181e9aa18;
        (pMVar3->fields)._compressed = pSVar4;
        Il2CppCodeGenWriteBarrier(&(pMVar3->fields)._compressed,pSVar4);
      }
      pMVar3 = (__this->fields).__4__this;
      if (pMVar3 != (Map_CustomLogicTransferData_o *)0x0) {
        if ((uint)orderedMessage->max_length < 2) goto label_181e9aa1e;
        pSVar4 = (pMVar3->fields)._compressed;
        if (pSVar4 != (System_Collections_Generic_List_byte__o *)0x0) {
          System_Collections_Generic_List_byte___AddRange
                    (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)orderedMessage->m_Items[1],
                     (MethodInfo_1856E30 *)MethodInfo_System_Collections_Generic_List_byte_AddRange);
          if (uVar1 != '\x02') {
            return;
          }
          if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
          }
          pMVar3 = (__this->fields).__4__this;
          if ((pMVar3 != (Map_CustomLogicTransferData_o *)0x0) &&
             (__this_00 = (System_Collections_Generic_List_T__o *)(pMVar3->fields)._compressed,
             __this_00 != (System_Collections_Generic_List_T__o *)0x0)) {
            __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)
                        TypeInfo_Utility_DataCompressors->static_fields->Brotli;
            data = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                             (__this_00,
                              (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_byte_ToArray);
            if (__this_01 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
              pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                 (__this_01,(System_Byte_array *)data,0x1000,0xa00000,(MethodInfo *)0x0);
              (__this->fields).completedSource = pSVar5;
              Il2CppCodeGenWriteBarrier(&(__this->fields).completedSource,pSVar5);
              pSVar6 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
              if ((uint)orderedMessage->max_length < 3) goto label_181e9aa1e;
              if (pSVar6 != (System_Text_Encoding_o *)0x0) {
                pSVar5 = (*(pSVar6->klass->vtable)._34_GetString.methodPtr)
                                   (pSVar6,orderedMessage->m_Items[2],
                                    (pSVar6->klass->vtable)._34_GetString.method);
                (__this->fields).completedHash = pSVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields).completedHash,pSVar5);
                (__this->fields).completed = true;
                return;
              }
            }
          }
        }
      }
    }
  }
label_181e9aa18:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$get_Messages
// il2cpp: System_Collections_Generic_IReadOnlyList_byte______o* Map_CustomLogicTransferData__get_Messages (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x180573e90

System_Collections_Generic_IReadOnlyList_byte______o*
Map_CustomLogicTransferData__get_Messages(Map_CustomLogicTransferData_o* __this, MethodInfo* method)

{
  return (__this->fields)._messages;
}


// Map.CustomLogicTransferData$$Prepare
// il2cpp: void Map_CustomLogicTransferData__Prepare (Map_CustomLogicTransferData_o* __this, System_String_o* source, System_String_o* hash, const MethodInfo* method);
// 0x181e875a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e877ed: nop dword ptr [rax]
// asm:   0x181e879b8: jmp 0x181e877f0

void Map_CustomLogicTransferData__Prepare
               (Map_CustomLogicTransferData_o *__this,System_String_o *source,System_String_o *hash,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  System_Byte_array_array_array *pSVar4;
  MethodInfo *pMVar5;
  System_Byte_array *pSVar6;
  System_Collections_Generic_List_byte__o *pSVar7;
  System_Collections_Generic_List_byte______o *pSVar8;
  System_Byte_array_array *pSVar9;
  System_Collections_Generic_List_T__o *pSVar10;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  System_Text_Encoding_o *pSVar13;
  Il2CppObject *targetAddress;
  int iVar14;
  int index;
  int32_t count;
  
  if (Il2CppMethodInitialized_184344ff7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_GetRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor_408ae18);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_184344ff7 = '\x01';
  }
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)
              TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  if (__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this_00,source,1,(MethodInfo *)0x0);
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
    System_Collections_Generic_List_byte____ctor_185f620
              (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,
               (MethodInfo_185F620 *)MethodInfo_System_Collections_Generic_List_byte_ctor_408ae18);
    (__this->fields)._compressed = pSVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed,pSVar7);
    pSVar8 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    pSVar9 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
    pSVar6 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
    if (pSVar9 != (System_Byte_array_array *)0x0) {
      if ((int)pSVar9->max_length != 0) {
        pSVar9->m_Items[0] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar6);
        pSVar6 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
        if (1 < (uint)pSVar9->max_length) {
          pSVar9->m_Items[1] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar6);
          pMVar5 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
          if (pSVar8 != (System_Collections_Generic_List_byte______o *)0x0) {
            piVar1 = &(pSVar8->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar8->fields)._items;
            if (pSVar4 != (System_Byte_array_array_array *)0x0) {
              uVar2 = (pSVar8->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar8->fields)._size = uVar2 + 1;
                if ((uint)pSVar4->max_length <= uVar2) goto label_181e87b16;
                pSVar4->m_Items[(int)uVar2] = pSVar9;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar9);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar9,
                           (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              (__this->fields)._messages = pSVar8;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._messages,pSVar8);
              index = 0;
              pSVar7 = (__this->fields)._compressed;
              while (pSVar7 != (System_Collections_Generic_List_byte__o *)0x0) {
                pSVar10 = (System_Collections_Generic_List_T__o *)(__this->fields)._compressed;
                if ((pSVar7->fields)._size <= index) {
                  if (pSVar10 == (System_Collections_Generic_List_T__o *)0x0) break;
                  if ((pSVar10->fields)._size == 0) {
                    pSVar8 = (__this->fields)._messages;
                    pSVar9 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,3);
                    pSVar6 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                    if (pSVar6 == (System_Byte_array *)0x0) break;
                    if ((int)pSVar6->max_length == 0) goto label_181e87b16;
                    pSVar6->m_Items[0] = '\x02';
                    if (pSVar9 == (System_Byte_array_array *)0x0) break;
                    if ((int)pSVar9->max_length == 0) goto label_181e87b16;
                    pSVar9->m_Items[0] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar6);
                    pSVar6 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,0);
                    if ((uint)pSVar9->max_length < 2) goto label_181e87b16;
                    pSVar9->m_Items[1] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar6);
                    pSVar13 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                    if (pSVar13 == (System_Text_Encoding_o *)0x0) break;
                    pSVar6 = (*(pSVar13->klass->vtable)._18_GetBytes.methodPtr)
                                       (pSVar13,hash,(pSVar13->klass->vtable)._18_GetBytes.method);
                    if ((uint)pSVar9->max_length < 3) goto label_181e87b16;
                    pSVar9->m_Items[2] = pSVar6;
                    Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar6);
                    pMVar5 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                    if (pSVar8 == (System_Collections_Generic_List_byte______o *)0x0) break;
                    piVar1 = &(pSVar8->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (pSVar8->fields)._items;
                    if (pSVar4 == (System_Byte_array_array_array *)0x0) break;
                    uVar2 = (pSVar8->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (pSVar8->fields)._size = uVar2 + 1;
                      if ((uint)pSVar4->max_length <= uVar2) goto label_181e87b16;
                      pSVar4->m_Items[(int)uVar2] = pSVar9;
                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pSVar9);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar9,
                                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
                    }
                  }
                  return;
                }
                if (pSVar10 == (System_Collections_Generic_List_T__o *)0x0) break;
                iVar3 = (pSVar10->fields)._size;
                count = iVar3 - index;
                iVar14 = iVar3;
                if (10000 < count) {
                  count = 10000;
                  iVar14 = index + 10000;
                }
                pSVar10 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetRange
                                    (pSVar10,index,count,
                                     (MethodInfo_91F2C0 *)
                                     MethodInfo_System_Collections_Generic_List_byte_GetRange);
                if (pSVar10 == (System_Collections_Generic_List_T__o *)0x0) break;
                value = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                  (pSVar10,(MethodInfo_929FE0 *)
                                           MethodInfo_System_Collections_Generic_List_byte_ToArray);
                pSVar8 = (__this->fields)._messages;
                if (iVar14 == iVar3) {
                  pIVar11 = SZArrayNew(TypeInfo_byte_array_array,3);
                  pIVar12 = (Il2CppClass *)SZArrayNew(TypeInfo_byte_array,1);
                  if (pIVar12 == (Il2CppClass *)0x0) break;
                  if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_181e87b16;
                  *(undefined1 *)&(pIVar12->_1).byval_arg.data = 2;
                  if (pIVar11 == (Il2CppObject *)0x0) break;
                  if (*(int *)&pIVar11[1].monitor == 0) goto label_181e87b16;
                  pIVar11[2].klass = pIVar12;
                  Il2CppCodeGenWriteBarrier(&pIVar11[2].klass,pIVar12);
                  if (*(uint *)&pIVar11[1].monitor < 2) goto label_181e87b16;
                  pIVar11[2].monitor = value;
                  Il2CppCodeGenWriteBarrier(&pIVar11[2].monitor,value);
                  pSVar13 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                  if (pSVar13 == (System_Text_Encoding_o *)0x0) break;
                  value = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                           *)(*(pSVar13->klass->vtable)._18_GetBytes.methodPtr)
                                       (pSVar13,hash,(pSVar13->klass->vtable)._18_GetBytes.method);
                  if (*(uint *)&pIVar11[1].monitor < 3) goto label_181e87b16;
                  pIVar11[3].klass = (Il2CppClass *)value;
                  targetAddress = pIVar11 + 3;
                }
                else {
                  pIVar11 = SZArrayNew(TypeInfo_byte_array_array,2);
                  pIVar12 = (Il2CppClass *)SZArrayNew(TypeInfo_byte_array,1);
                  if (pIVar12 == (Il2CppClass *)0x0) break;
                  if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_181e87b16;
                  *(undefined1 *)&(pIVar12->_1).byval_arg.data = 1;
                  if (pIVar11 == (Il2CppObject *)0x0) break;
                  if (*(int *)&pIVar11[1].monitor == 0) goto label_181e87b16;
                  pIVar11[2].klass = pIVar12;
                  Il2CppCodeGenWriteBarrier(&pIVar11[2].klass,pIVar12);
                  if (*(uint *)&pIVar11[1].monitor < 2) goto label_181e87b16;
                  pIVar11[2].monitor = value;
                  targetAddress = (Il2CppObject *)&pIVar11[2].monitor;
                }
                Il2CppCodeGenWriteBarrier(&targetAddress->klass,value);
                if (pSVar8 == (System_Collections_Generic_List_byte______o *)0x0) break;
                il2cpp_runtime_helper_180012890(pSVar8,pIVar11,MethodInfo_System_Collections_Generic_List_byte_array_array_Add);
                index = index + 10000;
                pSVar7 = (__this->fields)._compressed;
              }
            }
          }
          goto label_181e87b1c;
        }
      }
label_181e87b16:
      ThrowIndexOutOfRangeException();
    }
  }
label_181e87b1c:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$TryReceive
// il2cpp: bool Map_CustomLogicTransferData__TryReceive (Map_CustomLogicTransferData_o* __this, System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, System_String_o** source, System_String_o** hash, const MethodInfo* method);
// 0x181e87c60

bool Map_CustomLogicTransferData__TryReceive
               (Map_CustomLogicTransferData_o *__this,System_Byte_array_array *message,int32_t messageIndex,
               int32_t messageTotal,System_String_o **source,System_String_o **hash,MethodInfo *method)

{
  Map_OrderedTransferReceiver_o *__this_00;
  System_String_o *pSVar1;
  Map_CustomLogicTransferData___c__DisplayClass10_0_o *object;
  System_Func_T1__T2__T3__TResult__o *__this_01;
  System_Action_T1__T2__o *__this_02;
  System_Action_o *__this_03;
  
  if (Il2CppMethodInitialized_184344ff8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_byte_array_array_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransferData_ResetReceiveState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransferData_ValidateMessage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_byte_array_array_int_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_CustomLogicTransferData_c__DisplayClass10_0_TryReceive_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData_c__DisplayClass10_0);
    Il2CppMethodInitialized_184344ff8 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_CustomLogicTransferData___c__DisplayClass10_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).completedSource = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(object->fields).completedSource,(void *)0x0);
    (object->fields).completedHash = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(object->fields).completedHash,(void *)0x0);
    (object->fields).completed = false;
    __this_00 = (__this->fields)._receiver;
    __this_01 = (System_Func_T1__T2__T3__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_byte_array_array_int_int_bool);
    System_Func_object__int__int__bool____ctor
              (__this_01,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_CustomLogicTransferData_ValidateMessage,
               (MethodInfo_172C890 *)0x0);
    __this_02 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_byte_array_array_int);
    System_Action_object__int____ctor
              (__this_02,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Map_CustomLogicTransferData_c__DisplayClass10_0_TryReceive_b__0,
               (MethodInfo_1467620 *)0x0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Map_CustomLogicTransferData_ResetReceiveState,(MethodInfo *)0x0);
    if (__this_00 != (Map_OrderedTransferReceiver_o *)0x0) {
      Map_OrderedTransferReceiver__TryReceive
                (__this_00,message,messageIndex,messageTotal,
                 (System_Func_byte______int__int__bool__o *)__this_01,
                 (System_Action_byte______int__o *)__this_02,__this_03,(MethodInfo *)0x0);
      pSVar1 = (object->fields).completedSource;
      *source = pSVar1;
      Il2CppCodeGenWriteBarrier(source,pSVar1);
      pSVar1 = (object->fields).completedHash;
      *hash = pSVar1;
      Il2CppCodeGenWriteBarrier(hash,pSVar1);
      return (object->fields).completed;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$ValidateMessage
// il2cpp: bool Map_CustomLogicTransferData__ValidateMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x181e87e50

bool Map_CustomLogicTransferData__ValidateMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  System_Byte_array *pSVar2;
  
  if (message != (System_Byte_array_array *)0x0) {
    if ((int)message->max_length < 2) {
      return false;
    }
    if ((int)message->max_length == 0) {
label_181e87f33:
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = message->m_Items[0];
    if (pSVar2 != (System_Byte_array *)0x0) {
      if ((int)pSVar2->max_length == 1) {
        if ((int)pSVar2->max_length == 0) goto label_181e87f33;
        uVar1 = pSVar2->m_Items[0];
        if (uVar1 == '\0') {
          if ((messageIndex == 0) && ((int)message->max_length == 2)) {
            if (message->m_Items[1] != (System_Byte_array *)0x0) {
              return (int)message->m_Items[1]->max_length == 0;
            }
            goto label_181e87f2d;
          }
        }
        else if (uVar1 == '\x01') {
          if (((0 < messageIndex) && (messageIndex < messageTotal + -1)) && ((int)message->max_length == 2)) {
            if (message->m_Items[1] != (System_Byte_array *)0x0) {
              return (int)message->m_Items[1]->max_length < 0x2711;
            }
            goto label_181e87f2d;
          }
        }
        else if (((uVar1 == '\x02') && (messageIndex == messageTotal + -1)) && ((int)message->max_length == 3)
                ) {
          if (message->m_Items[1] != (System_Byte_array *)0x0) {
            if (10000 < (int)message->m_Items[1]->max_length) {
              return false;
            }
            if (message->m_Items[2] != (System_Byte_array *)0x0) {
              return (int)message->m_Items[2]->max_length < 0x401;
            }
          }
          goto label_181e87f2d;
        }
      }
      return false;
    }
  }
label_181e87f2d:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$Reset
// il2cpp: void Map_CustomLogicTransferData__Reset (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x181e87ba0

void Map_CustomLogicTransferData__Reset(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  Map_OrderedTransferReceiver_o *pMVar1;
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_00;
  System_Collections_Generic_List_byte__o *__this_01;
  bool bVar2;
  
  pMVar1 = (__this->fields)._receiver;
  if (pMVar1 != (Map_OrderedTransferReceiver_o *)0x0) {
    if (Il2CppMethodInitialized_184344ffe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
      Il2CppMethodInitialized_184344ffe = '\x01';
    }
    __this_00 = (pMVar1->fields)._pending;
    if (__this_00 != (System_Collections_Generic_SortedDictionary_int__byte______o *)0x0) {
      System_Collections_Generic_SortedDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Clear
                ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_C99820 *)
                 MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_Clear);
      bVar2 = Il2CppMethodInitialized_184344ff9 == '\0';
      (pMVar1->fields)._expectedIndex = 0;
      (pMVar1->fields)._messageTotal = 0;
      (pMVar1->fields)._receivedBytes = 0;
      (pMVar1->fields)._active = false;
      if (bVar2) {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
        Il2CppMethodInitialized_184344ff9 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
      System_Collections_Generic_List_byte____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
      (__this->fields)._compressed = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed,__this_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransferData$$ResetReceiveState
// il2cpp: void Map_CustomLogicTransferData__ResetReceiveState (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x181e87b30

void Map_CustomLogicTransferData__ResetReceiveState(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_byte__o *__this_00;
  
  if (Il2CppMethodInitialized_184344ff9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    Il2CppMethodInitialized_184344ff9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  (__this->fields)._compressed = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed,__this_00);
  return;
}


// Map.CustomLogicTransferData$$.ctor
// il2cpp: void Map_CustomLogicTransferData___ctor (Map_CustomLogicTransferData_o* __this, const MethodInfo* method);
// 0x181e87f40

void Map_CustomLogicTransferData___ctor(Map_CustomLogicTransferData_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_byte__o *__this_00;
  System_Collections_Generic_List_byte______o *__this_01;
  Map_OrderedTransferReceiver_o *__this_02;
  System_Collections_Generic_SortedDictionary_int__byte______o *__this_03;
  int64_t iVar1;
  
  if (Il2CppMethodInitialized_184344ffa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_OrderedTransferReceiver);
    Il2CppMethodInitialized_184344ffa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  (__this->fields)._compressed = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._compressed,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
  (__this->fields)._messages = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._messages,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_OrderedTransferReceiver);
  if (Il2CppMethodInitialized_184344ffc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
    Il2CppMethodInitialized_184344ffc = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array);
  System_Collections_Generic_SortedDictionary_int__object____ctor
            ((System_Collections_Generic_SortedDictionary_TKey__TValue__o *)__this_03,
             (MethodInfo_C9CFF0 *)
             MethodInfo_System_Collections_Generic_SortedDictionary_int_byte_array_array_ctor);
  (__this_02->fields)._pending = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields)._pending,__this_03);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields)._maxTransferBytes = 0x80000000;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_1b2c330(0x7fffffff,0x346de,(MethodInfo *)0x0);
  (__this_02->fields)._maxTransferMessages = (int32_t)iVar1;
  (__this->fields)._receiver = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._receiver,__this_02);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


