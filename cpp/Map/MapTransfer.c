// Type: Map.MapTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Map/MapTransfer.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Map/MapTransfer.cs  [CHANGED since prior version]
// --------------------------------

// Map.MapTransfer.<TransferMapData>d__19$$.ctor
// il2cpp: void Map_MapTransfer__TransferMapData_d__19___ctor (Map_MapTransfer__TransferMapData_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3db1c50

void Map_MapTransfer_<TransferMapData>d__19___ctor
               (Map_MapTransfer__TransferMapData_d__19_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapTransfer.<TransferMapData>d__19$$System.IDisposable.Dispose
// il2cpp: void Map_MapTransfer__TransferMapData_d__19__System_IDisposable_Dispose (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x3db1cc0

void Map_MapTransfer_<TransferMapData>d__19__System_IDisposable_Dispose
               (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return;
}


// Map.MapTransfer.<TransferMapData>d__19$$MoveNext
// il2cpp: bool Map_MapTransfer__TransferMapData_d__19__MoveNext (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x3db1cd0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Map_MapTransfer_<TransferMapData>d__19__MoveNext
          (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

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
  
  if (DAT_057027c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Byte_____get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"TransferMapRPC");
    DAT_057027c5 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar6;
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar6 = 0;
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return 0;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
    if ((__this_00 != (System_Collections_Generic_List_object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_List<object>__get_Item
                           (__this_00,(__this->fields)._i_5__2,MethodInfo_Byte_____get_Item),
       parameters != (System_Object_array *)0x0)) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
         lVar4 == 0)) {
LAB_03db1fdb:
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
           lVar4 == 0)) goto LAB_03db1fdb;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
          lVar4 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
          if (lVar4 != 0) {
            uStack_40 = *(undefined4 *)(lVar4 + 0x18);
            pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_40);
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
               lVar4 == 0)) goto LAB_03db1fdb;
            pPVar2 = pPStack_38;
            if ((uint)parameters->max_length < 3) goto LAB_03db1fd6;
            parameters->m_Items[2] = pIVar3;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar3);
            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC
                        (pPVar2,"TransferMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
              __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
              UnityEngine_WaitForSeconds___ctor(__this_01,0.25,(MethodInfo *)0x0);
              (__this->fields).__2__current = (Il2CppObject *)__this_01;
              uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
              (__this->fields).__1__state = 1;
              return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
            }
          }
          goto LAB_03db1fd1;
        }
      }
LAB_03db1fd6:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03db1fd1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x3db1ff0

Il2CppObject *
Map_MapTransfer_<TransferMapData>d__19__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_Reset (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x3db2000

void Map_MapTransfer_<TransferMapData>d__19__System_Collections_IEnumerator_Reset
               (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

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


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_get_Current (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x3db2040

Il2CppObject *
Map_MapTransfer_<TransferMapData>d__19__System_Collections_IEnumerator_get_Current
          (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer$$Init
// il2cpp: void Map_MapTransfer__Init (const MethodInfo* method);
// 0x3dac850

void Map_MapTransfer__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  
  if (DAT_057027bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_MapTransfer_CreateSingleton_MapTransfer);
    DAT_057027bd = '\x01';
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18),MethodInfo_MapTransfer_CreateSingleton_MapTransfer);
  lVar1 = *(long *)(TypeInfo_MapTransfer + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x18) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 0x18);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$OnPreLoadScene
// il2cpp: void Map_MapTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3db03a0

void Map_MapTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  
  if (DAT_057027be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    DAT_057027be = '\x01';
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
    **(undefined1 **)(TypeInfo_MapTransfer + 0xb8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTransfer$$Start
// il2cpp: void Map_MapTransfer__Start (const MethodInfo* method);
// 0x3dadc40

void Map_MapTransfer__Start(MethodInfo *method)

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
  
  if (DAT_057027bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"LoadCachedMapRPC");
    il2cpp_init_method_metadata(&"");
    DAT_057027bf = '\x01';
  }
  pMVar4 = TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  Map_MapTransfer__CreateTransferData(pMVar4);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar3 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  if (pPVar3 == (Photon_Realtime_Player_array *)0x0) {
LAB_03dade50:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pPVar3->max_length < 1) {
LAB_03dade1c:
    if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
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
                    (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30),
                     "",(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      pMVar4 = *(MethodInfo **)(TypeInfo_MapTransfer[2].virtualMethodPointer + 8);
      bVar2 = System_String__op_Inequality(a,(System_String_o *)pMVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
        if (__this == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03dade50;
        Photon_Pun_PhotonView__RPC(__this,"LoadCachedMapRPC",player,parameters,(MethodInfo *)0x0);
      }
      else {
        if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        Map_MapTransfer__Transfer(player,pMVar4);
      }
      uVar5 = uVar5 + 1;
      uVar1 = (uint)pPVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar5) goto LAB_03dade1c;
    } while (uVar5 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTransfer$$Transfer
// il2cpp: void Map_MapTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3daea70

void Map_MapTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppObject *__this_00;
  
  if (DAT_057027c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    DAT_057027c0 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (DAT_057027c3 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TransferMapData_d__19);
      DAT_057027c3 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TransferMapData_d__19);
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


// Map.MapTransfer$$CreateTransferData
// il2cpp: void Map_MapTransfer__CreateTransferData (const MethodInfo* method);
// 0x3db0430

void Map_MapTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  System_String_o *__this;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar5;
  long *plVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  undefined8 uVar8;
  int iVar9;
  bool_conflict bVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *str1;
  System_Object_array *pSVar13;
  System_Collections_Generic_List_byte__o *pSVar14;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *pSVar15;
  Il2CppObject *pIVar16;
  Il2CppClass *pIVar17;
  System_Byte_array *pSVar18;
  System_Collections_Generic_List_T__o *pSVar19;
  Il2CppObject *pIVar20;
  System_Text_Encoding_o *pSVar21;
  void *pvVar22;
  int32_t iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  
  if (DAT_057027c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_byte);
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte__GetRange);
    il2cpp_init_method_metadata(&MethodInfo_Byte___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Byte___get_Item);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057027c1 = '\x01';
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) goto LAB_03db0772;
LAB_03db045f:
    lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) != 0) goto LAB_03db045f;
LAB_03db0772:
    il2cpp_init_class();
    lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  }
  if ((lVar25 == 0) || (*(long **)(lVar25 + 0x30) == (long *)0x0)) goto LAB_03db13e7;
  pSVar11 = (System_String_o *)(**(code **)(**(long **)(lVar25 + 0x30) + 0x1b8))();
  lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (lVar25 == 0) goto LAB_03db13e7;
  __this = *(System_String_o **)(lVar25 + 0x40);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar12 = Utility_Util__CreateMD5(pSVar11,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
  *(System_String_o **)(lVar25 + 8) = pSVar12;
  il2cpp_runtime_glue(lVar25 + 8);
  if (__this == (System_String_o *)0x0) goto LAB_03db13e7;
  pSVar12 = System_String__Trim(__this,(MethodInfo *)0x0);
  bVar10 = System_String__op_Inequality
                     (pSVar12,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 8);
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    str1 = Utility_Util__CreateMD5(__this,(MethodInfo *)0x0);
    pSVar12 = System_String__Concat(pSVar12,str1,(MethodInfo *)0x0);
    lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    *(System_String_o **)(lVar25 + 8) = pSVar12;
    il2cpp_runtime_glue(lVar25 + 8,pSVar12);
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar23 = *(int32_t *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x24);
  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = Utility_CSVCompression__Compress(pSVar11,iVar23,0x3b,0x2c,(MethodInfo *)0x0);
  if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
  if ((int)pSVar13->max_length == 0) goto LAB_03db1344;
  pIVar16 = pSVar13->m_Items[0];
  pSVar14 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
  uVar8 = TypeInfo_byte;
  if (pIVar16 == (Il2CppObject *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)0x0;
  }
  else {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 il2cpp_runtime_glue(pIVar16,TypeInfo_byte);
    if (collection == (System_Collections_Generic_IEnumerable_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar16,uVar8);
    }
  }
  System_Collections_Generic_List<byte>___ctor(pSVar14,collection,MethodInfo_List_1_System_Byte);
  lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
  *(System_Collections_Generic_List_byte__o **)(lVar25 + 0x30) = pSVar14;
  il2cpp_runtime_glue(lVar25 + 0x30,pSVar14);
  pIVar17 = TypeInfo_JSONNode;
  if ((uint)pSVar13->max_length < 2) goto LAB_03db1344;
  pIVar16 = pSVar13->m_Items[1];
  if (pIVar16 == (Il2CppObject *)0x0) {
    lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    *(undefined8 *)(lVar25 + 0x28) = 0;
  }
  else {
    bVar2 = (TypeInfo_JSONNode->_2).naturalAligment;
    if (((pIVar16->klass->_2).naturalAligment < bVar2) ||
       ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNode)) {
LAB_03db082e:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar16,pIVar17);
    }
    lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    *(Il2CppObject **)(lVar25 + 0x28) = pIVar16;
    if (((pIVar16->klass->_2).naturalAligment < bVar2) ||
       ((pIVar16->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar17)) goto LAB_03db082e;
  }
  il2cpp_runtime_glue(lVar25 + 0x28);
  pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
  System_Collections_Generic_List<object>___ctor(pSVar15,MethodInfo_List_1_System_Byte);
  lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar25 + 0x38) = pSVar15;
  il2cpp_runtime_glue(lVar25 + 0x38,pSVar15);
  pSVar15 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
  pIVar16 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,5);
  pIVar17 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
  if (pIVar17 == (Il2CppClass *)0x0) goto LAB_03db13e7;
  if (*(int *)&(pIVar17->_1).namespaze == 0) goto LAB_03db1344;
  *(undefined1 *)&(pIVar17->_1).byval_arg.data =
       *(undefined1 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x20);
  if (pIVar16 == (Il2CppObject *)0x0) goto LAB_03db13e7;
  if (*(int *)&pIVar16[1].monitor == 0) goto LAB_03db1344;
  pIVar16[2].klass = pIVar17;
  il2cpp_runtime_glue(pIVar16 + 2,pIVar17);
  if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (((lVar25 == 0) || (plVar6 = *(long **)(lVar25 + 0x20), plVar6 == (long *)0x0)) ||
     (pSVar11 = (System_String_o *)
                (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0)),
     pUVar5 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) goto LAB_03db13e7;
  pSVar18 = Utility_Algorithms_CompressionAlgorithm__CompressString
                      (pUVar5,pSVar11,1,(MethodInfo *)0x0);
  if (*(uint *)&pIVar16[1].monitor < 2) goto LAB_03db1344;
  pIVar16[2].monitor = pSVar18;
  il2cpp_runtime_glue(&pIVar16[2].monitor,pSVar18);
  lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if ((lVar25 == 0) || (plVar6 = *(long **)(lVar25 + 0x28), plVar6 == (long *)0x0))
  goto LAB_03db13e7;
  pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  pSVar11 = (System_String_o *)
            (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  if (pUVar5 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto LAB_03db13e7;
  pSVar18 = Utility_Algorithms_CompressionAlgorithm__CompressString
                      (pUVar5,pSVar11,1,(MethodInfo *)0x0);
  if (*(uint *)&pIVar16[1].monitor < 3) goto LAB_03db1344;
  pIVar16[3].klass = (Il2CppClass *)pSVar18;
  il2cpp_runtime_glue(pIVar16 + 3,pSVar18);
  lVar25 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if ((lVar25 == 0) || (plVar6 = *(long **)(lVar25 + 0x38), plVar6 == (long *)0x0))
  goto LAB_03db13e7;
  pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  pSVar11 = (System_String_o *)
            (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
  if (pUVar5 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto LAB_03db13e7;
  pSVar18 = Utility_Algorithms_CompressionAlgorithm__CompressString
                      (pUVar5,pSVar11,1,(MethodInfo *)0x0);
  if (*(uint *)&pIVar16[1].monitor < 4) goto LAB_03db1344;
  pIVar16[3].monitor = pSVar18;
  il2cpp_runtime_glue(&pIVar16[3].monitor,pSVar18);
  plVar6 = *(long **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x28);
  if (plVar6 == (long *)0x0) goto LAB_03db13e7;
  pUVar5 = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  pSVar11 = (System_String_o *)
            (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  if (pUVar5 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto LAB_03db13e7;
  pSVar18 = Utility_Algorithms_CompressionAlgorithm__CompressString
                      (pUVar5,pSVar11,1,(MethodInfo *)0x0);
  if (*(uint *)&pIVar16[1].monitor < 5) goto LAB_03db1344;
  pIVar16[4].klass = (Il2CppClass *)pSVar18;
  il2cpp_runtime_glue(pIVar16 + 4,pSVar18);
  lVar25 = MethodInfo_Void_Add;
  if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03db13e7;
  piVar1 = &(pSVar15->fields)._version;
  *piVar1 = *piVar1 + 1;
  pSVar13 = (pSVar15->fields)._items;
  if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
  uVar3 = (pSVar15->fields)._size;
  if (uVar3 < (uint)pSVar13->max_length) {
    (pSVar15->fields)._size = uVar3 + 1;
    pSVar13->m_Items[(int)uVar3] = pIVar16;
    il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3,pIVar16);
  }
  else {
    System_Collections_Generic_List<object>__AddWithResize
              (pSVar15,pIVar16,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
  }
  lVar25 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x30);
  if (lVar25 == 0) goto LAB_03db13e7;
  iVar4 = *(int *)(lVar25 + 0x18);
  pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
  System_Collections_Generic_List<object>___ctor(pSVar15,MethodInfo_List_1_System_Byte);
  if (iVar4 < 1) {
    if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03db13e7;
LAB_03db0cc8:
    if (0 < (pSVar15->fields)._size) {
      iVar26 = 0;
      iVar4 = *(int *)(TypeInfo_MapTransfer + 0xe4);
      do {
        if (iVar4 == 0) {
          il2cpp_init_class();
        }
        pSVar7 = *(System_Collections_Generic_List_object__o **)
                  (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
        pIVar16 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,2);
        pIVar17 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
        if (pIVar17 == (Il2CppClass *)0x0) goto LAB_03db13e7;
        if (*(int *)&(pIVar17->_1).namespaze == 0) goto LAB_03db1344;
        *(undefined1 *)&(pIVar17->_1).byval_arg.data =
             *(undefined1 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x21);
        if (pIVar16 == (Il2CppObject *)0x0) goto LAB_03db13e7;
        if (*(int *)&pIVar16[1].monitor == 0) goto LAB_03db1344;
        pIVar16[2].klass = pIVar17;
        il2cpp_runtime_glue(pIVar16 + 2,pIVar17);
        pIVar20 = System_Collections_Generic_List<object>__get_Item(pSVar15,iVar26,MethodInfo_Byte___get_Item);
        if (*(uint *)&pIVar16[1].monitor < 2) goto LAB_03db1344;
        pIVar16[2].monitor = pIVar20;
        il2cpp_runtime_glue(&pIVar16[2].monitor,pIVar20);
        lVar25 = MethodInfo_Void_Add;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03db13e7;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar13 = (pSVar7->fields)._items;
        if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
        uVar3 = (pSVar7->fields)._size;
        if (uVar3 < (uint)pSVar13->max_length) {
          (pSVar7->fields)._size = uVar3 + 1;
          pSVar13->m_Items[(int)uVar3] = pIVar16;
          il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3);
          if ((pSVar15->fields)._size <= iVar26 + 1) break;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar7,pIVar16,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          if ((pSVar15->fields)._size <= iVar26 + 1) break;
        }
        iVar26 = iVar26 + 1;
        iVar4 = *(int *)(TypeInfo_MapTransfer + 0xe4);
      } while( true );
    }
    pSVar11 = System_String__Trim(__this,(MethodInfo *)0x0);
    bVar10 = System_String__op_Inequality
                       (pSVar11,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) ==
          (Utility_Algorithms_CompressionAlgorithm_o *)0x0) goto LAB_03db13e7;
      pSVar18 = Utility_Algorithms_CompressionAlgorithm__CompressString
                          ((Utility_Algorithms_CompressionAlgorithm_o *)
                           **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),__this,1,(MethodInfo *)0x0);
      pSVar14 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
      System_Collections_Generic_List<byte>___ctor
                (pSVar14,(System_Collections_Generic_IEnumerable_T__o *)pSVar18,MethodInfo_List_1_System_Byte);
      if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar25 = *(long *)(TypeInfo_MapTransfer + 0xb8);
      *(System_Collections_Generic_List_byte__o **)(lVar25 + 0x40) = pSVar14;
      il2cpp_runtime_glue(lVar25 + 0x40,pSVar14);
      lVar25 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
      if (lVar25 == 0) goto LAB_03db13e7;
      iVar4 = *(int *)(lVar25 + 0x18);
      pSVar15 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_byte);
      System_Collections_Generic_List<object>___ctor(pSVar15,MethodInfo_List_1_System_Byte);
      if (iVar4 < 1) {
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03db13e7;
      }
      else {
        if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) {
          iVar23 = 10000;
          if (iVar4 < 0x2711) {
            iVar23 = iVar4;
          }
          if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar14 = *(System_Collections_Generic_List_byte__o **)
                     (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
          goto joined_r0x03db13cd;
        }
        iVar24 = 0;
        iVar26 = 10000;
        do {
          while( true ) {
            iVar9 = iVar4 - iVar24;
            if (iVar26 + iVar24 <= iVar4) {
              iVar9 = iVar26;
            }
            iVar26 = iVar9;
            if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar14 = *(System_Collections_Generic_List_byte__o **)
                       (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
            if ((pSVar14 == (System_Collections_Generic_List_byte__o *)0x0) ||
               (pSVar19 = System_Collections_Generic_List<byte>__GetRange
                                    (pSVar14,iVar24,iVar26,MethodInfo_List_1_System_Byte__GetRange),
               pSVar19 == (System_Collections_Generic_List_T__o *)0x0)) goto LAB_03db13e7;
            pSVar18 = System_Collections_Generic_List<byte>__ToArray
                                ((System_Collections_Generic_List_byte__o *)pSVar19,MethodInfo_Byte___ToArray);
            lVar25 = MethodInfo_Void_Add;
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar13 = (pSVar15->fields)._items;
            if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
            uVar3 = (pSVar15->fields)._size;
            if ((uint)pSVar13->max_length <= uVar3) break;
            (pSVar15->fields)._size = uVar3 + 1;
            pSVar13->m_Items[(int)uVar3] = &pSVar18->obj;
            il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3,pSVar18);
            iVar24 = iVar24 + iVar26;
            if (iVar4 <= iVar24) goto LAB_03db1069;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar15,&pSVar18->obj,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          iVar24 = iVar24 + iVar26;
        } while (iVar24 < iVar4);
      }
LAB_03db1069:
      if (0 < (pSVar15->fields)._size) {
        iVar26 = 0;
        iVar4 = *(int *)(TypeInfo_MapTransfer + 0xe4);
        do {
          if (iVar4 == 0) {
            il2cpp_init_class();
          }
          pSVar7 = *(System_Collections_Generic_List_object__o **)
                    (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
          pIVar16 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,2);
          pIVar17 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
          if (pIVar17 == (Il2CppClass *)0x0) goto LAB_03db13e7;
          if (*(int *)&(pIVar17->_1).namespaze == 0) goto LAB_03db1344;
          *(undefined1 *)&(pIVar17->_1).byval_arg.data =
               *(undefined1 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x22);
          if (pIVar16 == (Il2CppObject *)0x0) goto LAB_03db13e7;
          if (*(int *)&pIVar16[1].monitor == 0) goto LAB_03db1344;
          pIVar16[2].klass = pIVar17;
          il2cpp_runtime_glue(pIVar16 + 2,pIVar17);
          pIVar20 = System_Collections_Generic_List<object>__get_Item(pSVar15,iVar26,MethodInfo_Byte___get_Item);
          if (*(uint *)&pIVar16[1].monitor < 2) goto LAB_03db1344;
          pIVar16[2].monitor = pIVar20;
          il2cpp_runtime_glue(&pIVar16[2].monitor,pIVar20);
          lVar25 = MethodInfo_Void_Add;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03db13e7;
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar13 = (pSVar7->fields)._items;
          if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
          uVar3 = (pSVar7->fields)._size;
          if (uVar3 < (uint)pSVar13->max_length) {
            (pSVar7->fields)._size = uVar3 + 1;
            pSVar13->m_Items[(int)uVar3] = pIVar16;
            il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3,pIVar16);
            if ((pSVar15->fields)._size <= iVar26 + 1) break;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar7,pIVar16,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
            if ((pSVar15->fields)._size <= iVar26 + 1) break;
          }
          iVar26 = iVar26 + 1;
          iVar4 = *(int *)(TypeInfo_MapTransfer + 0xe4);
        } while( true );
      }
    }
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38)
    ;
    pIVar16 = (Il2CppObject *)il2cpp_glue_02274930(TypeInfo_byte,2);
    pIVar17 = (Il2CppClass *)il2cpp_glue_02274930(TypeInfo_byte,1);
    if (pIVar17 != (Il2CppClass *)0x0) {
      if (*(int *)&(pIVar17->_1).namespaze == 0) {
LAB_03db1344:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      *(undefined1 *)&(pIVar17->_1).byval_arg.data =
           *(undefined1 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x23);
      if (pIVar16 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar16[1].monitor == 0) goto LAB_03db1344;
        pIVar16[2].klass = pIVar17;
        il2cpp_runtime_glue(pIVar16 + 2,pIVar17);
        pSVar21 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        if (pSVar21 != (System_Text_Encoding_o *)0x0) {
          pvVar22 = (void *)(*(pSVar21->klass->vtable)._18_GetBytes.methodPtr)
                                      (pSVar21,*(undefined8 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 8),
                                       (pSVar21->klass->vtable)._18_GetBytes.method);
          if (*(uint *)&pIVar16[1].monitor < 2) goto LAB_03db1344;
          pIVar16[2].monitor = pvVar22;
          il2cpp_runtime_glue(&pIVar16[2].monitor,pvVar22);
          lVar25 = MethodInfo_Void_Add;
          if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar1 = &(pSVar15->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar13 = (pSVar15->fields)._items;
            if (pSVar13 != (System_Object_array *)0x0) {
              uVar3 = (pSVar15->fields)._size;
              if (uVar3 < (uint)pSVar13->max_length) {
                (pSVar15->fields)._size = uVar3 + 1;
                pSVar13->m_Items[(int)uVar3] = pIVar16;
                il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3,pIVar16);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar15,pIVar16,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70)
                        );
              return;
            }
          }
        }
      }
    }
  }
  else {
    if (pSVar15 != (System_Collections_Generic_List_object__o *)0x0) {
      iVar24 = 0;
      iVar26 = 10000;
      do {
        while( true ) {
          iVar9 = iVar4 - iVar24;
          if (iVar26 + iVar24 <= iVar4) {
            iVar9 = iVar26;
          }
          iVar26 = iVar9;
          if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar14 = *(System_Collections_Generic_List_byte__o **)
                     (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x30);
          if ((pSVar14 == (System_Collections_Generic_List_byte__o *)0x0) ||
             (pSVar19 = System_Collections_Generic_List<byte>__GetRange
                                  (pSVar14,iVar24,iVar26,MethodInfo_List_1_System_Byte__GetRange),
             pSVar19 == (System_Collections_Generic_List_T__o *)0x0)) goto LAB_03db13e7;
          pSVar18 = System_Collections_Generic_List<byte>__ToArray
                              ((System_Collections_Generic_List_byte__o *)pSVar19,MethodInfo_Byte___ToArray);
          lVar25 = MethodInfo_Void_Add;
          piVar1 = &(pSVar15->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar13 = (pSVar15->fields)._items;
          if (pSVar13 == (System_Object_array *)0x0) goto LAB_03db13e7;
          uVar3 = (pSVar15->fields)._size;
          if ((uint)pSVar13->max_length <= uVar3) break;
          (pSVar15->fields)._size = uVar3 + 1;
          pSVar13->m_Items[(int)uVar3] = &pSVar18->obj;
          il2cpp_runtime_glue(pSVar13->m_Items + (int)uVar3);
          iVar24 = iVar24 + iVar26;
          if (iVar4 <= iVar24) goto LAB_03db0cc8;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar15,&pSVar18->obj,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        iVar24 = iVar24 + iVar26;
      } while (iVar24 < iVar4);
      goto LAB_03db0cc8;
    }
    iVar23 = 10000;
    if (iVar4 < 0x2711) {
      iVar23 = iVar4;
    }
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar14 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x30);
joined_r0x03db13cd:
    if ((pSVar14 != (System_Collections_Generic_List_byte__o *)0x0) &&
       (pSVar19 = System_Collections_Generic_List<byte>__GetRange(pSVar14,0,iVar23,MethodInfo_List_1_System_Byte__GetRange),
       pSVar19 != (System_Collections_Generic_List_T__o *)0x0)) {
      System_Collections_Generic_List<byte>__ToArray
                ((System_Collections_Generic_List_byte__o *)pSVar19,MethodInfo_Byte___ToArray);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03db13e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTransfer$$OnTransferMapRPC
// il2cpp: void Map_MapTransfer__OnTransferMapRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3db1480

void Map_MapTransfer__OnTransferMapRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  int32_t deltaRows;
  UI_LoadingMenu_o *__this;
  long *plVar3;
  bool_conflict bVar4;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Collections_Generic_List_byte__o *pSVar7;
  long lVar8;
  System_Byte_array *pSVar9;
  System_Text_Encoding_o *pSVar10;
  MethodInfo *pMVar11;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  
  if (DAT_057027c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CSVCompression);
    il2cpp_init_method_metadata(&TypeInfo_DataCompressors);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    il2cpp_init_method_metadata(&MethodInfo_Byte___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Byte);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_byte);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057027c2 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) goto LAB_03db1c3e;
  bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
  if (__this == (UI_LoadingMenu_o *)0x0) goto LAB_03db1c3e;
  pMVar11 = (MethodInfo *)0x0;
  UI_LoadingMenu__UpdateLoading
            (__this,((float)msgNumber / (float)msgTotal) * 0.5,0,0,(MethodInfo *)0x0);
  if (byteArr == (System_Byte_array_array *)0x0) goto LAB_03db1c3e;
  if ((int)byteArr->max_length == 0) goto LAB_03db1c43;
  pSVar9 = byteArr->m_Items[0];
  if (pSVar9 == (System_Byte_array *)0x0) goto LAB_03db1c3e;
  if ((int)pSVar9->max_length == 0) goto LAB_03db1c43;
  uVar1 = pSVar9->m_Items[0];
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
    lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    uVar2 = *(uint8_t *)(lVar8 + 0x20);
  }
  else {
    lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    uVar2 = *(uint8_t *)(lVar8 + 0x20);
  }
  if (uVar1 == uVar2) {
    __this_00 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
    Map_MapScript___ctor(__this_00,pMVar11);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(TypeInfo_MapManager + 0xb8);
    *(Map_MapScript_o **)(lVar8 + 8) = __this_00;
    il2cpp_runtime_glue(lVar8 + 8,__this_00);
    lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar8 != 0) {
      plVar3 = *(long **)(lVar8 + 0x20);
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((uint)byteArr->max_length < 2) goto LAB_03db1c43;
      if (((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
           (Utility_Algorithms_CompressionAlgorithm_o *)0x0) &&
         (pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                             ((Utility_Algorithms_CompressionAlgorithm_o *)
                              **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),byteArr->m_Items[1],0x1000,
                              0xa00000,(MethodInfo *)0x0), plVar3 != (long *)0x0)) {
        (**(code **)(*plVar3 + 0x1c8))(plVar3,pSVar5,*(undefined8 *)(*plVar3 + 0x1d0));
        lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
        if (lVar8 != 0) {
          if ((uint)byteArr->max_length < 3) goto LAB_03db1c43;
          if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
              (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
            plVar3 = *(long **)(lVar8 + 0x28);
            pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               ((Utility_Algorithms_CompressionAlgorithm_o *)
                                **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),byteArr->m_Items[2],0x1000,
                                0xa00000,(MethodInfo *)0x0);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x1c8))(plVar3,pSVar5,*(undefined8 *)(*plVar3 + 0x1d0));
              lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
              if (lVar8 != 0) {
                if ((uint)byteArr->max_length < 4) goto LAB_03db1c43;
                if ((Utility_Algorithms_CompressionAlgorithm_o *)
                    **(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
                    (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                  plVar3 = *(long **)(lVar8 + 0x38);
                  pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                     ((Utility_Algorithms_CompressionAlgorithm_o *)
                                      **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),byteArr->m_Items[3],
                                      0x1000,0xa00000,(MethodInfo *)0x0);
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x1b8))(plVar3,pSVar5,*(undefined8 *)(*plVar3 + 0x1c0));
                    if ((uint)byteArr->max_length < 5) goto LAB_03db1c43;
                    if ((Utility_Algorithms_CompressionAlgorithm_o *)
                        **(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
                        (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                      pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                         ((Utility_Algorithms_CompressionAlgorithm_o *)
                                          **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),byteArr->m_Items[4]
                                          ,0x1000,0xa00000,(MethodInfo *)0x0);
                      pSVar6 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
                      *(SimpleJSONFixed_JSONNode_o **)(lVar8 + 0x28) = pSVar6;
                      il2cpp_runtime_glue(lVar8 + 0x28,pSVar6);
                      pSVar7 = (System_Collections_Generic_List_byte__o *)
                               il2cpp_runtime_glue(TypeInfo_List_byte);
                      System_Collections_Generic_List<byte>___ctor(pSVar7,MethodInfo_List_1_System_Byte);
                      lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
                      *(System_Collections_Generic_List_byte__o **)(lVar8 + 0x30) = pSVar7;
                      il2cpp_runtime_glue(lVar8 + 0x30,pSVar7);
                      pSVar7 = (System_Collections_Generic_List_byte__o *)
                               il2cpp_runtime_glue(TypeInfo_List_byte);
                      System_Collections_Generic_List<byte>___ctor(pSVar7,MethodInfo_List_1_System_Byte);
                      lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
                      *(System_Collections_Generic_List_byte__o **)(lVar8 + 0x40) = pSVar7;
                      il2cpp_runtime_glue(lVar8 + 0x40,pSVar7);
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
    goto LAB_03db1c3e;
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
    lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    uVar2 = *(uint8_t *)(lVar8 + 0x21);
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    }
  }
  else {
    uVar2 = *(uint8_t *)(lVar8 + 0x21);
  }
  if (uVar1 == uVar2) {
    if ((uint)byteArr->max_length < 2) goto LAB_03db1c43;
    pSVar7 = *(System_Collections_Generic_List_byte__o **)(lVar8 + 0x30);
  }
  else {
    uVar2 = *(uint8_t *)(lVar8 + 0x22);
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
    }
    if (uVar1 != uVar2) {
      if (uVar1 != *(uint8_t *)(lVar8 + 0x23)) {
        return;
      }
      if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
        il2cpp_init_class();
        lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
      }
      pSVar7 = *(System_Collections_Generic_List_byte__o **)(lVar8 + 0x30);
      if (pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) goto LAB_03db1c3e;
      if (0 < (pSVar7->fields)._size) {
        if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Collections_Generic_List_byte__o **)
                    (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x30);
          if (pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) goto LAB_03db1c3e;
        }
        pSVar9 = System_Collections_Generic_List<byte>__ToArray(pSVar7,MethodInfo_Byte___ToArray);
        pSVar6 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x28);
        deltaRows = *(int32_t *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x24);
        if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = Utility_CSVCompression__Decompress
                           (pSVar9,pSVar6,deltaRows,0x3b,0x2c,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
        if ((lVar8 == 0) || (plVar3 = *(long **)(lVar8 + 0x30), plVar3 == (long *)0x0))
        goto LAB_03db1c3e;
        (**(code **)(*plVar3 + 0x1c8))(plVar3,pSVar5,*(undefined8 *)(*plVar3 + 0x1d0));
      }
      if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar8 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
      if (lVar8 == 0) goto LAB_03db1c3e;
      if (0 < *(int *)(lVar8 + 0x18)) {
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          il2cpp_init_class(TypeInfo_DataCompressors);
          __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)
                      **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
          if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) goto LAB_03db1b1f;
LAB_03db1ad9:
          pSVar7 = *(System_Collections_Generic_List_byte__o **)
                    (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
        }
        else {
          __this_01 = (Utility_Algorithms_CompressionAlgorithm_o *)
                      **(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
          if (*(int *)(TypeInfo_MapTransfer + 0xe4) != 0) goto LAB_03db1ad9;
LAB_03db1b1f:
          il2cpp_init_class();
          pSVar7 = *(System_Collections_Generic_List_byte__o **)
                    (*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x40);
        }
        if ((pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) ||
           (pSVar9 = System_Collections_Generic_List<byte>__ToArray(pSVar7,MethodInfo_Byte___ToArray),
           __this_01 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) goto LAB_03db1c3e;
        pSVar5 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                           (__this_01,pSVar9,0x1000,0xa00000,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
        if (lVar8 == 0) goto LAB_03db1c3e;
        *(System_String_o **)(lVar8 + 0x40) = pSVar5;
        il2cpp_runtime_glue(lVar8 + 0x40,pSVar5);
      }
      pSVar10 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if ((uint)byteArr->max_length < 2) {
LAB_03db1c43:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pSVar10 != (System_Text_Encoding_o *)0x0) {
        pMVar11 = (MethodInfo *)
                  (*(pSVar10->klass->vtable)._35_GetString.methodPtr)
                            (pSVar10,byteArr->m_Items[1],
                             (pSVar10->klass->vtable)._35_GetString.method);
        if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar8 = *(long *)(TypeInfo_MapTransfer + 0xb8);
        *(MethodInfo **)(lVar8 + 8) = pMVar11;
        il2cpp_runtime_glue(lVar8 + 8);
        if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_MapManager__LoadMap(1,pMVar11);
        return;
      }
      goto LAB_03db1c3e;
    }
    if ((uint)byteArr->max_length < 2) goto LAB_03db1c43;
    pSVar7 = *(System_Collections_Generic_List_byte__o **)(lVar8 + 0x40);
  }
  if (pSVar7 != (System_Collections_Generic_List_byte__o *)0x0) {
    System_Collections_Generic_List<byte>__AddRange
              (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)byteArr->m_Items[1],
               MethodInfo_Void_AddRange);
    return;
  }
LAB_03db1c3e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Map.MapTransfer$$TransferMapData
// il2cpp: System_Collections_IEnumerator_o* Map_MapTransfer__TransferMapData (Map_MapTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3db1410

System_Collections_IEnumerator_o *
Map_MapTransfer__TransferMapData
          (Map_MapTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057027c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TransferMapData_d__19);
    DAT_057027c3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TransferMapData_d__19);
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


// Map.MapTransfer$$.ctor
// il2cpp: void Map_MapTransfer___ctor (Map_MapTransfer_o* __this, const MethodInfo* method);
// 0x3db1c70

void Map_MapTransfer___ctor(Map_MapTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$.cctor
// il2cpp: void Map_MapTransfer___cctor (const MethodInfo* method);
// 0x3db1c80

void Map_MapTransfer___cctor(MethodInfo *method)

{
  if (DAT_057027c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    DAT_057027c4 = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x20) = 0x1603020100;
  return;
}


