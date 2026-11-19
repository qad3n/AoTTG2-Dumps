// Type: Map.MapTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/MapTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTransfer.cs
// --------------------------------

// Map.MapTransfer.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Map_MapTransfer___c__DisplayClass22_0___ctor (Map_MapTransfer___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x59a7870

void Map_MapTransfer___c__DisplayClass22_0___ctor
               (Map_MapTransfer___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer.<>c__DisplayClass22_0$$<OnTransferMapRPC>b__0
// il2cpp: void Map_MapTransfer___c__DisplayClass22_0___OnTransferMapRPC_b__0 (Map_MapTransfer___c__DisplayClass22_0_o* __this, System_Byte_array_array* message, int32_t messageIndex, const MethodInfo* method);
// 0x59a8430
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a8474: mov rdi, rbx
// asm:   0x59a8477: mov esi, r14d
// asm:   0x59a847a: mov edx, ebp
// asm:   0x59a847c: pop rbx
// asm:   0x59a847d: pop r14
// asm:   0x59a847f: pop rbp
// asm:   0x59a8480: jmp 0x59a7a00  ; Map_MapTransfer__ProcessMessage()

void Map_MapTransfer___c__DisplayClass22_0___OnTransferMapRPC_b__0
               (Map_MapTransfer___c__DisplayClass22_0_o *__this,System_Byte_array_array *message,
               int32_t messageIndex,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int32_t deltaRows;
  int iVar4;
  UI_LoadingMenu_o *__this_00;
  Map_MapManager_StaticFields *pMVar5;
  Map_MapScriptOptions_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Settings_WeatherSet_o *pSVar8;
  Map_MapScriptObjects_o *__this_01;
  Photon_Realtime_Player_o *player;
  Map_MapScript_o *pMVar9;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_Collections_Generic_List_byte__o *pSVar12;
  Map_MapTransfer_StaticFields *pMVar13;
  System_Byte_array *pSVar14;
  System_Text_Encoding_o *pSVar15;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this_02;
  MethodInfo *pMVar16;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar17;
  
  if (Il2CppMethodInitialized_07545ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545ac9 = '\x01';
  }
  iVar4 = (__this->fields).msgTotal;
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  if (Il2CppMethodInitialized_07545ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545ac5 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_059a7b08;
label_059a7a34:
    __this_00 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_059a7a34;
label_059a7b08:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  }
  if ((__this_00 == (UI_LoadingMenu_o *)0x0) ||
     (UI_LoadingMenu__UpdateLoading
                (__this_00,((float)messageIndex / (float)iVar4) * 0.5,false,false,(MethodInfo *)0x0),
     message == (System_Byte_array_array *)0x0)) goto label_059a82d9;
  if ((int)message->max_length == 0) goto label_059a82de;
  pSVar14 = message->m_Items[0];
  if (pSVar14 == (System_Byte_array *)0x0) goto label_059a82d9;
  if ((int)pSVar14->max_length == 0) goto label_059a82de;
  uVar1 = pSVar14->m_Items[0];
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    uVar2 = pMVar13->MsgMapStart;
  }
  else {
    pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    uVar2 = pMVar13->MsgMapStart;
  }
  if (uVar1 == uVar2) {
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    }
    pMVar13->MapHash = pSVar10;
    Il2CppCodeGenWriteBarrier(&pMVar13->MapHash);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pMVar16 = (MethodInfo *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash;
    PhotonExtensions__SetCustomProperty
              (player,(System_String_o *)pMVar16,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo *)0x0);
    pMVar9 = (Map_MapScript_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
    Map_MapScript___ctor(pMVar9,pMVar16);
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar5 = TypeInfo_Map_MapManager->static_fields;
    pMVar5->MapScript = pMVar9;
    Il2CppCodeGenWriteBarrier(&pMVar5->MapScript);
    pMVar9 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar9 != (Map_MapScript_o *)0x0) {
      pMVar6 = (pMVar9->fields).Options;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
      pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if ((pUVar17 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
         (pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              (pUVar17,message->m_Items[1],0x1000,0xa00000,(MethodInfo *)0x0),
         pMVar6 != (Map_MapScriptOptions_o *)0x0)) {
        (*(pMVar6->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar6,pSVar10,(pMVar6->klass->vtable)._9_Deserialize.method);
        pMVar9 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar9 != (Map_MapScript_o *)0x0) {
          if ((uint)message->max_length < 3) goto label_059a82de;
          pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if (pUVar17 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pMVar7 = (pMVar9->fields).CustomAssets;
            pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                (pUVar17,message->m_Items[2],0x1000,0xa00000,(MethodInfo *)0x0);
            if (pMVar7 != (Map_MapScriptCustomAssets_o *)0x0) {
              (*(pMVar7->klass->vtable)._9_Deserialize.methodPtr)
                        (pMVar7,pSVar10,(pMVar7->klass->vtable)._9_Deserialize.method);
              pMVar9 = TypeInfo_Map_MapManager->static_fields->MapScript;
              if (pMVar9 != (Map_MapScript_o *)0x0) {
                if ((message->max_length & 0xfffffffc) == 0) goto label_059a82de;
                pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                          TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                if (pUVar17 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                  pSVar8 = (pMVar9->fields).Weather;
                  pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                      (pUVar17,message->m_Items[3],0x1000,0xa00000,(MethodInfo *)0x0);
                  if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                    (*(pSVar8->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                              (pSVar8,pSVar10,(pSVar8->klass->vtable)._9_DeserializeFromJsonString.method);
                    if ((uint)message->max_length < 5) goto label_059a82de;
                    pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                              TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                    if (pUVar17 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                      pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          (pUVar17,message->m_Items[4],0x1000,0xa00000,(MethodInfo *)0x0);
                      pSVar11 = SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
                      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar13->_mapScriptSymbolTable = pSVar11;
                      Il2CppCodeGenWriteBarrier(&pMVar13->_mapScriptSymbolTable);
                      pSVar12 = (System_Collections_Generic_List_byte__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                (pSVar12,(MethodInfo_51E1FA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ctor);
                      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar13->_mapScriptCompressed = pSVar12;
                      Il2CppCodeGenWriteBarrier(&pMVar13->_mapScriptCompressed);
                      pSVar12 = (System_Collections_Generic_List_byte__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                (pSVar12,(MethodInfo_51E1FA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ctor);
                      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar13->_logicScriptCompressed = pSVar12;
                      Il2CppCodeGenWriteBarrier(&pMVar13->_logicScriptCompressed);
                      TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = false;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_059a82d9;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    uVar3 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
    uVar2 = pMVar13->MsgMapBody;
  }
  else {
    uVar3 = (((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor;
    uVar2 = pMVar13->MsgMapBody;
  }
  if (uVar1 == uVar2) {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    }
    if (pMVar13->_receivingLogic != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_02 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
      pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Map data received after map logic data.");
      System_InvalidOperationException___ctor_54b9a80(__this_02,pSVar10,(MethodInfo *)0x0);
      pMVar16 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_ProcessMessage);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar16);
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    }
    if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
    pSVar12 = pMVar13->_mapScriptCompressed;
  }
  else {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
      uVar3 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
      uVar2 = pMVar13->MsgLogicBody;
    }
    else {
      uVar3 = (((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor;
      uVar2 = pMVar13->MsgLogicBody;
    }
    if (uVar1 != uVar2) {
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
      }
      if (uVar1 != pMVar13->MsgMapEnd) {
        return;
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
      }
      pSVar12 = pMVar13->_mapScriptCompressed;
      if (pSVar12 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
      if (0 < (pSVar12->fields)._size) {
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pSVar12 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
          if (pSVar12 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
        }
        pSVar14 = System_Collections_Generic_List_byte___ToArray
                            (pSVar12,(MethodInfo_51E4BA0 *)
                                     MethodInfo_System_Collections_Generic_List_byte_ToArray);
        pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable;
        deltaRows = TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows;
        if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
        }
        pMVar16 = (MethodInfo *)&g_data_0000003b;
        pSVar10 = Utility_CSVCompression__Decompress(pSVar14,pSVar11,deltaRows,0x3b,0x2c,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar9 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if ((pMVar9 == (Map_MapScript_o *)0x0) ||
           (__this_01 = (pMVar9->fields).Objects, __this_01 == (Map_MapScriptObjects_o *)0x0))
        goto label_059a82d9;
        Map_MapScriptObjects__DeserializeSkippingErrors(__this_01,pSVar10,(pMVar9->fields).Errors,pMVar16);
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      pSVar12 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
      if (pSVar12 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
      if (0 < (pSVar12->fields)._size) {
        if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
          pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) goto label_059a81b7;
label_059a8180:
          pSVar12 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
        }
        else {
          pUVar17 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor != 0) goto label_059a8180;
label_059a81b7:
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pSVar12 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
        }
        if ((pSVar12 == (System_Collections_Generic_List_byte__o *)0x0) ||
           (pSVar14 = System_Collections_Generic_List_byte___ToArray
                                (pSVar12,(MethodInfo_51E4BA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ToArray),
           pUVar17 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) goto label_059a82d9;
        pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                            (pUVar17,pSVar14,0x1000,0xa00000,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar9 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar9 == (Map_MapScript_o *)0x0) goto label_059a82d9;
        (pMVar9->fields).Logic = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pMVar9->fields).Logic);
      }
      pSVar15 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ((message->max_length & 0xfffffffe) == 0) {
label_059a82de:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar15 != (System_Text_Encoding_o *)0x0) {
        pMVar16 = (MethodInfo *)
                  (*(pSVar15->klass->vtable)._35_GetString.methodPtr)
                            (pSVar15,message->m_Items[1],(pSVar15->klass->vtable)._35_GetString.method);
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
        pMVar13->MapHash = (System_String_o *)pMVar16;
        Il2CppCodeGenWriteBarrier(&pMVar13->MapHash);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        Map_MapManager__LoadMap(true,pMVar16);
        return;
      }
      goto label_059a82d9;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar13 = TypeInfo_Map_MapTransfer->static_fields;
    }
    pMVar13->_receivingLogic = true;
    if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
    pSVar12 = pMVar13->_logicScriptCompressed;
  }
  if (pSVar12 != (System_Collections_Generic_List_byte__o *)0x0) {
    System_Collections_Generic_List_byte___AddRange
              (pSVar12,(System_Collections_Generic_IEnumerable_T__o *)message->m_Items[1],
               (MethodInfo_51E2AF0 *)MethodInfo_System_Collections_Generic_List_byte_AddRange);
    return;
  }
label_059a82d9:
  ThrowNullReferenceException();
}


// Map.MapTransfer.<TransferMapData>d__26$$.ctor
// il2cpp: void Map_MapTransfer__TransferMapData_d__26___ctor (Map_MapTransfer__TransferMapData_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59a8330

void Map_MapTransfer__TransferMapData_d__26___ctor
               (Map_MapTransfer__TransferMapData_d__26_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapTransfer.<TransferMapData>d__26$$System.IDisposable.Dispose
// il2cpp: void Map_MapTransfer__TransferMapData_d__26__System_IDisposable_Dispose (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x59a8490

void Map_MapTransfer__TransferMapData_d__26__System_IDisposable_Dispose
               (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  return;
}


// Map.MapTransfer.<TransferMapData>d__26$$MoveNext
// il2cpp: bool Map_MapTransfer__TransferMapData_d__26__MoveNext (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x59a84a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a854e: jmp 0x59a8578

bool Map_MapTransfer__TransferMapData_d__26__MoveNext
               (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_byte______o *pSVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  UnityEngine_WaitForSeconds_o *__this_00;
  int iVar6;
  int32_t iStack_40;
  int32_t iStack_3c;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (Il2CppMethodInitialized_07545aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferMapRPC");
    Il2CppMethodInitialized_07545aca = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  if (iVar6 == 1) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar6;
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (iVar6 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar6 = 0;
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  pSVar2 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
  if (pSVar2 != (System_Collections_Generic_List_byte______o *)0x0) {
    if ((pSVar2->fields)._size <= iVar6) {
      return false;
    }
    pPVar3 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    pSVar2 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
    if ((pSVar2 != (System_Collections_Generic_List_byte______o *)0x0) &&
       (pIVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,(__this->fields)._i_5__2,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_byte_array_array_get_Item),
       parameters != (System_Object_array *)0x0)) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
label_059a879e:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      pPStack_38 = pPVar3;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        iStack_3c = (__this->fields)._i_5__2;
        pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_059a879e;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          pSVar2 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
          if (pSVar2 != (System_Collections_Generic_List_byte______o *)0x0) {
            iStack_40 = (pSVar2->fields)._size;
            pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_40);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) goto label_059a879e;
            pPVar3 = pPStack_38;
            if ((uint)parameters->max_length < 3) goto label_059a8799;
            parameters->m_Items[2] = pIVar4;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC_56e5850
                        (pPVar3,"TransferMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_00,0.25,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
              (__this->fields).__1__state = 1;
              return true;
            }
          }
          goto label_059a8794;
        }
      }
label_059a8799:
      ThrowIndexOutOfRangeException();
    }
  }
label_059a8794:
  ThrowNullReferenceException();
}


// Map.MapTransfer.<TransferMapData>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x59a87b0

Il2CppObject *
Map_MapTransfer__TransferMapData_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer.<TransferMapData>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_Reset (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x59a87c0

void Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_Reset
               (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Map_MapTransfer_TransferMapData_d__26_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.MapTransfer.<TransferMapData>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_get_Current (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x59a8800

Il2CppObject *
Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_get_Current
          (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer$$Init
// il2cpp: void Map_MapTransfer__Init (const MethodInfo* method);
// 0x599f140

void Map_MapTransfer__Init(MethodInfo *method)

{
  Map_MapTransfer_StaticFields *pMVar1;
  Map_MapTransfer_o *pMVar2;
  Events_OnPreLoadScene_o *__this;
  
  if (Il2CppMethodInitialized_07545abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapTransfer);
    Il2CppMethodInitialized_07545abd = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  pMVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Map_MapTransfer->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapTransfer);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_instance = pMVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapTransfer_OnPreLoadScene,(MethodInfo *)0x0)
  ;
  Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$OnPreLoadScene
// il2cpp: void Map_MapTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x59a65f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a661d: jmp 0x59a6692

void Map_MapTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  Map_MapTransfer_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545abe = '\x01';
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    __this = TypeInfo_Map_MapTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_MapTransfer_o **)((long)((Il2CppClass *)TypeInfo_Map_MapTransfer)->static_fields + 0x18);
  }
  if (__this != (Map_MapTransfer_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)TypeInfo_Map_MapTransfer->static_fields->_receiver;
    if (method_00 != (MethodInfo *)0x0) {
      Map_OrderedTransferReceiver__Reset((Map_OrderedTransferReceiver_o *)method_00,(MethodInfo *)0x0);
      Map_MapTransfer__ResetReceiveState(method_00);
      TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapTransfer$$Start
// il2cpp: void Map_MapTransfer__Start (System_String_o* mapName, const MethodInfo* method);
// 0x59a0810
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a0853: jmp 0x59a0b2a

void Map_MapTransfer__Start(System_String_o *mapName,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Map_MapScript_o *pMVar3;
  MethodInfo *hash;
  Map_ContentTransferChangeTracker_o *__this;
  Map_MapTransfer_StaticFields *pMVar4;
  Photon_Realtime_Player_o *pPVar5;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar6;
  Photon_Realtime_Player_array *pPVar7;
  ulong uVar8;
  System_String_o *a;
  System_Object_array *parameters;
  int iVar9;
  ulong uVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedMapRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545abf = '\x01';
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    pMVar3 = TypeInfo_Map_MapManager->static_fields->MapScript;
  }
  else {
    pMVar3 = *(Map_MapScript_o **)((long)((Il2CppClass *)TypeInfo_Map_MapManager)->static_fields + 8);
  }
  if (pMVar3 != (Map_MapScript_o *)0x0) {
    hash = (MethodInfo *)(pMVar3->fields).MapHash;
    if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    __this = TypeInfo_Map_MapTransfer->static_fields->_changeTracker;
    if (__this != (Map_ContentTransferChangeTracker_o *)0x0) {
      bVar6 = Map_ContentTransferChangeTracker__Update
                        (__this,mapName,(System_String_o *)hash,(MethodInfo *)0x0);
      pMVar4 = TypeInfo_Map_MapTransfer->static_fields;
      pMVar4->MapHash = (System_String_o *)hash;
      method_00 = (MethodInfo *)&pMVar4->MapHash;
      pMVar11 = hash;
      Il2CppCodeGenWriteBarrier((void **)method_00);
      Map_MapTransfer__CreateTransferData(method_00);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar7 != (Photon_Realtime_Player_array *)0x0) {
        iVar9 = (int)pPVar7->max_length;
        uVar8 = pPVar7->max_length & 0xffffffff;
        if (bVar6) {
          if (0 < iVar9) {
            uVar10 = 0;
            do {
              if (uVar8 <= uVar10) {
label_059a0b25:
                ThrowIndexOutOfRangeException();
              }
              pPVar5 = pPVar7->m_Items[uVar10];
              if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
              }
              Map_MapTransfer__Transfer(pPVar5,pMVar11);
              uVar10 = uVar10 + 1;
              uVar2 = (uint)pPVar7->max_length;
              uVar8 = (ulong)uVar2;
            } while ((long)uVar10 < (long)(int)uVar2);
          }
        }
        else if (0 < iVar9) {
          uVar10 = 0;
          do {
            if (uVar8 <= uVar10) goto label_059a0b25;
            pPVar5 = pPVar7->m_Items[uVar10];
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            a = PhotonExtensions__GetStringProperty
                          (pPVar5,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,
                           "",(MethodInfo *)0x0);
            pMVar11 = hash;
            bVar6 = System_String__op_Inequality(a,(System_String_o *)hash,(MethodInfo *)0x0);
            if (bVar6) {
              if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
              }
              Map_MapTransfer__Transfer(pPVar5,pMVar11);
            }
            else {
              __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
              if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_059a0b2a;
              Photon_Pun_PhotonView__RPC_56e5850
                        (__this_00,"LoadCachedMapRPC",pPVar5,parameters,(MethodInfo *)0x0);
            }
            uVar10 = uVar10 + 1;
            uVar2 = (uint)pPVar7->max_length;
            uVar8 = (ulong)uVar2;
          } while ((long)uVar10 < (long)(int)uVar2);
        }
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = true;
        return;
      }
    }
  }
label_059a0b2a:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$UseBuiltin
// il2cpp: void Map_MapTransfer__UseBuiltin (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x59a0cd0

void Map_MapTransfer__UseBuiltin(System_String_o *category,System_String_o *mapName,MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *__this;
  Map_MapTransfer_StaticFields *pMVar1;
  System_String_o *identity;
  
  if (Il2CppMethodInitialized_07545ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07545ac0 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  __this = TypeInfo_Map_MapTransfer->static_fields->_changeTracker;
  identity = System_String__Concat_5301f10(category,"/",mapName,(MethodInfo *)0x0);
  if (__this == (Map_ContentTransferChangeTracker_o *)0x0) {
    ThrowNullReferenceException();
  }
  Map_ContentTransferChangeTracker__Update
            (__this,identity,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->MapHash = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pMVar1->MapHash);
  return;
}


// Map.MapTransfer$$Transfer
// il2cpp: void Map_MapTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59a1850

void Map_MapTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  Map_MapTransfer_o *__this;
  Map_MapTransfer__TransferMapData_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_07545ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545ac1 = '\x01';
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    __this = TypeInfo_Map_MapTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_MapTransfer_o **)((long)((Il2CppClass *)TypeInfo_Map_MapTransfer)->static_fields + 0x18);
  }
  if (__this == (Map_MapTransfer_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_TransferMapData_d__26);
    Il2CppMethodInitialized_07545ac7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_TransferMapData_d__26);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$CreateTransferData
// il2cpp: void Map_MapTransfer__CreateTransferData (const MethodInfo* method);
// 0x59a67a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a67df: jmp 0x59a7625
// asm:   0x59a6f1c: jmp 0x59a6f27
// asm:   0x59a72ad: jmp 0x59a72b8

void Map_MapTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int32_t deltaRows;
  uint uVar3;
  Map_MapScript_o *pMVar4;
  Map_MapScriptObjects_o *pMVar5;
  System_String_o *__this;
  Il2CppObject *pIVar6;
  Map_MapScriptOptions_o *pMVar7;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar8;
  Map_MapScriptCustomAssets_o *pMVar9;
  Settings_WeatherSet_o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_Byte_array_array_array *pSVar12;
  Il2CppClass *pIVar13;
  SimpleJSONFixed_JSONNode_c *pSVar14;
  MethodInfo *pMVar15;
  int iVar16;
  bool bVar17;
  System_String_o *pSVar18;
  System_Object_array *pSVar19;
  System_Collections_Generic_List_byte__o *pSVar20;
  Il2CppObject *collection;
  System_Collections_Generic_List_byte______o *pSVar21;
  System_Byte_array_array *pSVar22;
  System_Byte_array *pSVar23;
  System_Collections_Generic_List_byte____o *pSVar24;
  System_Collections_Generic_List_T__o *pSVar25;
  System_Text_Encoding_o *pSVar26;
  int iVar27;
  int iVar28;
  Map_MapTransfer_StaticFields *pMVar29;
  int iVar30;
  
  if (Il2CppMethodInitialized_07545ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_array_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_GetRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor_71939c8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_array_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545ac2 = '\x01';
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) goto label_059a68f2;
label_059a67cb:
    pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  }
  else {
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor != 0) goto label_059a67cb;
label_059a68f2:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  }
  if ((pMVar4 == (Map_MapScript_o *)0x0) ||
     (pMVar5 = (pMVar4->fields).Objects, pMVar5 == (Map_MapScriptObjects_o *)0x0)) goto label_059a7625;
  pSVar18 = (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
  pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (pMVar4 == (Map_MapScript_o *)0x0) goto label_059a7625;
  __this = (pMVar4->fields).Logic;
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  deltaRows = TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows;
  if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
  }
  pSVar19 = Utility_CSVCompression__Compress(pSVar18,deltaRows,0x3b,0x2c,(MethodInfo *)0x0);
  if (pSVar19 == (System_Object_array *)0x0) goto label_059a7625;
  if ((int)pSVar19->max_length == 0) goto label_059a7587;
  pIVar6 = pSVar19->m_Items[0];
  pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  pIVar13 = TypeInfo_byte_array;
  if (pIVar6 == (Il2CppObject *)0x0) {
    collection = (Il2CppObject *)0x0;
  }
  else {
    collection = il2cpp_vm_Object_IsInst(pIVar6,TypeInfo_byte_array);
    if (collection == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6,pIVar13);
    }
  }
  System_Collections_Generic_List_byte____ctor_51e2100
            (pSVar20,(System_Collections_Generic_IEnumerable_T__o *)collection,
             (MethodInfo_51E2100 *)MethodInfo_System_Collections_Generic_List_byte_ctor_71939c8);
  pMVar29 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar29->_mapScriptCompressed = pSVar20;
  Il2CppCodeGenWriteBarrier(&pMVar29->_mapScriptCompressed);
  pSVar14 = TypeInfo_SimpleJSONFixed_JSONNode;
  if ((pSVar19->max_length & 0xfffffffe) == 0) goto label_059a7587;
  pIVar6 = pSVar19->m_Items[1];
  if (pIVar6 == (Il2CppObject *)0x0) {
    pMVar29 = TypeInfo_Map_MapTransfer->static_fields;
    pMVar29->_mapScriptSymbolTable = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  else {
    bVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).typeHierarchyDepth;
    if (((pIVar6->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)) {
label_059a6a9a:
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6,pSVar14);
    }
    pMVar29 = TypeInfo_Map_MapTransfer->static_fields;
    pMVar29->_mapScriptSymbolTable = (SimpleJSONFixed_JSONNode_o *)pIVar6;
    if (((pIVar6->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)pSVar14)) goto label_059a6a9a;
  }
  Il2CppCodeGenWriteBarrier(&pMVar29->_mapScriptSymbolTable);
  pSVar21 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar21,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
  pMVar29 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar29->_mapTransferData = pSVar21;
  Il2CppCodeGenWriteBarrier(&pMVar29->_mapTransferData);
  pSVar21 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
  pSVar22 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,5);
  pSVar23 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
  if (pSVar23 == (System_Byte_array *)0x0) goto label_059a7625;
  if ((int)pSVar23->max_length == 0) goto label_059a7587;
  pSVar23->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapStart;
  if (pSVar22 == (System_Byte_array_array *)0x0) goto label_059a7625;
  if ((int)pSVar22->max_length == 0) goto label_059a7587;
  pSVar22->m_Items[0] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
  if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
  }
  pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((pMVar4 == (Map_MapScript_o *)0x0) ||
     (pMVar7 = (pMVar4->fields).Options, pMVar7 == (Map_MapScriptOptions_o *)0x0)) goto label_059a7625;
  pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  pSVar18 = (*(pMVar7->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar7,(pMVar7->klass->vtable)._8_Serialize.method);
  if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_059a7625;
  pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar8,pSVar18,1,(MethodInfo *)0x0);
  if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_059a7587;
  pSVar22->m_Items[1] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
  pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((pMVar4 == (Map_MapScript_o *)0x0) ||
     (pMVar9 = (pMVar4->fields).CustomAssets, pMVar9 == (Map_MapScriptCustomAssets_o *)0x0))
  goto label_059a7625;
  pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  pSVar18 = (*(pMVar9->klass->vtable)._8_Serialize.methodPtr)
                      (pMVar9,(pMVar9->klass->vtable)._8_Serialize.method);
  if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_059a7625;
  pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar8,pSVar18,1,(MethodInfo *)0x0);
  if ((uint)pSVar22->max_length < 3) goto label_059a7587;
  pSVar22->m_Items[2] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 2);
  pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((pMVar4 == (Map_MapScript_o *)0x0) ||
     (pSVar10 = (pMVar4->fields).Weather, pSVar10 == (Settings_WeatherSet_o *)0x0)) goto label_059a7625;
  pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  pSVar18 = (*(pSVar10->klass->vtable)._8_SerializeToJsonString.methodPtr)
                      (pSVar10,(pSVar10->klass->vtable)._8_SerializeToJsonString.method);
  if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_059a7625;
  pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar8,pSVar18,1,(MethodInfo *)0x0);
  if ((pSVar22->max_length & 0xfffffffc) == 0) goto label_059a7587;
  pSVar22->m_Items[3] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 3);
  pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable;
  if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_059a7625;
  pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
  pSVar18 = (*(pSVar11->klass->vtable)._3_ToString.methodPtr)
                      (pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
  if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_059a7625;
  pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar8,pSVar18,1,(MethodInfo *)0x0);
  if ((uint)pSVar22->max_length < 5) goto label_059a7587;
  pSVar22->m_Items[4] = pSVar23;
  Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 4);
  pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
  if (pSVar21 == (System_Collections_Generic_List_byte______o *)0x0) goto label_059a7625;
  piVar1 = &(pSVar21->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar12 = (pSVar21->fields)._items;
  if (pSVar12 == (System_Byte_array_array_array *)0x0) goto label_059a7625;
  uVar3 = (pSVar21->fields)._size;
  if (uVar3 < (uint)pSVar12->max_length) {
    (pSVar21->fields)._size = uVar3 + 1;
    pSVar12->m_Items[(int)uVar3] = pSVar22;
    Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
               (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
  }
  pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
  if (pSVar20 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a7625;
  iVar30 = (pSVar20->fields)._size;
  pSVar24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar24,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_byte_array_ctor);
  if (iVar30 < 1) {
    if (pSVar24 == (System_Collections_Generic_List_byte____o *)0x0) goto label_059a7625;
label_059a6f27:
    if (0 < (pSVar24->fields)._size) {
      iVar30 = 0;
      do {
        while( true ) {
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          pSVar21 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
          pSVar22 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
          pSVar23 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
          if (pSVar23 == (System_Byte_array *)0x0) goto label_059a7625;
          if ((int)pSVar23->max_length == 0) goto label_059a7587;
          pSVar23->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapBody;
          if (pSVar22 == (System_Byte_array_array *)0x0) goto label_059a7625;
          if ((int)pSVar22->max_length == 0) goto label_059a7587;
          pSVar22->m_Items[0] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
          pSVar23 = (System_Byte_array *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar24,iVar30,
                               (MethodInfo_395CF20 *)
                               MethodInfo_System_Collections_Generic_List_byte_array_get_Item);
          if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_059a7587;
          pSVar22->m_Items[1] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
          pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
          if (pSVar21 == (System_Collections_Generic_List_byte______o *)0x0) goto label_059a7625;
          piVar1 = &(pSVar21->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (pSVar21->fields)._items;
          if (pSVar12 == (System_Byte_array_array_array *)0x0) goto label_059a7625;
          uVar3 = (pSVar21->fields)._size;
          if ((uint)pSVar12->max_length <= uVar3) break;
          (pSVar21->fields)._size = uVar3 + 1;
          pSVar12->m_Items[(int)uVar3] = pSVar22;
          Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
          iVar30 = iVar30 + 1;
          if ((pSVar24->fields)._size <= iVar30) goto label_059a7091;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                   (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
        iVar30 = iVar30 + 1;
      } while (iVar30 < (pSVar24->fields)._size);
    }
label_059a7091:
    if (__this == (System_String_o *)0x0) goto label_059a7625;
    pSVar18 = System_String__Trim(__this,(MethodInfo *)0x0);
    bVar17 = System_String__op_Inequality
                       (pSVar18,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar17) {
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto label_059a7625;
      pSVar23 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar8,__this,1,(MethodInfo *)0x0);
      pSVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
      System_Collections_Generic_List_byte____ctor_51e2100
                (pSVar20,(System_Collections_Generic_IEnumerable_T__o *)pSVar23,
                 (MethodInfo_51E2100 *)MethodInfo_System_Collections_Generic_List_byte_ctor_71939c8);
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      pMVar29 = TypeInfo_Map_MapTransfer->static_fields;
      pMVar29->_logicScriptCompressed = pSVar20;
      Il2CppCodeGenWriteBarrier(&pMVar29->_logicScriptCompressed);
      pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
      if (pSVar20 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a7625;
      iVar30 = (pSVar20->fields)._size;
      pSVar24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar24,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_byte_array_ctor);
      if (iVar30 < 1) {
        if (pSVar24 == (System_Collections_Generic_List_byte____o *)0x0) goto label_059a7625;
      }
      else {
        if (pSVar24 == (System_Collections_Generic_List_byte____o *)0x0) {
          iVar27 = 10000;
          if (iVar30 < 10000) {
            iVar27 = iVar30;
          }
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
          goto label_059a7608;
        }
        iVar28 = 0;
        iVar27 = 10000;
        do {
          while( true ) {
            iVar16 = iVar30 - iVar28;
            if (iVar27 + iVar28 <= iVar30) {
              iVar16 = iVar27;
            }
            iVar27 = iVar16;
            if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
            }
            pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
            if ((pSVar20 == (System_Collections_Generic_List_byte__o *)0x0) ||
               (pSVar25 = System_Collections_Generic_List_byte___GetRange
                                    (pSVar20,iVar28,iVar27,
                                     (MethodInfo_51E37B0 *)
                                     MethodInfo_System_Collections_Generic_List_byte_GetRange),
               pSVar25 == (System_Collections_Generic_List_T__o *)0x0)) goto label_059a7625;
            pSVar23 = System_Collections_Generic_List_byte___ToArray
                                ((System_Collections_Generic_List_byte__o *)pSVar25,
                                 (MethodInfo_51E4BA0 *)MethodInfo_System_Collections_Generic_List_byte_ToArray
                                );
            pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_Add;
            piVar1 = &(pSVar24->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar22 = (pSVar24->fields)._items;
            if (pSVar22 == (System_Byte_array_array *)0x0) goto label_059a7625;
            uVar3 = (pSVar24->fields)._size;
            if ((uint)pSVar22->max_length <= uVar3) break;
            (pSVar24->fields)._size = uVar3 + 1;
            pSVar22->m_Items[(int)uVar3] = pSVar23;
            Il2CppCodeGenWriteBarrier(pSVar22->m_Items + (int)uVar3);
            iVar28 = iVar28 + iVar27;
            if (iVar30 <= iVar28) goto label_059a72b8;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar24,&pSVar23->obj,
                     (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          iVar28 = iVar28 + iVar27;
        } while (iVar28 < iVar30);
      }
label_059a72b8:
      if (0 < (pSVar24->fields)._size) {
        iVar30 = 0;
        do {
          while( true ) {
            if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
            }
            pSVar21 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
            pSVar22 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
            pSVar23 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
            if (pSVar23 == (System_Byte_array *)0x0) goto label_059a7625;
            if ((int)pSVar23->max_length == 0) goto label_059a7587;
            pSVar23->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgLogicBody;
            if (pSVar22 == (System_Byte_array_array *)0x0) goto label_059a7625;
            if ((int)pSVar22->max_length == 0) goto label_059a7587;
            pSVar22->m_Items[0] = pSVar23;
            Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
            pSVar23 = (System_Byte_array *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar24,iVar30,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_byte_array_get_Item);
            if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_059a7587;
            pSVar22->m_Items[1] = pSVar23;
            Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
            pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
            if (pSVar21 == (System_Collections_Generic_List_byte______o *)0x0) goto label_059a7625;
            piVar1 = &(pSVar21->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar12 = (pSVar21->fields)._items;
            if (pSVar12 == (System_Byte_array_array_array *)0x0) goto label_059a7625;
            uVar3 = (pSVar21->fields)._size;
            if ((uint)pSVar12->max_length <= uVar3) break;
            (pSVar21->fields)._size = uVar3 + 1;
            pSVar12->m_Items[(int)uVar3] = pSVar22;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
            iVar30 = iVar30 + 1;
            if ((pSVar24->fields)._size <= iVar30) goto label_059a7422;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                     (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          iVar30 = iVar30 + 1;
        } while (iVar30 < (pSVar24->fields)._size);
      }
    }
label_059a7422:
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    pSVar21 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
    pSVar22 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,2);
    pSVar23 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
    if (pSVar23 != (System_Byte_array *)0x0) {
      if ((int)pSVar23->max_length == 0) {
label_059a7587:
        ThrowIndexOutOfRangeException();
      }
      pSVar23->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapEnd;
      if (pSVar22 != (System_Byte_array_array *)0x0) {
        if ((int)pSVar22->max_length == 0) goto label_059a7587;
        pSVar22->m_Items[0] = pSVar23;
        Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
        pSVar26 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        if (pSVar26 != (System_Text_Encoding_o *)0x0) {
          pSVar23 = (*(pSVar26->klass->vtable)._18_GetBytes.methodPtr)
                              (pSVar26,TypeInfo_Map_MapTransfer->static_fields->MapHash,
                               (pSVar26->klass->vtable)._18_GetBytes.method);
          if ((pSVar22->max_length & 0xfffffffe) == 0) goto label_059a7587;
          pSVar22->m_Items[1] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items + 1);
          pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
          if (pSVar21 != (System_Collections_Generic_List_byte______o *)0x0) {
            piVar1 = &(pSVar21->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar12 = (pSVar21->fields)._items;
            if (pSVar12 != (System_Byte_array_array_array *)0x0) {
              uVar3 = (pSVar21->fields)._size;
              if (uVar3 < (uint)pSVar12->max_length) {
                (pSVar21->fields)._size = uVar3 + 1;
                pSVar12->m_Items[(int)uVar3] = pSVar22;
                Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3);
                return;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar21,(Il2CppObject *)pSVar22,
                         (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (pSVar24 != (System_Collections_Generic_List_byte____o *)0x0) {
      iVar28 = 0;
      iVar27 = 10000;
      do {
        while( true ) {
          iVar16 = iVar30 - iVar28;
          if (iVar27 + iVar28 <= iVar30) {
            iVar16 = iVar27;
          }
          iVar27 = iVar16;
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
          if ((pSVar20 == (System_Collections_Generic_List_byte__o *)0x0) ||
             (pSVar25 = System_Collections_Generic_List_byte___GetRange
                                  (pSVar20,iVar28,iVar27,
                                   (MethodInfo_51E37B0 *)
                                   MethodInfo_System_Collections_Generic_List_byte_GetRange),
             pSVar25 == (System_Collections_Generic_List_T__o *)0x0)) goto label_059a7625;
          pSVar23 = System_Collections_Generic_List_byte___ToArray
                              ((System_Collections_Generic_List_byte__o *)pSVar25,
                               (MethodInfo_51E4BA0 *)MethodInfo_System_Collections_Generic_List_byte_ToArray);
          pMVar15 = MethodInfo_System_Collections_Generic_List_byte_array_Add;
          piVar1 = &(pSVar24->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar22 = (pSVar24->fields)._items;
          if (pSVar22 == (System_Byte_array_array *)0x0) goto label_059a7625;
          uVar3 = (pSVar24->fields)._size;
          if ((uint)pSVar22->max_length <= uVar3) break;
          (pSVar24->fields)._size = uVar3 + 1;
          pSVar22->m_Items[(int)uVar3] = pSVar23;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items + (int)uVar3);
          iVar28 = iVar28 + iVar27;
          if (iVar30 <= iVar28) goto label_059a6f27;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar24,&pSVar23->obj,
                   (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
        iVar28 = iVar28 + iVar27;
      } while (iVar28 < iVar30);
      goto label_059a6f27;
    }
    iVar27 = 10000;
    if (iVar30 < 10000) {
      iVar27 = iVar30;
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
label_059a7608:
    if ((pSVar20 != (System_Collections_Generic_List_byte__o *)0x0) &&
       (pSVar25 = System_Collections_Generic_List_byte___GetRange
                            (pSVar20,0,iVar27,
                             (MethodInfo_51E37B0 *)MethodInfo_System_Collections_Generic_List_byte_GetRange),
       pSVar25 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List_byte___ToArray
                ((System_Collections_Generic_List_byte__o *)pSVar25,
                 (MethodInfo_51E4BA0 *)MethodInfo_System_Collections_Generic_List_byte_ToArray);
      ThrowNullReferenceException();
    }
  }
label_059a7625:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$OnTransferMapRPC
// il2cpp: void Map_MapTransfer__OnTransferMapRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59a76c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a785a: add rsp, 8

void Map_MapTransfer__OnTransferMapRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t messageTotal;
  Map_OrderedTransferReceiver_o *__this;
  bool bVar1;
  Map_MapTransfer___c__DisplayClass22_0_o *__this_00;
  System_Func_T1__T2__T3__TResult__o *__this_01;
  System_Action_T1__T2__o *__this_02;
  System_Action_o *__this_03;
  
  if (Il2CppMethodInitialized_07545ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_byte_array_array_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_byte_array_array_int_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_ResetReceiveState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_ValidateMessage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapTransfer_c__DisplayClass22_0_OnTransferMapRPC_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_c__DisplayClass22_0);
    Il2CppMethodInitialized_07545ac3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_c__DisplayClass22_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if ((__this_00 == (Map_MapTransfer___c__DisplayClass22_0_o *)0x0) ||
     ((__this_00->fields).msgTotal = msgTotal, info.fields.Sender == (Photon_Realtime_Player_o *)0x0)) {
label_059a7869:
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    __this = TypeInfo_Map_MapTransfer->static_fields->_receiver;
    messageTotal = (__this_00->fields).msgTotal;
    __this_01 = (System_Func_T1__T2__T3__TResult__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_byte_array_array_int_int_bool);
    System_Func_object__int__int__bool____ctor
              (__this_01,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapTransfer_ValidateMessage,
               (MethodInfo_4F24B20 *)0x0);
    __this_02 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_byte_array_array_int);
    System_Action_object__int____ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_Map_MapTransfer_c__DisplayClass22_0_OnTransferMapRPC_b__0,
               (MethodInfo_4A89C60 *)0x0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
    System_Action___ctor
              (__this_03,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapTransfer_ResetReceiveState,
               (MethodInfo *)0x0);
    if (__this == (Map_OrderedTransferReceiver_o *)0x0) goto label_059a7869;
    Map_OrderedTransferReceiver__TryReceive
              (__this,byteArr,msgNumber,messageTotal,(System_Func_byte______int__int__bool__o *)__this_01,
               (System_Action_byte______int__o *)__this_02,__this_03,(MethodInfo *)0x0);
  }
  return;
}


// Map.MapTransfer$$ValidateMessage
// il2cpp: bool Map_MapTransfer__ValidateMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x59a7880
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a7935: jmp 0x59a796c
// asm:   0x59a79fa: call 0x30d63b0  ; ThrowIndexOutOfRangeException()

bool Map_MapTransfer__ValidateMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  System_Byte_array *pSVar3;
  int iVar4;
  Map_MapTransfer_StaticFields *pMVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_07545ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545ac4 = '\x01';
  }
  if (message == (System_Byte_array_array *)0x0) {
label_059a79f5:
    ThrowNullReferenceException();
  }
  if ((int)message->max_length < 2) {
    return false;
  }
  pSVar3 = message->m_Items[0];
  if (pSVar3 == (System_Byte_array *)0x0) goto label_059a79f5;
  if ((int)pSVar3->max_length == 1) {
    uVar1 = pSVar3->m_Items[0];
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar5 = TypeInfo_Map_MapTransfer->static_fields;
      uVar2 = pMVar5->MsgMapStart;
    }
    else {
      pMVar5 = TypeInfo_Map_MapTransfer->static_fields;
      uVar2 = pMVar5->MsgMapStart;
    }
    if (uVar1 == uVar2) {
      if (messageIndex == 0) {
        return (int)message->max_length == 5;
      }
      return false;
    }
    if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar5 = TypeInfo_Map_MapTransfer->static_fields;
      uVar2 = pMVar5->MsgMapBody;
    }
    else {
      uVar2 = pMVar5->MsgMapBody;
    }
    if (uVar1 != uVar2) {
      if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        pMVar5 = TypeInfo_Map_MapTransfer->static_fields;
      }
      if (uVar1 != pMVar5->MsgLogicBody) {
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pMVar5 = TypeInfo_Map_MapTransfer->static_fields;
        }
        if (messageTotal + -1 != messageIndex) {
          return false;
        }
        if (uVar1 != pMVar5->MsgMapEnd) {
          return false;
        }
        if ((int)message->max_length != 2) {
          return false;
        }
        if (message->m_Items[1] == (System_Byte_array *)0x0) goto label_059a79f5;
        iVar4 = (int)message->m_Items[1]->max_length;
        bVar6 = SBORROW4(iVar4,0x401);
        iVar4 = iVar4 + -0x401;
        goto label_059a79e5;
      }
    }
    if (messageIndex < 1) {
      return false;
    }
    if (messageTotal + -1 <= messageIndex) {
      return false;
    }
    if ((int)message->max_length == 2) {
      if (message->m_Items[1] != (System_Byte_array *)0x0) {
        iVar4 = (int)message->m_Items[1]->max_length;
        bVar6 = SBORROW4(iVar4,0x2711);
        iVar4 = iVar4 + -0x2711;
label_059a79e5:
        return bVar6 != iVar4 < 0;
      }
      goto label_059a79f5;
    }
  }
  return false;
}


// Map.MapTransfer$$ProcessMessage
// il2cpp: void Map_MapTransfer__ProcessMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x59a7a00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59a7a48: jmp 0x59a82d9
// asm:   0x59a7f6e: jmp 0x59a82d9
// asm:   0x59a8190: jmp 0x59a82d9

void Map_MapTransfer__ProcessMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  int32_t deltaRows;
  UI_LoadingMenu_o *__this;
  Map_MapManager_StaticFields *pMVar4;
  Map_MapScriptOptions_o *pMVar5;
  Map_MapScriptCustomAssets_o *pMVar6;
  Settings_WeatherSet_o *pSVar7;
  Map_MapScriptObjects_o *__this_00;
  Photon_Realtime_Player_o *player;
  Map_MapScript_o *pMVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_Collections_Generic_List_byte__o *pSVar11;
  Map_MapTransfer_StaticFields *pMVar12;
  System_Byte_array *pSVar13;
  System_Text_Encoding_o *pSVar14;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this_01;
  MethodInfo *pMVar15;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar16;
  
  if (Il2CppMethodInitialized_07545ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CSVCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DataCompressors);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07545ac5 = '\x01';
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) goto label_059a7b08;
label_059a7a34:
    __this = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor != 0) goto label_059a7a34;
label_059a7b08:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  }
  if ((__this == (UI_LoadingMenu_o *)0x0) ||
     (UI_LoadingMenu__UpdateLoading
                (__this,((float)messageIndex / (float)messageTotal) * 0.5,false,false,(MethodInfo *)0x0),
     message == (System_Byte_array_array *)0x0)) goto label_059a82d9;
  if ((int)message->max_length == 0) goto label_059a82de;
  pSVar13 = message->m_Items[0];
  if (pSVar13 == (System_Byte_array *)0x0) goto label_059a82d9;
  if ((int)pSVar13->max_length == 0) goto label_059a82de;
  uVar1 = pSVar13->m_Items[0];
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    uVar2 = pMVar12->MsgMapStart;
  }
  else {
    pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    uVar2 = pMVar12->MsgMapStart;
  }
  if (uVar1 == uVar2) {
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    }
    pMVar12->MapHash = pSVar9;
    Il2CppCodeGenWriteBarrier(&pMVar12->MapHash);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pMVar15 = (MethodInfo *)TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash;
    PhotonExtensions__SetCustomProperty
              (player,(System_String_o *)pMVar15,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo *)0x0);
    pMVar8 = (Map_MapScript_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
    Map_MapScript___ctor(pMVar8,pMVar15);
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    pMVar4 = TypeInfo_Map_MapManager->static_fields;
    pMVar4->MapScript = pMVar8;
    Il2CppCodeGenWriteBarrier(&pMVar4->MapScript);
    pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar8 != (Map_MapScript_o *)0x0) {
      pMVar5 = (pMVar8->fields).Options;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
      pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if ((pUVar16 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
         (pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (pUVar16,message->m_Items[1],0x1000,0xa00000,(MethodInfo *)0x0),
         pMVar5 != (Map_MapScriptOptions_o *)0x0)) {
        (*(pMVar5->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar5,pSVar9,(pMVar5->klass->vtable)._9_Deserialize.method);
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar8 != (Map_MapScript_o *)0x0) {
          if ((uint)message->max_length < 3) goto label_059a82de;
          pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if (pUVar16 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pMVar6 = (pMVar8->fields).CustomAssets;
            pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               (pUVar16,message->m_Items[2],0x1000,0xa00000,(MethodInfo *)0x0);
            if (pMVar6 != (Map_MapScriptCustomAssets_o *)0x0) {
              (*(pMVar6->klass->vtable)._9_Deserialize.methodPtr)
                        (pMVar6,pSVar9,(pMVar6->klass->vtable)._9_Deserialize.method);
              pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
              if (pMVar8 != (Map_MapScript_o *)0x0) {
                if ((message->max_length & 0xfffffffc) == 0) goto label_059a82de;
                pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                          TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                if (pUVar16 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                  pSVar7 = (pMVar8->fields).Weather;
                  pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                     (pUVar16,message->m_Items[3],0x1000,0xa00000,(MethodInfo *)0x0);
                  if (pSVar7 != (Settings_WeatherSet_o *)0x0) {
                    (*(pSVar7->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                              (pSVar7,pSVar9,(pSVar7->klass->vtable)._9_DeserializeFromJsonString.method);
                    if ((uint)message->max_length < 5) goto label_059a82de;
                    pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                              TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                    if (pUVar16 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                      pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                         (pUVar16,message->m_Items[4],0x1000,0xa00000,(MethodInfo *)0x0);
                      pSVar10 = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
                      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar12->_mapScriptSymbolTable = pSVar10;
                      Il2CppCodeGenWriteBarrier(&pMVar12->_mapScriptSymbolTable);
                      pSVar11 = (System_Collections_Generic_List_byte__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                (pSVar11,(MethodInfo_51E1FA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ctor);
                      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar12->_mapScriptCompressed = pSVar11;
                      Il2CppCodeGenWriteBarrier(&pMVar12->_mapScriptCompressed);
                      pSVar11 = (System_Collections_Generic_List_byte__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                (pSVar11,(MethodInfo_51E1FA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ctor);
                      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
                      pMVar12->_logicScriptCompressed = pSVar11;
                      Il2CppCodeGenWriteBarrier(&pMVar12->_logicScriptCompressed);
                      TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = false;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto label_059a82d9;
  }
  if ((((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    uVar3 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
    uVar2 = pMVar12->MsgMapBody;
  }
  else {
    uVar3 = (((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor;
    uVar2 = pMVar12->MsgMapBody;
  }
  if (uVar1 == uVar2) {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    }
    if (pMVar12->_receivingLogic != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_01 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
      pSVar9 = il2cpp_codegen_get_runtime_metadata(&"Map data received after map logic data.");
      System_InvalidOperationException___ctor_54b9a80(__this_01,pSVar9,(MethodInfo *)0x0);
      pMVar15 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_ProcessMessage);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar15);
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    }
    if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
    pSVar11 = pMVar12->_mapScriptCompressed;
  }
  else {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
      uVar3 = (TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor;
      uVar2 = pMVar12->MsgLogicBody;
    }
    else {
      uVar3 = (((Il2CppClass *)TypeInfo_Map_MapTransfer)->_2).cctor_finished_or_no_cctor;
      uVar2 = pMVar12->MsgLogicBody;
    }
    if (uVar1 != uVar2) {
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
      }
      if (uVar1 != pMVar12->MsgMapEnd) {
        return;
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
      }
      pSVar11 = pMVar12->_mapScriptCompressed;
      if (pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
      if (0 < (pSVar11->fields)._size) {
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
          if (pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
        }
        pSVar13 = System_Collections_Generic_List_byte___ToArray
                            (pSVar11,(MethodInfo_51E4BA0 *)
                                     MethodInfo_System_Collections_Generic_List_byte_ToArray);
        pSVar10 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable;
        deltaRows = TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows;
        if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
        }
        pMVar15 = (MethodInfo *)&g_data_0000003b;
        pSVar9 = Utility_CSVCompression__Decompress(pSVar13,pSVar10,deltaRows,0x3b,0x2c,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if ((pMVar8 == (Map_MapScript_o *)0x0) ||
           (__this_00 = (pMVar8->fields).Objects, __this_00 == (Map_MapScriptObjects_o *)0x0))
        goto label_059a82d9;
        Map_MapScriptObjects__DeserializeSkippingErrors(__this_00,pSVar9,(pMVar8->fields).Errors,pMVar15);
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
      if (pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) goto label_059a82d9;
      if (0 < (pSVar11->fields)._size) {
        if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
          pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) goto label_059a81b7;
label_059a8180:
          pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
        }
        else {
          pUVar16 = (Utility_Algorithms_CompressionAlgorithm_o *)
                    TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor != 0) goto label_059a8180;
label_059a81b7:
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
        }
        if ((pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) ||
           (pSVar13 = System_Collections_Generic_List_byte___ToArray
                                (pSVar11,(MethodInfo_51E4BA0 *)
                                         MethodInfo_System_Collections_Generic_List_byte_ToArray),
           pUVar16 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) goto label_059a82d9;
        pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (pUVar16,pSVar13,0x1000,0xa00000,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar8 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar8 == (Map_MapScript_o *)0x0) goto label_059a82d9;
        (pMVar8->fields).Logic = pSVar9;
        Il2CppCodeGenWriteBarrier(&(pMVar8->fields).Logic);
      }
      pSVar14 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ((message->max_length & 0xfffffffe) == 0) {
label_059a82de:
        ThrowIndexOutOfRangeException();
      }
      if (pSVar14 != (System_Text_Encoding_o *)0x0) {
        pMVar15 = (MethodInfo *)
                  (*(pSVar14->klass->vtable)._35_GetString.methodPtr)
                            (pSVar14,message->m_Items[1],(pSVar14->klass->vtable)._35_GetString.method);
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
        pMVar12->MapHash = (System_String_o *)pMVar15;
        Il2CppCodeGenWriteBarrier(&pMVar12->MapHash);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        Map_MapManager__LoadMap(true,pMVar15);
        return;
      }
      goto label_059a82d9;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      pMVar12 = TypeInfo_Map_MapTransfer->static_fields;
    }
    pMVar12->_receivingLogic = true;
    if ((message->max_length & 0xfffffffe) == 0) goto label_059a82de;
    pSVar11 = pMVar12->_logicScriptCompressed;
  }
  if (pSVar11 != (System_Collections_Generic_List_byte__o *)0x0) {
    System_Collections_Generic_List_byte___AddRange
              (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)message->m_Items[1],
               (MethodInfo_51E2AF0 *)MethodInfo_System_Collections_Generic_List_byte_AddRange);
    return;
  }
label_059a82d9:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$ResetReceiveState
// il2cpp: void Map_MapTransfer__ResetReceiveState (const MethodInfo* method);
// 0x59a66a0

void Map_MapTransfer__ResetReceiveState(MethodInfo *method)

{
  Map_MapTransfer_StaticFields *pMVar1;
  System_Collections_Generic_List_byte__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_07545ac6 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_mapScriptSymbolTable = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pMVar1->_mapScriptSymbolTable);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            (pSVar2,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_mapScriptCompressed = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_mapScriptCompressed);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            (pSVar2,(MethodInfo_51E1FA0 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_logicScriptCompressed = pSVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_logicScriptCompressed);
  TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = false;
  return;
}


// Map.MapTransfer$$TransferMapData
// il2cpp: System_Collections_IEnumerator_o* Map_MapTransfer__TransferMapData (Map_MapTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x59a7650

System_Collections_IEnumerator_o *
Map_MapTransfer__TransferMapData
          (Map_MapTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_MapTransfer__TransferMapData_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_07545ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_TransferMapData_d__26);
    Il2CppMethodInitialized_07545ac7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_TransferMapData_d__26);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.MapTransfer$$.ctor
// il2cpp: void Map_MapTransfer___ctor (Map_MapTransfer_o* __this, const MethodInfo* method);
// 0x59a8350

void Map_MapTransfer___ctor(Map_MapTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$.cctor
// il2cpp: void Map_MapTransfer___cctor (const MethodInfo* method);
// 0x59a8360

void Map_MapTransfer___cctor(MethodInfo *method)

{
  Map_MapTransfer_StaticFields *pMVar1;
  Map_ContentTransferChangeTracker_o *__this;
  Map_OrderedTransferReceiver_o *__this_00;
  
  if (Il2CppMethodInitialized_07545ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_OrderedTransferReceiver);
    Il2CppMethodInitialized_07545ac8 = '\x01';
  }
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->MsgMapStart = 0;
  pMVar1->MsgMapBody = 1;
  pMVar1->MsgLogicBody = 2;
  pMVar1->MsgMapEnd = 3;
  pMVar1->CompressDeltaRows = 0x16;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  Map_ContentTransferChangeTracker___ctor(__this,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_changeTracker = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->_changeTracker);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_OrderedTransferReceiver);
  Map_OrderedTransferReceiver___ctor(__this_00,0x80000000,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_MapTransfer->static_fields;
  pMVar1->_receiver = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->_receiver);
  return;
}


