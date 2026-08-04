// Type: Map.CustomLogicAddonTransfer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/CustomLogicAddonTransfer.cs
// Prior real C# source: none
// --------------------------------

// Map.CustomLogicAddonTransfer.<>c$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___cctor (const MethodInfo* method);
// 0x4099000

void Map_CustomLogicAddonTransfer___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ac45c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac45c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___c___ctor (Map_CustomLogicAddonTransfer___c_o* __this, const MethodInfo* method);
// 0x4099070

void Map_CustomLogicAddonTransfer___c___ctor(Map_CustomLogicAddonTransfer___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer.<>c$$<BuildBundleJson>b__12_0
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__12_0 (Map_CustomLogicAddonTransfer___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x4099080

System_String_o *
Map_CustomLogicAddonTransfer___c___BuildBundleJson_b__12_0
          (Map_CustomLogicAddonTransfer___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ac45d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ac45d = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  return pSVar1;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__16___ctor (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4098f60

void Map_CustomLogicAddonTransfer__TransferAddonData_d__16___ctor
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$System.IDisposable.Dispose
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_IDisposable_Dispose (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, const MethodInfo* method);
// 0x40990b0

void Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_IDisposable_Dispose
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,MethodInfo *method)

{
  return;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$MoveNext
// il2cpp: bool Map_CustomLogicAddonTransfer__TransferAddonData_d__16__MoveNext (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, const MethodInfo* method);
// 0x40990c0

bool_conflict
Map_CustomLogicAddonTransfer__TransferAddonData_d__16__MoveNext
          (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,MethodInfo *method)

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
  
  if (g_data_057ac45e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    il2cpp_runtime_helper_023445d0(&"TransferAddonBundleRPC");
    g_data_057ac45e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar6;
    iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    iVar6 = 0;
    iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
  if (lVar4 == 0) {
label_040993c1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(lVar4 + 0x18) <= iVar6) {
      return 0;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (__this->fields).player;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,3);
    if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
    if ((__this_00 == (System_Collections_Generic_List_object__o *)0x0) ||
       (pIVar3 = System_Collections_Generic_List_object___get_Item
                           (__this_00,(__this->fields)._i_5__2,MethodInfo_Byte_get_Item),
       parameters == (System_Object_array *)0x0)) goto label_040993c1;
    if ((pIVar3 != (Il2CppObject *)0x0) &&
       (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
    goto label_040993cb;
    pPStack_38 = pPVar2;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar3;
      il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar3);
      iStack_3c = (__this->fields)._i_5__2;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_3c);
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
      goto label_040993cb;
      if (1 < (uint)parameters->max_length) {
        parameters->m_Items[1] = pIVar3;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pIVar3);
        lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
        if (lVar4 != 0) {
          uStack_40 = *(undefined4 *)(lVar4 + 0x18);
          pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_40);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3,(((parameters->obj).klass)->_1).element_class), lVar4 == 0))
          goto label_040993cb;
          pPVar2 = pPStack_38;
          if ((uint)parameters->max_length < 3) goto label_040993c6;
          parameters->m_Items[2] = pIVar3;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pIVar3);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_3efa220(pPVar2,"TransferAddonBundleRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
            UnityEngine_WaitForSeconds___ctor(__this_01,0.5,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
        goto label_040993c1;
      }
    }
  }
label_040993c6:
  il2cpp_runtime_helper_022b2ca0();
label_040993cb:
  lVar4 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(lVar4,0);
  return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, const MethodInfo* method);
// 0x40993e0

Il2CppObject *
Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_IEnumerator_Reset (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, const MethodInfo* method);
// 0x40993f0

void Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_IEnumerator_Reset
               (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,MethodInfo *method)

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


// Map.CustomLogicAddonTransfer.<TransferAddonData>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_IEnumerator_get_Current (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o* __this, const MethodInfo* method);
// 0x4099430

Il2CppObject *
Map_CustomLogicAddonTransfer__TransferAddonData_d__16__System_Collections_IEnumerator_get_Current
          (Map_CustomLogicAddonTransfer__TransferAddonData_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Map.CustomLogicAddonTransfer$$Init
// il2cpp: void Map_CustomLogicAddonTransfer__Init (const MethodInfo* method);
// 0x40975e0

void Map_CustomLogicAddonTransfer__Init(MethodInfo *method)

{
  long lVar1;
  Il2CppObject *pIVar2;
  Events_OnPreLoadScene_o *value;
  
  if (g_data_057ac452 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicAddonTransfer_CreateSingleton_CustomLogicAddo);
    g_data_057ac452 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x10),MethodInfo_CustomLogicAddonTransfer_CreateSingleton_CustomLogicAddo);
  lVar1 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
  *(Il2CppObject **)(lVar1 + 0x10) = pIVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$OnPreLoadScene
// il2cpp: void Map_CustomLogicAddonTransfer__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x40976b0

void Map_CustomLogicAddonTransfer__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_MonoBehaviour_o *__this;
  Il2CppMethodPointer pIVar3;
  long lVar4;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  Il2CppRGCTXData *__this_05;
  MethodInfo *pMVar6;
  Photon_Realtime_Player_array *pPVar7;
  System_Object_array *parameters;
  SimpleJSONFixed_JSONObject_o *__this_06;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_07;
  System_String_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  long *plVar10;
  long *unaff_RBP;
  ulong unaff_R13;
  Photon_Realtime_Player_array *unaff_R14;
  Photon_Realtime_Player_o *unaff_R15;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  System_String_o *name;
  System_String_o *pSVar14;
  undefined1 auStack_88 [16];
  System_String_o *pSStack_78;
  Il2CppRGCTXData *pIStack_70;
  _union_249689 _Stack_68;
  ulong uStack_60;
  Photon_Realtime_Player_array *pPStack_58;
  Photon_Realtime_Player_o *pPStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  MethodInfo **ppMStack_38;
  
  if (g_data_057ac453 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057ac453 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer + 0x10);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer + 0x10);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
    pIVar3 = TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer;
    *pIVar3 = (Il2CppMethodPointer)0x0;
    *(undefined8 *)(pIVar3 + 8) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080(pIVar3 + 8);
    return;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  ppMStack_38 = &TypeInfo_CustomLogicAddonTransfer;
  if (g_data_057ac454 == '\0') {
    plStack_48 = (long *)0x4097780;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    plStack_48 = (long *)0x409778c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    plStack_48 = (long *)0x4097798;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    plStack_48 = (long *)0x40977a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    plStack_48 = (long *)0x40977b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    plStack_48 = (long *)0x40977bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    plStack_48 = (long *)0x40977c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    plStack_48 = (long *)0x40977d4;
    il2cpp_runtime_helper_023445d0(&"LoadCachedAddonBundleRPC");
    plStack_48 = (long *)0x40977e0;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac454 = '\x01';
  }
  pMVar6 = TypeInfo_CustomLogicAddonTransfer;
  if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
    plStack_48 = (long *)0x4097800;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_48 = (long *)0x4097805;
  __this_05 = (Il2CppRGCTXData *)Map_CustomLogicAddonTransfer__BuildBundleJson(pMVar6);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    plStack_48 = (long *)0x4097820;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_48 = (long *)0x409782a;
  pMVar6 = (MethodInfo *)Utility_Util__CreateMD5((System_String_o *)__this_05,(MethodInfo *)0x0);
  pIVar3 = TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer;
  *(MethodInfo **)(pIVar3 + 8) = pMVar6;
  plStack_48 = (long *)0x4097845;
  il2cpp_runtime_helper_022b4080(pIVar3 + 8);
  plStack_48 = (long *)0x409784d;
  Map_CustomLogicAddonTransfer__CreateTransferData((System_String_o *)__this_05,pMVar6);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    plStack_48 = (long *)0x4097865;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_48 = (long *)0x409786f;
  CustomLogic_CustomLogicManager__ApplyAddonBundle((System_String_o *)__this_05,(MethodInfo *)0x0);
  plStack_48 = (long *)0x4097876;
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    plStack_48 = (long *)0x409788e;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_48 = (long *)0x4097895;
  pPVar7 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  pPStack_58 = unaff_R14;
  if (pPVar7 != (Photon_Realtime_Player_array *)0x0) {
    if ((int)pPVar7->max_length < 1) {
label_040979cc:
      if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
        plStack_48 = (long *)0x40979de;
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    unaff_R13 = 0;
    unaff_RBP = &TypeInfo_PlayerProperty;
    pPStack_58 = pPVar7;
    if ((pPVar7->max_length & 0xffffffff) != 0) {
      do {
        unaff_R15 = pPVar7->m_Items[unaff_R13];
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          plStack_48 = (long *)0x409791f;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_48 = (long *)0x4097942;
        __this_05 = (Il2CppRGCTXData *)
                    PhotonExtensions__GetStringProperty
                              (unaff_R15,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38),
                               "",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
          plStack_48 = (long *)0x4097957;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar6 = *(MethodInfo **)(TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer + 8);
        plStack_48 = (long *)0x4097970;
        bVar5 = System_String__op_Inequality
                          ((System_String_o *)__this_05,(System_String_o *)pMVar6,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          __this_05 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          plStack_48 = (long *)0x409799d;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (__this_05 == (Il2CppRGCTXData *)0x0) goto label_04097a00;
          plStack_48 = (long *)0x40979bd;
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)__this_05,"LoadCachedAddonBundleRPC",unaff_R15,parameters,(MethodInfo *)0x0)
          ;
        }
        else {
          if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
            plStack_48 = (long *)0x40979c7;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_48 = (long *)0x40978e9;
          Map_CustomLogicAddonTransfer__Transfer(unaff_R15,pMVar6);
        }
        unaff_R13 = unaff_R13 + 1;
        uVar2 = (uint)pPVar7->max_length;
        if ((long)(int)uVar2 <= (long)unaff_R13) goto label_040979cc;
      } while (unaff_R13 < uVar2);
    }
    plStack_48 = (long *)0x4097a00;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04097a00:
  plStack_48 = (long *)0x4097a05;
  il2cpp_runtime_helper_022b2c90();
  _Stack_68.genericMethod = &TypeInfo_CustomLogicAddonTransfer;
  pIStack_70 = __this_05;
  uStack_60 = unaff_R13;
  pPStack_50 = unaff_R15;
  plStack_48 = unaff_RBP;
  if (g_data_057ac456 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_BuildBundleJson_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac456 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  name = (System_String_o *)0x0;
  __this_06 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_06,(MethodInfo *)0x0);
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar4 == 0) goto label_04097dde;
  lVar4 = *(long *)(lVar4 + 0x38);
  if (lVar4 == 0) goto label_04097dde;
  lVar4 = *(long *)(lVar4 + 0x48);
  if (lVar4 == 0) goto label_04097dde;
  source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar4 + 0x18);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
    System_Func_object__object____ctor();
    lVar4 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar4 + 8) = selector;
    il2cpp_runtime_helper_022b4080(lVar4 + 8,selector);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
  __this_07 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String_ToList_String);
  if (__this_07 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04097dde;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_88,
             (System_Collections_Generic_List_object__o *)__this_07,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_88._0_8_;
  pIVar13 = (Il2CppType *)auStack_88._8_8_;
  if (__this_06 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    do {
      do {
        name = pSStack_78;
        __this_01.fields._8_8_ = pIVar13;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
        __this_01.fields._current = (Il2CppObject *)name;
        pMVar6 = MethodInfo_Boolean_MoveNext;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
        if ((char)bVar5 == '\0') goto label_04097da5;
        pSVar14 = name;
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = Map_BuiltinLevels__IsAddonBuiltin(name,pMVar6);
        pSStack_78 = pSVar14;
      } while ((char)bVar5 != '\0');
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = Map_BuiltinLevels__LoadAddon(name,pMVar6);
      bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
      pSStack_78 = pSVar14;
    } while ((char)bVar5 != '\0');
    name = pSVar14;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      name = pSVar14;
    }
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (name = pSStack_78, __this_00.fields._8_8_ = pIVar13,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
          __this_00.fields._current = (Il2CppObject *)name, pMVar6 = MethodInfo_Boolean_MoveNext,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar5 != '\0') {
      pSVar14 = name;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = Map_BuiltinLevels__IsAddonBuiltin(name,pMVar6);
      pSStack_78 = pSVar14;
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = Map_BuiltinLevels__LoadAddon(name,pMVar6);
        bVar5 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
        pSStack_78 = pSVar14;
        if ((char)bVar5 == '\0') {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this_06->klass->vtable)._8_set_Item.methodPtr)(__this_06,name,pSVar9);
          pSStack_78 = pSVar14;
        }
      }
    }
  }
label_04097da5:
  __this_02.fields._8_8_ = pIVar13;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_02.fields._current = (Il2CppObject *)name;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  do {
    if (__this_06 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_06->klass->vtable)._3_ToString.methodPtr)
                (__this_06,(__this_06->klass->vtable)._3_ToString.method);
      return;
    }
label_04097dde:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ != 1) goto label_04097eed;
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar4 = *plVar10;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_03.fields._current = (Il2CppObject *)name;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  } while (lVar4 == 0);
  il2cpp_runtime_helper_022fefe0(lVar4);
label_04097eed:
  __this_04.fields._8_8_ = pIVar13;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_04.fields._current = (Il2CppObject *)name;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  _Unwind_Resume(auVar11._0_8_);
}


// Map.CustomLogicAddonTransfer$$Start
// il2cpp: void Map_CustomLogicAddonTransfer__Start (const MethodInfo* method);
// 0x4097760

void Map_CustomLogicAddonTransfer__Start(MethodInfo *method)

{
  uint uVar1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  Il2CppRGCTXData *__this_04;
  MethodInfo *pMVar5;
  Photon_Realtime_Player_array *pPVar6;
  System_Object_array *parameters;
  SimpleJSONFixed_JSONObject_o *__this_05;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_06;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  long *unaff_RBP;
  ulong unaff_R13;
  Photon_Realtime_Player_array *unaff_R14;
  Photon_Realtime_Player_o *unaff_R15;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  System_String_o *name;
  System_String_o *pSVar13;
  undefined1 auStack_80 [16];
  System_String_o *pSStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_249689 _Stack_60;
  ulong uStack_58;
  Photon_Realtime_Player_array *pPStack_50;
  Photon_Realtime_Player_o *pPStack_48;
  long *plStack_40;
  
  if (g_data_057ac454 == '\0') {
    plStack_40 = (long *)0x4097780;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    plStack_40 = (long *)0x409778c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    plStack_40 = (long *)0x4097798;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    plStack_40 = (long *)0x40977a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    plStack_40 = (long *)0x40977b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    plStack_40 = (long *)0x40977bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    plStack_40 = (long *)0x40977c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    plStack_40 = (long *)0x40977d4;
    il2cpp_runtime_helper_023445d0(&"LoadCachedAddonBundleRPC");
    plStack_40 = (long *)0x40977e0;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac454 = '\x01';
  }
  pMVar5 = TypeInfo_CustomLogicAddonTransfer;
  if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
    plStack_40 = (long *)0x4097800;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_40 = (long *)0x4097805;
  __this_04 = (Il2CppRGCTXData *)Map_CustomLogicAddonTransfer__BuildBundleJson(pMVar5);
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    plStack_40 = (long *)0x4097820;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_40 = (long *)0x409782a;
  pMVar5 = (MethodInfo *)Utility_Util__CreateMD5((System_String_o *)__this_04,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer;
  *(MethodInfo **)(pIVar2 + 8) = pMVar5;
  plStack_40 = (long *)0x4097845;
  il2cpp_runtime_helper_022b4080(pIVar2 + 8);
  plStack_40 = (long *)0x409784d;
  Map_CustomLogicAddonTransfer__CreateTransferData((System_String_o *)__this_04,pMVar5);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    plStack_40 = (long *)0x4097865;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_40 = (long *)0x409786f;
  CustomLogic_CustomLogicManager__ApplyAddonBundle((System_String_o *)__this_04,(MethodInfo *)0x0);
  plStack_40 = (long *)0x4097876;
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    plStack_40 = (long *)0x409788e;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_40 = (long *)0x4097895;
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerListOthers((MethodInfo *)0x0);
  pPStack_50 = unaff_R14;
  if (pPVar6 != (Photon_Realtime_Player_array *)0x0) {
    if ((int)pPVar6->max_length < 1) {
label_040979cc:
      if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
        plStack_40 = (long *)0x40979de;
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    unaff_R13 = 0;
    unaff_RBP = &TypeInfo_PlayerProperty;
    pPStack_50 = pPVar6;
    if ((pPVar6->max_length & 0xffffffff) != 0) {
      do {
        unaff_R15 = pPVar6->m_Items[unaff_R13];
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          plStack_40 = (long *)0x409791f;
          il2cpp_runtime_helper_02337ed0();
        }
        plStack_40 = (long *)0x4097942;
        __this_04 = (Il2CppRGCTXData *)
                    PhotonExtensions__GetStringProperty
                              (unaff_R15,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38),
                               "",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
          plStack_40 = (long *)0x4097957;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar5 = *(MethodInfo **)(TypeInfo_CustomLogicAddonTransfer[2].virtualMethodPointer + 8);
        plStack_40 = (long *)0x4097970;
        bVar4 = System_String__op_Inequality
                          ((System_String_o *)__this_04,(System_String_o *)pMVar5,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          __this_04 = (Il2CppRGCTXData *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
          plStack_40 = (long *)0x409799d;
          parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
          if (__this_04 == (Il2CppRGCTXData *)0x0) goto label_04097a00;
          plStack_40 = (long *)0x40979bd;
          Photon_Pun_PhotonView__RPC_3efa220
                    ((Photon_Pun_PhotonView_o *)__this_04,"LoadCachedAddonBundleRPC",unaff_R15,parameters,(MethodInfo *)0x0)
          ;
        }
        else {
          if (*(int *)((long)&TypeInfo_CustomLogicAddonTransfer[2].parameters + 4) == 0) {
            plStack_40 = (long *)0x40979c7;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_40 = (long *)0x40978e9;
          Map_CustomLogicAddonTransfer__Transfer(unaff_R15,pMVar5);
        }
        unaff_R13 = unaff_R13 + 1;
        uVar1 = (uint)pPVar6->max_length;
        if ((long)(int)uVar1 <= (long)unaff_R13) goto label_040979cc;
      } while (unaff_R13 < uVar1);
    }
    plStack_40 = (long *)0x4097a00;
    il2cpp_runtime_helper_022b2ca0();
  }
label_04097a00:
  plStack_40 = (long *)0x4097a05;
  il2cpp_runtime_helper_022b2c90();
  _Stack_60.genericMethod = &TypeInfo_CustomLogicAddonTransfer;
  pIStack_68 = __this_04;
  uStack_58 = unaff_R13;
  pPStack_48 = unaff_R15;
  plStack_40 = unaff_RBP;
  if (g_data_057ac456 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_BuildBundleJson_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac456 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  name = (System_String_o *)0x0;
  __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_05,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar3 == 0) goto label_04097dde;
  lVar3 = *(long *)(lVar3 + 0x38);
  if (lVar3 == 0) goto label_04097dde;
  lVar3 = *(long *)(lVar3 + 0x48);
  if (lVar3 == 0) goto label_04097dde;
  source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar3 + 0x18);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
    System_Func_object__object____ctor();
    lVar3 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
    il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
  __this_06 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String_ToList_String);
  if (__this_06 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04097dde;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
             (System_Collections_Generic_List_object__o *)__this_06,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_80._0_8_;
  pIVar12 = (Il2CppType *)auStack_80._8_8_;
  if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    do {
      do {
        name = pSStack_70;
        __this_00.fields._8_8_ = pIVar12;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
        __this_00.fields._current = (Il2CppObject *)name;
        pMVar5 = MethodInfo_Boolean_MoveNext;
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60);
        if ((char)bVar4 == '\0') goto label_04097da5;
        pSVar13 = name;
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = Map_BuiltinLevels__IsAddonBuiltin(name,pMVar5);
        pSStack_70 = pSVar13;
      } while ((char)bVar4 != '\0');
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = Map_BuiltinLevels__LoadAddon(name,pMVar5);
      bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
      pSStack_70 = pSVar13;
    } while ((char)bVar4 != '\0');
    name = pSVar13;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      name = pSVar13;
    }
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (name = pSStack_70, __this.fields._8_8_ = pIVar12,
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
          __this.fields._current = (Il2CppObject *)name, pMVar5 = MethodInfo_Boolean_MoveNext,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff60), (char)bVar4 != '\0') {
      pSVar13 = name;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = Map_BuiltinLevels__IsAddonBuiltin(name,pMVar5);
      pSStack_70 = pSVar13;
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = Map_BuiltinLevels__LoadAddon(name,pMVar5);
        bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
        pSStack_70 = pSVar13;
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
          (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,name,pSVar8);
          pSStack_70 = pSVar13;
        }
      }
    }
  }
label_04097da5:
  __this_01.fields._8_8_ = pIVar12;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_01.fields._current = (Il2CppObject *)name;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  do {
    if (__this_05 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_05->klass->vtable)._3_ToString.methodPtr)
                (__this_05,(__this_05->klass->vtable)._3_ToString.method);
      return;
    }
label_04097dde:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) goto label_04097eed;
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_02.fields._current = (Il2CppObject *)name;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04097eed:
  __this_03.fields._8_8_ = pIVar12;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
  __this_03.fields._current = (Il2CppObject *)name;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar10._0_8_);
}


// Map.CustomLogicAddonTransfer$$Transfer
// il2cpp: void Map_CustomLogicAddonTransfer__Transfer (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4098830

void Map_CustomLogicAddonTransfer__Transfer(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_MonoBehaviour_o *__this;
  char cVar3;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057ac455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057ac455 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x10);
  }
  else {
    __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x10);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac45a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferAddonData_d__16);
      g_data_057ac45a = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferAddonData_d__16);
    method = (MethodInfo *)0x0;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)player;
      il2cpp_runtime_helper_022b4080(__this_00 + 2,player);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac45a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferAddonData_d__16);
    g_data_057ac45a = '\x01';
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferAddonData_d__16);
  pSVar7 = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  (pSVar5->fields)._stringLength = 0;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5[1].monitor = method;
    il2cpp_runtime_helper_022b4080(&pSVar5[1].monitor,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    g_data_057ac473 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    method_01 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = Map_BuiltinLevels__GetBuiltinAddons(method_01);
    if (pSVar6 == (System_String_array *)0x0) {
label_04098a3b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac470 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        il2cpp_runtime_helper_023445d0(&"/");
        il2cpp_runtime_helper_023445d0(&".cl");
        il2cpp_runtime_helper_023445d0(&"Logic");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac470 = '\x01';
      }
      method_00 = "";
      bVar4 = System_String__op_Equality
                        ((System_String_o *)method_01,(System_String_o *)"",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar4 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar3 = (char)bVar4;
        }
        else {
          bVar4 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar3 = (char)bVar4;
        }
        if (cVar3 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
          pSVar5 = System_String__Concat_3ae5ba0((System_String_o *)method_01,"Logic",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__TryLoadText(pSVar7,pSVar5,(MethodInfo *)0x0);
          return;
        }
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = System_String__Concat_3af7470
                           (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20),"/",
                            (System_String_o *)method_01,".cl",(MethodInfo *)0x0);
        bVar4 = System_IO_File__Exists(pSVar7,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          System_IO_File__ReadAllText(pSVar7,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
    uVar8 = 0;
    do {
      uVar2 = (uint)pSVar6->max_length;
      if ((long)(int)uVar2 <= (long)uVar8) {
        return;
      }
      if (uVar2 <= uVar8) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04098a3b;
      }
      method_01 = (MethodInfo *)pSVar6->m_Items[uVar8];
      bVar4 = System_String__op_Equality((System_String_o *)method_01,pSVar7,(MethodInfo *)0x0);
      uVar8 = uVar8 + 1;
    } while ((char)bVar4 == '\0');
  }
  return;
}


// Map.CustomLogicAddonTransfer$$BuildBundleJson
// il2cpp: System_String_o* Map_CustomLogicAddonTransfer__BuildBundleJson (const MethodInfo* method);
// 0x4097a10

System_String_o * Map_CustomLogicAddonTransfer__BuildBundleJson(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *__this_04;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_05;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  MethodInfo *pMVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ac456 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_BuildBundleJson_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ac456 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  pSVar10 = (System_String_o *)0x0;
  __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (lVar1 == 0) goto label_04097dde;
  lVar1 = *(long *)(lVar1 + 0x38);
  if (lVar1 == 0) goto label_04097dde;
  lVar1 = *(long *)(lVar1 + 0x48);
  if (lVar1 == 0) goto label_04097dde;
  source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar1 + 0x18);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
    System_Func_object__object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,selector);
  }
  source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
  __this_05 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String_ToList_String);
  if (__this_05 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_04097dde;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar9 = (Il2CppType *)local_48._8_8_;
  if (__this_04 == (SimpleJSONFixed_JSONObject_o *)0x0) {
    do {
      do {
        pSVar10 = local_38;
        __this_00.fields._8_8_ = pIVar9;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
        __this_00.fields._current = (Il2CppObject *)pSVar10;
        pMVar6 = MethodInfo_Boolean_MoveNext;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') goto label_04097da5;
        pSVar11 = pSVar10;
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = Map_BuiltinLevels__IsAddonBuiltin(pSVar10,pMVar6);
        local_38 = pSVar11;
      } while ((char)bVar2 != '\0');
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = Map_BuiltinLevels__LoadAddon(pSVar10,pMVar6);
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      local_38 = pSVar11;
    } while ((char)bVar2 != '\0');
    pSVar10 = pSVar11;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar10 = pSVar11;
    }
    SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    while (pSVar10 = local_38, __this.fields._8_8_ = pIVar9,
          __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
          __this.fields._current = (Il2CppObject *)pSVar10, pMVar6 = MethodInfo_Boolean_MoveNext,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar2 != '\0') {
      pSVar11 = pSVar10;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = Map_BuiltinLevels__IsAddonBuiltin(pSVar10,pMVar6);
      local_38 = pSVar11;
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = Map_BuiltinLevels__LoadAddon(pSVar10,pMVar6);
        bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        local_38 = pSVar11;
        if ((char)bVar2 == '\0') {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
          (*(__this_04->klass->vtable)._8_set_Item.methodPtr)(__this_04,pSVar10,pSVar4);
          local_38 = pSVar11;
        }
      }
    }
  }
label_04097da5:
  __this_01.fields._8_8_ = pIVar9;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_01.fields._current = (Il2CppObject *)pSVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  do {
    if (__this_04 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      pSVar10 = (System_String_o *)
                (*(__this_04->klass->vtable)._3_ToString.methodPtr)
                          (__this_04,(__this_04->klass->vtable)._3_ToString.method);
      return pSVar10;
    }
label_04097dde:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) goto label_04097eed;
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
    __this_02.fields._current = (Il2CppObject *)pSVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  } while (lVar1 == 0);
  il2cpp_runtime_helper_022fefe0(lVar1);
label_04097eed:
  __this_03.fields._8_8_ = pIVar9;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar8;
  __this_03.fields._current = (Il2CppObject *)pSVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// Map.CustomLogicAddonTransfer$$CreateTransferData
// il2cpp: void Map_CustomLogicAddonTransfer__CreateTransferData (System_String_o* bundle, const MethodInfo* method);
// 0x4097f30

void Map_CustomLogicAddonTransfer__CreateTransferData(System_String_o *bundle,MethodInfo *method)

{
  int32_t *piVar1;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  long lVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  char cVar4;
  bool_conflict bVar5;
  System_Byte_array *pSVar6;
  System_Collections_Generic_List_byte__o *pSVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_T__o *__this_03;
  void *pvVar9;
  Il2CppObject *pIVar10;
  System_Text_Encoding_o *pSVar11;
  Il2CppClass *pIVar12;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_String_array *pSVar15;
  System_String_o *pSVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  int iVar20;
  MethodInfo_3581700 *pMVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar22;
  uint uVar23;
  
  if (g_data_057ac457 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
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
    g_data_057ac457 = '\x01';
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) != 0) goto label_04097f5f;
label_04098056:
    il2cpp_runtime_helper_02337ed0();
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) goto label_04098056;
label_04097f5f:
    __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
  }
  if (__this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
    pSVar6 = Utility_Algorithms_CompressionAlgorithm__CompressString(__this,bundle,1,(MethodInfo *)0x0);
    pSVar7 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_byte____ctor_357ee60
              (pSVar7,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,MethodInfo_List_1_System_Byte);
    if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
    *(System_Collections_Generic_List_byte__o **)(lVar2 + 0x20) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar7);
    pSVar8 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
    System_Collections_Generic_List_object____ctor(pSVar8,MethodInfo_List_1_System_Byte);
    lVar2 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
    *(System_Collections_Generic_List_object__o **)(lVar2 + 0x28) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar8);
    if (pSVar6 != (System_Byte_array *)0x0) {
      uVar23 = (uint)pSVar6->max_length;
      pSVar8 = (System_Collections_Generic_List_object__o *)(ulong)uVar23;
      __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
      System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_Byte);
      if ((int)uVar23 < 1) {
label_0409824e:
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
        pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
        pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
        if (pIVar12 == (Il2CppClass *)0x0) goto label_04098812;
        if (*(int *)&(pIVar12->_1).namespaze != 0) {
          *(undefined1 *)&(pIVar12->_1).byval_arg.data =
               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x18);
          if (pIVar13 == (Il2CppObject *)0x0) goto label_04098812;
          if (*(int *)&pIVar13[1].monitor != 0) {
            pIVar13[2].klass = pIVar12;
            il2cpp_runtime_helper_022b4080(pIVar13 + 2);
            pvVar9 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
            if (1 < *(uint *)&pIVar13[1].monitor) {
              pIVar13[2].monitor = pvVar9;
              il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pvVar9);
              lVar2 = MethodInfo_Void_Add;
              if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (__this_00->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar23 = (__this_00->fields)._size;
                  if (uVar23 < (uint)pSVar3->max_length) {
                    (__this_00->fields)._size = uVar23 + 1;
                    pSVar3->m_Items[(int)uVar23] = pIVar13;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar23,pIVar13);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (__this_00,pIVar13,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
                    iVar17 = (__this_02->fields)._size;
                    if (iVar17 != 0) {
joined_r0x04098524:
                      if (iVar17 < 1) {
                        return;
                      }
                      iVar22 = 0;
                      iVar20 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
                      do {
                        if (iVar20 == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar8 = *(System_Collections_Generic_List_object__o **)
                                  (*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
                        if (iVar22 == iVar17 + -1) {
                          pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                          pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                          if (pIVar12 == (Il2CppClass *)0x0) goto label_04098812;
                          if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_040987b3;
                          *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x1a);
                          if (pIVar13 == (Il2CppObject *)0x0) goto label_04098812;
                          if (*(int *)&pIVar13[1].monitor == 0) goto label_040987b3;
                          pIVar13[2].klass = pIVar12;
                          il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar12);
                          pIVar10 = System_Collections_Generic_List_object___get_Item
                                              (__this_02,iVar22,MethodInfo_Byte_get_Item);
                          if (*(uint *)&pIVar13[1].monitor < 2) goto label_040987b3;
                          pIVar13[2].monitor = pIVar10;
                          il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pIVar10);
                          pSVar11 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                          if (pSVar11 == (System_Text_Encoding_o *)0x0) goto label_04098812;
                          pIVar12 = (Il2CppClass *)
                                    (*(pSVar11->klass->vtable)._18_GetBytes.methodPtr)
                                              (pSVar11,*(undefined8 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 8),
                                               (pSVar11->klass->vtable)._18_GetBytes.method);
                          if (*(uint *)&pIVar13[1].monitor < 3) goto label_040987b3;
                          pIVar13[3].klass = pIVar12;
                          il2cpp_runtime_helper_022b4080(pIVar13 + 3,pIVar12);
                          lVar2 = MethodInfo_Void_Add;
                        }
                        else {
                          pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,2);
                          pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                          if (pIVar12 == (Il2CppClass *)0x0) goto label_04098812;
                          if (*(int *)&(pIVar12->_1).namespaze == 0) goto label_040987b3;
                          *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                               *(undefined1 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x19);
                          if (pIVar13 == (Il2CppObject *)0x0) goto label_04098812;
                          if (*(int *)&pIVar13[1].monitor == 0) goto label_040987b3;
                          pIVar13[2].klass = pIVar12;
                          il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar12);
                          pIVar10 = System_Collections_Generic_List_object___get_Item
                                              (__this_02,iVar22,MethodInfo_Byte_get_Item);
                          if (*(uint *)&pIVar13[1].monitor < 2) goto label_040987b3;
                          pIVar13[2].monitor = pIVar10;
                          il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pIVar10);
                          lVar2 = MethodInfo_Void_Add;
                        }
                        MethodInfo_Void_Add = lVar2;
                        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto label_04098812;
                        piVar1 = &(pSVar8->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (pSVar8->fields)._items;
                        if (pSVar3 == (System_Object_array *)0x0) goto label_04098812;
                        uVar23 = (pSVar8->fields)._size;
                        if (uVar23 < (uint)pSVar3->max_length) {
                          (pSVar8->fields)._size = uVar23 + 1;
                          pSVar3->m_Items[(int)uVar23] = pIVar13;
                          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar23,pIVar13);
                          iVar17 = (__this_02->fields)._size;
                          if (iVar17 <= iVar22 + 1) {
                            return;
                          }
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    (pSVar8,pIVar13,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                          iVar17 = (__this_02->fields)._size;
                          if (iVar17 <= iVar22 + 1) {
                            return;
                          }
                        }
                        iVar22 = iVar22 + 1;
                        iVar20 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
                      } while( true );
                    }
                    if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = *(System_Collections_Generic_List_object__o **)
                              (*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x28);
                    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte,3);
                    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                    if (pIVar12 != (Il2CppClass *)0x0) {
                      if (*(int *)&(pIVar12->_1).namespaze != 0) {
                        *(undefined1 *)&(pIVar12->_1).byval_arg.data =
                             *(undefined1 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x1a);
                        if (pIVar13 == (Il2CppObject *)0x0) goto label_04098812;
                        if (*(int *)&pIVar13[1].monitor != 0) {
                          pIVar13[2].klass = pIVar12;
                          il2cpp_runtime_helper_022b4080(pIVar13 + 2);
                          pvVar9 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_byte);
                          if (1 < *(uint *)&pIVar13[1].monitor) {
                            pIVar13[2].monitor = pvVar9;
                            il2cpp_runtime_helper_022b4080(&pIVar13[2].monitor,pvVar9);
                            pSVar11 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
                            if (pSVar11 != (System_Text_Encoding_o *)0x0) {
                              pIVar12 = (Il2CppClass *)
                                        (*(pSVar11->klass->vtable)._18_GetBytes.methodPtr)
                                                  (pSVar11,*(undefined8 *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 8)
                                                   ,(pSVar11->klass->vtable)._18_GetBytes.method);
                              if (*(uint *)&pIVar13[1].monitor < 3) goto label_040987b3;
                              pIVar13[3].klass = pIVar12;
                              il2cpp_runtime_helper_022b4080(pIVar13 + 3,pIVar12);
                              lVar2 = MethodInfo_Void_Add;
                              if (pSVar8 != (System_Collections_Generic_List_object__o *)0x0) {
                                piVar1 = &(pSVar8->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar3 = (pSVar8->fields)._items;
                                if (pSVar3 != (System_Object_array *)0x0) {
                                  uVar23 = (pSVar8->fields)._size;
                                  if (uVar23 < (uint)pSVar3->max_length) {
                                    (pSVar8->fields)._size = uVar23 + 1;
                                    pSVar3->m_Items[(int)uVar23] = pIVar13;
                                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar23,pIVar13);
                                    iVar17 = (__this_02->fields)._size;
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              (pSVar8,pIVar13,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                                    iVar17 = (__this_02->fields)._size;
                                  }
                                  goto joined_r0x04098524;
                                }
                              }
                            }
                            goto label_04098812;
                          }
                        }
                      }
                      goto label_040987b3;
                    }
                  }
                }
              }
              goto label_04098812;
            }
          }
        }
label_040987b3:
        uVar23 = (uint)pSVar8;
        il2cpp_runtime_helper_022b2ca0();
      }
      else if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar17 = 0;
        iVar20 = 10000;
        do {
          while( true ) {
            iVar22 = uVar23 - iVar17;
            if (iVar20 + iVar17 <= (int)uVar23) {
              iVar22 = iVar20;
            }
            iVar20 = iVar22;
            if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x20);
            if ((pSVar7 == (System_Collections_Generic_List_byte__o *)0x0) ||
               (__this_03 = System_Collections_Generic_List_byte___GetRange(pSVar7,iVar17,iVar20,MethodInfo_List_1_System_Byte_GetRange)
               , __this_03 == (System_Collections_Generic_List_T__o *)0x0)) goto label_04098812;
            pSVar6 = System_Collections_Generic_List_byte___ToArray
                               ((System_Collections_Generic_List_byte__o *)__this_03,MethodInfo_Byte_ToArray);
            lVar2 = MethodInfo_Void_Add;
            piVar1 = &(__this_02->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_02->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) goto label_04098812;
            uVar18 = (__this_02->fields)._size;
            if ((uint)pSVar3->max_length <= uVar18) break;
            (__this_02->fields)._size = uVar18 + 1;
            pSVar3->m_Items[(int)uVar18] = &pSVar6->obj;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar18,pSVar6);
            iVar17 = iVar17 + iVar20;
            if ((int)uVar23 <= iVar17) goto label_0409824e;
          }
          System_Collections_Generic_List_object___AddWithResize
                    (__this_02,&pSVar6->obj,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          iVar17 = iVar17 + iVar20;
        } while (iVar17 < (int)uVar23);
        goto label_0409824e;
      }
      uVar18 = 10000;
      if ((int)uVar23 < 0x2711) {
        uVar18 = uVar23;
      }
      if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x20);
      if ((pSVar7 != (System_Collections_Generic_List_byte__o *)0x0) &&
         (pIVar12 = (Il2CppClass *)
                    System_Collections_Generic_List_byte___GetRange(pSVar7,0,uVar18,MethodInfo_List_1_System_Byte_GetRange),
         pIVar12 != (Il2CppClass *)0x0)) goto label_04098817;
    }
  }
label_04098812:
  pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_04098817:
  pMVar21 = MethodInfo_Byte_ToArray;
  System_Collections_Generic_List_byte___ToArray
            ((System_Collections_Generic_List_byte__o *)pIVar12,MethodInfo_Byte_ToArray);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac455 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057ac455 = '\x01';
    iVar17 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  else {
    iVar17 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
  }
  if (iVar17 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_01 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x10);
  }
  else {
    __this_01 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x10);
  }
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ac45a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TransferAddonData_d__16);
      g_data_057ac45a = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferAddonData_d__16);
    pMVar21 = (MethodInfo_3581700 *)0x0;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 != (Il2CppObject *)0x0) {
      pIVar13[2].klass = pIVar12;
      il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar12);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                (__this_01,(System_Collections_IEnumerator_o *)pIVar13,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac45a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferAddonData_d__16);
    g_data_057ac45a = '\x01';
  }
  pSVar14 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferAddonData_d__16);
  pSVar16 = pSVar14;
  System_Object___ctor((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
  (pSVar14->fields)._stringLength = 0;
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar14[1].monitor = pMVar21;
    il2cpp_runtime_helper_022b4080(&pSVar14[1].monitor,pMVar21);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    g_data_057ac473 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    method_01 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = Map_BuiltinLevels__GetBuiltinAddons(method_01);
    if (pSVar15 == (System_String_array *)0x0) {
label_04098a3b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac470 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        il2cpp_runtime_helper_023445d0(&"/");
        il2cpp_runtime_helper_023445d0(&".cl");
        il2cpp_runtime_helper_023445d0(&"Logic");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac470 = '\x01';
      }
      method_00 = "";
      bVar5 = System_String__op_Equality
                        ((System_String_o *)method_01,(System_String_o *)"",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar5 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar4 = (char)bVar5;
        }
        else {
          bVar5 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar4 = (char)bVar5;
        }
        if (cVar4 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
          pSVar14 = System_String__Concat_3ae5ba0((System_String_o *)method_01,"Logic",(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_ResourceManager__TryLoadText(pSVar16,pSVar14,(MethodInfo *)0x0);
          return;
        }
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = System_String__Concat_3af7470
                            (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20),"/",
                             (System_String_o *)method_01,".cl",(MethodInfo *)0x0);
        bVar5 = System_IO_File__Exists(pSVar16,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          System_IO_File__ReadAllText(pSVar16,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
    uVar19 = 0;
    do {
      uVar23 = (uint)pSVar15->max_length;
      if ((long)(int)uVar23 <= (long)uVar19) {
        return;
      }
      if (uVar23 <= uVar19) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04098a3b;
      }
      method_01 = (MethodInfo *)pSVar15->m_Items[uVar19];
      bVar5 = System_String__op_Equality((System_String_o *)method_01,pSVar16,(MethodInfo *)0x0);
      uVar19 = uVar19 + 1;
    } while ((char)bVar5 == '\0');
  }
  return;
}


// Map.CustomLogicAddonTransfer$$OnTransferAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC (System_Byte_array_array* byteArr, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4098be0

void Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC
               (System_Byte_array_array *byteArr,int32_t msgNumber,int32_t msgTotal,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint8_t uVar1;
  uint uVar2;
  long lVar3;
  bool_conflict bVar4;
  System_Collections_Generic_List_byte__o *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *bundleJson;
  System_Text_Encoding_o *pSVar7;
  undefined8 uVar8;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  Photon_Realtime_Player_o *unaff_R14;
  Utility_Algorithms_CompressionAlgorithm_o *__this;
  
  if (g_data_057ac458 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer,CONCAT44(in_register_00000034,msgNumber),
                       CONCAT44(in_register_00000014,msgTotal));
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Byte_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Byte);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_byte);
    g_data_057ac458 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar4 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (byteArr != (System_Byte_array_array *)0x0) {
      if ((int)byteArr->max_length == 0) goto label_04098eee;
      pSVar6 = byteArr->m_Items[0];
      if (pSVar6 == (System_Byte_array *)0x0) goto label_04098ee9;
      if ((int)pSVar6->max_length == 0) goto label_04098eee;
      uVar1 = pSVar6->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (uVar1 != *(uint8_t *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x18)) goto label_04098cc8;
label_04098d82:
        pSVar5 = (System_Collections_Generic_List_byte__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_byte);
        System_Collections_Generic_List_byte____ctor(pSVar5,MethodInfo_List_1_System_Byte);
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar3 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
        *(System_Collections_Generic_List_byte__o **)(lVar3 + 0x20) = pSVar5;
        il2cpp_runtime_helper_022b4080(lVar3 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) != 0) goto label_04098cd5;
label_04098de4:
        il2cpp_runtime_helper_02337ed0();
        uVar2 = (uint)byteArr->max_length;
      }
      else {
        if (uVar1 == *(uint8_t *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x18)) goto label_04098d82;
label_04098cc8:
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) goto label_04098de4;
label_04098cd5:
        uVar2 = (uint)byteArr->max_length;
      }
      if (uVar2 < 2) goto label_04098eee;
      pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x20);
      if (pSVar5 == (System_Collections_Generic_List_byte__o *)0x0) goto label_04098ee9;
      System_Collections_Generic_List_byte___AddRange
                (pSVar5,(System_Collections_Generic_IEnumerable_T__o *)byteArr->m_Items[1],MethodInfo_Void_AddRange);
      if (uVar1 != *(uint8_t *)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x1a)) {
        return;
      }
      if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(TypeInfo_DataCompressors);
        __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) != 0) goto label_04098d46;
label_04098e23:
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x20);
      }
      else {
        __this = (Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) goto label_04098e23;
label_04098d46:
        pSVar5 = *(System_Collections_Generic_List_byte__o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 0x20);
      }
      if ((pSVar5 != (System_Collections_Generic_List_byte__o *)0x0) &&
         (pSVar6 = System_Collections_Generic_List_byte___ToArray(pSVar5,MethodInfo_Byte_ToArray),
         __this != (Utility_Algorithms_CompressionAlgorithm_o *)0x0)) {
        bundleJson = Utility_Algorithms_CompressionAlgorithm__DecompressString
                               (__this,pSVar6,0x1000,0xa00000,(MethodInfo *)0x0);
        pSVar7 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
        if ((uint)byteArr->max_length < 3) goto label_04098eee;
        if (pSVar7 != (System_Text_Encoding_o *)0x0) {
          uVar8 = (*(pSVar7->klass->vtable)._35_GetString.methodPtr)
                            (pSVar7,byteArr->m_Items[2],(pSVar7->klass->vtable)._35_GetString.method);
          lVar3 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
          *(undefined8 *)(lVar3 + 8) = uVar8;
          il2cpp_runtime_helper_022b4080(lVar3 + 8);
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__ApplyAddonBundle(bundleJson,(MethodInfo *)0x0);
          CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_04098ee9:
  il2cpp_runtime_helper_022b2c90();
label_04098eee:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ac459 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac459 = '\x01';
  }
  if ((unaff_R14 != (Photon_Realtime_Player_o *)0x0) &&
     (bVar4 = Photon_Realtime_Player__get_IsMasterClient(unaff_R14,(MethodInfo *)0x0), (char)bVar4 == '\0')) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$OnLoadCachedAddonBundleRPC
// il2cpp: void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4098f00

void Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ac459 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057ac459 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) {
    CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$TransferAddonData
// il2cpp: System_Collections_IEnumerator_o* Map_CustomLogicAddonTransfer__TransferAddonData (Map_CustomLogicAddonTransfer_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x4098930

System_Collections_IEnumerator_o *
Map_CustomLogicAddonTransfer__TransferAddonData
          (Map_CustomLogicAddonTransfer_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057ac45a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TransferAddonData_d__16);
    g_data_057ac45a = '\x01';
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TransferAddonData_d__16);
  pSVar6 = pSVar4;
  System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  (pSVar4->fields)._stringLength = 0;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4[1].monitor = player;
    il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,player);
    return (System_Collections_IEnumerator_o *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    g_data_057ac473 = '\x01';
  }
  uVar7 = 0;
  bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_01 = TypeInfo_BuiltinLevels;
    if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = Map_BuiltinLevels__GetBuiltinAddons(method_01);
    if (pSVar5 == (System_String_array *)0x0) {
label_04098a3b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ac470 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
        il2cpp_runtime_helper_023445d0(&"/");
        il2cpp_runtime_helper_023445d0(&".cl");
        il2cpp_runtime_helper_023445d0(&"Logic");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057ac470 = '\x01';
      }
      method_00 = "";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)method_01,(System_String_o *)"",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          bVar3 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar2 = (char)bVar3;
        }
        else {
          bVar3 = Map_BuiltinLevels__IsAddonBuiltin((System_String_o *)method_01,method_00);
          cVar2 = (char)bVar3;
        }
        if (cVar2 != '\0') {
          if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x30);
          pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)method_01,"Logic",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = ApplicationManagers_ResourceManager__TryLoadText(pSVar6,pSVar4,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pSVar6;
        }
        if (*(int *)((long)&TypeInfo_BuiltinLevels[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = System_String__Concat_3af7470
                           (*(System_String_o **)(TypeInfo_BuiltinLevels[2].virtualMethodPointer + 0x20),"/",
                            (System_String_o *)method_01,".cl",(MethodInfo *)0x0);
        bVar3 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pSVar6 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pSVar6;
        }
      }
      return (System_Collections_IEnumerator_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    uVar7 = 0;
    do {
      uVar1 = (uint)pSVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        uVar7 = 0;
        goto label_04098a2e;
      }
      if (uVar1 <= uVar7) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_04098a3b;
      }
      method_01 = (MethodInfo *)pSVar5->m_Items[uVar7];
      bVar3 = System_String__op_Equality((System_String_o *)method_01,pSVar6,(MethodInfo *)0x0);
      uVar7 = uVar7 + 1;
    } while ((char)bVar3 == '\0');
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
label_04098a2e:
  return (System_Collections_IEnumerator_o *)(uVar7 & 0xffffffff);
}


// Map.CustomLogicAddonTransfer$$.ctor
// il2cpp: void Map_CustomLogicAddonTransfer___ctor (Map_CustomLogicAddonTransfer_o* __this, const MethodInfo* method);
// 0x4098f80

void Map_CustomLogicAddonTransfer___ctor(Map_CustomLogicAddonTransfer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Map.CustomLogicAddonTransfer$$.cctor
// il2cpp: void Map_CustomLogicAddonTransfer___cctor (const MethodInfo* method);
// 0x4098f90

void Map_CustomLogicAddonTransfer___cctor(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ac45b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057ac45b = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
  *(undefined8 *)(lVar1 + 8) = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  lVar1 = *(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
  *(undefined2 *)(lVar1 + 0x18) = 0x100;
  *(undefined1 *)(lVar1 + 0x1a) = 2;
  return;
}


