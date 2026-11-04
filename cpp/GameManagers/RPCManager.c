// Type: GameManagers.RPCManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/RPCManager.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/RPCManager.cs
// --------------------------------

// GameManagers.RPCManager$$TransferLogicRPC
// il2cpp: void GameManagers_RPCManager__TransferLogicRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e75100

void GameManagers_RPCManager__TransferLogicRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicTransfer);
    Il2CppMethodInitialized_184344f24 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicTransfer);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_CustomLogicTransfer__OnTransferLogicRPC
            (strArray,msgNumber,msgTotal,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinLogicRPC (GameManagers_RPCManager_o* __this, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73c60

void GameManagers_RPCManager__LoadBuiltinLogicRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344f25 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC
            (name,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedLogicRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73db0

void GameManagers_RPCManager__LoadCachedLogicRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344f26 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC
            ((Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__TransferAddonBundleRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e75070

void GameManagers_RPCManager__TransferAddonBundleRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_184344f27 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_CustomLogicAddonTransfer__OnTransferAddonBundleRPC
            (strArray,msgNumber,msgTotal,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedAddonBundleRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedAddonBundleRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73d50

void GameManagers_RPCManager__LoadCachedAddonBundleRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_CustomLogicAddonTransfer);
    Il2CppMethodInitialized_184344f28 = '\x01';
  }
  if ((TypeInfo_Map_CustomLogicAddonTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_CustomLogicAddonTransfer);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_CustomLogicAddonTransfer__OnLoadCachedAddonBundleRPC
            ((Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferMapRPC
// il2cpp: void GameManagers_RPCManager__TransferMapRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e75190

void GameManagers_RPCManager__TransferMapRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,int32_t msgNumber,
               int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTransfer);
    Il2CppMethodInitialized_184344f29 = '\x01';
  }
  if ((TypeInfo_Map_MapTransfer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapTransfer);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_MapTransfer__OnTransferMapRPC
            (strArray,msgNumber,msgTotal,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinMapRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinMapRPC (GameManagers_RPCManager_o* __this, System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73cd0

void GameManagers_RPCManager__LoadBuiltinMapRPC
               (GameManagers_RPCManager_o *__this,System_String_o *category,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_184344f2a = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_MapManager__OnLoadBuiltinMapRPC
            (category,name,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$RequestMapDestructionRPC
// il2cpp: void GameManagers_RPCManager__RequestMapDestructionRPC (GameManagers_RPCManager_o* __this, int32_t attackerId, System_Int32_array* objectIds, UnityEngine_Vector3_o center, UnityEngine_Vector3_o direction, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74510

void GameManagers_RPCManager__RequestMapDestructionRPC
               (GameManagers_RPCManager_o *__this,int32_t attackerId,System_Int32_array *objectIds,
               UnityEngine_Vector3_o *center,UnityEngine_Vector3_o *direction,float hitSize,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *sender;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184344f2b = '\x01';
  }
  sender = (info->fields).Sender;
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  local_48.x = (direction->fields).x;
  local_48.y = (direction->fields).y;
  local_48.z = (direction->fields).z;
  local_38[0].x = (center->fields).x;
  local_38[0].y = (center->fields).y;
  local_38[0].z = (center->fields).z;
  Map_MapDestruction__OnRequest
            (attackerId,objectIds,(UnityEngine_Vector3_o *)local_38,(UnityEngine_Vector3_o *)&local_48,hitSize
             ,sender,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$MapObjectsDestroyedRPC
// il2cpp: void GameManagers_RPCManager__MapObjectsDestroyedRPC (GameManagers_RPCManager_o* __this, System_Int32_array* objectIds, UnityEngine_Vector3_o center, float hitSize, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e740f0

void GameManagers_RPCManager__MapObjectsDestroyedRPC
               (GameManagers_RPCManager_o *__this,System_Int32_array *objectIds,UnityEngine_Vector3_o *center,
               float hitSize,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_48;
  Photon_Pun_PhotonMessageInfo_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184344f2c = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  local_38[0].timeInt = (info->fields).timeInt;
  local_38[0]._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_38[0].Sender = (info->fields).Sender;
  local_38[0].photonView = (info->fields).photonView;
  local_48.z = (center->fields).z;
  local_48.x = (center->fields).x;
  local_48.y = (center->fields).y;
  Map_MapDestruction__OnDestroyed
            (objectIds,(UnityEngine_Vector3_o *)&local_48,hitSize,(Photon_Pun_PhotonMessageInfo_o *)local_38,
             (MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$RequestMapDestructionStateRPC
// il2cpp: void GameManagers_RPCManager__RequestMapDestructionStateRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e745d0

void GameManagers_RPCManager__RequestMapDestructionStateRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184344f2d = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_MapDestruction__OnStateRequest((Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$MapDestructionStateRPC
// il2cpp: void GameManagers_RPCManager__MapDestructionStateRPC (GameManagers_RPCManager_o* __this, System_Int32_array* objectIds, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74080

void GameManagers_RPCManager__MapDestructionStateRPC
               (GameManagers_RPCManager_o *__this,System_Int32_array *objectIds,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapDestruction);
    Il2CppMethodInitialized_184344f2e = '\x01';
  }
  if ((TypeInfo_Map_MapDestruction->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapDestruction);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_MapDestruction__OnState(objectIds,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedMapRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedMapRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73e10

void GameManagers_RPCManager__LoadCachedMapRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapManager);
    Il2CppMethodInitialized_184344f2f = '\x01';
  }
  if ((TypeInfo_Map_MapManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Map_MapManager__OnLoadCachedMapRPC((Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadSkyboxRPC
// il2cpp: void GameManagers_RPCManager__LoadSkyboxRPC (GameManagers_RPCManager_o* __this, System_String_o* urls, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73f80

void GameManagers_RPCManager__LoadSkyboxRPC
               (GameManagers_RPCManager_o *__this,System_String_o *urls,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  System_String_array *urls_00;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184344f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f30 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if ((info->fields).Sender != pPVar2) {
    return;
  }
  if (urls != (System_String_o *)0x0) {
    __this_00 = (GameManagers_InGameManager_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    urls_00 = System_String__Split(urls,0x2c,0,(MethodInfo *)0x0);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        routine = GameManagers_InGameManager__OnLoadSkyboxRPC(__this_00,urls_00,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$LoadLevelSkinRPC
// il2cpp: void GameManagers_RPCManager__LoadLevelSkinRPC (GameManagers_RPCManager_o* __this, System_String_o* indices, System_String_o* urls1, System_String_o* urls2, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73e70

void GameManagers_RPCManager__LoadLevelSkinRPC
               (GameManagers_RPCManager_o *__this,System_String_o *indices,System_String_o *urls1,
               System_String_o *urls2,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184344f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f31 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if ((info->fields).Sender == pPVar2) {
    if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    routine = GameManagers_InGameManager__OnLoadLevelSkinRPC(__this_00,indices,urls1,urls2,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.RPCManager$$RestartGameRPC
// il2cpp: void GameManagers_RPCManager__RestartGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e746d0

void GameManagers_RPCManager__RestartGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344f32 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_InGameManager__OnRestartGameRPC((Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PreRestartGameRPC
// il2cpp: void GameManagers_RPCManager__PreRestartGameRPC (GameManagers_RPCManager_o* __this, bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74410

void GameManagers_RPCManager__PreRestartGameRPC
               (GameManagers_RPCManager_o *__this,bool immediate,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344f33 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_InGameManager__OnPreRestartGameRPC
            (immediate,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PauseGameRPC
// il2cpp: void GameManagers_RPCManager__PauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74240

void GameManagers_RPCManager__PauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  GameManagers_InGameManager_c *pGVar2;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184344f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f34 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = __this_00->klass;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
  }
  local_28.fields.timeInt = (info->fields).timeInt;
  local_28.fields._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.fields.Sender._0_4_ = *(undefined4 *)&(info->fields).Sender;
  local_28.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(info->fields).Sender + 4);
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  local_28.fields.photonView = (info->fields).photonView;
  if ((bVar1 <= (pGVar2->_2).typeHierarchyDepth) &&
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    GameManagers_InGameManager__OnPauseGameRPC(__this_00,&local_28,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
}


// GameManagers.RPCManager$$StartUnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__StartUnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74e60

void GameManagers_RPCManager__StartUnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  GameManagers_InGameManager_c *pGVar2;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184344f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f35 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = __this_00->klass;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
  }
  local_28.fields.timeInt = (info->fields).timeInt;
  local_28.fields._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.fields.Sender._0_4_ = *(undefined4 *)&(info->fields).Sender;
  local_28.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(info->fields).Sender + 4);
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  local_28.fields.photonView = (info->fields).photonView;
  if ((bVar1 <= (pGVar2->_2).typeHierarchyDepth) &&
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    GameManagers_InGameManager__OnStartUnpauseGameRPC(__this_00,&local_28,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
}


// GameManagers.RPCManager$$UnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__UnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e75360

void GameManagers_RPCManager__UnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  GameManagers_InGameManager_c *pGVar2;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184344f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f36 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = __this_00->klass;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
  }
  local_28.fields.timeInt = (info->fields).timeInt;
  local_28.fields._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.fields.Sender._0_4_ = *(undefined4 *)&(info->fields).Sender;
  local_28.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(info->fields).Sender + 4);
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  local_28.fields.photonView = (info->fields).photonView;
  if ((bVar1 <= (pGVar2->_2).typeHierarchyDepth) &&
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    GameManagers_InGameManager__OnUnpauseGameRPC(__this_00,&local_28,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
}


// GameManagers.RPCManager$$ResetKDRPC
// il2cpp: void GameManagers_RPCManager__ResetKDRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74630

void GameManagers_RPCManager__ResetKDRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  
  if (Il2CppMethodInitialized_184344f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344f37 = '\x01';
  }
  pPVar2 = (info->fields).Sender;
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(pPVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__ResetPlayerKD(pPVar2,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$PlayerInfoRPC
// il2cpp: void GameManagers_RPCManager__PlayerInfoRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e743a0

void GameManagers_RPCManager__PlayerInfoRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o *info
               ,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344f38 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_InGameManager__OnPlayerInfoRPC
            (data,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$GameSettingsRPC
// il2cpp: void GameManagers_RPCManager__GameSettingsRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73bf0

void GameManagers_RPCManager__GameSettingsRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,Photon_Pun_PhotonMessageInfo_o *info
               ,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344f39 = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_InGameManager__OnGameSettingsRPC
            (data,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetWeatherRPC
// il2cpp: void GameManagers_RPCManager__SetWeatherRPC (GameManagers_RPCManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74890

void GameManagers_RPCManager__SetWeatherRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *currentWeatherJson,
               System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,float currentTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherManager);
    Il2CppMethodInitialized_184344f3a = '\x01';
  }
  if ((TypeInfo_Weather_WeatherManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  Weather_WeatherManager__OnSetWeatherRPC
            (currentWeatherJson,startWeatherJson,targetWeatherJson,targetWeatherStartTimes,
             targetWeatherEndTimes,currentTime,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteEmojiRPC
// il2cpp: void GameManagers_RPCManager__EmoteEmojiRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73a70

void GameManagers_RPCManager__EmoteEmojiRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *emoji,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  UI_EmoteHandler__OnEmoteEmojiRPC(viewId,emoji,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0)
  ;
  return;
}


// GameManagers.RPCManager$$EmoteTextRPC
// il2cpp: void GameManagers_RPCManager__EmoteTextRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73ab0

void GameManagers_RPCManager__EmoteTextRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *text,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  UI_EmoteHandler__OnEmoteTextRPC(viewId,text,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnEffectRPC
// il2cpp: void GameManagers_RPCManager__SpawnEffectRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74b00

void GameManagers_RPCManager__SpawnEffectRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,UnityEngine_Vector3_o *position,
               UnityEngine_Quaternion_o *rotation,float scale,bool scaleSize,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_184344f3b = '\x01';
  }
  if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  local_48.z = (position->fields).z;
  local_38.x = (rotation->fields).x;
  local_38.y = (rotation->fields).y;
  local_38.z = (rotation->fields).z;
  local_38.w = (rotation->fields).w;
  local_48.x = (position->fields).x;
  local_48.y = (position->fields).y;
  Effects_EffectSpawner__OnSpawnEffectRPC
            (name,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_38,scale,scaleSize,
             settings,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnSpawnableRPC
// il2cpp: void GameManagers_RPCManager__SpawnSpawnableRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74dd0

void GameManagers_RPCManager__SpawnSpawnableRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,UnityEngine_Vector3_o *position,
               UnityEngine_Quaternion_o *rotation,float scale,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  local_48.z = (position->fields).z;
  local_38.x = (rotation->fields).x;
  local_38.y = (rotation->fields).y;
  local_38.z = (rotation->fields).z;
  local_38.w = (rotation->fields).w;
  local_48.x = (position->fields).x;
  local_48.y = (position->fields).y;
  Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
            (name,(UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_38,scale,settings,
             (Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetLabelRPC
// il2cpp: void GameManagers_RPCManager__SetLabelRPC (GameManagers_RPCManager_o* __this, System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74800

void GameManagers_RPCManager__SetLabelRPC
               (GameManagers_RPCManager_o *__this,System_String_o *label,System_String_o *message,float time,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184344f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184344f3c = '\x01';
  }
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  local_38[0].timeInt = (info->fields).timeInt;
  local_38[0]._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_38[0].Sender = (info->fields).Sender;
  local_38[0].photonView = (info->fields).photonView;
  GameManagers_InGameManager__OnSetLabelRPC
            (label,message,time,(Photon_Pun_PhotonMessageInfo_o *)local_38,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ShowKillFeedRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74950

void GameManagers_RPCManager__ShowKillFeedRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344f3d = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$ShowKillFeedWithPlayersRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, int32_t killerActorNumber, int32_t victimActorNumber, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74a20

void GameManagers_RPCManager__ShowKillFeedWithPlayersRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,int32_t killerActorNumber,int32_t victimActorNumber,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344f3e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      UI_InGameMenu__ShowKillFeed_2251fb0
                (__this_00,killer,victim,score,weapon,killerActorNumber,victimActorNumber,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_InGameMenu);
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$EndGameRPC
// il2cpp: void GameManagers_RPCManager__EndGameRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e73af0

void GameManagers_RPCManager__EndGameRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  GameManagers_InGameManager_c *pGVar2;
  Photon_Pun_PhotonMessageInfo_o local_38 [2];
  
  if (Il2CppMethodInitialized_184344f3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f3f = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = __this_00->klass;
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
  }
  local_38[0].fields.timeInt = (info->fields).timeInt;
  local_38[0].fields._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_38[0].fields.Sender._0_4_ = *(undefined4 *)&(info->fields).Sender;
  local_38[0].fields.Sender._4_4_ = *(undefined4 *)((longlong)&(info->fields).Sender + 4);
  bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
  local_38[0].fields.photonView = (info->fields).photonView;
  if ((bVar1 <= (pGVar2->_2).typeHierarchyDepth) &&
     ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager))
  {
    GameManagers_InGameManager__EndGame(__this_00,time,local_38,(MethodInfo *)0x0);
    return;
  }
  il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
}


// GameManagers.RPCManager$$NotifyPlayerJoinedRPC
// il2cpp: void GameManagers_RPCManager__NotifyPlayerJoinedRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e741a0

void GameManagers_RPCManager__NotifyPlayerJoinedRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f40 = '\x01';
  }
  __this_00 = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      GameManagers_InGameManager__OnNotifyPlayerJoined(__this_00,(info->fields).Sender,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_GameManagers_InGameManager);
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$TransferNetworkViewRPC
// il2cpp: void GameManagers_RPCManager__TransferNetworkViewRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e75220

void GameManagers_RPCManager__TransferNetworkViewRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Quaternion_StaticFields *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  if (Il2CppMethodInitialized_184344f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Game/CustomLogicPhotonSyncPrefab");
    Il2CppMethodInitialized_184344f41 = '\x01';
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1._0_4_ = (pUVar3->zeroVector).fields.x;
  uVar1._4_4_ = (pUVar3->zeroVector).fields.y;
  fVar2 = (pUVar3->zeroVector).fields.z;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Quaternion->static_fields;
  uVar5._0_4_ = (pUVar4->identityQuaternion).fields.x;
  uVar5._4_4_ = (pUVar4->identityQuaternion).fields.y;
  uVar6._0_4_ = (pUVar4->identityQuaternion).fields.z;
  uVar6._4_4_ = (pUVar4->identityQuaternion).fields.w;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_48._0_8_ = uVar1;
  local_48.z = fVar2;
  local_38[0]._0_8_ = uVar5;
  local_38[0]._8_8_ = uVar6;
  __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                        ("Game/CustomLogicPhotonSyncPrefab",(UnityEngine_Vector3_o *)&local_48,
                         (UnityEngine_Quaternion_o *)local_38,'\0',(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_CustomLogicPhotonSync);
    if (__this_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__Init_20a8380(__this_01,id,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SendMessageRPC
// il2cpp: void GameManagers_RPCManager__SendMessageRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74730

void GameManagers_RPCManager__SendMessageRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *sender;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  double sentServerTimestamp;
  
  if (Il2CppMethodInitialized_184344f42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344f42 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    sender = (info->fields).Sender;
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    sentServerTimestamp = Photon_Pun_PhotonMessageInfo__get_SentServerTime(info,(MethodInfo *)0x0);
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (__this_00,sender,message,sentServerTimestamp,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.RPCManager$$SpawnPlayerRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerRPC (GameManagers_RPCManager_o* __this, bool force, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74d10

void GameManagers_RPCManager__SpawnPlayerRPC
               (GameManagers_RPCManager_o *__this,bool force,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *__this_00;
  GameManagers_InGameManager_o *__this_01;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f43 = '\x01';
  }
  __this_00 = (info->fields).Sender;
  if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = (GameManagers_InGameManager_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this_01 == (GameManagers_InGameManager_o *)0x0) goto label_181e74db6;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__SpawnPlayer(__this_01,force,(MethodInfo *)0x0);
    }
    return;
  }
label_181e74db6:
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SpawnPlayerAtRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerAtRPC (GameManagers_RPCManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74be0

void GameManagers_RPCManager__SpawnPlayerAtRPC
               (GameManagers_RPCManager_o *__this,bool force,UnityEngine_Vector3_o *position,float rotationY,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  byte bVar1;
  Photon_Realtime_Player_o *__this_00;
  GameManagers_InGameManager_o *__this_01;
  GameManagers_InGameManager_c *pGVar2;
  bool bVar3;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184344f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184344f44 = '\x01';
  }
  __this_00 = (info->fields).Sender;
  if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      __this_01 = (GameManagers_InGameManager_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (__this_01 == (GameManagers_InGameManager_o *)0x0) goto label_181e74cf0;
      pGVar2 = __this_01->klass;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_GameManagers_InGameManager);
      }
      local_28[0].z = (position->fields).z;
      local_28[0].x = (position->fields).x;
      local_28[0].y = (position->fields).y;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((pGVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01,TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__SpawnPlayerAt
                (__this_01,force,(UnityEngine_Vector3_o *)local_28,rotationY,(MethodInfo *)0x0);
    }
    return;
  }
label_181e74cf0:
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$SyncCurrentTimeRPC
// il2cpp: void GameManagers_RPCManager__SyncCurrentTimeRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74f40

void GameManagers_RPCManager__SyncCurrentTimeRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_184344f45 = '\x01';
  }
  __this_00 = (info->fields).Sender;
  if (__this_00 != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
          (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_181e74fe0;
        (pCVar1->fields).CurrentTime = time;
      }
    }
    return;
  }
label_181e74fe0:
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$ChatRPC
// il2cpp: void GameManagers_RPCManager__ChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e739f0

void GameManagers_RPCManager__ChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344f46 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_ChatManager__OnChatRPC
            (message,senderTimestamp,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PlayerChatRPC
// il2cpp: void GameManagers_RPCManager__PlayerChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74320

void GameManagers_RPCManager__PlayerChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344f47 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_ChatManager__OnPlayerChatRPC
            (message,senderTimestamp,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$AnnounceRPC
// il2cpp: void GameManagers_RPCManager__AnnounceRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e738f0

void GameManagers_RPCManager__AnnounceRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if (Il2CppMethodInitialized_184344f48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344f48 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar1 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
    if ((info->fields).Sender != pPVar1) {
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
// 0x181e75440

void GameManagers_RPCManager__VoteKickRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  Photon_Realtime_Room_o *pPVar1;
  Photon_Realtime_Player_o *target;
  
  if (Il2CppMethodInitialized_184344f49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344f49 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar1 != (Photon_Realtime_Room_o *)0x0) {
    target = (*(pPVar1->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar1,id,false,(pPVar1->klass->vtable)._10_GetPlayer.method);
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__VoteKickPlayer((info->fields).Sender,target,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// GameManagers.RPCManager$$TestRPC
// il2cpp: void GameManagers_RPCManager__TestRPC (GameManagers_RPCManager_o* __this, UnityEngine_Color_o c, const MethodInfo* method);
// 0x181e74ff0

void GameManagers_RPCManager__TestRPC
               (GameManagers_RPCManager_o *__this,UnityEngine_Color_o *c,MethodInfo *method)

{
  Il2CppObject *message;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_184344f4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    Il2CppMethodInitialized_184344f4a = '\x01';
  }
  local_18._0_4_ = (c->fields).r;
  local_18._4_4_ = (c->fields).g;
  uStack_10._0_4_ = (c->fields).b;
  uStack_10._4_4_ = (c->fields).a;
  message = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Color,&local_18);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PrivateChatRPC
// il2cpp: void GameManagers_RPCManager__PrivateChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x181e74480

void GameManagers_RPCManager__PrivateChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int32_t targetID,
               int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  if (Il2CppMethodInitialized_184344f4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344f4b = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  GameManagers_ChatManager__OnPrivateChatRPC
            (message,targetID,senderTimestamp,(Photon_Pun_PhotonMessageInfo_o *)&local_28,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$Awake
// il2cpp: void GameManagers_RPCManager__Awake (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x181e73980

void GameManagers_RPCManager__Awake(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *value;
  
  if (Il2CppMethodInitialized_184344f4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    Il2CppMethodInitialized_184344f4c = '\x01';
  }
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
  TypeInfo_GameManagers_RPCManager->static_fields->PhotonView = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_GameManagers_RPCManager->static_fields->PhotonView,value);
  return;
}


// GameManagers.RPCManager$$.ctor
// il2cpp: void GameManagers_RPCManager___ctor (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x18190eda0

void
GameManagers_RPCManager___ctor(GameManagers_RPCManager_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPun___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


