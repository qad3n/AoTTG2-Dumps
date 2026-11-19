// Type: Map.CustomLogicTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/CustomLogicTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs
// --------------------------------

// Map.CustomLogicTransfer.<TransferLogicData>d__11$$.ctor
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11___ctor (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x596ba70

void Map_CustomLogicTransfer__TransferLogicData_d__11___ctor
               (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11__System_IDisposable_Dispose (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x596bb50

void Map_CustomLogicTransfer__TransferLogicData_d__11__System_IDisposable_Dispose
               (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$MoveNext
// il2cpp: bool Map_CustomLogicTransfer__TransferLogicData_d__11__MoveNext (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x596bb60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596bc0e: jmp 0x596bc38
// asm:   0x596be9f: nop 

bool Map_CustomLogicTransfer__TransferLogicData_d__11__MoveNext
               (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Map_CustomLogicTransferData_o *pMVar2;
  System_Collections_Generic_List_byte______o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Photon_Pun_PhotonView_o *__this_00;
  int32_t iVar6;
  VirtualInvokeData *pVVar7;
  System_Object_array *parameters;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  UnityEngine_WaitForSeconds_o *__this_01;
  ulong uVar10;
  int iVar11;
  long lVar12;
  int32_t iStack_40;
  int32_t iStack_3c;
  Photon_Realtime_Player_o *pPStack_38;
  
  if (Il2CppMethodInitialized_07545986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferLogicRPC");
    Il2CppMethodInitialized_07545986 = '\x01';
  }
  iVar11 = (__this->fields).__1__state;
  if (iVar11 == 1) {
    (__this->fields).__1__state = -1;
    iVar11 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar11;
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (iVar11 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar11 = 0;
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
  if ((pMVar2 != (Map_CustomLogicTransferData_o *)0x0) &&
     (pSVar3 = (pMVar2->fields)._messages, pSVar3 != (System_Collections_Generic_List_byte______o *)0x0)) {
    pIVar4 = (Il2CppClass *)pSVar3->klass;
    uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_byte______c **)
             ((long)&pIVar5->interfaceType + lVar12) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array) {
          pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto label_0596bcc1;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar10 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSVar3,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,0);
label_0596bcc1:
    iVar6 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,pVVar7->method);
    if (iVar6 <= iVar11) {
      return false;
    }
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    pPStack_38 = (__this->fields).player;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    }
    pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if ((pMVar2 != (Map_CustomLogicTransferData_o *)0x0) &&
       (pSVar3 = (pMVar2->fields)._messages, pSVar3 != (System_Collections_Generic_List_byte______o *)0x0)) {
      iVar6 = (__this->fields)._i_5__2;
      pIVar4 = (Il2CppClass *)pSVar3->klass;
      uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_byte______c **)
               ((long)&pIVar5->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array) {
            pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
            goto label_0596bda8;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pSVar3,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array,0)
      ;
label_0596bda8:
      pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,iVar6,pVVar7->method);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar8 != (Il2CppObject *)0x0) &&
           (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((parameters->obj).klass)->_1).element_class),
           pIVar9 == (Il2CppObject *)0x0)) {
label_0596bfa7:
          pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar8;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          iStack_3c = (__this->fields)._i_5__2;
          pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
          if ((pIVar8 != (Il2CppObject *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((parameters->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) goto label_0596bfa7;
          if ((parameters->max_length & 0xfffffffe) != 0) {
            parameters->m_Items[1] = pIVar8;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
            if ((pMVar2 != (Map_CustomLogicTransferData_o *)0x0) &&
               (pSVar3 = (pMVar2->fields)._messages,
               pSVar3 != (System_Collections_Generic_List_byte______o *)0x0)) {
              pIVar4 = (Il2CppClass *)pSVar3->klass;
              uVar10 = (ulong)(pIVar4->_2).interface_offsets_count;
              if (uVar10 != 0) {
                pIVar5 = (pIVar4->_1).interfaceOffsets;
                lVar12 = 0;
                do {
                  if (*(System_Collections_Generic_IReadOnlyCollection_byte______c **)
                       ((long)&pIVar5->interfaceType + lVar12) ==
                      TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array) {
                    pVVar7 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
                    goto label_0596bed1;
                  }
                  lVar12 = lVar12 + 0x10;
                } while (uVar10 * 0x10 != lVar12);
              }
              pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                                 ((Il2CppObject *)pSVar3,
                                  (Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,0);
label_0596bed1:
              iStack_40 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,pVVar7->method);
              pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_40);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((parameters->obj).klass)->_1).element_class),
                 pIVar9 == (Il2CppObject *)0x0)) goto label_0596bfa7;
              if ((uint)parameters->max_length < 3) goto label_0596bfa2;
              parameters->m_Items[2] = pIVar8;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_56e5850
                          (__this_00,"TransferLogicRPC",pPStack_38,parameters,(MethodInfo *)0x0);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
                (__this->fields).__2__current = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 1;
                return true;
              }
            }
            goto label_0596bf9d;
          }
        }
label_0596bfa2:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_0596bf9d:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x596bfc0

Il2CppObject *
Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_Reset (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x596bfd0

void Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_Reset
               (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Map_CustomLogicTransfer_TransferLogicData_d__11_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_get_Current (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x596c010

Il2CppObject *
Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer$$Init
// il2cpp: void Map_CustomLogicTransfer__Init (const MethodInfo* method);
// 0x596b300

void Map_CustomLogicTransfer__Init(MethodInfo *method)

{
  Map_CustomLogicTransfer_StaticFields *pMVar1;
  Map_CustomLogicTransfer_o *pMVar2;
  Events_OnPreLoadScene_o *__this;
  
  if (Il2CppMethodInitialized_0754597e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicTransfer);
    Il2CppMethodInitialized_0754597e = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Map_CustomLogicTransfer->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicTransfer);
  pMVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields;
  pMVar1->_instance = pMVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_CustomLogicTransfer_OnPreLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x596b3d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596b3fd: jmp 0x596b46b

void Map_CustomLogicTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  Map_CustomLogicTransfer_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754597f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_0754597f = '\x01';
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_CustomLogicTransfer_o **)
              ((long)((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer)->static_fields + 0x10);
  }
  if (__this != (Map_CustomLogicTransfer_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    __this_00 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if (__this_00 != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Reset(__this_00,method_00);
      TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$Start
// il2cpp: void Map_CustomLogicTransfer__Start (System_String_o* modeName, const MethodInfo* method);
// 0x596b470

void Map_CustomLogicTransfer__Start(System_String_o *modeName,MethodInfo *method)

{
  uint uVar1;
  Map_ContentTransferChangeTracker_o *pMVar2;
  Map_CustomLogicTransfer_StaticFields *pMVar3;
  Map_CustomLogicTransferData_o *__this;
  Photon_Realtime_Player_o *pPVar4;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar5;
  bool bVar6;
  MethodInfo *b;
  Photon_Realtime_Player_array *pPVar7;
  ulong uVar8;
  System_String_o *pSVar9;
  System_Object_array *parameters;
  int iVar10;
  MethodInfo *in_RCX;
  ulong uVar11;
  MethodInfo *pMVar12;
  
  if (Il2CppMethodInitialized_07545980 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedLogicRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545980 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar9 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  b = (MethodInfo *)Utility_Util__CreateMD5(pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker;
  if (pMVar2 != (Map_ContentTransferChangeTracker_o *)0x0) {
    bVar5 = System_String__op_Inequality((pMVar2->fields)._identity,modeName,(MethodInfo *)0x0);
    bVar6 = true;
    if (!bVar5) {
      bVar6 = System_String__op_Inequality((pMVar2->fields)._hash,(System_String_o *)b,(MethodInfo *)0x0);
    }
    (pMVar2->fields)._identity = modeName;
    Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._identity);
    (pMVar2->fields)._hash = (System_String_o *)b;
    Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._hash);
    pMVar3 = TypeInfo_Map_CustomLogicTransfer->static_fields;
    pMVar3->LogicHash = (System_String_o *)b;
    Il2CppCodeGenWriteBarrier(&pMVar3->LogicHash);
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if (__this != (Map_CustomLogicTransferData_o *)0x0) {
      pMVar12 = (MethodInfo *)TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
      Map_CustomLogicTransferData__Prepare
                (__this,(System_String_o *)pMVar12,TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,
                 in_RCX);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar7 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar7 != (Photon_Realtime_Player_array *)0x0) {
        iVar10 = (int)pPVar7->max_length;
        uVar8 = pPVar7->max_length & 0xffffffff;
        if (bVar6 == false) {
          if (0 < iVar10) {
            uVar11 = 0;
            do {
              if (uVar8 <= uVar11) goto label_0596b7ce;
              pPVar4 = pPVar7->m_Items[uVar11];
              if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
              }
              pSVar9 = PhotonExtensions__GetStringProperty
                                 (pPVar4,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash,
                                  "",(MethodInfo *)0x0);
              pMVar12 = b;
              bVar5 = System_String__op_Inequality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
                }
                Map_CustomLogicTransfer__Transfer(pPVar4,pMVar12);
              }
              else {
                __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
                if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_0596b7d3;
                Photon_Pun_PhotonView__RPC_56e5850
                          (__this_00,"LoadCachedLogicRPC",pPVar4,parameters,(MethodInfo *)0x0);
              }
              uVar11 = uVar11 + 1;
              uVar1 = (uint)pPVar7->max_length;
              uVar8 = (ulong)uVar1;
            } while ((long)uVar11 < (long)(int)uVar1);
          }
        }
        else if (0 < iVar10) {
          uVar11 = 0;
          do {
            if (uVar8 <= uVar11) {
label_0596b7ce:
              ThrowIndexOutOfRangeException();
            }
            pPVar4 = pPVar7->m_Items[uVar11];
            if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
            }
            Map_CustomLogicTransfer__Transfer(pPVar4,pMVar12);
            uVar11 = uVar11 + 1;
            uVar1 = (uint)pPVar7->max_length;
            uVar8 = (ulong)uVar1;
          } while ((long)uVar11 < (long)(int)uVar1);
        }
        if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
        }
        TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = true;
        return;
      }
    }
  }
label_0596b7d3:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$UseBuiltin
// il2cpp: void Map_CustomLogicTransfer__UseBuiltin (System_String_o* modeName, const MethodInfo* method);
// 0x596b8d0

void Map_CustomLogicTransfer__UseBuiltin(System_String_o *modeName,MethodInfo *method)

{
  uint32_t uVar1;
  Map_ContentTransferChangeTracker_o *pMVar2;
  System_String_o *b;
  Map_CustomLogicTransfer_StaticFields *pMVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07545981 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_07545981 = '\x01';
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker;
  }
  else {
    pMVar2 = *(Map_ContentTransferChangeTracker_o **)
              ((long)((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer)->static_fields + 0x20);
  }
  if (pMVar2 == (Map_ContentTransferChangeTracker_o *)0x0) {
    ThrowNullReferenceException();
  }
  b = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar4 = System_String__op_Inequality((pMVar2->fields)._identity,modeName,(MethodInfo *)0x0);
  if (!bVar4) {
    System_String__op_Inequality((pMVar2->fields)._hash,b,(MethodInfo *)0x0);
  }
  (pMVar2->fields)._identity = modeName;
  Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._identity);
  (pMVar2->fields)._hash = b;
  Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._hash);
  pMVar3 = TypeInfo_Map_CustomLogicTransfer->static_fields;
  pMVar3->LogicHash = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(&pMVar3->LogicHash);
  return;
}


// Map.CustomLogicTransfer$$Transfer
// il2cpp: void Map_CustomLogicTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x596b7e0

void Map_CustomLogicTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  Map_CustomLogicTransfer_o *__this;
  Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_07545982 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_07545982 = '\x01';
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_CustomLogicTransfer_o **)
              ((long)((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer)->static_fields + 0x10);
  }
  if (__this == (Map_CustomLogicTransfer_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
    Il2CppMethodInitialized_07545984 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$OnTransferLogicRPC
// il2cpp: void Map_CustomLogicTransfer__OnTransferLogicRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959190

void Map_CustomLogicTransfer__OnTransferLogicRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Map_CustomLogicTransferData_o *__this;
  CustomLogic_CustomLogicManager_StaticFields *pCVar1;
  Map_CustomLogicTransfer_StaticFields *pMVar2;
  System_String_o *pSVar3;
  bool bVar4;
  MethodInfo *in_stack_ffffffffffffffb8;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  if (Il2CppMethodInitialized_07545983 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_07545983 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_059592f2:
    ThrowNullReferenceException();
  }
  bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
    }
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if (__this == (Map_CustomLogicTransferData_o *)0x0) goto label_059592f2;
    bVar4 = Map_CustomLogicTransferData__TryReceive
                      (__this,byteArr,msgNumber,msgTotal,&pSStack_30,&pSStack_38,in_stack_ffffffffffffffb8);
    pSVar3 = pSStack_30;
    if (bVar4) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar1->Logic = pSVar3;
      Il2CppCodeGenWriteBarrier(&pCVar1->Logic);
      pSVar3 = pSStack_38;
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
      }
      pMVar2 = TypeInfo_Map_CustomLogicTransfer->static_fields;
      pMVar2->LogicHash = pSVar3;
      Il2CppCodeGenWriteBarrier(&pMVar2->LogicHash);
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      pCVar1->LogicHash = TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash;
      Il2CppCodeGenWriteBarrier(&pCVar1->LogicHash);
      CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
    }
  }
  return;
}


// Map.CustomLogicTransfer$$TransferLogicData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicTransfer__TransferLogicData (Map_CustomLogicTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x596ba00

System_Collections_IEnumerator_o *
Map_CustomLogicTransfer__TransferLogicData
          (Map_CustomLogicTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_07545984 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
    Il2CppMethodInitialized_07545984 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.CustomLogicTransfer$$.ctor
// il2cpp: void Map_CustomLogicTransfer___ctor (Map_CustomLogicTransfer_o* __this, const MethodInfo* method);
// 0x596ba90

void Map_CustomLogicTransfer___ctor(Map_CustomLogicTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$.cctor
// il2cpp: void Map_CustomLogicTransfer___cctor (const MethodInfo* method);
// 0x596baa0

void Map_CustomLogicTransfer___cctor(MethodInfo *method)

{
  Map_CustomLogicTransfer_StaticFields *pMVar1;
  Map_CustomLogicTransferData_o *__this;
  Map_ContentTransferChangeTracker_o *__this_00;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07545985 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_07545985 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData);
  Map_CustomLogicTransferData___ctor(__this,in_RSI);
  pMVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields;
  pMVar1->_transferData = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->_transferData);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields;
  pMVar1->_changeTracker = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->_changeTracker);
  return;
}


