// Type: Map.CustomLogicAddonTransfer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/CustomLogicAddonTransfer.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomLogicAddonTransfer.<>c$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___cctor (const MethodInfo* method);
// 0x181e9ae80

void Map_CustomLogicAddonTransfer___c___cctor(MethodInfo *method)

{
  Map_CustomLogicAddonTransfer___c_o *__this;
  
  if (Il2CppMethodInitialized_184344feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_c);
    Il2CppMethodInitialized_184344feb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9,__this);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___ctor (Map_CustomLogicAddonTransfer___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_CustomLogicAddonTransfer___c___ctor(Map_CustomLogicAddonTransfer___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$<BuildBundleJson>b__9_0
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__9_0 (Map_CustomLogicAddonTransfer___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x181e9a4a0

System_String_o *
Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__9_0
          (Map_CustomLogicAddonTransfer___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184344fec = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12___ctor (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_CustomLogicAddonTransfer__TransferAddonData_d__12___ctor(Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_IDisposable_Dispose (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x180547020

void
Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_IDisposable_Dispose(Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, MethodInfo* method)

{
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$MoveNext
// il2cpp: bool Map_CustomLogicAddonTransfer__TransferAddonData_d__12__MoveNext (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x181e99d60

bool Map_CustomLogicAddonTransfer__TransferAddonData_d__12__MoveNext
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_184344fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferAddonBundleRPC");
    Il2CppMethodInitialized_184344fed = '\x01';
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
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pMVar3 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
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
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pMVar3 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
  if (((pMVar3 == (Map_CustomLogicTransferData_o *)0x0) ||
      (pSVar4 = (pMVar3->fields)._messages, pSVar4 == (System_Collections_Generic_List_byte______o *)0x0)) ||
     (pIVar6 = (Il2CppObject *)
               il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_byte_array_array,pSVar4,
                             (__this->fields)._i_5__2), parameters == (System_Object_array *)0x0))
  goto label_181e9a0aa;
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
      pMVar3 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
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
        if ((uint)parameters->max_length < 3) goto label_181e9a0a4;
        parameters->m_Items[2] = pIVar6;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar6);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"TransferAddonBundleRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
label_181e9a0aa:
      ThrowNullReferenceException();
    }
  }
label_181e9a0a4:
  ThrowIndexOutOfRangeException();
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_Reset (Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, const MethodInfo* method);
// 0x181e9a0c0

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
// 0x180573e90

Il2CppObject*
Map_CustomLogicAddonTransfer__TransferAddonData_d__12__System_Collections_IEnumerator_get_Current(Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer$$Init
// il2cpp: void Map_CustomLogicAddonTransfer__Init (const MethodInfo* method);
// 0x181e86cd0

void Map_CustomLogicAddonTransfer__Init(MethodInfo *method)

{
  Map_CustomLogicAddonTransfer_o *value;
  Events_OnPreLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_184344fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_CustomLogicAddonTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_184344fe2 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance,
                     (MethodInfo_798ED0 *)
                     MethodInfo_Utility_SingletonFactory_CreateSingleton_CustomLogicAddonTransfer);
  TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicAddonTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181e86e20

void Map_CustomLogicAddonTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Map_CustomLogicAddonTransfer_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_184344fe3 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance;
  if (__this != (Map_CustomLogicAddonTransfer_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    __this_00 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
    if (__this_00 != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Reset(__this_00,(MethodInfo *)0x0);
      TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$Start
// il2cpp: void Map_CustomLogicAddonTransfer__Start (const MethodInfo* method);
// 0x181e87010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e8720e: nop 

void Map_CustomLogicAddonTransfer__Start(MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *pMVar1;
  System_String_o *b;
  Map_CustomLogicTransferData_o *__this;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *b_00;
  Photon_Realtime_Player_array *pPVar5;
  System_Object_array *parameters;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedAddonBundleRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344fe4 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  pSVar4 = Map_CustomLogicAddonTransfer__BuildBundleJson((MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  b_00 = Utility_Util__CreateMD5(pSVar4,(MethodInfo *)0x0);
  pMVar1 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_changeTracker;
  if (pMVar1 != (Map_ContentTransferChangeTracker_o *)0x0) {
    b = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    bVar2 = System_String__op_Inequality((pMVar1->fields)._identity,b,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      bVar2 = System_String__op_Inequality((pMVar1->fields)._hash,b_00,(MethodInfo *)0x0);
    }
    (pMVar1->fields)._identity = b;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._identity,b);
    (pMVar1->fields)._hash = b_00;
    Il2CppCodeGenWriteBarrier(&(pMVar1->fields)._hash,b_00);
    TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash = b_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,b_00);
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
    if (__this != (Map_CustomLogicTransferData_o *)0x0) {
      Map_CustomLogicTransferData__Prepare
                (__this,pSVar4,TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,
                 (MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      CustomLogic_CustomLogicManager__ApplyAddonBundle(pSVar4,(MethodInfo *)0x0);
      CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
        uVar6 = 0;
label_181e87210:
        do {
          if ((int)pPVar5->max_length <= (int)uVar6) {
            if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
            }
            TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonTransferReady = true;
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
            pSVar4 = PhotonExtensions__GetStringProperty
                               (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomAddonHash,
                                "",(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality(pSVar4,b_00,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
              if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) break;
              Photon_Pun_PhotonView__RPC_1d4d8d0
                        (__this_00,"LoadCachedAddonBundleRPC",player,parameters,(MethodInfo *)0x0);
              uVar6 = uVar6 + 1;
              goto label_181e87210;
            }
          }
          if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
          }
          Map_CustomLogicAddonTransfer__Transfer(player,(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$Transfer
// il2cpp: void Map_CustomLogicAddonTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e873c0

void Map_CustomLogicAddonTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicAddonTransfer_o *__this;
  Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *routine;
  
  if (Il2CppMethodInitialized_184344fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_184344fe5 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  if (TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance != (Map_CustomLogicAddonTransfer_o *)0x0
     ) {
    __this = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_instance;
    if (Il2CppMethodInitialized_184344fe9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12);
      Il2CppMethodInitialized_184344fe9 = '\x01';
    }
    routine = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12);
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


// Map.CustomLogicAddonTransfer$$BuildBundleJson
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer__BuildBundleJson (const MethodInfo* method);
// 0x181e86960
// eh: try 0x181e86ba0..0x181e86cc9 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e86b9c: nop dword ptr [rax]
// asm:   0x181e86c69: mov rdx, qword ptr [rip + 0x2210ca8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181e86c70: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e86c75: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e86c7a: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e86c7f: test rcx, rcx
// asm:   0x181e86c82: jne 0x181e86cc9
// asm:   0x181e86c84: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x181e86c8c: mov r15, rdi
// asm:   0x181e86cc9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_o * Map_CustomLogicAddonTransfer__BuildBundleJson(MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *object;
  bool bVar4;
  SimpleJSONFixed_JSONObject_o *__this;
  System_Func_StringSetting__string__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_String_o *value;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  undefined1 local_50 [16];
  System_String_o *local_40;
  undefined1 local_38 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_30;
  System_String_o *local_28;
  
  if (Il2CppMethodInitialized_184344fe6 == '\0') {
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
    Il2CppMethodInitialized_184344fe6 = '\x01';
  }
  local_38 = (undefined1  [8])0x0;
  pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_28 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Addons, pSVar3 != (Settings_ListSetting_StringSetting__o *)0x0)) {
    source = (pSVar3->fields)._value;
    if ((TypeInfo_Map_CustomLogicAddonTransfer_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
    }
    __this_00 = TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9__9_0;
    if (__this_00 == (System_Func_StringSetting__string__o *)0x0) {
      if ((TypeInfo_Map_CustomLogicAddonTransfer_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_c);
      }
      object = (Il2CppObject *)TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_string);
      System_Func_object__object____ctor
                ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,object,
                 (intptr_t)MethodInfo_Map_CustomLogicAddonTransfer_c_BuildBundleJson_b__9_0,
                 (MethodInfo_16E67D0 *)0x0);
      TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9__9_0 = __this_00;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer_c->static_fields->__9__9_0,__this_00);
    }
    source_00 = System_Linq_Enumerable__Select_Vector3__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_00,
                           (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_StringSetting_string)
    ;
    __this_01 = System_Linq_Enumerable__ToList_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_string);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                 (System_Collections_Generic_List_T__o *)__this_01,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_38 = (undefined1  [8])local_50._0_8_;
      pUStack_30 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50._8_8_;
      local_28 = local_40;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_38,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        pSVar6 = local_28;
        if (!bVar4) break;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        bVar4 = Map_BuiltinLevels__IsAddonBuiltin(pSVar6,(MethodInfo *)0x0);
        if (!bVar4) {
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          value = Map_BuiltinLevels__LoadAddon(pSVar6,(MethodInfo *)0x0);
          bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (!bVar4) {
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
            if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            (*(__this->klass->vtable)._8_set_Item.methodPtr)
                      (__this,pSVar6,pSVar5,(__this->klass->vtable)._8_set_Item.method);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        pSVar6 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$OnTransferAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e86eb0

void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *__this;
  Map_CustomLogicTransferData_o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *local_res20;
  System_String_o *local_38 [3];
  
  if (Il2CppMethodInitialized_184344fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344fe7 = '\x01';
  }
  __this = (info->fields).Sender;
  local_38[0] = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  if (__this != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
      }
      __this_00 = TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData;
      if (__this_00 == (Map_CustomLogicTransferData_o *)0x0) goto label_181e87002;
      bVar2 = Map_CustomLogicTransferData__TryReceive
                        (__this_00,byteArr,msgNumber,msgTotal,local_38,&local_res20,(MethodInfo *)0x0);
      pSVar1 = local_res20;
      if (bVar2) {
        if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
        }
        TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash = pSVar1;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,pSVar1);
        pSVar1 = local_38[0];
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        CustomLogic_CustomLogicManager__ApplyAddonBundle(pSVar1,(MethodInfo *)0x0);
        CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
      }
    }
    return;
  }
label_181e87002:
  ThrowNullReferenceException();
}


// Map.CustomLogicAddonTransfer$$OnLoadCachedAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e86db0

void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC
               (Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344fe8 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient((info->fields).Sender,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$TransferAddonData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicAddonTransfer__TransferAddonData (Map_CustomLogicAddonTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181e87350

System_Collections_IEnumerator_o *
Map_CustomLogicAddonTransfer__TransferAddonData
          (Map_CustomLogicAddonTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_CustomLogicAddonTransfer__TransferAddonData_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12)
    ;
    Il2CppMethodInitialized_184344fe9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer_TransferAddonData_d__12);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player,player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.CustomLogicAddonTransfer$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___ctor (Map_CustomLogicAddonTransfer_o* __this, const MethodInfo* method);
// 0x180528540

void
Map_CustomLogicAddonTransfer___ctor(Map_CustomLogicAddonTransfer_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___cctor (const MethodInfo* method);
// 0x181e87490

void Map_CustomLogicAddonTransfer___cctor(MethodInfo *method)

{
  System_String_o *value;
  Map_CustomLogicTransferData_o *__this;
  Map_ContentTransferChangeTracker_o *__this_00;
  
  if (Il2CppMethodInitialized_184344fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransferData);
    Il2CppMethodInitialized_184344fea = '\x01';
  }
  value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->AddonBundleHash,value);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_CustomLogicTransferData);
  Map_CustomLogicTransferData___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_transferData,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_changeTracker = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_CustomLogicAddonTransfer->static_fields->_changeTracker,__this_00);
  return;
}


