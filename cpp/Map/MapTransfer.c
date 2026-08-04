// Type: Map.MapTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/MapTransfer.cs
// Prior real C# source (older reference): Assets/Scripts/Map/MapTransfer.cs
// --------------------------------

// Map.MapTransfer.<TransferMapData>d__19$$.ctor
// il2cpp: void Map_MapTransfer__TransferMapData_d__19___ctor (Map_MapTransfer__TransferMapData_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40b7f90

void Map_MapTransfer__TransferMapData_d__19___ctor
               (Map_MapTransfer__TransferMapData_d__19_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.MapTransfer.<TransferMapData>d__19$$System.IDisposable.Dispose
// il2cpp: void Map_MapTransfer__TransferMapData_d__19__System_IDisposable_Dispose (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x40b8000

void Map_MapTransfer__TransferMapData_d__19__System_IDisposable_Dispose
               (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return;
}


// Map.MapTransfer.<TransferMapData>d__19$$MoveNext
// il2cpp: bool Map_MapTransfer__TransferMapData_d__19__MoveNext (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x40b8010

bool_conflict
Map_MapTransfer__TransferMapData_d__19__MoveNext
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
  
  if (g_data_057ac4fa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"TransferMapRPC");
    g_data_057ac4fa = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
  if (lVar4 == 0) {
label_040b8311:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return 0;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
    if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
    if ((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar3 = System_Collections_Generic_List_object___get_Item
                           (__this_00,(__this->fields)._i_5__2,MethodInfo_Byte_get_Item),
       parameters == (System_Object_array *)0x0)) goto label_040b8311;
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
    goto label_040b831b;
    pPStack_38 = pPVar2;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar3;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar3);
      iStack_3c = (__this->fields)._i_5__2;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
      goto label_040b831b;
      if (1 < (uint)parameters->max_length) {
        parameters->m_Items[1] = pIVar3;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pIVar3);
        lVar4 = *(long *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x38);
        if (lVar4 != 0) {
          uStack_40 = *(undefined4 *)(lVar4 + 0x18);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_40);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
          goto label_040b831b;
          pPVar2 = pPStack_38;
          if ((uint)parameters->max_length < 3) goto label_040b8316;
          parameters->m_Items[2] = pIVar3;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pIVar3);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_3efa220(pPVar2,"TransferMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(__this_01,0.25,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
        goto label_040b8311;
      }
    }
  }
label_040b8316:
  il2cpp_runtime_helper_022b2ca0();
label_040b831b:
  lVar4 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar4,0);
  return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
}


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x40b8330

Il2CppObject *
Map_MapTransfer__TransferMapData_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_Reset (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x40b8340

void Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_Reset
               (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

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


// Map.MapTransfer.<TransferMapData>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_get_Current (Map_MapTransfer__TransferMapData_d__19_o* __this, const MethodInfo* method);
// 0x40b8380

Il2CppObject *
Map_MapTransfer__TransferMapData_d__19__System_Collections_IEnumerator_get_Current
          (Map_MapTransfer__TransferMapData_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.MapTransfer$$Init
// il2cpp: void Map_MapTransfer__Init (const MethodInfo* method);
// 0x40b2000

void Map_MapTransfer__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  
  if (g_data_057ac4f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapTransfer_CreateSingleton_MapTransfer);
    g_data_057ac4f2 = '\x01';
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x18),MethodInfo_MapTransfer_CreateSingleton_MapTransfer);
  lVar1 = *(long *)(TypeInfo_MapTransfer + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x18) = pIVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$OnPreLoadScene
// il2cpp: void Map_MapTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x40b66e0

void Map_MapTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  char cVar3;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Pun_PhotonView_o *__this;
  UnityEngine_MonoBehaviour_o *pUVar4;
  System_String_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  long *plVar5;
  int iVar6;
  char cVar7;
  bool_conflict bVar8;
  Photon_Realtime_Player_o *player;
  long lVar9;
  long lVar10;
  System_Collections_Generic_List_BasePopup__o *pSVar11;
  UI_LoadingMenu_o *pUVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  System_String_o *str1;
  System_Object_array *pSVar15;
  System_Collections_Generic_List_byte__o *pSVar16;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *pSVar17;
  Il2CppObject *pIVar18;
  Il2CppClass *pIVar19;
  System_Byte_array *pSVar20;
  UI_LoadingMenu_o **__this_02;
  void *pvVar21;
  System_Collections_Generic_List_T__o *pSVar22;
  Il2CppObject *pIVar23;
  System_Byte_array *__this_03;
  SimpleJSONFixed_JSONNode_o *pSVar24;
  System_Byte_array *pSVar25;
  System_Byte_array *data;
  System_Text_Encoding_o *pSVar26;
  undefined8 uVar27;
  int extraout_EDX;
  uint uVar28;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar29;
  int iVar30;
  undefined4 uVar31;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  UI_LoadingMenu_o *pUVar32;
  int iVar33;
  uint uVar34;
  UI_LoadingMenu_o **ppUVar35;
  int32_t iVar36;
  
  if (g_data_057ac4f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f3 = '\x01';
    if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) != 0) goto label_040b66fd;
label_040b6749:
    il2cpp_runtime_helper_02337ed0();
    pUVar4 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
  }
  else {
    if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) goto label_040b6749;
label_040b66fd:
    pUVar4 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
  }
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(pUVar4,(MethodInfo *)0x0);
    *(undefined1 *)TypeInfo_MapTransfer[1].monitor = 0;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4f6 == '\0') goto label_040b6998;
  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) goto label_040b6ab2;
label_040b679f:
  __this_02 = &TypeInfo_MapManager;
  lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
  if (lVar10 != 0) {
    do {
      __this_02 = &TypeInfo_MapManager;
      if (*(long **)(lVar10 + 0x30) == (long *)0x0) break;
      pSVar13 = (System_String_o *)(**(code **)(**(long **)(lVar10 + 0x30) + 0x1b8))();
      lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
      if (lVar10 == 0) break;
      __this_00 = *(System_String_o **)(lVar10 + 0x40);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Utility_Util__CreateMD5(pSVar13,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar21 = TypeInfo_MapTransfer[1].monitor;
      *(System_String_o **)((long)pvVar21 + 8) = pSVar14;
      il2cpp_runtime_helper_022b4080((long)pvVar21 + 8);
      if (__this_00 == (System_String_o *)0x0) break;
      pSVar14 = System_String__Trim(__this_00,(MethodInfo *)0x0);
      bVar8 = System_String__op_Inequality
                        (pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar14 = *(System_String_o **)((long)TypeInfo_MapTransfer[1].monitor + 8);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        str1 = Utility_Util__CreateMD5(__this_00,(MethodInfo *)0x0);
        pSVar14 = System_String__Concat_3ae5ba0(pSVar14,str1,(MethodInfo *)0x0);
        pvVar21 = TypeInfo_MapTransfer[1].monitor;
        *(System_String_o **)((long)pvVar21 + 8) = pSVar14;
        il2cpp_runtime_helper_022b4080((long)pvVar21 + 8,pSVar14);
      }
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar36 = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
      if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = Utility_CSVCompression__Compress(pSVar13,iVar36,0x3b,0x2c,(MethodInfo *)0x0);
      if (pSVar15 == (System_Object_array *)0x0) break;
      ppUVar35 = (UI_LoadingMenu_o **)__this_00;
      if ((int)pSVar15->max_length == 0) goto label_040b7684;
      pIVar18 = pSVar15->m_Items[0];
      pSVar16 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
      ppUVar35 = (UI_LoadingMenu_o **)TypeInfo_byte;
      if (pIVar18 == (Il2CppObject *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)0x0;
        ppUVar35 = (UI_LoadingMenu_o **)__this_00;
label_040b6ad5:
        System_Collections_Generic_List_byte____ctor_357ee60(pSVar16,collection,MethodInfo_List_1_System_Byte);
        pvVar21 = TypeInfo_MapTransfer[1].monitor;
        *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x30) = pSVar16;
        il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x30);
        pIVar19 = TypeInfo_JSONNode;
        if ((uint)pSVar15->max_length < 2) goto label_040b7684;
        pIVar18 = pSVar15->m_Items[1];
        if (pIVar18 == (Il2CppObject *)0x0) {
label_040b6b79:
          pvVar21 = TypeInfo_MapTransfer[1].monitor;
          *(undefined8 *)((long)pvVar21 + 0x28) = 0;
        }
        else {
          bVar2 = (TypeInfo_JSONNode->_2).naturalAligment;
          if (((pIVar18->klass->_2).naturalAligment < bVar2) ||
             ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNode)) {
label_040b6b6e:
            il2cpp_runtime_helper_022b2fd0(pIVar18,pIVar19);
            goto label_040b6b79;
          }
          pvVar21 = TypeInfo_MapTransfer[1].monitor;
          *(Il2CppObject **)((long)pvVar21 + 0x28) = pIVar18;
          if (((pIVar18->klass->_2).naturalAligment < bVar2) ||
             ((pIVar18->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar19)) goto label_040b6b6e;
        }
        il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x28);
        pSVar17 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor(pSVar17,MethodInfo_List_1_System_Byte);
        pvVar21 = TypeInfo_MapTransfer[1].monitor;
        *(System_Collections_Generic_List_object__o **)((long)pvVar21 + 0x38) = pSVar17;
        il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x38,pSVar17);
        pSVar17 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
        pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,5);
        pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
        if (pIVar19 == (Il2CppClass *)0x0) break;
        if (*(int *)&(pIVar19->_1).namespaze == 0) goto label_040b7684;
        *(undefined1 *)&(pIVar19->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x20);
        if (pIVar18 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar18[1].monitor == 0) goto label_040b7684;
        pIVar18[2].klass = pIVar19;
        il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar19);
        ppUVar35 = &TypeInfo_DataCompressors;
        if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if (((lVar10 == 0) || (plVar5 = *(long **)(lVar10 + 0x20), plVar5 == (long *)0x0)) ||
           (pSVar13 = (System_String_o *)
                      (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0)),
           pUVar29 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) break;
        pSVar20 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar29,pSVar13,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7684;
        pIVar18[2].monitor = pSVar20;
        il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pSVar20);
        lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if ((lVar10 == 0) || (plVar5 = *(long **)(lVar10 + 0x28), plVar5 == (long *)0x0)) break;
        pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar13 = (System_String_o *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
        if (pUVar29 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar20 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar29,pSVar13,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar18[1].monitor < 3) goto label_040b7684;
        pIVar18[3].klass = (Il2CppClass *)pSVar20;
        il2cpp_runtime_helper_022b4080(pIVar18 + 3,pSVar20);
        lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if ((lVar10 == 0) || (plVar5 = *(long **)(lVar10 + 0x38), plVar5 == (long *)0x0)) break;
        pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar13 = (System_String_o *)(**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        if (pUVar29 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar20 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar29,pSVar13,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar18[1].monitor < 4) goto label_040b7684;
        pIVar18[3].monitor = pSVar20;
        il2cpp_runtime_helper_022b4080(&pIVar18[3].monitor,pSVar20);
        plVar5 = *(long **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
        if (plVar5 == (long *)0x0) break;
        pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar13 = (System_String_o *)(**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        if (pUVar29 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar20 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar29,pSVar13,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar18[1].monitor < 5) goto label_040b7684;
        pIVar18[4].klass = (Il2CppClass *)pSVar20;
        il2cpp_runtime_helper_022b4080(pIVar18 + 4,pSVar20);
        lVar10 = MethodInfo_Void_Add;
        if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar17->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar15 = (pSVar17->fields)._items;
        if (pSVar15 == (System_Object_array *)0x0) break;
        uVar34 = (pSVar17->fields)._size;
        if (uVar34 < (uint)pSVar15->max_length) {
          (pSVar17->fields)._size = uVar34 + 1;
          pSVar15->m_Items[(int)uVar34] = pIVar18;
          il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar34,pIVar18);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar17,pIVar18,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
        if (lVar10 == 0) break;
        uVar34 = *(uint *)(lVar10 + 0x18);
        ppUVar35 = (UI_LoadingMenu_o **)(ulong)uVar34;
        pSVar17 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor(pSVar17,MethodInfo_List_1_System_Byte);
        if ((int)uVar34 < 1) {
          if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) break;
          goto label_040b7008;
        }
        if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7689;
        iVar33 = 0;
        iVar30 = 10000;
        goto label_040b6f45;
      }
      collection = (System_Collections_Generic_IEnumerable_T__o *)il2cpp_runtime_helper_023051f0(pIVar18,TypeInfo_byte);
      if (collection != (System_Collections_Generic_IEnumerable_T__o *)0x0) goto label_040b6ad5;
      il2cpp_runtime_helper_022b2fd0(pIVar18,ppUVar35);
label_040b6998:
      il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte_GetRange);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ac4f6 = '\x01';
      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) != 0) goto label_040b679f;
label_040b6ab2:
      __this_02 = &TypeInfo_MapManager;
      il2cpp_runtime_helper_02337ed0();
      lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
      if (lVar10 == 0) break;
    } while( true );
  }
label_040b7727:
  pSVar22 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_022b2c90();
  goto label_040b772c;
  while( true ) {
    pSVar20 = System_Collections_Generic_List_byte___ToArray
                        ((System_Collections_Generic_List_byte__o *)pSVar22,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray
                        );
    lVar10 = MethodInfo_Void_Add;
    piVar1 = &(pSVar17->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (pSVar17->fields)._items;
    if (pSVar15 == (System_Object_array *)0x0) goto label_040b7727;
    uVar28 = (pSVar17->fields)._size;
    if (uVar28 < (uint)pSVar15->max_length) {
      (pSVar17->fields)._size = uVar28 + 1;
      pSVar15->m_Items[(int)uVar28] = &pSVar20->obj;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar28);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar17,&pSVar20->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    iVar33 = iVar33 + iVar30;
    if ((int)uVar34 <= iVar33) break;
label_040b6f45:
    iVar6 = uVar34 - iVar33;
    if (iVar30 + iVar33 <= (int)uVar34) {
      iVar6 = iVar30;
    }
    iVar30 = iVar6;
    if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
    __this_02 = (UI_LoadingMenu_o **)&MethodInfo_Void_Add;
    if ((pSVar16 == (System_Collections_Generic_List_byte__o *)0x0) ||
       (pSVar22 = System_Collections_Generic_List_byte___GetRange(pSVar16,iVar33,iVar30,MethodInfo_List_1_System_Byte_GetRange),
       pSVar22 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
  }
label_040b7008:
  if (0 < (pSVar17->fields)._size) {
    ppUVar35 = (UI_LoadingMenu_o **)0x0;
    iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
    do {
      if (iVar33 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
      pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
      pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
      __this_02 = (UI_LoadingMenu_o **)&MethodInfo_Byte_get_Item;
      if (pIVar19 == (Il2CppClass *)0x0) goto label_040b7727;
      if (*(int *)&(pIVar19->_1).namespaze == 0) goto label_040b7684;
      *(undefined1 *)&(pIVar19->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x21);
      if (pIVar18 == (Il2CppObject *)0x0) goto label_040b7727;
      if (*(int *)&pIVar18[1].monitor == 0) goto label_040b7684;
      pIVar18[2].klass = pIVar19;
      il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar19);
      iVar33 = (int)ppUVar35;
      pIVar23 = System_Collections_Generic_List_object___get_Item(pSVar17,iVar33,MethodInfo_Byte_get_Item);
      if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7684;
      pIVar18[2].monitor = pIVar23;
      il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pIVar23);
      lVar10 = MethodInfo_Void_Add;
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7727;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar15 = (__this_01->fields)._items;
      if (pSVar15 == (System_Object_array *)0x0) goto label_040b7727;
      uVar34 = (__this_01->fields)._size;
      if (uVar34 < (uint)pSVar15->max_length) {
        (__this_01->fields)._size = uVar34 + 1;
        pSVar15->m_Items[(int)uVar34] = pIVar18;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar34);
        ppUVar35 = (UI_LoadingMenu_o **)(ulong)(iVar33 + 1U);
        if ((pSVar17->fields)._size <= (int)(iVar33 + 1U)) break;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_01,pIVar18,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        ppUVar35 = (UI_LoadingMenu_o **)(ulong)(iVar33 + 1U);
        if ((pSVar17->fields)._size <= (int)(iVar33 + 1U)) break;
      }
      iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
    } while( true );
  }
  pSVar13 = System_String__Trim(__this_00,(MethodInfo *)0x0);
  bVar8 = System_String__op_Inequality
                    (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (UI_LoadingMenu_o **)&MethodInfo_List_1_System_Byte;
    if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
        (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
      pSVar20 = Utility_Algorithms_CompressionAlgorithm__CompressString
                          (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor,__this_00,1,
                           (MethodInfo *)0x0);
      pSVar16 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
      System_Collections_Generic_List_byte____ctor_357ee60
                (pSVar16,(System_Collections_Generic_IEnumerable_T__o *)pSVar20,MethodInfo_List_1_System_Byte);
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar21 = TypeInfo_MapTransfer[1].monitor;
      *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x40) = pSVar16;
      il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x40,pSVar16);
      lVar10 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
      if (lVar10 != 0) {
        uVar34 = *(uint *)(lVar10 + 0x18);
        __this_02 = (UI_LoadingMenu_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_Byte);
        if (0 < (int)uVar34) {
          if ((Photon_Realtime_Player_o *)__this_02 != (Photon_Realtime_Player_o *)0x0) {
            iVar30 = 0;
            iVar33 = 10000;
            do {
              while( true ) {
                iVar6 = uVar34 - iVar30;
                if (iVar33 + iVar30 <= (int)uVar34) {
                  iVar6 = iVar33;
                }
                iVar33 = iVar6;
                if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                if ((pSVar16 == (System_Collections_Generic_List_byte__o *)0x0) ||
                   (pSVar22 = System_Collections_Generic_List_byte___GetRange
                                        (pSVar16,iVar30,iVar33,MethodInfo_List_1_System_Byte_GetRange),
                   pSVar22 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
                pSVar20 = System_Collections_Generic_List_byte___ToArray
                                    ((System_Collections_Generic_List_byte__o *)pSVar22,
                                     (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                lVar10 = MethodInfo_Void_Add;
                piVar1 = &(((Photon_Realtime_Player_o *)__this_02)->fields).IsLocal;
                *piVar1 = *piVar1 + 1;
                pSVar15 = (System_Object_array *)
                          (((Photon_Realtime_Player_o *)__this_02)->fields)._RoomReference_k__BackingField;
                if (pSVar15 == (System_Object_array *)0x0) goto label_040b7727;
                uVar28 = (((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber;
                ppUVar35 = (UI_LoadingMenu_o **)&MethodInfo_Void_Add;
                if ((uint)pSVar15->max_length <= uVar28) break;
                (((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber = uVar28 + 1;
                pSVar15->m_Items[(int)uVar28] = &pSVar20->obj;
                il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar28,pSVar20);
                iVar30 = iVar30 + iVar33;
                if ((int)uVar34 <= iVar30) goto label_040b73a9;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,&pSVar20->obj,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              iVar30 = iVar30 + iVar33;
            } while (iVar30 < (int)uVar34);
            goto label_040b73a9;
          }
          uVar28 = 10000;
          if ((int)uVar34 < 0x2711) {
            uVar28 = uVar34;
          }
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
          goto joined_r0x040b770d;
        }
        if ((Photon_Realtime_Player_o *)__this_02 != (Photon_Realtime_Player_o *)0x0) {
label_040b73a9:
          if (0 < (((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber) {
            iVar36 = 0;
            iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
            do {
              if (iVar33 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar17 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
              pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
              pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
              if (pIVar19 == (Il2CppClass *)0x0) goto label_040b7727;
              ppUVar35 = (UI_LoadingMenu_o **)&MethodInfo_Byte_get_Item;
              if (*(int *)&(pIVar19->_1).namespaze == 0) goto label_040b7684;
              *(undefined1 *)&(pIVar19->_1).byval_arg.data =
                   *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x22);
              if (pIVar18 == (Il2CppObject *)0x0) goto label_040b7727;
              if (*(int *)&pIVar18[1].monitor == 0) goto label_040b7684;
              pIVar18[2].klass = pIVar19;
              il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar19);
              pIVar23 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_02,iVar36,MethodInfo_Byte_get_Item)
              ;
              if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7684;
              pIVar18[2].monitor = pIVar23;
              il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pIVar23);
              lVar10 = MethodInfo_Void_Add;
              if (pSVar17 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7727;
              piVar1 = &(pSVar17->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar15 = (pSVar17->fields)._items;
              if (pSVar15 == (System_Object_array *)0x0) goto label_040b7727;
              uVar34 = (pSVar17->fields)._size;
              if (uVar34 < (uint)pSVar15->max_length) {
                (pSVar17->fields)._size = uVar34 + 1;
                pSVar15->m_Items[(int)uVar34] = pIVar18;
                il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar34,pIVar18);
                if ((((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber <= iVar36 + 1) break;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar17,pIVar18,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                if ((((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber <= iVar36 + 1) break;
              }
              iVar36 = iVar36 + 1;
              iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
            } while( true );
          }
          goto label_040b7522;
        }
      }
    }
    goto label_040b7727;
  }
label_040b7522:
  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(UI_LoadingMenu_o ***)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
  pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
  if (pIVar19 == (Il2CppClass *)0x0) goto label_040b7727;
  if (*(int *)&(pIVar19->_1).namespaze != 0) {
    *(undefined1 *)&(pIVar19->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x23);
    if (pIVar18 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar18[1].monitor == 0) goto label_040b7684;
      pIVar18[2].klass = pIVar19;
      il2cpp_runtime_helper_022b4080(pIVar18 + 2,pIVar19);
      pSVar26 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (pSVar26 != (System_Text_Encoding_o *)0x0) {
        pvVar21 = (void *)(*(pSVar26->klass->vtable)._18_GetBytes.methodPtr)
                                    (pSVar26,*(undefined8 *)((long)TypeInfo_MapTransfer[1].monitor + 8),
                                     (pSVar26->klass->vtable)._18_GetBytes.method);
        if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7684;
        pIVar18[2].monitor = pvVar21;
        il2cpp_runtime_helper_022b4080(&pIVar18[2].monitor,pvVar21);
        lVar10 = MethodInfo_Void_Add;
        if ((Photon_Realtime_Player_o *)__this_02 != (Photon_Realtime_Player_o *)0x0) {
          piVar1 = &(((Photon_Realtime_Player_o *)__this_02)->fields).IsLocal;
          *piVar1 = *piVar1 + 1;
          pSVar15 = (System_Object_array *)
                    (((Photon_Realtime_Player_o *)__this_02)->fields)._RoomReference_k__BackingField;
          if (pSVar15 != (System_Object_array *)0x0) {
            uVar34 = (((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber;
            if ((uint)pSVar15->max_length <= uVar34) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_02,pIVar18,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              return;
            }
            (((Photon_Realtime_Player_o *)__this_02)->fields).actorNumber = uVar34 + 1;
            pSVar15->m_Items[(int)uVar34] = pIVar18;
            il2cpp_runtime_helper_022b4080(pSVar15->m_Items + (int)uVar34,pIVar18);
            return;
          }
        }
      }
    }
    goto label_040b7727;
  }
label_040b7684:
  uVar34 = (uint)ppUVar35;
  il2cpp_runtime_helper_022b2ca0();
label_040b7689:
  uVar28 = 10000;
  if ((int)uVar34 < 0x2711) {
    uVar28 = uVar34;
  }
  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
joined_r0x040b770d:
  if ((pSVar16 == (System_Collections_Generic_List_byte__o *)0x0) ||
     (pSVar22 = System_Collections_Generic_List_byte___GetRange(pSVar16,0,uVar28,MethodInfo_List_1_System_Byte_GetRange),
     pSVar22 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
label_040b772c:
  pSVar20 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pSVar22,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
    g_data_057ac4f8 = '\x01';
  }
  pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
  pSVar25 = (System_Byte_array *)0x0;
  pIVar18 = pIVar23;
  System_Object___ctor(pIVar23,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar23[1].klass = 0;
  if (pIVar23 != (Il2CppObject *)0x0) {
    pIVar23[2].klass = (Il2CppClass *)pSVar20;
    il2cpp_runtime_helper_022b4080(pIVar23 + 2,pSVar20);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar20 = pSVar25;
  if (g_data_057ac4f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ac4f7 = '\x01';
  }
  pUVar32 = (UI_LoadingMenu_o *)0x0;
  if ((Photon_Realtime_Player_o *)__this_02 != (Photon_Realtime_Player_o *)0x0) {
    pSVar20 = (System_Byte_array *)0x0;
    bVar8 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)__this_02,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar32 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar32 != (UI_LoadingMenu_o *)0x0) {
      __this_03 = (System_Byte_array *)0x0;
      UI_LoadingMenu__UpdateLoading
                (pUVar32,((float)(int)pSVar25 / (float)extraout_EDX) * 0.5,0,0,(MethodInfo *)0x0);
      pSVar20 = __this_03;
      if (pIVar18 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar18[1].monitor == 0) goto label_040b7f83;
        pIVar19 = pIVar18[2].klass;
        if (pIVar19 == (Il2CppClass *)0x0) goto label_040b7f7e;
        if (*(int *)&(pIVar19->_1).namespaze == 0) goto label_040b7f83;
        cVar7 = *(char *)&(pIVar19->_1).byval_arg.data;
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pvVar21 = TypeInfo_MapTransfer[1].monitor;
          cVar3 = *(char *)((long)pvVar21 + 0x20);
          pSVar20 = __this_03;
        }
        else {
          pvVar21 = TypeInfo_MapTransfer[1].monitor;
          cVar3 = *(char *)((long)pvVar21 + 0x20);
        }
        if (cVar7 == cVar3) {
          __this_03 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
          Map_MapScript___ctor((Map_MapScript_o *)__this_03,(MethodInfo *)pSVar20);
          if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pvVar21 = TypeInfo_MapManager[1].monitor;
          *(System_Byte_array **)((long)pvVar21 + 8) = __this_03;
          pUVar32 = (UI_LoadingMenu_o *)((long)pvVar21 + 8);
          il2cpp_runtime_helper_022b4080();
          lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
          pSVar20 = __this_03;
          if (lVar10 != 0) {
            pUVar12 = *(UI_LoadingMenu_o **)(lVar10 + 0x20);
            if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar32 = TypeInfo_DataCompressors;
            if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7f83;
            pUVar32 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
            pSVar20 = __this_03;
            if (pUVar32 != (UI_LoadingMenu_o *)0x0) {
              pSVar20 = pIVar18[2].monitor;
              __this_03 = (System_Byte_array *)
                          Utility_Algorithms_CompressionAlgorithm__DecompressString
                                    ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar32,pSVar20,0x1000,
                                     0xa00000,(MethodInfo *)0x0);
              if (pUVar12 != (UI_LoadingMenu_o *)0x0) {
                (*pUVar12->klass[1]._1.byval_arg.data)
                          (pUVar12,__this_03,*(undefined8 *)&pUVar12->klass[1]._1.byval_arg.bits);
                lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                pSVar20 = __this_03;
                pUVar32 = pUVar12;
                if (lVar10 != 0) {
                  if (*(uint *)&pIVar18[1].monitor < 3) goto label_040b7f83;
                  pUVar32 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                  if (pUVar32 != (UI_LoadingMenu_o *)0x0) {
                    pUVar12 = *(UI_LoadingMenu_o **)(lVar10 + 0x28);
                    pSVar20 = (System_Byte_array *)pIVar18[3].klass;
                    __this_03 = (System_Byte_array *)
                                Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar32,pSVar20,0x1000
                                           ,0xa00000,(MethodInfo *)0x0);
                    if (pUVar12 != (UI_LoadingMenu_o *)0x0) {
                      (*pUVar12->klass[1]._1.byval_arg.data)
                                (pUVar12,__this_03,*(undefined8 *)&pUVar12->klass[1]._1.byval_arg.bits);
                      lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pSVar20 = __this_03;
                      pUVar32 = pUVar12;
                      if (lVar10 != 0) {
                        if (*(uint *)&pIVar18[1].monitor < 4) goto label_040b7f83;
                        pUVar32 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                        if (pUVar32 != (UI_LoadingMenu_o *)0x0) {
                          pUVar12 = *(UI_LoadingMenu_o **)(lVar10 + 0x38);
                          pSVar20 = pIVar18[3].monitor;
                          __this_03 = (System_Byte_array *)
                                      Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar32,pSVar20,
                                                 0x1000,0xa00000,(MethodInfo *)0x0);
                          if (pUVar12 != (UI_LoadingMenu_o *)0x0) {
                            (*(code *)pUVar12->klass[1]._1.name)
                                      (pUVar12,__this_03,pUVar12->klass[1]._1.namespaze);
                            pUVar32 = pUVar12;
                            if (*(uint *)&pIVar18[1].monitor < 5) goto label_040b7f83;
                            pSVar20 = __this_03;
                            pUVar32 = (UI_LoadingMenu_o *)0x0;
                            if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
                                (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                              pSVar13 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                  (*(Utility_Algorithms_CompressionAlgorithm_o **)
                                                    TypeInfo_DataCompressors[1].monitor,
                                                   (System_Byte_array *)pIVar18[4].klass,0x1000,0xa00000,
                                                   (MethodInfo *)0x0);
                              pSVar24 = SimpleJSONFixed_JSON__Parse(pSVar13,(MethodInfo *)0x0);
                              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvVar21 = TypeInfo_MapTransfer[1].monitor;
                              *(SimpleJSONFixed_JSONNode_o **)((long)pvVar21 + 0x28) = pSVar24;
                              il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x28,pSVar24);
                              pSVar16 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar16,MethodInfo_List_1_System_Byte);
                              pvVar21 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x30) = pSVar16;
                              il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x30,pSVar16);
                              pSVar16 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar16,MethodInfo_List_1_System_Byte);
                              pvVar21 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x40) = pSVar16;
                              il2cpp_runtime_helper_022b4080((long)pvVar21 + 0x40,pSVar16);
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
        else {
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pvVar21 = TypeInfo_MapTransfer[1].monitor;
            cVar3 = *(char *)((long)pvVar21 + 0x21);
            __this_03 = pSVar20;
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar21 = TypeInfo_MapTransfer[1].monitor;
              __this_03 = pSVar20;
            }
          }
          else {
            cVar3 = *(char *)((long)pvVar21 + 0x21);
            __this_03 = pSVar20;
          }
          if (cVar7 == cVar3) {
            pUVar32 = TypeInfo_MapTransfer;
            if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7f83;
            pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x30);
            if (pSVar16 != (System_Collections_Generic_List_byte__o *)0x0) {
label_040b7c7c:
              System_Collections_Generic_List_byte___AddRange(pSVar16,pIVar18[2].monitor,MethodInfo_Void_AddRange);
              return;
            }
            pSVar20 = __this_03;
            pUVar32 = (UI_LoadingMenu_o *)0x0;
          }
          else {
            cVar3 = *(char *)((long)pvVar21 + 0x22);
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar21 = TypeInfo_MapTransfer[1].monitor;
            }
            if (cVar7 == cVar3) {
              pUVar32 = TypeInfo_MapTransfer;
              if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7f83;
              pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x40);
              pSVar20 = __this_03;
              pUVar32 = (UI_LoadingMenu_o *)0x0;
              if (pSVar16 != (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7c7c;
            }
            else {
              if (cVar7 != *(char *)((long)pvVar21 + 0x23)) {
                return;
              }
              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pvVar21 = TypeInfo_MapTransfer[1].monitor;
              }
              pSVar16 = *(System_Collections_Generic_List_byte__o **)((long)pvVar21 + 0x30);
              pSVar20 = __this_03;
              pUVar32 = TypeInfo_MapTransfer;
              if (pSVar16 != (System_Collections_Generic_List_byte__o *)0x0) {
                if ((pSVar16->fields)._size < 1) {
label_040b7dc3:
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar10 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                  pSVar20 = __this_03;
                  pUVar32 = TypeInfo_MapTransfer;
                  if (lVar10 != 0) {
                    if (*(int *)(lVar10 + 0x18) < 1) {
label_040b7ef0:
                      pUVar32 = (UI_LoadingMenu_o *)0x0;
                      pSVar26 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                      if (*(uint *)&pIVar18[1].monitor < 2) goto label_040b7f83;
                      pSVar20 = __this_03;
                      if (pSVar26 == (System_Text_Encoding_o *)0x0) goto label_040b7f7e;
                      uVar27 = (*(pSVar26->klass->vtable)._35_GetString.methodPtr)
                                         (pSVar26,pIVar18[2].monitor,
                                          (pSVar26->klass->vtable)._35_GetString.method);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pvVar21 = TypeInfo_MapTransfer[1].monitor;
                      *(undefined8 *)((long)pvVar21 + 8) = uVar27;
                      il2cpp_runtime_helper_022b4080((long)pvVar21 + 8,uVar27);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if (g_data_057ac4d9 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&"CustomMapHash");
                        g_data_057ac4d9 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined1 *)((long)TypeInfo_MapManager[1].monitor + 0x18) = 1;
                      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      targetPlayer = "CustomMapHash";
                      PhotonExtensions__SetCustomProperty
                                (player,(System_String_o *)"CustomMapHash",
                                 *(Il2CppObject **)((long)TypeInfo_MapTransfer[1].monitor + 8),(MethodInfo *)0x0);
                      lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      if (((lVar10 != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
                         (*(long *)(lVar10 + 0x30) != 0)) {
                        customAssets = *(System_Collections_Generic_List_string__o **)
                                        (*(long *)(lVar10 + 0x28) + 0x10);
                        objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
                                   (*(long *)(lVar10 + 0x30) + 0x10);
                        options = *(Map_MapScriptOptions_o **)(lVar10 + 0x20);
                        weather = *(Settings_WeatherSet_o **)(lVar10 + 0x38);
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        Map_MapLoader__StartLoadObjects
                                  (customAssets,objects,options,weather,0,(MethodInfo *)0x0);
                        return;
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057ac4da == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                        il2cpp_runtime_helper_023445d0(&"Custom");
                        il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
                        g_data_057ac4da = '\x01';
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
                        il2cpp_runtime_helper_02337ed0();
                        bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar7 = (char)bVar8;
                      }
                      else {
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
                        bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar7 = (char)bVar8;
                      }
                      if (cVar7 == '\0') {
                        return;
                      }
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        cVar7 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      else {
                        cVar7 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      if (cVar7 == '\0') {
                        "Custom" = method_00;
                        return;
                      }
                      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                      "Custom" = method_00;
                      if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0)) ||
                         (*(long *)(lVar10 + 0x20) == 0)) {
label_040b44af:
                        il2cpp_runtime_helper_022b2c90();
                      }
                      else {
                        bVar8 = System_String__op_Equality
                                          (*(System_String_o **)(*(long *)(lVar10 + 0x20) + 0x18),
                                           (System_String_o *)method_00,(MethodInfo *)0x0);
                        if ((char)bVar8 != '\0') {
                          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          Map_MapTransfer__Transfer(targetPlayer,method_00);
                          return;
                        }
                        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                        pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                        if ((*(long *)(lVar10 + 0x20) == 0) || (pSVar15 == (System_Object_array *)0x0))
                        goto label_040b44af;
                        pIVar18 = *(Il2CppObject **)(*(long *)(lVar10 + 0x20) + 0x18);
                        if ((pIVar18 != (Il2CppObject *)0x0) &&
                           (lVar9 = il2cpp_runtime_helper_023051f0(pIVar18), lVar9 == 0)) goto label_040b44b9;
                        if ((int)pSVar15->max_length != 0) {
                          pSVar15->m_Items[0] = pIVar18;
                          il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
                          if (*(long *)(lVar10 + 0x28) != 0) {
                            pIVar18 = *(Il2CppObject **)(*(long *)(lVar10 + 0x28) + 0x18);
                            if ((pIVar18 != (Il2CppObject *)0x0) &&
                               (lVar10 = il2cpp_runtime_helper_023051f0(pIVar18), lVar10 == 0)) goto label_040b44b9;
                            if ((uint)pSVar15->max_length < 2) goto label_040b44b4;
                            pSVar15->m_Items[1] = pIVar18;
                            il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
                            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                              Photon_Pun_PhotonView__RPC_3efa220
                                        (__this,"LoadBuiltinMapRPC",targetPlayer,pSVar15,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          goto label_040b44af;
                        }
                      }
label_040b44b4:
                      il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
                      pSVar11 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_0231b270();
                      il2cpp_runtime_helper_022b2b10();
                      if (g_data_057ac4f5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        g_data_057ac4f5 = '\x01';
                        iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      else {
                        iVar33 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      if (iVar33 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pUVar4 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar32 = TypeInfo_MapTransfer;
                      }
                      else {
                        pUVar4 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar32 = TypeInfo_MapTransfer;
                      }
                      TypeInfo_MapTransfer = pUVar32;
                      if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
                        if (g_data_057ac4f8 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
                          g_data_057ac4f8 = '\x01';
                        }
                        pUVar12 = (UI_LoadingMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
                        pUVar32 = pUVar12;
                        System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
                        *(undefined4 *)&(pUVar12->fields).m_CachedPtr = 0;
                        if (pUVar12 != (UI_LoadingMenu_o *)0x0) {
                          (pUVar12->fields)._popups = pSVar11;
                          il2cpp_runtime_helper_022b4080(&(pUVar12->fields)._popups,pSVar11);
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (pUVar4,(System_Collections_IEnumerator_o *)pUVar12,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      il2cpp_runtime_helper_022b2c90();
                      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pUVar32,(MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
                      pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) != 0) goto label_040b7e19;
label_040b7e5f:
                      il2cpp_runtime_helper_02337ed0();
                      pUVar32 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar25 = MethodInfo_Byte_ToArray;
                    }
                    else {
                      pUVar29 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) goto label_040b7e5f;
label_040b7e19:
                      pUVar32 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar25 = MethodInfo_Byte_ToArray;
                    }
                    pSVar20 = __this_03;
                    MethodInfo_Byte_ToArray = pSVar25;
                    if ((pUVar32 != (UI_LoadingMenu_o *)0x0) &&
                       (data = System_Collections_Generic_List_byte___ToArray
                                         ((System_Collections_Generic_List_byte__o *)pUVar32,
                                          (MethodInfo_3581700 *)pSVar25), pSVar20 = pSVar25,
                       pUVar29 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
                      __this_03 = (System_Byte_array *)
                                  Utility_Algorithms_CompressionAlgorithm__DecompressString
                                            (pUVar29,data,0x1000,0xa00000,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pUVar32 = (UI_LoadingMenu_o *)0x0;
                      pSVar20 = data;
                      if (lVar10 != 0) {
                        *(System_Byte_array **)(lVar10 + 0x40) = __this_03;
                        il2cpp_runtime_helper_022b4080();
                        goto label_040b7ef0;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar16 = *(System_Collections_Generic_List_byte__o **)
                               ((long)TypeInfo_MapTransfer[1].monitor + 0x30);
                    pSVar20 = __this_03;
                    if (pSVar16 == (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7f7e;
                  }
                  pSVar25 = System_Collections_Generic_List_byte___ToArray
                                      (pSVar16,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                  pSVar20 = *(System_Byte_array **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
                  iVar36 = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
                  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_03 = (System_Byte_array *)
                              Utility_CSVCompression__Decompress
                                        (pSVar25,(SimpleJSONFixed_JSONNode_o *)pSVar20,iVar36,0x3b,0x2c,
                                         (MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar10 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                  pUVar32 = TypeInfo_MapManager;
                  if (lVar10 != 0) {
                    plVar5 = *(long **)(lVar10 + 0x30);
                    pUVar32 = (UI_LoadingMenu_o *)0x0;
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,__this_03,*(undefined8 *)(*plVar5 + 0x1d0));
                      goto label_040b7dc3;
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
label_040b7f7e:
  __this_03 = pSVar20;
  il2cpp_runtime_helper_022b2c90();
label_040b7f83:
  uVar31 = SUB84(__this_03,0);
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar32,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar32->fields).m_CachedPtr = uVar31;
  return;
}


// Map.MapTransfer$$Start
// il2cpp: void Map_MapTransfer__Start (const MethodInfo* method);
// 0x40b36a0

void Map_MapTransfer__Start(MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  Il2CppMethodPointer pIVar4;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  System_String_o *a;
  UnityEngine_MonoBehaviour_o *__this;
  char cVar5;
  bool_conflict bVar6;
  uint uVar7;
  Photon_Realtime_Player_array *pPVar8;
  undefined8 uVar9;
  Photon_Realtime_Player_array *__this_00;
  Photon_Realtime_Player_array *__this_01;
  Il2CppObject *pIVar10;
  Photon_Realtime_Player_array *pPVar11;
  Photon_Realtime_Player_o *player;
  long lVar12;
  long lVar13;
  Il2CppClass *pIVar14;
  MethodInfo *__this_02;
  Photon_Realtime_Player_array *unaff_RBX;
  System_Object_array *pSVar15;
  Photon_Realtime_Player_array **ppPVar16;
  Photon_Realtime_Player_array *in_RSI;
  Photon_Realtime_Player_array *pPVar17;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *pMVar18;
  undefined1 uVar19;
  code *pcVar20;
  Photon_Realtime_Player_o *unaff_R12;
  ExitGames_Client_Photon_Hashtable_o *__this_03;
  Photon_Realtime_Player_o *unaff_R13;
  Photon_Realtime_Player_array *unaff_R14;
  Photon_Pun_PhotonView_o *__this_04;
  Photon_Realtime_Player_array *unaff_R15;
  Photon_Realtime_Player_array *pPVar21;
  UnityEngine_Color_o color;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar22;
  UnityEngine_Vector3_o euler;
  Photon_Realtime_Player_array *pPStack_90;
  Photon_Realtime_Player_array *pPStack_88;
  Photon_Realtime_Player_array *pPStack_80;
  Photon_Realtime_Player_array *pPStack_78;
  Il2CppClass *pIStack_70;
  Photon_Realtime_Player_o *pPStack_68;
  Il2CppArrayBounds *pIStack_60;
  Photon_Realtime_Player_array *pPStack_58;
  Photon_Realtime_Player_o *pPStack_50;
  Photon_Realtime_Player_array *pPStack_48;
  Photon_Realtime_Player_array *pPStack_40;
  
  if (g_data_057ac4f4 == '\0') {
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b36fc;
    il2cpp_runtime_helper_023445d0(&"LoadCachedMapRPC");
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b3708;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac4f4 = '\x01';
  }
  __this_03 = (ExitGames_Client_Photon_Hashtable_o *)&TypeInfo_MapTransfer;
  pMVar18 = TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b3728;
    il2cpp_runtime_helper_02337ed0();
  }
  pPStack_40 = (Photon_Realtime_Player_array *)0x40b372d;
  Map_MapTransfer__CreateTransferData(pMVar18);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b3745;
    il2cpp_runtime_helper_02337ed0();
  }
  pPStack_40 = (Photon_Realtime_Player_array *)0x40b374c;
  pPVar8 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
    if ((int)pPVar8->max_length < 1) {
label_040b387c:
      if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
        pPStack_40 = (Photon_Realtime_Player_array *)0x40b388e;
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_MapTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    unaff_R13 = (Photon_Realtime_Player_o *)0x0;
    unaff_R14 = pPVar8;
    if ((pPVar8->max_length & 0xffffffff) != 0) {
      do {
        unaff_R15 = (Photon_Realtime_Player_array *)pPVar8->m_Items[(long)unaff_R13];
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          pPStack_40 = (Photon_Realtime_Player_array *)0x40b37cf;
          il2cpp_runtime_helper_02337ed0();
        }
        pPStack_40 = (Photon_Realtime_Player_array *)0x40b37f2;
        unaff_RBX = (Photon_Realtime_Player_array *)
                    PhotonExtensions__GetStringProperty
                              ((Photon_Realtime_Player_o *)unaff_R15,
                               *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x28),"",
                               (MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
          pPStack_40 = (Photon_Realtime_Player_array *)0x40b3807;
          il2cpp_runtime_helper_02337ed0();
        }
        in_RSI = *(Photon_Realtime_Player_array **)(TypeInfo_MapTransfer[2].virtualMethodPointer + 8);
        pPStack_40 = (Photon_Realtime_Player_array *)0x40b3820;
        bVar6 = System_String__op_Inequality
                          ((System_String_o *)unaff_RBX,(System_String_o *)in_RSI,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          unaff_RBX = (Photon_Realtime_Player_array *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          in_RSI = (Photon_Realtime_Player_array *)0x0;
          pPStack_40 = (Photon_Realtime_Player_array *)0x40b384d;
          pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (unaff_RBX == (Photon_Realtime_Player_array *)0x0) goto label_040b38b0;
          pPStack_40 = (Photon_Realtime_Player_array *)0x40b386d;
          in_RSI = "LoadCachedMapRPC";
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)unaff_RBX,(System_String_o *)"LoadCachedMapRPC",
                     (Photon_Realtime_Player_o *)unaff_R15,pSVar15,(MethodInfo *)0x0);
        }
        else {
          if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
            pPStack_40 = (Photon_Realtime_Player_array *)0x40b3877;
            il2cpp_runtime_helper_02337ed0();
          }
          pPStack_40 = (Photon_Realtime_Player_array *)0x40b3799;
          Map_MapTransfer__Transfer((Photon_Realtime_Player_o *)unaff_R15,(MethodInfo *)in_RSI);
        }
        unaff_R13 = (Photon_Realtime_Player_o *)((long)&unaff_R13->klass + 1);
        uVar7 = (uint)pPVar8->max_length;
        if ((long)(int)uVar7 <= (long)unaff_R13) goto label_040b387c;
      } while (unaff_R13 < (Photon_Realtime_Player_o *)(ulong)uVar7);
    }
    pPStack_40 = (Photon_Realtime_Player_array *)0x40b38b0;
    il2cpp_runtime_helper_022b2ca0();
  }
label_040b38b0:
  pPStack_40 = (Photon_Realtime_Player_array *)0x40b38b5;
  pPStack_50 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2c90();
  pPVar8 = (Photon_Realtime_Player_array *)&stack0xffffffffffffffd0;
  pPStack_48 = unaff_RBX;
  pPStack_40 = unaff_R14;
  if (g_data_057ac4d8 == '\0') {
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b38de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b38ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b38f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ac4d8 = '\x01';
  }
  if (unaff_R12 != (Photon_Realtime_Player_o *)0x0) {
    in_RSI = (Photon_Realtime_Player_array *)0x0;
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b390d;
    bVar6 = Photon_Realtime_Player__get_IsMasterClient(unaff_R12,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b392d;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (lVar13 == 0) {
label_040b3a50:
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b3a55;
    il2cpp_runtime_helper_022b2c90();
    pIStack_60 = (Il2CppArrayBounds *)&TypeInfo_MapManager;
    pIStack_70 = (Il2CppClass *)&TypeInfo_MapTransfer;
    pPStack_78 = pPVar8;
    pPStack_68 = unaff_R13;
    pPStack_58 = unaff_R15;
    if (g_data_057ac4df == '\0') {
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3a82;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapPrefabs);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3a8e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3a9a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3aa6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBasicMaterial_get_Item);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3ab2;
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapScriptBaseObject_get_Item);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3abe;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3aca;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptBasicMaterial);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3ad6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3ae2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3aee;
      il2cpp_runtime_helper_023445d0(&"Daylight");
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3afa;
      il2cpp_runtime_helper_023445d0(&"Grass6");
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b06;
      il2cpp_runtime_helper_023445d0(&"Geometry/Cuboid");
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b12;
      il2cpp_runtime_helper_023445d0(&"Basic");
      g_data_057ac4df = '\x01';
    }
    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b28;
    __this_00 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b33;
    Map_MapScript___ctor((Map_MapScript_o *)__this_00,(MethodInfo *)in_RSI);
    unaff_R13 = (Photon_Realtime_Player_o *)&TypeInfo_MapScriptSceneObject;
    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b43;
    __this_01 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b4e;
    unaff_R15 = __this_01;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_01,(MethodInfo *)in_RSI);
    pPVar11 = "Geometry/Cuboid";
    pPVar21 = __this_01;
    if (__this_01 != (Photon_Realtime_Player_array *)0x0) {
      __this_01->max_length = (il2cpp_array_size_t)"Geometry/Cuboid";
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3b6e;
      il2cpp_runtime_helper_022b4080(&__this_01->max_length);
      __this_01->m_Items[6] = (Photon_Realtime_Player_o *)0x40a0000042c80000;
      *(undefined4 *)(__this_01->m_Items + 7) = 0x42c80000;
      __this_01->m_Items[3] = (Photon_Realtime_Player_o *)0xc1c8000000000000;
      *(bool_conflict *)(__this_01->m_Items + 4) = 0;
      *(int32_t *)__this_01->m_Items = 0;
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3bb1;
      pPVar8 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptBasicMaterial);
      pPStack_80 = (Photon_Realtime_Player_array *)0x40b3bbc;
      unaff_R15 = pPVar8;
      Map_MapScriptBasicMaterial___ctor((Map_MapScriptBasicMaterial_o *)pPVar8,(MethodInfo *)pPVar11);
      pPVar17 = "Basic";
      in_RSI = pPVar11;
      if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
        ((Photon_Pun_PhotonView_Fields *)&pPVar8->bounds)->m_CachedPtr = (intptr_t)"Basic";
        pPStack_80 = (Photon_Realtime_Player_array *)0x40b3bdc;
        il2cpp_runtime_helper_022b4080((Photon_Pun_PhotonView_Fields *)&pPVar8->bounds);
        __this_03 = (ExitGames_Client_Photon_Hashtable_o *)&TypeInfo_BuiltinMapTextures;
        if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
          pPStack_80 = (Photon_Realtime_Player_array *)0x40b3bf5;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R15 = *(Photon_Realtime_Player_array **)(*(long *)(TypeInfo_BuiltinMapTextures + 0xb8) + 8);
        in_RSI = pPVar17;
        if (unaff_R15 != (Photon_Realtime_Player_array *)0x0) {
          pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c26;
          in_RSI = "Grass6";
          pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R15,
                               &"Grass6"->obj,MethodInfo_MapScriptBasicMaterial_get_Item);
          if (pIVar10 != (Il2CppObject *)0x0) {
            pPVar8->m_Items[0] = (Photon_Realtime_Player_o *)pIVar10[2].klass;
            pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c40;
            il2cpp_runtime_helper_022b4080(pPVar8->m_Items);
            pPVar8->m_Items[1] = (Photon_Realtime_Player_o *)0x41c8000041c80000;
            pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c5d;
            __this_03 = (ExitGames_Client_Photon_Hashtable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
            pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c74;
            color.fields.b = 1.0;
            color.fields.a = 1.0;
            color.fields.r = 1.0;
            color.fields.g = 1.0;
            Utility_Color255___ctor_4388bb0((Utility_Color255_o *)__this_03,color,(MethodInfo *)0x0);
            pPVar8->max_length = (il2cpp_array_size_t)__this_03;
            pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c87;
            il2cpp_runtime_helper_022b4080(&pPVar8->max_length,__this_03);
            unaff_R15 = (Photon_Realtime_Player_array *)(__this_01->m_Items + 0xb);
            __this_01->m_Items[0xb] = (Photon_Realtime_Player_o *)pPVar8;
            pPStack_80 = (Photon_Realtime_Player_array *)0x40b3c9a;
            in_RSI = pPVar8;
            il2cpp_runtime_helper_022b4080();
            lVar13 = MethodInfo_Void_Add;
            if (((__this_00 != (Photon_Realtime_Player_array *)0x0) &&
                ((System_String_array *)__this_00->m_Items[2] != (System_String_array *)0x0)) &&
               (unaff_R15 = (Photon_Realtime_Player_array *)
                            ((System_String_array *)__this_00->m_Items[2])->bounds,
               unaff_R15 != (Photon_Realtime_Player_array *)0x0)) {
              __this_03 = (ExitGames_Client_Photon_Hashtable_o *)&MethodInfo_Void_Add;
              piVar1 = (int *)((long)&unaff_R15->max_length + 4);
              *piVar1 = *piVar1 + 1;
              lVar12 = ((Photon_Pun_PhotonView_Fields *)&unaff_R15->bounds)->m_CachedPtr;
              if (lVar12 != 0) {
                uVar7 = *(uint *)&unaff_R15->max_length;
                if (uVar7 < *(uint *)(lVar12 + 0x18)) {
                  *(uint *)&unaff_R15->max_length = uVar7 + 1;
                  *(Photon_Realtime_Player_array **)(lVar12 + 0x20 + (long)(int)uVar7 * 8) = __this_01;
                  pPStack_80 = (Photon_Realtime_Player_array *)0x40b3cfd;
                  il2cpp_runtime_helper_022b4080(lVar12 + (long)(int)uVar7 * 8 + 0x20);
                }
                else {
                  pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d16;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)unaff_R15,(Il2CppObject *)__this_01,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                }
                pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d1f;
                pPVar8 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
                pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d2a;
                Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)pPVar8,(MethodInfo *)__this_01);
                pPVar21 = (Photon_Realtime_Player_array *)&TypeInfo_BuiltinMapPrefabs;
                if (*(int *)(TypeInfo_BuiltinMapPrefabs + 0xe4) == 0) {
                  pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d42;
                  il2cpp_runtime_helper_02337ed0();
                }
                unaff_R15 = *(Photon_Realtime_Player_array **)(*(long *)(TypeInfo_BuiltinMapPrefabs + 0xb8) + 8);
                in_RSI = __this_01;
                if (unaff_R15 != (Photon_Realtime_Player_array *)0x0) {
                  pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d72;
                  in_RSI = "Daylight";
                  pPVar11 = (Photon_Realtime_Player_array *)
                            System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R15,
                                       &"Daylight"->obj,MethodInfo_MapScriptBaseObject_get_Item);
                  if (pPVar8 != (Photon_Realtime_Player_array *)0x0) {
                    pIVar14 = (pPVar8->obj).klass;
                    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3d91;
                    (**(code **)((long)((Photon_Pun_PhotonView_VTable *)pIVar14->vtable + 2) + 0x20))
                              (pPVar8,pPVar11,
                               *(undefined8 *)
                                ((long)((Photon_Pun_PhotonView_VTable *)pIVar14->vtable + 2) + 0x28));
                    pPVar8->m_Items[3] = (Photon_Realtime_Player_o *)0x41a0000000000000;
                    *(undefined4 *)(pPVar8->m_Items + 4) = 0;
                    rotation.fields._8_8_ = (undefined8)g_data_00d19c30;
                    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3dbb;
                    rotation.fields.x = -0.2;
                    rotation.fields.y = -0.8;
                    UVar22 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
                    euler.fields.x = UVar22.fields.x * 57.29578;
                    euler.fields.y = UVar22.fields.y * 57.29578;
                    euler.fields.z = UVar22.fields.z * 57.29578;
                    unaff_R15 = (Photon_Realtime_Player_array *)0x0;
                    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3dd1;
                    UVar22 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
                    *(float *)((long)pPVar8->m_Items + 0x24) = UVar22.fields.x;
                    *(float *)(pPVar8->m_Items + 5) = UVar22.fields.y;
                    *(float *)((long)pPVar8->m_Items + 0x2c) = UVar22.fields.z;
                    *(undefined4 *)pPVar8->m_Items = 1;
                    lVar13 = MethodInfo_Void_Add;
                    in_RSI = pPVar11;
                    if (((System_String_array *)__this_00->m_Items[2] != (System_String_array *)0x0) &&
                       (unaff_R15 = (Photon_Realtime_Player_array *)
                                    ((System_String_array *)__this_00->m_Items[2])->bounds,
                       unaff_R15 != (Photon_Realtime_Player_array *)0x0)) {
                      piVar1 = (int *)((long)&unaff_R15->max_length + 4);
                      *piVar1 = *piVar1 + 1;
                      lVar12 = ((Photon_Pun_PhotonView_Fields *)&unaff_R15->bounds)->m_CachedPtr;
                      if (lVar12 != 0) {
                        uVar7 = *(uint *)&unaff_R15->max_length;
                        if (uVar7 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)&unaff_R15->max_length = uVar7 + 1;
                          *(Photon_Realtime_Player_array **)(lVar12 + 0x20 + (long)(int)uVar7 * 8) = pPVar8;
                          pPStack_80 = (Photon_Realtime_Player_array *)0x40b3e32;
                          il2cpp_runtime_helper_022b4080(lVar12 + (long)(int)uVar7 * 8 + 0x20,pPVar8);
                        }
                        else {
                          pPStack_80 = (Photon_Realtime_Player_array *)0x40b3e4b;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)unaff_R15,
                                     (Il2CppObject *)pPVar8,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
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
    pPStack_80 = (Photon_Realtime_Player_array *)0x40b3e5d;
    il2cpp_runtime_helper_022b2c90();
    ppPVar16 = &pPStack_90;
    pPVar11 = (Photon_Realtime_Player_array *)&stack0xffffffffffffff90;
    pPStack_90 = pPVar8;
    pPStack_88 = __this_00;
    pPStack_80 = pPVar21;
    if (g_data_057ac4d7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ac4d7 = '\x01';
    }
    pcVar20 = (code *)0x0;
    pPVar8 = in_RSI;
    if (pPStack_68 != (Photon_Realtime_Player_o *)0x0) {
      bVar6 = Photon_Realtime_Player__get_IsMasterClient(pPStack_68,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pPVar8 = (Photon_Realtime_Player_array *)
               Map_BuiltinLevels__LoadMap
                         ((System_String_o *)unaff_R15,(System_String_o *)in_RSI,(MethodInfo *)0x0);
      pPVar11 = (Photon_Realtime_Player_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
      Map_MapScript___ctor((Map_MapScript_o *)pPVar11,(MethodInfo *)in_RSI);
      unaff_R15 = (Photon_Realtime_Player_array *)&TypeInfo_MapManager;
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar13 = *(long *)(TypeInfo_MapManager + 0xb8);
      *(Photon_Realtime_Player_array **)(lVar13 + 8) = pPVar11;
      il2cpp_runtime_helper_022b4080(lVar13 + 8,pPVar11);
      plVar3 = *(long **)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      pcVar20 = (code *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x188))(plVar3,pPVar8,*(undefined8 *)(*plVar3 + 400));
        pPVar11 = (Photon_Realtime_Player_array *)**(long **)(g_data_057b9c00 + 0xb8);
        pPVar8 = (Photon_Realtime_Player_array *)&TypeInfo_MapTransfer;
        if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar4 = TypeInfo_MapTransfer[2].virtualMethodPointer;
        *(Photon_Realtime_Player_array **)(pIVar4 + 8) = pPVar11;
        pcVar20 = pIVar4 + 8;
        il2cpp_runtime_helper_022b4080(pcVar20,pPVar11);
        lVar13 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
        if (lVar13 != 0) {
          bVar6 = System_String__op_Inequality
                            (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x20),
                             *(System_String_o **)(lVar13 + 0x48),(MethodInfo *)0x0);
          pPVar11 = (Photon_Realtime_Player_array *)CONCAT71((int7)((ulong)pPVar11 >> 8),1);
          if ((char)bVar6 == '\0') {
            if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            pcVar20 = TypeInfo_MapManager;
            if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
               (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b40e8;
            uVar7 = System_String__op_Inequality
                              (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x28),
                               *(System_String_o **)(lVar13 + 0x18),(MethodInfo *)0x0);
            pPVar11 = (Photon_Realtime_Player_array *)(ulong)uVar7;
          }
          if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pcVar20 = *(code **)(TypeInfo_MapManager + 0xb8);
          if (*(long *)(pcVar20 + 8) != 0) {
            *(undefined8 *)(pcVar20 + 0x20) = *(undefined8 *)(*(long *)(pcVar20 + 8) + 0x48);
            pcVar20 = pcVar20 + 0x20;
            il2cpp_runtime_helper_022b4080();
            lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            if (((lVar13 != 0) && (lVar13 = *(long *)(lVar13 + 0x38), lVar13 != 0)) &&
               (lVar13 = *(long *)(lVar13 + 0x30), lVar13 != 0)) {
              lVar12 = *(long *)(TypeInfo_MapManager + 0xb8);
              *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar13 + 0x18);
              uVar9 = il2cpp_runtime_helper_022b4080(lVar12 + 0x28);
              uVar19 = SUB81(pPVar11,0);
              pPVar11 = pPStack_90;
              ppPVar16 = &pPStack_78;
              pPVar8 = pPStack_88;
              unaff_R15 = pPStack_80;
              goto Map_MapManager__LoadMap;
            }
          }
        }
      }
    }
label_040b40e8:
    uVar19 = SUB81(pcVar20,0);
    uVar9 = il2cpp_runtime_helper_022b2c90();
  }
  else {
    in_RSI = *(Photon_Realtime_Player_array **)(lVar13 + 0x48);
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b3953;
    bVar6 = System_String__op_Inequality
                      (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x20),(System_String_o *)in_RSI,
                       (MethodInfo *)0x0);
    pPVar8 = (Photon_Realtime_Player_array *)CONCAT71((int7)((ulong)pPVar8 >> 8),1);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
        pPStack_58 = (Photon_Realtime_Player_array *)0x40b396a;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
         (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b3a50;
      in_RSI = *(Photon_Realtime_Player_array **)(lVar13 + 0x18);
      pPStack_58 = (Photon_Realtime_Player_array *)0x40b39bb;
      uVar7 = System_String__op_Inequality
                        (*(System_String_o **)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x28),
                         (System_String_o *)in_RSI,(MethodInfo *)0x0);
      pPVar8 = (Photon_Realtime_Player_array *)(ulong)uVar7;
    }
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      pPStack_58 = (Photon_Realtime_Player_array *)0x40b39ce;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar13 = *(long *)(TypeInfo_MapManager + 0xb8);
    if (*(long *)(lVar13 + 8) == 0) goto label_040b3a50;
    in_RSI = *(Photon_Realtime_Player_array **)(*(long *)(lVar13 + 8) + 0x48);
    *(Photon_Realtime_Player_array **)(lVar13 + 0x20) = in_RSI;
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b39f2;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x20);
    lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) ||
       (lVar13 = *(long *)(lVar13 + 0x30), lVar13 == 0)) goto label_040b3a50;
    lVar12 = *(long *)(TypeInfo_MapManager + 0xb8);
    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)(lVar13 + 0x18);
    pPStack_58 = (Photon_Realtime_Player_array *)0x40b3a39;
    uVar9 = il2cpp_runtime_helper_022b4080(lVar12 + 0x28);
    uVar19 = SUB81(pPVar8,0);
    pPVar11 = pPStack_48;
    ppPVar16 = (Photon_Realtime_Player_array **)&stack0xffffffffffffffc8;
    pPVar8 = pPStack_40;
  }
Map_MapManager__LoadMap:
  *(Photon_Realtime_Player_array **)((long)ppPVar16 + -8) = unaff_R15;
  *(Photon_Realtime_Player_array **)((long)ppPVar16 + -0x10) = pPVar8;
  *(ExitGames_Client_Photon_Hashtable_o **)((long)ppPVar16 + -0x18) = __this_03;
  *(Photon_Realtime_Player_array **)((long)ppPVar16 + -0x20) = pPVar11;
  *(undefined8 *)((long)ppPVar16 + -0x28) = uVar9;
  if (g_data_057ac4d9 == '\0') {
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b410f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b411b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b4127;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b4133;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b413f;
    il2cpp_runtime_helper_023445d0(&"CustomMapHash");
    g_data_057ac4d9 = '\x01';
  }
  __this_04 = (Photon_Pun_PhotonView_o *)&TypeInfo_MapManager;
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b415e;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_MapManager + 0xb8) + 0x18) = uVar19;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b4183;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b418a;
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b41a5;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar10 = *(Il2CppObject **)(TypeInfo_MapTransfer[2].virtualMethodPointer + 8);
  *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b41c7;
  targetPlayer = "CustomMapHash";
  PhotonExtensions__SetCustomProperty(player,(System_String_o *)"CustomMapHash",pIVar10,(MethodInfo *)0x0);
  lVar13 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
  if (((lVar13 != 0) && (*(long *)(lVar13 + 0x28) != 0)) && (*(long *)(lVar13 + 0x30) != 0)) {
    customAssets = *(System_Collections_Generic_List_string__o **)(*(long *)(lVar13 + 0x28) + 0x10);
    objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)(*(long *)(lVar13 + 0x30) + 0x10);
    options = *(Map_MapScriptOptions_o **)(lVar13 + 0x20);
    weather = *(Settings_WeatherSet_o **)(lVar13 + 0x38);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b4214;
      il2cpp_runtime_helper_02337ed0();
    }
    Map_MapLoader__StartLoadObjects(customAssets,objects,options,weather,0,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)ppPVar16 + -0x30) = 0x40b423b;
  il2cpp_runtime_helper_022b2c90();
  *(MethodInfo ***)((long)ppPVar16 + -0x30) = &TypeInfo_MapTransfer;
  *(code ***)((long)ppPVar16 + -0x38) = &TypeInfo_MapManager;
  *(Photon_Realtime_Player_o **)((long)ppPVar16 + -0x40) = unaff_R13;
  *(ExitGames_Client_Photon_Hashtable_o **)((long)ppPVar16 + -0x48) = __this_03;
  *(Photon_Realtime_Player_o **)((long)ppPVar16 + -0x50) = player;
  if (g_data_057ac4da == '\0') {
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42b3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42bf;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42cb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42d7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42e3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b42fb;
    il2cpp_runtime_helper_023445d0(&"Custom");
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4307;
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
    g_data_057ac4da = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b432a;
    il2cpp_runtime_helper_02337ed0();
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4331;
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4273;
    bVar6 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar5 = (char)bVar6;
  }
  if (cVar5 == '\0') {
    return;
  }
  pSVar15 = (System_Object_array *)&TypeInfo_MapTransfer;
  if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4343;
    il2cpp_runtime_helper_02337ed0();
    cVar5 = (char)*TypeInfo_MapTransfer[2].virtualMethodPointer;
    pMVar18 = "Custom";
  }
  else {
    cVar5 = (char)*TypeInfo_MapTransfer[2].virtualMethodPointer;
    pMVar18 = "Custom";
  }
  if (cVar5 == '\0') {
    "Custom" = pMVar18;
    return;
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  "Custom" = pMVar18;
  if (((lVar13 == 0) || (lVar13 = *(long *)(lVar13 + 0x38), lVar13 == 0)) || (*(long *)(lVar13 + 0x20) == 0))
  {
label_040b44af:
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b44b4;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    a = *(System_String_o **)(*(long *)(lVar13 + 0x20) + 0x18);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b439f;
    bVar6 = System_String__op_Equality(a,(System_String_o *)pMVar18,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (*(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4) == 0) {
        *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b43b4;
        il2cpp_runtime_helper_02337ed0();
      }
      Map_MapTransfer__Transfer(targetPlayer,pMVar18);
      return;
    }
    __this_04 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b43f7;
    pSVar15 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar13 + 0x20) == 0) || (pSVar15 == (System_Object_array *)0x0)) goto label_040b44af;
    pIVar10 = *(Il2CppObject **)(*(long *)(lVar13 + 0x20) + 0x18);
    if (pIVar10 != (Il2CppObject *)0x0) {
      *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4428;
      lVar12 = il2cpp_runtime_helper_023051f0(pIVar10);
      if (lVar12 == 0) goto label_040b44b9;
    }
    if ((int)pSVar15->max_length != 0) {
      pSVar15->m_Items[0] = pIVar10;
      *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4447;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items);
      if (*(long *)(lVar13 + 0x28) != 0) {
        pIVar10 = *(Il2CppObject **)(*(long *)(lVar13 + 0x28) + 0x18);
        if (pIVar10 != (Il2CppObject *)0x0) {
          *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4468;
          lVar13 = il2cpp_runtime_helper_023051f0(pIVar10);
          if (lVar13 == 0) goto label_040b44b9;
        }
        if ((uint)pSVar15->max_length < 2) goto label_040b44b4;
        pSVar15->m_Items[1] = pIVar10;
        *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b4486;
        il2cpp_runtime_helper_022b4080(pSVar15->m_Items + 1);
        if (__this_04 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(__this_04,"LoadBuiltinMapRPC",targetPlayer,pSVar15,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_040b44af;
    }
  }
label_040b44b4:
  *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b44b9;
  il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
  *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b44be;
  pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)ppPVar16 + -0x58) = 0x40b44c8;
  il2cpp_runtime_helper_022b2b10();
  *(Photon_Realtime_Player_o **)((long)ppPVar16 + -0x58) = targetPlayer;
  *(Photon_Pun_PhotonView_o **)((long)ppPVar16 + -0x60) = __this_04;
  *(System_Object_array **)((long)ppPVar16 + -0x68) = pSVar15;
  if (g_data_057ac4f5 == '\0') {
    *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b4585;
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_MapTransfer[2].parameters + 4);
  }
  if (iVar2 == 0) {
    *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b45a8;
    il2cpp_runtime_helper_02337ed0();
    __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_MapTransfer[2].virtualMethodPointer + 0x18);
    pMVar18 = TypeInfo_MapTransfer;
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_MapTransfer[2].virtualMethodPointer + 0x18);
    pMVar18 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = pMVar18;
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b4525;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b453b;
    __this_02 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b4548;
    pMVar18 = __this_02;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02->invoker_method = 0;
    if (__this_02 != (MethodInfo *)0x0) {
      __this_02->klass = pIVar14;
      *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b4567;
      il2cpp_runtime_helper_022b4080(&__this_02->klass,pIVar14);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this,(System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  *(undefined8 *)((long)ppPVar16 + -0x70) = 0x40b45c4;
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pMVar18,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$Transfer
// il2cpp: void Map_MapTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40b44d0

void Map_MapTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *__this;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_00;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_01;
  
  if (g_data_057ac4f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_MapTransfer[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_01 = TypeInfo_MapTransfer;
  }
  else {
    __this = ((TypeInfo_MapTransfer[4].fields.m_CancellationTokenSource)->fields)._registeredCallbacksLists;
    __this_01 = TypeInfo_MapTransfer;
  }
  TypeInfo_MapTransfer = __this_01;
  if (__this != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0) {
    if (g_data_057ac4f8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
      g_data_057ac4f8 = '\x01';
    }
    __this_00 = (Photon_Pun_MonoBehaviourPunCallbacks_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
    __this_01 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
    if (__this_00 != (Photon_Pun_MonoBehaviourPunCallbacks_o *)0x0) {
      (__this_00->fields).pvCache = (Photon_Pun_PhotonView_o *)player;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).pvCache,player);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$CreateTransferData
// il2cpp: void Map_MapTransfer__CreateTransferData (const MethodInfo* method);
// 0x40b6770

void Map_MapTransfer__CreateTransferData(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  char cVar3;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Pun_PhotonView_o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_String_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool_conflict bVar7;
  Photon_Realtime_Player_o *player;
  long lVar8;
  long lVar9;
  System_Collections_Generic_List_BasePopup__o *pSVar10;
  UI_LoadingMenu_o *pUVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *str1;
  System_Object_array *pSVar14;
  System_Collections_Generic_List_byte__o *pSVar15;
  System_Collections_Generic_IEnumerable_T__o *collection;
  System_Collections_Generic_List_object__o *pSVar16;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  System_Byte_array *pSVar19;
  UI_LoadingMenu_o **__this_03;
  void *pvVar20;
  System_Collections_Generic_List_T__o *pSVar21;
  Il2CppObject *pIVar22;
  System_Byte_array *__this_04;
  SimpleJSONFixed_JSONNode_o *pSVar23;
  System_Byte_array *pSVar24;
  System_Byte_array *data;
  System_Text_Encoding_o *pSVar25;
  undefined8 uVar26;
  int extraout_EDX;
  uint uVar27;
  Utility_Algorithms_CompressionAlgorithm_o *pUVar28;
  int iVar29;
  undefined4 uVar30;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  UI_LoadingMenu_o *pUVar31;
  int iVar32;
  uint uVar33;
  UI_LoadingMenu_o **ppUVar34;
  int32_t iVar35;
  
  if (g_data_057ac4f6 == '\0') goto label_040b6998;
  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) goto label_040b6ab2;
label_040b679f:
  __this_03 = &TypeInfo_MapManager;
  lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
  if (lVar9 != 0) {
    do {
      __this_03 = &TypeInfo_MapManager;
      if (*(long **)(lVar9 + 0x30) == (long *)0x0) break;
      pSVar12 = (System_String_o *)(**(code **)(**(long **)(lVar9 + 0x30) + 0x1b8))();
      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
      if (lVar9 == 0) break;
      __this_01 = *(System_String_o **)(lVar9 + 0x40);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = Utility_Util__CreateMD5(pSVar12,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar20 = TypeInfo_MapTransfer[1].monitor;
      *(System_String_o **)((long)pvVar20 + 8) = pSVar13;
      il2cpp_runtime_helper_022b4080((long)pvVar20 + 8);
      if (__this_01 == (System_String_o *)0x0) break;
      pSVar13 = System_String__Trim(__this_01,(MethodInfo *)0x0);
      bVar7 = System_String__op_Inequality
                        (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_String_o **)((long)TypeInfo_MapTransfer[1].monitor + 8);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        str1 = Utility_Util__CreateMD5(__this_01,(MethodInfo *)0x0);
        pSVar13 = System_String__Concat_3ae5ba0(pSVar13,str1,(MethodInfo *)0x0);
        pvVar20 = TypeInfo_MapTransfer[1].monitor;
        *(System_String_o **)((long)pvVar20 + 8) = pSVar13;
        il2cpp_runtime_helper_022b4080((long)pvVar20 + 8,pSVar13);
      }
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar35 = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
      if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Utility_CSVCompression__Compress(pSVar12,iVar35,0x3b,0x2c,(MethodInfo *)0x0);
      if (pSVar14 == (System_Object_array *)0x0) break;
      ppUVar34 = (UI_LoadingMenu_o **)__this_01;
      if ((int)pSVar14->max_length == 0) goto label_040b7684;
      pIVar17 = pSVar14->m_Items[0];
      pSVar15 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
      ppUVar34 = (UI_LoadingMenu_o **)TypeInfo_byte;
      if (pIVar17 == (Il2CppObject *)0x0) {
        collection = (System_Collections_Generic_IEnumerable_T__o *)0x0;
        ppUVar34 = (UI_LoadingMenu_o **)__this_01;
label_040b6ad5:
        System_Collections_Generic_List_byte____ctor_357ee60(pSVar15,collection,MethodInfo_List_1_System_Byte);
        pvVar20 = TypeInfo_MapTransfer[1].monitor;
        *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x30) = pSVar15;
        il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x30);
        pIVar18 = TypeInfo_JSONNode;
        if ((uint)pSVar14->max_length < 2) goto label_040b7684;
        pIVar17 = pSVar14->m_Items[1];
        if (pIVar17 == (Il2CppObject *)0x0) {
label_040b6b79:
          pvVar20 = TypeInfo_MapTransfer[1].monitor;
          *(undefined8 *)((long)pvVar20 + 0x28) = 0;
        }
        else {
          bVar2 = (TypeInfo_JSONNode->_2).naturalAligment;
          if (((pIVar17->klass->_2).naturalAligment < bVar2) ||
             ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNode)) {
label_040b6b6e:
            il2cpp_runtime_helper_022b2fd0(pIVar17,pIVar18);
            goto label_040b6b79;
          }
          pvVar20 = TypeInfo_MapTransfer[1].monitor;
          *(Il2CppObject **)((long)pvVar20 + 0x28) = pIVar17;
          if (((pIVar17->klass->_2).naturalAligment < bVar2) ||
             ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != pIVar18)) goto label_040b6b6e;
        }
        il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x28);
        pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_System_Byte);
        pvVar20 = TypeInfo_MapTransfer[1].monitor;
        *(System_Collections_Generic_List_object__o **)((long)pvVar20 + 0x38) = pSVar16;
        il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x38,pSVar16);
        pSVar16 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
        pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,5);
        pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
        if (pIVar18 == (Il2CppClass *)0x0) break;
        if (*(int *)&(pIVar18->_1).namespaze == 0) goto label_040b7684;
        *(undefined1 *)&(pIVar18->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x20);
        if (pIVar17 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar17[1].monitor == 0) goto label_040b7684;
        pIVar17[2].klass = pIVar18;
        il2cpp_runtime_helper_022b4080(pIVar17 + 2,pIVar18);
        ppUVar34 = &TypeInfo_DataCompressors;
        if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if (((lVar9 == 0) || (plVar4 = *(long **)(lVar9 + 0x20), plVar4 == (long *)0x0)) ||
           (pSVar12 = (System_String_o *)
                      (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0)),
           pUVar28 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) break;
        pSVar19 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar28,pSVar12,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7684;
        pIVar17[2].monitor = pSVar19;
        il2cpp_runtime_helper_022b4080(&pIVar17[2].monitor,pSVar19);
        lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if ((lVar9 == 0) || (plVar4 = *(long **)(lVar9 + 0x28), plVar4 == (long *)0x0)) break;
        pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar12 = (System_String_o *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        if (pUVar28 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar19 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar28,pSVar12,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar17[1].monitor < 3) goto label_040b7684;
        pIVar17[3].klass = (Il2CppClass *)pSVar19;
        il2cpp_runtime_helper_022b4080(pIVar17 + 3,pSVar19);
        lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
        if ((lVar9 == 0) || (plVar4 = *(long **)(lVar9 + 0x38), plVar4 == (long *)0x0)) break;
        pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar12 = (System_String_o *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
        if (pUVar28 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar19 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar28,pSVar12,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar17[1].monitor < 4) goto label_040b7684;
        pIVar17[3].monitor = pSVar19;
        il2cpp_runtime_helper_022b4080(&pIVar17[3].monitor,pSVar19);
        plVar4 = *(long **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
        if (plVar4 == (long *)0x0) break;
        pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
        pSVar12 = (System_String_o *)(**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
        if (pUVar28 == (Utility_Algorithms_CompressionAlgorithm_o *)0x0) break;
        pSVar19 = Utility_Algorithms_CompressionAlgorithm__CompressString(pUVar28,pSVar12,1,(MethodInfo *)0x0)
        ;
        if (*(uint *)&pIVar17[1].monitor < 5) goto label_040b7684;
        pIVar17[4].klass = (Il2CppClass *)pSVar19;
        il2cpp_runtime_helper_022b4080(pIVar17 + 4,pSVar19);
        lVar9 = MethodInfo_Void_Add;
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar16->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar14 = (pSVar16->fields)._items;
        if (pSVar14 == (System_Object_array *)0x0) break;
        uVar33 = (pSVar16->fields)._size;
        if (uVar33 < (uint)pSVar14->max_length) {
          (pSVar16->fields)._size = uVar33 + 1;
          pSVar14->m_Items[(int)uVar33] = pIVar17;
          il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar33,pIVar17);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar16,pIVar17,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
        if (lVar9 == 0) break;
        uVar33 = *(uint *)(lVar9 + 0x18);
        ppUVar34 = (UI_LoadingMenu_o **)(ulong)uVar33;
        pSVar16 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor(pSVar16,MethodInfo_List_1_System_Byte);
        if ((int)uVar33 < 1) {
          if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) break;
          goto label_040b7008;
        }
        if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7689;
        iVar32 = 0;
        iVar29 = 10000;
        goto label_040b6f45;
      }
      collection = (System_Collections_Generic_IEnumerable_T__o *)il2cpp_runtime_helper_023051f0(pIVar17,TypeInfo_byte);
      if (collection != (System_Collections_Generic_IEnumerable_T__o *)0x0) goto label_040b6ad5;
      il2cpp_runtime_helper_022b2fd0(pIVar17,ppUVar34);
label_040b6998:
      il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte_GetRange);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      g_data_057ac4f6 = '\x01';
      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) != 0) goto label_040b679f;
label_040b6ab2:
      __this_03 = &TypeInfo_MapManager;
      il2cpp_runtime_helper_02337ed0();
      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
      if (lVar9 == 0) break;
    } while( true );
  }
label_040b7727:
  pSVar21 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_helper_022b2c90();
  goto label_040b772c;
  while( true ) {
    pSVar19 = System_Collections_Generic_List_byte___ToArray
                        ((System_Collections_Generic_List_byte__o *)pSVar21,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray
                        );
    lVar9 = MethodInfo_Void_Add;
    piVar1 = &(pSVar16->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar14 = (pSVar16->fields)._items;
    if (pSVar14 == (System_Object_array *)0x0) goto label_040b7727;
    uVar27 = (pSVar16->fields)._size;
    if (uVar27 < (uint)pSVar14->max_length) {
      (pSVar16->fields)._size = uVar27 + 1;
      pSVar14->m_Items[(int)uVar27] = &pSVar19->obj;
      il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar27);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar16,&pSVar19->obj,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    iVar32 = iVar32 + iVar29;
    if ((int)uVar33 <= iVar32) break;
label_040b6f45:
    iVar5 = uVar33 - iVar32;
    if (iVar29 + iVar32 <= (int)uVar33) {
      iVar5 = iVar29;
    }
    iVar29 = iVar5;
    if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
    __this_03 = (UI_LoadingMenu_o **)&MethodInfo_Void_Add;
    if ((pSVar15 == (System_Collections_Generic_List_byte__o *)0x0) ||
       (pSVar21 = System_Collections_Generic_List_byte___GetRange(pSVar15,iVar32,iVar29,MethodInfo_List_1_System_Byte_GetRange),
       pSVar21 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
  }
label_040b7008:
  if (0 < (pSVar16->fields)._size) {
    ppUVar34 = (UI_LoadingMenu_o **)0x0;
    iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
    do {
      if (iVar32 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
      __this_03 = (UI_LoadingMenu_o **)&MethodInfo_Byte_get_Item;
      if (pIVar18 == (Il2CppClass *)0x0) goto label_040b7727;
      if (*(int *)&(pIVar18->_1).namespaze == 0) goto label_040b7684;
      *(undefined1 *)&(pIVar18->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x21);
      if (pIVar17 == (Il2CppObject *)0x0) goto label_040b7727;
      if (*(int *)&pIVar17[1].monitor == 0) goto label_040b7684;
      pIVar17[2].klass = pIVar18;
      il2cpp_runtime_helper_022b4080(pIVar17 + 2,pIVar18);
      iVar32 = (int)ppUVar34;
      pIVar22 = System_Collections_Generic_List_object___get_Item(pSVar16,iVar32,MethodInfo_Byte_get_Item);
      if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7684;
      pIVar17[2].monitor = pIVar22;
      il2cpp_runtime_helper_022b4080(&pIVar17[2].monitor,pIVar22);
      lVar9 = MethodInfo_Void_Add;
      if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7727;
      piVar1 = &(__this_02->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar14 = (__this_02->fields)._items;
      if (pSVar14 == (System_Object_array *)0x0) goto label_040b7727;
      uVar33 = (__this_02->fields)._size;
      if (uVar33 < (uint)pSVar14->max_length) {
        (__this_02->fields)._size = uVar33 + 1;
        pSVar14->m_Items[(int)uVar33] = pIVar17;
        il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar33);
        ppUVar34 = (UI_LoadingMenu_o **)(ulong)(iVar32 + 1U);
        if ((pSVar16->fields)._size <= (int)(iVar32 + 1U)) break;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_02,pIVar17,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        ppUVar34 = (UI_LoadingMenu_o **)(ulong)(iVar32 + 1U);
        if ((pSVar16->fields)._size <= (int)(iVar32 + 1U)) break;
      }
      iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
    } while( true );
  }
  pSVar12 = System_String__Trim(__this_01,(MethodInfo *)0x0);
  bVar7 = System_String__op_Inequality
                    (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (UI_LoadingMenu_o **)&MethodInfo_List_1_System_Byte;
    if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
        (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
      pSVar19 = Utility_Algorithms_CompressionAlgorithm__CompressString
                          (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor,__this_01,1,
                           (MethodInfo *)0x0);
      pSVar15 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
      System_Collections_Generic_List_byte____ctor_357ee60
                (pSVar15,(System_Collections_Generic_IEnumerable_T__o *)pSVar19,MethodInfo_List_1_System_Byte);
      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar20 = TypeInfo_MapTransfer[1].monitor;
      *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x40) = pSVar15;
      il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x40,pSVar15);
      lVar9 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
      if (lVar9 != 0) {
        uVar33 = *(uint *)(lVar9 + 0x18);
        __this_03 = (UI_LoadingMenu_o **)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_System_Byte);
        if (0 < (int)uVar33) {
          if ((Photon_Realtime_Player_o *)__this_03 != (Photon_Realtime_Player_o *)0x0) {
            iVar29 = 0;
            iVar32 = 10000;
            do {
              while( true ) {
                iVar5 = uVar33 - iVar29;
                if (iVar32 + iVar29 <= (int)uVar33) {
                  iVar5 = iVar32;
                }
                iVar32 = iVar5;
                if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                if ((pSVar15 == (System_Collections_Generic_List_byte__o *)0x0) ||
                   (pSVar21 = System_Collections_Generic_List_byte___GetRange
                                        (pSVar15,iVar29,iVar32,MethodInfo_List_1_System_Byte_GetRange),
                   pSVar21 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
                pSVar19 = System_Collections_Generic_List_byte___ToArray
                                    ((System_Collections_Generic_List_byte__o *)pSVar21,
                                     (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                lVar9 = MethodInfo_Void_Add;
                piVar1 = &(((Photon_Realtime_Player_o *)__this_03)->fields).IsLocal;
                *piVar1 = *piVar1 + 1;
                pSVar14 = (System_Object_array *)
                          (((Photon_Realtime_Player_o *)__this_03)->fields)._RoomReference_k__BackingField;
                if (pSVar14 == (System_Object_array *)0x0) goto label_040b7727;
                uVar27 = (((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber;
                ppUVar34 = (UI_LoadingMenu_o **)&MethodInfo_Void_Add;
                if ((uint)pSVar14->max_length <= uVar27) break;
                (((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber = uVar27 + 1;
                pSVar14->m_Items[(int)uVar27] = &pSVar19->obj;
                il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar27,pSVar19);
                iVar29 = iVar29 + iVar32;
                if ((int)uVar33 <= iVar29) goto label_040b73a9;
              }
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,&pSVar19->obj,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              iVar29 = iVar29 + iVar32;
            } while (iVar29 < (int)uVar33);
            goto label_040b73a9;
          }
          uVar27 = 10000;
          if ((int)uVar33 < 0x2711) {
            uVar27 = uVar33;
          }
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
          goto joined_r0x040b770d;
        }
        if ((Photon_Realtime_Player_o *)__this_03 != (Photon_Realtime_Player_o *)0x0) {
label_040b73a9:
          if (0 < (((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber) {
            iVar35 = 0;
            iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
            do {
              if (iVar32 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar16 = *(System_Collections_Generic_List_object__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
              pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
              pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
              if (pIVar18 == (Il2CppClass *)0x0) goto label_040b7727;
              ppUVar34 = (UI_LoadingMenu_o **)&MethodInfo_Byte_get_Item;
              if (*(int *)&(pIVar18->_1).namespaze == 0) goto label_040b7684;
              *(undefined1 *)&(pIVar18->_1).byval_arg.data =
                   *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x22);
              if (pIVar17 == (Il2CppObject *)0x0) goto label_040b7727;
              if (*(int *)&pIVar17[1].monitor == 0) goto label_040b7684;
              pIVar17[2].klass = pIVar18;
              il2cpp_runtime_helper_022b4080(pIVar17 + 2,pIVar18);
              pIVar22 = System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)__this_03,iVar35,MethodInfo_Byte_get_Item)
              ;
              if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7684;
              pIVar17[2].monitor = pIVar22;
              il2cpp_runtime_helper_022b4080(&pIVar17[2].monitor,pIVar22);
              lVar9 = MethodInfo_Void_Add;
              if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) goto label_040b7727;
              piVar1 = &(pSVar16->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar14 = (pSVar16->fields)._items;
              if (pSVar14 == (System_Object_array *)0x0) goto label_040b7727;
              uVar33 = (pSVar16->fields)._size;
              if (uVar33 < (uint)pSVar14->max_length) {
                (pSVar16->fields)._size = uVar33 + 1;
                pSVar14->m_Items[(int)uVar33] = pIVar17;
                il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar33,pIVar17);
                if ((((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber <= iVar35 + 1) break;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar16,pIVar17,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                if ((((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber <= iVar35 + 1) break;
              }
              iVar35 = iVar35 + 1;
              iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
            } while( true );
          }
          goto label_040b7522;
        }
      }
    }
    goto label_040b7727;
  }
label_040b7522:
  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = *(UI_LoadingMenu_o ***)((long)TypeInfo_MapTransfer[1].monitor + 0x38);
  pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
  pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
  if (pIVar18 == (Il2CppClass *)0x0) goto label_040b7727;
  if (*(int *)&(pIVar18->_1).namespaze != 0) {
    *(undefined1 *)&(pIVar18->_1).byval_arg.data = *(undefined1 *)((long)TypeInfo_MapTransfer[1].monitor + 0x23);
    if (pIVar17 != (Il2CppObject *)0x0) {
      if (*(int *)&pIVar17[1].monitor == 0) goto label_040b7684;
      pIVar17[2].klass = pIVar18;
      il2cpp_runtime_helper_022b4080(pIVar17 + 2,pIVar18);
      pSVar25 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
      if (pSVar25 != (System_Text_Encoding_o *)0x0) {
        pvVar20 = (void *)(*(pSVar25->klass->vtable)._18_GetBytes.methodPtr)
                                    (pSVar25,*(undefined8 *)((long)TypeInfo_MapTransfer[1].monitor + 8),
                                     (pSVar25->klass->vtable)._18_GetBytes.method);
        if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7684;
        pIVar17[2].monitor = pvVar20;
        il2cpp_runtime_helper_022b4080(&pIVar17[2].monitor,pvVar20);
        lVar9 = MethodInfo_Void_Add;
        if ((Photon_Realtime_Player_o *)__this_03 != (Photon_Realtime_Player_o *)0x0) {
          piVar1 = &(((Photon_Realtime_Player_o *)__this_03)->fields).IsLocal;
          *piVar1 = *piVar1 + 1;
          pSVar14 = (System_Object_array *)
                    (((Photon_Realtime_Player_o *)__this_03)->fields)._RoomReference_k__BackingField;
          if (pSVar14 != (System_Object_array *)0x0) {
            uVar33 = (((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber;
            if ((uint)pSVar14->max_length <= uVar33) {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_03,pIVar17,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              return;
            }
            (((Photon_Realtime_Player_o *)__this_03)->fields).actorNumber = uVar33 + 1;
            pSVar14->m_Items[(int)uVar33] = pIVar17;
            il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (int)uVar33,pIVar17);
            return;
          }
        }
      }
    }
    goto label_040b7727;
  }
label_040b7684:
  uVar33 = (uint)ppUVar34;
  il2cpp_runtime_helper_022b2ca0();
label_040b7689:
  uVar27 = 10000;
  if ((int)uVar33 < 0x2711) {
    uVar27 = uVar33;
  }
  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
joined_r0x040b770d:
  if ((pSVar15 == (System_Collections_Generic_List_byte__o *)0x0) ||
     (pSVar21 = System_Collections_Generic_List_byte___GetRange(pSVar15,0,uVar27,MethodInfo_List_1_System_Byte_GetRange),
     pSVar21 == (System_Collections_Generic_List_T__o *)0x0)) goto label_040b7727;
label_040b772c:
  pSVar19 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pSVar21,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
    g_data_057ac4f8 = '\x01';
  }
  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
  pSVar24 = (System_Byte_array *)0x0;
  pIVar17 = pIVar22;
  System_Object___ctor(pIVar22,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar22[1].klass = 0;
  if (pIVar22 != (Il2CppObject *)0x0) {
    pIVar22[2].klass = (Il2CppClass *)pSVar19;
    il2cpp_runtime_helper_022b4080(pIVar22 + 2,pSVar19);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar19 = pSVar24;
  if (g_data_057ac4f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ac4f7 = '\x01';
  }
  pUVar31 = (UI_LoadingMenu_o *)0x0;
  if ((Photon_Realtime_Player_o *)__this_03 != (Photon_Realtime_Player_o *)0x0) {
    pSVar19 = (System_Byte_array *)0x0;
    bVar7 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)__this_03,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar31 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar31 != (UI_LoadingMenu_o *)0x0) {
      __this_04 = (System_Byte_array *)0x0;
      UI_LoadingMenu__UpdateLoading
                (pUVar31,((float)(int)pSVar24 / (float)extraout_EDX) * 0.5,0,0,(MethodInfo *)0x0);
      pSVar19 = __this_04;
      if (pIVar17 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar17[1].monitor == 0) goto label_040b7f83;
        pIVar18 = pIVar17[2].klass;
        if (pIVar18 == (Il2CppClass *)0x0) goto label_040b7f7e;
        if (*(int *)&(pIVar18->_1).namespaze == 0) goto label_040b7f83;
        cVar6 = *(char *)&(pIVar18->_1).byval_arg.data;
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pvVar20 = TypeInfo_MapTransfer[1].monitor;
          cVar3 = *(char *)((long)pvVar20 + 0x20);
          pSVar19 = __this_04;
        }
        else {
          pvVar20 = TypeInfo_MapTransfer[1].monitor;
          cVar3 = *(char *)((long)pvVar20 + 0x20);
        }
        if (cVar6 == cVar3) {
          __this_04 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
          Map_MapScript___ctor((Map_MapScript_o *)__this_04,(MethodInfo *)pSVar19);
          if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pvVar20 = TypeInfo_MapManager[1].monitor;
          *(System_Byte_array **)((long)pvVar20 + 8) = __this_04;
          pUVar31 = (UI_LoadingMenu_o *)((long)pvVar20 + 8);
          il2cpp_runtime_helper_022b4080();
          lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
          pSVar19 = __this_04;
          if (lVar9 != 0) {
            pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x20);
            if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar31 = TypeInfo_DataCompressors;
            if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7f83;
            pUVar31 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
            pSVar19 = __this_04;
            if (pUVar31 != (UI_LoadingMenu_o *)0x0) {
              pSVar19 = pIVar17[2].monitor;
              __this_04 = (System_Byte_array *)
                          Utility_Algorithms_CompressionAlgorithm__DecompressString
                                    ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar31,pSVar19,0x1000,
                                     0xa00000,(MethodInfo *)0x0);
              if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                (*pUVar11->klass[1]._1.byval_arg.data)
                          (pUVar11,__this_04,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                pSVar19 = __this_04;
                pUVar31 = pUVar11;
                if (lVar9 != 0) {
                  if (*(uint *)&pIVar17[1].monitor < 3) goto label_040b7f83;
                  pUVar31 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                  if (pUVar31 != (UI_LoadingMenu_o *)0x0) {
                    pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x28);
                    pSVar19 = (System_Byte_array *)pIVar17[3].klass;
                    __this_04 = (System_Byte_array *)
                                Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar31,pSVar19,0x1000
                                           ,0xa00000,(MethodInfo *)0x0);
                    if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                      (*pUVar11->klass[1]._1.byval_arg.data)
                                (pUVar11,__this_04,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pSVar19 = __this_04;
                      pUVar31 = pUVar11;
                      if (lVar9 != 0) {
                        if (*(uint *)&pIVar17[1].monitor < 4) goto label_040b7f83;
                        pUVar31 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                        if (pUVar31 != (UI_LoadingMenu_o *)0x0) {
                          pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x38);
                          pSVar19 = pIVar17[3].monitor;
                          __this_04 = (System_Byte_array *)
                                      Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar31,pSVar19,
                                                 0x1000,0xa00000,(MethodInfo *)0x0);
                          if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                            (*(code *)pUVar11->klass[1]._1.name)
                                      (pUVar11,__this_04,pUVar11->klass[1]._1.namespaze);
                            pUVar31 = pUVar11;
                            if (*(uint *)&pIVar17[1].monitor < 5) goto label_040b7f83;
                            pSVar19 = __this_04;
                            pUVar31 = (UI_LoadingMenu_o *)0x0;
                            if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
                                (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                              pSVar12 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                  (*(Utility_Algorithms_CompressionAlgorithm_o **)
                                                    TypeInfo_DataCompressors[1].monitor,
                                                   (System_Byte_array *)pIVar17[4].klass,0x1000,0xa00000,
                                                   (MethodInfo *)0x0);
                              pSVar23 = SimpleJSONFixed_JSON__Parse(pSVar12,(MethodInfo *)0x0);
                              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvVar20 = TypeInfo_MapTransfer[1].monitor;
                              *(SimpleJSONFixed_JSONNode_o **)((long)pvVar20 + 0x28) = pSVar23;
                              il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x28,pSVar23);
                              pSVar15 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar15,MethodInfo_List_1_System_Byte);
                              pvVar20 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x30) = pSVar15;
                              il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x30,pSVar15);
                              pSVar15 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar15,MethodInfo_List_1_System_Byte);
                              pvVar20 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x40) = pSVar15;
                              il2cpp_runtime_helper_022b4080((long)pvVar20 + 0x40,pSVar15);
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
        else {
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pvVar20 = TypeInfo_MapTransfer[1].monitor;
            cVar3 = *(char *)((long)pvVar20 + 0x21);
            __this_04 = pSVar19;
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar20 = TypeInfo_MapTransfer[1].monitor;
              __this_04 = pSVar19;
            }
          }
          else {
            cVar3 = *(char *)((long)pvVar20 + 0x21);
            __this_04 = pSVar19;
          }
          if (cVar6 == cVar3) {
            pUVar31 = TypeInfo_MapTransfer;
            if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7f83;
            pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x30);
            if (pSVar15 != (System_Collections_Generic_List_byte__o *)0x0) {
label_040b7c7c:
              System_Collections_Generic_List_byte___AddRange(pSVar15,pIVar17[2].monitor,MethodInfo_Void_AddRange);
              return;
            }
            pSVar19 = __this_04;
            pUVar31 = (UI_LoadingMenu_o *)0x0;
          }
          else {
            cVar3 = *(char *)((long)pvVar20 + 0x22);
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar20 = TypeInfo_MapTransfer[1].monitor;
            }
            if (cVar6 == cVar3) {
              pUVar31 = TypeInfo_MapTransfer;
              if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7f83;
              pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x40);
              pSVar19 = __this_04;
              pUVar31 = (UI_LoadingMenu_o *)0x0;
              if (pSVar15 != (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7c7c;
            }
            else {
              if (cVar6 != *(char *)((long)pvVar20 + 0x23)) {
                return;
              }
              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pvVar20 = TypeInfo_MapTransfer[1].monitor;
              }
              pSVar15 = *(System_Collections_Generic_List_byte__o **)((long)pvVar20 + 0x30);
              pSVar19 = __this_04;
              pUVar31 = TypeInfo_MapTransfer;
              if (pSVar15 != (System_Collections_Generic_List_byte__o *)0x0) {
                if ((pSVar15->fields)._size < 1) {
label_040b7dc3:
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                  pSVar19 = __this_04;
                  pUVar31 = TypeInfo_MapTransfer;
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) < 1) {
label_040b7ef0:
                      pUVar31 = (UI_LoadingMenu_o *)0x0;
                      pSVar25 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                      if (*(uint *)&pIVar17[1].monitor < 2) goto label_040b7f83;
                      pSVar19 = __this_04;
                      if (pSVar25 == (System_Text_Encoding_o *)0x0) goto label_040b7f7e;
                      uVar26 = (*(pSVar25->klass->vtable)._35_GetString.methodPtr)
                                         (pSVar25,pIVar17[2].monitor,
                                          (pSVar25->klass->vtable)._35_GetString.method);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pvVar20 = TypeInfo_MapTransfer[1].monitor;
                      *(undefined8 *)((long)pvVar20 + 8) = uVar26;
                      il2cpp_runtime_helper_022b4080((long)pvVar20 + 8,uVar26);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if (g_data_057ac4d9 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&"CustomMapHash");
                        g_data_057ac4d9 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined1 *)((long)TypeInfo_MapManager[1].monitor + 0x18) = 1;
                      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      targetPlayer = "CustomMapHash";
                      PhotonExtensions__SetCustomProperty
                                (player,(System_String_o *)"CustomMapHash",
                                 *(Il2CppObject **)((long)TypeInfo_MapTransfer[1].monitor + 8),(MethodInfo *)0x0);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) && (*(long *)(lVar9 + 0x30) != 0))
                      {
                        customAssets = *(System_Collections_Generic_List_string__o **)
                                        (*(long *)(lVar9 + 0x28) + 0x10);
                        objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
                                   (*(long *)(lVar9 + 0x30) + 0x10);
                        options = *(Map_MapScriptOptions_o **)(lVar9 + 0x20);
                        weather = *(Settings_WeatherSet_o **)(lVar9 + 0x38);
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        Map_MapLoader__StartLoadObjects
                                  (customAssets,objects,options,weather,0,(MethodInfo *)0x0);
                        return;
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057ac4da == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                        il2cpp_runtime_helper_023445d0(&"Custom");
                        il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
                        g_data_057ac4da = '\x01';
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
                        il2cpp_runtime_helper_02337ed0();
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar6 = (char)bVar7;
                      }
                      else {
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar6 = (char)bVar7;
                      }
                      if (cVar6 == '\0') {
                        return;
                      }
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        cVar6 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      else {
                        cVar6 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      if (cVar6 == '\0') {
                        "Custom" = method_00;
                        return;
                      }
                      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                      "Custom" = method_00;
                      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) ||
                         (*(long *)(lVar9 + 0x20) == 0)) {
label_040b44af:
                        il2cpp_runtime_helper_022b2c90();
                      }
                      else {
                        bVar7 = System_String__op_Equality
                                          (*(System_String_o **)(*(long *)(lVar9 + 0x20) + 0x18),
                                           (System_String_o *)method_00,(MethodInfo *)0x0);
                        if ((char)bVar7 != '\0') {
                          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          Map_MapTransfer__Transfer(targetPlayer,method_00);
                          return;
                        }
                        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                        pSVar14 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                        if ((*(long *)(lVar9 + 0x20) == 0) || (pSVar14 == (System_Object_array *)0x0))
                        goto label_040b44af;
                        pIVar17 = *(Il2CppObject **)(*(long *)(lVar9 + 0x20) + 0x18);
                        if ((pIVar17 != (Il2CppObject *)0x0) &&
                           (lVar8 = il2cpp_runtime_helper_023051f0(pIVar17), lVar8 == 0)) goto label_040b44b9;
                        if ((int)pSVar14->max_length != 0) {
                          pSVar14->m_Items[0] = pIVar17;
                          il2cpp_runtime_helper_022b4080(pSVar14->m_Items);
                          if (*(long *)(lVar9 + 0x28) != 0) {
                            pIVar17 = *(Il2CppObject **)(*(long *)(lVar9 + 0x28) + 0x18);
                            if ((pIVar17 != (Il2CppObject *)0x0) &&
                               (lVar9 = il2cpp_runtime_helper_023051f0(pIVar17), lVar9 == 0)) goto label_040b44b9;
                            if ((uint)pSVar14->max_length < 2) goto label_040b44b4;
                            pSVar14->m_Items[1] = pIVar17;
                            il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 1);
                            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                              Photon_Pun_PhotonView__RPC_3efa220
                                        (__this,"LoadBuiltinMapRPC",targetPlayer,pSVar14,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          goto label_040b44af;
                        }
                      }
label_040b44b4:
                      il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
                      pSVar10 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_0231b270();
                      il2cpp_runtime_helper_022b2b10();
                      if (g_data_057ac4f5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        g_data_057ac4f5 = '\x01';
                        iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      else {
                        iVar32 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      if (iVar32 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar31 = TypeInfo_MapTransfer;
                      }
                      else {
                        __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar31 = TypeInfo_MapTransfer;
                      }
                      TypeInfo_MapTransfer = pUVar31;
                      if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                        if (g_data_057ac4f8 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
                          g_data_057ac4f8 = '\x01';
                        }
                        pUVar11 = (UI_LoadingMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
                        pUVar31 = pUVar11;
                        System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
                        *(undefined4 *)&(pUVar11->fields).m_CachedPtr = 0;
                        if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                          (pUVar11->fields)._popups = pSVar10;
                          il2cpp_runtime_helper_022b4080(&(pUVar11->fields)._popups,pSVar10);
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (__this_00,(System_Collections_IEnumerator_o *)pUVar11,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      il2cpp_runtime_helper_022b2c90();
                      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pUVar31,(MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
                      pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) != 0) goto label_040b7e19;
label_040b7e5f:
                      il2cpp_runtime_helper_02337ed0();
                      pUVar31 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar24 = MethodInfo_Byte_ToArray;
                    }
                    else {
                      pUVar28 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) goto label_040b7e5f;
label_040b7e19:
                      pUVar31 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar24 = MethodInfo_Byte_ToArray;
                    }
                    pSVar19 = __this_04;
                    MethodInfo_Byte_ToArray = pSVar24;
                    if ((pUVar31 != (UI_LoadingMenu_o *)0x0) &&
                       (data = System_Collections_Generic_List_byte___ToArray
                                         ((System_Collections_Generic_List_byte__o *)pUVar31,
                                          (MethodInfo_3581700 *)pSVar24), pSVar19 = pSVar24,
                       pUVar28 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
                      __this_04 = (System_Byte_array *)
                                  Utility_Algorithms_CompressionAlgorithm__DecompressString
                                            (pUVar28,data,0x1000,0xa00000,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pUVar31 = (UI_LoadingMenu_o *)0x0;
                      pSVar19 = data;
                      if (lVar9 != 0) {
                        *(System_Byte_array **)(lVar9 + 0x40) = __this_04;
                        il2cpp_runtime_helper_022b4080();
                        goto label_040b7ef0;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar15 = *(System_Collections_Generic_List_byte__o **)
                               ((long)TypeInfo_MapTransfer[1].monitor + 0x30);
                    pSVar19 = __this_04;
                    if (pSVar15 == (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7f7e;
                  }
                  pSVar24 = System_Collections_Generic_List_byte___ToArray
                                      (pSVar15,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                  pSVar19 = *(System_Byte_array **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
                  iVar35 = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
                  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_04 = (System_Byte_array *)
                              Utility_CSVCompression__Decompress
                                        (pSVar24,(SimpleJSONFixed_JSONNode_o *)pSVar19,iVar35,0x3b,0x2c,
                                         (MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                  pUVar31 = TypeInfo_MapManager;
                  if (lVar9 != 0) {
                    plVar4 = *(long **)(lVar9 + 0x30);
                    pUVar31 = (UI_LoadingMenu_o *)0x0;
                    if (plVar4 != (long *)0x0) {
                      (**(code **)(*plVar4 + 0x1c8))(plVar4,__this_04,*(undefined8 *)(*plVar4 + 0x1d0));
                      goto label_040b7dc3;
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
label_040b7f7e:
  __this_04 = pSVar19;
  il2cpp_runtime_helper_022b2c90();
label_040b7f83:
  uVar30 = SUB84(__this_04,0);
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar31,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar31->fields).m_CachedPtr = uVar30;
  return;
}


// Map.MapTransfer$$OnTransferMapRPC
// il2cpp: void Map_MapTransfer__OnTransferMapRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x40b77c0

void Map_MapTransfer__OnTransferMapRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  int iVar3;
  int32_t deltaRows;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  long *plVar5;
  char cVar6;
  bool_conflict bVar7;
  Photon_Realtime_Player_o *player;
  System_Object_array *parameters;
  long lVar8;
  long lVar9;
  System_Collections_Generic_List_BasePopup__o *pSVar10;
  UI_LoadingMenu_o *pUVar11;
  System_Byte_array *pSVar12;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Collections_Generic_List_byte__o *pSVar14;
  void *pvVar15;
  System_Byte_array *data;
  System_Text_Encoding_o *pSVar16;
  undefined8 uVar17;
  Utility_Algorithms_CompressionAlgorithm_o *__this_01;
  undefined4 uVar18;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  System_Byte_array *pSVar19;
  System_Byte_array *pSVar20;
  UI_LoadingMenu_o *pUVar21;
  
  pSVar19 = (System_Byte_array *)(ulong)(uint)msgNumber;
  if (g_data_057ac4f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ac4f7 = '\x01';
  }
  pUVar21 = (UI_LoadingMenu_o *)0x0;
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    pSVar19 = (System_Byte_array *)0x0;
    bVar7 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar21 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar21 != (UI_LoadingMenu_o *)0x0) {
      pSVar12 = (System_Byte_array *)0x0;
      UI_LoadingMenu__UpdateLoading(pUVar21,((float)msgNumber / (float)msgTotal) * 0.5,0,0,(MethodInfo *)0x0);
      pSVar19 = pSVar12;
      if (byteArr != (System_Byte_array_array *)0x0) {
        if ((int)byteArr->max_length == 0) goto label_040b7f83;
        pSVar20 = byteArr->m_Items[0];
        if (pSVar20 == (System_Byte_array *)0x0) goto label_040b7f7e;
        if ((int)pSVar20->max_length == 0) goto label_040b7f83;
        uVar1 = pSVar20->m_Items[0];
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pvVar15 = TypeInfo_MapTransfer[1].monitor;
          uVar2 = *(uint8_t *)((long)pvVar15 + 0x20);
          pSVar19 = pSVar12;
        }
        else {
          pvVar15 = TypeInfo_MapTransfer[1].monitor;
          uVar2 = *(uint8_t *)((long)pvVar15 + 0x20);
        }
        if (uVar1 == uVar2) {
          pSVar12 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
          Map_MapScript___ctor((Map_MapScript_o *)pSVar12,(MethodInfo *)pSVar19);
          if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pvVar15 = TypeInfo_MapManager[1].monitor;
          *(System_Byte_array **)((long)pvVar15 + 8) = pSVar12;
          pUVar21 = (UI_LoadingMenu_o *)((long)pvVar15 + 8);
          il2cpp_runtime_helper_022b4080();
          lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
          pSVar19 = pSVar12;
          if (lVar9 != 0) {
            pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x20);
            if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar21 = TypeInfo_DataCompressors;
            if ((uint)byteArr->max_length < 2) goto label_040b7f83;
            pUVar21 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
            pSVar19 = pSVar12;
            if (pUVar21 != (UI_LoadingMenu_o *)0x0) {
              pSVar19 = byteArr->m_Items[1];
              pSVar12 = (System_Byte_array *)
                        Utility_Algorithms_CompressionAlgorithm__DecompressString
                                  ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar21,pSVar19,0x1000,
                                   0xa00000,(MethodInfo *)0x0);
              if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                (*pUVar11->klass[1]._1.byval_arg.data)
                          (pUVar11,pSVar12,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                pSVar19 = pSVar12;
                pUVar21 = pUVar11;
                if (lVar9 != 0) {
                  if ((uint)byteArr->max_length < 3) goto label_040b7f83;
                  pUVar21 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                  if (pUVar21 != (UI_LoadingMenu_o *)0x0) {
                    pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x28);
                    pSVar19 = byteArr->m_Items[2];
                    pSVar12 = (System_Byte_array *)
                              Utility_Algorithms_CompressionAlgorithm__DecompressString
                                        ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar21,pSVar19,0x1000,
                                         0xa00000,(MethodInfo *)0x0);
                    if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                      (*pUVar11->klass[1]._1.byval_arg.data)
                                (pUVar11,pSVar12,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pSVar19 = pSVar12;
                      pUVar21 = pUVar11;
                      if (lVar9 != 0) {
                        if ((uint)byteArr->max_length < 4) goto label_040b7f83;
                        pUVar21 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                        if (pUVar21 != (UI_LoadingMenu_o *)0x0) {
                          pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x38);
                          pSVar19 = byteArr->m_Items[3];
                          pSVar12 = (System_Byte_array *)
                                    Utility_Algorithms_CompressionAlgorithm__DecompressString
                                              ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar21,pSVar19,
                                               0x1000,0xa00000,(MethodInfo *)0x0);
                          if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                            (*(code *)pUVar11->klass[1]._1.name)
                                      (pUVar11,pSVar12,pUVar11->klass[1]._1.namespaze);
                            pUVar21 = pUVar11;
                            if ((uint)byteArr->max_length < 5) goto label_040b7f83;
                            pSVar19 = pSVar12;
                            pUVar21 = (UI_LoadingMenu_o *)0x0;
                            if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
                                (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                              aJSON = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                (*(Utility_Algorithms_CompressionAlgorithm_o **)
                                                  TypeInfo_DataCompressors[1].monitor,byteArr->m_Items[4],0x1000,0xa00000,
                                                 (MethodInfo *)0x0);
                              pSVar13 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
                              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvVar15 = TypeInfo_MapTransfer[1].monitor;
                              *(SimpleJSONFixed_JSONNode_o **)((long)pvVar15 + 0x28) = pSVar13;
                              il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x28,pSVar13);
                              pSVar14 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar14,MethodInfo_List_1_System_Byte);
                              pvVar15 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x30) = pSVar14;
                              il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x30,pSVar14);
                              pSVar14 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar14,MethodInfo_List_1_System_Byte);
                              pvVar15 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x40) = pSVar14;
                              il2cpp_runtime_helper_022b4080((long)pvVar15 + 0x40,pSVar14);
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
        else {
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pvVar15 = TypeInfo_MapTransfer[1].monitor;
            uVar2 = *(uint8_t *)((long)pvVar15 + 0x21);
            pSVar12 = pSVar19;
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar15 = TypeInfo_MapTransfer[1].monitor;
              pSVar12 = pSVar19;
            }
          }
          else {
            uVar2 = *(uint8_t *)((long)pvVar15 + 0x21);
            pSVar12 = pSVar19;
          }
          if (uVar1 == uVar2) {
            pUVar21 = TypeInfo_MapTransfer;
            if ((uint)byteArr->max_length < 2) goto label_040b7f83;
            pSVar14 = *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x30);
            if (pSVar14 != (System_Collections_Generic_List_byte__o *)0x0) {
label_040b7c7c:
              System_Collections_Generic_List_byte___AddRange
                        (pSVar14,(System_Collections_Generic_IEnumerable_T__o *)byteArr->m_Items[1],
                         MethodInfo_Void_AddRange);
              return;
            }
            pSVar19 = pSVar12;
            pUVar21 = (UI_LoadingMenu_o *)0x0;
          }
          else {
            uVar2 = *(uint8_t *)((long)pvVar15 + 0x22);
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pvVar15 = TypeInfo_MapTransfer[1].monitor;
            }
            if (uVar1 == uVar2) {
              pUVar21 = TypeInfo_MapTransfer;
              if ((uint)byteArr->max_length < 2) goto label_040b7f83;
              pSVar14 = *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x40);
              pSVar19 = pSVar12;
              pUVar21 = (UI_LoadingMenu_o *)0x0;
              if (pSVar14 != (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7c7c;
            }
            else {
              if (uVar1 != *(uint8_t *)((long)pvVar15 + 0x23)) {
                return;
              }
              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pvVar15 = TypeInfo_MapTransfer[1].monitor;
              }
              pSVar14 = *(System_Collections_Generic_List_byte__o **)((long)pvVar15 + 0x30);
              pSVar19 = pSVar12;
              pUVar21 = TypeInfo_MapTransfer;
              if (pSVar14 != (System_Collections_Generic_List_byte__o *)0x0) {
                if ((pSVar14->fields)._size < 1) {
label_040b7dc3:
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                  pSVar19 = pSVar12;
                  pUVar21 = TypeInfo_MapTransfer;
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) < 1) {
label_040b7ef0:
                      pUVar21 = (UI_LoadingMenu_o *)0x0;
                      pSVar16 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                      if ((uint)byteArr->max_length < 2) goto label_040b7f83;
                      pSVar19 = pSVar12;
                      if (pSVar16 == (System_Text_Encoding_o *)0x0) goto label_040b7f7e;
                      uVar17 = (*(pSVar16->klass->vtable)._35_GetString.methodPtr)
                                         (pSVar16,byteArr->m_Items[1],
                                          (pSVar16->klass->vtable)._35_GetString.method);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pvVar15 = TypeInfo_MapTransfer[1].monitor;
                      *(undefined8 *)((long)pvVar15 + 8) = uVar17;
                      il2cpp_runtime_helper_022b4080((long)pvVar15 + 8,uVar17);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if (g_data_057ac4d9 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&"CustomMapHash");
                        g_data_057ac4d9 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined1 *)((long)TypeInfo_MapManager[1].monitor + 0x18) = 1;
                      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      targetPlayer = "CustomMapHash";
                      PhotonExtensions__SetCustomProperty
                                (player,(System_String_o *)"CustomMapHash",
                                 *(Il2CppObject **)((long)TypeInfo_MapTransfer[1].monitor + 8),(MethodInfo *)0x0);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) && (*(long *)(lVar9 + 0x30) != 0))
                      {
                        customAssets = *(System_Collections_Generic_List_string__o **)
                                        (*(long *)(lVar9 + 0x28) + 0x10);
                        objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
                                   (*(long *)(lVar9 + 0x30) + 0x10);
                        options = *(Map_MapScriptOptions_o **)(lVar9 + 0x20);
                        weather = *(Settings_WeatherSet_o **)(lVar9 + 0x38);
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        Map_MapLoader__StartLoadObjects
                                  (customAssets,objects,options,weather,0,(MethodInfo *)0x0);
                        return;
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057ac4da == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                        il2cpp_runtime_helper_023445d0(&"Custom");
                        il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
                        g_data_057ac4da = '\x01';
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
                        il2cpp_runtime_helper_02337ed0();
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar6 = (char)bVar7;
                      }
                      else {
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        cVar6 = (char)bVar7;
                      }
                      if (cVar6 == '\0') {
                        return;
                      }
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        cVar6 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      else {
                        cVar6 = *(char *)TypeInfo_MapTransfer[1].monitor;
                        method_00 = "Custom";
                      }
                      if (cVar6 == '\0') {
                        "Custom" = method_00;
                        return;
                      }
                      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                      "Custom" = method_00;
                      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) ||
                         (*(long *)(lVar9 + 0x20) == 0)) {
label_040b44af:
                        il2cpp_runtime_helper_022b2c90();
                      }
                      else {
                        bVar7 = System_String__op_Equality
                                          (*(System_String_o **)(*(long *)(lVar9 + 0x20) + 0x18),
                                           (System_String_o *)method_00,(MethodInfo *)0x0);
                        if ((char)bVar7 != '\0') {
                          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          Map_MapTransfer__Transfer(targetPlayer,method_00);
                          return;
                        }
                        __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                        parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                        if ((*(long *)(lVar9 + 0x20) == 0) || (parameters == (System_Object_array *)0x0))
                        goto label_040b44af;
                        pIVar4 = *(Il2CppObject **)(*(long *)(lVar9 + 0x20) + 0x18);
                        if ((pIVar4 != (Il2CppObject *)0x0) &&
                           (lVar8 = il2cpp_runtime_helper_023051f0(pIVar4), lVar8 == 0)) goto label_040b44b9;
                        if ((int)parameters->max_length != 0) {
                          parameters->m_Items[0] = pIVar4;
                          il2cpp_runtime_helper_022b4080(parameters->m_Items);
                          if (*(long *)(lVar9 + 0x28) != 0) {
                            pIVar4 = *(Il2CppObject **)(*(long *)(lVar9 + 0x28) + 0x18);
                            if ((pIVar4 != (Il2CppObject *)0x0) &&
                               (lVar9 = il2cpp_runtime_helper_023051f0(pIVar4), lVar9 == 0)) goto label_040b44b9;
                            if ((uint)parameters->max_length < 2) goto label_040b44b4;
                            parameters->m_Items[1] = pIVar4;
                            il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
                            if (__this != (Photon_Pun_PhotonView_o *)0x0) {
                              Photon_Pun_PhotonView__RPC_3efa220
                                        (__this,"LoadBuiltinMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          goto label_040b44af;
                        }
                      }
label_040b44b4:
                      il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
                      pSVar10 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_0231b270();
                      il2cpp_runtime_helper_022b2b10();
                      if (g_data_057ac4f5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        g_data_057ac4f5 = '\x01';
                        iVar3 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      else {
                        iVar3 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      if (iVar3 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar21 = TypeInfo_MapTransfer;
                      }
                      else {
                        __this_00 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar21 = TypeInfo_MapTransfer;
                      }
                      TypeInfo_MapTransfer = pUVar21;
                      if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
                        if (g_data_057ac4f8 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
                          g_data_057ac4f8 = '\x01';
                        }
                        pUVar11 = (UI_LoadingMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
                        pUVar21 = pUVar11;
                        System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
                        *(undefined4 *)&(pUVar11->fields).m_CachedPtr = 0;
                        if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                          (pUVar11->fields)._popups = pSVar10;
                          il2cpp_runtime_helper_022b4080(&(pUVar11->fields)._popups,pSVar10);
                          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                    (__this_00,(System_Collections_IEnumerator_o *)pUVar11,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      il2cpp_runtime_helper_022b2c90();
                      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pUVar21,(MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
                      __this_01 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) != 0) goto label_040b7e19;
label_040b7e5f:
                      il2cpp_runtime_helper_02337ed0();
                      pUVar21 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar20 = MethodInfo_Byte_ToArray;
                    }
                    else {
                      __this_01 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) goto label_040b7e5f;
label_040b7e19:
                      pUVar21 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar20 = MethodInfo_Byte_ToArray;
                    }
                    pSVar19 = pSVar12;
                    MethodInfo_Byte_ToArray = pSVar20;
                    if ((pUVar21 != (UI_LoadingMenu_o *)0x0) &&
                       (data = System_Collections_Generic_List_byte___ToArray
                                         ((System_Collections_Generic_List_byte__o *)pUVar21,
                                          (MethodInfo_3581700 *)pSVar20), pSVar19 = pSVar20,
                       __this_01 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
                      pSVar12 = (System_Byte_array *)
                                Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          (__this_01,data,0x1000,0xa00000,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pUVar21 = (UI_LoadingMenu_o *)0x0;
                      pSVar19 = data;
                      if (lVar9 != 0) {
                        *(System_Byte_array **)(lVar9 + 0x40) = pSVar12;
                        il2cpp_runtime_helper_022b4080();
                        goto label_040b7ef0;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar14 = *(System_Collections_Generic_List_byte__o **)
                               ((long)TypeInfo_MapTransfer[1].monitor + 0x30);
                    pSVar19 = pSVar12;
                    if (pSVar14 == (System_Collections_Generic_List_byte__o *)0x0) goto label_040b7f7e;
                  }
                  pSVar12 = System_Collections_Generic_List_byte___ToArray
                                      (pSVar14,(MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                  pSVar19 = *(System_Byte_array **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
                  deltaRows = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
                  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar12 = (System_Byte_array *)
                            Utility_CSVCompression__Decompress
                                      (pSVar12,(SimpleJSONFixed_JSONNode_o *)pSVar19,deltaRows,0x3b,0x2c,
                                       (MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                  pUVar21 = TypeInfo_MapManager;
                  if (lVar9 != 0) {
                    plVar5 = *(long **)(lVar9 + 0x30);
                    pUVar21 = (UI_LoadingMenu_o *)0x0;
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,pSVar12,*(undefined8 *)(*plVar5 + 0x1d0));
                      goto label_040b7dc3;
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
label_040b7f7e:
  pSVar12 = pSVar19;
  il2cpp_runtime_helper_022b2c90();
label_040b7f83:
  uVar18 = SUB84(pSVar12,0);
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar21,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar21->fields).m_CachedPtr = uVar18;
  return;
}


// Map.MapTransfer$$TransferMapData
// il2cpp: System_Collections_IEnumerator_o* Map_MapTransfer__TransferMapData (Map_MapTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x40b7750

System_Collections_IEnumerator_o *
Map_MapTransfer__TransferMapData
          (Map_MapTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  int32_t deltaRows;
  System_Collections_Generic_List_string__o *customAssets;
  System_Collections_Generic_List_MapScriptBaseObject__o *objects;
  Map_MapScriptOptions_o *options;
  Settings_WeatherSet_o *weather;
  Photon_Pun_PhotonView_o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  Il2CppClass *pIVar3;
  void *pvVar4;
  long *plVar5;
  char cVar6;
  bool_conflict bVar7;
  Photon_Realtime_Player_o *player_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  System_Object_array *parameters;
  long lVar8;
  long lVar9;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  System_Collections_Generic_List_BasePopup__o *pSVar10;
  UI_LoadingMenu_o *pUVar11;
  UnityEngine_Coroutine_o *pUVar12;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  Il2CppObject *__this_02;
  undefined4 extraout_var_01;
  System_Byte_array *__this_03;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Collections_Generic_List_byte__o *pSVar14;
  System_Collections_IEnumerator_o *pSVar15;
  System_Collections_IEnumerator_o *extraout_RAX_03;
  System_Collections_IEnumerator_c *pSVar16;
  System_Byte_array *pSVar17;
  System_Byte_array *data;
  System_Text_Encoding_o *pSVar18;
  undefined8 uVar19;
  System_Collections_IEnumerator_o *extraout_RAX_04;
  int extraout_EDX;
  Utility_Algorithms_CompressionAlgorithm_o *__this_04;
  undefined4 uVar20;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *method_00;
  System_Byte_array *data_00;
  Il2CppObject *pIVar21;
  UI_LoadingMenu_o *pUVar22;
  Photon_Realtime_Player_o *unaff_R14;
  
  if (g_data_057ac4f8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
    g_data_057ac4f8 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
  pSVar17 = (System_Byte_array *)0x0;
  pIVar21 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = (Il2CppClass *)player;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,player);
    return (System_Collections_IEnumerator_o *)__this_02;
  }
  il2cpp_runtime_helper_022b2c90();
  data_00 = pSVar17;
  if (g_data_057ac4f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CSVCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ac4f7 = '\x01';
  }
  pUVar22 = (UI_LoadingMenu_o *)0x0;
  if (unaff_R14 != (Photon_Realtime_Player_o *)0x0) {
    data_00 = (System_Byte_array *)0x0;
    bVar7 = Photon_Realtime_Player__get_IsMasterClient(unaff_R14,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_01,bVar7);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar22 = *(UI_LoadingMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x30);
    if (pUVar22 != (UI_LoadingMenu_o *)0x0) {
      __this_03 = (System_Byte_array *)0x0;
      UI_LoadingMenu__UpdateLoading
                (pUVar22,((float)(int)pSVar17 / (float)extraout_EDX) * 0.5,0,0,(MethodInfo *)0x0);
      data_00 = __this_03;
      if (pIVar21 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar21[1].monitor == 0) goto label_040b7f83;
        pIVar3 = pIVar21[2].klass;
        if (pIVar3 == (Il2CppClass *)0x0) goto label_040b7f7e;
        if (*(int *)&(pIVar3->_1).namespaze == 0) goto label_040b7f83;
        cVar6 = *(char *)&(pIVar3->_1).byval_arg.data;
        if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar15 = TypeInfo_MapTransfer[1].monitor;
          cVar1 = *(char *)&pSVar15[2].klass;
          pSVar17 = __this_03;
        }
        else {
          pSVar15 = TypeInfo_MapTransfer[1].monitor;
          cVar1 = *(char *)&pSVar15[2].klass;
          pSVar17 = __this_03;
        }
        if (cVar6 == cVar1) {
          __this_03 = (System_Byte_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
          Map_MapScript___ctor((Map_MapScript_o *)__this_03,(MethodInfo *)pSVar17);
          if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pvVar4 = TypeInfo_MapManager[1].monitor;
          *(System_Byte_array **)((long)pvVar4 + 8) = __this_03;
          pUVar22 = (UI_LoadingMenu_o *)((long)pvVar4 + 8);
          il2cpp_runtime_helper_022b4080();
          lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
          data_00 = __this_03;
          if (lVar9 != 0) {
            pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x20);
            if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar22 = TypeInfo_DataCompressors;
            if (*(uint *)&pIVar21[1].monitor < 2) goto label_040b7f83;
            pUVar22 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
            data_00 = __this_03;
            if (pUVar22 != (UI_LoadingMenu_o *)0x0) {
              data_00 = pIVar21[2].monitor;
              __this_03 = (System_Byte_array *)
                          Utility_Algorithms_CompressionAlgorithm__DecompressString
                                    ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar22,data_00,0x1000,
                                     0xa00000,(MethodInfo *)0x0);
              if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                (*pUVar11->klass[1]._1.byval_arg.data)
                          (pUVar11,__this_03,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                data_00 = __this_03;
                pUVar22 = pUVar11;
                if (lVar9 != 0) {
                  if (*(uint *)&pIVar21[1].monitor < 3) goto label_040b7f83;
                  pUVar22 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                  if (pUVar22 != (UI_LoadingMenu_o *)0x0) {
                    pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x28);
                    data_00 = (System_Byte_array *)pIVar21[3].klass;
                    __this_03 = (System_Byte_array *)
                                Utility_Algorithms_CompressionAlgorithm__DecompressString
                                          ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar22,data_00,0x1000
                                           ,0xa00000,(MethodInfo *)0x0);
                    if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                      (*pUVar11->klass[1]._1.byval_arg.data)
                                (pUVar11,__this_03,*(undefined8 *)&pUVar11->klass[1]._1.byval_arg.bits);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      data_00 = __this_03;
                      pUVar22 = pUVar11;
                      if (lVar9 != 0) {
                        if (*(uint *)&pIVar21[1].monitor < 4) goto label_040b7f83;
                        pUVar22 = *(UI_LoadingMenu_o **)TypeInfo_DataCompressors[1].monitor;
                        if (pUVar22 != (UI_LoadingMenu_o *)0x0) {
                          pUVar11 = *(UI_LoadingMenu_o **)(lVar9 + 0x38);
                          data_00 = pIVar21[3].monitor;
                          __this_03 = (System_Byte_array *)
                                      Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                ((Utility_Algorithms_CompressionAlgorithm_o *)pUVar22,data_00,
                                                 0x1000,0xa00000,(MethodInfo *)0x0);
                          if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                            (*(code *)pUVar11->klass[1]._1.name)
                                      (pUVar11,__this_03,pUVar11->klass[1]._1.namespaze);
                            pUVar22 = pUVar11;
                            if (*(uint *)&pIVar21[1].monitor < 5) goto label_040b7f83;
                            data_00 = __this_03;
                            pUVar22 = (UI_LoadingMenu_o *)0x0;
                            if (*(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor !=
                                (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
                              aJSON = Utility_Algorithms_CompressionAlgorithm__DecompressString
                                                (*(Utility_Algorithms_CompressionAlgorithm_o **)
                                                  TypeInfo_DataCompressors[1].monitor,
                                                 (System_Byte_array *)pIVar21[4].klass,0x1000,0xa00000,
                                                 (MethodInfo *)0x0);
                              pSVar13 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
                              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              pvVar4 = TypeInfo_MapTransfer[1].monitor;
                              *(SimpleJSONFixed_JSONNode_o **)((long)pvVar4 + 0x28) = pSVar13;
                              il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x28,pSVar13);
                              pSVar14 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar14,MethodInfo_List_1_System_Byte);
                              pvVar4 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar4 + 0x30) = pSVar14;
                              il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x30,pSVar14);
                              pSVar14 = (System_Collections_Generic_List_byte__o *)
                                        il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
                              System_Collections_Generic_List_byte____ctor(pSVar14,MethodInfo_List_1_System_Byte);
                              pvVar4 = TypeInfo_MapTransfer[1].monitor;
                              *(System_Collections_Generic_List_byte__o **)((long)pvVar4 + 0x40) = pSVar14;
                              pSVar15 = (System_Collections_IEnumerator_o *)
                                        il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x40,pSVar14);
                              return pSVar15;
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
        else {
          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar15 = TypeInfo_MapTransfer[1].monitor;
            cVar1 = *(char *)((long)&pSVar15[2].klass + 1);
            __this_03 = pSVar17;
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar15 = TypeInfo_MapTransfer[1].monitor;
              __this_03 = pSVar17;
            }
          }
          else {
            cVar1 = *(char *)((long)&pSVar15[2].klass + 1);
            __this_03 = pSVar17;
          }
          if (cVar6 == cVar1) {
            pUVar22 = TypeInfo_MapTransfer;
            if (*(uint *)&pIVar21[1].monitor < 2) goto label_040b7f83;
            pSVar16 = pSVar15[3].klass;
            if (pSVar16 != (System_Collections_IEnumerator_c *)0x0) {
label_040b7c7c:
              System_Collections_Generic_List_byte___AddRange
                        ((System_Collections_Generic_List_byte__o *)pSVar16,pIVar21[2].monitor,MethodInfo_Void_AddRange);
              return extraout_RAX_03;
            }
            data_00 = __this_03;
            pUVar22 = (UI_LoadingMenu_o *)0x0;
          }
          else {
            cVar1 = *(char *)((long)&pSVar15[2].klass + 2);
            if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar15 = TypeInfo_MapTransfer[1].monitor;
            }
            if (cVar6 == cVar1) {
              pUVar22 = TypeInfo_MapTransfer;
              if (*(uint *)&pIVar21[1].monitor < 2) goto label_040b7f83;
              pSVar16 = pSVar15[4].klass;
              data_00 = __this_03;
              pUVar22 = (UI_LoadingMenu_o *)0x0;
              if (pSVar16 != (System_Collections_IEnumerator_c *)0x0) goto label_040b7c7c;
            }
            else {
              if (cVar6 != *(char *)((long)&pSVar15[2].klass + 3)) {
                return pSVar15;
              }
              if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                pSVar15 = TypeInfo_MapTransfer[1].monitor;
              }
              pSVar16 = pSVar15[3].klass;
              data_00 = __this_03;
              pUVar22 = TypeInfo_MapTransfer;
              if (pSVar16 != (System_Collections_IEnumerator_c *)0x0) {
                if (*(int *)&(pSVar16->_1).namespaze < 1) {
label_040b7dc3:
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                  data_00 = __this_03;
                  pUVar22 = TypeInfo_MapTransfer;
                  if (lVar9 != 0) {
                    if (*(int *)(lVar9 + 0x18) < 1) {
label_040b7ef0:
                      pUVar22 = (UI_LoadingMenu_o *)0x0;
                      pSVar18 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                      if (*(uint *)&pIVar21[1].monitor < 2) goto label_040b7f83;
                      data_00 = __this_03;
                      if (pSVar18 == (System_Text_Encoding_o *)0x0) goto label_040b7f7e;
                      uVar19 = (*(pSVar18->klass->vtable)._35_GetString.methodPtr)
                                         (pSVar18,pIVar21[2].monitor,
                                          (pSVar18->klass->vtable)._35_GetString.method);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pvVar4 = TypeInfo_MapTransfer[1].monitor;
                      *(undefined8 *)((long)pvVar4 + 8) = uVar19;
                      il2cpp_runtime_helper_022b4080((long)pvVar4 + 8,uVar19);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if (g_data_057ac4d9 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&"CustomMapHash");
                        g_data_057ac4d9 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      *(undefined1 *)((long)TypeInfo_MapManager[1].monitor + 0x18) = 1;
                      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      player_00 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      targetPlayer = "CustomMapHash";
                      PhotonExtensions__SetCustomProperty
                                (player_00,(System_String_o *)"CustomMapHash",
                                 *(Il2CppObject **)((long)TypeInfo_MapTransfer[1].monitor + 8),(MethodInfo *)0x0);
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      if (((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) && (*(long *)(lVar9 + 0x30) != 0))
                      {
                        customAssets = *(System_Collections_Generic_List_string__o **)
                                        (*(long *)(lVar9 + 0x28) + 0x10);
                        objects = *(System_Collections_Generic_List_MapScriptBaseObject__o **)
                                   (*(long *)(lVar9 + 0x30) + 0x10);
                        options = *(Map_MapScriptOptions_o **)(lVar9 + 0x20);
                        weather = *(Settings_WeatherSet_o **)(lVar9 + 0x38);
                        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        Map_MapLoader__StartLoadObjects
                                  (customAssets,objects,options,weather,0,(MethodInfo *)0x0);
                        return extraout_RAX;
                      }
                      il2cpp_runtime_helper_022b2c90();
                      if (g_data_057ac4da == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                        il2cpp_runtime_helper_023445d0(&"Custom");
                        il2cpp_runtime_helper_023445d0(&"LoadBuiltinMapRPC");
                        g_data_057ac4da = '\x01';
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_040b426c;
label_040b4325:
                        il2cpp_runtime_helper_02337ed0();
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        pSVar15 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar7);
                        cVar6 = (char)bVar7;
                      }
                      else {
                        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_040b4325;
label_040b426c:
                        bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
                        pSVar15 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar7);
                        cVar6 = (char)bVar7;
                      }
                      if (cVar6 == '\0') {
                        return pSVar15;
                      }
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        pSVar15 = TypeInfo_MapTransfer[1].monitor;
                        cVar6 = *(char *)&pSVar15->klass;
                        method_00 = "Custom";
                      }
                      else {
                        pSVar15 = TypeInfo_MapTransfer[1].monitor;
                        cVar6 = *(char *)&pSVar15->klass;
                        method_00 = "Custom";
                      }
                      if (cVar6 == '\0') {
                        "Custom" = method_00;
                        return pSVar15;
                      }
                      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
                      "Custom" = method_00;
                      if (((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x38), lVar9 == 0)) ||
                         (*(long *)(lVar9 + 0x20) == 0)) {
label_040b44af:
                        il2cpp_runtime_helper_022b2c90();
                      }
                      else {
                        bVar7 = System_String__op_Equality
                                          (*(System_String_o **)(*(long *)(lVar9 + 0x20) + 0x18),
                                           (System_String_o *)method_00,(MethodInfo *)0x0);
                        if ((char)bVar7 != '\0') {
                          if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          Map_MapTransfer__Transfer(targetPlayer,method_00);
                          return extraout_RAX_00;
                        }
                        __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
                        parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
                        if ((*(long *)(lVar9 + 0x20) == 0) || (parameters == (System_Object_array *)0x0))
                        goto label_040b44af;
                        pIVar21 = *(Il2CppObject **)(*(long *)(lVar9 + 0x20) + 0x18);
                        if ((pIVar21 != (Il2CppObject *)0x0) &&
                           (lVar8 = il2cpp_runtime_helper_023051f0(pIVar21), lVar8 == 0)) goto label_040b44b9;
                        if ((int)parameters->max_length != 0) {
                          parameters->m_Items[0] = pIVar21;
                          il2cpp_runtime_helper_022b4080(parameters->m_Items);
                          if (*(long *)(lVar9 + 0x28) != 0) {
                            pIVar21 = *(Il2CppObject **)(*(long *)(lVar9 + 0x28) + 0x18);
                            if ((pIVar21 != (Il2CppObject *)0x0) &&
                               (lVar9 = il2cpp_runtime_helper_023051f0(pIVar21), lVar9 == 0)) goto label_040b44b9;
                            if ((uint)parameters->max_length < 2) goto label_040b44b4;
                            parameters->m_Items[1] = pIVar21;
                            il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
                            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                              Photon_Pun_PhotonView__RPC_3efa220
                                        (__this_00,"LoadBuiltinMapRPC",targetPlayer,parameters,(MethodInfo *)0x0);
                              return extraout_RAX_01;
                            }
                          }
                          goto label_040b44af;
                        }
                      }
label_040b44b4:
                      il2cpp_runtime_helper_022b2ca0();
label_040b44b9:
                      pSVar10 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_0231b270();
                      il2cpp_runtime_helper_022b2b10();
                      if (g_data_057ac4f5 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
                        g_data_057ac4f5 = '\x01';
                        iVar2 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      else {
                        iVar2 = *(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4);
                      }
                      if (iVar2 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        __this_01 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar22 = TypeInfo_MapTransfer;
                      }
                      else {
                        __this_01 = *(UnityEngine_MonoBehaviour_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x18);
                        pUVar22 = TypeInfo_MapTransfer;
                      }
                      TypeInfo_MapTransfer = pUVar22;
                      if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
                        if (g_data_057ac4f8 == '\0') {
                          il2cpp_runtime_helper_023445d0(&TypeInfo_TransferMapData_d__19);
                          g_data_057ac4f8 = '\x01';
                        }
                        pUVar11 = (UI_LoadingMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferMapData_d__19);
                        pUVar22 = pUVar11;
                        System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
                        *(undefined4 *)&(pUVar11->fields).m_CachedPtr = 0;
                        if (pUVar11 != (UI_LoadingMenu_o *)0x0) {
                          (pUVar11->fields)._popups = pSVar10;
                          il2cpp_runtime_helper_022b4080(&(pUVar11->fields)._popups,pSVar10);
                          pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                              (__this_01,(System_Collections_IEnumerator_o *)pUVar11,
                                               (MethodInfo *)0x0);
                          return (System_Collections_IEnumerator_o *)pUVar12;
                        }
                      }
                      il2cpp_runtime_helper_022b2c90();
                      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pUVar22,(MethodInfo *)0x0);
                      return extraout_RAX_02;
                    }
                    if (*(int *)((long)&TypeInfo_DataCompressors[1].fields.MessagePopup + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
                      __this_04 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) != 0) goto label_040b7e19;
label_040b7e5f:
                      il2cpp_runtime_helper_02337ed0();
                      pUVar22 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar17 = MethodInfo_Byte_ToArray;
                    }
                    else {
                      __this_04 = *(Utility_Algorithms_CompressionAlgorithm_o **)TypeInfo_DataCompressors[1].monitor;
                      if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) goto label_040b7e5f;
label_040b7e19:
                      pUVar22 = *(UI_LoadingMenu_o **)((long)TypeInfo_MapTransfer[1].monitor + 0x40);
                      pSVar17 = MethodInfo_Byte_ToArray;
                    }
                    data_00 = __this_03;
                    MethodInfo_Byte_ToArray = pSVar17;
                    if ((pUVar22 != (UI_LoadingMenu_o *)0x0) &&
                       (data = System_Collections_Generic_List_byte___ToArray
                                         ((System_Collections_Generic_List_byte__o *)pUVar22,
                                          (MethodInfo_3581700 *)pSVar17), data_00 = pSVar17,
                       __this_04 != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
                      __this_03 = (System_Byte_array *)
                                  Utility_Algorithms_CompressionAlgorithm__DecompressString
                                            (__this_04,data,0x1000,0xa00000,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                      pUVar22 = (UI_LoadingMenu_o *)0x0;
                      data_00 = data;
                      if (lVar9 != 0) {
                        *(System_Byte_array **)(lVar9 + 0x40) = __this_03;
                        il2cpp_runtime_helper_022b4080();
                        goto label_040b7ef0;
                      }
                    }
                  }
                }
                else {
                  if (*(int *)((long)&TypeInfo_MapTransfer[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar16 = *(System_Collections_IEnumerator_c **)((long)TypeInfo_MapTransfer[1].monitor + 0x30);
                    data_00 = __this_03;
                    if (pSVar16 == (System_Collections_IEnumerator_c *)0x0) goto label_040b7f7e;
                  }
                  pSVar17 = System_Collections_Generic_List_byte___ToArray
                                      ((System_Collections_Generic_List_byte__o *)pSVar16,
                                       (MethodInfo_3581700 *)MethodInfo_Byte_ToArray);
                  data_00 = *(System_Byte_array **)((long)TypeInfo_MapTransfer[1].monitor + 0x28);
                  deltaRows = *(int32_t *)((long)TypeInfo_MapTransfer[1].monitor + 0x24);
                  if (*(int *)(TypeInfo_CSVCompression + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  __this_03 = (System_Byte_array *)
                              Utility_CSVCompression__Decompress
                                        (pSVar17,(SimpleJSONFixed_JSONNode_o *)data_00,deltaRows,0x3b,0x2c,
                                         (MethodInfo *)0x0);
                  if (*(int *)((long)&TypeInfo_MapManager[1].fields.MessagePopup + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar9 = *(long *)((long)TypeInfo_MapManager[1].monitor + 8);
                  pUVar22 = TypeInfo_MapManager;
                  if (lVar9 != 0) {
                    plVar5 = *(long **)(lVar9 + 0x30);
                    pUVar22 = (UI_LoadingMenu_o *)0x0;
                    if (plVar5 != (long *)0x0) {
                      (**(code **)(*plVar5 + 0x1c8))(plVar5,__this_03,*(undefined8 *)(*plVar5 + 0x1d0));
                      goto label_040b7dc3;
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
label_040b7f7e:
  __this_03 = data_00;
  il2cpp_runtime_helper_022b2c90();
label_040b7f83:
  uVar20 = SUB84(__this_03,0);
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar22,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar22->fields).m_CachedPtr = uVar20;
  return extraout_RAX_04;
}


// Map.MapTransfer$$.ctor
// il2cpp: void Map_MapTransfer___ctor (Map_MapTransfer_o* __this, const MethodInfo* method);
// 0x40b7fb0

void Map_MapTransfer___ctor(Map_MapTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.MapTransfer$$.cctor
// il2cpp: void Map_MapTransfer___cctor (const MethodInfo* method);
// 0x40b7fc0

void Map_MapTransfer___cctor(MethodInfo *method)

{
  if (g_data_057ac4f9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057ac4f9 = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_MapTransfer + 0xb8) + 0x20) = 0x1603020100;
  return;
}


