// Type: GameManagers.RPCManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/RPCManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/RPCManager.cs
// --------------------------------

// GameManagers.RPCManager$$TransferLogicRPC
// il2cpp: void GameManagers_RPCManager__TransferLogicRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45704d0

void GameManagers_RPCManager__TransferLogicRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af05d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    g_data_057af05d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicTransfer__OnTransferLogicRPC(strArray,msgNumber,msgTotal,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinLogicRPC (GameManagers_RPCManager_o* __this, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570560

void GameManagers_RPCManager__LoadBuiltinLogicRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  if (g_data_057af05e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af05e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC(name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedLogicRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45705e0

void GameManagers_RPCManager__LoadCachedLogicRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af05f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af05f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__TransferAddonBundleRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570650

void GameManagers_RPCManager__TransferAddonBundleRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af060 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057af060 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC(strArray,msgNumber,msgTotal,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedAddonBundleRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45706e0

void GameManagers_RPCManager__LoadCachedAddonBundleRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af061 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    g_data_057af061 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferMapRPC
// il2cpp: void GameManagers_RPCManager__TransferMapRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570750

void GameManagers_RPCManager__TransferMapRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af062 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapTransfer);
    g_data_057af062 = '\x01';
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapTransfer__OnTransferMapRPC(strArray,msgNumber,msgTotal,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinMapRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinMapRPC (GameManagers_RPCManager_o* __this, System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45707e0

void GameManagers_RPCManager__LoadBuiltinMapRPC
               (GameManagers_RPCManager_o *__this,System_String_o *category,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af063 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057af063 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapManager__OnLoadBuiltinMapRPC(category,name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedMapRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedMapRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570870

void GameManagers_RPCManager__LoadCachedMapRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af064 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    g_data_057af064 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_MapManager__OnLoadCachedMapRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadSkyboxRPC
// il2cpp: void GameManagers_RPCManager__LoadSkyboxRPC (GameManagers_RPCManager_o* __this, System_String_o* urls, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45708e0

void GameManagers_RPCManager__LoadSkyboxRPC
               (GameManagers_RPCManager_o *__this,System_String_o *urls,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_MonoBehaviour_c *pUVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o info_00;
  System_String_array *pSVar3;
  Photon_Pun_PhotonView_o *in_RAX;
  Photon_Realtime_Player_o *pPVar4;
  System_String_array *pSVar5;
  Il2CppObject *pIVar6;
  Photon_Realtime_Player_o *pPVar7;
  Il2CppClass *method_00;
  Photon_Realtime_Player_o *unaff_R12;
  Il2CppClass *unaff_R15;
  
  if (g_data_057af065 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af065 = '\x01';
  }
  pPVar7 = info.fields.Sender;
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (pPVar7 != pPVar4) {
    return;
  }
  pSVar3 = (System_String_array *)&info;
  if (urls == (System_String_o *)0x0) {
label_04570a50:
    pSVar5 = pSVar3;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R15 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    pSVar5 = System_String__Split(urls,0x2c,0,(MethodInfo *)0x0);
    if (unaff_R15 == (Il2CppClass *)0x0) goto label_04570a50;
    pUVar2 = (unaff_R15->_1).image;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pUVar2->_2).naturalAligment) &&
       ((pUVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      if (g_data_057af017 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadSkyboxRPC_d__109);
        g_data_057af017 = '\x01';
      }
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadSkyboxRPC_d__109);
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar6[1].klass = 0;
      pPVar7 = (Photon_Realtime_Player_o *)0x0;
      pSVar3 = pSVar5;
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6[2].klass = unaff_R15;
        il2cpp_runtime_helper_022b4080(pIVar6 + 2,unaff_R15);
        pIVar6[2].monitor = pSVar5;
        il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pSVar5);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)unaff_R15,(System_Collections_IEnumerator_o *)pIVar6,
                   (MethodInfo *)0x0);
        return;
      }
      goto label_04570a50;
    }
  }
  il2cpp_runtime_helper_022b2fd0(unaff_R15);
  if (g_data_057af066 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af066 = '\x01';
  }
  __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(__this_00);
      goto label_04570b85;
    }
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar4 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (unaff_R12 != pPVar4) {
    return;
  }
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057af019 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadLevelSkinRPC_d__111);
      g_data_057af019 = '\x01';
    }
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadLevelSkinRPC_d__111);
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar6[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this_00,(System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
    return;
  }
label_04570b85:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af067 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af067 = '\x01';
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender = (Photon_Realtime_Player_o *)pSVar5;
  info_00.fields._0_8_ = pPVar7;
  info_00.fields.photonView = in_RAX;
  GameManagers_InGameManager__OnRestartGameRPC(info_00,(MethodInfo *)method_00);
  return;
}


// GameManagers.RPCManager$$LoadLevelSkinRPC
// il2cpp: void GameManagers_RPCManager__LoadLevelSkinRPC (GameManagers_RPCManager_o* __this, System_String_o* indices, System_String_o* urls1, System_String_o* urls2, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570a60

void GameManagers_RPCManager__LoadLevelSkinRPC
               (GameManagers_RPCManager_o *__this,System_String_o *indices,System_String_o *urls1,
               System_String_o *urls2,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_MonoBehaviour_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Realtime_Player_o *pPVar2;
  Il2CppObject *__this_01;
  System_String_o *extraout_RDX;
  undefined8 unaff_RBX;
  Il2CppClass *method_00;
  undefined8 unaff_R14;
  Photon_Pun_PhotonView_o *unaff_retaddr;
  
  if (g_data_057af066 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af066 = '\x01';
    urls1 = extraout_RDX;
  }
  __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(__this_00,TypeInfo_InGameManager,urls1);
      goto label_04570b85;
    }
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057af019 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadLevelSkinRPC_d__111);
      g_data_057af019 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadLevelSkinRPC_d__111);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              (__this_00,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
label_04570b85:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af067 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af067 = '\x01';
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender = (Photon_Realtime_Player_o *)unaff_R14;
  info_00.fields._0_8_ = unaff_RBX;
  info_00.fields.photonView = unaff_retaddr;
  GameManagers_InGameManager__OnRestartGameRPC(info_00,(MethodInfo *)method_00);
  return;
}


// GameManagers.RPCManager$$RestartGameRPC
// il2cpp: void GameManagers_RPCManager__RestartGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570b90

void GameManagers_RPCManager__RestartGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (g_data_057af067 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af067 = '\x01';
  }
  method_00 = TypeInfo_InGameManager;
  if (*(int *)((long)&TypeInfo_InGameManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_InGameManager__OnRestartGameRPC(info,method_00);
  return;
}


// GameManagers.RPCManager$$PreRestartGameRPC
// il2cpp: void GameManagers_RPCManager__PreRestartGameRPC (GameManagers_RPCManager_o* __this, bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570c00

void GameManagers_RPCManager__PreRestartGameRPC
               (GameManagers_RPCManager_o *__this,bool_conflict immediate,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 in_register_00000034;
  
  bVar1 = immediate;
  if (g_data_057af068 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af068 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_InGameManager__OnPreRestartGameRPC
            (immediate & 0xff,info,(MethodInfo *)CONCAT44(in_register_00000034,bVar1));
  return;
}


// GameManagers.RPCManager$$PauseGameRPC
// il2cpp: void GameManagers_RPCManager__PauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570c80

void GameManagers_RPCManager__PauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long *plVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o info_01;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  System_Byte_array *method_01;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  Photon_Pun_PhotonView_o *in_stack_ffffffffffffffb8;
  Photon_Realtime_Player_o *in_stack_ffffffffffffffc0;
  
  if (g_data_057af069 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af069 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    method = (MethodInfo *)TypeInfo_InGameManager;
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11)) ||
       (*(System_Byte_array **)
         (*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) * 8) !=
        TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(plVar1);
    }
    else if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        *(undefined1 *)((long)plVar1 + 0x7a) = 1;
        *(undefined4 *)((long)plVar1 + 0x7c) = 0xbf800000;
        UnityEngine_Time__set_timeScale(0.0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af06a = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    if ((*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) <= (__this_00->klass->_2).naturalAligment) &&
       ((System_Byte_array *)
        (__this_00->klass->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) - 1]
        == TypeInfo_InGameManager)) {
      info_01.fields._4_4_ = unaff_retaddr_00;
      info_01.fields.timeInt = unaff_retaddr;
      info_01.fields.Sender = (Photon_Realtime_Player_o *)info.fields._0_8_;
      info_01.fields.photonView = (Photon_Pun_PhotonView_o *)info.fields.Sender;
      GameManagers_InGameManager__OnStartUnpauseGameRPC(__this_00,info_01,(MethodInfo *)TypeInfo_InGameManager);
      return;
    }
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af06b = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    method = (MethodInfo *)TypeInfo_InGameManager;
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11)) ||
       (*(System_Byte_array **)
         (*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) * 8) !=
        TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(plVar1);
    }
    else if (in_stack_ffffffffffffffc0 != (Photon_Realtime_Player_o *)0x0) {
      bVar2 = Photon_Realtime_Player__get_IsMasterClient(in_stack_ffffffffffffffc0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        *(undefined1 *)((long)plVar1 + 0x7a) = 0;
        *(undefined4 *)((long)plVar1 + 0x7c) = 0xbf800000;
        UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af06c = '\x01';
  }
  if (in_stack_ffffffffffffffb8 != (Photon_Pun_PhotonView_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)in_stack_ffffffffffffffb8,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)((long)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0xc) + 4) != 0) {
      GameManagers_InGameManager__ResetPlayerKD(player,method_00);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    GameManagers_InGameManager__ResetPlayerKD(player,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = (System_Byte_array *)method;
  if (g_data_057af06d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af06d = '\x01';
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0xc) + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender._4_4_ = in_stack_ffffffffffffffb4;
  info_00.fields.Sender._0_4_ = in_stack_ffffffffffffffb0;
  info_00.fields._0_8_ = register0x00000020;
  info_00.fields.photonView = in_stack_ffffffffffffffb8;
  GameManagers_InGameManager__OnPlayerInfoRPC((System_Byte_array *)method,info_00,(MethodInfo *)method_01);
  return;
}


// GameManagers.RPCManager$$StartUnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__StartUnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570d30

void GameManagers_RPCManager__StartUnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  GameManagers_InGameManager_o *__this_00;
  long *plVar1;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o info_01;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  System_Byte_array *method_01;
  undefined4 in_stack_ffffffffffffffb8;
  undefined4 in_stack_ffffffffffffffbc;
  Photon_Pun_PhotonView_o *in_stack_ffffffffffffffc0;
  Photon_Realtime_Player_o *in_stack_ffffffffffffffc8;
  
  if (g_data_057af06a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af06a = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    if ((*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) <= (__this_00->klass->_2).naturalAligment) &&
       ((System_Byte_array *)
        (__this_00->klass->_2).typeHierarchy[(ulong)*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) - 1]
        == TypeInfo_InGameManager)) {
      info_01.fields.Sender._4_4_ = info.fields.Sender._4_4_;
      info_01.fields.Sender._0_4_ = info.fields.Sender._0_4_;
      info_01.fields._4_4_ = info.fields._4_4_;
      info_01.fields.timeInt = info.fields.timeInt;
      info_01.fields.photonView = info.fields.photonView;
      GameManagers_InGameManager__OnStartUnpauseGameRPC(__this_00,info_01,(MethodInfo *)TypeInfo_InGameManager);
      return;
    }
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af06b = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    method = (MethodInfo *)TypeInfo_InGameManager;
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11)) ||
       (*(System_Byte_array **)
         (*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0x11) * 8) !=
        TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(plVar1);
    }
    else if (in_stack_ffffffffffffffc8 != (Photon_Realtime_Player_o *)0x0) {
      bVar2 = Photon_Realtime_Player__get_IsMasterClient(in_stack_ffffffffffffffc8,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        *(undefined1 *)((long)plVar1 + 0x7a) = 0;
        *(undefined4 *)((long)plVar1 + 0x7c) = 0xbf800000;
        UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af06c = '\x01';
  }
  if (in_stack_ffffffffffffffc0 != (Photon_Pun_PhotonView_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)in_stack_ffffffffffffffc0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)((long)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0xc) + 4) != 0) {
      GameManagers_InGameManager__ResetPlayerKD(player,method_00);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    GameManagers_InGameManager__ResetPlayerKD(player,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = (System_Byte_array *)method;
  if (g_data_057af06d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af06d = '\x01';
  }
  if (*(int *)((long)((Il2CppType *)TypeInfo_InGameManager->m_Items + 0xc) + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender._4_4_ = in_stack_ffffffffffffffbc;
  info_00.fields.Sender._0_4_ = in_stack_ffffffffffffffb8;
  info_00.fields._0_8_ = &info;
  info_00.fields.photonView = in_stack_ffffffffffffffc0;
  GameManagers_InGameManager__OnPlayerInfoRPC((System_Byte_array *)method,info_00,(MethodInfo *)method_01);
  return;
}


// GameManagers.RPCManager$$UnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__UnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570de0

void GameManagers_RPCManager__UnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long *plVar1;
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *player;
  undefined8 unaff_RBX;
  MethodInfo *method_00;
  System_Byte_array *method_01;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  if (g_data_057af06b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af06b = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar1 != (long *)0x0) {
    method = (MethodInfo *)TypeInfo_InGameManager;
    if ((*(byte *)(*plVar1 + 0x130) < *(byte *)((long)TypeInfo_InGameManager->m_Items + 0x110)) ||
       (*(System_Byte_array **)
         (*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)((long)TypeInfo_InGameManager->m_Items + 0x110) * 8) !=
        TypeInfo_InGameManager)) {
      il2cpp_runtime_helper_022b2fd0(plVar1);
    }
    else if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        *(undefined1 *)((long)plVar1 + 0x7a) = 0;
        *(undefined4 *)((long)plVar1 + 0x7c) = 0xbf800000;
        UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af06c = '\x01';
  }
  if (info.fields._0_8_ != 0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)info.fields._0_8_,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)((long)TypeInfo_InGameManager->m_Items + 0xc4) != 0) {
      GameManagers_InGameManager__ResetPlayerKD(player,method_00);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    GameManagers_InGameManager__ResetPlayerKD(player,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_01 = (System_Byte_array *)method;
  if (g_data_057af06d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af06d = '\x01';
  }
  if (*(int *)((long)TypeInfo_InGameManager->m_Items + 0xc4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender._4_4_ = unaff_retaddr_00;
  info_00.fields.Sender._0_4_ = unaff_retaddr;
  info_00.fields._0_8_ = unaff_RBX;
  info_00.fields.photonView = (Photon_Pun_PhotonView_o *)0x0;
  GameManagers_InGameManager__OnPlayerInfoRPC((System_Byte_array *)method,info_00,(MethodInfo *)method_01);
  return;
}


// GameManagers.RPCManager$$ResetKDRPC
// il2cpp: void GameManagers_RPCManager__ResetKDRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570e90

void GameManagers_RPCManager__ResetKDRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar1;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  System_Byte_array *method_01;
  undefined4 unaff_retaddr;
  undefined4 unaff_retaddr_00;
  
  if (g_data_057af06c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af06c = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    method_01 = (System_Byte_array *)method;
    if (g_data_057af06d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
      g_data_057af06d = '\x01';
    }
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields._4_4_ = unaff_retaddr_00;
    info_00.fields.timeInt = unaff_retaddr;
    info_00.fields.Sender = (Photon_Realtime_Player_o *)info.fields._0_8_;
    info_00.fields.photonView = (Photon_Pun_PhotonView_o *)0x0;
    GameManagers_InGameManager__OnPlayerInfoRPC((System_Byte_array *)method,info_00,(MethodInfo *)method_01);
    return;
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_InGameManager + 0xe4) != 0) {
    GameManagers_InGameManager__ResetPlayerKD(player,method_00);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__ResetPlayerKD(player,method_00);
  return;
}


// GameManagers.RPCManager$$PlayerInfoRPC
// il2cpp: void GameManagers_RPCManager__PlayerInfoRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570f30

void GameManagers_RPCManager__PlayerInfoRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Byte_array *method_00;
  
  method_00 = data;
  if (g_data_057af06d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af06d = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_InGameManager__OnPlayerInfoRPC(data,info,(MethodInfo *)method_00);
  return;
}


// GameManagers.RPCManager$$GameSettingsRPC
// il2cpp: void GameManagers_RPCManager__GameSettingsRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4570fb0

void GameManagers_RPCManager__GameSettingsRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Byte_array *method_00;
  
  method_00 = data;
  if (g_data_057af06e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af06e = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_InGameManager__OnGameSettingsRPC(data,info,(MethodInfo *)method_00);
  return;
}


// GameManagers.RPCManager$$SetWeatherRPC
// il2cpp: void GameManagers_RPCManager__SetWeatherRPC (GameManagers_RPCManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571030

void GameManagers_RPCManager__SetWeatherRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *currentWeatherJson,
               System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af06f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherManager);
    g_data_057af06f = '\x01';
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Weather_WeatherManager__OnSetWeatherRPC
            (currentWeatherJson,startWeatherJson,targetWeatherJson,targetWeatherStartTimes,
             targetWeatherEndTimes,currentTime,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteEmojiRPC
// il2cpp: void GameManagers_RPCManager__EmoteEmojiRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45710f0

void GameManagers_RPCManager__EmoteEmojiRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *emoji,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  UI_EmoteHandler_o *x;
  long lVar2;
  System_Collections_Generic_HashSet_int__o *__this_00;
  void *pvVar3;
  UnityEngine_Component_o *__this_01;
  System_Collections_Generic_List_EmoteTextPopup__o *popups;
  UI_EmoteTextPopup_c *pUVar4;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar5;
  Il2CppClass *character;
  UI_EmoteHandler_o *x_00;
  UI_EmoteTextPopup_o *pUVar6;
  UnityEngine_GameObject_o *__this_02;
  long *plVar7;
  Il2CppClass *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppClass *pIVar8;
  MethodInfo *method_00;
  UI_EmoteHandler_o *unaff_RBX;
  System_String_o *pSVar9;
  UI_EmoteHandler_o *pUVar10;
  Il2CppClass **__this_03;
  UI_EmoteHandler_o *pUVar11;
  long *unaff_R12;
  UI_EmoteHandler_o *unaff_R14;
  long *unaff_R15;
  undefined4 uVar12;
  undefined8 in_XMM1_Qa;
  undefined1 auVar13 [12];
  UnityEngine_Vector3_o UVar14;
  undefined1 auStack_38 [8];
  
  uVar12 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pUVar11 = (UI_EmoteHandler_o *)(ulong)(uint)viewId;
  if (g_data_057ae3ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae3ba = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UI_EmoteHandler_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_String_o *)0x0;
  pUVar10 = x;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xc0), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_InGameManager[2].fields._emoteWheelPopup + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = (UI_EmoteHandler_o *)info.fields.Sender;
    pUVar10 = TypeInfo_InGameManager;
    if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
      __this_00 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager[2].monitor + 0x20);
      x = (UI_EmoteHandler_o *)info.fields.Sender;
      pUVar10 = (UI_EmoteHandler_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_int__o *)0x0) {
        bVar5 = System_Collections_Generic_HashSet_int___Contains
                          (__this_00,((info.fields.Sender)->fields).actorNumber,MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_o *)0x0;
        pUVar10 = pUVar11;
        character = (Il2CppClass *)Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
        x = (UI_EmoteHandler_o *)info.fields.Sender;
        if (((character != (Il2CppClass *)0x0) &&
            (pvVar3 = (character->_1).interopData, x = (UI_EmoteHandler_o *)info.fields.Sender,
            pvVar3 != (void *)0x0)) &&
           (lVar2 = *(long *)((long)pvVar3 + 0x20), x = (UI_EmoteHandler_o *)info.fields.Sender, lVar2 != 0))
        {
          if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
            return;
          }
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          x = (UI_EmoteHandler_o *)info.fields.Sender;
          pUVar10 = (UI_EmoteHandler_o *)0x0;
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            x_00 = (UI_EmoteHandler_o *)UnityEngine_Component__GetComponent_object_(__this_01,MethodInfo_EmoteHandler_GetComponent_EmoteHandler);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar5 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = (System_String_o *)0x0;
            pUVar10 = x_00;
            bVar5 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return;
            }
            x = (UI_EmoteHandler_o *)info.fields.Sender;
            pUVar11 = (UI_EmoteHandler_o *)0x0;
            if (x_00 != (UI_EmoteHandler_o *)0x0) goto UI_EmoteHandler__ShowEmoteEmoji;
          }
        }
      }
    }
  }
  unaff_R14 = pUVar11;
  x_00 = pUVar10;
  emoji = pSVar9;
  unaff_RBX = x;
  il2cpp_runtime_helper_022b2c90();
  character = extraout_RDX;
  register0x00000020 = (BADSPACEBASE *)auStack_38;
  unaff_R12 = &TypeInfo_Object;
  unaff_R15 = &TypeInfo_UIManager;
UI_EmoteHandler__ShowEmoteEmoji:
  *(long **)((long)register0x00000020 + -8) = unaff_R15;
  *(UI_EmoteHandler_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UI_EmoteHandler_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  pIVar8 = character;
  __this_03 = (Il2CppClass **)x_00;
  if (g_data_057ae3bb == '\0') {
    __this_03 = &TypeInfo_EmoteEmojiPopup;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0d3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae3bb = '\x01';
    pIVar8 = extraout_RDX_00;
  }
  popups = (x_00->fields)._emoteEmojiPopups;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0e3;
  pUVar6 = UI_EmoteHandler__GetAvailablePopup((UI_EmoteHandler_o *)__this_03,popups,(MethodInfo *)pIVar8);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd0ee;
  pIVar8 = character;
  UVar14 = UI_EmoteHandler__GetOffset
                     ((UI_EmoteHandler_o *)__this_03,(Characters_BaseCharacter_o *)character,method_00);
  if (pUVar6 != (UI_EmoteTextPopup_o *)0x0) {
    bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
    if ((bVar1 <= (pUVar6->klass->_2).naturalAligment) &&
       ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
      pUVar4 = pUVar6->klass;
      bVar1 = (TypeInfo_EmoteEmojiPopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
         ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_EmoteEmojiPopup)) {
        vtableDispatch = (pUVar4->vtable)._59_Load.methodPtr;
        (*vtableDispatch)
                  (0x40400000,UVar14.fields._0_8_,CONCAT44(uVar12,UVar14.fields.z),pUVar6,emoji,character,
                   (pUVar4->vtable)._59_Load.method,vtableDispatch);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd17c;
    pIVar8 = TypeInfo_EmoteEmojiPopup;
    il2cpp_runtime_helper_022b2fd0(pUVar6);
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43bd181;
  il2cpp_runtime_helper_022b2c90();
  *(Il2CppClass **)((long)register0x00000020 + -0x20) = character;
  *(System_String_o **)((long)register0x00000020 + -0x28) = emoji;
  *(long **)((long)register0x00000020 + -0x30) = unaff_R12;
  *(UI_EmoteTextPopup_o **)((long)register0x00000020 + -0x38) = pUVar6;
  if (g_data_057ae3c3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1b3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1bf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1cb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Current);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1d7;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd1e3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_EmoteTextPopup_get_Item);
    g_data_057ae3c3 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  if (pIVar8 != (Il2CppClass *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd21a;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)((long)register0x00000020 + -0x50),
               (System_Collections_Generic_List_object__o *)pIVar8,MethodInfo_List_1_T_Enumerator_UI_EmoteTextPopup_GetEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0x40);
    *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x50);
    *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x48);
    while( true ) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd24c;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o)
                         *(System_Collections_Generic_List_Enumerator_object__Fields *)
                          ((long)register0x00000020 + -0x70),
                         (MethodInfo_321A1D0 *)((long)register0x00000020 + -0x70));
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd29d;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)
                    ((long)register0x00000020 + -0x70),
                   (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
        goto label_043bd29d;
      }
      if (*(UnityEngine_Component_o **)((long)register0x00000020 + -0x60) == (UnityEngine_Component_o *)0x0)
      break;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd264;
      __this_02 = UnityEngine_Component__get_gameObject
                            (*(UnityEngine_Component_o **)((long)register0x00000020 + -0x60),(MethodInfo *)0x0
                            );
      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_043bd2c8;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd273;
      bVar5 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd289;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o)
                   *(System_Collections_Generic_List_Enumerator_object__Fields *)
                    ((long)register0x00000020 + -0x70),
                   (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2c8;
    il2cpp_runtime_helper_022b2c90();
label_043bd2c8:
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2cd;
    il2cpp_runtime_helper_022b2c90();
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2d2;
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd30a;
    plVar7 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar7;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd312;
    __cxa_end_catch();
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd324;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)
               *(System_Collections_Generic_List_Enumerator_object__Fields *)
                ((long)register0x00000020 + -0x70),(MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
    if (lVar2 == 0) {
label_043bd29d:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd2b1;
      System_Collections_Generic_List_object___get_Item
                ((System_Collections_Generic_List_object__o *)pIVar8,0,MethodInfo_EmoteTextPopup_get_Item);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd335;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd34e;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)
             *(System_Collections_Generic_List_Enumerator_object__Fields *)((long)register0x00000020 + -0x70),
             (MethodInfo_321A1C0 *)((long)register0x00000020 + -0x70));
  *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43bd35b;
  _Unwind_Resume(auVar13._0_8_);
}


// GameManagers.RPCManager$$EmoteTextRPC
// il2cpp: void GameManagers_RPCManager__EmoteTextRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571100

void GameManagers_RPCManager__EmoteTextRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *text,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteTextRPC(viewId,text,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnEffectRPC
// il2cpp: void GameManagers_RPCManager__SpawnEffectRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571110

void GameManagers_RPCManager__SpawnEffectRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,bool_conflict scaleSize,
               System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_o *path;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar6;
  Il2CppObject *pIVar7;
  UnityEngine_ParticleSystem_MainModule_o main;
  System_Object_array *pSVar8;
  System_Object_array *settings_00;
  uint uVar9;
  MethodInfo_255A020 *method_00;
  long *plVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o rotation_00;
  float fVar16;
  float scale_00;
  undefined8 uVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  
  fVar11 = position.fields.z;
  uVar17 = position.fields._0_8_;
  auVar4._8_4_ = in_XMM0_Dc;
  auVar4._0_8_ = uVar17;
  auVar4._12_4_ = in_XMM0_Dd;
  pPVar18 = auVar4._8_8_;
  scale_00 = scale;
  if (g_data_057af084 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EffectPrefabs);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseEffect_AddComponent_BaseEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LineRendererEffect_AddComponent_LineRendererEffect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ThunderspearExplodeEffect_AddComponent_ThunderspearExplo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057af084 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x40);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar12 = rotation.fields.x;
  fVar13 = rotation.fields.y;
  fVar14 = rotation.fields.z;
  fVar15 = rotation.fields.w;
  position_00.fields.z = fVar11;
  position_00.fields.x = (float)(int)uVar17;
  position_00.fields.y = (float)(int)((ulong)uVar17 >> 0x20);
  fVar16 = fVar11;
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object__25bc9b0
                        (path,name,position_00,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo_255A020 *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8);
  bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = *(MethodInfo_255A020 **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8);
    bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = *(MethodInfo_255A020 **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8);
      bVar5 = System_String__op_Equality(name,(System_String_o *)method_00,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
      if ((char)bVar5 == '\0') {
        puVar6 = &MethodInfo_BaseEffect_AddComponent_BaseEffect;
      }
      else {
        puVar6 = &MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect;
      }
    }
    else {
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
      puVar6 = &MethodInfo_LineRendererEffect_AddComponent_LineRendererEffect;
    }
  }
  else {
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_04571368;
    puVar6 = &MethodInfo_ThunderspearExplodeEffect_AddComponent_ThunderspearExplo;
  }
  method_00 = (MethodInfo_255A020 *)*puVar6;
  pIVar7 = UnityEngine_GameObject__AddComponent_object_(__this_00,method_00);
  if (pIVar7 == (Il2CppObject *)0x0) {
label_04571368:
    uVar3 = il2cpp_runtime_helper_022b2c90();
    info_00.fields._4_4_ = scale_00;
    info_00.fields.timeInt = (int32_t)fVar16;
    info_00.fields.Sender = (Photon_Realtime_Player_o *)uVar17;
    info_00.fields.photonView = pPVar18;
    position_01.fields.z = fVar11;
    position_01.fields.x = (float)(int)uVar3;
    position_01.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
    rotation_00.fields.y = fVar13;
    rotation_00.fields.x = fVar12;
    rotation_00.fields.w = fVar15;
    rotation_00.fields.z = fVar14;
    Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
              ((System_String_o *)method_00,position_01,rotation_00,scale,settings_00,info_00,
               (MethodInfo *)0x0);
    return;
  }
  (*pIVar7->klass->vtable[4].methodPtr)
            (0x41200000,pIVar7,info.fields.Sender,settings,pIVar7->klass->vtable[4].method);
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)
       UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  plVar10 = (long *)main.fields.m_ParticleSystem;
  if (g_data_057af085 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    plVar10 = &TypeInfo_Util;
    il2cpp_runtime_helper_023445d0();
    g_data_057af085 = '\x01';
  }
  if (main.fields.m_ParticleSystem != (UnityEngine_ParticleSystem_o *)0x0) {
    value.fields.y = scale_00;
    value.fields.x = scale_00;
    value.fields.z = scale_00;
    UnityEngine_Transform__set_localScale
              ((UnityEngine_Transform_o *)main.fields.m_ParticleSystem,value,(MethodInfo *)0x0);
    if ((char)scaleSize == '\0') {
      return;
    }
    pSVar8 = UnityEngine_Component__GetComponentsInChildren_object__24e8500
                       ((UnityEngine_Component_o *)main.fields.m_ParticleSystem,MethodInfo_ParticleSystem_GetComponentsInChildren_ParticleSystem);
    plVar10 = (long *)main.fields.m_ParticleSystem;
    if (pSVar8 != (System_Object_array *)0x0) {
      iVar1 = (int)pSVar8->max_length;
      if (iVar1 < 1) {
        return;
      }
      uVar9 = 0;
      if (iVar1 != 0) {
        do {
          plVar10 = (long *)(UnityEngine_Transform_o *)0x0;
          if ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar9] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_04572b30;
          main = UnityEngine_ParticleSystem__get_main
                           ((UnityEngine_ParticleSystem_o *)pSVar8->m_Items[(int)uVar9],(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Utility_Util__ScaleParticleStartSize(main,scale_00,(MethodInfo *)0x0);
          Utility_Util__ScaleParticleStartSpeed(main,scale_00,(MethodInfo *)0x0);
          uVar9 = uVar9 + 1;
          uVar2 = (uint)pSVar8->max_length;
          if ((int)uVar2 <= (int)uVar9) {
            return;
          }
        } while (uVar9 < uVar2);
      }
      goto label_04572b35;
    }
  }
label_04572b30:
  main.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_MainModule_Fields)plVar10;
  il2cpp_runtime_helper_022b2c90();
label_04572b35:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)main.fields.m_ParticleSystem,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnSpawnableRPC
// il2cpp: void GameManagers_RPCManager__SpawnSpawnableRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571370

void GameManagers_RPCManager__SpawnSpawnableRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
            (name,position,rotation,scale,settings,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetLabelRPC
// il2cpp: void GameManagers_RPCManager__SetLabelRPC (GameManagers_RPCManager_o* __this, System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571380

void GameManagers_RPCManager__SetLabelRPC
               (GameManagers_RPCManager_o *__this,System_String_o *label,System_String_o *message,float time,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int iVar1;
  Photon_Realtime_Player_o *pPVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (g_data_057af070 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057af070 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057af000 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af000 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = extraout_RDX_01;
  }
  GameManagers_InGameManager__SetLabel(label,message,time,method_00);
  return;
}


// GameManagers.RPCManager$$ShowKillFeedRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571480

void GameManagers_RPCManager__ShowKillFeedRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_00;
  GameManagers_InGameManager_o *pGVar9;
  long *plVar10;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_01;
  Photon_Pun_PhotonMessageInfo_o info_01;
  UnityEngine_Quaternion_Fields rotation;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_02;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  UnityEngine_Transform_o *__this_04;
  Il2CppClass *pIVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  System_Object_array *pSVar21;
  long lVar22;
  Settings_PresetSettingsContainer_o *__this_06;
  Settings_PresetSettingsContainer_c *__this_07;
  Il2CppObject *pIVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  UnityEngine_GameObject_o *pUVar27;
  void *pvVar28;
  ulong uVar29;
  undefined1 extraout_DL;
  System_String_o *csvScript;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  System_String_o *victim_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  UI_ChatPanel_o *__this_08;
  uint uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  Map_MapObject_o *pMVar33;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar34;
  Photon_Realtime_Player_o *pPVar35;
  Photon_Realtime_Player_o *player;
  MethodInfo_255A0F0 *message;
  Il2CppClass *pIVar36;
  Il2CppClass *pIVar37;
  System_Collections_Generic_Dictionary_int__object__o *pSVar38;
  UnityEngine_Component_o *__this_09;
  UI_InGameMenu_o *pUVar39;
  int32_t iVar40;
  int32_t unaff_R12D;
  Photon_Pun_PhotonView_o *unaff_R13;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  UnityEngine_Quaternion_o UVar45;
  undefined1 auVar46 [12];
  UnityEngine_Vector3_o UVar47;
  UnityEngine_Vector3_o position;
  undefined1 auVar48 [16];
  undefined8 uStack_1c0;
  undefined4 uStack_180;
  Photon_Pun_PhotonView_o *pPStack_170;
  Photon_Realtime_Player_o *pPStack_160;
  undefined8 uStack_158;
  Il2CppObject *pIStack_150;
  Photon_Pun_PhotonView_o *pPStack_148;
  System_String_o *pSStack_140;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_138;
  CustomLogic_CustomLogicEvaluator_o *pCStack_130;
  System_Object_array *pSStack_128;
  undefined4 uVar49;
  int32_t score_00;
  Photon_Realtime_Player_o *in_stack_ffffffffffffff18;
  Photon_Realtime_Player_o *in_stack_ffffffffffffff68;
  
  iVar40 = (int32_t)method;
  uVar29 = (ulong)(uint)score;
  pIVar37 = (Il2CppClass *)killer;
  pSVar19 = weapon;
  if (g_data_057af071 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057af071 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_045714b4;
label_04571548:
    il2cpp_runtime_helper_02337ed0();
    pUVar39 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar39 != (UI_InGameMenu_o *)0x0) goto label_045714c8;
label_04571564:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04571548;
label_045714b4:
    pUVar39 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar39 == (UI_InGameMenu_o *)0x0) goto label_04571564;
label_045714c8:
    bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
    uVar29 = (ulong)bVar3;
    pIVar37 = TypeInfo_InGameMenu;
    if ((bVar3 <= (pUVar39->klass->_2).naturalAligment) &&
       ((pUVar39->klass->_2).typeHierarchy[uVar29 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillFeed(pUVar39,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
  }
  score_00 = (int32_t)uVar29;
  il2cpp_runtime_helper_022b2fd0();
  pIVar18 = pIVar37;
  if (g_data_057af072 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057af072 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_045715ae;
label_04571654:
    il2cpp_runtime_helper_02337ed0();
    pUVar39 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar39 != (UI_InGameMenu_o *)0x0) goto label_045715c2;
label_04571670:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04571654;
label_045715ae:
    pUVar39 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar39 == (UI_InGameMenu_o *)0x0) goto label_04571670;
label_045715c2:
    bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
    pIVar18 = TypeInfo_InGameMenu;
    if ((bVar3 <= (pUVar39->klass->_2).naturalAligment) &&
       ((pUVar39->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillFeed_42c8210
                (pUVar39,(System_String_o *)pIVar37,victim_00,score_00,pSVar19,iVar40,unaff_R12D,
                 (MethodInfo *)0x0);
      return;
    }
  }
  fVar41 = (float)il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af073 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af073 = '\x01';
  }
  pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar9 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      info_01.fields.Sender = (Photon_Realtime_Player_o *)victim;
      info_01.fields._0_8_ = &TypeInfo_UIManager;
      info_01.fields.photonView = unaff_R13;
      GameManagers_InGameManager__EndGame(pGVar9,fVar41,info_01,(MethodInfo *)TypeInfo_InGameManager);
      return;
    }
    pIVar18 = TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af074 = '\x01';
  }
  plVar10 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  uVar43 = 0;
  if (plVar10 != (long *)0x0) {
    lVar22 = *plVar10;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= *(byte *)(lVar22 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(lVar22 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_InGameManager)) {
      pPVar35 = in_stack_ffffffffffffff68;
      if (g_data_057aefe8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&" has joined the room.");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefe8 = '\x01';
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0455e01b;
label_0455e1ee:
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar34 = TypeInfo_CustomLogicManager;
        if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e05d;
label_0455e02b:
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) {
label_0455e050:
          pPVar35 = in_stack_ffffffffffffff68;
          CustomLogic_CustomLogicEvaluator__OnPlayerJoin
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar14,in_stack_ffffffffffffff68,(MethodInfo *)0x0
                    );
          pSVar34 = pSVar14;
          goto label_0455e05d;
        }
        pSVar34 = TypeInfo_CustomLogicManager;
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e050;
      }
      else {
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_0455e1ee;
label_0455e01b:
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar34 = TypeInfo_CustomLogicManager;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e02b;
label_0455e05d:
        lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
          if (*(char *)(lVar22 + 0x11) != '\0') {
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = PhotonExtensions__GetStringProperty
                                (in_stack_ffffffffffffff68,
                                 (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,(MethodInfo *)0x0);
            pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
            GameManagers_ChatManager__AddLine
                      (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          else {
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          if (cVar11 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefe9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"");
        il2cpp_runtime_helper_023445d0(&" has left the room.");
        g_data_057aefe9 = '\x01';
      }
      Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar34,pPVar35,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (UnityEngine_Component_o *)0x0) goto label_0455e371;
label_0455e3a1:
        __this_08 = (UI_ChatPanel_o *)0x0;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 == (UnityEngine_Component_o *)0x0) goto label_0455e3a1;
label_0455e371:
        pIVar23 = UnityEngine_Component__GetComponent_object_(__this_09,MethodInfo_InGameMenu_GetComponent_InGameMenu);
        if (pIVar23 == (Il2CppObject *)0x0) goto label_0455e3a1;
        __this_08 = pIVar23[0xc].monitor;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = (Photon_Realtime_Player_o *)0x0;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
label_0455e3eb:
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pPVar35 != (Photon_Realtime_Player_o *)0x0) &&
           (pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18),
           pSVar38 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          uVar30 = (pPVar35->fields).actorNumber;
          player = (Photon_Realtime_Player_o *)(ulong)uVar30;
          bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar38,uVar30,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 != '\0') {
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18);
            if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455e816;
            uVar30 = (pPVar35->fields).actorNumber;
            player = (Photon_Realtime_Player_o *)(ulong)uVar30;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar38,uVar30,MethodInfo_Boolean_Remove);
          }
          lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
            if (*(char *)(lVar22 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar19 = PhotonExtensions__GetStringProperty
                                  (pPVar35,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                   "",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = GameManagers_ChatManager__GetColorString(" has left the room.",3,0,(MethodInfo *)0x0);
              pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
              player = (Photon_Realtime_Player_o *)0x0;
              GameManagers_ChatManager__AddLine
                        (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
            }
            if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            else {
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            if (__this_05 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
                if (__this_05 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0455e816;
              }
              player = pPVar35;
              CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_05,pPVar35,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20)
            ;
            if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              uVar30 = (pPVar35->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar30;
              bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar30,MethodInfo_Boolean_Contains);
              if ((char)bVar12 != '\0') {
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x20);
                if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                uVar30 = (pPVar35->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar30,MethodInfo_Boolean_Remove);
              }
              if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                        ((long)TypeInfo_InGameManager->static_fields + 0x28);
              if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                uVar30 = (pPVar35->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar30,MethodInfo_Boolean_Contains);
                if ((char)bVar12 != '\0') {
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x28);
                  if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                  uVar30 = (pPVar35->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                  System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar30,MethodInfo_Boolean_Remove);
                }
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x30);
                if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  uVar30 = (pPVar35->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                  bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar30,MethodInfo_Boolean_Contains);
                  if ((char)bVar12 != '\0') {
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x30);
                    if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                    uVar30 = (pPVar35->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                    System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar30,MethodInfo_Boolean_Remove);
                  }
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x38);
                  if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    uVar30 = (pPVar35->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar30;
                    bVar12 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                                       (pSVar8,uVar30,MethodInfo_Boolean_ContainsKey);
                    if ((char)bVar12 == '\0') {
label_0455e782:
                      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      Anticheat_AnticheatManager__ResetVoteKicks(pPVar35,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      else {
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      if (cVar11 == '\0') {
                        return;
                      }
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x38);
                    if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                      System_Collections_Generic_Dictionary_int__float___Remove
                                (pSVar8,(pPVar35->fields).actorNumber,MethodInfo_Boolean_Remove);
                      goto label_0455e782;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (__this_08 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__RemovePMPartner(__this_08,pPVar35,(MethodInfo *)0x0);
        player = (Photon_Realtime_Player_o *)0x0;
        UI_ChatPanel__Sync(__this_08,(MethodInfo *)0x0);
        goto label_0455e3eb;
      }
label_0455e816:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"InGame");
        il2cpp_runtime_helper_023445d0(&"MasterclientChangeTo");
        il2cpp_runtime_helper_023445d0(&"Chat");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefea = '\x01';
      }
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = PhotonExtensions__GetStringProperty
                          (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (pSVar21 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0455ea6c:
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((pSVar19 == (System_String_o *)0x0) ||
              (lVar22 = il2cpp_runtime_helper_023051f0(pSVar19,(((pSVar21->obj).klass)->_1).element_class), lVar22 != 0))
      {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = (Il2CppObject *)pSVar19;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pSVar19);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar19 = UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","MasterclientChangeTo",pSVar21,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_128 = (System_Object_array *)0x455e9e4;
          GameManagers_ChatManager__AddLine
                    (pSVar19,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar37 = TypeInfo_InGameManager;
          }
          else {
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar37 = TypeInfo_InGameManager;
          }
          if (cVar11 != '\0') {
            TypeInfo_InGameManager = pIVar37;
            if (*(int *)&(pIVar37->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar37);
              return;
            }
            GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar37);
            return;
          }
          TypeInfo_InGameManager = pIVar37;
          return;
        }
        goto label_0455ea6c;
      }
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_0231b270();
      pSStack_128 = (System_Object_array *)il2cpp_runtime_helper_022b2b10(pSVar21,0);
      if (g_data_057aefeb == '\0') {
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaa3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaaf;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eabb;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eac7;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ead3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eadf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaeb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaf7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb03;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb0f;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefeb = '\x01';
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb34;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((pPVar35 == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18),
         pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
label_0455ee6e:
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee73;
        il2cpp_runtime_helper_022b2c90();
label_0455ee73:
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee78;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb6c;
        bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (pSVar38,(pPVar35->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 == '\0') {
          pSStack_128 = pSVar21;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb8f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          iVar40 = (pPVar35->fields).actorNumber;
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebb4;
          __this_06 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
          if (g_data_057af051 == '\0') {
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebcc;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
            g_data_057af051 = '\x01';
          }
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebe2;
          __this_07 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebef;
          Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)__this_07,(MethodInfo *)0x0);
          __this_06[1].klass = __this_07;
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec02;
          il2cpp_runtime_helper_022b4080(__this_06 + 1);
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec0c;
          Settings_BaseSettingsContainer___ctor(__this_06,(MethodInfo *)0x0);
          if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee6e;
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec2d;
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar38,iVar40,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
          pSVar21 = pSStack_128;
        }
        if (pSVar21 == (System_Object_array *)0x0) {
          return;
        }
        if (0x4000 < (int)((System_Byte_array *)pSVar21)->max_length) {
          return;
        }
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec5d;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   ((long)TypeInfo_InGameManager->static_fields + 0x18);
        if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee73;
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec89;
        pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar38,(pPVar35->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eca4;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
            (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eccf;
          pSVar19 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              ((Utility_Algorithms_CompressionAlgorithm_o *)
                               **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),(System_Byte_array *)pSVar21,0x1000,
                               0xa00000,(MethodInfo *)0x0);
          if (pIVar23 == (Il2CppObject *)0x0) goto label_0455ee7d;
          pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ecee;
          (*pIVar23->klass->vtable[8].methodPtr)(pIVar23,pSVar19,pIVar23->klass->vtable[8].method);
          iVar40 = (pPVar35->fields).actorNumber;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee1b;
            il2cpp_runtime_helper_02337ed0();
            if (g_data_057af00c != '\0') goto label_0455ed10;
label_0455ee28:
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee34;
            il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
            g_data_057af00c = '\x01';
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455ed21;
label_0455ee4c:
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee51;
            il2cpp_runtime_helper_02337ed0();
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          else {
            if (g_data_057af00c == '\0') goto label_0455ee28;
label_0455ed10:
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455ee4c;
label_0455ed21:
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          if (lVar22 != 0) {
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed3e;
            (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),iVar40,*(undefined8 *)(lVar22 + 0x28))
            ;
          }
          if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed56;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          if (pSVar38 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                         (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
            pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed8c;
            pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar38,(pPVar35->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
            if ((((pIVar23 != (Il2CppObject *)0x0) && (pIVar23[2].klass != (Il2CppClass *)0x0)) &&
                (pvVar28 = ((pIVar23[2].klass)->_1).typeMetadataHandle, pvVar28 != (void *)0x0)) &&
               (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455edce;
              bVar12 = System_Collections_Generic_HashSet_object___Contains
                                 (__this_00,*(Il2CppObject **)((long)pvVar28 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar12 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ede3;
                il2cpp_runtime_helper_02337ed0();
              }
              Anticheat_AnticheatManager__KickPlayer(pPVar35,0,"",(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0455ee6e;
        }
      }
      pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee7d;
      il2cpp_runtime_helper_022b2c90();
label_0455ee7d:
      pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee82;
      auVar46 = il2cpp_runtime_helper_022b2c90();
      if (auVar46._8_4_ != 1) {
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef25;
        _Unwind_Resume(auVar46._0_8_);
      }
      pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eec0;
      puVar24 = (undefined8 *)__cxa_begin_catch(auVar46._0_8_);
      pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eecf;
      uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eedd;
      cVar11 = il2cpp_runtime_helper_0233e000(uVar25,*(undefined8 *)*puVar24);
      if (cVar11 == '\0') {
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)0x455eefe;
        puVar26 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar26 = *puVar24;
        pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef15;
        __cxa_throw(puVar26,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      return;
    }
    pIVar18 = TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af075 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"Game/CustomLogicPhotonSyncPrefab");
    g_data_057af075 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  pPVar35 = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar42 = SUB84(pPVar35,0);
  uVar44 = (undefined4)((ulong)pPVar35 >> 0x20);
  fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    uVar42 = SUB84(pPVar35,0);
    uVar44 = (undefined4)((ulong)pPVar35 >> 0x20);
    g_data_057a6843 = '\x01';
    in_stack_ffffffffffffff18 = pPVar35;
  }
  fVar2 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->x;
  rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    in_stack_ffffffffffffff18 = (Photon_Realtime_Player_o *)CONCAT44(uVar44,uVar42);
    il2cpp_runtime_helper_02337ed0();
    uVar42 = SUB84(in_stack_ffffffffffffff18,0);
    uVar44 = (undefined4)((ulong)in_stack_ffffffffffffff18 >> 0x20);
  }
  message = (MethodInfo_255A0F0 *)0x0;
  UVar47.fields.y = (float)uVar44;
  UVar47.fields.x = (float)uVar42;
  UVar47.fields.z = fVar41;
  pUVar27 = Photon_Pun_PhotonNetwork__Instantiate
                      ("Game/CustomLogicPhotonSyncPrefab",UVar47,(UnityEngine_Quaternion_o)rotation,'\0',(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
  iVar40 = (int32_t)pIVar18;
  if ((pUVar27 != (UnityEngine_GameObject_o *)0x0) &&
     (message = MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync, pIVar23 = UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync),
     pIVar23 != (Il2CppObject *)0x0)) {
    if (g_data_057adbaa == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item,(ulong)pIVar18 & 0xffffffff,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"InitRPC");
      g_data_057adbaa = '\x01';
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
      il2cpp_runtime_helper_02337ed0();
      pSVar38 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
      pIVar13 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar38,iVar40,MethodInfo_MapObject_get_Item);
      pIVar23[4].monitor = pIVar13;
      il2cpp_runtime_helper_022b4080(&pIVar23[4].monitor);
      if ((pIVar23[4].monitor == (void *)0x0) ||
         (pUVar27 = *(UnityEngine_GameObject_o **)((long)pIVar23[4].monitor + 0x18),
         pUVar27 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar37 = pIVar23[4].klass;
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (pSVar21 == (System_Object_array *)0x0) goto label_042578ec;
      pIVar23 = pIVar13;
      if ((pIVar13 == (Il2CppObject *)0x0) || (lVar22 = il2cpp_runtime_helper_023051f0(pIVar13), lVar22 != 0)) {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = pIVar13;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pIVar13);
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
          if ((pIVar23 != (Il2CppObject *)0x0) && (lVar22 = il2cpp_runtime_helper_023051f0(pIVar23), lVar22 == 0))
          goto label_042578f6;
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = pIVar23;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
            if (pIVar37 != (Il2CppClass *)0x0) {
              Photon_Pun_PhotonView__RPC
                        ((Photon_Pun_PhotonView_o *)pIVar37,"InitRPC",3,pSVar21,(MethodInfo *)0x0);
              return;
            }
            goto label_042578ec;
          }
        }
        goto label_042578f1;
      }
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
      pSVar38 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar38 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
      il2cpp_runtime_helper_022b2c90();
label_042578f1:
      il2cpp_runtime_helper_022b2ca0();
    }
label_042578f6:
    __this_02 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
    uVar30 = 0;
    il2cpp_runtime_helper_022b2b10();
    if (g_data_057adbab == '\0') {
      pSStack_128 = (System_Object_array *)0x4257939;
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      pSStack_128 = (System_Object_array *)0x4257945;
      il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
      g_data_057adbab = '\x01';
    }
    pPVar15 = (__this_02->fields).PhotonView;
    pSStack_128 = (System_Object_array *)0x4257964;
    pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pSStack_128 = (System_Object_array *)0x4257981;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
    if (pSVar21 == (System_Object_array *)0x0) {
label_04257a3d:
      pIVar13 = pIVar23;
      pSStack_128 = (System_Object_array *)0x4257a42;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (pIVar13 == (Il2CppObject *)0x0) {
label_042579ab:
        pIVar23 = pIVar13;
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = pIVar13;
          pSStack_128 = (System_Object_array *)0x42579c5;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
          if (csvScript != (System_String_o *)0x0) {
            pSStack_128 = (System_Object_array *)0x42579da;
            lVar22 = il2cpp_runtime_helper_023051f0(csvScript);
            if (lVar22 == 0) goto label_04257a42;
          }
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = (Il2CppObject *)csvScript;
            pSStack_128 = (System_Object_array *)0x42579f8;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
            if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
              pSStack_128 = (System_Object_array *)0x4257a1a;
              Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar21,(MethodInfo *)0x0);
              pSStack_128 = (System_Object_array *)0x4257a29;
              CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                        (__this_02,uVar30 & 0xff,csvScript,(MethodInfo *)pSVar21);
              return;
            }
            goto label_04257a3d;
          }
        }
        pSStack_128 = (System_Object_array *)0x4257a3d;
        il2cpp_runtime_helper_022b2ca0();
        goto label_04257a3d;
      }
      pSStack_128 = (System_Object_array *)0x42579a2;
      lVar22 = il2cpp_runtime_helper_023051f0(pIVar13);
      if (lVar22 != 0) goto label_042579ab;
    }
label_04257a42:
    pSStack_128 = (System_Object_array *)0x4257a47;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
    uVar31 = 0;
    pSStack_128 = (System_Object_array *)0x4257a51;
    auVar48 = il2cpp_runtime_helper_022b2b10();
    pSVar19 = auVar48._8_8_;
    uStack_158 = auVar48._0_8_;
    pIStack_150 = pIVar13;
    pPStack_148 = pPVar15;
    pSStack_140 = csvScript;
    pCStack_138 = __this_02;
    pCStack_130 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar30;
    pSStack_128 = pSVar21;
    if (g_data_057adbac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adbac = '\x01';
    }
    bVar12 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar31;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar30 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar30;
    iVar4 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
    fVar41 = 0.0;
    pSVar34 = pSVar14;
    pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
    if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
    uVar30 = (uVar30 - iVar4) - (pPVar15->fields).viewIdField;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar30;
    pSVar14->m_Items[1].fields.hashCode = uVar30;
    if (pSVar19 == (System_String_o *)0x0) goto label_04257fa3;
    value = System_String__Split(pSVar19,10,0,(MethodInfo *)0x0);
    pSVar19 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    fVar41 = 0.0;
    pSVar34 = __this_03;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_03,(MethodInfo *)0x0);
    if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
    goto label_04257fa3;
    pIVar37 = (__this_03->obj).klass;
    (*pIVar37->vtable[9].methodPtr)(__this_03,pSVar19,pIVar37->vtable[9].method);
    __this_03->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
    __this_03->m_Items[0].fields.next = 0;
    *(undefined1 *)((long)&__this_03->m_Items[0].fields.key + 3) = 1;
    fVar41 = 0.0;
    pSVar34 = __this_03;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_03,0,(MethodInfo *)0x0);
    if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
    *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
    Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
    pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
    CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar16,mapObject,(MethodInfo *)0x0);
    pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar16;
    il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar16);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor
              ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_03,mapObject,(MethodInfo *)0x0);
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields =
         __this_03;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_03);
    ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[1].fields.value;
    pSVar14->m_Items[1].fields.value = (Il2CppObject *)mapObject;
    pMVar33 = mapObject;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    fVar41 = SUB84(pMVar33,0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    pSVar34 = TypeInfo_CustomLogicManager;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x38);
    pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar38,(int32_t)fVar41,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_158 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_158);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_158 + 4);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar41 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar34 = TypeInfo_CustomLogicManager;
    if ((pvVar28 == (void *)0x0) ||
       (pSVar34 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar28 + 0x38),
       pSVar34 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    System_Collections_Generic_Dictionary_int__object___set_Item
              ((System_Collections_Generic_Dictionary_int__object__o *)pSVar34,(int32_t)fVar41,
               (Il2CppObject *)
               *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
                &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar38 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28);
    pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar38 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar38,(int32_t)fVar41,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_158 = CONCAT44(uStack_158._4_4_,pSVar14->m_Items[1].fields.hashCode);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_158);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar41 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar34 = TypeInfo_CustomLogicManager;
    if (pvVar28 != (void *)0x0) {
      pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28),
                   (int32_t)fVar41,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
        pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
        pSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar16 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          pSVar34 = pSVar14;
          CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                    (pCVar16,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
          fVar41 = SUB84(pSVar34,0);
          pSVar34 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pSVar34 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar34,mapObject,1,(MethodInfo *)0x0);
            fVar41 = SUB84(mapObject,0);
            pSVar5 = *ppSVar1;
            if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
               && (pSVar34 = (pSVar5->fields)._entries,
                  pSVar34 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              fVar41 = 0.0;
              pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar34,(MethodInfo *)0x0);
              if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                fVar41 = 0.0;
                UVar47 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar17,(MethodInfo *)0x0);
                pSVar14->m_Items[2].fields.value = (Il2CppObject *)UVar47.fields._0_8_;
                pSVar14->m_Items[3].fields.hashCode = (int32_t)UVar47.fields.z;
                pSVar5 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                         pSVar14->m_Items[1].fields.value;
                pSVar34 = pSVar17;
                if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                               0x0) &&
                   (pSVar34 = (pSVar5->fields)._entries,
                   pSVar34 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                  fVar41 = 0.0;
                  __this_04 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar34,(MethodInfo *)0x0);
                  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
                    UVar45 = UnityEngine_Transform__get_rotation(__this_04,(MethodInfo *)0x0);
                    *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar45.fields;
                    *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_04257fa3:
    il2cpp_runtime_helper_022b2c90();
    pCVar6 = (CustomLogic_CustomLogicStartAst_o *)pSVar34->m_Items[1].fields.key;
    pSVar14 = pSVar34;
    fVar2 = fVar41;
    if (pCVar6 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
      if (pPStack_148 != pCVar6[3].monitor) {
        return;
      }
      *(undefined1 *)((long)&pSVar34->m_Items[0].fields.key + 1) = extraout_DL;
      if (g_data_057adbae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
        g_data_057adbae = '\x01';
      }
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
      fVar2 = 0.0;
      pSVar14 = pSVar17;
      System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar17->bounds)->_networkCallback = 0;
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar17->m_Items[0].fields.key = &pSVar34->obj;
        il2cpp_runtime_helper_022b4080(&pSVar17->m_Items[0].fields.key,pSVar34);
        pSVar17->m_Items[0].fields.hashCode = (int32_t)fVar41;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pSVar34,(System_Collections_IEnumerator_o *)pSVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    uVar31 = 0;
    pIVar37 = pIVar18;
    System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar18->_1).name = 0;
    if (pIVar18 != (Il2CppClass *)0x0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar18->_1).byval_arg.bits =
           pSVar14;
      il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg.bits,pSVar14);
      *(float *)&(pIVar18->_1).byval_arg.data = fVar2;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar18 = (pIVar37->_1).element_class;
    pIVar36 = pIVar37;
    uVar32 = uVar31;
    if (pIVar18 != (Il2CppClass *)0x0) {
      if (__this_03 != (pIVar18->_1).fields) {
        return;
      }
      if (g_data_057adbad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
        g_data_057adbad = '\x01';
      }
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
      uVar32 = 0;
      pIVar36 = pIVar18;
      System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar18->_1).name = 0;
      if (pIVar18 != (Il2CppClass *)0x0) {
        (pIVar18->_1).byval_arg.data = pIVar37;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg,pIVar37);
        *(undefined1 *)&(pIVar18->_1).byval_arg.bits = uVar31;
        (pIVar18->_1).this_arg.data = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).this_arg,extraout_RDX);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar37,(System_Collections_IEnumerator_o *)pIVar18,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar43 = 0;
    pIVar23 = pIVar13;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar23,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar23[1].klass = uVar43;
      return;
    }
    pIVar13[2].klass = pIVar36;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar36);
    *(undefined1 *)&pIVar13[2].monitor = uVar32;
    pIVar13[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar13 + 3,extraout_RDX_00);
    return;
  }
  uVar25 = il2cpp_runtime_helper_022b2c90();
  uVar49 = 0;
  uVar42 = (undefined4)uVar25;
  uVar44 = (undefined4)((ulong)uVar25 >> 0x20);
  if (g_data_057af076 == '\0') {
    pSStack_128 = (System_Object_array *)0x45719b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0457194c;
label_045719d8:
    pSStack_128 = (System_Object_array *)0x45719dd;
    il2cpp_runtime_helper_02337ed0();
    pCStack_130 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_045719d8;
label_0457194c:
    pCStack_130 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  if (pCStack_130 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    pSStack_128 = (System_Object_array *)0x457196f;
    il2cpp_runtime_helper_02337ed0();
    pCStack_130 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pIVar18 = (Il2CppClass *)0x0;
  pSStack_128 = (System_Object_array *)0x457198c;
  __this_01.fields._4_4_ = uVar44;
  __this_01.fields.timeInt = uVar42;
  __this_01.fields.Sender._0_4_ = iVar40;
  __this_01.fields.Sender._4_4_ = uVar49;
  __this_01.fields.photonView._0_4_ = score_00;
  __this_01.fields.photonView._4_4_ = uVar43;
  sentServerTimestamp =
       Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&stack0xffffffffffffff10);
  if (pCStack_130 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSStack_128 = (System_Object_array *)0x45719a1;
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (pCStack_130,in_stack_ffffffffffffff18,(System_String_o *)message,sentServerTimestamp,
               (MethodInfo *)0x0);
    return;
  }
  pSStack_128 = (System_Object_array *)0x45719fc;
  pCStack_138 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_022b2c90();
  pIVar36 = pIVar18;
  pSStack_128 = (System_Object_array *)pIVar37;
  if (g_data_057af077 == '\0') {
    pSStack_140 = (System_String_o *)0x4571a1f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_140 = (System_String_o *)0x4571a2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if ((Photon_Realtime_Player_o *)CONCAT44(uVar43,score_00) == (Photon_Realtime_Player_o *)0x0) {
label_04571aa0:
    pSStack_140 = (System_String_o *)0x4571aa5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar36 = (Il2CppClass *)0x0;
    pSStack_140 = (System_String_o *)0x4571a42;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)CONCAT44(uVar43,score_00),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar9 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar36 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar9,(uint)pIVar18 & 0xff,method_00);
      return;
    }
  }
  pSStack_140 = (System_String_o *)0x4571aaa;
  pPStack_160 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar37 = pIVar36;
  pPStack_148 = (Photon_Pun_PhotonView_o *)&stack0xfffffffffffffee8;
  pSStack_140 = (System_String_o *)((ulong)pIVar18 & 0xffffffff);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (pSStack_128 == (System_Object_array *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar37 = (Il2CppClass *)0x0;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)pSStack_128,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar9 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar37 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = fVar41;
      position.fields._0_8_ = pPStack_160;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar9,(uint)pIVar36 & 0xff,position,fVar2,method_01);
      return;
    }
  }
  uVar43 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (pPStack_160 == (Photon_Realtime_Player_o *)0x0) {
label_04571c2f:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af07a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      g_data_057af07a = '\x01';
    }
    uStack_1c0 = CONCAT44(uVar43,uStack_180);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields.Sender = (Photon_Realtime_Player_o *)&pCStack_130;
    info_00.fields._0_8_ = uStack_1c0;
    info_00.fields.photonView = pPStack_170;
    GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar37,senderTimestamp,info_00,(MethodInfo *)0x0);
    return;
  }
  pIVar37 = (Il2CppClass *)0x0;
  bVar12 = Photon_Realtime_Player__get_IsMasterClient(pPStack_160,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    if (pvVar28 != (void *)0x0) {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pvVar28 == (void *)0x0) goto label_04571c2f;
      }
      *(undefined4 *)((long)pvVar28 + 0x20) = uVar43;
    }
  }
  return;
}


// GameManagers.RPCManager$$ShowKillFeedWithPlayersRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571570

void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_00;
  GameManagers_InGameManager_o *pGVar9;
  long *plVar10;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_01;
  Photon_Pun_PhotonMessageInfo_o info_01;
  UnityEngine_Quaternion_Fields rotation;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_02;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  UnityEngine_Transform_o *__this_04;
  Il2CppClass *pIVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  System_Object_array *pSVar21;
  long lVar22;
  Settings_PresetSettingsContainer_o *__this_06;
  Settings_PresetSettingsContainer_c *__this_07;
  Il2CppObject *pIVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  UnityEngine_GameObject_o *pUVar27;
  void *pvVar28;
  undefined1 extraout_DL;
  System_String_o *csvScript;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  UI_ChatPanel_o *__this_08;
  undefined8 unaff_RBX;
  uint uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  Map_MapObject_o *pMVar32;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar33;
  Photon_Realtime_Player_o *pPVar34;
  Photon_Realtime_Player_o *player;
  MethodInfo_255A0F0 *message;
  Il2CppClass *pIVar35;
  Il2CppClass *pIVar36;
  System_Collections_Generic_Dictionary_int__object__o *pSVar37;
  UnityEngine_Component_o *__this_09;
  UI_InGameMenu_o *__this_10;
  undefined8 unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R13;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  UnityEngine_Quaternion_o UVar41;
  undefined1 auVar42 [12];
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o position;
  undefined1 auVar44 [16];
  undefined8 uStack_198;
  undefined4 uStack_158;
  Photon_Pun_PhotonView_o *pPStack_148;
  Photon_Realtime_Player_o *pPStack_138;
  undefined8 uStack_130;
  Il2CppObject *pIStack_128;
  Photon_Pun_PhotonView_o *pPStack_120;
  System_String_o *pSStack_118;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_110;
  CustomLogic_CustomLogicEvaluator_o *pCStack_108;
  System_Object_array *pSStack_100;
  int32_t iVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  Photon_Realtime_Player_o *in_stack_ffffffffffffff40;
  Photon_Realtime_Player_o *in_stack_ffffffffffffff90;
  
  pIVar35 = (Il2CppClass *)killer;
  if (g_data_057af072 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057af072 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_045715ae;
label_04571654:
    il2cpp_runtime_helper_02337ed0();
    __this_10 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_10 != (UI_InGameMenu_o *)0x0) goto label_045715c2;
label_04571670:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04571654;
label_045715ae:
    __this_10 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_10 == (UI_InGameMenu_o *)0x0) goto label_04571670;
label_045715c2:
    bVar3 = (TypeInfo_InGameMenu->_2).naturalAligment;
    pIVar35 = TypeInfo_InGameMenu;
    if ((bVar3 <= (__this_10->klass->_2).naturalAligment) &&
       ((__this_10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillFeed_42c8210
                (__this_10,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0);
      return;
    }
  }
  fVar38 = (float)il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af073 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af073 = '\x01';
  }
  pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar9 != (GameManagers_InGameManager_o *)0x0) {
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      info_01.fields.Sender = (Photon_Realtime_Player_o *)unaff_R12;
      info_01.fields._0_8_ = unaff_RBX;
      info_01.fields.photonView = unaff_R13;
      GameManagers_InGameManager__EndGame(pGVar9,fVar38,info_01,(MethodInfo *)TypeInfo_InGameManager);
      return;
    }
    pIVar35 = TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af074 = '\x01';
  }
  plVar10 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar10 != (long *)0x0) {
    lVar22 = *plVar10;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= *(byte *)(lVar22 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(lVar22 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_InGameManager)) {
      pPVar34 = in_stack_ffffffffffffff90;
      if (g_data_057aefe8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&" has joined the room.");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefe8 = '\x01';
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0455e01b;
label_0455e1ee:
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar33 = TypeInfo_CustomLogicManager;
        if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e05d;
label_0455e02b:
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) {
label_0455e050:
          pPVar34 = in_stack_ffffffffffffff90;
          CustomLogic_CustomLogicEvaluator__OnPlayerJoin
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar14,in_stack_ffffffffffffff90,(MethodInfo *)0x0
                    );
          pSVar33 = pSVar14;
          goto label_0455e05d;
        }
        pSVar33 = TypeInfo_CustomLogicManager;
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e050;
      }
      else {
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_0455e1ee;
label_0455e01b:
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar33 = TypeInfo_CustomLogicManager;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e02b;
label_0455e05d:
        lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
          if (*(char *)(lVar22 + 0x11) != '\0') {
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = PhotonExtensions__GetStringProperty
                                (in_stack_ffffffffffffff90,
                                 (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,(MethodInfo *)0x0);
            pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
            GameManagers_ChatManager__AddLine
                      (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          else {
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          if (cVar11 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefe9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"");
        il2cpp_runtime_helper_023445d0(&" has left the room.");
        g_data_057aefe9 = '\x01';
      }
      Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar33,pPVar34,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (UnityEngine_Component_o *)0x0) goto label_0455e371;
label_0455e3a1:
        __this_08 = (UI_ChatPanel_o *)0x0;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 == (UnityEngine_Component_o *)0x0) goto label_0455e3a1;
label_0455e371:
        pIVar23 = UnityEngine_Component__GetComponent_object_(__this_09,MethodInfo_InGameMenu_GetComponent_InGameMenu);
        if (pIVar23 == (Il2CppObject *)0x0) goto label_0455e3a1;
        __this_08 = pIVar23[0xc].monitor;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = (Photon_Realtime_Player_o *)0x0;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
label_0455e3eb:
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pPVar34 != (Photon_Realtime_Player_o *)0x0) &&
           (pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18),
           pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          uVar29 = (pPVar34->fields).actorNumber;
          player = (Photon_Realtime_Player_o *)(ulong)uVar29;
          bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar37,uVar29,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 != '\0') {
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18);
            if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455e816;
            uVar29 = (pPVar34->fields).actorNumber;
            player = (Photon_Realtime_Player_o *)(ulong)uVar29;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar37,uVar29,MethodInfo_Boolean_Remove);
          }
          lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
            if (*(char *)(lVar22 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar19 = PhotonExtensions__GetStringProperty
                                  (pPVar34,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                   "",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = GameManagers_ChatManager__GetColorString(" has left the room.",3,0,(MethodInfo *)0x0);
              pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
              player = (Photon_Realtime_Player_o *)0x0;
              GameManagers_ChatManager__AddLine
                        (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
            }
            if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            else {
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            if (__this_05 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
                if (__this_05 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0455e816;
              }
              player = pPVar34;
              CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_05,pPVar34,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20)
            ;
            if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              uVar29 = (pPVar34->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar29;
              bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
              if ((char)bVar12 != '\0') {
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x20);
                if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                uVar29 = (pPVar34->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
              }
              if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                        ((long)TypeInfo_InGameManager->static_fields + 0x28);
              if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                uVar29 = (pPVar34->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
                if ((char)bVar12 != '\0') {
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x28);
                  if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                  uVar29 = (pPVar34->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                  System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
                }
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x30);
                if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  uVar29 = (pPVar34->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                  bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
                  if ((char)bVar12 != '\0') {
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x30);
                    if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                    uVar29 = (pPVar34->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                    System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
                  }
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x38);
                  if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    uVar29 = (pPVar34->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                    bVar12 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                                       (pSVar8,uVar29,MethodInfo_Boolean_ContainsKey);
                    if ((char)bVar12 == '\0') {
label_0455e782:
                      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      Anticheat_AnticheatManager__ResetVoteKicks(pPVar34,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      else {
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      if (cVar11 == '\0') {
                        return;
                      }
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x38);
                    if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                      System_Collections_Generic_Dictionary_int__float___Remove
                                (pSVar8,(pPVar34->fields).actorNumber,MethodInfo_Boolean_Remove);
                      goto label_0455e782;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (__this_08 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__RemovePMPartner(__this_08,pPVar34,(MethodInfo *)0x0);
        player = (Photon_Realtime_Player_o *)0x0;
        UI_ChatPanel__Sync(__this_08,(MethodInfo *)0x0);
        goto label_0455e3eb;
      }
label_0455e816:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"InGame");
        il2cpp_runtime_helper_023445d0(&"MasterclientChangeTo");
        il2cpp_runtime_helper_023445d0(&"Chat");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefea = '\x01';
      }
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = PhotonExtensions__GetStringProperty
                          (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (pSVar21 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0455ea6c:
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((pSVar19 == (System_String_o *)0x0) ||
              (lVar22 = il2cpp_runtime_helper_023051f0(pSVar19,(((pSVar21->obj).klass)->_1).element_class), lVar22 != 0))
      {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = (Il2CppObject *)pSVar19;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pSVar19);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar19 = UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","MasterclientChangeTo",pSVar21,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_100 = (System_Object_array *)0x455e9e4;
          GameManagers_ChatManager__AddLine
                    (pSVar19,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar35 = TypeInfo_InGameManager;
          }
          else {
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar35 = TypeInfo_InGameManager;
          }
          if (cVar11 != '\0') {
            TypeInfo_InGameManager = pIVar35;
            if (*(int *)&(pIVar35->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
              GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar35);
              return;
            }
            GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar35);
            return;
          }
          TypeInfo_InGameManager = pIVar35;
          return;
        }
        goto label_0455ea6c;
      }
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_0231b270();
      pSStack_100 = (System_Object_array *)il2cpp_runtime_helper_022b2b10(pSVar21,0);
      if (g_data_057aefeb == '\0') {
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaa3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaaf;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eabb;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eac7;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ead3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eadf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaeb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaf7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb03;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb0f;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefeb = '\x01';
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb34;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((pPVar34 == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18),
         pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
label_0455ee6e:
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee73;
        il2cpp_runtime_helper_022b2c90();
label_0455ee73:
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee78;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb6c;
        bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 == '\0') {
          pSStack_100 = pSVar21;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb8f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          iVar45 = (pPVar34->fields).actorNumber;
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebb4;
          __this_06 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
          if (g_data_057af051 == '\0') {
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebcc;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
            g_data_057af051 = '\x01';
          }
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebe2;
          __this_07 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebef;
          Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)__this_07,(MethodInfo *)0x0);
          __this_06[1].klass = __this_07;
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec02;
          il2cpp_runtime_helper_022b4080(__this_06 + 1);
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec0c;
          Settings_BaseSettingsContainer___ctor(__this_06,(MethodInfo *)0x0);
          if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee6e;
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec2d;
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar37,iVar45,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
          pSVar21 = pSStack_100;
        }
        if (pSVar21 == (System_Object_array *)0x0) {
          return;
        }
        if (0x4000 < (int)((System_Byte_array *)pSVar21)->max_length) {
          return;
        }
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec5d;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   ((long)TypeInfo_InGameManager->static_fields + 0x18);
        if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee73;
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec89;
        pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eca4;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
            (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eccf;
          pSVar19 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              ((Utility_Algorithms_CompressionAlgorithm_o *)
                               **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),(System_Byte_array *)pSVar21,0x1000,
                               0xa00000,(MethodInfo *)0x0);
          if (pIVar23 == (Il2CppObject *)0x0) goto label_0455ee7d;
          pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ecee;
          (*pIVar23->klass->vtable[8].methodPtr)(pIVar23,pSVar19,pIVar23->klass->vtable[8].method);
          iVar45 = (pPVar34->fields).actorNumber;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee1b;
            il2cpp_runtime_helper_02337ed0();
            if (g_data_057af00c != '\0') goto label_0455ed10;
label_0455ee28:
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee34;
            il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
            g_data_057af00c = '\x01';
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455ed21;
label_0455ee4c:
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee51;
            il2cpp_runtime_helper_02337ed0();
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          else {
            if (g_data_057af00c == '\0') goto label_0455ee28;
label_0455ed10:
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455ee4c;
label_0455ed21:
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          if (lVar22 != 0) {
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed3e;
            (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),iVar45,*(undefined8 *)(lVar22 + 0x28))
            ;
          }
          if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed56;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          if (pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                         (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
            pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed8c;
            pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
            if ((((pIVar23 != (Il2CppObject *)0x0) && (pIVar23[2].klass != (Il2CppClass *)0x0)) &&
                (pvVar28 = ((pIVar23[2].klass)->_1).typeMetadataHandle, pvVar28 != (void *)0x0)) &&
               (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455edce;
              bVar12 = System_Collections_Generic_HashSet_object___Contains
                                 (__this_00,*(Il2CppObject **)((long)pvVar28 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar12 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ede3;
                il2cpp_runtime_helper_02337ed0();
              }
              Anticheat_AnticheatManager__KickPlayer(pPVar34,0,"",(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0455ee6e;
        }
      }
      pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee7d;
      il2cpp_runtime_helper_022b2c90();
label_0455ee7d:
      pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee82;
      auVar42 = il2cpp_runtime_helper_022b2c90();
      if (auVar42._8_4_ != 1) {
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef25;
        _Unwind_Resume(auVar42._0_8_);
      }
      pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eec0;
      puVar24 = (undefined8 *)__cxa_begin_catch(auVar42._0_8_);
      pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eecf;
      uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eedd;
      cVar11 = il2cpp_runtime_helper_0233e000(uVar25,*(undefined8 *)*puVar24);
      if (cVar11 == '\0') {
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)0x455eefe;
        puVar26 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar26 = *puVar24;
        pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef15;
        __cxa_throw(puVar26,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      return;
    }
    pIVar35 = TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af075 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"Game/CustomLogicPhotonSyncPrefab");
    g_data_057af075 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  pPVar34 = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar39 = SUB84(pPVar34,0);
  uVar40 = (undefined4)((ulong)pPVar34 >> 0x20);
  fVar38 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    uVar39 = SUB84(pPVar34,0);
    uVar40 = (undefined4)((ulong)pPVar34 >> 0x20);
    g_data_057a6843 = '\x01';
    in_stack_ffffffffffffff40 = pPVar34;
  }
  fVar2 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->x;
  rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    in_stack_ffffffffffffff40 = (Photon_Realtime_Player_o *)CONCAT44(uVar40,uVar39);
    il2cpp_runtime_helper_02337ed0();
    uVar39 = SUB84(in_stack_ffffffffffffff40,0);
    uVar40 = (undefined4)((ulong)in_stack_ffffffffffffff40 >> 0x20);
  }
  message = (MethodInfo_255A0F0 *)0x0;
  UVar43.fields.y = (float)uVar40;
  UVar43.fields.x = (float)uVar39;
  UVar43.fields.z = fVar38;
  pUVar27 = Photon_Pun_PhotonNetwork__Instantiate
                      ("Game/CustomLogicPhotonSyncPrefab",UVar43,(UnityEngine_Quaternion_o)rotation,'\0',(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
  iVar45 = (int32_t)pIVar35;
  if ((pUVar27 != (UnityEngine_GameObject_o *)0x0) &&
     (message = MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync, pIVar23 = UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync),
     pIVar23 != (Il2CppObject *)0x0)) {
    if (g_data_057adbaa == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item,(ulong)pIVar35 & 0xffffffff,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"InitRPC");
      g_data_057adbaa = '\x01';
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
      il2cpp_runtime_helper_02337ed0();
      pSVar37 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
      pIVar13 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar37,iVar45,MethodInfo_MapObject_get_Item);
      pIVar23[4].monitor = pIVar13;
      il2cpp_runtime_helper_022b4080(&pIVar23[4].monitor);
      if ((pIVar23[4].monitor == (void *)0x0) ||
         (pUVar27 = *(UnityEngine_GameObject_o **)((long)pIVar23[4].monitor + 0x18),
         pUVar27 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar35 = pIVar23[4].klass;
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (pSVar21 == (System_Object_array *)0x0) goto label_042578ec;
      pIVar23 = pIVar13;
      if ((pIVar13 == (Il2CppObject *)0x0) || (lVar22 = il2cpp_runtime_helper_023051f0(pIVar13), lVar22 != 0)) {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = pIVar13;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pIVar13);
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
          if ((pIVar23 != (Il2CppObject *)0x0) && (lVar22 = il2cpp_runtime_helper_023051f0(pIVar23), lVar22 == 0))
          goto label_042578f6;
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = pIVar23;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
            if (pIVar35 != (Il2CppClass *)0x0) {
              Photon_Pun_PhotonView__RPC
                        ((Photon_Pun_PhotonView_o *)pIVar35,"InitRPC",3,pSVar21,(MethodInfo *)0x0);
              return;
            }
            goto label_042578ec;
          }
        }
        goto label_042578f1;
      }
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
      pSVar37 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
      il2cpp_runtime_helper_022b2c90();
label_042578f1:
      il2cpp_runtime_helper_022b2ca0();
    }
label_042578f6:
    __this_02 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
    uVar29 = 0;
    il2cpp_runtime_helper_022b2b10();
    if (g_data_057adbab == '\0') {
      pSStack_100 = (System_Object_array *)0x4257939;
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      pSStack_100 = (System_Object_array *)0x4257945;
      il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
      g_data_057adbab = '\x01';
    }
    pPVar15 = (__this_02->fields).PhotonView;
    pSStack_100 = (System_Object_array *)0x4257964;
    pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pSStack_100 = (System_Object_array *)0x4257981;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
    if (pSVar21 == (System_Object_array *)0x0) {
label_04257a3d:
      pIVar13 = pIVar23;
      pSStack_100 = (System_Object_array *)0x4257a42;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      if (pIVar13 == (Il2CppObject *)0x0) {
label_042579ab:
        pIVar23 = pIVar13;
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = pIVar13;
          pSStack_100 = (System_Object_array *)0x42579c5;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
          if (csvScript != (System_String_o *)0x0) {
            pSStack_100 = (System_Object_array *)0x42579da;
            lVar22 = il2cpp_runtime_helper_023051f0(csvScript);
            if (lVar22 == 0) goto label_04257a42;
          }
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = (Il2CppObject *)csvScript;
            pSStack_100 = (System_Object_array *)0x42579f8;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
            if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
              pSStack_100 = (System_Object_array *)0x4257a1a;
              Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar21,(MethodInfo *)0x0);
              pSStack_100 = (System_Object_array *)0x4257a29;
              CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                        (__this_02,uVar29 & 0xff,csvScript,(MethodInfo *)pSVar21);
              return;
            }
            goto label_04257a3d;
          }
        }
        pSStack_100 = (System_Object_array *)0x4257a3d;
        il2cpp_runtime_helper_022b2ca0();
        goto label_04257a3d;
      }
      pSStack_100 = (System_Object_array *)0x42579a2;
      lVar22 = il2cpp_runtime_helper_023051f0(pIVar13);
      if (lVar22 != 0) goto label_042579ab;
    }
label_04257a42:
    pSStack_100 = (System_Object_array *)0x4257a47;
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
    uVar30 = 0;
    pSStack_100 = (System_Object_array *)0x4257a51;
    auVar44 = il2cpp_runtime_helper_022b2b10();
    pSVar19 = auVar44._8_8_;
    uStack_130 = auVar44._0_8_;
    pIStack_128 = pIVar13;
    pPStack_120 = pPVar15;
    pSStack_118 = csvScript;
    pCStack_110 = __this_02;
    pCStack_108 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar29;
    pSStack_100 = pSVar21;
    if (g_data_057adbac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adbac = '\x01';
    }
    bVar12 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar30;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar29 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar29;
    iVar4 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
    fVar38 = 0.0;
    pSVar33 = pSVar14;
    pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
    if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
    uVar29 = (uVar29 - iVar4) - (pPVar15->fields).viewIdField;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar29;
    pSVar14->m_Items[1].fields.hashCode = uVar29;
    if (pSVar19 == (System_String_o *)0x0) goto label_04257fa3;
    value = System_String__Split(pSVar19,10,0,(MethodInfo *)0x0);
    pSVar19 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    fVar38 = 0.0;
    pSVar33 = __this_03;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_03,(MethodInfo *)0x0);
    if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
    goto label_04257fa3;
    pIVar35 = (__this_03->obj).klass;
    (*pIVar35->vtable[9].methodPtr)(__this_03,pSVar19,pIVar35->vtable[9].method);
    __this_03->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
    __this_03->m_Items[0].fields.next = 0;
    *(undefined1 *)((long)&__this_03->m_Items[0].fields.key + 3) = 1;
    fVar38 = 0.0;
    pSVar33 = __this_03;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_03,0,(MethodInfo *)0x0);
    if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
    *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
    Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
    pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
    CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar16,mapObject,(MethodInfo *)0x0);
    pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar16;
    il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar16);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor
              ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_03,mapObject,(MethodInfo *)0x0);
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields =
         __this_03;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_03);
    ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[1].fields.value;
    pSVar14->m_Items[1].fields.value = (Il2CppObject *)mapObject;
    pMVar32 = mapObject;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    fVar38 = SUB84(pMVar32,0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    pSVar33 = TypeInfo_CustomLogicManager;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x38);
    pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar38 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar37,(int32_t)fVar38,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_130 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_130);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_130 + 4);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar38 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar33 = TypeInfo_CustomLogicManager;
    if ((pvVar28 == (void *)0x0) ||
       (pSVar33 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar28 + 0x38),
       pSVar33 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
    fVar38 = (float)pSVar14->m_Items[1].fields.hashCode;
    System_Collections_Generic_Dictionary_int__object___set_Item
              ((System_Collections_Generic_Dictionary_int__object__o *)pSVar33,(int32_t)fVar38,
               (Il2CppObject *)
               *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
                &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28);
    pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar38 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar37,(int32_t)fVar38,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_130 = CONCAT44(uStack_130._4_4_,pSVar14->m_Items[1].fields.hashCode);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_130);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar38 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar33 = TypeInfo_CustomLogicManager;
    if (pvVar28 != (void *)0x0) {
      pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        fVar38 = (float)pSVar14->m_Items[1].fields.hashCode;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28),
                   (int32_t)fVar38,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
        pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
        pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar16 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          pSVar33 = pSVar14;
          CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                    (pCVar16,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
          fVar38 = SUB84(pSVar33,0);
          pSVar33 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar33,mapObject,1,(MethodInfo *)0x0);
            fVar38 = SUB84(mapObject,0);
            pSVar5 = *ppSVar1;
            if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
               && (pSVar33 = (pSVar5->fields)._entries,
                  pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              fVar38 = 0.0;
              pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0);
              if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                fVar38 = 0.0;
                UVar43 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar17,(MethodInfo *)0x0);
                pSVar14->m_Items[2].fields.value = (Il2CppObject *)UVar43.fields._0_8_;
                pSVar14->m_Items[3].fields.hashCode = (int32_t)UVar43.fields.z;
                pSVar5 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                         pSVar14->m_Items[1].fields.value;
                pSVar33 = pSVar17;
                if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                               0x0) &&
                   (pSVar33 = (pSVar5->fields)._entries,
                   pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                  fVar38 = 0.0;
                  __this_04 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0);
                  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
                    UVar41 = UnityEngine_Transform__get_rotation(__this_04,(MethodInfo *)0x0);
                    *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar41.fields;
                    *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_04257fa3:
    il2cpp_runtime_helper_022b2c90();
    pCVar6 = (CustomLogic_CustomLogicStartAst_o *)pSVar33->m_Items[1].fields.key;
    pSVar14 = pSVar33;
    fVar2 = fVar38;
    if (pCVar6 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
      if (pPStack_120 != pCVar6[3].monitor) {
        return;
      }
      *(undefined1 *)((long)&pSVar33->m_Items[0].fields.key + 1) = extraout_DL;
      if (g_data_057adbae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
        g_data_057adbae = '\x01';
      }
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
      fVar2 = 0.0;
      pSVar14 = pSVar17;
      System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar17->bounds)->_networkCallback = 0;
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar17->m_Items[0].fields.key = &pSVar33->obj;
        il2cpp_runtime_helper_022b4080(&pSVar17->m_Items[0].fields.key,pSVar33);
        pSVar17->m_Items[0].fields.hashCode = (int32_t)fVar38;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pSVar33,(System_Collections_IEnumerator_o *)pSVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    uVar30 = 0;
    pIVar35 = pIVar18;
    System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar18->_1).name = 0;
    if (pIVar18 != (Il2CppClass *)0x0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar18->_1).byval_arg.bits =
           pSVar14;
      il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg.bits,pSVar14);
      *(float *)&(pIVar18->_1).byval_arg.data = fVar2;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar18 = (pIVar35->_1).element_class;
    pIVar36 = pIVar35;
    uVar31 = uVar30;
    if (pIVar18 != (Il2CppClass *)0x0) {
      if (__this_03 != (pIVar18->_1).fields) {
        return;
      }
      if (g_data_057adbad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
        g_data_057adbad = '\x01';
      }
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
      uVar31 = 0;
      pIVar36 = pIVar18;
      System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar18->_1).name = 0;
      if (pIVar18 != (Il2CppClass *)0x0) {
        (pIVar18->_1).byval_arg.data = pIVar35;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg,pIVar35);
        *(undefined1 *)&(pIVar18->_1).byval_arg.bits = uVar30;
        (pIVar18->_1).this_arg.data = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).this_arg,extraout_RDX);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar35,(System_Collections_IEnumerator_o *)pIVar18,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar39 = 0;
    pIVar23 = pIVar13;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar23,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar23[1].klass = uVar39;
      return;
    }
    pIVar13[2].klass = pIVar36;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar36);
    *(undefined1 *)&pIVar13[2].monitor = uVar31;
    pIVar13[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar13 + 3,extraout_RDX_00);
    return;
  }
  uVar25 = il2cpp_runtime_helper_022b2c90();
  uVar47 = 0;
  uVar46 = 0;
  uVar39 = (undefined4)uVar25;
  uVar40 = (undefined4)((ulong)uVar25 >> 0x20);
  if (g_data_057af076 == '\0') {
    pSStack_100 = (System_Object_array *)0x45719b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0457194c;
label_045719d8:
    pSStack_100 = (System_Object_array *)0x45719dd;
    il2cpp_runtime_helper_02337ed0();
    pCStack_108 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_045719d8;
label_0457194c:
    pCStack_108 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  if (pCStack_108 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    pSStack_100 = (System_Object_array *)0x457196f;
    il2cpp_runtime_helper_02337ed0();
    pCStack_108 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pIVar35 = (Il2CppClass *)0x0;
  pSStack_100 = (System_Object_array *)0x457198c;
  __this_01.fields._4_4_ = uVar40;
  __this_01.fields.timeInt = uVar39;
  __this_01.fields.Sender._0_4_ = iVar45;
  __this_01.fields.Sender._4_4_ = uVar46;
  __this_01.fields.photonView._0_4_ = score;
  __this_01.fields.photonView._4_4_ = uVar47;
  sentServerTimestamp =
       Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&stack0xffffffffffffff38);
  if (pCStack_108 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSStack_100 = (System_Object_array *)0x45719a1;
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (pCStack_108,in_stack_ffffffffffffff40,(System_String_o *)message,sentServerTimestamp,
               (MethodInfo *)0x0);
    return;
  }
  pSStack_100 = (System_Object_array *)0x45719fc;
  pCStack_110 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_022b2c90();
  pIVar18 = pIVar35;
  pSStack_100 = (System_Object_array *)killer;
  if (g_data_057af077 == '\0') {
    pSStack_118 = (System_String_o *)0x4571a1f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_118 = (System_String_o *)0x4571a2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if ((Photon_Realtime_Player_o *)CONCAT44(uVar47,score) == (Photon_Realtime_Player_o *)0x0) {
label_04571aa0:
    pSStack_118 = (System_String_o *)0x4571aa5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar18 = (Il2CppClass *)0x0;
    pSStack_118 = (System_String_o *)0x4571a42;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)CONCAT44(uVar47,score),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar9 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar18 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar9,(uint)pIVar35 & 0xff,method_00);
      return;
    }
  }
  pSStack_118 = (System_String_o *)0x4571aaa;
  pPStack_138 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar36 = pIVar18;
  pPStack_120 = (Photon_Pun_PhotonView_o *)&stack0xffffffffffffff10;
  pSStack_118 = (System_String_o *)((ulong)pIVar35 & 0xffffffff);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (pSStack_100 == (System_Object_array *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar36 = (Il2CppClass *)0x0;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)pSStack_100,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar9 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar9 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar36 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar9->klass->_2).naturalAligment) &&
       ((pGVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = fVar38;
      position.fields._0_8_ = pPStack_138;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar9,(uint)pIVar18 & 0xff,position,fVar2,method_01);
      return;
    }
  }
  uVar39 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (pPStack_138 == (Photon_Realtime_Player_o *)0x0) {
label_04571c2f:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af07a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      g_data_057af07a = '\x01';
    }
    uStack_198 = CONCAT44(uVar39,uStack_158);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields.Sender = (Photon_Realtime_Player_o *)&pCStack_108;
    info_00.fields._0_8_ = uStack_198;
    info_00.fields.photonView = pPStack_148;
    GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar36,senderTimestamp,info_00,(MethodInfo *)0x0);
    return;
  }
  pIVar36 = (Il2CppClass *)0x0;
  bVar12 = Photon_Realtime_Player__get_IsMasterClient(pPStack_138,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    if (pvVar28 != (void *)0x0) {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pvVar28 == (void *)0x0) goto label_04571c2f;
      }
      *(undefined4 *)((long)pvVar28 + 0x20) = uVar39;
    }
  }
  return;
}


// GameManagers.RPCManager$$EndGameRPC
// il2cpp: void GameManagers_RPCManager__EndGameRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571680

void GameManagers_RPCManager__EndGameRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  System_Collections_Generic_HashSet_int__o *pSVar6;
  System_Collections_Generic_Dictionary_int__float__o *pSVar7;
  System_Collections_Generic_HashSet_object__o *__this_00;
  GameManagers_InGameManager_o *pGVar8;
  long *plVar9;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_01;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_02;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar13;
  Photon_Pun_PhotonView_o *pPVar14;
  System_String_array *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar16;
  UnityEngine_Transform_o *__this_04;
  Il2CppClass *pIVar17;
  System_String_o *pSVar18;
  System_String_o *pSVar19;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  System_Object_array *pSVar20;
  long lVar21;
  System_Byte_array *data;
  Settings_PresetSettingsContainer_o *__this_06;
  Settings_PresetSettingsContainer_c *__this_07;
  Il2CppObject *pIVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  UnityEngine_GameObject_o *pUVar26;
  void *pvVar27;
  undefined1 extraout_DL;
  System_String_o *csvScript;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  UI_ChatPanel_o *__this_08;
  uint uVar28;
  Photon_Realtime_Player_o *unaff_RBP;
  undefined1 uVar29;
  undefined1 uVar30;
  Map_MapObject_o *pMVar31;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar32;
  Photon_Realtime_Player_o *pPVar33;
  Photon_Realtime_Player_o *player;
  MethodInfo_255A0F0 *message;
  Il2CppClass *pIVar34;
  Il2CppClass *pIVar35;
  System_Collections_Generic_Dictionary_int__object__o *pSVar36;
  UnityEngine_Component_o *__this_09;
  undefined8 unaff_R12;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  UnityEngine_Quaternion_o UVar43;
  undefined1 auVar44 [12];
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Vector3_o position;
  undefined1 auVar46 [16];
  undefined8 uStack_160;
  undefined4 uStack_120;
  Photon_Pun_PhotonView_o *pPStack_110;
  Photon_Realtime_Player_o *pPStack_100;
  undefined8 uStack_f8;
  Il2CppObject *pIStack_f0;
  Photon_Pun_PhotonView_o *pPStack_e8;
  System_String_o *pSStack_e0;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_d8;
  CustomLogic_CustomLogicEvaluator_o *pCStack_d0;
  int32_t iVar47;
  undefined4 uVar48;
  Photon_Realtime_Player_o *in_stack_ffffffffffffff78;
  Il2CppType *pIVar49;
  Photon_Realtime_Player_o *in_stack_ffffffffffffffc8;
  
  if (g_data_057af073 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af073 = '\x01';
  }
  pGVar8 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pGVar8 != (GameManagers_InGameManager_o *)0x0) {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= (pGVar8->klass->_2).naturalAligment) &&
       ((pGVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__EndGame(pGVar8,time,info,(MethodInfo *)TypeInfo_InGameManager);
      return;
    }
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af074 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  uVar38 = (undefined4)unaff_R12;
  uVar48 = (undefined4)((ulong)unaff_R12 >> 0x20);
  if (plVar9 != (long *)0x0) {
    lVar21 = *plVar9;
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar2 <= *(byte *)(lVar21 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(lVar21 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_InGameManager)) {
      pPVar33 = in_stack_ffffffffffffffc8;
      if (g_data_057aefe8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&" has joined the room.");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefe8 = '\x01';
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0455e01b;
label_0455e1ee:
        il2cpp_runtime_helper_02337ed0();
        pSVar13 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar32 = TypeInfo_CustomLogicManager;
        if (pSVar13 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e05d;
label_0455e02b:
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) {
label_0455e050:
          pPVar33 = in_stack_ffffffffffffffc8;
          CustomLogic_CustomLogicEvaluator__OnPlayerJoin
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar13,in_stack_ffffffffffffffc8,(MethodInfo *)0x0
                    );
          pSVar32 = pSVar13;
          goto label_0455e05d;
        }
        pSVar32 = TypeInfo_CustomLogicManager;
        il2cpp_runtime_helper_02337ed0();
        pSVar13 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar13 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e050;
      }
      else {
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_0455e1ee;
label_0455e01b:
        pSVar13 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar32 = TypeInfo_CustomLogicManager;
        if (pSVar13 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e02b;
label_0455e05d:
        lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x168), lVar21 != 0)) {
          if (*(char *)(lVar21 + 0x11) != '\0') {
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar18 = PhotonExtensions__GetStringProperty
                                (in_stack_ffffffffffffffc8,
                                 (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                                 (MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,(MethodInfo *)0x0);
            pSVar18 = System_String__Concat_3ae5ba0(pSVar18,pSVar19,(MethodInfo *)0x0);
            GameManagers_ChatManager__AddLine
                      (pSVar18,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar11 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar10 = (char)bVar11;
          }
          else {
            bVar11 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar10 = (char)bVar11;
          }
          if (cVar10 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefe9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"");
        il2cpp_runtime_helper_023445d0(&" has left the room.");
        g_data_057aefe9 = '\x01';
      }
      Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar32,pPVar33,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (UnityEngine_Component_o *)0x0) goto label_0455e371;
label_0455e3a1:
        __this_08 = (UI_ChatPanel_o *)0x0;
        iVar3 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 == (UnityEngine_Component_o *)0x0) goto label_0455e3a1;
label_0455e371:
        pIVar22 = UnityEngine_Component__GetComponent_object_(__this_09,MethodInfo_InGameMenu_GetComponent_InGameMenu);
        if (pIVar22 == (Il2CppObject *)0x0) goto label_0455e3a1;
        __this_08 = pIVar22[0xc].monitor;
        iVar3 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = (Photon_Realtime_Player_o *)0x0;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
label_0455e3eb:
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pPVar33 != (Photon_Realtime_Player_o *)0x0) &&
           (pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18),
           pSVar36 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          uVar28 = (pPVar33->fields).actorNumber;
          player = (Photon_Realtime_Player_o *)(ulong)uVar28;
          bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar36,uVar28,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar11 != '\0') {
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18);
            if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455e816;
            uVar28 = (pPVar33->fields).actorNumber;
            player = (Photon_Realtime_Player_o *)(ulong)uVar28;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar36,uVar28,MethodInfo_Boolean_Remove);
          }
          lVar21 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar21 != 0) && (lVar21 = *(long *)(lVar21 + 0x168), lVar21 != 0)) {
            if (*(char *)(lVar21 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar18 = PhotonExtensions__GetStringProperty
                                  (pPVar33,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                   "",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar19 = GameManagers_ChatManager__GetColorString(" has left the room.",3,0,(MethodInfo *)0x0);
              pSVar18 = System_String__Concat_3ae5ba0(pSVar18,pSVar19,(MethodInfo *)0x0);
              player = (Photon_Realtime_Player_o *)0x0;
              GameManagers_ChatManager__AddLine
                        (pSVar18,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
            }
            if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            else {
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            if (__this_05 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
                if (__this_05 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0455e816;
              }
              player = pPVar33;
              CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_05,pPVar33,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar6 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20)
            ;
            if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              uVar28 = (pPVar33->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar28;
              bVar11 = System_Collections_Generic_HashSet_int___Contains(pSVar6,uVar28,MethodInfo_Boolean_Contains);
              if ((char)bVar11 != '\0') {
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x20);
                if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                uVar28 = (pPVar33->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                System_Collections_Generic_HashSet_int___Remove(pSVar6,uVar28,MethodInfo_Boolean_Remove);
              }
              if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = *(System_Collections_Generic_HashSet_int__o **)
                        ((long)TypeInfo_InGameManager->static_fields + 0x28);
              if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                uVar28 = (pPVar33->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                bVar11 = System_Collections_Generic_HashSet_int___Contains(pSVar6,uVar28,MethodInfo_Boolean_Contains);
                if ((char)bVar11 != '\0') {
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar6 = *(System_Collections_Generic_HashSet_int__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x28);
                  if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                  uVar28 = (pPVar33->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                  System_Collections_Generic_HashSet_int___Remove(pSVar6,uVar28,MethodInfo_Boolean_Remove);
                }
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar6 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x30);
                if (pSVar6 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  uVar28 = (pPVar33->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                  bVar11 = System_Collections_Generic_HashSet_int___Contains(pSVar6,uVar28,MethodInfo_Boolean_Contains);
                  if ((char)bVar11 != '\0') {
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar6 = *(System_Collections_Generic_HashSet_int__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x30);
                    if (pSVar6 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                    uVar28 = (pPVar33->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                    System_Collections_Generic_HashSet_int___Remove(pSVar6,uVar28,MethodInfo_Boolean_Remove);
                  }
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Collections_Generic_Dictionary_int__float__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x38);
                  if (pSVar7 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    uVar28 = (pPVar33->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar28;
                    bVar11 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                                       (pSVar7,uVar28,MethodInfo_Boolean_ContainsKey);
                    if ((char)bVar11 == '\0') {
label_0455e782:
                      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      Anticheat_AnticheatManager__ResetVoteKicks(pPVar33,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        bVar11 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar10 = (char)bVar11;
                      }
                      else {
                        bVar11 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar10 = (char)bVar11;
                      }
                      if (cVar10 == '\0') {
                        return;
                      }
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar7 = *(System_Collections_Generic_Dictionary_int__float__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x38);
                    if (pSVar7 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                      System_Collections_Generic_Dictionary_int__float___Remove
                                (pSVar7,(pPVar33->fields).actorNumber,MethodInfo_Boolean_Remove);
                      goto label_0455e782;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (__this_08 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__RemovePMPartner(__this_08,pPVar33,(MethodInfo *)0x0);
        player = (Photon_Realtime_Player_o *)0x0;
        UI_ChatPanel__Sync(__this_08,(MethodInfo *)0x0);
        goto label_0455e3eb;
      }
label_0455e816:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"InGame");
        il2cpp_runtime_helper_023445d0(&"MasterclientChangeTo");
        il2cpp_runtime_helper_023445d0(&"Chat");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefea = '\x01';
      }
      pSVar20 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar18 = PhotonExtensions__GetStringProperty
                          (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (pSVar20 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0455ea6c:
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((pSVar18 == (System_String_o *)0x0) ||
              (lVar21 = il2cpp_runtime_helper_023051f0(pSVar18,(((pSVar20->obj).klass)->_1).element_class), lVar21 != 0))
      {
        if ((int)pSVar20->max_length != 0) {
          pSVar20->m_Items[0] = (Il2CppObject *)pSVar18;
          il2cpp_runtime_helper_022b4080(pSVar20->m_Items,pSVar18);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar18 = UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","MasterclientChangeTo",pSVar20,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__AddLine
                    (pSVar18,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar10 = (char)bVar11;
            pIVar34 = TypeInfo_InGameManager;
          }
          else {
            bVar11 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar10 = (char)bVar11;
            pIVar34 = TypeInfo_InGameManager;
          }
          if (cVar10 == '\0') {
            TypeInfo_InGameManager = pIVar34;
            return;
          }
          TypeInfo_InGameManager = pIVar34;
          if (*(int *)&(pIVar34->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
            GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar34);
            return;
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar34);
          return;
        }
        goto label_0455ea6c;
      }
      data = (System_Byte_array *)il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10(data,0);
      if (g_data_057aefeb == '\0') {
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaa3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaaf;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eabb;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eac7;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ead3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eadf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaeb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaf7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb03;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb0f;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefeb = '\x01';
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb34;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((pPVar33 == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18),
         pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
label_0455ee6e:
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee73;
        il2cpp_runtime_helper_022b2c90();
label_0455ee73:
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee78;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb6c;
        bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (pSVar36,(pPVar33->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 == '\0') {
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb8f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          iVar47 = (pPVar33->fields).actorNumber;
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebb4;
          __this_06 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
          if (g_data_057af051 == '\0') {
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebcc;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
            g_data_057af051 = '\x01';
          }
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebe2;
          __this_07 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebef;
          Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)__this_07,(MethodInfo *)0x0);
          __this_06[1].klass = __this_07;
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec02;
          il2cpp_runtime_helper_022b4080(__this_06 + 1);
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec0c;
          Settings_BaseSettingsContainer___ctor(__this_06,(MethodInfo *)0x0);
          if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee6e;
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec2d;
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar36,iVar47,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
        }
        if (data == (System_Byte_array *)0x0) {
          return;
        }
        if (0x4000 < (int)data->max_length) {
          return;
        }
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec5d;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   ((long)TypeInfo_InGameManager->static_fields + 0x18);
        if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee73;
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec89;
        pIVar22 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar36,(pPVar33->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eca4;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
            (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eccf;
          pSVar18 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              ((Utility_Algorithms_CompressionAlgorithm_o *)
                               **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),data,0x1000,0xa00000,(MethodInfo *)0x0);
          if (pIVar22 == (Il2CppObject *)0x0) goto label_0455ee7d;
          pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ecee;
          (*pIVar22->klass->vtable[8].methodPtr)(pIVar22,pSVar18,pIVar22->klass->vtable[8].method);
          iVar47 = (pPVar33->fields).actorNumber;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee1b;
            il2cpp_runtime_helper_02337ed0();
            if (g_data_057af00c != '\0') goto label_0455ed10;
label_0455ee28:
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee34;
            il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
            g_data_057af00c = '\x01';
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455ed21;
label_0455ee4c:
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee51;
            il2cpp_runtime_helper_02337ed0();
            lVar21 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          else {
            if (g_data_057af00c == '\0') goto label_0455ee28;
label_0455ed10:
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455ee4c;
label_0455ed21:
            lVar21 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          if (lVar21 != 0) {
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed3e;
            (**(code **)(lVar21 + 0x18))(*(undefined8 *)(lVar21 + 0x40),iVar47,*(undefined8 *)(lVar21 + 0x28))
            ;
          }
          if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed56;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          if (pSVar36 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                         (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
            pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed8c;
            pIVar22 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar36,(pPVar33->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
            if ((((pIVar22 != (Il2CppObject *)0x0) && (pIVar22[2].klass != (Il2CppClass *)0x0)) &&
                (pvVar27 = ((pIVar22[2].klass)->_1).typeMetadataHandle, pvVar27 != (void *)0x0)) &&
               (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455edce;
              bVar11 = System_Collections_Generic_HashSet_object___Contains
                                 (__this_00,*(Il2CppObject **)((long)pvVar27 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar11 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ede3;
                il2cpp_runtime_helper_02337ed0();
              }
              Anticheat_AnticheatManager__KickPlayer(pPVar33,0,"",(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0455ee6e;
        }
      }
      pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee7d;
      il2cpp_runtime_helper_022b2c90();
label_0455ee7d:
      pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee82;
      auVar44 = il2cpp_runtime_helper_022b2c90();
      if (auVar44._8_4_ != 1) {
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef25;
        _Unwind_Resume(auVar44._0_8_);
      }
      pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eec0;
      puVar23 = (undefined8 *)__cxa_begin_catch(auVar44._0_8_);
      pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eecf;
      uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eedd;
      cVar10 = il2cpp_runtime_helper_0233e000(uVar24,*(undefined8 *)*puVar23);
      if (cVar10 == '\0') {
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)0x455eefe;
        puVar25 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar25 = *puVar23;
        pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef15;
        __cxa_throw(puVar25,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      return;
    }
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af075 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"Game/CustomLogicPhotonSyncPrefab");
    g_data_057af075 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  pPVar33 = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar37 = SUB84(pPVar33,0);
  uVar39 = (undefined4)((ulong)pPVar33 >> 0x20);
  fVar40 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    uVar37 = SUB84(pPVar33,0);
    uVar39 = (undefined4)((ulong)pPVar33 >> 0x20);
    g_data_057a6843 = '\x01';
    in_stack_ffffffffffffff78 = pPVar33;
  }
  pIVar49 = (Il2CppType *)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  fVar41 = SUB84(pIVar49,0);
  uVar42 = (undefined4)((ulong)pIVar49 >> 0x20);
  uVar24 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    in_stack_ffffffffffffff78 = (Photon_Realtime_Player_o *)CONCAT44(uVar39,uVar37);
    il2cpp_runtime_helper_02337ed0();
    fVar41 = SUB84(pIVar49,0);
    uVar42 = (undefined4)((ulong)pIVar49 >> 0x20);
    uVar37 = SUB84(in_stack_ffffffffffffff78,0);
    uVar39 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  }
  message = (MethodInfo_255A0F0 *)0x0;
  UVar45.fields.y = (float)uVar39;
  UVar45.fields.x = (float)uVar37;
  UVar45.fields.z = fVar40;
  UVar43.fields.y = (float)uVar42;
  UVar43.fields.x = fVar41;
  UVar43.fields._8_8_ = uVar24;
  pUVar26 = Photon_Pun_PhotonNetwork__Instantiate
                      ("Game/CustomLogicPhotonSyncPrefab",UVar45,UVar43,'\0',(System_Object_array *)0x0,(MethodInfo *)0x0);
  iVar47 = (int32_t)method;
  if ((pUVar26 != (UnityEngine_GameObject_o *)0x0) &&
     (message = MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync, pIVar22 = UnityEngine_GameObject__GetComponent_object_(pUVar26,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync),
     pIVar22 != (Il2CppObject *)0x0)) {
    if (g_data_057adbaa == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item,(ulong)method & 0xffffffff,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"InitRPC");
      g_data_057adbaa = '\x01';
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
      il2cpp_runtime_helper_02337ed0();
      pSVar36 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
      pIVar12 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar36,iVar47,MethodInfo_MapObject_get_Item);
      pIVar22[4].monitor = pIVar12;
      il2cpp_runtime_helper_022b4080(&pIVar22[4].monitor);
      if ((pIVar22[4].monitor == (void *)0x0) ||
         (pUVar26 = *(UnityEngine_GameObject_o **)((long)pIVar22[4].monitor + 0x18),
         pUVar26 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(pUVar26,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar34 = pIVar22[4].klass;
      pSVar20 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (pSVar20 == (System_Object_array *)0x0) goto label_042578ec;
      pIVar22 = pIVar12;
      if ((pIVar12 == (Il2CppObject *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pIVar12), lVar21 != 0)) {
        if ((int)pSVar20->max_length != 0) {
          pSVar20->m_Items[0] = pIVar12;
          il2cpp_runtime_helper_022b4080(pSVar20->m_Items,pIVar12);
          pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
          if ((pIVar22 != (Il2CppObject *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(pIVar22), lVar21 == 0))
          goto label_042578f6;
          if (1 < (uint)pSVar20->max_length) {
            pSVar20->m_Items[1] = pIVar22;
            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1);
            if (pIVar34 != (Il2CppClass *)0x0) {
              Photon_Pun_PhotonView__RPC
                        ((Photon_Pun_PhotonView_o *)pIVar34,"InitRPC",3,pSVar20,(MethodInfo *)0x0);
              return;
            }
            goto label_042578ec;
          }
        }
        goto label_042578f1;
      }
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
      pSVar36 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar36 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
      il2cpp_runtime_helper_022b2c90();
label_042578f1:
      il2cpp_runtime_helper_022b2ca0();
    }
label_042578f6:
    __this_02 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
    uVar28 = 0;
    il2cpp_runtime_helper_022b2b10();
    if (g_data_057adbab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
      g_data_057adbab = '\x01';
    }
    pPVar14 = (__this_02->fields).PhotonView;
    pSVar20 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
    if (pSVar20 == (System_Object_array *)0x0) {
label_04257a3d:
      pIVar12 = pIVar22;
      il2cpp_runtime_helper_022b2c90();
    }
    else if ((pIVar12 == (Il2CppObject *)0x0) || (lVar21 = il2cpp_runtime_helper_023051f0(pIVar12), lVar21 != 0)) {
      pIVar22 = pIVar12;
      if ((int)pSVar20->max_length != 0) {
        pSVar20->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar20->m_Items);
        if ((csvScript != (System_String_o *)0x0) && (lVar21 = il2cpp_runtime_helper_023051f0(csvScript), lVar21 == 0))
        goto label_04257a42;
        if (1 < (uint)pSVar20->max_length) {
          pSVar20->m_Items[1] = (Il2CppObject *)csvScript;
          il2cpp_runtime_helper_022b4080(pSVar20->m_Items + 1);
          if (pPVar14 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar14,"InitDynamicRPC",4,pSVar20,(MethodInfo *)0x0);
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_02,uVar28 & 0xff,csvScript,(MethodInfo *)pSVar20);
            return;
          }
          goto label_04257a3d;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
label_04257a42:
    pSVar13 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
    uVar29 = 0;
    auVar46 = il2cpp_runtime_helper_022b2b10();
    pSVar18 = auVar46._8_8_;
    uStack_f8 = auVar46._0_8_;
    pIStack_f0 = pIVar12;
    pPStack_e8 = pPVar14;
    pSStack_e0 = csvScript;
    pCStack_d8 = __this_02;
    pCStack_d0 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar28;
    if (g_data_057adbac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adbac = '\x01';
    }
    bVar11 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return;
    }
    *(undefined1 *)((long)&pSVar13->m_Items[5].fields.hashCode + 1) = uVar29;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar28 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar28;
    iVar3 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
    fVar40 = 0.0;
    pSVar32 = pSVar13;
    pPVar14 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar13,(MethodInfo *)0x0);
    if (pPVar14 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
    uVar28 = (uVar28 - iVar3) - (pPVar14->fields).viewIdField;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar28;
    pSVar13->m_Items[1].fields.hashCode = uVar28;
    if (pSVar18 == (System_String_o *)0x0) goto label_04257fa3;
    value = System_String__Split(pSVar18,10,0,(MethodInfo *)0x0);
    pSVar18 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    fVar40 = 0.0;
    pSVar32 = __this_03;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_03,(MethodInfo *)0x0);
    if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
    goto label_04257fa3;
    pIVar34 = (__this_03->obj).klass;
    (*pIVar34->vtable[9].methodPtr)(__this_03,pSVar18,pIVar34->vtable[9].method);
    __this_03->m_Items[0].fields.hashCode = pSVar13->m_Items[1].fields.hashCode;
    __this_03->m_Items[0].fields.next = 0;
    *(undefined1 *)((long)&__this_03->m_Items[0].fields.key + 3) = 1;
    fVar40 = 0.0;
    pSVar32 = __this_03;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_03,0,(MethodInfo *)0x0);
    if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
    *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
    Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
    pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
    CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar15,mapObject,(MethodInfo *)0x0);
    pSVar13->m_Items[2].fields.key = (Il2CppObject *)pCVar15;
    il2cpp_runtime_helper_022b4080(&pSVar13->m_Items[2].fields.key,pCVar15);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor
              ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_03,mapObject,(MethodInfo *)0x0);
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar13->m_Items[2].fields =
         __this_03;
    il2cpp_runtime_helper_022b4080(pSVar13->m_Items + 2,__this_03);
    ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar13->m_Items[1].fields.value;
    pSVar13->m_Items[1].fields.value = (Il2CppObject *)mapObject;
    pMVar31 = mapObject;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    fVar40 = SUB84(pMVar31,0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    pSVar32 = TypeInfo_CustomLogicManager;
    if (pvVar27 == (void *)0x0) goto label_04257fa3;
    pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar27 + 0x38);
    pSVar32 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar40 = (float)pSVar13->m_Items[1].fields.hashCode;
    bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar36,(int32_t)fVar40,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_f8 = CONCAT44(pSVar13->m_Items[1].fields.hashCode,(undefined4)uStack_f8);
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar22,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar40 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
      il2cpp_runtime_helper_02337ed0();
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar32 = TypeInfo_CustomLogicManager;
    if ((pvVar27 == (void *)0x0) ||
       (pSVar32 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar27 + 0x38),
       pSVar32 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
    fVar40 = (float)pSVar13->m_Items[1].fields.hashCode;
    System_Collections_Generic_Dictionary_int__object___set_Item
              ((System_Collections_Generic_Dictionary_int__object__o *)pSVar32,(int32_t)fVar40,
               (Il2CppObject *)
               *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
                &pSVar13->m_Items[2].fields,MethodInfo_Void_set_Item);
    pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    if (pvVar27 == (void *)0x0) goto label_04257fa3;
    pSVar36 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar27 + 0x28);
    pSVar32 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar36 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar40 = (float)pSVar13->m_Items[1].fields.hashCode;
    bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar36,(int32_t)fVar40,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_f8 = CONCAT44(uStack_f8._4_4_,pSVar13->m_Items[1].fields.hashCode);
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_f8);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar22,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar40 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
      il2cpp_runtime_helper_02337ed0();
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar32 = TypeInfo_CustomLogicManager;
    if (pvVar27 != (void *)0x0) {
      pSVar32 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar27 + 0x28) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        fVar40 = (float)pSVar13->m_Items[1].fields.hashCode;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar27 + 0x28),
                   (int32_t)fVar40,(Il2CppObject *)pSVar13->m_Items[2].fields.key,MethodInfo_Void_set_Item);
        pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar13->m_Items[2].fields.key;
        pSVar32 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar15 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          pSVar32 = pSVar13;
          CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                    (pCVar15,(CustomLogic_CustomLogicPhotonSync_o *)pSVar13,(MethodInfo *)0x0);
          fVar40 = SUB84(pSVar32,0);
          pSVar32 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pSVar32 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar32,mapObject,1,(MethodInfo *)0x0);
            fVar40 = SUB84(mapObject,0);
            pSVar4 = *ppSVar1;
            if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
               && (pSVar32 = (pSVar4->fields)._entries,
                  pSVar32 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              fVar40 = 0.0;
              pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar32,(MethodInfo *)0x0);
              if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                fVar40 = 0.0;
                UVar45 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar16,(MethodInfo *)0x0);
                pSVar13->m_Items[2].fields.value = (Il2CppObject *)UVar45.fields._0_8_;
                pSVar13->m_Items[3].fields.hashCode = (int32_t)UVar45.fields.z;
                pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                         pSVar13->m_Items[1].fields.value;
                pSVar32 = pSVar16;
                if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                               0x0) &&
                   (pSVar32 = (pSVar4->fields)._entries,
                   pSVar32 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                  fVar40 = 0.0;
                  __this_04 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar32,(MethodInfo *)0x0);
                  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
                    UVar43 = UnityEngine_Transform__get_rotation(__this_04,(MethodInfo *)0x0);
                    *(UnityEngine_Quaternion_Fields *)&pSVar13->m_Items[3].fields.next = UVar43.fields;
                    *(undefined1 *)&pSVar13->m_Items[4].fields.key = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_04257fa3:
    il2cpp_runtime_helper_022b2c90();
    pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar32->m_Items[1].fields.key;
    pSVar13 = pSVar32;
    fVar41 = fVar40;
    if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
      if (pPStack_e8 != pCVar5[3].monitor) {
        return;
      }
      *(undefined1 *)((long)&pSVar32->m_Items[0].fields.key + 1) = extraout_DL;
      if (g_data_057adbae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
        g_data_057adbae = '\x01';
      }
      pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
      fVar41 = 0.0;
      pSVar13 = pSVar16;
      System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
      *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar16->bounds)->_networkCallback = 0;
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar16->m_Items[0].fields.key = &pSVar32->obj;
        il2cpp_runtime_helper_022b4080(&pSVar16->m_Items[0].fields.key,pSVar32);
        pSVar16->m_Items[0].fields.hashCode = (int32_t)fVar40;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pSVar32,(System_Collections_IEnumerator_o *)pSVar16,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    uVar29 = 0;
    pIVar34 = pIVar17;
    System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar17->_1).name = 0;
    if (pIVar17 != (Il2CppClass *)0x0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar17->_1).byval_arg.bits =
           pSVar13;
      il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg.bits,pSVar13);
      *(float *)&(pIVar17->_1).byval_arg.data = fVar41;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar17 = (pIVar34->_1).element_class;
    pIVar35 = pIVar34;
    uVar30 = uVar29;
    if (pIVar17 != (Il2CppClass *)0x0) {
      if (__this_03 != (pIVar17->_1).fields) {
        return;
      }
      if (g_data_057adbad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
        g_data_057adbad = '\x01';
      }
      pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
      uVar30 = 0;
      pIVar35 = pIVar17;
      System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar17->_1).name = 0;
      if (pIVar17 != (Il2CppClass *)0x0) {
        (pIVar17->_1).byval_arg.data = pIVar34;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pIVar34);
        *(undefined1 *)&(pIVar17->_1).byval_arg.bits = uVar29;
        (pIVar17->_1).this_arg.data = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).this_arg,extraout_RDX);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar34,(System_Collections_IEnumerator_o *)pIVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar38 = 0;
    pIVar22 = pIVar12;
    System_Object___ctor(pIVar12,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar12[1].klass = 0;
    if (pIVar12 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar22,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar22[1].klass = uVar38;
      return;
    }
    pIVar12[2].klass = pIVar35;
    il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar35);
    *(undefined1 *)&pIVar12[2].monitor = uVar30;
    pIVar12[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar12 + 3,extraout_RDX_00);
    return;
  }
  uVar24 = il2cpp_runtime_helper_022b2c90();
  uVar42 = 0;
  uVar37 = (undefined4)uVar24;
  uVar39 = (undefined4)((ulong)uVar24 >> 0x20);
  if (g_data_057af076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0457194c;
label_045719d8:
    il2cpp_runtime_helper_02337ed0();
    pCStack_d0 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_045719d8;
label_0457194c:
    pCStack_d0 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  if (pCStack_d0 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCStack_d0 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pIVar34 = (Il2CppClass *)0x0;
  __this_01.fields._4_4_ = uVar39;
  __this_01.fields.timeInt = uVar37;
  __this_01.fields.Sender._0_4_ = iVar47;
  __this_01.fields.Sender._4_4_ = uVar42;
  __this_01.fields.photonView._0_4_ = uVar38;
  __this_01.fields.photonView._4_4_ = uVar48;
  sentServerTimestamp =
       Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&stack0xffffffffffffff70);
  if (pCStack_d0 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (pCStack_d0,in_stack_ffffffffffffff78,(System_String_o *)message,sentServerTimestamp,
               (MethodInfo *)0x0);
    return;
  }
  pCStack_d8 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar34;
  if (g_data_057af077 == '\0') {
    pSStack_e0 = (System_String_o *)0x4571a1f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_e0 = (System_String_o *)0x4571a2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if ((Photon_Realtime_Player_o *)CONCAT44(uVar48,uVar38) == (Photon_Realtime_Player_o *)0x0) {
label_04571aa0:
    pSStack_e0 = (System_String_o *)0x4571aa5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar17 = (Il2CppClass *)0x0;
    pSStack_e0 = (System_String_o *)0x4571a42;
    bVar11 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)CONCAT44(uVar48,uVar38),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pGVar8 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar8 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar17 = TypeInfo_InGameManager;
    if ((bVar2 <= (pGVar8->klass->_2).naturalAligment) &&
       ((pGVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar8,(uint)pIVar34 & 0xff,method_00);
      return;
    }
  }
  pSStack_e0 = (System_String_o *)0x4571aaa;
  pPStack_100 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar35 = pIVar17;
  pPStack_e8 = (Photon_Pun_PhotonView_o *)&stack0xffffffffffffff48;
  pSStack_e0 = (System_String_o *)((ulong)pIVar34 & 0xffffffff);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (unaff_RBP == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar35 = (Il2CppClass *)0x0;
    bVar11 = Photon_Realtime_Player__get_IsMasterClient(unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    pGVar8 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar8 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar35 = TypeInfo_InGameManager;
    if ((bVar2 <= (pGVar8->klass->_2).naturalAligment) &&
       ((pGVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = fVar40;
      position.fields._0_8_ = pPStack_100;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar8,(uint)pIVar17 & 0xff,position,fVar41,method_01);
      return;
    }
  }
  uVar38 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (pPStack_100 == (Photon_Realtime_Player_o *)0x0) {
label_04571c2f:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af07a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      g_data_057af07a = '\x01';
    }
    uStack_160 = CONCAT44(uVar38,uStack_120);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields.Sender = (Photon_Realtime_Player_o *)&pCStack_d0;
    info_00.fields._0_8_ = uStack_160;
    info_00.fields.photonView = pPStack_110;
    GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar35,senderTimestamp,info_00,(MethodInfo *)0x0);
    return;
  }
  pIVar35 = (Il2CppClass *)0x0;
  bVar11 = Photon_Realtime_Player__get_IsMasterClient(pPStack_100,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    if (pvVar27 != (void *)0x0) {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pvVar27 == (void *)0x0) goto label_04571c2f;
      }
      *(undefined4 *)((long)pvVar27 + 0x20) = uVar38;
    }
  }
  return;
}


// GameManagers.RPCManager$$NotifyPlayerJoinedRPC
// il2cpp: void GameManagers_RPCManager__NotifyPlayerJoinedRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571740

void GameManagers_RPCManager__NotifyPlayerJoinedRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  System_Collections_Generic_HashSet_int__o *pSVar7;
  System_Collections_Generic_Dictionary_int__float__o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long *plVar9;
  GameManagers_InGameManager_o *pGVar10;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_01;
  UnityEngine_Quaternion_Fields rotation;
  char cVar11;
  bool_conflict bVar12;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_02;
  Il2CppObject *pIVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  UnityEngine_Transform_o *__this_04;
  Il2CppClass *pIVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_05;
  System_Object_array *pSVar21;
  long lVar22;
  System_Byte_array *data;
  Settings_PresetSettingsContainer_o *__this_06;
  Settings_PresetSettingsContainer_c *__this_07;
  Il2CppObject *pIVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  UnityEngine_GameObject_o *pUVar27;
  void *pvVar28;
  undefined1 extraout_DL;
  System_String_o *csvScript;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  UI_ChatPanel_o *__this_08;
  uint uVar29;
  Photon_Realtime_Player_o *unaff_RBP;
  undefined1 uVar30;
  undefined1 uVar31;
  Map_MapObject_o *pMVar32;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar33;
  Photon_Realtime_Player_o *pPVar34;
  Photon_Realtime_Player_o *player;
  MethodInfo_255A0F0 *message;
  Il2CppClass *pIVar35;
  Il2CppClass *pIVar36;
  System_Collections_Generic_Dictionary_int__object__o *pSVar37;
  UnityEngine_Component_o *__this_09;
  undefined8 unaff_R12;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  UnityEngine_Quaternion_o UVar42;
  undefined1 auVar43 [12];
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o position;
  undefined1 auVar45 [16];
  undefined8 uStack_118;
  undefined4 uStack_d8;
  Photon_Pun_PhotonView_o *pPStack_c8;
  Photon_Realtime_Player_o *pPStack_b8;
  undefined8 uStack_b0;
  Il2CppObject *pIStack_a8;
  Photon_Pun_PhotonView_o *pPStack_a0;
  System_String_o *pSStack_98;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_90;
  CustomLogic_CustomLogicEvaluator_o *pCStack_88;
  int32_t iVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  Photon_Realtime_Player_o *in_stack_ffffffffffffffc0;
  
  if (g_data_057af074 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af074 = '\x01';
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  uVar39 = (undefined4)unaff_R12;
  uVar48 = (undefined4)((ulong)unaff_R12 >> 0x20);
  if (plVar9 != (long *)0x0) {
    lVar22 = *plVar9;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar3 <= *(byte *)(lVar22 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(lVar22 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_InGameManager)) {
      pPVar34 = info.fields.Sender;
      if (g_data_057aefe8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&" has joined the room.");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefe8 = '\x01';
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0455e01b;
label_0455e1ee:
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar33 = TypeInfo_CustomLogicManager;
        if (pSVar14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e05d;
label_0455e02b:
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) {
label_0455e050:
          pPVar34 = info.fields.Sender;
          CustomLogic_CustomLogicEvaluator__OnPlayerJoin
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar14,info.fields.Sender,(MethodInfo *)0x0);
          pSVar33 = pSVar14;
          goto label_0455e05d;
        }
        pSVar33 = TypeInfo_CustomLogicManager;
        il2cpp_runtime_helper_02337ed0();
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e050;
      }
      else {
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_0455e1ee;
label_0455e01b:
        pSVar14 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        pSVar33 = TypeInfo_CustomLogicManager;
        if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
        goto label_0455e02b;
label_0455e05d:
        lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
          if (*(char *)(lVar22 + 0x11) != '\0') {
            if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar19 = PhotonExtensions__GetStringProperty
                                (info.fields.Sender,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                 "",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar20 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,(MethodInfo *)0x0);
            pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
            GameManagers_ChatManager__AddLine
                      (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          else {
            bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
          }
          if (cVar11 == '\0') {
            return;
          }
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefe9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_GetComponent_InGameMenu);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"");
        il2cpp_runtime_helper_023445d0(&" has left the room.");
        g_data_057aefe9 = '\x01';
      }
      Photon_Pun_MonoBehaviourPunCallbacks__OnPlayerLeftRoom
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar33,pPVar34,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 != (UnityEngine_Component_o *)0x0) goto label_0455e371;
label_0455e3a1:
        __this_08 = (UI_ChatPanel_o *)0x0;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        __this_09 = *(UnityEngine_Component_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (__this_09 == (UnityEngine_Component_o *)0x0) goto label_0455e3a1;
label_0455e371:
        pIVar23 = UnityEngine_Component__GetComponent_object_(__this_09,MethodInfo_InGameMenu_GetComponent_InGameMenu);
        if (pIVar23 == (Il2CppObject *)0x0) goto label_0455e3a1;
        __this_08 = pIVar23[0xc].monitor;
        iVar4 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar4 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = (Photon_Realtime_Player_o *)0x0;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_08,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
label_0455e3eb:
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pPVar34 != (Photon_Realtime_Player_o *)0x0) &&
           (pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18),
           pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          uVar29 = (pPVar34->fields).actorNumber;
          player = (Photon_Realtime_Player_o *)(ulong)uVar29;
          bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                             (pSVar37,uVar29,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar12 != '\0') {
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       ((long)TypeInfo_InGameManager->static_fields + 0x18);
            if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455e816;
            uVar29 = (pPVar34->fields).actorNumber;
            player = (Photon_Realtime_Player_o *)(ulong)uVar29;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar37,uVar29,MethodInfo_Boolean_Remove);
          }
          lVar22 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x168), lVar22 != 0)) {
            if (*(char *)(lVar22 + 0x11) != '\0') {
              if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar19 = PhotonExtensions__GetStringProperty
                                  (pPVar34,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                                   "",(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar20 = GameManagers_ChatManager__GetColorString(" has left the room.",3,0,(MethodInfo *)0x0);
              pSVar19 = System_String__Concat_3ae5ba0(pSVar19,pSVar20,(MethodInfo *)0x0);
              player = (Photon_Realtime_Player_o *)0x0;
              GameManagers_ChatManager__AddLine
                        (pSVar19,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
            }
            if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
              il2cpp_runtime_helper_02337ed0();
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            else {
              __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
            }
            if (__this_05 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_05 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
                if (__this_05 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0455e816;
              }
              player = pPVar34;
              CustomLogic_CustomLogicEvaluator__OnPlayerLeave(__this_05,pPVar34,(MethodInfo *)0x0);
            }
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x20)
            ;
            if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              uVar29 = (pPVar34->fields).actorNumber;
              player = (Photon_Realtime_Player_o *)(ulong)uVar29;
              bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
              if ((char)bVar12 != '\0') {
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x20);
                if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                uVar29 = (pPVar34->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
              }
              if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                        ((long)TypeInfo_InGameManager->static_fields + 0x28);
              if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                uVar29 = (pPVar34->fields).actorNumber;
                player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
                if ((char)bVar12 != '\0') {
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x28);
                  if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                  uVar29 = (pPVar34->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                  System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
                }
                if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                          ((long)TypeInfo_InGameManager->static_fields + 0x30);
                if (pSVar7 != (System_Collections_Generic_HashSet_int__o *)0x0) {
                  uVar29 = (pPVar34->fields).actorNumber;
                  player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                  bVar12 = System_Collections_Generic_HashSet_int___Contains(pSVar7,uVar29,MethodInfo_Boolean_Contains);
                  if ((char)bVar12 != '\0') {
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar7 = *(System_Collections_Generic_HashSet_int__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x30);
                    if (pSVar7 == (System_Collections_Generic_HashSet_int__o *)0x0) goto label_0455e816;
                    uVar29 = (pPVar34->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                    System_Collections_Generic_HashSet_int___Remove(pSVar7,uVar29,MethodInfo_Boolean_Remove);
                  }
                  if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                            ((long)TypeInfo_InGameManager->static_fields + 0x38);
                  if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                    uVar29 = (pPVar34->fields).actorNumber;
                    player = (Photon_Realtime_Player_o *)(ulong)uVar29;
                    bVar12 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                                       (pSVar8,uVar29,MethodInfo_Boolean_ContainsKey);
                    if ((char)bVar12 == '\0') {
label_0455e782:
                      if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      Anticheat_AnticheatManager__ResetVoteKicks(pPVar34,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      else {
                        bVar12 = GameManagers_ChatManager__HasActivePlayerSuggestions((MethodInfo *)0x0);
                        cVar11 = (char)bVar12;
                      }
                      if (cVar11 == '\0') {
                        return;
                      }
                      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      GameManagers_ChatManager__RefreshPlayerSuggestions((MethodInfo *)0x0);
                      return;
                    }
                    if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = *(System_Collections_Generic_Dictionary_int__float__o **)
                              ((long)TypeInfo_InGameManager->static_fields + 0x38);
                    if (pSVar8 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
                      System_Collections_Generic_Dictionary_int__float___Remove
                                (pSVar8,(pPVar34->fields).actorNumber,MethodInfo_Boolean_Remove);
                      goto label_0455e782;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (__this_08 != (UI_ChatPanel_o *)0x0) {
        UI_ChatPanel__RemovePMPartner(__this_08,pPVar34,(MethodInfo *)0x0);
        player = (Photon_Realtime_Player_o *)0x0;
        UI_ChatPanel__Sync(__this_08,(MethodInfo *)0x0);
        goto label_0455e3eb;
      }
label_0455e816:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aefea == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        il2cpp_runtime_helper_023445d0(&"InGame");
        il2cpp_runtime_helper_023445d0(&"MasterclientChangeTo");
        il2cpp_runtime_helper_023445d0(&"Chat");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefea = '\x01';
      }
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = PhotonExtensions__GetStringProperty
                          (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (pSVar21 == (System_Object_array *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_0455ea6c:
        il2cpp_runtime_helper_022b2ca0();
      }
      else if ((pSVar19 == (System_String_o *)0x0) ||
              (lVar22 = il2cpp_runtime_helper_023051f0(pSVar19,(((pSVar21->obj).klass)->_1).element_class), lVar22 != 0))
      {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = (Il2CppObject *)pSVar19;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pSVar19);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar19 = UI_UIManager__GetLocaleFormatted
                              ("InGame","Chat","MasterclientChangeTo",pSVar21,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_ChatManager__AddLine
                    (pSVar19,3,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,(MethodInfo *)0x0);
          if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__WaitForRestart((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar35 = TypeInfo_InGameManager;
          }
          else {
            bVar12 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
            cVar11 = (char)bVar12;
            pIVar35 = TypeInfo_InGameManager;
          }
          if (cVar11 == '\0') {
            TypeInfo_InGameManager = pIVar35;
            return;
          }
          TypeInfo_InGameManager = pIVar35;
          if (*(int *)&(pIVar35->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
            GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar35);
            return;
          }
          GameManagers_InGameManager__RestartGame((MethodInfo *)pIVar35);
          return;
        }
        goto label_0455ea6c;
      }
      data = (System_Byte_array *)il2cpp_runtime_helper_0231b270();
      il2cpp_runtime_helper_022b2b10(data,0);
      if (g_data_057aefeb == '\0') {
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaa3;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AnticheatManager);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaaf;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DataCompressors);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eabb;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eac7;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ead3;
        il2cpp_runtime_helper_023445d0(&MethodInfo_PlayerInfo_get_Item);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eadf;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaeb;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eaf7;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerInfo);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb03;
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb0f;
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aefeb = '\x01';
      }
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb34;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((pPVar34 == (Photon_Realtime_Player_o *)0x0) ||
         (pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18),
         pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
label_0455ee6e:
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee73;
        il2cpp_runtime_helper_022b2c90();
label_0455ee73:
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee78;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb6c;
        bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 == '\0') {
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eb8f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          iVar46 = (pPVar34->fields).actorNumber;
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebb4;
          __this_06 = (Settings_PresetSettingsContainer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PlayerInfo);
          if (g_data_057af051 == '\0') {
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebcc;
            il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
            g_data_057af051 = '\x01';
          }
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebe2;
          __this_07 = (Settings_PresetSettingsContainer_c *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ebef;
          Settings_ProfileSettings___ctor((Settings_ProfileSettings_o *)__this_07,(MethodInfo *)0x0);
          __this_06[1].klass = __this_07;
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec02;
          il2cpp_runtime_helper_022b4080(__this_06 + 1);
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec0c;
          Settings_BaseSettingsContainer___ctor(__this_06,(MethodInfo *)0x0);
          if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee6e;
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec2d;
          System_Collections_Generic_Dictionary_int__object___Add
                    (pSVar37,iVar46,(Il2CppObject *)__this_06,MethodInfo_Void_Add);
        }
        if (data == (System_Byte_array *)0x0) {
          return;
        }
        if (0x4000 < (int)data->max_length) {
          return;
        }
        if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec5d;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                   ((long)TypeInfo_InGameManager->static_fields + 0x18);
        if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0455ee73;
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ec89;
        pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                            (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
        if (*(int *)(TypeInfo_DataCompressors + 0xe4) == 0) {
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eca4;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Utility_Algorithms_CompressionAlgorithm_o *)**(undefined8 **)(TypeInfo_DataCompressors + 0xb8) !=
            (Utility_Algorithms_CompressionAlgorithm_o *)0x0) {
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eccf;
          pSVar19 = Utility_Algorithms_CompressionAlgorithm__DecompressString
                              ((Utility_Algorithms_CompressionAlgorithm_o *)
                               **(undefined8 **)(TypeInfo_DataCompressors + 0xb8),data,0x1000,0xa00000,(MethodInfo *)0x0);
          if (pIVar23 == (Il2CppObject *)0x0) goto label_0455ee7d;
          pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ecee;
          (*pIVar23->klass->vtable[8].methodPtr)(pIVar23,pSVar19,pIVar23->klass->vtable[8].method);
          iVar46 = (pPVar34->fields).actorNumber;
          if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee1b;
            il2cpp_runtime_helper_02337ed0();
            if (g_data_057af00c != '\0') goto label_0455ed10;
label_0455ee28:
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee34;
            il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
            g_data_057af00c = '\x01';
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c != 0) goto label_0455ed21;
label_0455ee4c:
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee51;
            il2cpp_runtime_helper_02337ed0();
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          else {
            if (g_data_057af00c == '\0') goto label_0455ee28;
label_0455ed10:
            if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) goto label_0455ee4c;
label_0455ed21:
            lVar22 = *(long *)((long)TypeInfo_InGameManager->static_fields + 0x48);
          }
          if (lVar22 != 0) {
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed3e;
            (**(code **)(lVar22 + 0x18))(*(undefined8 *)(lVar22 + 0x40),iVar46,*(undefined8 *)(lVar22 + 0x28))
            ;
          }
          if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed56;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)
                     ((long)TypeInfo_InGameManager->static_fields + 0x18);
          if (pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                         (*(long *)(TypeInfo_AnticheatManager + 0xb8) + 0x18);
            pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ed8c;
            pIVar23 = System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar37,(pPVar34->fields).actorNumber,MethodInfo_PlayerInfo_get_Item);
            if ((((pIVar23 != (Il2CppObject *)0x0) && (pIVar23[2].klass != (Il2CppClass *)0x0)) &&
                (pvVar28 = ((pIVar23[2].klass)->_1).typeMetadataHandle, pvVar28 != (void *)0x0)) &&
               (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
              pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455edce;
              bVar12 = System_Collections_Generic_HashSet_object___Contains
                                 (__this_00,*(Il2CppObject **)((long)pvVar28 + 0x18),MethodInfo_Boolean_Contains);
              if ((char)bVar12 == '\0') {
                return;
              }
              if (*(int *)(TypeInfo_AnticheatManager + 0xe4) == 0) {
                pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ede3;
                il2cpp_runtime_helper_02337ed0();
              }
              Anticheat_AnticheatManager__KickPlayer(pPVar34,0,"",(MethodInfo *)0x0);
              return;
            }
          }
          goto label_0455ee6e;
        }
      }
      pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee7d;
      il2cpp_runtime_helper_022b2c90();
label_0455ee7d:
      pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455ee82;
      auVar43 = il2cpp_runtime_helper_022b2c90();
      if (auVar43._8_4_ != 1) {
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef25;
        _Unwind_Resume(auVar43._0_8_);
      }
      pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eec0;
      puVar24 = (undefined8 *)__cxa_begin_catch(auVar43._0_8_);
      pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eecf;
      uVar25 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eedd;
      cVar11 = il2cpp_runtime_helper_0233e000(uVar25,*(undefined8 *)*puVar24);
      if (cVar11 == '\0') {
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)0x455eefe;
        puVar26 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar26 = *puVar24;
        pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)&g_data_0455ef15;
        __cxa_throw(puVar26,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      return;
    }
    method = (MethodInfo *)TypeInfo_InGameManager;
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af075 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"Game/CustomLogicPhotonSyncPrefab");
    g_data_057af075 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  pPVar34 = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  uVar38 = SUB84(pPVar34,0);
  uVar40 = (undefined4)((ulong)pPVar34 >> 0x20);
  fVar41 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    uVar38 = SUB84(pPVar34,0);
    uVar40 = (undefined4)((ulong)pPVar34 >> 0x20);
    g_data_057a6843 = '\x01';
    in_stack_ffffffffffffffc0 = pPVar34;
  }
  fVar2 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->x;
  rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    in_stack_ffffffffffffffc0 = (Photon_Realtime_Player_o *)CONCAT44(uVar40,uVar38);
    il2cpp_runtime_helper_02337ed0();
    uVar38 = SUB84(in_stack_ffffffffffffffc0,0);
    uVar40 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  }
  message = (MethodInfo_255A0F0 *)0x0;
  UVar44.fields.y = (float)uVar40;
  UVar44.fields.x = (float)uVar38;
  UVar44.fields.z = fVar41;
  pUVar27 = Photon_Pun_PhotonNetwork__Instantiate
                      ("Game/CustomLogicPhotonSyncPrefab",UVar44,(UnityEngine_Quaternion_o)rotation,'\0',(System_Object_array *)0x0,
                       (MethodInfo *)0x0);
  iVar46 = (int32_t)method;
  if ((pUVar27 != (UnityEngine_GameObject_o *)0x0) &&
     (message = MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync, pIVar23 = UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync),
     pIVar23 != (Il2CppObject *)0x0)) {
    if (g_data_057adbaa == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item,(ulong)method & 0xffffffff,0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&"InitRPC");
      g_data_057adbaa = '\x01';
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
      il2cpp_runtime_helper_02337ed0();
      pSVar37 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
      pIVar13 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar37,iVar46,MethodInfo_MapObject_get_Item);
      pIVar23[4].monitor = pIVar13;
      il2cpp_runtime_helper_022b4080(&pIVar23[4].monitor);
      if ((pIVar23[4].monitor == (void *)0x0) ||
         (pUVar27 = *(UnityEngine_GameObject_o **)((long)pIVar23[4].monitor + 0x18),
         pUVar27 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(pUVar27,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar35 = pIVar23[4].klass;
      pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if (pSVar21 == (System_Object_array *)0x0) goto label_042578ec;
      pIVar23 = pIVar13;
      if ((pIVar13 == (Il2CppObject *)0x0) || (lVar22 = il2cpp_runtime_helper_023051f0(pIVar13), lVar22 != 0)) {
        if ((int)pSVar21->max_length != 0) {
          pSVar21->m_Items[0] = pIVar13;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pIVar13);
          pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
          if ((pIVar23 != (Il2CppObject *)0x0) && (lVar22 = il2cpp_runtime_helper_023051f0(pIVar23), lVar22 == 0))
          goto label_042578f6;
          if (1 < (uint)pSVar21->max_length) {
            pSVar21->m_Items[1] = pIVar23;
            il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
            if (pIVar35 != (Il2CppClass *)0x0) {
              Photon_Pun_PhotonView__RPC
                        ((Photon_Pun_PhotonView_o *)pIVar35,"InitRPC",3,pSVar21,(MethodInfo *)0x0);
              return;
            }
            goto label_042578ec;
          }
        }
        goto label_042578f1;
      }
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
      pSVar37 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar37 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
      il2cpp_runtime_helper_022b2c90();
label_042578f1:
      il2cpp_runtime_helper_022b2ca0();
    }
label_042578f6:
    __this_02 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
    uVar29 = 0;
    il2cpp_runtime_helper_022b2b10();
    if (g_data_057adbab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
      g_data_057adbab = '\x01';
    }
    pPVar15 = (__this_02->fields).PhotonView;
    pSVar21 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
    if (pSVar21 == (System_Object_array *)0x0) {
label_04257a3d:
      pIVar13 = pIVar23;
      il2cpp_runtime_helper_022b2c90();
    }
    else if ((pIVar13 == (Il2CppObject *)0x0) || (lVar22 = il2cpp_runtime_helper_023051f0(pIVar13), lVar22 != 0)) {
      pIVar23 = pIVar13;
      if ((int)pSVar21->max_length != 0) {
        pSVar21->m_Items[0] = pIVar13;
        il2cpp_runtime_helper_022b4080(pSVar21->m_Items);
        if ((csvScript != (System_String_o *)0x0) && (lVar22 = il2cpp_runtime_helper_023051f0(csvScript), lVar22 == 0))
        goto label_04257a42;
        if (1 < (uint)pSVar21->max_length) {
          pSVar21->m_Items[1] = (Il2CppObject *)csvScript;
          il2cpp_runtime_helper_022b4080(pSVar21->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar21,(MethodInfo *)0x0);
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_02,uVar29 & 0xff,csvScript,(MethodInfo *)pSVar21);
            return;
          }
          goto label_04257a3d;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
label_04257a42:
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
    uVar30 = 0;
    auVar45 = il2cpp_runtime_helper_022b2b10();
    pSVar19 = auVar45._8_8_;
    uStack_b0 = auVar45._0_8_;
    pIStack_a8 = pIVar13;
    pPStack_a0 = pPVar15;
    pSStack_98 = csvScript;
    pCStack_90 = __this_02;
    pCStack_88 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar29;
    if (g_data_057adbac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adbac = '\x01';
    }
    bVar12 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      return;
    }
    *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar30;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar29 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar29;
    iVar4 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
    fVar41 = 0.0;
    pSVar33 = pSVar14;
    pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
    if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
    uVar29 = (uVar29 - iVar4) - (pPVar15->fields).viewIdField;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar29;
    pSVar14->m_Items[1].fields.hashCode = uVar29;
    if (pSVar19 == (System_String_o *)0x0) goto label_04257fa3;
    value = System_String__Split(pSVar19,10,0,(MethodInfo *)0x0);
    pSVar19 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    fVar41 = 0.0;
    pSVar33 = __this_03;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_03,(MethodInfo *)0x0);
    if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
    goto label_04257fa3;
    pIVar35 = (__this_03->obj).klass;
    (*pIVar35->vtable[9].methodPtr)(__this_03,pSVar19,pIVar35->vtable[9].method);
    __this_03->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
    __this_03->m_Items[0].fields.next = 0;
    *(undefined1 *)((long)&__this_03->m_Items[0].fields.key + 3) = 1;
    fVar41 = 0.0;
    pSVar33 = __this_03;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_03,0,(MethodInfo *)0x0);
    if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
    *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
    Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
    pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
    CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar16,mapObject,(MethodInfo *)0x0);
    pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar16;
    il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar16);
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor
              ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_03,mapObject,(MethodInfo *)0x0);
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields =
         __this_03;
    il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_03);
    ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[1].fields.value;
    pSVar14->m_Items[1].fields.value = (Il2CppObject *)mapObject;
    pMVar32 = mapObject;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    fVar41 = SUB84(pMVar32,0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    pSVar33 = TypeInfo_CustomLogicManager;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x38);
    pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar37,(int32_t)fVar41,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_b0 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_b0);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_b0 + 4);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar41 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar33 = TypeInfo_CustomLogicManager;
    if ((pvVar28 == (void *)0x0) ||
       (pSVar33 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar28 + 0x38),
       pSVar33 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    System_Collections_Generic_Dictionary_int__object___set_Item
              ((System_Collections_Generic_Dictionary_int__object__o *)pSVar33,(int32_t)fVar41,
               (Il2CppObject *)
               *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
                &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
    pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    if (pvVar28 == (void *)0x0) goto label_04257fa3;
    pSVar37 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28);
    pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar37 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
    bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                       (pSVar37,(int32_t)fVar41,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_b0 = CONCAT44(uStack_b0._4_4_,pSVar14->m_Items[1].fields.hashCode);
      pIVar23 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_b0);
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar41 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar33 = TypeInfo_CustomLogicManager;
    if (pvVar28 != (void *)0x0) {
      pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        fVar41 = (float)pSVar14->m_Items[1].fields.hashCode;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar28 + 0x28),
                   (int32_t)fVar41,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
        pCVar16 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
        pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar16 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          pSVar33 = pSVar14;
          CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                    (pCVar16,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
          fVar41 = SUB84(pSVar33,0);
          pSVar33 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar33,mapObject,1,(MethodInfo *)0x0);
            fVar41 = SUB84(mapObject,0);
            pSVar5 = *ppSVar1;
            if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
               && (pSVar33 = (pSVar5->fields)._entries,
                  pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              fVar41 = 0.0;
              pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0);
              if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                fVar41 = 0.0;
                UVar44 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar17,(MethodInfo *)0x0);
                pSVar14->m_Items[2].fields.value = (Il2CppObject *)UVar44.fields._0_8_;
                pSVar14->m_Items[3].fields.hashCode = (int32_t)UVar44.fields.z;
                pSVar5 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                         pSVar14->m_Items[1].fields.value;
                pSVar33 = pSVar17;
                if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                               0x0) &&
                   (pSVar33 = (pSVar5->fields)._entries,
                   pSVar33 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                  fVar41 = 0.0;
                  __this_04 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar33,(MethodInfo *)0x0);
                  if (__this_04 != (UnityEngine_Transform_o *)0x0) {
                    UVar42 = UnityEngine_Transform__get_rotation(__this_04,(MethodInfo *)0x0);
                    *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar42.fields;
                    *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_04257fa3:
    il2cpp_runtime_helper_022b2c90();
    pCVar6 = (CustomLogic_CustomLogicStartAst_o *)pSVar33->m_Items[1].fields.key;
    pSVar14 = pSVar33;
    fVar2 = fVar41;
    if (pCVar6 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
      if (pPStack_a0 != pCVar6[3].monitor) {
        return;
      }
      *(undefined1 *)((long)&pSVar33->m_Items[0].fields.key + 1) = extraout_DL;
      if (g_data_057adbae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
        g_data_057adbae = '\x01';
      }
      pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
      fVar2 = 0.0;
      pSVar14 = pSVar17;
      System_Object___ctor((Il2CppObject *)pSVar17,(MethodInfo *)0x0);
      *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar17->bounds)->_networkCallback = 0;
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar17->m_Items[0].fields.key = &pSVar33->obj;
        il2cpp_runtime_helper_022b4080(&pSVar17->m_Items[0].fields.key,pSVar33);
        pSVar17->m_Items[0].fields.hashCode = (int32_t)fVar41;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pSVar33,(System_Collections_IEnumerator_o *)pSVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    uVar30 = 0;
    pIVar35 = pIVar18;
    System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar18->_1).name = 0;
    if (pIVar18 != (Il2CppClass *)0x0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar18->_1).byval_arg.bits =
           pSVar14;
      il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg.bits,pSVar14);
      *(float *)&(pIVar18->_1).byval_arg.data = fVar2;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar18 = (pIVar35->_1).element_class;
    pIVar36 = pIVar35;
    uVar31 = uVar30;
    if (pIVar18 != (Il2CppClass *)0x0) {
      if (__this_03 != (pIVar18->_1).fields) {
        return;
      }
      if (g_data_057adbad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
        g_data_057adbad = '\x01';
      }
      pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
      uVar31 = 0;
      pIVar36 = pIVar18;
      System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar18->_1).name = 0;
      if (pIVar18 != (Il2CppClass *)0x0) {
        (pIVar18->_1).byval_arg.data = pIVar35;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg,pIVar35);
        *(undefined1 *)&(pIVar18->_1).byval_arg.bits = uVar30;
        (pIVar18->_1).this_arg.data = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&(pIVar18->_1).this_arg,extraout_RDX);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar35,(System_Collections_IEnumerator_o *)pIVar18,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar39 = 0;
    pIVar23 = pIVar13;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar13[1].klass = 0;
    if (pIVar13 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(pIVar23,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar23[1].klass = uVar39;
      return;
    }
    pIVar13[2].klass = pIVar36;
    il2cpp_runtime_helper_022b4080(pIVar13 + 2,pIVar36);
    *(undefined1 *)&pIVar13[2].monitor = uVar31;
    pIVar13[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar13 + 3,extraout_RDX_00);
    return;
  }
  uVar25 = il2cpp_runtime_helper_022b2c90();
  uVar47 = 0;
  uVar38 = (undefined4)uVar25;
  uVar40 = (undefined4)((ulong)uVar25 >> 0x20);
  if (g_data_057af076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0457194c;
label_045719d8:
    il2cpp_runtime_helper_02337ed0();
    pCStack_88 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_045719d8;
label_0457194c:
    pCStack_88 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  if (pCStack_88 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCStack_88 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pIVar35 = (Il2CppClass *)0x0;
  __this_01.fields._4_4_ = uVar40;
  __this_01.fields.timeInt = uVar38;
  __this_01.fields.Sender._0_4_ = iVar46;
  __this_01.fields.Sender._4_4_ = uVar47;
  __this_01.fields.photonView._0_4_ = uVar39;
  __this_01.fields.photonView._4_4_ = uVar48;
  sentServerTimestamp =
       Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&stack0xffffffffffffffb8);
  if (pCStack_88 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (pCStack_88,in_stack_ffffffffffffffc0,(System_String_o *)message,sentServerTimestamp,
               (MethodInfo *)0x0);
    return;
  }
  pCStack_90 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_022b2c90();
  pIVar18 = pIVar35;
  if (g_data_057af077 == '\0') {
    pSStack_98 = (System_String_o *)0x4571a1f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_98 = (System_String_o *)0x4571a2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if ((Photon_Realtime_Player_o *)CONCAT44(uVar48,uVar39) == (Photon_Realtime_Player_o *)0x0) {
label_04571aa0:
    pSStack_98 = (System_String_o *)0x4571aa5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar18 = (Il2CppClass *)0x0;
    pSStack_98 = (System_String_o *)0x4571a42;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient
                       ((Photon_Realtime_Player_o *)CONCAT44(uVar48,uVar39),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar10 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar10 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar18 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar10->klass->_2).naturalAligment) &&
       ((pGVar10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar10,(uint)pIVar35 & 0xff,method_00);
      return;
    }
  }
  pSStack_98 = (System_String_o *)0x4571aaa;
  pPStack_b8 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar36 = pIVar18;
  pPStack_a0 = (Photon_Pun_PhotonView_o *)&stack0xffffffffffffff90;
  pSStack_98 = (System_String_o *)((ulong)pIVar35 & 0xffffffff);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (unaff_RBP == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar36 = (Il2CppClass *)0x0;
    bVar12 = Photon_Realtime_Player__get_IsMasterClient(unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      return;
    }
    pGVar10 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar10 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar3 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar36 = TypeInfo_InGameManager;
    if ((bVar3 <= (pGVar10->klass->_2).naturalAligment) &&
       ((pGVar10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = fVar41;
      position.fields._0_8_ = pPStack_b8;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar10,(uint)pIVar18 & 0xff,position,fVar2,method_01);
      return;
    }
  }
  uVar39 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (pPStack_b8 == (Photon_Realtime_Player_o *)0x0) {
label_04571c2f:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af07a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      g_data_057af07a = '\x01';
    }
    uStack_118 = CONCAT44(uVar39,uStack_d8);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields.Sender = (Photon_Realtime_Player_o *)&pCStack_88;
    info_00.fields._0_8_ = uStack_118;
    info_00.fields.photonView = pPStack_c8;
    GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar36,senderTimestamp,info_00,(MethodInfo *)0x0);
    return;
  }
  pIVar36 = (Il2CppClass *)0x0;
  bVar12 = Photon_Realtime_Player__get_IsMasterClient(pPStack_b8,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    if (pvVar28 != (void *)0x0) {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar28 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pvVar28 == (void *)0x0) goto label_04571c2f;
      }
      *(undefined4 *)((long)pvVar28 + 0x20) = uVar39;
    }
  }
  return;
}


// GameManagers.RPCManager$$TransferNetworkViewRPC
// il2cpp: void GameManagers_RPCManager__TransferNetworkViewRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x45717d0

void GameManagers_RPCManager__TransferNetworkViewRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  Photon_Realtime_Player_o *pPVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar6;
  CustomLogic_CustomLogicStartAst_o *pCVar7;
  GameManagers_InGameManager_o *pGVar8;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_00;
  bool_conflict bVar9;
  UnityEngine_Object_o *x;
  long *parameters;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_Object_array *parameters_00;
  Il2CppObject *pIVar10;
  long lVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar12;
  Photon_Pun_PhotonView_o *pPVar13;
  System_String_array *value;
  System_String_o *pSVar14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar16;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *pIVar17;
  UnityEngine_GameObject_o *pUVar18;
  Il2CppObject *pIVar19;
  undefined8 uVar20;
  void *pvVar21;
  undefined1 extraout_DL;
  System_String_o *csvScript;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  uint uVar22;
  Photon_Realtime_Player_o *unaff_RBP;
  undefined1 uVar23;
  Map_MapObject_o *pMVar24;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar25;
  MethodInfo_255A0F0 *message;
  Il2CppClass *pIVar26;
  Il2CppClass *pIVar27;
  System_Collections_Generic_Dictionary_int__object__o *pSVar28;
  Photon_Pun_PhotonView_o *unaff_R12;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  UnityEngine_Quaternion_o UVar37;
  UnityEngine_Vector3_o UVar38;
  UnityEngine_Vector3_o position;
  undefined1 auVar39 [16];
  undefined8 local_110;
  undefined4 local_d0;
  Photon_Pun_PhotonView_o *local_c0;
  Photon_Realtime_Player_o *local_b0;
  undefined8 uStack_a8;
  Il2CppObject *pIStack_a0;
  Photon_Pun_PhotonView_o *pPStack_98;
  System_String_o *pSStack_90;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_88;
  CustomLogic_CustomLogicEvaluator_o *local_80;
  undefined7 uVar40;
  undefined1 uVar41;
  ulong uVar42;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar42 = (ulong)(uint)id;
  if (g_data_057af075 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&"Game/CustomLogicPhotonSyncPrefab");
    g_data_057af075 = '\x01';
  }
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  pPVar2 = (Photon_Realtime_Player_o *)**(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar33 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  uVar29 = (int)pPVar2;
  uVar30 = (int)((ulong)pPVar2 >> 0x20);
  uVar31 = 0;
  uVar32 = 0;
  if (g_data_057a6843 == '\0') {
    uStack_30 = (InvokerMethod)0x0;
    local_40._4_4_ = fVar33;
    local_38 = pPVar2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
    uVar29 = (undefined4)local_38;
    uVar30 = local_38._4_4_;
    uVar31 = (undefined4)uStack_30;
    uVar32 = uStack_30._4_4_;
    fVar33 = (float)local_40._4_4_;
  }
  uVar20 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
  fVar34 = (float)uVar20;
  pcVar3 = (char *)(*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
  uVar35 = (int)pcVar3;
  uVar36 = (int)((ulong)pcVar3 >> 0x20);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    local_38 = (Photon_Realtime_Player_o *)CONCAT44(uVar30,uVar29);
    uStack_30 = (InvokerMethod)CONCAT44(uVar32,uVar31);
    local_40._4_4_ = fVar33;
    local_28 = pcVar3;
    il2cpp_runtime_helper_02337ed0();
    uVar29 = (undefined4)local_38;
    uVar30 = local_38._4_4_;
    uVar35 = (undefined4)local_28;
    uVar36 = local_28._4_4_;
    fVar33 = (float)local_40._4_4_;
  }
  message = (MethodInfo_255A0F0 *)0x0;
  UVar38.fields.y = (float)uVar30;
  UVar38.fields.x = (float)uVar29;
  UVar38.fields.z = fVar33;
  UVar37.fields.w = (float)uVar36;
  UVar37.fields.z = (float)uVar35;
  UVar37.fields.x = (float)(int)uVar20;
  UVar37.fields.y = (float)(int)((ulong)uVar20 >> 0x20);
  pUVar18 = Photon_Pun_PhotonNetwork__Instantiate
                      ("Game/CustomLogicPhotonSyncPrefab",UVar38,UVar37,'\0',(System_Object_array *)0x0,(MethodInfo *)0x0);
  if ((pUVar18 != (UnityEngine_GameObject_o *)0x0) &&
     (message = MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync, pIVar19 = UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPhotonSync),
     pIVar19 != (Il2CppObject *)0x0)) {
    if (g_data_057adbaa == '\0') {
      local_40 = (undefined1  [8])0x4257713;
      il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item,uVar42,0);
      local_40 = (undefined1  [8])0x425771f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
      local_40 = (undefined1  [8])0x425772b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      local_40 = (undefined1  [8])0x4257737;
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      local_40 = (undefined1  [8])0x4257743;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      local_40 = (undefined1  [8])0x425774f;
      il2cpp_runtime_helper_023445d0(&"InitRPC");
      g_data_057adbaa = '\x01';
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
      parameters = &TypeInfo_MapLoader;
      pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
      parameters = &TypeInfo_MapLoader;
      local_40 = (undefined1  [8])0x4257798;
      pIVar10 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar28,id,MethodInfo_MapObject_get_Item);
      pIVar19[4].monitor = pIVar10;
      local_40 = (undefined1  [8])0x42577a8;
      il2cpp_runtime_helper_022b4080(&pIVar19[4].monitor);
      if ((pIVar19[4].monitor == (void *)0x0) ||
         (pUVar18 = *(UnityEngine_GameObject_o **)((long)pIVar19[4].monitor + 0x18),
         pUVar18 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
      local_40 = (undefined1  [8])0x42577d1;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(pUVar18,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        local_40 = (undefined1  [8])0x42577ec;
        il2cpp_runtime_helper_02337ed0();
      }
      local_40 = (undefined1  [8])0x42577f8;
      bVar9 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pIVar26 = pIVar19[4].klass;
      local_40 = (undefined1  [8])0x4257813;
      parameters = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      uStack_30 = (InvokerMethod)CONCAT44(id,(undefined4)uStack_30);
      local_40 = (undefined1  [8])0x4257830;
      pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
      if ((System_Object_array *)parameters == (System_Object_array *)0x0) goto label_042578ec;
      pIVar19 = pIVar10;
      if (pIVar10 == (Il2CppObject *)0x0) {
label_0425785a:
        if ((int)((System_Object_array *)parameters)->max_length != 0) {
          ((System_Object_array *)parameters)->m_Items[0] = pIVar10;
          local_40 = (undefined1  [8])0x4257874;
          il2cpp_runtime_helper_022b4080(((System_Object_array *)parameters)->m_Items,pIVar10);
          uStack_30._0_4_ = CONCAT13((char)bVar9,(undefined3)uStack_30);
          local_40 = (undefined1  [8])0x4257887;
          pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
          if (pIVar19 != (Il2CppObject *)0x0) {
            local_40 = (undefined1  [8])0x425789f;
            lVar11 = il2cpp_runtime_helper_023051f0(pIVar19);
            if (lVar11 == 0) goto label_042578f6;
          }
          if (1 < (uint)((System_Object_array *)parameters)->max_length) {
            ((System_Object_array *)parameters)->m_Items[1] = pIVar19;
            local_40 = (undefined1  [8])0x42578bd;
            il2cpp_runtime_helper_022b4080(((System_Object_array *)parameters)->m_Items + 1);
            if (pIVar26 != (Il2CppClass *)0x0) {
              local_40 = (undefined1  [8])0x42578df;
              Photon_Pun_PhotonView__RPC
                        ((Photon_Pun_PhotonView_o *)pIVar26,"InitRPC",3,(System_Object_array *)parameters,
                         (MethodInfo *)0x0);
              return;
            }
            goto label_042578ec;
          }
        }
        goto label_042578f1;
      }
      local_40 = (undefined1  [8])0x4257851;
      lVar11 = il2cpp_runtime_helper_023051f0(pIVar10);
      if (lVar11 != 0) goto label_0425785a;
    }
    else {
      if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
      parameters = &TypeInfo_MapLoader;
      local_40 = (undefined1  [8])0x425776f;
      il2cpp_runtime_helper_02337ed0();
      pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
      if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
      local_40 = (undefined1  [8])0x42578f1;
      il2cpp_runtime_helper_022b2c90();
label_042578f1:
      local_40 = (undefined1  [8])0x42578f6;
      il2cpp_runtime_helper_022b2ca0();
    }
label_042578f6:
    local_40 = (undefined1  [8])0x42578fb;
    __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
    uVar22 = 0;
    local_40 = (undefined1  [8])0x4257905;
    il2cpp_runtime_helper_022b2b10();
    local_40 = (undefined1  [8])parameters;
    if (g_data_057adbab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_object);
      il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
      g_data_057adbab = '\x01';
    }
    pPVar13 = (__this_01->fields).PhotonView;
    parameters_00 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
    if (parameters_00 == (System_Object_array *)0x0) {
label_04257a3d:
      pIVar10 = pIVar19;
      il2cpp_runtime_helper_022b2c90();
    }
    else if ((pIVar10 == (Il2CppObject *)0x0) || (lVar11 = il2cpp_runtime_helper_023051f0(pIVar10), lVar11 != 0)) {
      pIVar19 = pIVar10;
      if ((int)parameters_00->max_length != 0) {
        parameters_00->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(parameters_00->m_Items);
        if ((csvScript != (System_String_o *)0x0) && (lVar11 = il2cpp_runtime_helper_023051f0(csvScript), lVar11 == 0))
        goto label_04257a42;
        if (1 < (uint)parameters_00->max_length) {
          parameters_00->m_Items[1] = (Il2CppObject *)csvScript;
          il2cpp_runtime_helper_022b4080(parameters_00->m_Items + 1);
          if (pPVar13 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar13,"InitDynamicRPC",4,parameters_00,(MethodInfo *)0x0);
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_01,uVar22 & 0xff,csvScript,(MethodInfo *)parameters_00);
            return;
          }
          goto label_04257a3d;
        }
      }
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
label_04257a42:
    pSVar12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
    uVar41 = 0;
    auVar39 = il2cpp_runtime_helper_022b2b10();
    pSVar14 = auVar39._8_8_;
    uStack_a8 = auVar39._0_8_;
    pIStack_a0 = pIVar10;
    pPStack_98 = pPVar13;
    pSStack_90 = csvScript;
    pCStack_88 = __this_01;
    local_80 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar22;
    if (g_data_057adbac == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
      il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
      il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057adbac = '\x01';
    }
    bVar9 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    *(undefined1 *)((long)&pSVar12->m_Items[5].fields.hashCode + 1) = uVar41;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar22 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar22;
    iVar5 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
    fVar33 = 0.0;
    pSVar25 = pSVar12;
    pPVar13 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar12,(MethodInfo *)0x0);
    if (pPVar13 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
    uVar22 = (uVar22 - iVar5) - (pPVar13->fields).viewIdField;
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar22;
    pSVar12->m_Items[1].fields.hashCode = uVar22;
    if (pSVar14 == (System_String_o *)0x0) goto label_04257fa3;
    value = System_String__Split(pSVar14,10,0,(MethodInfo *)0x0);
    pSVar14 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
    fVar33 = 0.0;
    pSVar25 = __this_02;
    Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)0x0);
    if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
    goto label_04257fa3;
    pIVar26 = (__this_02->obj).klass;
    (*pIVar26->vtable[9].methodPtr)(__this_02,pSVar14,pIVar26->vtable[9].method);
    __this_02->m_Items[0].fields.hashCode = pSVar12->m_Items[1].fields.hashCode;
    __this_02->m_Items[0].fields.next = 0;
    *(undefined1 *)((long)&__this_02->m_Items[0].fields.key + 3) = 1;
    fVar33 = 0.0;
    pSVar25 = __this_02;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
    if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
    *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
    Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
    pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
    CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar15,mapObject,(MethodInfo *)0x0);
    pSVar12->m_Items[2].fields.key = (Il2CppObject *)pCVar15;
    il2cpp_runtime_helper_022b4080(&pSVar12->m_Items[2].fields.key,pCVar15);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
    CustomLogic_CustomLogicMapObjectBuiltin___ctor
              ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_02,mapObject,(MethodInfo *)0x0);
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar12->m_Items[2].fields =
         __this_02;
    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2,__this_02);
    ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar12->m_Items[1].fields.value;
    pSVar12->m_Items[1].fields.value = (Il2CppObject *)mapObject;
    pMVar24 = mapObject;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    fVar33 = SUB84(pMVar24,0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    pSVar25 = TypeInfo_CustomLogicManager;
    if (pvVar21 == (void *)0x0) goto label_04257fa3;
    pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar21 + 0x38);
    pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar33 = (float)pSVar12->m_Items[1].fields.hashCode;
    bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar28,(int32_t)fVar33,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
      il2cpp_runtime_helper_02337ed0();
      pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_a8 = CONCAT44(pSVar12->m_Items[1].fields.hashCode,(undefined4)uStack_a8);
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
      __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar19,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar33 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
      pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar25 = TypeInfo_CustomLogicManager;
    if ((pvVar21 == (void *)0x0) ||
       (pSVar25 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar21 + 0x38),
       pSVar25 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
    fVar33 = (float)pSVar12->m_Items[1].fields.hashCode;
    System_Collections_Generic_Dictionary_int__object___set_Item
              ((System_Collections_Generic_Dictionary_int__object__o *)pSVar25,(int32_t)fVar33,
               (Il2CppObject *)
               *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
                &pSVar12->m_Items[2].fields,MethodInfo_Void_set_Item);
    pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    if (pvVar21 == (void *)0x0) goto label_04257fa3;
    pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar21 + 0x28);
    pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
    fVar33 = (float)pSVar12->m_Items[1].fields.hashCode;
    bVar9 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (pSVar28,(int32_t)fVar33,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar9 == '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
      il2cpp_runtime_helper_02337ed0();
      pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    else {
      uStack_a8 = CONCAT44(uStack_a8._4_4_,pSVar12->m_Items[1].fields.hashCode);
      pIVar19 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a8);
      __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar19,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar33 = 0.0;
      UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
      pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
    }
    pSVar25 = TypeInfo_CustomLogicManager;
    if (pvVar21 != (void *)0x0) {
      pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar21 + 0x28) !=
          (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        fVar33 = (float)pSVar12->m_Items[1].fields.hashCode;
        System_Collections_Generic_Dictionary_int__object___set_Item
                  (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar21 + 0x28),
                   (int32_t)fVar33,(Il2CppObject *)pSVar12->m_Items[2].fields.key,MethodInfo_Void_set_Item);
        pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar12->m_Items[2].fields.key;
        pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar15 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          pSVar25 = pSVar12;
          CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                    (pCVar15,(CustomLogic_CustomLogicPhotonSync_o *)pSVar12,(MethodInfo *)0x0);
          fVar33 = SUB84(pSVar25,0);
          pSVar25 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                      ((CustomLogic_CustomLogicEvaluator_o *)pSVar25,mapObject,1,(MethodInfo *)0x0);
            fVar33 = SUB84(mapObject,0);
            pSVar6 = *ppSVar1;
            if ((pSVar6 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
               && (pSVar25 = (pSVar6->fields)._entries,
                  pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
              fVar33 = 0.0;
              pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
              if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                fVar33 = 0.0;
                UVar38 = UnityEngine_Transform__get_position
                                   ((UnityEngine_Transform_o *)pSVar16,(MethodInfo *)0x0);
                pSVar12->m_Items[2].fields.value = (Il2CppObject *)UVar38.fields._0_8_;
                pSVar12->m_Items[3].fields.hashCode = (int32_t)UVar38.fields.z;
                pSVar6 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                         pSVar12->m_Items[1].fields.value;
                pSVar25 = pSVar16;
                if ((pSVar6 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                               0x0) &&
                   (pSVar25 = (pSVar6->fields)._entries,
                   pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                  fVar33 = 0.0;
                  __this_03 = UnityEngine_GameObject__get_transform
                                        ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
                  if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                    UVar37 = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
                    *(UnityEngine_Quaternion_Fields *)&pSVar12->m_Items[3].fields.next = UVar37.fields;
                    *(undefined1 *)&pSVar12->m_Items[4].fields.key = 1;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
label_04257fa3:
    il2cpp_runtime_helper_022b2c90();
    pCVar7 = (CustomLogic_CustomLogicStartAst_o *)pSVar25->m_Items[1].fields.key;
    pSVar12 = pSVar25;
    fVar34 = fVar33;
    if (pCVar7 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
      if (pPStack_98 != pCVar7[3].monitor) {
        return;
      }
      *(undefined1 *)((long)&pSVar25->m_Items[0].fields.key + 1) = extraout_DL;
      if (g_data_057adbae == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
        g_data_057adbae = '\x01';
      }
      pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
      fVar34 = 0.0;
      pSVar12 = pSVar16;
      System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
      *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar16->bounds)->_networkCallback = 0;
      __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pSVar16->m_Items[0].fields.key = &pSVar25->obj;
        il2cpp_runtime_helper_022b4080(&pSVar16->m_Items[0].fields.key,pSVar25);
        pSVar16->m_Items[0].fields.hashCode = (int32_t)fVar33;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pSVar25,(System_Collections_IEnumerator_o *)pSVar16,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    uVar41 = 0;
    pIVar26 = pIVar17;
    System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar17->_1).name = 0;
    if (pIVar17 != (Il2CppClass *)0x0) {
      *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar17->_1).byval_arg.bits =
           pSVar12;
      il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg.bits,pSVar12);
      *(float *)&(pIVar17->_1).byval_arg.data = fVar34;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pIVar17 = (pIVar26->_1).element_class;
    pIVar27 = pIVar26;
    uVar23 = uVar41;
    if (pIVar17 != (Il2CppClass *)0x0) {
      if (__this_02 != (pIVar17->_1).fields) {
        return;
      }
      if (g_data_057adbad == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
        g_data_057adbad = '\x01';
      }
      pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
      uVar23 = 0;
      pIVar27 = pIVar17;
      System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar17->_1).name = 0;
      if (pIVar17 != (Il2CppClass *)0x0) {
        (pIVar17->_1).byval_arg.data = pIVar26;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pIVar26);
        *(undefined1 *)&(pIVar17->_1).byval_arg.bits = uVar41;
        (pIVar17->_1).this_arg.data = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&(pIVar17->_1).this_arg,extraout_RDX);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)pIVar26,(System_Collections_IEnumerator_o *)pIVar17,
                   (MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar29 = 0;
    pIVar19 = pIVar10;
    System_Object___ctor(pIVar10,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar10[1].klass = 0;
    if (pIVar10 != (Il2CppObject *)0x0) {
      pIVar10[2].klass = pIVar27;
      il2cpp_runtime_helper_022b4080(pIVar10 + 2,pIVar27);
      *(undefined1 *)&pIVar10[2].monitor = uVar23;
      pIVar10[3].klass = extraout_RDX_00;
      il2cpp_runtime_helper_022b4080(pIVar10 + 3,extraout_RDX_00);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar19,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar19[1].klass = uVar29;
    return;
  }
  uVar20 = il2cpp_runtime_helper_022b2c90();
  uVar40 = (undefined7)uVar20;
  uVar41 = (undefined1)((ulong)uVar20 >> 0x38);
  if (g_data_057af076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_045719d8;
label_0457194c:
    local_80 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_0457194c;
label_045719d8:
    il2cpp_runtime_helper_02337ed0();
    local_80 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  if (local_80 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
    local_80 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pPVar2 = local_38;
  pIVar26 = (Il2CppClass *)0x0;
  __this_00.fields._7_1_ = uVar41;
  __this_00.fields._0_7_ = uVar40;
  __this_00.fields.Sender = (Photon_Realtime_Player_o *)uVar42;
  __this_00.fields.photonView = unaff_R12;
  sentServerTimestamp = Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_00,(MethodInfo *)local_40);
  if (local_80 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (local_80,pPVar2,(System_String_o *)message,sentServerTimestamp,(MethodInfo *)0x0);
    return;
  }
  pCStack_88 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar26;
  if (g_data_057af077 == '\0') {
    pSStack_90 = (System_String_o *)0x4571a1f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pSStack_90 = (System_String_o *)0x4571a2b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if (unaff_R12 == (Photon_Pun_PhotonView_o *)0x0) {
label_04571aa0:
    pSStack_90 = (System_String_o *)0x4571aa5;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar17 = (Il2CppClass *)0x0;
    pSStack_90 = (System_String_o *)0x4571a42;
    bVar9 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)unaff_R12,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pGVar8 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar8 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar4 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar17 = TypeInfo_InGameManager;
    if ((bVar4 <= (pGVar8->klass->_2).naturalAligment) &&
       ((pGVar8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar8,(uint)pIVar26 & 0xff,method_00);
      return;
    }
  }
  pSStack_90 = (System_String_o *)0x4571aaa;
  local_b0 = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar27 = pIVar17;
  pPStack_98 = (Photon_Pun_PhotonView_o *)&stack0xffffffffffffff98;
  pSStack_90 = (System_String_o *)((ulong)pIVar26 & 0xffffffff);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (unaff_RBP == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar27 = (Il2CppClass *)0x0;
    bVar9 = Photon_Realtime_Player__get_IsMasterClient(unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    pGVar8 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar8 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar4 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar27 = TypeInfo_InGameManager;
    if ((bVar4 <= (pGVar8->klass->_2).naturalAligment) &&
       ((pGVar8->klass->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = fVar33;
      position.fields._0_8_ = local_b0;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar8,(uint)pIVar17 & 0xff,position,fVar34,method_01);
      return;
    }
  }
  uVar29 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (local_b0 != (Photon_Realtime_Player_o *)0x0) {
    pIVar27 = (Il2CppClass *)0x0;
    bVar9 = Photon_Realtime_Player__get_IsMasterClient(local_b0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
        pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
      }
      else {
        pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
      }
      if (pvVar21 != (void *)0x0) {
        if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
          il2cpp_runtime_helper_02337ed0();
          pvVar21 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
          if (pvVar21 == (void *)0x0) goto label_04571c2f;
        }
        *(undefined4 *)((long)pvVar21 + 0x20) = uVar29;
      }
    }
    return;
  }
label_04571c2f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07a = '\x01';
  }
  local_110 = CONCAT44(uVar29,local_d0);
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields.Sender = (Photon_Realtime_Player_o *)&local_80;
  info_00.fields._0_8_ = local_110;
  info_00.fields.photonView = local_c0;
  GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar27,senderTimestamp,info_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SendMessageRPC
// il2cpp: void GameManagers_RPCManager__SendMessageRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571920

void GameManagers_RPCManager__SendMessageRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  double sentServerTimestamp;
  Photon_Pun_PhotonMessageInfo_o info_00;
  Photon_Pun_PhotonMessageInfo_o __this_00;
  Photon_Realtime_Player_o *sender;
  bool_conflict bVar3;
  undefined8 in_RAX;
  long lVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  undefined8 unaff_RBX;
  Photon_Realtime_Player_o *unaff_RBP;
  Il2CppClass *pIVar5;
  Il2CppClass *pIVar6;
  Photon_Pun_PhotonView_o *unaff_R12;
  undefined4 uVar7;
  float in_XMM1_Da;
  float in_XMM2_Da;
  UnityEngine_Vector3_o position;
  undefined4 uStack_88;
  Photon_Pun_PhotonView_o *pPStack_78;
  CustomLogic_CustomLogicEvaluator_o *pCStack_38;
  
  if (g_data_057af076 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af076 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto label_0457194c;
label_045719d8:
    il2cpp_runtime_helper_02337ed0();
    pCStack_38 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto label_045719d8;
label_0457194c:
    pCStack_38 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (pCStack_38 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pCStack_38 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  sender = info.fields.Sender;
  pIVar5 = (Il2CppClass *)0x0;
  __this_00.fields.Sender = (Photon_Realtime_Player_o *)unaff_RBX;
  __this_00.fields._0_8_ = in_RAX;
  __this_00.fields.photonView = unaff_R12;
  sentServerTimestamp = Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_00,(MethodInfo *)&info);
  if (pCStack_38 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (pCStack_38,sender,message,sentServerTimestamp,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar6 = pIVar5;
  if (g_data_057af077 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if (unaff_R12 == (Photon_Pun_PhotonView_o *)0x0) {
label_04571aa0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar6 = (Il2CppClass *)0x0;
    bVar3 = Photon_Realtime_Player__get_IsMasterClient
                      ((Photon_Realtime_Player_o *)unaff_R12,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar6 = TypeInfo_InGameManager;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar2,(uint)pIVar5 & 0xff,method_00);
      return;
    }
  }
  position.fields._0_8_ = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  pIVar5 = pIVar6;
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (unaff_RBP == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar5 = (Il2CppClass *)0x0;
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar5 = TypeInfo_InGameManager;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = in_XMM1_Da;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar2,(uint)pIVar6 & 0xff,position,in_XMM2_Da,method_01);
      return;
    }
  }
  uVar7 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (position.fields._0_8_ == (Photon_Realtime_Player_o *)0x0) {
label_04571c2f:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057af07a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
      g_data_057af07a = '\x01';
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    info_00.fields._4_4_ = uVar7;
    info_00.fields.timeInt = uStack_88;
    info_00.fields.Sender = (Photon_Realtime_Player_o *)&pCStack_38;
    info_00.fields.photonView = pPStack_78;
    GameManagers_ChatManager__OnChatRPC((System_String_o *)pIVar5,senderTimestamp,info_00,(MethodInfo *)0x0);
    return;
  }
  pIVar5 = (Il2CppClass *)0x0;
  bVar3 = Photon_Realtime_Player__get_IsMasterClient(position.fields._0_8_,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar4 != 0) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (lVar4 == 0) goto label_04571c2f;
      }
      *(undefined4 *)(lVar4 + 0x20) = uVar7;
    }
  }
  return;
}


// GameManagers.RPCManager$$SpawnPlayerRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerRPC (GameManagers_RPCManager_o* __this, bool force, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571a00

void GameManagers_RPCManager__SpawnPlayerRPC
               (GameManagers_RPCManager_o *__this,bool_conflict force,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar3;
  long lVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int64_t senderTimestamp;
  Photon_Realtime_Player_o *unaff_RBP;
  undefined4 in_register_00000034;
  Il2CppClass *pIVar5;
  Il2CppClass *message;
  undefined4 uVar6;
  float in_XMM1_Da;
  float in_XMM2_Da;
  UnityEngine_Vector3_o position;
  undefined4 uStack_60;
  Photon_Pun_PhotonView_o *pPStack_50;
  
  pIVar5 = (Il2CppClass *)CONCAT44(in_register_00000034,force);
  if (g_data_057af077 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af077 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_04571aa0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar5 = (Il2CppClass *)0x0;
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_04571aa0;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    pIVar5 = TypeInfo_InGameManager;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayer(pGVar2,force & 0xff,method_00);
      return;
    }
  }
  position.fields._0_8_ = (Photon_Realtime_Player_o *)il2cpp_runtime_helper_022b2fd0();
  message = pIVar5;
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (unaff_RBP == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    message = (Il2CppClass *)0x0;
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(unaff_RBP,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pGVar2 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    message = TypeInfo_InGameManager;
    if ((bVar1 <= (pGVar2->klass->_2).naturalAligment) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      position.fields.z = in_XMM1_Da;
      GameManagers_InGameManager__SpawnPlayerAt(pGVar2,(uint)pIVar5 & 0xff,position,in_XMM2_Da,method_01);
      return;
    }
  }
  uVar6 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (position.fields._0_8_ != (Photon_Realtime_Player_o *)0x0) {
    message = (Il2CppClass *)0x0;
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(position.fields._0_8_,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (lVar4 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar4 == 0) goto label_04571c2f;
        }
        *(undefined4 *)(lVar4 + 0x20) = uVar6;
      }
    }
    return;
  }
label_04571c2f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07a = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields._4_4_ = uVar6;
  info_00.fields.timeInt = uStack_60;
  info_00.fields.Sender = (Photon_Realtime_Player_o *)&stack0xfffffffffffffff0;
  info_00.fields.photonView = pPStack_50;
  GameManagers_ChatManager__OnChatRPC((System_String_o *)message,senderTimestamp,info_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnPlayerAtRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerAtRPC (GameManagers_RPCManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571ab0

void GameManagers_RPCManager__SpawnPlayerAtRPC
               (GameManagers_RPCManager_o *__this,bool_conflict force,UnityEngine_Vector3_o position,
               float rotationY,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar2;
  long lVar3;
  MethodInfo *method_00;
  int64_t senderTimestamp;
  undefined4 in_register_00000034;
  Il2CppClass *message;
  undefined4 uVar4;
  undefined4 uStack_48;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  message = (Il2CppClass *)CONCAT44(in_register_00000034,force);
  if (g_data_057af078 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057af078 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_04571b75:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    message = (Il2CppClass *)0x0;
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_04571b75;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    message = TypeInfo_InGameManager;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__SpawnPlayerAt(__this_00,force & 0xff,position,rotationY,method_00);
      return;
    }
  }
  uVar4 = il2cpp_runtime_helper_022b2fd0();
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (position.fields._0_8_ != (Photon_Realtime_Player_o *)0x0) {
    message = (Il2CppClass *)0x0;
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(position.fields._0_8_,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (lVar3 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar3 == 0) goto label_04571c2f;
        }
        *(undefined4 *)(lVar3 + 0x20) = uVar4;
      }
    }
    return;
  }
label_04571c2f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07a = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields._4_4_ = uVar4;
  info_00.fields.timeInt = uStack_48;
  info_00.fields.Sender = (Photon_Realtime_Player_o *)&info;
  info_00.fields.photonView = pPStack_38;
  GameManagers_ChatManager__OnChatRPC((System_String_o *)message,senderTimestamp,info_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SyncCurrentTimeRPC
// il2cpp: void GameManagers_RPCManager__SyncCurrentTimeRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571b80

void GameManagers_RPCManager__SyncCurrentTimeRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_o info_00;
  bool_conflict bVar1;
  long lVar2;
  int64_t senderTimestamp;
  undefined8 unaff_RBX;
  Photon_Pun_PhotonView_o *unaff_retaddr;
  undefined4 uStack_10;
  
  if (g_data_057af079 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057af079 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (lVar2 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar2 == 0) goto label_04571c2f;
        }
        *(float *)(lVar2 + 0x20) = time;
      }
    }
    return;
  }
label_04571c2f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07a = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  info_00.fields._4_4_ = time;
  info_00.fields.timeInt = uStack_10;
  info_00.fields.Sender = (Photon_Realtime_Player_o *)unaff_RBX;
  info_00.fields.photonView = unaff_retaddr;
  GameManagers_ChatManager__OnChatRPC((System_String_o *)method,senderTimestamp,info_00,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ChatRPC
// il2cpp: void GameManagers_RPCManager__ChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571c40

void GameManagers_RPCManager__ChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af07a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07a = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__OnChatRPC(message,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PlayerChatRPC
// il2cpp: void GameManagers_RPCManager__PlayerChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571cd0

void GameManagers_RPCManager__PlayerChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af07b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07b = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__OnPlayerChatRPC(message,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$AnnounceRPC
// il2cpp: void GameManagers_RPCManager__AnnounceRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571d60

void GameManagers_RPCManager__AnnounceRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  MethodInfo *in_RAX;
  Photon_Realtime_Player_o *pPVar1;
  
  if (g_data_057af07c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af07c = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    }
    else {
      pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    }
    if (info.fields.Sender != pPVar1) {
      return;
    }
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aef72 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,0);
    g_data_057aef72 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__AddLine(message,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_RAX);
  return;
}


// GameManagers.RPCManager$$VoteKickRPC
// il2cpp: void GameManagers_RPCManager__VoteKickRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571e00

void GameManagers_RPCManager__VoteKickRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Realtime_Room_o *pPVar1;
  Photon_Realtime_Player_o *target;
  Il2CppObject *message;
  
  if (g_data_057af07d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057af07d = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar1 != (Photon_Realtime_Room_o *)0x0) {
    target = (Photon_Realtime_Player_o *)
             (*(pPVar1->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar1,id,0,(pPVar1->klass->vtable)._10_GetPlayer.method);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__VoteKickPlayer(info.fields.Sender,target,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057af07e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057af07e = '\x01';
  }
  message = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TestRPC
// il2cpp: void GameManagers_RPCManager__TestRPC (GameManagers_RPCManager_o* __this, UnityEngine_Color_o c, const MethodInfo* method);
// 0x4571eb0

void GameManagers_RPCManager__TestRPC
               (GameManagers_RPCManager_o *__this,UnityEngine_Color_o c,MethodInfo *method)

{
  Il2CppObject *message;
  
  if (g_data_057af07e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    g_data_057af07e = '\x01';
  }
  message = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Color);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PrivateChatRPC
// il2cpp: void GameManagers_RPCManager__PrivateChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4571f40

void GameManagers_RPCManager__PrivateChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int32_t targetID,
               int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (g_data_057af07f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af07f = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  GameManagers_ChatManager__OnPrivateChatRPC(message,targetID,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$Awake
// il2cpp: void GameManagers_RPCManager__Awake (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x4571fd0

void GameManagers_RPCManager__Awake(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057af080 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    g_data_057af080 = '\x01';
  }
  pIVar1 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_PhotonView_GetComponent_PhotonView);
  **(undefined8 **)(TypeInfo_RPCManager + 0xb8) = pIVar1;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_RPCManager + 0xb8),pIVar1);
  return;
}


// GameManagers.RPCManager$$.ctor
// il2cpp: void GameManagers_RPCManager___ctor (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x4572040

void GameManagers_RPCManager___ctor(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPun___ctor((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  return;
}


