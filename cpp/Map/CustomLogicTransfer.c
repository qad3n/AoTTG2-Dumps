// Type: Map.CustomLogicTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/CustomLogicTransfer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicTransfer.cs  [CHANGED since prior version]
// --------------------------------

// Map.CustomLogicTransfer.<TransferLogicData>d__14$$.ctor
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14___ctor (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x424b360

void Map_CustomLogicTransfer_<TransferLogicData>d__14___ctor
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14__System_IDisposable_Dispose (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x424b3d0

void Map_CustomLogicTransfer_<TransferLogicData>d__14__System_IDisposable_Dispose
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$MoveNext
// il2cpp: bool Map_CustomLogicTransfer__TransferLogicData_d__14__MoveNext (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x424b3e0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Map_CustomLogicTransfer_<TransferLogicData>d__14__MoveNext
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
  
  if (DAT_05705201 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Byte_____get_Item);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"TransferLogicRPC");
    DAT_05705201 = '\x01';
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
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return 0;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
    if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           (__this_00,(__this->fields)._i_5__2,MethodInfo_Byte_____get_Item),
       parameters != (System_Object_array *)0x0)) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
         lVar4 == 0)) {
LAB_0424b6eb:
        uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar5,0);
      }
      pPStack_38 = pPVar2;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        il2cpp_runtime_glue(parameters->m_Items,pIVar3);
        iStack_3c = (__this->fields)._i_5__2;
        pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_3c);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
           lVar4 == 0)) goto LAB_0424b6eb;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
          lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
          if (lVar4 != 0) {
            uStack_40 = *(undefined4 *)(lVar4 + 0x18);
            pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_40);
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_0424b6eb;
            pPVar2 = pPStack_38;
            if ((uint)parameters->max_length < 3) goto LAB_0424b6e6;
            parameters->m_Items[2] = pIVar3;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar3);
            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC
                        (pPVar2,"TransferLogicRPC",targetPlayer,parameters,(MethodInfo *)0x0);
              __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_01;
              uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
            }
          }
          goto LAB_0424b6e1;
        }
      }
LAB_0424b6e6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_0424b6e1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x424b700

Il2CppObject *
Map_CustomLogicTransfer_<TransferLogicData>d__14__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_Reset (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x424b710

void Map_CustomLogicTransfer_<TransferLogicData>d__14__System_Collections_IEnumerator_Reset
               (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Map.CustomLogicTransfer.<TransferLogicData>d__14$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicTransfer__TransferLogicData_d__14__System_Collections_IEnumerator_get_Current (Map_CustomLogicTransfer__TransferLogicData_d__14_o* __this, const MethodInfo* method);
// 0x424b750

Il2CppObject *
Map_CustomLogicTransfer_<TransferLogicData>d__14__System_Collections_IEnumerator_get_Current
          (Map_CustomLogicTransfer__TransferLogicData_d__14_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicTransfer$$Init
// il2cpp: void Map_CustomLogicTransfer__Init (const MethodInfo* method);
// 0x424a510

void Map_CustomLogicTransfer__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  
  if (DAT_057051f9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicTransfer_CreateSingleton_CustomLogicT);
    DAT_057051f9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10),MethodInfo_CustomLogicTransfer_CreateSingleton_CustomLogicT);
  lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x10);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x424a5e0

void Map_CustomLogicTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  
  if (DAT_057051fa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    DAT_057051fa = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
    **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$Start
// il2cpp: void Map_CustomLogicTransfer__Start (const MethodInfo* method);
// 0x424a670

void Map_CustomLogicTransfer__Start(MethodInfo *method)

{
  uint uVar1;
  Photon_Realtime_Player_o *player;
  Photon_Pun_PhotonView_o *__this;
  bool_conflict bVar2;
  Photon_Realtime_Player_array *pPVar3;
  System_String_o *a;
  System_Object_array *parameters;
  MethodInfo *pMVar4;
  ulong uVar5;
  
  if (DAT_057051fb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"LoadCachedLogicRPC");
    il2cpp_init_method_metadata(&"");
    DAT_057051fb = '\x01';
  }
  pMVar4 = TypeInfo_CustomLogicTransfer;
  if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_CustomLogicTransfer__CreateTransferData(pMVar4);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  if (pPVar3 == (Photon_Realtime_Player_array *)0x0) {
LAB_0424a880:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pPVar3->max_length < 1) {
LAB_0424a84c:
    if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    *TypeInfo_CustomLogicTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
    return;
  }
  uVar5 = 0;
  if ((pPVar3->max_length & 0xffffffff) != 0) {
    do {
      player = pPVar3->m_Items[uVar5];
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_init_class();
      }
      a = PhotonExtensions__GetStringProperty
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38),
                     "",(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pMVar4 = *(MethodInfo **)(TypeInfo_CustomLogicTransfer[2].virtualMethodPointer + 8);
      bVar2 = System_String__op_Inequality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
        if (__this == (Photon_Pun_PhotonView_o *)0x0) goto LAB_0424a880;
        Photon_Pun_PhotonView__RPC(__this,"LoadCachedLogicRPC",player,parameters,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)((long)&TypeInfo_CustomLogicTransfer[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Map_CustomLogicTransfer__Transfer(player,pMVar4);
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)pPVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar5) goto LAB_0424a84c;
    } while (uVar5 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$Transfer
// il2cpp: void Map_CustomLogicTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x424b1f0

void Map_CustomLogicTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *__this_00;
  
  if (DAT_057051fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    DAT_057051fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x10);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (DAT_057051ff == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TransferLogicData_d__14);
      DAT_057051ff = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TransferLogicData_d__14);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)player;
      il2cpp_runtime_glue(__this_00 + 2,player);
      UnityEngine_MonoBehaviour__StartCoroutine
                (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$CreateTransferData
// il2cpp: void Map_CustomLogicTransfer__CreateTransferData (const MethodInfo* method);
// 0x424a890

void Map_CustomLogicTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  int iVar6;
  System_String_o *pSVar7;
  System_Byte_array *pSVar8;
  System_Collections_Generic_List_byte__o *pSVar9;
  System_Collections_Generic_List_object__o *pSVar10;
  System_Collections_Generic_List_T__o *pSVar11;
  Il2CppObject *pIVar12;
  Il2CppClass *pIVar13;
  void *pvVar14;
  Il2CppObject *pIVar15;
  System_Text_Encoding_o *pSVar16;
  int iVar17;
  int iVar18;
  int32_t count;
  int iVar19;
  
  if (DAT_057051fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte__GetRange);
    il2cpp_init_method_metadata(&MethodInfo_Byte___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Byte___get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057051fd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
  *(System_String_o **)(lVar3 + 8) = pSVar7;
  il2cpp_runtime_glue(lVar3 + 8,pSVar7);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
      (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    pSVar8 = Utility_Algorithms_CompressionAlgorithm__CompressString
                       ((Utility_Algorithms_CompressionAlgorithm_o *)
                        **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),
                        *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18),1,
                        (MethodInfo *)0x0);
    pSVar9 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
    System_Collections_Generic_List<byte>___ctor
              (pSVar9,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_System_Byte);
    lVar3 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
    *(System_Collections_Generic_List_byte__o **)(lVar3 + 0x20) = pSVar9;
    il2cpp_runtime_glue(lVar3 + 0x20,pSVar9);
    pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
    System_Collections_Generic_List<object>___ctor(pSVar10,MethodInfo_List_1_System_Byte);
    lVar3 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
    *(System_Collections_Generic_List_object__o **)(lVar3 + 0x28) = pSVar10;
    il2cpp_runtime_glue(lVar3 + 0x28,pSVar10);
    if (pSVar8 != (System_Byte_array *)0x0) {
      iVar18 = (int)pSVar8->max_length;
      pSVar10 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
      System_Collections_Generic_List<object>___ctor(pSVar10,MethodInfo_List_1_System_Byte);
      if (0 < iVar18) {
        if (pSVar10 == (System_Collections_Generic_List_object__o *)0x0) {
          count = 10000;
          if (iVar18 < 0x2711) {
            count = iVar18;
          }
          if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = *(System_Collections_Generic_List_byte__o **)
                    (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x20);
          if ((pSVar9 != (System_Collections_Generic_List_byte__o *)0x0) &&
             (pSVar11 = System_Collections_Generic_List<byte>__GetRange(pSVar9,0,count,MethodInfo_List_1_System_Byte__GetRange)
             , pSVar11 != (System_Collections_Generic_List_T__o *)0x0)) {
            System_Collections_Generic_List<byte>__ToArray
                      ((System_Collections_Generic_List_byte__o *)pSVar11,MethodInfo_Byte___ToArray);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          goto LAB_0424b1d2;
        }
        iVar17 = 0;
        iVar19 = 10000;
        do {
          while( true ) {
            iVar6 = iVar18 - iVar17;
            if (iVar19 + iVar17 <= iVar18) {
              iVar6 = iVar19;
            }
            iVar19 = iVar6;
            if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = *(System_Collections_Generic_List_byte__o **)
                      (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x20);
            if ((pSVar9 == (System_Collections_Generic_List_byte__o *)0x0) ||
               (pSVar11 = System_Collections_Generic_List<byte>__GetRange
                                    (pSVar9,iVar17,iVar19,MethodInfo_List_1_System_Byte__GetRange),
               pSVar11 == (System_Collections_Generic_List_T__o *)0x0)) goto LAB_0424b1d2;
            pSVar8 = System_Collections_Generic_List<byte>__ToArray
                               ((System_Collections_Generic_List_byte__o *)pSVar11,MethodInfo_Byte___ToArray);
            lVar3 = MethodInfo_Void_Add;
            piVar1 = &(pSVar10->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar10->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_0424b1d2;
            uVar2 = (pSVar10->fields)._size;
            if ((uint)pSVar4->max_length <= uVar2) break;
            (pSVar10->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = &pSVar8->obj;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pSVar8);
            iVar17 = iVar17 + iVar19;
            if (iVar18 <= iVar17) goto LAB_0424ac0e;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar10,&pSVar8->obj,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          iVar17 = iVar17 + iVar19;
        } while (iVar17 < iVar18);
      }
LAB_0424ac0e:
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = *(System_Collections_Generic_List_object__o **)
                (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
      pIVar12 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,2);
      pIVar13 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
      if (pIVar13 != (Il2CppClass *)0x0) {
        if (*(int *)&(pIVar13->_1).namespaze != 0) {
          *(undefined1 *)&(pIVar13->_1).byval_arg.data =
               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x18);
          if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0424b1d2;
          if (*(int *)&pIVar12[1].monitor != 0) {
            pIVar12[2].klass = pIVar13;
            il2cpp_runtime_glue(pIVar12 + 2,pIVar13);
            pvVar14 = (void *)il2cpp_glue_02274930(TypeInfo_byte,0);
            if (1 < *(uint *)&pIVar12[1].monitor) {
              pIVar12[2].monitor = pvVar14;
              il2cpp_runtime_glue(&pIVar12[2].monitor,pvVar14);
              lVar3 = MethodInfo_Void_Add;
              if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (pSVar5->fields)._items;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = pIVar12;
                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pIVar12);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar5,pIVar12,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  }
                  if (pSVar10 != (System_Collections_Generic_List_object__o *)0x0) {
                    iVar18 = (pSVar10->fields)._size;
                    if (iVar18 != 0) {
joined_r0x0424aee4:
                      if (iVar18 < 1) {
                        return;
                      }
                      iVar19 = 0;
                      iVar17 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
                      do {
                        if (iVar17 == 0) {
                          il2cpp_init_class();
                        }
                        pSVar5 = *(System_Collections_Generic_List_object__o **)
                                  (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
                        if (iVar19 == iVar18 + -1) {
                          pIVar12 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,3);
                          pIVar13 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
                          if (pIVar13 == (Il2CppClass *)0x0) goto LAB_0424b1d2;
                          if (*(int *)&(pIVar13->_1).namespaze == 0) goto LAB_0424b173;
                          *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x1a);
                          if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0424b1d2;
                          if (*(int *)&pIVar12[1].monitor == 0) goto LAB_0424b173;
                          pIVar12[2].klass = pIVar13;
                          il2cpp_runtime_glue(pIVar12 + 2,pIVar13);
                          pIVar15 = System_Collections_Generic_List<object>__get_Item
                                              (pSVar10,iVar19,MethodInfo_Byte___get_Item);
                          if (*(uint *)&pIVar12[1].monitor < 2) goto LAB_0424b173;
                          pIVar12[2].monitor = pIVar15;
                          il2cpp_runtime_glue(&pIVar12[2].monitor,pIVar15);
                          pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                          if (pSVar16 == (System_Text_Encoding_o *)0x0) goto LAB_0424b1d2;
                          pIVar13 = (Il2CppClass *)
                                    (*(pSVar16->klass->vtable)._18_GetBytes.methodPtr)
                                              (pSVar16,*(undefined8 *)
                                                        (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8),
                                               (pSVar16->klass->vtable)._18_GetBytes.method);
                          if (*(uint *)&pIVar12[1].monitor < 3) goto LAB_0424b173;
                          pIVar12[3].klass = pIVar13;
                          il2cpp_runtime_glue(pIVar12 + 3,pIVar13);
                          lVar3 = MethodInfo_Void_Add;
                        }
                        else {
                          pIVar12 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,2);
                          pIVar13 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
                          if (pIVar13 == (Il2CppClass *)0x0) goto LAB_0424b1d2;
                          if (*(int *)&(pIVar13->_1).namespaze == 0) goto LAB_0424b173;
                          *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x19);
                          if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0424b1d2;
                          if (*(int *)&pIVar12[1].monitor == 0) goto LAB_0424b173;
                          pIVar12[2].klass = pIVar13;
                          il2cpp_runtime_glue(pIVar12 + 2,pIVar13);
                          pIVar15 = System_Collections_Generic_List<object>__get_Item
                                              (pSVar10,iVar19,MethodInfo_Byte___get_Item);
                          if (*(uint *)&pIVar12[1].monitor < 2) goto LAB_0424b173;
                          pIVar12[2].monitor = pIVar15;
                          il2cpp_runtime_glue(&pIVar12[2].monitor,pIVar15);
                          lVar3 = MethodInfo_Void_Add;
                        }
                        MethodInfo_Void_Add = lVar3;
                        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0)
                        goto LAB_0424b1d2;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar4 = (pSVar5->fields)._items;
                        if (pSVar4 == (System_Object_array *)0x0) goto LAB_0424b1d2;
                        uVar2 = (pSVar5->fields)._size;
                        if (uVar2 < (uint)pSVar4->max_length) {
                          (pSVar5->fields)._size = uVar2 + 1;
                          pSVar4->m_Items[(int)uVar2] = pIVar12;
                          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pIVar12);
                          iVar18 = (pSVar10->fields)._size;
                          if (iVar18 <= iVar19 + 1) {
                            return;
                          }
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (pSVar5,pIVar12,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                          iVar18 = (pSVar10->fields)._size;
                          if (iVar18 <= iVar19 + 1) {
                            return;
                          }
                        }
                        iVar19 = iVar19 + 1;
                        iVar17 = *(int *)(TypeInfo_CustomLogicTransfer + 0xe4);
                      } while( true );
                    }
                    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pSVar5 = *(System_Collections_Generic_List_object__o **)
                              (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x28);
                    pIVar12 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,3);
                    pIVar13 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
                    if (pIVar13 != (Il2CppClass *)0x0) {
                      if (*(int *)&(pIVar13->_1).namespaze != 0) {
                        *(undefined1 *)&(pIVar13->_1).byval_arg.data =
                             *(undefined1 *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x1a);
                        if (pIVar12 == (Il2CppObject *)0x0) goto LAB_0424b1d2;
                        if (*(int *)&pIVar12[1].monitor != 0) {
                          pIVar12[2].klass = pIVar13;
                          il2cpp_runtime_glue(pIVar12 + 2,pIVar13);
                          pvVar14 = (void *)il2cpp_glue_02274930(TypeInfo_byte,0);
                          if (1 < *(uint *)&pIVar12[1].monitor) {
                            pIVar12[2].monitor = pvVar14;
                            il2cpp_runtime_glue(&pIVar12[2].monitor,pvVar14);
                            pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                            if (pSVar16 != (System_Text_Encoding_o *)0x0) {
                              pIVar13 = (Il2CppClass *)
                                        (*(pSVar16->klass->vtable)._18_GetBytes.methodPtr)
                                                  (pSVar16,*(undefined8 *)
                                                            (*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8),
                                                   (pSVar16->klass->vtable)._18_GetBytes.method);
                              if (*(uint *)&pIVar12[1].monitor < 3) goto LAB_0424b173;
                              pIVar12[3].klass = pIVar13;
                              il2cpp_runtime_glue(pIVar12 + 3,pIVar13);
                              lVar3 = MethodInfo_Void_Add;
                              if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
                                piVar1 = &(pSVar5->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar4 = (pSVar5->fields)._items;
                                if (pSVar4 != (System_Object_array *)0x0) {
                                  uVar2 = (pSVar5->fields)._size;
                                  if (uVar2 < (uint)pSVar4->max_length) {
                                    (pSVar5->fields)._size = uVar2 + 1;
                                    pSVar4->m_Items[(int)uVar2] = pIVar12;
                                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pIVar12);
                                    iVar18 = (pSVar10->fields)._size;
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              (pSVar5,pIVar12,
                                               *(MethodInfo_35A7350 **)
                                                (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                                    iVar18 = (pSVar10->fields)._size;
                                  }
                                  goto joined_r0x0424aee4;
                                }
                              }
                            }
                            goto LAB_0424b1d2;
                          }
                        }
                      }
                      goto LAB_0424b173;
                    }
                  }
                }
              }
              goto LAB_0424b1d2;
            }
          }
        }
LAB_0424b173:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0424b1d2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$OnTransferLogicRPC
// il2cpp: void Map_CustomLogicTransfer__OnTransferLogicRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423bb80

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
  undefined4 in_register_00000034;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  
  if (DAT_057051fe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager,CONCAT44(in_register_00000034,msgNumber),
                       CONCAT44(in_register_00000014,msgTotal));
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Byte___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    DAT_057051fe = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) goto LAB_0423bf0c;
  bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (byteArr == (System_Byte_array_array *)0x0) goto LAB_0423bf0c;
  if ((int)byteArr->max_length == 0) goto LAB_0423bf11;
  pSVar6 = byteArr->m_Items[0];
  if (pSVar6 == (System_Byte_array *)0x0) goto LAB_0423bf0c;
  if ((int)pSVar6->max_length == 0) goto LAB_0423bf11;
  uVar1 = pSVar6->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
    if (uVar1 != *(uint8_t *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x18)) goto LAB_0423bc68;
LAB_0423bd22:
    uVar9 = **(undefined8 **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(undefined8 *)(lVar3 + 0x18) = uVar9;
    il2cpp_runtime_glue(lVar3 + 0x18,uVar9);
    pSVar5 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
    System_Collections_Generic_List<byte>___ctor(pSVar5,MethodInfo_List_1_System_Byte);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
    *(System_Collections_Generic_List_byte__o **)(lVar3 + 0x20) = pSVar5;
    il2cpp_runtime_glue(lVar3 + 0x20,pSVar5);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) != 0) goto LAB_0423bc75;
LAB_0423bdce:
    il2cpp_init_class();
    uVar2 = (uint)byteArr->max_length;
  }
  else {
    if (uVar1 == *(uint8_t *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x18)) goto LAB_0423bd22;
LAB_0423bc68:
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) goto LAB_0423bdce;
LAB_0423bc75:
    uVar2 = (uint)byteArr->max_length;
  }
  if (uVar2 < 2) goto LAB_0423bf11;
  pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x20);
  if (pSVar5 == (System_Collections_Generic_List_byte__o *)0x0) goto LAB_0423bf0c;
  System_Collections_Generic_List<byte>__AddRange
            (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)byteArr->m_Items[1],MethodInfo_Void_AddRange)
  ;
  if (uVar1 != *(uint8_t *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x1a)) {
    return;
  }
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_DataCompressors);
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) != 0) goto LAB_0423bce6;
LAB_0423be0d:
    il2cpp_init_class();
    pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x20);
  }
  else {
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) goto LAB_0423be0d;
LAB_0423bce6:
    pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 0x20);
  }
  if ((pSVar5 != (System_Collections_Generic_List_byte__o *)0x0) &&
     (pSVar6 = System_Collections_Generic_List<byte>__ToArray(pSVar5,MethodInfo_Byte___ToArray),
     __this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
    pSVar7 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                       (__this,pSVar6,0x1000,0xa00000,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(System_String_o **)(lVar3 + 0x18) = pSVar7;
    il2cpp_runtime_glue(lVar3 + 0x18,pSVar7);
    pSVar8 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if ((uint)byteArr->max_length < 3) {
LAB_0423bf11:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar8 != (System_Text_Encoding_o *)0x0) {
      uVar9 = (*(pSVar8->klass->vtable)._35_GetString.methodPtr)
                        (pSVar8,byteArr->m_Items[2],(pSVar8->klass->vtable)._35_GetString.method);
      lVar3 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
      *(undefined8 *)(lVar3 + 8) = uVar9;
      il2cpp_runtime_glue(lVar3 + 8,uVar9);
      *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x20) =
           *(undefined8 *)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8);
      il2cpp_runtime_glue();
      CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)0x0);
      return;
    }
  }
LAB_0423bf0c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$TransferLogicData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicTransfer__TransferLogicData (Map_CustomLogicTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x424b2f0

System_Collections_IEnumerator_o *
Map_CustomLogicTransfer__TransferLogicData
          (Map_CustomLogicTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TransferLogicData_d__14);
    DAT_057051ff = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TransferLogicData_d__14);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)player;
    il2cpp_runtime_glue(__this_00 + 2,player);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.CustomLogicTransfer$$.ctor
// il2cpp: void Map_CustomLogicTransfer___ctor (Map_CustomLogicTransfer_o* __this, const MethodInfo* method);
// 0x424b380

void Map_CustomLogicTransfer___ctor(Map_CustomLogicTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicTransfer$$.cctor
// il2cpp: void Map_CustomLogicTransfer___cctor (const MethodInfo* method);
// 0x424b390

void Map_CustomLogicTransfer___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05705200 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    DAT_05705200 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
  *(undefined2 *)(lVar1 + 0x18) = 0x100;
  *(undefined1 *)(lVar1 + 0x1a) = 2;
  return;
}


