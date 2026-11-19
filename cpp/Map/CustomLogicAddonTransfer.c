// Type: Map.CustomLogicAddonTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/CustomLogicAddonTransfer.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomLogicAddonTransfer.<>c$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___cctor (const MethodInfo* method);
// 0x596ad80

void Map_CustomLogicAddonTransfer___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754597b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_c);
    Il2CppMethodInitialized_0754597b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9 = (Map_CustomLogicAddonTransfer___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___ctor (Map_CustomLogicAddonTransfer___c_o* __this, const MethodInfo* method);
// 0x596adf0

void Map_CustomLogicAddonTransfer___c___ctor(Map_CustomLogicAddonTransfer___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$<BuildBundleJson>b__9_0
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__9_0 (Map_CustomLogicAddonTransfer___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x596ae00

System_String_o *
Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__9_0
          (Map_CustomLogicAddonTransfer___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754597c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754597c = '\x01';
  }
  if (x == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (x->fields)._value;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12___ctor (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x596ab70

void Map_CustomLogicAddonTransfer__TransferAddonData_d__12___ctor
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_IDisposable_Dispose (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x596ae30

void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_IDisposable_Dispose
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

{
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$MoveNext
// il2cpp: bool Map_CustomLogicAddonTransfer__TransferAddonData_d__12__MoveNext (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x596ae40
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596aeee: jmp 0x596af18
// asm:   0x596b17f: nop 

bool Map_CustomLogicAddonTransfer__TransferAddonData_d__12__MoveNext
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_0754597d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferAddonBundleRPC");
    Il2CppMethodInitialized_0754597d = '\x01';
  }
  iVar11 = (__this->fields).__1__state;
  if (iVar11 == 1) {
    (__this->fields).__1__state = -1;
    iVar11 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar11;
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (iVar11 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar11 = 0;
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pMVar2 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
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
          goto label_0596afa1;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar10 * 0x10 != lVar12);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       ((Il2CppObject *)pSVar3,
                        (Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,0);
label_0596afa1:
    iVar6 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,pVVar7->method);
    if (iVar6 <= iVar11) {
      return false;
    }
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    pPStack_38 = (__this->fields).player;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    }
    pMVar2 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
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
            goto label_0596b088;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                         ((Il2CppObject *)pSVar3,
                          (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array,0)
      ;
label_0596b088:
      pIVar8 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,iVar6,pVVar7->method);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar8 != (Il2CppObject *)0x0) &&
           (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((parameters->obj).klass)->_1).element_class),
           pIVar9 == (Il2CppObject *)0x0)) {
label_0596b287:
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
             pIVar9 == (Il2CppObject *)0x0)) goto label_0596b287;
          if ((parameters->max_length & 0xfffffffe) != 0) {
            parameters->m_Items[1] = pIVar8;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            pMVar2 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
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
                    goto label_0596b1b1;
                  }
                  lVar12 = lVar12 + 0x10;
                } while (uVar10 * 0x10 != lVar12);
              }
              pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                                 ((Il2CppObject *)pSVar3,
                                  (Il2CppClass *)
                                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,0);
label_0596b1b1:
              iStack_40 = (*pVVar7->methodPtr)((Il2CppObject *)pSVar3,pVVar7->method);
              pIVar8 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_40);
              if ((pIVar8 != (Il2CppObject *)0x0) &&
                 (pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((parameters->obj).klass)->_1).element_class),
                 pIVar9 == (Il2CppObject *)0x0)) goto label_0596b287;
              if ((uint)parameters->max_length < 3) goto label_0596b282;
              parameters->m_Items[2] = pIVar8;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC_56e5850
                          (__this_00,"TransferAddonBundleRPC",pPStack_38,parameters,(MethodInfo *)0x0);
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
                UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
                (__this->fields).__2__current = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
                (__this->fields).__1__state = 1;
                return true;
              }
            }
            goto label_0596b27d;
          }
        }
label_0596b282:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_0596b27d:
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x596b2a0

Il2CppObject *
Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_Reset (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x596b2b0

void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_Reset
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

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
                  MethodInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_get_Current (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x596b2f0

Il2CppObject *
Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_get_Current
          (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer$$Init
// il2cpp: void Map_CustomLogicAddonTransfer__Init (const MethodInfo* method);
// 0x5969570

void Map_CustomLogicAddonTransfer__Init(MethodInfo *method)

{
  Map_CustomLogicAddonTransfer_StaticFields *pMVar1;
  Map_CustomLogicAddonTransfer_o *pMVar2;
  Events_OnPreLoadScene_o *__this;
  
  if (Il2CppMethodInitialized_07545972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicAddonTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_07545972 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pMVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance,
                      (MethodInfo_3680650 *)
                      MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicAddonTransfer);
  pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
  pMVar1->_instance = pMVar2;
  Il2CppCodeGenWriteBarrier(&pMVar1->_instance);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_OnPreLoadScene,
             (MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicAddonTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5969640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x596966d: jmp 0x59696db

void Map_CustomLogicAddonTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  Map_CustomLogicAddonTransfer_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_07545973 = '\x01';
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_CustomLogicAddonTransfer_o **)
              ((long)((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer)->static_fields + 0x10);
  }
  if (__this != (Map_CustomLogicAddonTransfer_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    __this_00 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
    if (__this_00 != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Reset(__this_00,method_00);
      TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$Start
// il2cpp: void Map_CustomLogicAddonTransfer__Start (const MethodInfo* method);
// 0x59697b0

void Map_CustomLogicAddonTransfer__Start(MethodInfo *method)

{
  uint uVar1;
  Map_ContentTransferChangeTracker_o *pMVar2;
  System_String_o *b;
  Map_CustomLogicAddonTransfer_StaticFields *pMVar3;
  Map_CustomLogicTransferData_o *__this;
  Photon_Realtime_Player_o *pPVar4;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar5;
  bool bVar6;
  System_String_o *pSVar7;
  MethodInfo *b_00;
  Photon_Realtime_Player_array *pPVar8;
  ulong uVar9;
  System_Object_array *parameters;
  int iVar10;
  MethodInfo *in_RCX;
  ulong uVar11;
  MethodInfo *pMVar12;
  Map_CustomLogicAddonTransfer_c *method_00;
  
  if (Il2CppMethodInitialized_07545974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedAddonBundleRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545974 = '\x01';
  }
  method_00 = TypeInfo_Map_CustomLogicAddonTransfer;
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pSVar7 = Map_CustomLogicAddonTransfer__BuildBundleJson((MethodInfo *)method_00);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  b_00 = (MethodInfo *)Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
  pMVar2 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_changeTracker;
  if (pMVar2 != (Map_ContentTransferChangeTracker_o *)0x0) {
    b = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar5 = System_String__op_Inequality((pMVar2->fields)._identity,b,(MethodInfo *)0x0);
    bVar6 = true;
    if (!bVar5) {
      bVar6 = System_String__op_Inequality((pMVar2->fields)._hash,(System_String_o *)b_00,(MethodInfo *)0x0);
    }
    (pMVar2->fields)._identity = b;
    Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._identity);
    (pMVar2->fields)._hash = (System_String_o *)b_00;
    Il2CppCodeGenWriteBarrier(&(pMVar2->fields)._hash);
    pMVar3 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
    pMVar3->AddonBundleHash = (System_String_o *)b_00;
    Il2CppCodeGenWriteBarrier(&pMVar3->AddonBundleHash);
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
    if (__this != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Prepare
                (__this,pSVar7,TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,in_RCX);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pMVar12 = (MethodInfo *)0x0;
      CustomLogic_CustomLogicManager__ApplyAddonBundle(pSVar7,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar8 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
        iVar10 = (int)pPVar8->max_length;
        uVar9 = pPVar8->max_length & 0xffffffff;
        if (bVar6 == false) {
          if (0 < iVar10) {
            uVar11 = 0;
            do {
              if (uVar9 <= uVar11) goto label_05969b25;
              pPVar4 = pPVar8->m_Items[uVar11];
              if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
              }
              pSVar7 = PhotonExtensions__GetStringProperty
                                 (pPVar4,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash,
                                  "",(MethodInfo *)0x0);
              pMVar12 = b_00;
              bVar5 = System_String__op_Inequality(pSVar7,(System_String_o *)b_00,(MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
                }
                Map_CustomLogicAddonTransfer__Transfer(pPVar4,pMVar12);
              }
              else {
                __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
                if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_05969b2a;
                Photon_Pun_PhotonView__RPC_56e5850
                          (__this_00,"LoadCachedAddonBundleRPC",pPVar4,parameters,(MethodInfo *)0x0);
              }
              uVar11 = uVar11 + 1;
              uVar1 = (uint)pPVar8->max_length;
              uVar9 = (ulong)uVar1;
            } while ((long)uVar11 < (long)(int)uVar1);
          }
        }
        else if (0 < iVar10) {
          uVar11 = 0;
          do {
            if (uVar9 <= uVar11) {
label_05969b25:
              ThrowIndexOutOfRangeException();
            }
            pPVar4 = pPVar8->m_Items[uVar11];
            if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
            }
            Map_CustomLogicAddonTransfer__Transfer(pPVar4,pMVar12);
            uVar11 = uVar11 + 1;
            uVar1 = (uint)pPVar8->max_length;
            uVar9 = (ulong)uVar1;
          } while ((long)uVar11 < (long)(int)uVar1);
        }
        if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
        }
        TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady = true;
        return;
      }
    }
  }
label_05969b2a:
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$Transfer
// il2cpp: void Map_CustomLogicAddonTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x596a5e0

void Map_CustomLogicAddonTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint32_t uVar1;
  Map_CustomLogicAddonTransfer_o *__this;
  Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_07545975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_07545975 = '\x01';
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance;
  }
  else {
    __this = *(Map_CustomLogicAddonTransfer_o **)
              ((long)((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer)->static_fields + 0x10);
  }
  if (__this == (Map_CustomLogicAddonTransfer_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12)
    ;
    Il2CppMethodInitialized_07545979 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$BuildBundleJson
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer__BuildBundleJson (const MethodInfo* method);
// 0x5969b30
// eh: try 0x5969d94..0x5969ed5 -> pad 0x5969f33 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5969f4b..0x5969f50 -> pad 0x5969f6f cleanup
// eh: try 0x5969f72..0x5969f7c -> pad 0x5969f84 catch (...) [compiler noexcept guard]
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5969c86: jmp 0x5969ca1
// asm:   0x5969d75: lea r13, [rip + 0x1924d84]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5969d7c: mov r14, rsp
// asm:   0x5969d7f: lea rbp, [rip + 0x190c42a]  ; TypeInfo_Map_BuiltinLevels
// asm:   0x5969d86: nop word ptr cs:[rax + rax]
// asm:   0x5969e32: lea r12, [rip + 0x1924cc7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext
// asm:   0x5969e39: mov r14, rsp
// asm:   0x5969e3c: lea rbp, [rip + 0x190c36d]  ; TypeInfo_Map_BuiltinLevels
// asm:   0x5969e43: nop word ptr cs:[rax + rax]
// asm:   0x5969f13: jmp 0x5969f33
// asm:   0x5969f15: jmp 0x5969f33
// asm:   0x5969f17: jmp 0x5969f33
// asm:   0x5969f19: jmp 0x5969f33
// asm:   0x5969f1b: jmp 0x5969f33
// asm:   0x5969f1d: jmp 0x5969f33
// asm:   0x5969f1f: jmp 0x5969f33
// asm:   0x5969f21: jmp 0x5969f33
// asm:   0x5969f23: jmp 0x5969f33
// asm:   0x5969f25: jmp 0x5969f33
// asm:   0x5969f27: jmp 0x5969f33
// asm:   0x5969f29: jmp 0x5969f33
// asm:   0x5969f2b: jmp 0x5969f33
// asm:   0x5969f2d: jmp 0x5969f33
// asm:   0x5969f2f: jmp 0x5969f33
// asm:   0x5969f31: jmp 0x5969f33
// asm:   0x5969f33: mov r14, rax
// asm:   0x5969f36: cmp edx, 1
// asm:   0x5969f39: jne 0x5969f72
// asm:   0x5969f3b: mov rdi, r14
// asm:   0x5969f3e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5969f43: mov rbx, qword ptr [rax]
// asm:   0x5969f46: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5969f4b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5969f50: lea rax, [rip + 0x1924ba1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5969f57: mov rsi, qword ptr [rax]
// asm:   0x5969f5a: mov rdi, rsp
// asm:   0x5969f5d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5969f62: test rbx, rbx
// asm:   0x5969f65: je 0x5969ee7
// asm:   0x5969f67: mov rdi, rbx
// asm:   0x5969f6a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5969f6f: mov r14, rax
// asm:   0x5969f72: lea rdi, [rsp + 0x20]
// asm:   0x5969f77: call 0x2fd3be0  ; il2cpp_runtime_helper_02fd3be0()
// asm:   0x5969f7c: mov rdi, r14
// asm:   0x5969f7f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5969f84: mov rdi, rax
// asm:   0x5969f87: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Map_CustomLogicAddonTransfer__BuildBundleJson(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *object;
  undefined1 *puVar4;
  bool bVar5;
  SimpleJSONFixed_JSONObject_o *__this;
  Map_CustomLogicAddonTransfer___c_StaticFields *pMVar6;
  System_Func_StringSetting__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07545976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_CustomLogicAddonTransfer_c_BuildBundleJson_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_c);
    Il2CppMethodInitialized_07545976 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Addons, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    source = (pSVar3->fields)._value;
    if ((TypeInfo_Map_CustomLogicAddonTransfer_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
      pMVar6 = TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields;
      __this_00 = pMVar6->__9__9_0;
    }
    else {
      pMVar6 = TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields;
      __this_00 = pMVar6->__9__9_0;
    }
    if (__this_00 == (System_Func_StringSetting__string__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
        pMVar6 = TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields;
      }
      object = (Il2CppObject *)pMVar6->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_string);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_00,object,
                 (intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_c_BuildBundleJson_b__9_0,
                 (MethodInfo_4F19B50 *)0x0);
      pMVar6 = TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields;
      pMVar6->__9__9_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&pMVar6->__9__9_0);
    }
    source_00 = System_Linq_Enumerable__Select_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_00,
                           (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_StringSetting_string
                          );
    __this_01 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      puVar4 = local_68;
      if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
        while (local_48._8_8_ = puVar4,
              pMVar9 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              pSVar8 = local_58, bVar5) {
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar5 = Map_BuiltinLevels__IsAddonBuiltin(pSVar8,pMVar9);
          puVar4 = (undefined1 *)local_48._8_8_;
          if (!bVar5) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            pSVar8 = Map_BuiltinLevels__LoadAddon(pSVar8,pMVar9);
            bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
            puVar4 = (undefined1 *)local_48._8_8_;
            if (!bVar5) {
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
          }
        }
      }
      else {
        while (pMVar9 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext),
              pSVar8 = local_58, bVar5) {
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          bVar5 = Map_BuiltinLevels__IsAddonBuiltin(pSVar8,pMVar9);
          if (!bVar5) {
            if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
            }
            value = Map_BuiltinLevels__LoadAddon(pSVar8,pMVar9);
            bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
            if (!bVar5) {
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
              (*(__this->klass->vtable)._8_set_Item.methodPtr)
                        (__this,pSVar8,pSVar7,(__this->klass->vtable)._8_set_Item.method);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        pSVar8 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar8;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$OnTransferAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959430

void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Map_CustomLogicTransferData_o *__this;
  Map_CustomLogicAddonTransfer_StaticFields *pMVar1;
  System_String_o *pSVar2;
  bool bVar3;
  MethodInfo *in_stack_ffffffffffffffb8;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  if (Il2CppMethodInitialized_07545977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07545977 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_05959556:
    ThrowNullReferenceException();
  }
  bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
    }
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
    if (__this == (Map_CustomLogicTransferData_o *)0x0) goto label_05959556;
    bVar3 = Map_CustomLogicTransferData__TryReceive
                      (__this,byteArr,msgNumber,msgTotal,&pSStack_30,&pSStack_38,in_stack_ffffffffffffffb8);
    pSVar2 = pSStack_38;
    if (bVar3) {
      if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
      }
      pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
      pMVar1->AddonBundleHash = pSVar2;
      Il2CppCodeGenWriteBarrier(&pMVar1->AddonBundleHash);
      pSVar2 = pSStack_30;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      CustomLogic_CustomLogicManager__ApplyAddonBundle(pSVar2,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
    }
  }
  return;
}


// Map.CustomLogicAddonTransfer$$OnLoadCachedAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959610

void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07545978 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$TransferAddonData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicAddonTransfer__TransferAddonData (Map_CustomLogicAddonTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x596a6d0

System_Collections_IEnumerator_o *
Map_CustomLogicAddonTransfer__TransferAddonData
          (Map_CustomLogicAddonTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_07545979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12)
    ;
    Il2CppMethodInitialized_07545979 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.CustomLogicAddonTransfer$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___ctor (Map_CustomLogicAddonTransfer_o* __this, const MethodInfo* method);
// 0x596ab90

void Map_CustomLogicAddonTransfer___ctor(Map_CustomLogicAddonTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___cctor (const MethodInfo* method);
// 0x596aba0

void Map_CustomLogicAddonTransfer___cctor(MethodInfo *method)

{
  Map_CustomLogicAddonTransfer_StaticFields *pMVar1;
  Map_CustomLogicTransferData_o *__this;
  Map_ContentTransferChangeTracker_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754597a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData);
    Il2CppMethodInitialized_0754597a = '\x01';
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
  pMVar1->AddonBundleHash = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->AddonBundleHash);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData);
  Map_CustomLogicTransferData___ctor(__this,method_00);
  pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
  pMVar1->_transferData = __this;
  Il2CppCodeGenWriteBarrier(&pMVar1->_transferData);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields;
  pMVar1->_changeTracker = __this_00;
  Il2CppCodeGenWriteBarrier(&pMVar1->_changeTracker);
  return;
}


