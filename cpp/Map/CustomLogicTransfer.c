// Type: Map.CustomLogicTransfer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/CustomLogicTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs
// --------------------------------

// Map.CustomLogicTransfer.<TransferLogicData>d__11$$.ctor
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11___ctor (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_CustomLogicTransfer__TransferLogicData_d__11___ctor(Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11__System_IDisposable_Dispose (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x180547020

void
Map_CustomLogicTransfer__TransferLogicData_d__11__System_IDisposable_Dispose(Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, MethodInfo* method)

{
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$MoveNext
// il2cpp: bool Map_CustomLogicTransfer__TransferLogicData_d__11__MoveNext (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x181e9a100

bool Map_CustomLogicTransfer__TransferLogicData_d__11__MoveNext
               (Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Map_CustomLogicTransferData_o *pMVar3;
  System_Collections_Generic_List_byte______o *pSVar4;
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  int32_t local_res8 [2];
  undefined4 local_res18 [2];
  
  if (Il2CppMethodInitialized_184344ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferLogicRPC");
    Il2CppMethodInitialized_184344ff6 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields)._i_5__2 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__2;
    *piVar1 = *piVar1 + 1;
  }
  iVar2 = (__this->fields)._i_5__2;
  (__this->fields).__1__state = -1;
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar3 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
  if ((pMVar3 == (Map_CustomLogicTransferData_o *)0x0) ||
     (pSVar4 = (pMVar3->fields)._messages, pSVar4 == (System_Collections_Generic_List_byte______o *)0x0)) {
    ThrowNullReferenceException();
  }
  pvVar5 = InterfaceInvoker0_Invoke
                     (0,(Il2CppClass *)
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,
                      (Il2CppObject *)pSVar4);
  if ((int)pvVar5 <= iVar2) {
    return false;
  }
  targetPlayer = (__this->fields).player;
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar3 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
  if (((pMVar3 == (Map_CustomLogicTransferData_o *)0x0) ||
      (pSVar4 = (pMVar3->fields)._messages, pSVar4 == (System_Collections_Generic_List_byte______o *)0x0)) ||
     (pIVar6 = (Il2CppObject *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array,pSVar4,
                             (__this->fields)._i_5__2), parameters == (System_Object_array *)0x0))
  goto label_181e9a44a;
  if ((pIVar6 != (Il2CppObject *)0x0) &&
     (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((parameters->obj).klass)->_1).element_class),
     pIVar7 == (Il2CppObject *)0x0)) {
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar6;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar6);
    local_res8[0] = (__this->fields)._i_5__2;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((pIVar6 != (Il2CppObject *)0x0) &&
       (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((parameters->obj).klass)->_1).element_class),
       pIVar7 == (Il2CppObject *)0x0)) {
      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar6;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar6);
      pMVar3 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
      if ((pMVar3 != (Map_CustomLogicTransferData_o *)0x0) &&
         (pSVar4 = (pMVar3->fields)._messages, pSVar4 != (System_Collections_Generic_List_byte______o *)0x0))
      {
        pvVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array,
                            (Il2CppObject *)pSVar4);
        local_res18[0] = SUB84(pvVar5,0);
        pIVar6 = il2cpp_value_box(g_data_184354e08,local_res18);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((parameters->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 3) goto label_181e9a444;
        parameters->m_Items[2] = pIVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar6);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"TransferLogicRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
label_181e9a44a:
      ThrowNullReferenceException();
    }
  }
label_181e9a444:
  ThrowIndexOutOfRangeException();
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_Reset (Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, const MethodInfo* method);
// 0x181e9a460

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
// 0x180573e90

Il2CppObject*
Map_CustomLogicTransfer__TransferLogicData_d__11__System_Collections_IEnumerator_get_Current(Map_CustomLogicTransfer__TransferLogicData_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer$$Init
// il2cpp: void Map_CustomLogicTransfer__Init (const MethodInfo* method);
// 0x181e880e0

void Map_CustomLogicTransfer__Init(MethodInfo *method)

{
  Map_CustomLogicTransfer_o *value;
  Events_OnPreLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_184344fee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicTransfer);
    Il2CppMethodInitialized_184344fee = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Map_CustomLogicTransfer->static_fields->_instance,
                     (MethodInfo_798ED0 *)
                     MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicTransfer);
  TypeInfo_Map_CustomLogicTransfer->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_CustomLogicTransfer_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181e881c0

void Map_CustomLogicTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Map_CustomLogicTransfer_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344fef = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_instance;
  if (__this != (Map_CustomLogicTransfer_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    __this_00 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if (__this_00 != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Reset(__this_00,(MethodInfo *)0x0);
      TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$Start
// il2cpp: void Map_CustomLogicTransfer__Start (System_String_o* modeName, const MethodInfo* method);
// 0x181e88410
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e88609: nop dword ptr [rax]

void Map_CustomLogicTransfer__Start(System_String_o *modeName,MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *pMVar1;
  Map_CustomLogicTransferData_o *__this;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Photon_Realtime_Player_array *pPVar5;
  System_String_o *a;
  System_Object_array *parameters;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedLogicRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344ff0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar4 = Utility_Util__CreateMD5(pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker;
  if (pMVar1 != (Map_ContentTransferChangeTracker_o *)0x0) {
    bVar2 = System_String__op_Inequality((pMVar1->fields)._identity,modeName,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      bVar2 = System_String__op_Inequality((pMVar1->fields)._hash,pSVar4,(MethodInfo *)0x0);
    }
    (pMVar1->fields)._identity = modeName;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._identity,modeName);
    (pMVar1->fields)._hash = pSVar4;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._hash,pSVar4);
    TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash = pSVar4;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,pSVar4);
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
    if (__this != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Prepare
                (__this,TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,
                 TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,(MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
        uVar6 = 0;
label_181e88610:
        do {
          if ((int)pPVar5->max_length <= (int)uVar6) {
            if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
            }
            TypeInfo_Map_CustomLogicTransfer->static_fields->LogicTransferReady = true;
            return;
          }
          if ((uint)pPVar5->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          player = pPVar5->m_Items[(int)uVar6];
          if (bVar2 == false) {
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            a = PhotonExtensions__GetStringProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomLogicHash,
                           "",(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality(a,pSVar4,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
              if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) break;
              Photon_Pun_PhotonView__RPC_1d4d8d0
                        (__this_00,"LoadCachedLogicRPC",player,parameters,(MethodInfo *)0x0);
              uVar6 = uVar6 + 1;
              goto label_181e88610;
            }
          }
          if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
          }
          Map_CustomLogicTransfer__Transfer(player,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$UseBuiltin
// il2cpp: void Map_CustomLogicTransfer__UseBuiltin (System_String_o* modeName, const MethodInfo* method);
// 0x181e88890

void Map_CustomLogicTransfer__UseBuiltin(System_String_o *modeName,MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *pMVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184344ff1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344ff1 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  pMVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker;
  if (pMVar1 != (Map_ContentTransferChangeTracker_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    bVar3 = System_String__op_Inequality((pMVar1->fields)._identity,modeName,(MethodInfo *)0x0);
    if (!bVar3) {
      System_String__op_Inequality((pMVar1->fields)._hash,pSVar2,(MethodInfo *)0x0);
    }
    (pMVar1->fields)._identity = modeName;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._identity,modeName);
    (pMVar1->fields)._hash = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._hash,pSVar2);
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash = pSVar2;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,pSVar2);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$Transfer
// il2cpp: void Map_CustomLogicTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e887c0

void Map_CustomLogicTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicTransfer_o *__this;
  Map_CustomLogicTransfer__TransferLogicData_d__11_o *routine;
  
  if (Il2CppMethodInitialized_184344ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344ff2 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  if (TypeInfo_Map_CustomLogicTransfer->static_fields->_instance != (Map_CustomLogicTransfer_o *)0x0) {
    __this = TypeInfo_Map_CustomLogicTransfer->static_fields->_instance;
    if (Il2CppMethodInitialized_184344ff4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
      Il2CppMethodInitialized_184344ff4 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    (routine->fields).__1__state = 0;
    (routine->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(routine->fields).player,player);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$OnTransferLogicRPC
// il2cpp: void Map_CustomLogicTransfer__OnTransferLogicRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e88250

void Map_CustomLogicTransfer__OnTransferLogicRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *local_res20;
  System_String_o *local_38 [3];
  
  if (Il2CppMethodInitialized_184344ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344ff3 = '\x01';
  }
  __this = (info->fields).Sender;
  local_res20 = (System_String_o *)0x0;
  local_38[0] = (System_String_o *)0x0;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
      }
      __this_00 = TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData;
      if (__this_00 == (Map_CustomLogicTransferData_o *)0x0) goto label_181e88406;
      bVar2 = Map_CustomLogicTransferData__TryReceive
                        (__this_00,byteArr,msgNumber,msgTotal,&local_res20,local_38,(MethodInfo *)0x0);
      pSVar1 = local_res20;
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic = pSVar1;
        Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->Logic,pSVar1);
        pSVar1 = local_38[0];
        if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
        }
        TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash = pSVar1;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash,pSVar1);
        pSVar1 = TypeInfo_Map_CustomLogicTransfer->static_fields->LogicHash;
        TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash = pSVar1;
        Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicManager->static_fields->LogicHash,pSVar1);
        CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
      }
    }
    return;
  }
label_181e88406:
  ThrowNullReferenceException();
}


// Map.CustomLogicTransfer$$TransferLogicData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicTransfer__TransferLogicData (Map_CustomLogicTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e88750

System_Collections_IEnumerator_o *
Map_CustomLogicTransfer__TransferLogicData
          (Map_CustomLogicTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicTransfer__TransferLogicData_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
    Il2CppMethodInitialized_184344ff4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer_TransferLogicData_d__11);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player,player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.CustomLogicTransfer$$.ctor
// il2cpp: void Map_CustomLogicTransfer___ctor (Map_CustomLogicTransfer_o* __this, const MethodInfo* method);
// 0x180528540

void
Map_CustomLogicTransfer___ctor(Map_CustomLogicTransfer_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$.cctor
// il2cpp: void Map_CustomLogicTransfer___cctor (const MethodInfo* method);
// 0x181e889a0

void Map_CustomLogicTransfer___cctor(MethodInfo *method)

{
  Map_CustomLogicTransferData_o *__this;
  Map_ContentTransferChangeTracker_o *__this_00;
  
  if (Il2CppMethodInitialized_184344ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344ff5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData);
  Map_CustomLogicTransferData___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->_transferData,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicTransfer->static_fields->_changeTracker,__this_00);
  return;
}


