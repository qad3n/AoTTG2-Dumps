// Type: Map.CustomLogicTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/CustomLogicTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs
// --------------------------------

// Map.CustomLogicTransfer.<TransferLogicData>d__14$$.ctor
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14___ctor (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x409a630

void Map_CustomLogicTransfer__TransferLogicData_d__14___ctor
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14__System_IDisposable_Dispose (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x409a6a0

void Map_CustomLogicTransfer__TransferLogicData_d__14__System_IDisposable_Dispose
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$MoveNext
// il2cpp: bool Map_CustomLogicTransfer__TransferLogicData_d__14__MoveNext (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x409a6b0

bool_conflict
Map_CustomLogicTransfer__TransferLogicData_d__14__MoveNext
          (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *targetPlayer;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  long lVar4;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar5;
  int iVar6;
  undefined4 uStack_40;
  int32_t iStack_3c;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (g_data_057ac467 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"TransferLogicRPC");
    g_data_057ac467 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar6;
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar6 = 0;
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
  if (lVar4 == 0) {
label_0409a9b1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return 0;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
    if ((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar3 = System_Collections_Generic_List_object___get_Item
                           (__this_00,(__this->fields)._i_5__2,MethodInfo_Byte_get_Item),
       parameters == (System_Object_array *)0x0)) goto label_0409a9b1;
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
    goto label_0409a9bb;
    pPStack_38 = pPVar2;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar3;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar3);
      iStack_3c = (__this->fields)._i_5__2;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
      goto label_0409a9bb;
      if (1 < (uint)parameters->max_length) {
        parameters->m_Items[1] = pIVar3;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pIVar3);
        lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
        if (lVar4 != 0) {
          uStack_40 = *(undefined4 *)(lVar4 + 0x18);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_40);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
          goto label_0409a9bb;
          pPVar2 = pPStack_38;
          if ((uint)parameters->max_length < 3) goto label_0409a9b6;
          parameters->m_Items[2] = pIVar3;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pIVar3);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_3efa220(pPVar2,"TransferLogicRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
        goto label_0409a9b1;
      }
    }
  }
label_0409a9b6:
  il2cpp_runtime_helper_022b2ca0();
label_0409a9bb:
  lVar4 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar4,0);
  return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x409a9d0

Il2CppObject *
Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_Reset (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x409a9e0

void Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_Reset
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_get_Current (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x409aa20

Il2CppObject *
Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer$$Init
// il2cpp: void Map_CustomLogicTransfer__Init (const MethodInfo* method);
// 0x4099440

void Map_CustomLogicTransfer__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  
  if (g_data_057ac45f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicTransfer_CreateSingleton_CustomLogicTransfer);
    g_data_057ac45f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10),MethodInfo_CustomLogicTransfer_CreateSingleton_CustomLogicTransfer);
  lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x4099510

void Map_CustomLogicTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  long lVar4;
  int iVar5;
  bool_conflict bVar6;
  Photon_Realtime_Player_array *pPVar7;
  System_Object_array *pSVar8;
  System_String_o *pSVar9;
  System_Byte_array *pSVar10;
  System_Collections_Generic_List_byte__o *pSVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  Il2CppObject *pIVar13;
  Il2CppClass *pIVar14;
  void *pvVar15;
  Il2CppObject *pIVar16;
  System_Text_Encoding_o *pSVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  MethodInfo *method_00;
  Il2CppClass *pIVar23;
  System_Collections_Generic_IEnumerable_T__o *collection;
  int32_t index;
  ulong uVar24;
  Utility_Algorithms_CompressionAlgorithm_o *__this_03;
  uint uVar25;
  
  if (g_data_057ac460 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac460 = '\x01';
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_04099579;
label_0409952d:
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  else {
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409952d;
label_04099579:
    il2cpp_runtime_helper_02337ed0();
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(pUVar3,(MethodInfo *)0x0);
    *(undefined1 *)TypeInfo_CustomLogicTransfer->static_fields = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac461 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"LoadCachedLogicRPC");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac461 = '\x01';
  }
  pIVar14 = TypeInfo_CustomLogicTransfer;
  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicTransfer__CreateTransferData((MethodInfo *)pIVar14);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar7 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  if (pPVar7 != (Photon_Realtime_Player_array *)0x0) {
    if ((int)pPVar7->max_length < 1) {
label_0409977c:
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined1 *)TypeInfo_CustomLogicTransfer->static_fields = 1;
      return;
    }
    uVar24 = 0;
    if ((pPVar7->max_length & 0xffffffff) != 0) {
      do {
        player = pPVar7->m_Items[uVar24];
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = PhotonExtensions__GetStringProperty
                           (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30),"",
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = *(MethodInfo **)((long)TypeInfo_CustomLogicTransfer->static_fields + 8);
        bVar6 = System_String__op_Inequality(pSVar9,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_040997b0;
          Photon_Pun_PhotonView__RPC_3efa220(__this,"LoadCachedLogicRPC",player,pSVar8,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Map_CustomLogicTransfer__Transfer(player,method_00);
        }
        uVar24 = uVar24 + 1;
        uVar25 = (uint)pPVar7->max_length;
        if ((long)(int)uVar25 <= (long)uVar24) goto label_0409977c;
      } while (uVar24 < uVar25);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040997b0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac463 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte_GetRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac463 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = Utility_Util__CreateMD5(pSVar9,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar15 = TypeInfo_CustomLogicTransfer->static_fields;
  *(System_String_o **)((long)pvVar15 + 8) = pSVar9;
  il2cpp_runtime_helper_022b4080((long)pvVar15 + 8,pSVar9);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) ==
      (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
label_0409a102:
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar10 = Utility_Algorithms_CompressionAlgorithm__CompressString
                        ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                         *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),1,(MethodInfo *)0x0);
    pSVar11 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_byte____ctor_357ee60
              (pSVar11,(System_Collections_Generic_IEnumerable_T__o *)pSVar10,MethodInfo_List_1_System_Byte);
    pvVar15 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x20) = pSVar11;
    il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x20,pSVar11);
    pSVar12 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(pSVar12,MethodInfo_List_1_System_Byte);
    pvVar15 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_object__o **)((long)pvVar15 + 0x28) = pSVar12;
    il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x28,pSVar12);
    if (pSVar10 == (System_Byte_array *)0x0) goto label_0409a102;
    uVar25 = (uint)pSVar10->max_length;
    pSVar12 = (System_Collections_Generic_List_object__o *)(ulong)uVar25;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_Byte);
    if ((int)uVar25 < 1) {
label_04099b3e:
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
      pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
      if (pIVar14 == (Il2CppClass *)0x0) goto label_0409a102;
      if (*(int *)&(pIVar14->_1).namespaze != 0) {
        *(undefined1 *)&(pIVar14->_1).byval_arg.data =
             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18);
        if (pIVar13 == (Il2CppObject *)0x0) goto label_0409a102;
        if (*(int *)&pIVar13[1].monitor != 0) {
          pIVar13[2].klass = pIVar14;
          il2cpp_runtime_helper_022b4080(pIVar13 + 2);
          pvVar15 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
          if (1 < *(uint *)&pIVar13[1].monitor) {
            pIVar13[2].monitor = pvVar15;
            il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pvVar15);
            lVar4 = MethodInfo_Void_Add;
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (__this_00->fields)._items;
              if (pSVar8 != (System_Object_array *)0x0) {
                uVar25 = (__this_00->fields)._size;
                if (uVar25 < (uint)pSVar8->max_length) {
                  (__this_00->fields)._size = uVar25 + 1;
                  pSVar8->m_Items[(int)uVar25] = pIVar13;
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar25,pIVar13);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_00,pIVar13,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                  iVar19 = (__this_01->fields)._size;
                  if (iVar19 != 0) {
joined_r0x04099e14:
                    if (iVar19 < 1) {
                      return;
                    }
                    index = 0;
                    iVar21 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    do {
                      if (iVar21 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar12 = *(System_Collections_Generic_List_object__o **)
                                 ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                      if (index == iVar19 + -1) {
                        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                        pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar14 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar14->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar14->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                        if (pIVar13 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar13[1].monitor == 0) goto label_0409a0a3;
                        pIVar13[2].klass = pIVar14;
                        il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar14);
                        pIVar16 = System_Collections_Generic_List_object___get_Item
                                            (__this_01,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar13[1].monitor < 2) goto label_0409a0a3;
                        pIVar13[2].monitor = pIVar16;
                        il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pIVar16);
                        pSVar17 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                        if (pSVar17 == (System_Text_Encoding_o *)0x0) goto label_0409a102;
                        pIVar14 = (Il2CppClass *)
                                  (*(pSVar17->klass->vtable)._18_GetBytes.methodPtr)
                                            (pSVar17,*(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                             (pSVar17->klass->vtable)._18_GetBytes.method);
                        if (*(uint *)&pIVar13[1].monitor < 3) goto label_0409a0a3;
                        pIVar13[3].klass = pIVar14;
                        il2cpp_runtime_helper_022b4080(pIVar13 + 3,pIVar14);
                        lVar4 = MethodInfo_Void_Add;
                      }
                      else {
                        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
                        pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar14 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar14->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar14->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x19);
                        if (pIVar13 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar13[1].monitor == 0) goto label_0409a0a3;
                        pIVar13[2].klass = pIVar14;
                        il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar14);
                        pIVar16 = System_Collections_Generic_List_object___get_Item
                                            (__this_01,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar13[1].monitor < 2) goto label_0409a0a3;
                        pIVar13[2].monitor = pIVar16;
                        il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pIVar16);
                        lVar4 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar4;
                      if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409a102;
                      piVar1 = &(pSVar12->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar8 = (pSVar12->fields)._items;
                      if (pSVar8 == (System_Object_array *)0x0) goto label_0409a102;
                      uVar25 = (pSVar12->fields)._size;
                      if (uVar25 < (uint)pSVar8->max_length) {
                        (pSVar12->fields)._size = uVar25 + 1;
                        pSVar8->m_Items[(int)uVar25] = pIVar13;
                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar25,pIVar13);
                        iVar19 = (__this_01->fields)._size;
                        if (iVar19 <= index + 1) {
                          return;
                        }
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar12,pIVar13,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
                        ;
                        iVar19 = (__this_01->fields)._size;
                        if (iVar19 <= index + 1) {
                          return;
                        }
                      }
                      index = index + 1;
                      iVar21 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    } while( true );
                  }
                  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar12 = *(System_Collections_Generic_List_object__o **)
                             ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                  pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                  if (pIVar14 != (Il2CppClass *)0x0) {
                    if (*(int *)&(pIVar14->_1).namespaze != 0) {
                      *(undefined1 *)&(pIVar14->_1).byval_arg.data =
                           *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                      if (pIVar13 == (Il2CppObject *)0x0) goto label_0409a102;
                      if (*(int *)&pIVar13[1].monitor != 0) {
                        pIVar13[2].klass = pIVar14;
                        il2cpp_runtime_helper_022b4080(pIVar13 + 2);
                        pvVar15 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (1 < *(uint *)&pIVar13[1].monitor) {
                          pIVar13[2].monitor = pvVar15;
                          il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pvVar15);
                          pSVar17 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                          if (pSVar17 != (System_Text_Encoding_o *)0x0) {
                            pIVar14 = (Il2CppClass *)
                                      (*(pSVar17->klass->vtable)._18_GetBytes.methodPtr)
                                                (pSVar17,*(undefined8 *)
                                                          ((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                                 (pSVar17->klass->vtable)._18_GetBytes.method);
                            if (*(uint *)&pIVar13[1].monitor < 3) goto label_0409a0a3;
                            pIVar13[3].klass = pIVar14;
                            il2cpp_runtime_helper_022b4080(pIVar13 + 3,pIVar14);
                            lVar4 = MethodInfo_Void_Add;
                            if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
                              piVar1 = &(pSVar12->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar8 = (pSVar12->fields)._items;
                              if (pSVar8 != (System_Object_array *)0x0) {
                                uVar25 = (pSVar12->fields)._size;
                                if (uVar25 < (uint)pSVar8->max_length) {
                                  (pSVar12->fields)._size = uVar25 + 1;
                                  pSVar8->m_Items[(int)uVar25] = pIVar13;
                                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar25,pIVar13);
                                  iVar19 = (__this_01->fields)._size;
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            (pSVar12,pIVar13,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                  iVar19 = (__this_01->fields)._size;
                                }
                                goto joined_r0x04099e14;
                              }
                            }
                          }
                          goto label_0409a102;
                        }
                      }
                    }
                    goto label_0409a0a3;
                  }
                }
              }
            }
            goto label_0409a102;
          }
        }
      }
label_0409a0a3:
      uVar25 = (uint)pSVar12;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar19 = 0;
      iVar21 = 10000;
      do {
        while( true ) {
          iVar5 = uVar25 - iVar19;
          if (iVar21 + iVar19 <= (int)uVar25) {
            iVar5 = iVar21;
          }
          iVar21 = iVar5;
          if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
          if ((pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) ||
             (__this_02 = System_Collections_Generic_List_byte___GetRange(pSVar11,iVar19,iVar21,MethodInfo_List_1_System_Byte_GetRange),
             __this_02 == (System_Collections_Generic_List_T__o *)0x0)) goto label_0409a102;
          pSVar10 = System_Collections_Generic_List_byte___ToArray
                              ((System_Collections_Generic_List_byte__o *)__this_02,
                               (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar8 = (__this_01->fields)._items;
          if (pSVar8 == (System_Object_array *)0x0) goto label_0409a102;
          uVar20 = (__this_01->fields)._size;
          if ((uint)pSVar8->max_length <= uVar20) break;
          (__this_01->fields)._size = uVar20 + 1;
          pSVar8->m_Items[(int)uVar20] = &pSVar10->obj;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar20,pSVar10);
          iVar19 = iVar19 + iVar21;
          if ((int)uVar25 <= iVar19) goto label_04099b3e;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,&pSVar10->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        iVar19 = iVar19 + iVar21;
      } while (iVar19 < (int)uVar25);
      goto label_04099b3e;
    }
    uVar20 = 10000;
    if ((int)uVar25 < 0x2711) {
      uVar20 = uVar25;
    }
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
    if ((pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) ||
       (pIVar14 = (Il2CppClass *)
                  System_Collections_Generic_List_byte___GetRange(pSVar11,0,uVar20,MethodInfo_List_1_System_Byte_GetRange),
       pIVar14 == (Il2CppClass *)0x0)) goto label_0409a102;
  }
  pIVar23 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pIVar14,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac462 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac462 = '\x01';
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a1f3;
label_0409a14c:
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  else {
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a14c;
label_0409a1f3:
    il2cpp_runtime_helper_02337ed0();
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac465 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
      g_data_057ac465 = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
    pIVar23 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar13[2].klass = pIVar14;
      il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar14);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (pUVar3,(System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
    g_data_057ac465 = '\x01';
  }
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
  uVar22 = 0;
  pIVar13 = pIVar16;
  System_Object___ctor(pIVar16,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar16[1].klass = 0;
  if (pIVar16 != (Il2CppObject *)0x0) {
    pIVar16[2].klass = pIVar23;
    il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar23);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  if (pIVar14 != (Il2CppClass *)0x0) {
    uVar22 = 0;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient((Photon_Realtime_Player_o *)pIVar14,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (pIVar13 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar13[1].monitor == 0) goto label_0409a621;
      pIVar23 = pIVar13[2].klass;
      if (pIVar23 == (Il2CppClass *)0x0) goto label_0409a61c;
      if (*(int *)&(pIVar23->_1).namespaze == 0) goto label_0409a621;
      cVar2 = *(char *)&(pIVar23->_1).byval_arg.data;
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (cVar2 == *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar25 = *(uint *)&pIVar13[1].monitor;
        pIVar14 = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a378;
label_0409a432:
        uVar18 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar4 + 0x28) = uVar18;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28,uVar18);
        pSVar11 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar11,MethodInfo_List_1_System_Byte);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar15 = TypeInfo_CustomLogicTransfer->static_fields;
        *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x20) = pSVar11;
        il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x20);
        uVar22 = SUB84(pSVar11,0);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a4de;
label_0409a385:
        uVar25 = *(uint *)&pIVar13[1].monitor;
        pIVar14 = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = pIVar14;
      if (uVar25 < 2) goto label_0409a621;
      pSVar11 = *(System_Collections_Generic_List_byte__o **)((long)pIVar14->static_fields + 0x20);
      pIVar14 = (Il2CppClass *)0x0;
      if (pSVar11 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      collection = pIVar13[2].monitor;
      System_Collections_Generic_List_byte___AddRange(pSVar11,collection,MethodInfo_Void_AddRange);
      uVar22 = SUB84(collection,0);
      if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a51d;
label_0409a3f6:
        pIVar14 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar23 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        pIVar14 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar23 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = pIVar23;
      if (pIVar14 != (Il2CppClass *)0x0) {
        pSVar10 = System_Collections_Generic_List_byte___ToArray
                            ((System_Collections_Generic_List_byte__o *)pIVar14,(MethodInfo_3581700 *)pIVar23)
        ;
        uVar22 = SUB84(pIVar23,0);
        if (__this_03 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar9 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_03,pSVar10,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar9;
          il2cpp_runtime_helper_022b4080();
          uVar22 = SUB84(pSVar9,0);
          pIVar14 = (Il2CppClass *)0x0;
          pSVar17 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if (*(uint *)&pIVar13[1].monitor < 3) goto label_0409a621;
          if (pSVar17 != (System_Text_Encoding_o *)0x0) {
            uVar18 = (*(pSVar17->klass->vtable)._35_GetString.methodPtr)
                               (pSVar17,pIVar13[3].klass,(pSVar17->klass->vtable)._35_GetString.method);
            pvVar15 = TypeInfo_CustomLogicTransfer->static_fields;
            *(undefined8 *)((long)pvVar15 + 8) = uVar18;
            il2cpp_runtime_helper_022b4080((long)pvVar15 + 8,uVar18);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0409a61c:
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&((System_Collections_Generic_List_byte__Fields *)&(pIVar14->_1).name)->_items = uVar22;
  return;
}


// Map.CustomLogicTransfer$$Start
// il2cpp: void Map_CustomLogicTransfer__Start (const MethodInfo* method);
// 0x40995a0

void Map_CustomLogicTransfer__Start(MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  long lVar3;
  int iVar4;
  bool_conflict bVar5;
  Photon_Realtime_Player_array *pPVar6;
  System_Object_array *pSVar7;
  System_String_o *pSVar8;
  System_Byte_array *pSVar9;
  System_Collections_Generic_List_byte__o *pSVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  void *pvVar14;
  Il2CppObject *pIVar15;
  System_Text_Encoding_o *pSVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  MethodInfo *method_00;
  Il2CppClass *pIVar22;
  System_Collections_Generic_IEnumerable_T__o *collection;
  int32_t index;
  ulong uVar23;
  Utility_Algorithms_CompressionAlgorithm_o *__this_04;
  uint uVar24;
  
  if (g_data_057ac461 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&"LoadCachedLogicRPC");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac461 = '\x01';
  }
  pIVar13 = TypeInfo_CustomLogicTransfer;
  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicTransfer__CreateTransferData((MethodInfo *)pIVar13);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  if (pPVar6 != (Photon_Realtime_Player_array *)0x0) {
    if ((int)pPVar6->max_length < 1) {
label_0409977c:
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined1 *)TypeInfo_CustomLogicTransfer->static_fields = 1;
      return;
    }
    uVar23 = 0;
    if ((pPVar6->max_length & 0xffffffff) != 0) {
      do {
        player = pPVar6->m_Items[uVar23];
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = PhotonExtensions__GetStringProperty
                           (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30),"",
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = *(MethodInfo **)((long)TypeInfo_CustomLogicTransfer->static_fields + 8);
        bVar5 = System_String__op_Inequality(pSVar8,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          pSVar7 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (__this == (Photon_Pun_PhotonView_o *)0x0) goto label_040997b0;
          Photon_Pun_PhotonView__RPC_3efa220(__this,"LoadCachedLogicRPC",player,pSVar7,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Map_CustomLogicTransfer__Transfer(player,method_00);
        }
        uVar23 = uVar23 + 1;
        uVar24 = (uint)pPVar6->max_length;
        if ((long)(int)uVar24 <= (long)uVar23) goto label_0409977c;
      } while (uVar23 < uVar24);
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_040997b0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac463 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte_GetRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac463 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = Utility_Util__CreateMD5(pSVar8,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar14 = TypeInfo_CustomLogicTransfer->static_fields;
  *(System_String_o **)((long)pvVar14 + 8) = pSVar8;
  il2cpp_runtime_helper_022b4080((long)pvVar14 + 8,pSVar8);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) ==
      (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
label_0409a102:
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar9 = Utility_Algorithms_CompressionAlgorithm__CompressString
                       ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                        *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),1,(MethodInfo *)0x0);
    pSVar10 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_byte____ctor_357ee60
              (pSVar10,(System_Collections_Generic_IEnumerable_T__o *)pSVar9,MethodInfo_List_1_System_Byte);
    pvVar14 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_byte__o **)((long)pvVar14 + 0x20) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)pvVar14 + 0x20,pSVar10);
    pSVar11 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(pSVar11,MethodInfo_List_1_System_Byte);
    pvVar14 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_object__o **)((long)pvVar14 + 0x28) = pSVar11;
    il2cpp_runtime_helper_022b4080((long)pvVar14 + 0x28,pSVar11);
    if (pSVar9 == (System_Byte_array *)0x0) goto label_0409a102;
    uVar24 = (uint)pSVar9->max_length;
    pSVar11 = (System_Collections_Generic_List_object__o *)(ulong)uVar24;
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_Byte);
    if ((int)uVar24 < 1) {
label_04099b3e:
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
      pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
      if (pIVar13 == (Il2CppClass *)0x0) goto label_0409a102;
      if (*(int *)&(pIVar13->_1).namespaze != 0) {
        *(undefined1 *)&(pIVar13->_1).byval_arg.data =
             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18);
        if (pIVar12 == (Il2CppObject *)0x0) goto label_0409a102;
        if (*(int *)&pIVar12[1].monitor != 0) {
          pIVar12[2].klass = pIVar13;
          il2cpp_runtime_helper_022b4080(pIVar12 + 2);
          pvVar14 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
          if (1 < *(uint *)&pIVar12[1].monitor) {
            pIVar12[2].monitor = pvVar14;
            il2cpp_runtime_helper_022b4080(&pIVar12[2].monitor,pvVar14);
            lVar3 = MethodInfo_Void_Add;
            if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this_00->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar7 = (__this_00->fields)._items;
              if (pSVar7 != (System_Object_array *)0x0) {
                uVar24 = (__this_00->fields)._size;
                if (uVar24 < (uint)pSVar7->max_length) {
                  (__this_00->fields)._size = uVar24 + 1;
                  pSVar7->m_Items[(int)uVar24] = pIVar12;
                  il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar24,pIVar12);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this_00,pIVar12,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                  iVar18 = (__this_02->fields)._size;
                  if (iVar18 != 0) {
joined_r0x04099e14:
                    if (iVar18 < 1) {
                      return;
                    }
                    index = 0;
                    iVar20 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    do {
                      if (iVar20 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar11 = *(System_Collections_Generic_List_object__o **)
                                 ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                      if (index == iVar18 + -1) {
                        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                        pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar13 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar13->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                        if (pIVar12 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar12[1].monitor == 0) goto label_0409a0a3;
                        pIVar12[2].klass = pIVar13;
                        il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar13);
                        pIVar15 = System_Collections_Generic_List_object___get_Item
                                            (__this_02,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar12[1].monitor < 2) goto label_0409a0a3;
                        pIVar12[2].monitor = pIVar15;
                        il2cpp_runtime_helper_022b4080(&pIVar12[2].monitor,pIVar15);
                        pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                        if (pSVar16 == (System_Text_Encoding_o *)0x0) goto label_0409a102;
                        pIVar13 = (Il2CppClass *)
                                  (*(pSVar16->klass->vtable)._18_GetBytes.methodPtr)
                                            (pSVar16,*(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                             (pSVar16->klass->vtable)._18_GetBytes.method);
                        if (*(uint *)&pIVar12[1].monitor < 3) goto label_0409a0a3;
                        pIVar12[3].klass = pIVar13;
                        il2cpp_runtime_helper_022b4080(pIVar12 + 3,pIVar13);
                        lVar3 = MethodInfo_Void_Add;
                      }
                      else {
                        pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
                        pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar13 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar13->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x19);
                        if (pIVar12 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar12[1].monitor == 0) goto label_0409a0a3;
                        pIVar12[2].klass = pIVar13;
                        il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar13);
                        pIVar15 = System_Collections_Generic_List_object___get_Item
                                            (__this_02,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar12[1].monitor < 2) goto label_0409a0a3;
                        pIVar12[2].monitor = pIVar15;
                        il2cpp_runtime_helper_022b4080(&pIVar12[2].monitor,pIVar15);
                        lVar3 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar3;
                      if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409a102;
                      piVar1 = &(pSVar11->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar7 = (pSVar11->fields)._items;
                      if (pSVar7 == (System_Object_array *)0x0) goto label_0409a102;
                      uVar24 = (pSVar11->fields)._size;
                      if (uVar24 < (uint)pSVar7->max_length) {
                        (pSVar11->fields)._size = uVar24 + 1;
                        pSVar7->m_Items[(int)uVar24] = pIVar12;
                        il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar24,pIVar12);
                        iVar18 = (__this_02->fields)._size;
                        if (iVar18 <= index + 1) {
                          return;
                        }
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar11,pIVar12,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
                        ;
                        iVar18 = (__this_02->fields)._size;
                        if (iVar18 <= index + 1) {
                          return;
                        }
                      }
                      index = index + 1;
                      iVar20 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    } while( true );
                  }
                  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar11 = *(System_Collections_Generic_List_object__o **)
                             ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                  if (pIVar13 != (Il2CppClass *)0x0) {
                    if (*(int *)&(pIVar13->_1).namespaze != 0) {
                      *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                           *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                      if (pIVar12 == (Il2CppObject *)0x0) goto label_0409a102;
                      if (*(int *)&pIVar12[1].monitor != 0) {
                        pIVar12[2].klass = pIVar13;
                        il2cpp_runtime_helper_022b4080(pIVar12 + 2);
                        pvVar14 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (1 < *(uint *)&pIVar12[1].monitor) {
                          pIVar12[2].monitor = pvVar14;
                          il2cpp_runtime_helper_022b4080(&pIVar12[2].monitor,pvVar14);
                          pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                          if (pSVar16 != (System_Text_Encoding_o *)0x0) {
                            pIVar13 = (Il2CppClass *)
                                      (*(pSVar16->klass->vtable)._18_GetBytes.methodPtr)
                                                (pSVar16,*(undefined8 *)
                                                          ((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                                 (pSVar16->klass->vtable)._18_GetBytes.method);
                            if (*(uint *)&pIVar12[1].monitor < 3) goto label_0409a0a3;
                            pIVar12[3].klass = pIVar13;
                            il2cpp_runtime_helper_022b4080(pIVar12 + 3,pIVar13);
                            lVar3 = MethodInfo_Void_Add;
                            if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
                              piVar1 = &(pSVar11->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar7 = (pSVar11->fields)._items;
                              if (pSVar7 != (System_Object_array *)0x0) {
                                uVar24 = (pSVar11->fields)._size;
                                if (uVar24 < (uint)pSVar7->max_length) {
                                  (pSVar11->fields)._size = uVar24 + 1;
                                  pSVar7->m_Items[(int)uVar24] = pIVar12;
                                  il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar24,pIVar12);
                                  iVar18 = (__this_02->fields)._size;
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            (pSVar11,pIVar12,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                  iVar18 = (__this_02->fields)._size;
                                }
                                goto joined_r0x04099e14;
                              }
                            }
                          }
                          goto label_0409a102;
                        }
                      }
                    }
                    goto label_0409a0a3;
                  }
                }
              }
            }
            goto label_0409a102;
          }
        }
      }
label_0409a0a3:
      uVar24 = (uint)pSVar11;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar18 = 0;
      iVar20 = 10000;
      do {
        while( true ) {
          iVar4 = uVar24 - iVar18;
          if (iVar20 + iVar18 <= (int)uVar24) {
            iVar4 = iVar20;
          }
          iVar20 = iVar4;
          if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
          if ((pSVar10 == (System_Collections_Generic_List_byte__o *)0x0) ||
             (__this_03 = System_Collections_Generic_List_byte___GetRange(pSVar10,iVar18,iVar20,MethodInfo_List_1_System_Byte_GetRange),
             __this_03 == (System_Collections_Generic_List_T__o *)0x0)) goto label_0409a102;
          pSVar9 = System_Collections_Generic_List_byte___ToArray
                             ((System_Collections_Generic_List_byte__o *)__this_03,
                              (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
          lVar3 = MethodInfo_Void_Add;
          piVar1 = &(__this_02->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_02->fields)._items;
          if (pSVar7 == (System_Object_array *)0x0) goto label_0409a102;
          uVar19 = (__this_02->fields)._size;
          if ((uint)pSVar7->max_length <= uVar19) break;
          (__this_02->fields)._size = uVar19 + 1;
          pSVar7->m_Items[(int)uVar19] = &pSVar9->obj;
          il2cpp_runtime_helper_022b4080(pSVar7->m_Items + (int)uVar19,pSVar9);
          iVar18 = iVar18 + iVar20;
          if ((int)uVar24 <= iVar18) goto label_04099b3e;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_02,&pSVar9->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        iVar18 = iVar18 + iVar20;
      } while (iVar18 < (int)uVar24);
      goto label_04099b3e;
    }
    uVar19 = 10000;
    if ((int)uVar24 < 0x2711) {
      uVar19 = uVar24;
    }
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
    if ((pSVar10 == (System_Collections_Generic_List_byte__o *)0x0) ||
       (pIVar13 = (Il2CppClass *)
                  System_Collections_Generic_List_byte___GetRange(pSVar10,0,uVar19,MethodInfo_List_1_System_Byte_GetRange),
       pIVar13 == (Il2CppClass *)0x0)) goto label_0409a102;
  }
  pIVar22 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pIVar13,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac462 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac462 = '\x01';
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a1f3;
label_0409a14c:
    __this_01 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  else {
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a14c;
label_0409a1f3:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac465 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
      g_data_057ac465 = '\x01';
    }
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
    pIVar22 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar12,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar12[1].klass = 0;
    if (pIVar12 != (Il2CppObject *)0x0) {
      pIVar12[2].klass = pIVar13;
      il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar13);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this_01,(System_Collections_IEnumerator_o *)pIVar12,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
    g_data_057ac465 = '\x01';
  }
  pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
  uVar21 = 0;
  pIVar12 = pIVar15;
  System_Object___ctor(pIVar15,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar15[1].klass = 0;
  if (pIVar15 != (Il2CppObject *)0x0) {
    pIVar15[2].klass = pIVar22;
    il2cpp_runtime_helper_022b4080(pIVar15 + 2,pIVar22);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  if (pIVar13 != (Il2CppClass *)0x0) {
    uVar21 = 0;
    bVar5 = Photon_Realtime_Player__get_IsMasterClient((Photon_Realtime_Player_o *)pIVar13,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (pIVar12 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar12[1].monitor == 0) goto label_0409a621;
      pIVar22 = pIVar12[2].klass;
      if (pIVar22 == (Il2CppClass *)0x0) goto label_0409a61c;
      if (*(int *)&(pIVar22->_1).namespaze == 0) goto label_0409a621;
      cVar2 = *(char *)&(pIVar22->_1).byval_arg.data;
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (cVar2 == *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar24 = *(uint *)&pIVar12[1].monitor;
        pIVar13 = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a378;
label_0409a432:
        uVar17 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar3 + 0x28) = uVar17;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28,uVar17);
        pSVar10 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar10,MethodInfo_List_1_System_Byte);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar14 = TypeInfo_CustomLogicTransfer->static_fields;
        *(System_Collections_Generic_List_byte__o **)((long)pvVar14 + 0x20) = pSVar10;
        il2cpp_runtime_helper_022b4080((long)pvVar14 + 0x20);
        uVar21 = SUB84(pSVar10,0);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a4de;
label_0409a385:
        uVar24 = *(uint *)&pIVar12[1].monitor;
        pIVar13 = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = pIVar13;
      if (uVar24 < 2) goto label_0409a621;
      pSVar10 = *(System_Collections_Generic_List_byte__o **)((long)pIVar13->static_fields + 0x20);
      pIVar13 = (Il2CppClass *)0x0;
      if (pSVar10 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      collection = pIVar12[2].monitor;
      System_Collections_Generic_List_byte___AddRange(pSVar10,collection,MethodInfo_Void_AddRange);
      uVar21 = SUB84(collection,0);
      if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_04 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a51d;
label_0409a3f6:
        pIVar13 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar22 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_04 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        pIVar13 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar22 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = pIVar22;
      if (pIVar13 != (Il2CppClass *)0x0) {
        pSVar9 = System_Collections_Generic_List_byte___ToArray
                           ((System_Collections_Generic_List_byte__o *)pIVar13,(MethodInfo_3581700 *)pIVar22);
        uVar21 = SUB84(pIVar22,0);
        if (__this_04 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar8 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_04,pSVar9,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar8;
          il2cpp_runtime_helper_022b4080();
          uVar21 = SUB84(pSVar8,0);
          pIVar13 = (Il2CppClass *)0x0;
          pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if (*(uint *)&pIVar12[1].monitor < 3) goto label_0409a621;
          if (pSVar16 != (System_Text_Encoding_o *)0x0) {
            uVar17 = (*(pSVar16->klass->vtable)._35_GetString.methodPtr)
                               (pSVar16,pIVar12[3].klass,(pSVar16->klass->vtable)._35_GetString.method);
            pvVar14 = TypeInfo_CustomLogicTransfer->static_fields;
            *(undefined8 *)((long)pvVar14 + 8) = uVar17;
            il2cpp_runtime_helper_022b4080((long)pvVar14 + 8,uVar17);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0409a61c:
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&((System_Collections_Generic_List_byte__Fields *)&(pIVar13->_1).name)->_items = uVar21;
  return;
}


// Map.CustomLogicTransfer$$Transfer
// il2cpp: void Map_CustomLogicTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x409a120

void Map_CustomLogicTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppClass *pIVar3;
  long lVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_byte__o *pSVar7;
  System_Byte_array *data;
  System_String_o *pSVar8;
  System_Text_Encoding_o *pSVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  System_Collections_Generic_IEnumerable_T__o *collection;
  MethodInfo_3581700 *method_00;
  Photon_Realtime_Player_o *__this_01;
  Utility_Algorithms_CompressionAlgorithm_o *__this_02;
  
  if (g_data_057ac462 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac462 = '\x01';
    if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) goto label_0409a1f3;
label_0409a14c:
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x10);
  }
  else {
    if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0) goto label_0409a14c;
label_0409a1f3:
    il2cpp_runtime_helper_02337ed0();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x10);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac465 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
      g_data_057ac465 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
    method = (MethodInfo *)0x0;
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar6[1].klass = 0;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar6[2].klass = (Il2CppClass *)player;
      il2cpp_runtime_helper_022b4080(pIVar6 + 2,player);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this,(System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
    g_data_057ac465 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
  uVar11 = 0;
  pIVar6 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)method;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  __this_01 = player;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    uVar11 = 0;
    bVar5 = Photon_Realtime_Player__get_IsMasterClient(player,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    __this_01 = player;
    if (pIVar6 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar6[1].monitor == 0) goto label_0409a621;
      pIVar3 = pIVar6[2].klass;
      if (pIVar3 == (Il2CppClass *)0x0) goto label_0409a61c;
      if (*(int *)&(pIVar3->_1).namespaze == 0) goto label_0409a621;
      cVar1 = *(char *)&(pIVar3->_1).byval_arg.data;
      if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (cVar1 == *(char *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar2 = *(uint *)&pIVar6[1].monitor;
        player = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (cVar1 != *(char *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a378;
label_0409a432:
        uVar10 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar4 + 0x28) = uVar10;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28,uVar10);
        pSVar7 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar7,MethodInfo_List_1_System_Byte);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
        *(System_Collections_Generic_List_byte__o **)(lVar4 + 0x20) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x20);
        uVar11 = SUB84(pSVar7,0);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a4de;
label_0409a385:
        uVar2 = *(uint *)&pIVar6[1].monitor;
        player = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = player;
      if (uVar2 < 2) goto label_0409a621;
      pSVar7 = *(System_Collections_Generic_List_byte__o **)(*(long *)&player[2].fields.actorNumber + 0x20);
      __this_01 = (Photon_Realtime_Player_o *)0x0;
      if (pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      collection = pIVar6[2].monitor;
      System_Collections_Generic_List_byte___AddRange(pSVar7,collection,MethodInfo_Void_AddRange);
      uVar11 = SUB84(collection,0);
      if (cVar1 != *(char *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a51d;
label_0409a3f6:
        __this_01 = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        __this_01 = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = method_00;
      if (__this_01 != (Photon_Realtime_Player_o *)0x0) {
        data = System_Collections_Generic_List_byte___ToArray
                         ((System_Collections_Generic_List_byte__o *)__this_01,method_00);
        uVar11 = SUB84(method_00,0);
        if (__this_02 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar8 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_02,data,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar8;
          il2cpp_runtime_helper_022b4080();
          uVar11 = SUB84(pSVar8,0);
          player = (Photon_Realtime_Player_o *)0x0;
          pSVar9 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if (*(uint *)&pIVar6[1].monitor < 3) goto label_0409a621;
          __this_01 = player;
          if (pSVar9 != (System_Text_Encoding_o *)0x0) {
            uVar10 = (*(pSVar9->klass->vtable)._35_GetString.methodPtr)
                               (pSVar9,pIVar6[3].klass,(pSVar9->klass->vtable)._35_GetString.method);
            lVar4 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
            *(undefined8 *)(lVar4 + 8) = uVar10;
            il2cpp_runtime_helper_022b4080(lVar4 + 8,uVar10);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0409a61c:
  player = __this_01;
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)player,(MethodInfo *)0x0);
  *(undefined4 *)&(player->fields)._RoomReference_k__BackingField = uVar11;
  return;
}


// Map.CustomLogicTransfer$$CreateTransferData
// il2cpp: void Map_CustomLogicTransfer__CreateTransferData (const MethodInfo* method);
// 0x40997c0

void Map_CustomLogicTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  long lVar4;
  int iVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_Byte_array *pSVar8;
  System_Collections_Generic_List_byte__o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_T__o *__this_02;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  void *pvVar13;
  Il2CppObject *pIVar14;
  System_Text_Encoding_o *pSVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  Il2CppClass *pIVar21;
  System_Collections_Generic_IEnumerable_T__o *collection;
  int32_t index;
  Utility_Algorithms_CompressionAlgorithm_o *__this_03;
  uint uVar22;
  
  if (g_data_057ac463 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte_GetRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ac463 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar13 = TypeInfo_CustomLogicTransfer->static_fields;
  *(System_String_o **)((long)pvVar13 + 8) = pSVar7;
  il2cpp_runtime_helper_022b4080((long)pvVar13 + 8,pSVar7);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) ==
      (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
label_0409a102:
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar8 = Utility_Algorithms_CompressionAlgorithm__CompressString
                       ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                        *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),1,(MethodInfo *)0x0);
    pSVar9 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_byte____ctor_357ee60
              (pSVar9,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_System_Byte);
    pvVar13 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_byte__o **)((long)pvVar13 + 0x20) = pSVar9;
    il2cpp_runtime_helper_022b4080((long)pvVar13 + 0x20,pSVar9);
    pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(pSVar10,MethodInfo_List_1_System_Byte);
    pvVar13 = TypeInfo_CustomLogicTransfer->static_fields;
    *(System_Collections_Generic_List_object__o **)((long)pvVar13 + 0x28) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)pvVar13 + 0x28,pSVar10);
    if (pSVar8 == (System_Byte_array *)0x0) goto label_0409a102;
    uVar22 = (uint)pSVar8->max_length;
    pSVar10 = (System_Collections_Generic_List_object__o *)(ulong)uVar22;
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_System_Byte);
    if ((int)uVar22 < 1) {
label_04099b3e:
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
      pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
      if (pIVar12 == (Il2CppClass *)0x0) goto label_0409a102;
      if (*(int *)&(pIVar12->_1).namespaze != 0) {
        *(undefined1 *)&(pIVar12->_1).byval_arg.data =
             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18);
        if (pIVar11 == (Il2CppObject *)0x0) goto label_0409a102;
        if (*(int *)&pIVar11[1].monitor != 0) {
          pIVar11[2].klass = pIVar12;
          il2cpp_runtime_helper_022b4080(pIVar11 + 2);
          pvVar13 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
          if (1 < *(uint *)&pIVar11[1].monitor) {
            pIVar11[2].monitor = pvVar13;
            il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,pvVar13);
            lVar4 = MethodInfo_Void_Add;
            if (__this != (System_Collections_Generic_List_object__o *)0x0) {
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this->fields)._items;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar22 = (__this->fields)._size;
                if (uVar22 < (uint)pSVar3->max_length) {
                  (__this->fields)._size = uVar22 + 1;
                  pSVar3->m_Items[(int)uVar22] = pIVar11;
                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar22,pIVar11);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (__this,pIVar11,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
                  iVar17 = (__this_01->fields)._size;
                  if (iVar17 != 0) {
joined_r0x04099e14:
                    if (iVar17 < 1) {
                      return;
                    }
                    index = 0;
                    iVar19 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    do {
                      if (iVar19 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar10 = *(System_Collections_Generic_List_object__o **)
                                 ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                      if (index == iVar17 + -1) {
                        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                        pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar12 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                        if (pIVar11 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar11[1].monitor == 0) goto label_0409a0a3;
                        pIVar11[2].klass = pIVar12;
                        il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar12);
                        pIVar14 = System_Collections_Generic_List_object___get_Item
                                            (__this_01,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar11[1].monitor < 2) goto label_0409a0a3;
                        pIVar11[2].monitor = pIVar14;
                        il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,pIVar14);
                        pSVar15 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                        if (pSVar15 == (System_Text_Encoding_o *)0x0) goto label_0409a102;
                        pIVar12 = (Il2CppClass *)
                                  (*(pSVar15->klass->vtable)._18_GetBytes.methodPtr)
                                            (pSVar15,*(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                             (pSVar15->klass->vtable)._18_GetBytes.method);
                        if (*(uint *)&pIVar11[1].monitor < 3) goto label_0409a0a3;
                        pIVar11[3].klass = pIVar12;
                        il2cpp_runtime_helper_022b4080(pIVar11 + 3,pIVar12);
                        lVar4 = MethodInfo_Void_Add;
                      }
                      else {
                        pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
                        pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (pIVar12 == (Il2CppClass *)0x0) goto label_0409a102;
                        if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_0409a0a3;
                        *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                             *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x19);
                        if (pIVar11 == (Il2CppObject *)0x0) goto label_0409a102;
                        if (*(int *)&pIVar11[1].monitor == 0) goto label_0409a0a3;
                        pIVar11[2].klass = pIVar12;
                        il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar12);
                        pIVar14 = System_Collections_Generic_List_object___get_Item
                                            (__this_01,index,MethodInfo_Byte_get_Item);
                        if (*(uint *)&pIVar11[1].monitor < 2) goto label_0409a0a3;
                        pIVar11[2].monitor = pIVar14;
                        il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,pIVar14);
                        lVar4 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar4;
                      if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) goto label_0409a102;
                      piVar1 = &(pSVar10->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar3 = (pSVar10->fields)._items;
                      if (pSVar3 == (System_Object_array *)0x0) goto label_0409a102;
                      uVar22 = (pSVar10->fields)._size;
                      if (uVar22 < (uint)pSVar3->max_length) {
                        (pSVar10->fields)._size = uVar22 + 1;
                        pSVar3->m_Items[(int)uVar22] = pIVar11;
                        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar22,pIVar11);
                        iVar17 = (__this_01->fields)._size;
                        if (iVar17 <= index + 1) {
                          return;
                        }
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar10,pIVar11,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
                        ;
                        iVar17 = (__this_01->fields)._size;
                        if (iVar17 <= index + 1) {
                          return;
                        }
                      }
                      index = index + 1;
                      iVar19 = *(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c;
                    } while( true );
                  }
                  if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar10 = *(System_Collections_Generic_List_object__o **)
                             ((long)TypeInfo_CustomLogicTransfer->static_fields + 0x28);
                  pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                  pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                  if (pIVar12 != (Il2CppClass *)0x0) {
                    if (*(int *)&(pIVar12->_1).namespaze != 0) {
                      *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                           *(undefined1 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a);
                      if (pIVar11 == (Il2CppObject *)0x0) goto label_0409a102;
                      if (*(int *)&pIVar11[1].monitor != 0) {
                        pIVar11[2].klass = pIVar12;
                        il2cpp_runtime_helper_022b4080(pIVar11 + 2);
                        pvVar13 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                        if (1 < *(uint *)&pIVar11[1].monitor) {
                          pIVar11[2].monitor = pvVar13;
                          il2cpp_runtime_helper_022b4080(&pIVar11[2].monitor,pvVar13);
                          pSVar15 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                          if (pSVar15 != (System_Text_Encoding_o *)0x0) {
                            pIVar12 = (Il2CppClass *)
                                      (*(pSVar15->klass->vtable)._18_GetBytes.methodPtr)
                                                (pSVar15,*(undefined8 *)
                                                          ((long)TypeInfo_CustomLogicTransfer->static_fields + 8),
                                                 (pSVar15->klass->vtable)._18_GetBytes.method);
                            if (*(uint *)&pIVar11[1].monitor < 3) goto label_0409a0a3;
                            pIVar11[3].klass = pIVar12;
                            il2cpp_runtime_helper_022b4080(pIVar11 + 3,pIVar12);
                            lVar4 = MethodInfo_Void_Add;
                            if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
                              piVar1 = &(pSVar10->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar3 = (pSVar10->fields)._items;
                              if (pSVar3 != (System_Object_array *)0x0) {
                                uVar22 = (pSVar10->fields)._size;
                                if (uVar22 < (uint)pSVar3->max_length) {
                                  (pSVar10->fields)._size = uVar22 + 1;
                                  pSVar3->m_Items[(int)uVar22] = pIVar11;
                                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar22,pIVar11);
                                  iVar17 = (__this_01->fields)._size;
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            (pSVar10,pIVar11,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                  iVar17 = (__this_01->fields)._size;
                                }
                                goto joined_r0x04099e14;
                              }
                            }
                          }
                          goto label_0409a102;
                        }
                      }
                    }
                    goto label_0409a0a3;
                  }
                }
              }
            }
            goto label_0409a102;
          }
        }
      }
label_0409a0a3:
      uVar22 = (uint)pSVar10;
      il2cpp_runtime_helper_022b2ca0();
    }
    else if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar17 = 0;
      iVar19 = 10000;
      do {
        while( true ) {
          iVar5 = uVar22 - iVar17;
          if (iVar19 + iVar17 <= (int)uVar22) {
            iVar5 = iVar19;
          }
          iVar19 = iVar5;
          if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
          if ((pSVar9 == (System_Collections_Generic_List_byte__o *)0x0) ||
             (__this_02 = System_Collections_Generic_List_byte___GetRange(pSVar9,iVar17,iVar19,MethodInfo_List_1_System_Byte_GetRange),
             __this_02 == (System_Collections_Generic_List_T__o *)0x0)) goto label_0409a102;
          pSVar8 = System_Collections_Generic_List_byte___ToArray
                             ((System_Collections_Generic_List_byte__o *)__this_02,
                              (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_01->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_0409a102;
          uVar18 = (__this_01->fields)._size;
          if ((uint)pSVar3->max_length <= uVar18) break;
          (__this_01->fields)._size = uVar18 + 1;
          pSVar3->m_Items[(int)uVar18] = &pSVar8->obj;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar18,pSVar8);
          iVar17 = iVar17 + iVar19;
          if ((int)uVar22 <= iVar17) goto label_04099b3e;
        }
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,&pSVar8->obj,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        iVar17 = iVar17 + iVar19;
      } while (iVar17 < (int)uVar22);
      goto label_04099b3e;
    }
    uVar18 = 10000;
    if ((int)uVar22 < 0x2711) {
      uVar18 = uVar22;
    }
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
    if ((pSVar9 == (System_Collections_Generic_List_byte__o *)0x0) ||
       (pIVar12 = (Il2CppClass *)System_Collections_Generic_List_byte___GetRange(pSVar9,0,uVar18,MethodInfo_List_1_System_Byte_GetRange)
       , pIVar12 == (Il2CppClass *)0x0)) goto label_0409a102;
  }
  pIVar21 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pIVar12,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac462 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac462 = '\x01';
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a1f3;
label_0409a14c:
    __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  else {
    if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a14c;
label_0409a1f3:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x10);
  }
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac465 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
      g_data_057ac465 = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
    pIVar21 = (Il2CppClass *)0x0;
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 0;
    if (pIVar11 != (Il2CppObject *)0x0) {
      pIVar11[2].klass = pIVar12;
      il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar12);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this_00,(System_Collections_IEnumerator_o *)pIVar11,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
    g_data_057ac465 = '\x01';
  }
  pIVar14 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
  uVar20 = 0;
  pIVar11 = pIVar14;
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar14[1].klass = 0;
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar14[2].klass = pIVar21;
    il2cpp_runtime_helper_022b4080(pIVar14 + 2,pIVar21);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  if (pIVar12 != (Il2CppClass *)0x0) {
    uVar20 = 0;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient((Photon_Realtime_Player_o *)pIVar12,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    if (pIVar11 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar11[1].monitor == 0) goto label_0409a621;
      pIVar21 = pIVar11[2].klass;
      if (pIVar21 == (Il2CppClass *)0x0) goto label_0409a61c;
      if (*(int *)&(pIVar21->_1).namespaze == 0) goto label_0409a621;
      cVar2 = *(char *)&(pIVar21->_1).byval_arg.data;
      if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (cVar2 == *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar22 = *(uint *)&pIVar11[1].monitor;
        pIVar12 = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x18)) goto label_0409a378;
label_0409a432:
        uVar16 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar4 + 0x28) = uVar16;
        il2cpp_runtime_helper_022b4080(lVar4 + 0x28,uVar16);
        pSVar9 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar9,MethodInfo_List_1_System_Byte);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pvVar13 = TypeInfo_CustomLogicTransfer->static_fields;
        *(System_Collections_Generic_List_byte__o **)((long)pvVar13 + 0x20) = pSVar9;
        il2cpp_runtime_helper_022b4080((long)pvVar13 + 0x20);
        uVar20 = SUB84(pSVar9,0);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a4de;
label_0409a385:
        uVar22 = *(uint *)&pIVar11[1].monitor;
        pIVar12 = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = pIVar12;
      if (uVar22 < 2) goto label_0409a621;
      pSVar9 = *(System_Collections_Generic_List_byte__o **)((long)pIVar12->static_fields + 0x20);
      pIVar12 = (Il2CppClass *)0x0;
      if (pSVar9 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      collection = pIVar11[2].monitor;
      System_Collections_Generic_List_byte___AddRange(pSVar9,collection,MethodInfo_Void_AddRange);
      uVar20 = SUB84(collection,0);
      if (cVar2 != *(char *)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c == 0) goto label_0409a51d;
label_0409a3f6:
        pIVar12 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar21 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_03 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)&(TypeInfo_CustomLogicTransfer->_2).field_0x1c != 0) goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        pIVar12 = *(Il2CppClass **)((long)TypeInfo_CustomLogicTransfer->static_fields + 0x20);
        pIVar21 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = pIVar21;
      if (pIVar12 != (Il2CppClass *)0x0) {
        pSVar8 = System_Collections_Generic_List_byte___ToArray
                           ((System_Collections_Generic_List_byte__o *)pIVar12,(MethodInfo_3581700 *)pIVar21);
        uVar20 = SUB84(pIVar21,0);
        if (__this_03 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar7 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_03,pSVar8,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar7;
          il2cpp_runtime_helper_022b4080();
          uVar20 = SUB84(pSVar7,0);
          pIVar12 = (Il2CppClass *)0x0;
          pSVar15 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if (*(uint *)&pIVar11[1].monitor < 3) goto label_0409a621;
          if (pSVar15 != (System_Text_Encoding_o *)0x0) {
            uVar16 = (*(pSVar15->klass->vtable)._35_GetString.methodPtr)
                               (pSVar15,pIVar11[3].klass,(pSVar15->klass->vtable)._35_GetString.method);
            pvVar13 = TypeInfo_CustomLogicTransfer->static_fields;
            *(undefined8 *)((long)pvVar13 + 8) = uVar16;
            il2cpp_runtime_helper_022b4080((long)pvVar13 + 8,uVar16);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)((long)TypeInfo_CustomLogicTransfer->static_fields + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0409a61c:
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&((System_Collections_Generic_List_byte__Fields *)&(pIVar12->_1).name)->_items = uVar20;
  return;
}


// Map.CustomLogicTransfer$$OnTransferLogicRPC
// il2cpp: void Map_CustomLogicTransfer__OnTransferLogicRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x409a290

void Map_CustomLogicTransfer__OnTransferLogicRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint8_t uVar1;
  uint uVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_byte__o *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  System_Text_Encoding_o *pSVar8;
  undefined8 uVar9;
  undefined4 in_register_00000014;
  undefined4 uVar10;
  undefined4 in_register_00000034;
  MethodInfo_3581700 *method_00;
  Photon_Realtime_Player_o *__this;
  Utility_Algorithms_CompressionAlgorithm_o *__this_00;
  
  uVar9 = CONCAT44(in_register_00000034,msgNumber);
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager,uVar9,CONCAT44(in_register_00000014,msgTotal));
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  uVar10 = (undefined4)uVar9;
  __this = info.fields.Sender;
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    uVar10 = 0;
    bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    __this = info.fields.Sender;
    if (byteArr != (System_Byte_array_array *)0x0) {
      if ((int)byteArr->max_length == 0) goto label_0409a621;
      pSVar6 = byteArr->m_Items[0];
      if (pSVar6 == (System_Byte_array *)0x0) goto label_0409a61c;
      if ((int)pSVar6->max_length == 0) goto label_0409a621;
      uVar1 = pSVar6->m_Items[0];
      if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar1 != *(uint8_t *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a378;
label_0409a432:
        uVar9 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar3 + 0x28) = uVar9;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x28,uVar9);
        pSVar5 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar5,MethodInfo_List_1_System_Byte);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
        *(System_Collections_Generic_List_byte__o **)(lVar3 + 0x20) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
        uVar10 = SUB84(pSVar5,0);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar2 = (uint)byteArr->max_length;
        info.fields.Sender = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (uVar1 == *(uint8_t *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a4de;
label_0409a385:
        uVar2 = (uint)byteArr->max_length;
        info.fields.Sender = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = info.fields.Sender;
      if (uVar2 < 2) goto label_0409a621;
      pSVar5 = *(System_Collections_Generic_List_byte__o **)
                (*(long *)&info.fields.Sender[2].fields.actorNumber + 0x20);
      __this = (Photon_Realtime_Player_o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      pSVar6 = byteArr->m_Items[1];
      System_Collections_Generic_List_byte___AddRange
                (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,MethodInfo_Void_AddRange);
      uVar10 = SUB84(pSVar6,0);
      if (uVar1 != *(uint8_t *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        __this = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_00 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a51d;
label_0409a3f6:
        __this = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = method_00;
      if (__this != (Photon_Realtime_Player_o *)0x0) {
        pSVar6 = System_Collections_Generic_List_byte___ToArray
                           ((System_Collections_Generic_List_byte__o *)__this,method_00);
        uVar10 = SUB84(method_00,0);
        if (__this_00 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar7 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_00,pSVar6,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar7;
          il2cpp_runtime_helper_022b4080();
          uVar10 = SUB84(pSVar7,0);
          info.fields.Sender = (Photon_Realtime_Player_o *)0x0;
          pSVar8 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if ((uint)byteArr->max_length < 3) goto label_0409a621;
          __this = info.fields.Sender;
          if (pSVar8 != (System_Text_Encoding_o *)0x0) {
            uVar9 = (*(pSVar8->klass->vtable)._35_GetString.methodPtr)
                              (pSVar8,byteArr->m_Items[2],(pSVar8->klass->vtable)._35_GetString.method);
            lVar3 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
            *(undefined8 *)(lVar3 + 8) = uVar9;
            il2cpp_runtime_helper_022b4080(lVar3 + 8,uVar9);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0409a61c:
  info.fields.Sender = __this;
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)info.fields.Sender,(MethodInfo *)0x0);
  *(undefined4 *)&((info.fields.Sender)->fields)._RoomReference_k__BackingField = uVar10;
  return;
}


// Map.CustomLogicTransfer$$TransferLogicData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicTransfer__TransferLogicData (Map_CustomLogicTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x409a220

System_Collections_IEnumerator_o *
Map_CustomLogicTransfer__TransferLogicData
          (Map_CustomLogicTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  System_Collections_IEnumerator_o *pSVar4;
  long lVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  undefined4 extraout_var;
  System_Collections_Generic_List_byte__o *pSVar7;
  System_Byte_array *data;
  System_String_o *pSVar8;
  System_Text_Encoding_o *pSVar9;
  undefined8 uVar10;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  undefined4 uVar11;
  System_Collections_Generic_IEnumerable_T__o *collection;
  MethodInfo_3581700 *method_00;
  Il2CppObject *pIVar12;
  Photon_Realtime_Player_o *__this_01;
  Photon_Realtime_Player_o *unaff_R14;
  Utility_Algorithms_CompressionAlgorithm_o *__this_02;
  
  if (g_data_057ac465 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferLogicData_d__14);
    g_data_057ac465 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferLogicData_d__14);
  uVar11 = 0;
  pIVar12 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)player;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,player);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac464 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac464 = '\x01';
  }
  __this_01 = unaff_R14;
  if (unaff_R14 != (Photon_Realtime_Player_o *)0x0) {
    uVar11 = 0;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(unaff_R14,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar6);
    }
    __this_01 = unaff_R14;
    if (pIVar12 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar12[1].monitor == 0) goto label_0409a621;
      pIVar3 = pIVar12[2].klass;
      if (pIVar3 == (Il2CppClass *)0x0) goto label_0409a61c;
      if (*(int *)&(pIVar3->_1).namespaze == 0) goto label_0409a621;
      cVar1 = *(char *)&(pIVar3->_1).byval_arg.data;
      if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (cVar1 != *(char *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a378;
label_0409a432:
        uVar10 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(undefined8 *)(lVar5 + 0x28) = uVar10;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x28,uVar10);
        pSVar7 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar7,MethodInfo_List_1_System_Byte);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar5 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
        *(System_Collections_Generic_List_byte__o **)(lVar5 + 0x20) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar5 + 0x20);
        uVar11 = SUB84(pSVar7,0);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a385;
label_0409a4de:
        il2cpp_runtime_helper_02337ed0();
        uVar2 = *(uint *)&pIVar12[1].monitor;
        unaff_R14 = TypeInfo_CustomLogicTransfer;
      }
      else {
        if (cVar1 == *(char *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x18)) goto label_0409a432;
label_0409a378:
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a4de;
label_0409a385:
        uVar2 = *(uint *)&pIVar12[1].monitor;
        unaff_R14 = TypeInfo_CustomLogicTransfer;
      }
      TypeInfo_CustomLogicTransfer = unaff_R14;
      if (uVar2 < 2) goto label_0409a621;
      pSVar7 = *(System_Collections_Generic_List_byte__o **)(*(long *)&unaff_R14[2].fields.actorNumber + 0x20)
      ;
      __this_01 = (Photon_Realtime_Player_o *)0x0;
      if (pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) goto label_0409a61c;
      collection = pIVar12[2].monitor;
      System_Collections_Generic_List_byte___AddRange(pSVar7,collection,MethodInfo_Void_AddRange);
      uVar11 = SUB84(collection,0);
      pSVar4 = *(System_Collections_IEnumerator_o **)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
      if (cVar1 != *(char *)((long)&pSVar4[1].monitor + 2)) {
        return pSVar4;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) != 0)
        goto label_0409a3f6;
label_0409a51d:
        il2cpp_runtime_helper_02337ed0();
        __this_01 = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      else {
        __this_02 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].fields._CustomProperties_k__BackingField + 4) == 0)
        goto label_0409a51d;
label_0409a3f6:
        __this_01 = *(Photon_Realtime_Player_o **)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 0x20);
        method_00 = MethodInfo_Byte_ToArray;
      }
      MethodInfo_Byte_ToArray = method_00;
      if (__this_01 != (Photon_Realtime_Player_o *)0x0) {
        data = System_Collections_Generic_List_byte___ToArray
                         ((System_Collections_Generic_List_byte__o *)__this_01,method_00);
        uVar11 = SUB84(method_00,0);
        if (__this_02 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pSVar8 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             (__this_02,data,0x1000,0xa00000,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28) = pSVar8;
          il2cpp_runtime_helper_022b4080();
          uVar11 = SUB84(pSVar8,0);
          unaff_R14 = (Photon_Realtime_Player_o *)0x0;
          pSVar9 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
          if (*(uint *)&pIVar12[1].monitor < 3) goto label_0409a621;
          __this_01 = unaff_R14;
          if (pSVar9 != (System_Text_Encoding_o *)0x0) {
            uVar10 = (*(pSVar9->klass->vtable)._35_GetString.methodPtr)
                               (pSVar9,pIVar12[3].klass,(pSVar9->klass->vtable)._35_GetString.method);
            lVar5 = *(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber;
            *(undefined8 *)(lVar5 + 8) = uVar10;
            il2cpp_runtime_helper_022b4080(lVar5 + 8,uVar10);
            *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30) =
                 *(undefined8 *)(*(long *)&TypeInfo_CustomLogicTransfer[2].fields.actorNumber + 8);
            il2cpp_runtime_helper_022b4080();
            CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
  }
label_0409a61c:
  unaff_R14 = __this_01;
  il2cpp_runtime_helper_022b2c90();
label_0409a621:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
  *(undefined4 *)&(unaff_R14->fields)._RoomReference_k__BackingField = uVar11;
  return extraout_RAX_00;
}


// Map.CustomLogicTransfer$$.ctor
// il2cpp: void Map_CustomLogicTransfer___ctor (Map_CustomLogicTransfer_o* __this, const MethodInfo* method);
// 0x409a650

void Map_CustomLogicTransfer___ctor(Map_CustomLogicTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$.cctor
// il2cpp: void Map_CustomLogicTransfer___cctor (const MethodInfo* method);
// 0x409a660

void Map_CustomLogicTransfer___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac466 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057ac466 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
  *(undefined2 *)(lVar1 + 0x18) = 0x100;
  *(undefined1 *)(lVar1 + 0x1a) = 2;
  return;
}


