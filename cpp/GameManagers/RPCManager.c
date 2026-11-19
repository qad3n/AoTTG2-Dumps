// Type: GameManagers.RPCManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/RPCManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/RPCManager.cs
// --------------------------------

// GameManagers.RPCManager$$TransferLogicRPC
// il2cpp: void GameManagers_RPCManager__TransferLogicRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959130

void GameManagers_RPCManager__TransferLogicRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_0000000c;
  
  iVar1 = msgTotal;
  if (Il2CppMethodInitialized_075458c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_075458c6 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  Map_CustomLogicTransfer__OnTransferLogicRPC
            (strArray,msgNumber,msgTotal,info,(MethodInfo *)CONCAT44(in_register_0000000c,iVar1));
  return;
}


// GameManagers.RPCManager$$LoadBuiltinLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinLogicRPC (GameManagers_RPCManager_o* __this, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959300

void GameManagers_RPCManager__LoadBuiltinLogicRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075458c7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC(name,info,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC(name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedLogicRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959370

void GameManagers_RPCManager__LoadCachedLogicRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075458c8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC(info,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__TransferAddonBundleRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59593d0

void GameManagers_RPCManager__TransferAddonBundleRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_0000000c;
  
  iVar1 = msgTotal;
  if (Il2CppMethodInitialized_075458c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_075458c9 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC
            (strArray,msgNumber,msgTotal,info,(MethodInfo *)CONCAT44(in_register_0000000c,iVar1));
  return;
}


// GameManagers.RPCManager$$LoadCachedAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedAddonBundleRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959560
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5959599: cmp byte ptr [rip + 0x1bec3d8], 0
// asm:   0x59595a0: je 0x59595b7
// asm:   0x59595a2: test rbx, rbx
// asm:   0x59595a7: jmp 0x59595dd

void GameManagers_RPCManager__LoadCachedAddonBundleRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075458ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_075458ca = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  if (Il2CppMethodInitialized_07545978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07545978 = '\x01';
  }
  if ((info.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
     (bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0), !bVar1)) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadAddons((MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferMapRPC
// il2cpp: void GameManagers_RPCManager__TransferMapRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959670

void GameManagers_RPCManager__TransferMapRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_075458cb = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  Map_MapTransfer__OnTransferMapRPC(strArray,msgNumber,msgTotal,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinMapRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinMapRPC (GameManagers_RPCManager_o* __this, System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59596d0

void GameManagers_RPCManager__LoadBuiltinMapRPC
               (GameManagers_RPCManager_o *__this,System_String_o *category,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075458cc = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  Map_MapManager__OnLoadBuiltinMapRPC(category,name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$RequestMapDestructionRPC
// il2cpp: void GameManagers_RPCManager__RequestMapDestructionRPC (GameManagers_RPCManager_o* __this, int32_t attackerId, System_Int32_array* objectIds, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959730

void GameManagers_RPCManager__RequestMapDestructionRPC
               (GameManagers_RPCManager_o *__this,int32_t attackerId,System_Int32_array *objectIds,
               UnityEngine_Vector3_o center,UnityEngine_Vector3_o direction,float hitSize,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075458cd = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__OnRequest
            (attackerId,objectIds,center,direction,hitSize,info.fields.Sender,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$MapObjectsDestroyedRPC
// il2cpp: void GameManagers_RPCManager__MapObjectsDestroyedRPC (GameManagers_RPCManager_o* __this, System_Int32_array* objectIds, UnityEngine_Vector3_o center, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959810

void GameManagers_RPCManager__MapObjectsDestroyedRPC
               (GameManagers_RPCManager_o *__this,System_Int32_array *objectIds,UnityEngine_Vector3_o center,
               float hitSize,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075458ce = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  Map_MapDestruction__OnDestroyed(objectIds,center,hitSize,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$RequestMapDestructionStateRPC
// il2cpp: void GameManagers_RPCManager__RequestMapDestructionStateRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59598a0

void GameManagers_RPCManager__RequestMapDestructionStateRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075458cf = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    Map_MapDestruction__OnStateRequest(info,(MethodInfo *)0x0);
    return;
  }
  Map_MapDestruction__OnStateRequest(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$MapDestructionStateRPC
// il2cpp: void GameManagers_RPCManager__MapDestructionStateRPC (GameManagers_RPCManager_o* __this, System_Int32_array* objectIds, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959900

void GameManagers_RPCManager__MapDestructionStateRPC
               (GameManagers_RPCManager_o *__this,System_Int32_array *objectIds,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_075458d0 = '\x01';
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
    Map_MapDestruction__OnState(objectIds,info,(MethodInfo *)0x0);
    return;
  }
  Map_MapDestruction__OnState(objectIds,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedMapRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedMapRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959970

void GameManagers_RPCManager__LoadCachedMapRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_075458d1 = '\x01';
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
    Map_MapManager__OnLoadCachedMapRPC(info,(MethodInfo *)0x0);
    return;
  }
  Map_MapManager__OnLoadCachedMapRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadSkyboxRPC
// il2cpp: void GameManagers_RPCManager__LoadSkyboxRPC (GameManagers_RPCManager_o* __this, System_String_o* urls, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x59599d0

void GameManagers_RPCManager__LoadSkyboxRPC
               (GameManagers_RPCManager_o *__this,System_String_o *urls,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  System_String_array *urls_00;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_075458d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458d2 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  if (urls != (System_String_o *)0x0) {
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    urls_00 = System_String__Split(urls,0x2c,0,(MethodInfo *)0x0);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
      routine = GameManagers_InGameManager__OnLoadSkyboxRPC(__this_00,urls_00,(MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$RestartGameRPC
// il2cpp: void GameManagers_RPCManager__RestartGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959ae0

void GameManagers_RPCManager__RestartGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075458d3 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__OnRestartGameRPC(info,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__OnRestartGameRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PreRestartGameRPC
// il2cpp: void GameManagers_RPCManager__PreRestartGameRPC (GameManagers_RPCManager_o* __this, bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959b40

void GameManagers_RPCManager__PreRestartGameRPC
               (GameManagers_RPCManager_o *__this,bool immediate,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075458d4 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__OnPreRestartGameRPC(immediate,info,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__OnPreRestartGameRPC(immediate,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PauseGameRPC
// il2cpp: void GameManagers_RPCManager__PauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959ba0

void GameManagers_RPCManager__PauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458d5 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__OnPauseGameRPC(__this_00,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$StartUnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__StartUnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959c20

void GameManagers_RPCManager__StartUnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458d6 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__OnStartUnpauseGameRPC(__this_00,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$UnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__UnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959ca0

void GameManagers_RPCManager__UnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458d7 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__OnUnpauseGameRPC(__this_00,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ResetKDRPC
// il2cpp: void GameManagers_RPCManager__ResetKDRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959d20

void GameManagers_RPCManager__ResetKDRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_075458d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075458d8 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PlayerInfoRPC
// il2cpp: void GameManagers_RPCManager__PlayerInfoRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959dc0

void GameManagers_RPCManager__PlayerInfoRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075458d9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__OnPlayerInfoRPC(data,info,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__OnPlayerInfoRPC(data,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$GameSettingsRPC
// il2cpp: void GameManagers_RPCManager__GameSettingsRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959e30

void GameManagers_RPCManager__GameSettingsRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075458da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075458da = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__OnGameSettingsRPC(data,info,(MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__OnGameSettingsRPC(data,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetWeatherRPC
// il2cpp: void GameManagers_RPCManager__SetWeatherRPC (GameManagers_RPCManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959ea0

void GameManagers_RPCManager__SetWeatherRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *currentWeatherJson,
               System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_075458db = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  Weather_WeatherManager__OnSetWeatherRPC
            (currentWeatherJson,startWeatherJson,targetWeatherJson,targetWeatherStartTimes,
             targetWeatherEndTimes,currentTime,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteEmojiRPC
// il2cpp: void GameManagers_RPCManager__EmoteEmojiRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959f30

void GameManagers_RPCManager__EmoteEmojiRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *emoji,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteEmojiRPC(viewId,emoji,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteTextRPC
// il2cpp: void GameManagers_RPCManager__EmoteTextRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959f40

void GameManagers_RPCManager__EmoteTextRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *text,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteTextRPC(viewId,text,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnEffectRPC
// il2cpp: void GameManagers_RPCManager__SpawnEffectRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5959f50

void GameManagers_RPCManager__SpawnEffectRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,float scale,bool scaleSize,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Object_array *method_00;
  
  method_00 = settings;
  if (Il2CppMethodInitialized_075458dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_075458dc = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  Effects_EffectSpawner__OnSpawnEffectRPC
            (name,position,rotation,scale,scaleSize,settings,info,(MethodInfo *)method_00);
  return;
}


// GameManagers.RPCManager$$SpawnSpawnableRPC
// il2cpp: void GameManagers_RPCManager__SpawnSpawnableRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a420

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
// 0x595a430

void GameManagers_RPCManager__SetLabelRPC
               (GameManagers_RPCManager_o *__this,System_String_o *label,System_String_o *message,float time,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_075458dd = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  GameManagers_InGameManager__OnSetLabelRPC(label,message,time,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ShowKillFeedRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a4a0

void GameManagers_RPCManager__ShowKillFeedRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_075458de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075458de = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ShowKillFeedWithPlayersRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a590

void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_075458df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_075458df = '\x01';
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x40);
  }
  if (__this_00 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (((Il2CppClass *)TypeInfo_UI_InGameMenu)->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  UI_InGameMenu__ShowKillFeed_5c2c7e0
            (__this_00,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EndGameRPC
// il2cpp: void GameManagers_RPCManager__EndGameRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a6a0

void GameManagers_RPCManager__EndGameRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458e0 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__EndGame(__this_00,time,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$NotifyPlayerJoinedRPC
// il2cpp: void GameManagers_RPCManager__NotifyPlayerJoinedRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a730

void GameManagers_RPCManager__NotifyPlayerJoinedRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_075458e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458e1 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  GameManagers_InGameManager__OnNotifyPlayerJoined(__this_00,info.fields.Sender,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferNetworkViewRPC
// il2cpp: void GameManagers_RPCManager__TransferNetworkViewRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a7c0

void GameManagers_RPCManager__TransferNetworkViewRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_Vector3_Fields position;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  
  if (Il2CppMethodInitialized_075458e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncPrefab");
    Il2CppMethodInitialized_075458e2 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  position = (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  rotation = *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                        ("Game/CustomLogicPhotonSyncPrefab",(UnityEngine_Vector3_o)position,
                         (UnityEngine_Quaternion_o)rotation,0,(System_Object_array *)0x0,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    if (__this_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__Init_5a6f420(__this_01,id,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SendMessageRPC
// il2cpp: void GameManagers_RPCManager__SendMessageRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595a910
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595a947: jmp 0x595a9e0

void GameManagers_RPCManager__SendMessageRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Photon_Realtime_Player_o *sender;
  double sentServerTimestamp;
  
  if (Il2CppMethodInitialized_075458e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075458e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    sender = info.fields.Sender;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
    sender = info.fields.Sender;
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    info.fields.Sender = sender;
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      sender = info.fields.Sender;
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      sentServerTimestamp = Photon_Pun_PhotonMessageInfo__get_SentServerTime(&info,(MethodInfo *)0x0);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    else {
      sentServerTimestamp = Photon_Pun_PhotonMessageInfo__get_SentServerTime(&info,(MethodInfo *)0x0);
    }
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (__this_00,sender,message,sentServerTimestamp,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.RPCManager$$SpawnPlayerRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerRPC (GameManagers_RPCManager_o* __this, bool force, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595aa00

void GameManagers_RPCManager__SpawnPlayerRPC
               (GameManagers_RPCManager_o *__this,bool force,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075458e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458e4 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      GameManagers_InGameManager__SpawnPlayer(__this_00,force,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SpawnPlayerAtRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerAtRPC (GameManagers_RPCManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595aab0

void GameManagers_RPCManager__SpawnPlayerAtRPC
               (GameManagers_RPCManager_o *__this,bool force,UnityEngine_Vector3_o position,float rotationY,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075458e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075458e5 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      GameManagers_InGameManager__SpawnPlayerAt(__this_00,force,position,rotationY,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SyncCurrentTimeRPC
// il2cpp: void GameManagers_RPCManager__SyncCurrentTimeRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595ab90

void GameManagers_RPCManager__SyncCurrentTimeRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  
  if (Il2CppMethodInitialized_075458e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_075458e6 = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
label_0595ac43:
    ThrowNullReferenceException();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0595ac43;
      }
      (pCVar2->fields).CurrentTime = time;
      return;
    }
  }
  return;
}


// GameManagers.RPCManager$$ChatRPC
// il2cpp: void GameManagers_RPCManager__ChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595ac50

void GameManagers_RPCManager__ChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075458e7 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__OnChatRPC(message,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PlayerChatRPC
// il2cpp: void GameManagers_RPCManager__PlayerChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595acb0

void GameManagers_RPCManager__PlayerChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075458e8 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__OnPlayerChatRPC(message,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$AnnounceRPC
// il2cpp: void GameManagers_RPCManager__AnnounceRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595ad10

void GameManagers_RPCManager__AnnounceRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,Photon_Pun_PhotonMessageInfo_o info
               ,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if (Il2CppMethodInitialized_075458e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075458e9 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    }
    else {
      pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    }
    if (info.fields.Sender != pPVar1) {
      return;
    }
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__OnAnnounceRPC(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$VoteKickRPC
// il2cpp: void GameManagers_RPCManager__VoteKickRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595adb0

void GameManagers_RPCManager__VoteKickRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Realtime_Room_o *pPVar1;
  Photon_Realtime_Player_o *target;
  
  if (Il2CppMethodInitialized_075458ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075458ea = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar1 == (Photon_Realtime_Room_o *)0x0) {
    ThrowNullReferenceException();
  }
  target = (*(pPVar1->klass->vtable)._10_GetPlayer.methodPtr)
                     (pPVar1,id,false,(pPVar1->klass->vtable)._10_GetPlayer.method);
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__VoteKickPlayer(info.fields.Sender,target,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TestRPC
// il2cpp: void GameManagers_RPCManager__TestRPC (GameManagers_RPCManager_o* __this, UnityEngine_Color_o c, const MethodInfo* method);
// 0x595ae60

void GameManagers_RPCManager__TestRPC
               (GameManagers_RPCManager_o *__this,UnityEngine_Color_o c,MethodInfo *method)

{
  Il2CppObject *message;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (Il2CppMethodInitialized_075458eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_075458eb = '\x01';
  }
  local_18 = c.fields.r;
  fStack_14 = c.fields.g;
  fStack_10 = c.fields.b;
  fStack_c = c.fields.a;
  message = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_18);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PrivateChatRPC
// il2cpp: void GameManagers_RPCManager__PrivateChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x595aef0

void GameManagers_RPCManager__PrivateChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int32_t targetID,
               int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075458ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075458ec = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  GameManagers_ChatManager__OnPrivateChatRPC(message,targetID,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$Awake
// il2cpp: void GameManagers_RPCManager__Awake (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x595af50

void GameManagers_RPCManager__Awake(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  if (Il2CppMethodInitialized_075458ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    Il2CppMethodInitialized_075458ed = '\x01';
  }
  pPVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
  TypeInfo_GameManagers_RPCManager->static_fields->PhotonView = pPVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RPCManager->static_fields->PhotonView);
  return;
}


// GameManagers.RPCManager$$.ctor
// il2cpp: void GameManagers_RPCManager___ctor (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x595afc0

void GameManagers_RPCManager___ctor(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPun___ctor((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  return;
}


