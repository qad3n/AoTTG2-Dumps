// Type: Map.MapTransfer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Map/MapTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTransfer.cs
// --------------------------------

// Map.MapTransfer.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Map_MapTransfer___c__DisplayClass22_0___ctor (Map_MapTransfer___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_MapTransfer___c__DisplayClass22_0___ctor(Map_MapTransfer___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer.<>c__DisplayClass22_0$$<OnTransferMapRPC>b__0
// il2cpp: void Map_MapTransfer___c__DisplayClass22_0___OnTransferMapRPC_b__0 (Map_MapTransfer___c__DisplayClass22_0_o* __this, System_Byte_array_array* message, int32_t messageIndex, const MethodInfo* method);
// 0x181ee3a00

void Map_MapTransfer___c__DisplayClass22_0___OnTransferMapRPC_b__0
               (Map_MapTransfer___c__DisplayClass22_0_o *__this,System_Byte_array_array *message,
               int32_t messageIndex,MethodInfo *method)

{
  int32_t messageTotal;
  
  if (Il2CppMethodInitialized_184345130 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_184345130 = '\x01';
  }
  messageTotal = (__this->fields).msgTotal;
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  Map_MapTransfer__ProcessMessage(message,messageIndex,messageTotal,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer.<TransferMapData>d__26$$.ctor
// il2cpp: void Map_MapTransfer__TransferMapData_d__26___ctor (Map_MapTransfer__TransferMapData_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Map_MapTransfer__TransferMapData_d__26___ctor(Map_MapTransfer__TransferMapData_d__26_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapTransfer.<TransferMapData>d__26$$System.IDisposable.Dispose
// il2cpp: void Map_MapTransfer__TransferMapData_d__26__System_IDisposable_Dispose (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x180547020

void
Map_MapTransfer__TransferMapData_d__26__System_IDisposable_Dispose(Map_MapTransfer__TransferMapData_d__26_o* __this, MethodInfo* method)

{
  return;
}


// Map.MapTransfer.<TransferMapData>d__26$$MoveNext
// il2cpp: bool Map_MapTransfer__TransferMapData_d__26__MoveNext (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x181ede320

bool Map_MapTransfer__TransferMapData_d__26__MoveNext
               (Map_MapTransfer__TransferMapData_d__26_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  System_Collections_Generic_List_byte______o *pSVar3;
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  int32_t local_res8 [2];
  int32_t local_res18 [2];
  
  if (Il2CppMethodInitialized_184345131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_byte_array_array_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"TransferMapRPC");
    Il2CppMethodInitialized_184345131 = '\x01';
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
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  pSVar3 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
  if (pSVar3 == (System_Collections_Generic_List_byte______o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._size <= iVar2) {
    return false;
  }
  targetPlayer = (__this->fields).player;
  __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  pSVar3 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
  if ((pSVar3 == (System_Collections_Generic_List_byte______o *)0x0) ||
     (pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,(__this->fields)._i_5__2,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_byte_array_array_get_Item),
     parameters == (System_Object_array *)0x0)) goto label_181ede628;
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar4;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
    local_res8[0] = (__this->fields)._i_5__2;
    pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
       pIVar5 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar4);
      pSVar3 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
      if (pSVar3 != (System_Collections_Generic_List_byte______o *)0x0) {
        local_res18[0] = (pSVar3->fields)._size;
        pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((uint)parameters->max_length < 3) goto label_181ede622;
        parameters->m_Items[2] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar4);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_1d4d8d0
                    (__this_00,"TransferMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
          UnityEngine_WaitForSeconds___ctor(__this_01,0.25,(MethodInfo *)0x0);
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
label_181ede628:
      ThrowNullReferenceException();
    }
  }
label_181ede622:
  ThrowIndexOutOfRangeException();
}


// Map.MapTransfer.<TransferMapData>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Map_MapTransfer__TransferMapData_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(Map_MapTransfer__TransferMapData_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer.<TransferMapData>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_Reset (Map_MapTransfer__TransferMapData_d__26_o* __this, const MethodInfo* method);
// 0x181ede640

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
// 0x180573e90

Il2CppObject*
Map_MapTransfer__TransferMapData_d__26__System_Collections_IEnumerator_get_Current(Map_MapTransfer__TransferMapData_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer$$Init
// il2cpp: void Map_MapTransfer__Init (const MethodInfo* method);
// 0x181edb8b0

void Map_MapTransfer__Init(MethodInfo *method)

{
  Map_MapTransfer_o *value;
  Events_OnPreLoadScene_o *value_00;
  
  if (Il2CppMethodInitialized_184345124 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_MapTransfer);
    Il2CppMethodInitialized_184345124 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_Map_MapTransfer->static_fields->_instance,
                     (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_MapTransfer);
  TypeInfo_Map_MapTransfer->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_instance,value);
  value_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
  Events_OnPreLoadScene___ctor
            ((UnityEngine_AudioClip_PCMSetPositionCallback_o *)value_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_MapTransfer_OnPreLoadScene,(MethodInfo *)0x0);
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$OnPreLoadScene
// il2cpp: void Map_MapTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x181edb990

void Map_MapTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  Map_MapTransfer_o *__this;
  Map_OrderedTransferReceiver_o *__this_00;
  System_Collections_Generic_List_byte__o *pSVar1;
  
  if (Il2CppMethodInitialized_184345125 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_184345125 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  __this = TypeInfo_Map_MapTransfer->static_fields->_instance;
  if (__this != (Map_MapTransfer_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    __this_00 = TypeInfo_Map_MapTransfer->static_fields->_receiver;
    if (__this_00 != (Map_OrderedTransferReceiver_o *)0x0) {
      Map_OrderedTransferReceiver__Reset(__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18434512d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
        Il2CppMethodInitialized_18434512d = '\x01';
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable = (SimpleJSONFixed_JSONNode_o *)0x0;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable,(void *)0x0);
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
      System_Collections_Generic_List_byte____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
      TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed = pSVar1;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed,pSVar1);
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
      System_Collections_Generic_List_byte____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
      TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed = pSVar1;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed,pSVar1);
      TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = false;
      TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = false;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Map.MapTransfer$$Start
// il2cpp: void Map_MapTransfer__Start (System_String_o* mapName, const MethodInfo* method);
// 0x181edc7e0

void Map_MapTransfer__Start(System_String_o *mapName,MethodInfo *method)

{
  Map_MapScript_o *pMVar1;
  System_String_o *hash;
  Map_ContentTransferChangeTracker_o *__this;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  bool bVar3;
  Photon_Realtime_Player_array *pPVar4;
  System_String_o *a;
  System_Object_array *parameters;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184345126 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadCachedMapRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345126 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar1 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if (pMVar1 != (Map_MapScript_o *)0x0) {
    hash = (pMVar1->fields).MapHash;
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    __this = TypeInfo_Map_MapTransfer->static_fields->_changeTracker;
    if (__this != (Map_ContentTransferChangeTracker_o *)0x0) {
      bVar2 = Map_ContentTransferChangeTracker__Update(__this,mapName,hash,(MethodInfo *)0x0);
      TypeInfo_Map_MapTransfer->static_fields->MapHash = hash;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->MapHash,hash);
      Map_MapTransfer__CreateTransferData((MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
      if (pPVar4 != (Photon_Realtime_Player_array *)0x0) {
        uVar5 = 0;
label_181edc957:
        do {
          if ((int)pPVar4->max_length <= (int)uVar5) {
            if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
            }
            TypeInfo_Map_MapTransfer->static_fields->MapTransferReady = true;
            return;
          }
          if ((uint)pPVar4->max_length <= uVar5) {
            ThrowIndexOutOfRangeException();
          }
          player = pPVar4->m_Items[(int)uVar5];
          if (!bVar2) {
            if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
            }
            a = PhotonExtensions__GetStringProperty
                          (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,
                           "",(MethodInfo *)0x0);
            bVar3 = System_String__op_Inequality(a,hash,(MethodInfo *)0x0);
            if (!bVar3) {
              __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
              if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) break;
              Photon_Pun_PhotonView__RPC_1d4d8d0
                        (__this_00,"LoadCachedMapRPC",player,parameters,(MethodInfo *)0x0);
              uVar5 = uVar5 + 1;
              goto label_181edc957;
            }
          }
          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
          }
          Map_MapTransfer__Transfer(player,(MethodInfo *)0x0);
          uVar5 = uVar5 + 1;
        } while( true );
      }
    }
  }
  ThrowNullReferenceException();
}


// Map.MapTransfer$$UseBuiltin
// il2cpp: void Map_MapTransfer__UseBuiltin (System_String_o* category, System_String_o* mapName, const MethodInfo* method);
// 0x181edcbe0

void Map_MapTransfer__UseBuiltin(System_String_o *category,System_String_o *mapName,MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *__this;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345127 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_184345127 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  __this = TypeInfo_Map_MapTransfer->static_fields->_changeTracker;
  pSVar1 = System_String__Concat_1969b70(category,"/",mapName,(MethodInfo *)0x0);
  if (__this != (Map_ContentTransferChangeTracker_o *)0x0) {
    Map_ContentTransferChangeTracker__Update
              (__this,pSVar1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    TypeInfo_Map_MapTransfer->static_fields->MapHash = pSVar1;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->MapHash,pSVar1);
    return;
  }
  ThrowNullReferenceException();
}


// Map.MapTransfer$$Transfer
// il2cpp: void Map_MapTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181edcb10

void Map_MapTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_MapTransfer_o *__this;
  Map_MapTransfer__TransferMapData_d__26_o *routine;
  
  if (Il2CppMethodInitialized_184345128 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_184345128 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  if (TypeInfo_Map_MapTransfer->static_fields->_instance != (Map_MapTransfer_o *)0x0) {
    __this = TypeInfo_Map_MapTransfer->static_fields->_instance;
    if (Il2CppMethodInitialized_18434512e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_TransferMapData_d__26);
      Il2CppMethodInitialized_18434512e = '\x01';
    }
    routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_TransferMapData_d__26);
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


// Map.MapTransfer$$CreateTransferData
// il2cpp: void Map_MapTransfer__CreateTransferData (const MethodInfo* method);
// 0x181edab50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181edb21b: nop dword ptr [rax + rax]
// asm:   0x181edb2af: jmp 0x181edb2ba
// asm:   0x181edb2be: nop 
// asm:   0x181edb52f: nop 
// asm:   0x181edb5c3: jmp 0x181edb5ce

void Map_MapTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
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
  MethodInfo *pMVar13;
  Il2CppClass *pIVar14;
  int iVar15;
  bool bVar16;
  System_String_o *pSVar17;
  System_Object_array *pSVar18;
  System_Collections_Generic_List_byte__o *pSVar19;
  Il2CppObject *collection;
  System_Collections_Generic_List_byte______o *pSVar20;
  System_Byte_array_array *pSVar21;
  System_Byte_array *pSVar22;
  System_Collections_Generic_List_byte____o *pSVar23;
  System_Collections_Generic_List_T__o *pSVar24;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar25;
  System_Text_Encoding_o *pSVar26;
  int iVar27;
  int iVar28;
  int32_t iVar29;
  int32_t count;
  
  if (Il2CppMethodInitialized_184345129 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor_408ae18);
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
    Il2CppMethodInitialized_184345129 = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
  if ((pMVar4 != (Map_MapScript_o *)0x0) &&
     (pMVar5 = (pMVar4->fields).Objects, pMVar5 != (Map_MapScriptObjects_o *)0x0)) {
    pSVar17 = (*(pMVar5->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar5,(pMVar5->klass->vtable)._8_Serialize.method);
    pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar4 != (Map_MapScript_o *)0x0) {
      __this = (pMVar4->fields).Logic;
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      iVar29 = TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows;
      if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
      }
      pSVar18 = Utility_CSVCompression__Compress(pSVar17,iVar29,0x3b,0x2c,(MethodInfo *)0x0);
      if (pSVar18 != (System_Object_array *)0x0) {
        if ((int)pSVar18->max_length != 0) {
          pIVar6 = pSVar18->m_Items[0];
          pSVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
          pIVar14 = TypeInfo_byte_array;
          pMVar13 = MethodInfo_System_Collections_Generic_List_byte_ctor_408ae18;
          if (pIVar6 == (Il2CppObject *)0x0) {
            collection = (Il2CppObject *)0x0;
          }
          else {
            collection = il2cpp_vm_Object_IsInst(pIVar6,TypeInfo_byte_array);
            if (collection == (Il2CppObject *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar6,pIVar14);
            }
          }
          System_Collections_Generic_List_byte____ctor_185f620
                    (pSVar19,(System_Collections_Generic_IEnumerable_T__o *)collection,
                     (MethodInfo_185F620 *)pMVar13);
          TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed = pSVar19;
          Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed,pSVar19);
          if (1 < (uint)pSVar18->max_length) {
            pIVar6 = pSVar18->m_Items[1];
            if (pIVar6 == (Il2CppObject *)0x0) {
              TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable =
                   (SimpleJSONFixed_JSONNode_o *)0x0;
            }
            else {
              bVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).typeHierarchyDepth;
              if (((pIVar6->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pIVar6->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
              }
              TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable =
                   (SimpleJSONFixed_JSONNode_o *)pIVar6;
              bVar2 = (TypeInfo_SimpleJSONFixed_JSONNode->_2).typeHierarchyDepth;
              if (((pIVar6->klass->_2).typeHierarchyDepth < bVar2) ||
                 ((pIVar6->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                  (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode)) {
                il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
              }
            }
            Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable,pIVar6);
            pSVar20 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte_array_array);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_LowLevelList_T__o *)pSVar20,
                       (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_array_array_ctor);
            TypeInfo_Map_MapTransfer->static_fields->_mapTransferData = pSVar20;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapTransferData,pSVar20);
            pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
            pSVar21 = (System_Byte_array_array *)SZArrayNew(TypeInfo_byte_array_array,5);
            pSVar22 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
            if (pSVar22 == (System_Byte_array *)0x0) goto label_181edb883;
            if ((int)pSVar22->max_length == 0) goto label_181edb8a7;
            pSVar22->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapStart;
            if (pSVar21 == (System_Byte_array_array *)0x0) goto label_181edb883;
            if ((int)pSVar21->max_length == 0) goto label_181edb8a7;
            pSVar21->m_Items[0] = pSVar22;
            Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar22);
            if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
            }
            pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
            if ((pMVar4 != (Map_MapScript_o *)0x0) &&
               (pMVar7 = (pMVar4->fields).Options, pMVar7 != (Map_MapScriptOptions_o *)0x0)) {
              pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
                       TypeInfo_Utility_DataCompressors->static_fields->Brotli;
              pSVar17 = (*(pMVar7->klass->vtable)._8_Serialize.methodPtr)
                                  (pMVar7,(pMVar7->klass->vtable)._8_Serialize.method);
              if (pUVar8 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                pSVar22 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                    (pUVar8,pSVar17,1,(MethodInfo *)0x0);
                if ((uint)pSVar21->max_length < 2) goto label_181edb8a7;
                pSVar21->m_Items[1] = pSVar22;
                Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar22);
                pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
                if ((pMVar4 != (Map_MapScript_o *)0x0) &&
                   (pMVar9 = (pMVar4->fields).CustomAssets, pMVar9 != (Map_MapScriptCustomAssets_o *)0x0)) {
                  pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
                           TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                  pSVar17 = (*(pMVar9->klass->vtable)._8_Serialize.methodPtr)
                                      (pMVar9,(pMVar9->klass->vtable)._8_Serialize.method);
                  if (pUVar8 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                    pSVar22 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                        (pUVar8,pSVar17,1,(MethodInfo *)0x0);
                    if ((uint)pSVar21->max_length < 3) goto label_181edb8a7;
                    pSVar21->m_Items[2] = pSVar22;
                    Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 2,pSVar22);
                    pMVar4 = TypeInfo_Map_MapManager->static_fields->MapScript;
                    if ((pMVar4 != (Map_MapScript_o *)0x0) &&
                       (pSVar10 = (pMVar4->fields).Weather, pSVar10 != (Settings_WeatherSet_o *)0x0)) {
                      pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
                               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                      pSVar17 = (*(pSVar10->klass->vtable)._8_SerializeToJsonString.methodPtr)
                                          (pSVar10,(pSVar10->klass->vtable)._8_SerializeToJsonString.method);
                      if (pUVar8 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                        pSVar22 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                            (pUVar8,pSVar17,1,(MethodInfo *)0x0);
                        if ((uint)pSVar21->max_length < 4) goto label_181edb8a7;
                        pSVar21->m_Items[3] = pSVar22;
                        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 3,pSVar22);
                        pSVar11 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable;
                        if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                          pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
                                   TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                          pSVar17 = (*(pSVar11->klass->vtable)._3_ToString.methodPtr)
                                              (pSVar11,(pSVar11->klass->vtable)._3_ToString.method);
                          if (pUVar8 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                            pSVar22 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                                (pUVar8,pSVar17,1,(MethodInfo *)0x0);
                            if ((uint)pSVar21->max_length < 5) goto label_181edb8a7;
                            pSVar21->m_Items[4] = pSVar22;
                            Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 4,pSVar22);
                            pMVar13 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                            if (pSVar20 != (System_Collections_Generic_List_byte______o *)0x0) {
                              piVar1 = &(pSVar20->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar12 = (pSVar20->fields)._items;
                              if (pSVar12 != (System_Byte_array_array_array *)0x0) {
                                uVar3 = (pSVar20->fields)._size;
                                if (uVar3 < (uint)pSVar12->max_length) {
                                  (pSVar20->fields)._size = uVar3 + 1;
                                  if ((uint)pSVar12->max_length <= uVar3) goto label_181edb8a7;
                                  pSVar12->m_Items[(int)uVar3] = pSVar21;
                                  Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3,pSVar21);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)pSVar20,
                                             (Il2CppObject *)pSVar21,
                                             (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
                                }
                                pSVar19 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
                                if (pSVar19 != (System_Collections_Generic_List_byte__o *)0x0) {
                                  count = 10000;
                                  iVar28 = (pSVar19->fields)._size;
                                  iVar29 = 10000;
                                  pSVar23 = il2cpp_codegen_object_new
                                                      ((Il2CppClass *)
                                                       TypeInfo_System_Collections_Generic_List_byte_array);
                                  System_Collections_Generic_List_object____ctor
                                            ((System_Collections_Generic_LowLevelList_T__o *)pSVar23,
                                             (MethodInfo_92A240 *)
                                             MethodInfo_System_Collections_Generic_List_byte_array_ctor);
                                  iVar27 = 0;
                                  if (iVar28 < 1) {
                                    if (pSVar23 == (System_Collections_Generic_List_byte____o *)0x0)
                                    goto label_181edb883;
                                  }
                                  else {
                                    do {
                                      iVar15 = iVar28 - iVar27;
                                      if (iVar27 + iVar29 <= iVar28) {
                                        iVar15 = iVar29;
                                      }
                                      iVar29 = iVar15;
                                      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                      }
                                      pSVar24 = (System_Collections_Generic_List_T__o *)
                                                TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
                                      if (((pSVar24 == (System_Collections_Generic_List_T__o *)0x0) ||
                                          (pSVar24 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetRange
                                                               (pSVar24,iVar27,iVar29,
                                                                (MethodInfo_91F2C0 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_byte_GetRange
                                                       ),
                                          pSVar24 == (System_Collections_Generic_List_T__o *)0x0)) ||
                                         (System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                                    (pSVar24,(MethodInfo_929FE0 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_List_byte_ToArray
                                                    ),
                                         pSVar23 == (System_Collections_Generic_List_byte____o *)0x0))
                                      goto label_181edb883;
                                      il2cpp_runtime_helper_180012890(pSVar23);
                                      iVar27 = iVar27 + iVar29;
                                    } while (iVar27 < iVar28);
                                  }
                                  iVar28 = 0;
                                  while (iVar28 < (pSVar23->fields)._size) {
                                    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                    }
                                    pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
                                    pSVar21 = (System_Byte_array_array *)
                                              SZArrayNew(TypeInfo_byte_array_array,2);
                                    pSVar22 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                                    if (pSVar22 == (System_Byte_array *)0x0) goto label_181edb883;
                                    if ((int)pSVar22->max_length == 0) goto label_181edb8a7;
                                    pSVar22->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapBody;
                                    if (pSVar21 == (System_Byte_array_array *)0x0) goto label_181edb883;
                                    if ((int)pSVar21->max_length == 0) goto label_181edb8a7;
                                    pSVar21->m_Items[0] = pSVar22;
                                    Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar22);
                                    pSVar22 = (System_Byte_array *)
                                              System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                        ((System_Collections_Generic_List_object__o *)pSVar23,
                                                         iVar28,(MethodInfo_92B830 *)
                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_byte_array_get_Item
                                                       );
                                    if ((uint)pSVar21->max_length < 2) goto label_181edb8a7;
                                    pSVar21->m_Items[1] = pSVar22;
                                    Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar22);
                                    pMVar13 = MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                                    if (pSVar20 == (System_Collections_Generic_List_byte______o *)0x0)
                                    goto label_181edb883;
                                    piVar1 = &(pSVar20->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar12 = (pSVar20->fields)._items;
                                    if (pSVar12 == (System_Byte_array_array_array *)0x0) goto label_181edb883;
                                    uVar3 = (pSVar20->fields)._size;
                                    if (uVar3 < (uint)pSVar12->max_length) {
                                      (pSVar20->fields)._size = uVar3 + 1;
                                      if ((uint)pSVar12->max_length <= uVar3) goto label_181edb8a7;
                                      pSVar12->m_Items[(int)uVar3] = pSVar21;
                                      Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3,pSVar21);
                                      iVar28 = iVar28 + 1;
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize
                                                ((System_Collections_Generic_List_object__o *)pSVar20,
                                                 (Il2CppObject *)pSVar21,
                                                 (MethodInfo_93DD50 *)pMVar13->klass->rgctx_data[0xe].method);
                                      iVar28 = iVar28 + 1;
                                    }
                                  }
                                  if (__this != (System_String_o *)0x0) {
                                    pSVar17 = System_String__Trim(__this,(MethodInfo *)0x0);
                                    bVar16 = System_String__op_Inequality
                                                       (pSVar17,(System_String_o *)
                                                                **(undefined8 **)(g_data_184354e50 + 0xb8),
                                                        (MethodInfo *)0x0);
                                    if (bVar16) {
                                      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor ==
                                          0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Utility_DataCompressors);
                                      }
                                      pUVar8 = (Utility_Algorithms_CompressionAlgorithm_o *)
                                               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                                      if (pUVar8 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)
                                      goto label_181edb883;
                                      pSVar22 = Utility_Algorithms_CompressionAlgorithm__CompressString
                                                          (pUVar8,__this,1,(MethodInfo *)0x0);
                                      pSVar19 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_System_Collections_Generic_List_byte);
                                      System_Collections_Generic_List_byte____ctor_185f620
                                                (pSVar19,(System_Collections_Generic_IEnumerable_T__o *)
                                                         pSVar22,
                                                 (MethodInfo_185F620 *)
                                                 MethodInfo_System_Collections_Generic_List_byte_ctor_408ae18)
                                      ;
                                      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                      }
                                      TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed =
                                           pSVar19;
                                      Il2CppCodeGenWriteBarrier
                                                (&TypeInfo_Map_MapTransfer->static_fields->
                                                  _logicScriptCompressed,pSVar19);
                                      pSVar19 = TypeInfo_Map_MapTransfer->static_fields->
                                                _logicScriptCompressed;
                                      if (pSVar19 == (System_Collections_Generic_List_byte__o *)0x0)
                                      goto label_181edb883;
                                      iVar28 = (pSVar19->fields)._size;
                                      pSVar23 = il2cpp_codegen_object_new
                                                          ((Il2CppClass *)
                                                           TypeInfo_System_Collections_Generic_List_byte_array
                                                          );
                                      System_Collections_Generic_List_object____ctor
                                                ((System_Collections_Generic_LowLevelList_T__o *)pSVar23,
                                                 (MethodInfo_92A240 *)
                                                 MethodInfo_System_Collections_Generic_List_byte_array_ctor);
                                      iVar27 = 0;
                                      if (iVar28 < 1) {
                                        if (pSVar23 == (System_Collections_Generic_List_byte____o *)0x0)
                                        goto label_181edb883;
                                      }
                                      else {
                                        do {
                                          iVar15 = iVar28 - iVar27;
                                          if (iVar27 + count <= iVar28) {
                                            iVar15 = count;
                                          }
                                          count = iVar15;
                                          if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0)
                                          {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                          }
                                          pSVar24 = (System_Collections_Generic_List_T__o *)
                                                    TypeInfo_Map_MapTransfer->static_fields->
                                                    _logicScriptCompressed;
                                          if (((pSVar24 == (System_Collections_Generic_List_T__o *)0x0) ||
                                              (pSVar24 = 
                                                       System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetRange
                                                                 (pSVar24,iVar27,count,
                                                                  (MethodInfo_91F2C0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_byte_GetRange
                                                       ),
                                              pSVar24 == (System_Collections_Generic_List_T__o *)0x0)) ||
                                             (pUVar25 = 
                                                       System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                                                 (pSVar24,(MethodInfo_929FE0 *)
                                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_byte_ToArray
                                                       ),
                                             pSVar23 == (System_Collections_Generic_List_byte____o *)0x0))
                                          goto label_181edb883;
                                          il2cpp_runtime_helper_180012890(pSVar23,pUVar25,
                                                                                                                
                                                       MethodInfo_System_Collections_Generic_List_byte_array_Add
                                                       );
                                          iVar27 = iVar27 + count;
                                        } while (iVar27 < iVar28);
                                      }
                                      iVar28 = 0;
                                      while (iVar28 < (pSVar23->fields)._size) {
                                        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                        }
                                        pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
                                        pSVar21 = (System_Byte_array_array *)
                                                  SZArrayNew(TypeInfo_byte_array_array,2);
                                        pSVar22 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                                        if (pSVar22 == (System_Byte_array *)0x0) goto label_181edb883;
                                        if ((int)pSVar22->max_length == 0) goto label_181edb8a7;
                                        pSVar22->m_Items[0] =
                                             TypeInfo_Map_MapTransfer->static_fields->MsgLogicBody;
                                        if (pSVar21 == (System_Byte_array_array *)0x0) goto label_181edb883;
                                        if ((int)pSVar21->max_length == 0) goto label_181edb8a7;
                                        pSVar21->m_Items[0] = pSVar22;
                                        Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar22);
                                        pSVar22 = (System_Byte_array *)
                                                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                            ((System_Collections_Generic_List_object__o *)
                                                             pSVar23,iVar28,
                                                             (MethodInfo_92B830 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_List_byte_array_get_Item
                                                       );
                                        if ((uint)pSVar21->max_length < 2) goto label_181edb8a7;
                                        pSVar21->m_Items[1] = pSVar22;
                                        Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar22);
                                        pMVar13 = 
                                        MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                                        if (pSVar20 == (System_Collections_Generic_List_byte______o *)0x0)
                                        goto label_181edb883;
                                        piVar1 = &(pSVar20->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pSVar12 = (pSVar20->fields)._items;
                                        if (pSVar12 == (System_Byte_array_array_array *)0x0)
                                        goto label_181edb883;
                                        uVar3 = (pSVar20->fields)._size;
                                        if (uVar3 < (uint)pSVar12->max_length) {
                                          (pSVar20->fields)._size = uVar3 + 1;
                                          if ((uint)pSVar12->max_length <= uVar3) goto label_181edb8a7;
                                          pSVar12->m_Items[(int)uVar3] = pSVar21;
                                          Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar3,pSVar21);
                                          iVar28 = iVar28 + 1;
                                        }
                                        else {
                                          System_Collections_Generic_List_object___AddWithResize
                                                    ((System_Collections_Generic_List_object__o *)pSVar20,
                                                     (Il2CppObject *)pSVar21,
                                                     (MethodInfo_93DD50 *)
                                                     pMVar13->klass->rgctx_data[0xe].method);
                                          iVar28 = iVar28 + 1;
                                        }
                                      }
                                    }
                                    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
                                      il2cpp_codegen_runtime_class_init
                                                ((Il2CppClass *)TypeInfo_Map_MapTransfer);
                                    }
                                    pSVar20 = TypeInfo_Map_MapTransfer->static_fields->_mapTransferData;
                                    pSVar21 = (System_Byte_array_array *)
                                              SZArrayNew(TypeInfo_byte_array_array,2);
                                    pSVar22 = (System_Byte_array *)SZArrayNew(TypeInfo_byte_array,1);
                                    if (pSVar22 != (System_Byte_array *)0x0) {
                                      if ((int)pSVar22->max_length == 0) goto label_181edb8a7;
                                      pSVar22->m_Items[0] = TypeInfo_Map_MapTransfer->static_fields->MsgMapEnd
                                      ;
                                      if (pSVar21 != (System_Byte_array_array *)0x0) {
                                        if ((int)pSVar21->max_length == 0) goto label_181edb8a7;
                                        pSVar21->m_Items[0] = pSVar22;
                                        Il2CppCodeGenWriteBarrier(pSVar21->m_Items,pSVar22);
                                        pSVar26 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                                        if (pSVar26 != (System_Text_Encoding_o *)0x0) {
                                          pSVar22 = (*(pSVar26->klass->vtable)._18_GetBytes.methodPtr)
                                                              (pSVar26,TypeInfo_Map_MapTransfer->static_fields
                                                                       ->MapHash,
                                                               (pSVar26->klass->vtable)._18_GetBytes.method);
                                          if ((uint)pSVar21->max_length < 2) goto label_181edb8a7;
                                          pSVar21->m_Items[1] = pSVar22;
                                          Il2CppCodeGenWriteBarrier(pSVar21->m_Items + 1,pSVar22);
                                          pMVar13 = 
                                          MethodInfo_System_Collections_Generic_List_byte_array_array_Add;
                                          if (pSVar20 != (System_Collections_Generic_List_byte______o *)0x0) {
                                            piVar1 = &(pSVar20->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pSVar12 = (pSVar20->fields)._items;
                                            if (pSVar12 != (System_Byte_array_array_array *)0x0) {
                                              uVar3 = (pSVar20->fields)._size;
                                              if (uVar3 < (uint)pSVar12->max_length) {
                                                (pSVar20->fields)._size = uVar3 + 1;
                                                if ((uint)pSVar12->max_length <= uVar3) goto label_181edb8a7;
                                                pSVar12->m_Items[(int)uVar3] = pSVar21;
                                                Il2CppCodeGenWriteBarrier
                                                          (pSVar12->m_Items + (int)uVar3,pSVar21);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)
                                                           pSVar20,(Il2CppObject *)pSVar21,
                                                           (MethodInfo_93DD50 *)
                                                           pMVar13->klass->rgctx_data[0xe].method);
                                              }
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
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto label_181edb883;
          }
        }
label_181edb8a7:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_181edb883:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$OnTransferMapRPC
// il2cpp: void Map_MapTransfer__OnTransferMapRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181edbb60

void Map_MapTransfer__OnTransferMapRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  int32_t messageTotal;
  Photon_Realtime_Player_o *__this;
  Map_OrderedTransferReceiver_o *__this_00;
  bool bVar1;
  Map_MapTransfer___c__DisplayClass22_0_o *object;
  System_Func_T1__T2__T3__TResult__o *__this_01;
  System_Action_T1__T2__o *__this_02;
  System_Action_o *__this_03;
  
  if (Il2CppMethodInitialized_18434512a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_byte_array_array_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_byte_array_array_int_int_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_ResetReceiveState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_MapTransfer_ValidateMessage);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Map_MapTransfer_c__DisplayClass22_0_OnTransferMapRPC_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_c__DisplayClass22_0);
    Il2CppMethodInitialized_18434512a = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_c__DisplayClass22_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Map_MapTransfer___c__DisplayClass22_0_o *)0x0) {
    __this = (info->fields).Sender;
    (object->fields).msgTotal = msgTotal;
    if (__this != (Photon_Realtime_Player_o *)0x0) {
      bVar1 = Photon_Realtime_Player__get_IsMasterClient(__this,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        messageTotal = (object->fields).msgTotal;
        __this_00 = TypeInfo_Map_MapTransfer->static_fields->_receiver;
        __this_01 = (System_Func_T1__T2__T3__TResult__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_byte_array_array_int_int_bool);
        System_Func_object__int__int__bool____ctor
                  (__this_01,(Il2CppObject *)0x0,(intptr_t)MethodInfo_Map_MapTransfer_ValidateMessage,
                   (MethodInfo_172C890 *)0x0);
        __this_02 = (System_Action_T1__T2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_byte_array_array_int);
        System_Action_object__int____ctor
                  (__this_02,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Map_MapTransfer_c__DisplayClass22_0_OnTransferMapRPC_b__0,
                   (MethodInfo_1467620 *)0x0);
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_Map_MapTransfer_ResetReceiveState,(MethodInfo *)0x0);
        if (__this_00 == (Map_OrderedTransferReceiver_o *)0x0) goto label_181edbd1b;
        Map_OrderedTransferReceiver__TryReceive
                  (__this_00,byteArr,msgNumber,messageTotal,
                   (System_Func_byte______int__int__bool__o *)__this_01,
                   (System_Action_byte______int__o *)__this_02,__this_03,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_181edbd1b:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$ValidateMessage
// il2cpp: bool Map_MapTransfer__ValidateMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x181edccd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181edce39: cmp dword ptr [rbx + 0x18], 5
// asm:   0x181edce3d: sete al
// asm:   0x181edce40: jmp 0x181edcdfd

bool Map_MapTransfer__ValidateMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  int iVar2;
  System_Byte_array *pSVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_18434512b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_18434512b = '\x01';
  }
  if (message == (System_Byte_array_array *)0x0) goto label_181edce46;
  if ((int)message->max_length < 2) goto label_181edce42;
  if ((int)message->max_length == 0) {
label_181edce4c:
    ThrowIndexOutOfRangeException();
  }
  pSVar3 = message->m_Items[0];
  if (pSVar3 == (System_Byte_array *)0x0) goto label_181edce46;
  if ((int)pSVar3->max_length == 1) {
    if ((int)pSVar3->max_length == 0) goto label_181edce4c;
    uVar1 = pSVar3->m_Items[0];
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if (uVar1 == TypeInfo_Map_MapTransfer->static_fields->MsgMapStart) {
      if (messageIndex == 0) {
        return (int)message->max_length == 5;
      }
      goto label_181edce42;
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if (uVar1 == TypeInfo_Map_MapTransfer->static_fields->MsgMapBody) {
label_181edce12:
      if (((messageIndex < 1) || (messageTotal + -1 <= messageIndex)) || ((int)message->max_length != 2))
      goto label_181edce42;
      if (message->m_Items[1] == (System_Byte_array *)0x0) {
label_181edce46:
        ThrowNullReferenceException();
      }
      iVar4 = (int)message->m_Items[1]->max_length;
      bVar6 = SBORROW4(iVar4,10000);
      iVar4 = iVar4 + -10000;
      bVar5 = iVar4 == 0;
    }
    else {
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      if (uVar1 == TypeInfo_Map_MapTransfer->static_fields->MsgLogicBody) goto label_181edce12;
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      if (((uVar1 != TypeInfo_Map_MapTransfer->static_fields->MsgMapEnd) ||
          (messageIndex != messageTotal + -1)) || ((int)message->max_length != 2)) goto label_181edce42;
      if (message->m_Items[1] == (System_Byte_array *)0x0) goto label_181edce46;
      iVar2 = (int)message->m_Items[1]->max_length;
      bVar6 = SBORROW4(iVar2,0x400);
      iVar4 = iVar2 + -0x400;
      bVar5 = iVar2 == 0x400;
    }
    bVar5 = bVar5 || bVar6 != iVar4 < 0;
  }
  else {
label_181edce42:
    bVar5 = false;
  }
  return bVar5;
}


// Map.MapTransfer$$ProcessMessage
// il2cpp: void Map_MapTransfer__ProcessMessage (System_Byte_array_array* message, int32_t messageIndex, int32_t messageTotal, const MethodInfo* method);
// 0x181edbd30
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181edc551: mov rdx, qword ptr [rbx + 0x40]
// asm:   0x181edc555: mov r9d, 0xa00000
// asm:   0x181edc55b: mov r8d, 0x1000
// asm:   0x181edc561: mov qword ptr [rsp + 0x20], r14
// asm:   0x181edc566: call 0x1823328c0  ; Utility_Algorithms_CompressionAlgorithm__DecompressString()
// asm:   0x181edc56b: mov rcx, rax
// asm:   0x181edc56e: xor edx, edx
// asm:   0x181edc570: call 0x181dc70f0  ; SimpleJSONFixed_JSON__Parse()
// asm:   0x181edc575: mov rcx, qword ptr [rip + 0x21e4cec]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc57c: mov rdx, qword ptr [rcx + 0xb8]
// asm:   0x181edc583: mov qword ptr [rdx + 0x28], rax
// asm:   0x181edc587: mov rdx, rax
// asm:   0x181edc58a: mov rcx, qword ptr [rip + 0x21e4cd7]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc591: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x181edc598: add rcx, 0x28
// asm:   0x181edc59c: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181edc5a1: mov rcx, qword ptr [rip + 0x2213660]  ; TypeInfo_System_Collections_Generic_List_byte
// asm:   0x181edc5a8: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181edc5ad: mov rdx, qword ptr [rip + 0x21ae784]  ; MethodInfo_System_Collections_Generic_List_byte_ctor
// asm:   0x181edc5b4: mov rcx, rax
// asm:   0x181edc5b7: mov rbx, rax
// asm:   0x181edc5ba: call 0x18092a240  ; System_Collections_Generic_List_KeyValuePair_int__object_____ctor()
// asm:   0x181edc5bf: mov rcx, qword ptr [rip + 0x21e4ca2]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc5c6: mov rdx, qword ptr [rcx + 0xb8]
// asm:   0x181edc5cd: mov qword ptr [rdx + 0x30], rbx
// asm:   0x181edc5d1: mov rdx, rbx
// asm:   0x181edc5d4: mov rcx, qword ptr [rip + 0x21e4c8d]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc5db: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x181edc5e2: add rcx, 0x30
// asm:   0x181edc5e6: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181edc5eb: mov rcx, qword ptr [rip + 0x2213616]  ; TypeInfo_System_Collections_Generic_List_byte
// asm:   0x181edc5f2: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181edc5f7: mov rdx, qword ptr [rip + 0x21ae73a]  ; MethodInfo_System_Collections_Generic_List_byte_ctor
// asm:   0x181edc5fe: mov rcx, rax
// asm:   0x181edc601: mov rbx, rax
// asm:   0x181edc604: call 0x18092a240  ; System_Collections_Generic_List_KeyValuePair_int__object_____ctor()
// asm:   0x181edc609: mov rcx, qword ptr [rip + 0x21e4c58]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc610: mov rdx, qword ptr [rcx + 0xb8]
// asm:   0x181edc617: mov qword ptr [rdx + 0x40], rbx
// asm:   0x181edc61b: mov rdx, rbx
// asm:   0x181edc61e: mov rcx, qword ptr [rip + 0x21e4c43]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc625: mov rcx, qword ptr [rcx + 0xb8]
// asm:   0x181edc62c: add rcx, 0x40
// asm:   0x181edc630: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181edc635: mov rax, qword ptr [rip + 0x21e4c2c]  ; TypeInfo_Map_MapTransfer
// asm:   0x181edc63c: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x181edc643: mov byte ptr [rcx + 0x58], r14b
// asm:   0x181edc647: jmp 0x181edc22d

void Map_MapTransfer__ProcessMessage
               (System_Byte_array_array *message,int32_t messageIndex,int32_t messageTotal,MethodInfo *method)

{
  uint8_t uVar1;
  int32_t deltaRows;
  UI_LoadingMenu_o *__this;
  System_Byte_array *pSVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Map_MapScriptObjects_o *pMVar4;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar5;
  Map_MapScriptOptions_o *pMVar6;
  Map_MapScriptCustomAssets_o *pMVar7;
  Settings_WeatherSet_o *pSVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  System_String_o *pSVar10;
  System_Text_Encoding_o *pSVar11;
  Photon_Realtime_Player_o *player;
  Map_MapScript_o *pMVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Collections_Generic_List_byte__o *pSVar14;
  Il2CppClass *klass;
  System_InvalidOperationException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434512c == '\0') {
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
    Il2CppMethodInitialized_18434512c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this = TypeInfo_UI_UIManager->static_fields->LoadingMenu;
  if ((__this == (UI_LoadingMenu_o *)0x0) ||
     (UI_LoadingMenu__UpdateLoading
                (__this,((float)messageIndex / (float)messageTotal) * 0.5,false,false,(MethodInfo *)0x0),
     message == (System_Byte_array_array *)0x0)) goto label_181edc64c;
  if ((int)message->max_length == 0) {
label_181edc69b:
    ThrowIndexOutOfRangeException();
  }
  pSVar2 = message->m_Items[0];
  if (pSVar2 == (System_Byte_array *)0x0) goto label_181edc64c;
  if ((int)pSVar2->max_length == 0) goto label_181edc69b;
  uVar1 = pSVar2->m_Items[0];
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  if (uVar1 == TypeInfo_Map_MapTransfer->static_fields->MsgMapStart) {
    pSVar10 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    TypeInfo_Map_MapTransfer->static_fields->MapHash = pSVar10;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->MapHash,pSVar10);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    PhotonExtensions__SetCustomProperty
              (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CustomMapHash,
               (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    pMVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
    Map_MapScript___ctor(pMVar12,(MethodInfo *)0x0);
    if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    }
    TypeInfo_Map_MapManager->static_fields->MapScript = pMVar12;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapManager->static_fields->MapScript,pMVar12);
    pMVar12 = TypeInfo_Map_MapManager->static_fields->MapScript;
    if (pMVar12 != (Map_MapScript_o *)0x0) {
      pMVar6 = (pMVar12->fields).Options;
      if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
      }
      if ((uint)message->max_length < 2) goto label_181edc69b;
      pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)
               TypeInfo_Utility_DataCompressors->static_fields->Brotli;
      if ((pUVar5 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
         (pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              (pUVar5,message->m_Items[1],0x1000,0xa00000,(MethodInfo *)0x0),
         pMVar6 != (Map_MapScriptOptions_o *)0x0)) {
        (*(pMVar6->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar6,pSVar10,(pMVar6->klass->vtable)._9_Deserialize.method);
        pMVar12 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar12 != (Map_MapScript_o *)0x0) {
          if ((uint)message->max_length < 3) goto label_181edc69b;
          pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)
                   TypeInfo_Utility_DataCompressors->static_fields->Brotli;
          if (pUVar5 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            pMVar7 = (pMVar12->fields).CustomAssets;
            pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                (pUVar5,message->m_Items[2],0x1000,0xa00000,(MethodInfo *)0x0);
            if (pMVar7 != (Map_MapScriptCustomAssets_o *)0x0) {
              (*(pMVar7->klass->vtable)._9_Deserialize.methodPtr)
                        (pMVar7,pSVar10,(pMVar7->klass->vtable)._9_Deserialize.method);
              pMVar12 = TypeInfo_Map_MapManager->static_fields->MapScript;
              if (pMVar12 != (Map_MapScript_o *)0x0) {
                if ((uint)message->max_length < 4) goto label_181edc69b;
                pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)
                         TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                if (pUVar5 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                  pSVar8 = (pMVar12->fields).Weather;
                  pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                      (pUVar5,message->m_Items[3],0x1000,0xa00000,(MethodInfo *)0x0);
                  if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                    (*(pSVar8->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                              (pSVar8,pSVar10,(pSVar8->klass->vtable)._9_DeserializeFromJsonString.method);
                    if ((uint)message->max_length < 5) goto label_181edc69b;
                    pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)
                             TypeInfo_Utility_DataCompressors->static_fields->Brotli;
                    if (pUVar5 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                      pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          (pUVar5,message->m_Items[4],0x1000,0xa00000,(MethodInfo *)0x0);
                      pSVar13 = SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
                      TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable = pSVar13;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable,pSVar13);
                      pSVar14 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                ((System_Collections_Generic_LowLevelList_T__o *)pSVar14,
                                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
                      TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed = pSVar14;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed,pSVar14);
                      pSVar14 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
                      System_Collections_Generic_List_byte____ctor
                                ((System_Collections_Generic_LowLevelList_T__o *)pSVar14,
                                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
                      TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed = pSVar14;
                      Il2CppCodeGenWriteBarrier
                                (&TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed,pSVar14);
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
    goto label_181edc64c;
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  if (uVar1 == TypeInfo_Map_MapTransfer->static_fields->MsgMapBody) {
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if (TypeInfo_Map_MapTransfer->static_fields->_receivingLogic != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_InvalidOperationException);
      __this_00 = (System_InvalidOperationException_o *)il2cpp_codegen_object_new(klass);
      pSVar10 = il2cpp_codegen_get_runtime_metadata(&"Map data received after map logic data.");
      System_InvalidOperationException___ctor_1b2aec0(__this_00,pSVar10,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Map_MapTransfer_ProcessMessage);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if ((uint)message->max_length < 2) goto label_181edc69b;
    pSVar14 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
  }
  else {
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    if (uVar1 != TypeInfo_Map_MapTransfer->static_fields->MsgLogicBody) {
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      if (uVar1 != TypeInfo_Map_MapTransfer->static_fields->MsgMapEnd) {
        return;
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      pSVar14 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
      if (pSVar14 == (System_Collections_Generic_List_byte__o *)0x0) goto label_181edc64c;
      if (0 < (pSVar14->fields)._size) {
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed;
        if (pSVar3 == (System_Collections_Generic_List_T__o *)0x0) goto label_181edc64c;
        pUVar9 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                           (pSVar3,(MethodInfo_929FE0 *)
                                   MethodInfo_System_Collections_Generic_List_byte_ToArray);
        pSVar13 = TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable;
        deltaRows = TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows;
        if ((TypeInfo_Utility_CSVCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CSVCompression);
        }
        pSVar10 = Utility_CSVCompression__Decompress
                            ((System_Byte_array *)pUVar9,pSVar13,deltaRows,0x3b,0x2c,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar12 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if ((pMVar12 == (Map_MapScript_o *)0x0) ||
           (pMVar4 = (pMVar12->fields).Objects, pMVar4 == (Map_MapScriptObjects_o *)0x0)) goto label_181edc64c;
        (*(pMVar4->klass->vtable)._9_Deserialize.methodPtr)
                  (pMVar4,pSVar10,(pMVar4->klass->vtable)._9_Deserialize.method);
      }
      if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
      }
      pSVar14 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
      if (pSVar14 == (System_Collections_Generic_List_byte__o *)0x0) goto label_181edc64c;
      if (0 < (pSVar14->fields)._size) {
        if ((TypeInfo_Utility_DataCompressors->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DataCompressors);
        }
        pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)
                 TypeInfo_Utility_DataCompressors->static_fields->Brotli;
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        pSVar3 = (System_Collections_Generic_List_T__o *)
                 TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
        if ((pSVar3 == (System_Collections_Generic_List_T__o *)0x0) ||
           (pUVar9 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                               (pSVar3,(MethodInfo_929FE0 *)
                                       MethodInfo_System_Collections_Generic_List_byte_ToArray),
           pUVar5 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) goto label_181edc64c;
        pSVar10 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                            (pUVar5,(System_Byte_array *)pUVar9,0x1000,0xa00000,(MethodInfo *)0x0);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        pMVar12 = TypeInfo_Map_MapManager->static_fields->MapScript;
        if (pMVar12 == (Map_MapScript_o *)0x0) goto label_181edc64c;
        (pMVar12->fields).Logic = pSVar10;
        Il2CppCodeGenWriteBarrier(&(pMVar12->fields).Logic,pSVar10);
      }
      pSVar11 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ((uint)message->max_length < 2) goto label_181edc69b;
      if (pSVar11 != (System_Text_Encoding_o *)0x0) {
        pSVar10 = (*(pSVar11->klass->vtable)._34_GetString.methodPtr)
                            (pSVar11,message->m_Items[1],(pSVar11->klass->vtable)._34_GetString.method);
        if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
        }
        TypeInfo_Map_MapTransfer->static_fields->MapHash = pSVar10;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->MapHash,pSVar10);
        if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
        }
        Map_MapManager__LoadMap(true,(MethodInfo *)0x0);
        return;
      }
      goto label_181edc64c;
    }
    if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
    }
    TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = true;
    if ((uint)message->max_length < 2) goto label_181edc69b;
    pSVar14 = TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed;
  }
  if (pSVar14 != (System_Collections_Generic_List_byte__o *)0x0) {
    System_Collections_Generic_List_byte___AddRange
              (pSVar14,(System_Collections_Generic_IEnumerable_T__o *)message->m_Items[1],
               (MethodInfo_1856E30 *)MethodInfo_System_Collections_Generic_List_byte_AddRange);
    return;
  }
label_181edc64c:
  ThrowNullReferenceException();
}


// Map.MapTransfer$$ResetReceiveState
// il2cpp: void Map_MapTransfer__ResetReceiveState (const MethodInfo* method);
// 0x181edc6b0

void Map_MapTransfer__ResetReceiveState(MethodInfo *method)

{
  System_Collections_Generic_List_byte__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434512d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_byte_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_byte);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_18434512d = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable = (SimpleJSONFixed_JSONNode_o *)0x0;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptSymbolTable,(void *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_mapScriptCompressed,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_byte);
  System_Collections_Generic_List_byte____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_byte_ctor);
  TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_logicScriptCompressed,pSVar1);
  TypeInfo_Map_MapTransfer->static_fields->_receivingLogic = false;
  return;
}


// Map.MapTransfer$$TransferMapData
// il2cpp: System_Collections_IEnumerator_o* Map_MapTransfer__TransferMapData (Map_MapTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181edcaa0

System_Collections_IEnumerator_o *
Map_MapTransfer__TransferMapData
          (Map_MapTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Map_MapTransfer__TransferMapData_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_18434512e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer_TransferMapData_d__26);
    Il2CppMethodInitialized_18434512e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapTransfer_TransferMapData_d__26);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).player,player);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Map.MapTransfer$$.ctor
// il2cpp: void Map_MapTransfer___ctor (Map_MapTransfer_o* __this, const MethodInfo* method);
// 0x180528540

void
Map_MapTransfer___ctor(Map_MapTransfer_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$.cctor
// il2cpp: void Map_MapTransfer___cctor (const MethodInfo* method);
// 0x181edce60

void Map_MapTransfer___cctor(MethodInfo *method)

{
  Map_ContentTransferChangeTracker_o *__this;
  Map_OrderedTransferReceiver_o *__this_00;
  
  if (Il2CppMethodInitialized_18434512f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_ContentTransferChangeTracker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_OrderedTransferReceiver);
    Il2CppMethodInitialized_18434512f = '\x01';
  }
  TypeInfo_Map_MapTransfer->static_fields->MsgMapStart = '\0';
  TypeInfo_Map_MapTransfer->static_fields->MsgMapBody = '\x01';
  TypeInfo_Map_MapTransfer->static_fields->MsgLogicBody = '\x02';
  TypeInfo_Map_MapTransfer->static_fields->MsgMapEnd = '\x03';
  TypeInfo_Map_MapTransfer->static_fields->CompressDeltaRows = 0x16;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_ContentTransferChangeTracker);
  Map_ContentTransferChangeTracker___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Map_MapTransfer->static_fields->_changeTracker = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_changeTracker,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_OrderedTransferReceiver);
  Map_OrderedTransferReceiver___ctor(__this_00,0x80000000,(MethodInfo *)0x0);
  TypeInfo_Map_MapTransfer->static_fields->_receiver = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Map_MapTransfer->static_fields->_receiver,__this_00);
  return;
}


