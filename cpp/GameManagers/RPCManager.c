// Type: GameManagers.RPCManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/RPCManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/RPCManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.RPCManager$$TransferLogicRPC
// il2cpp: void GameManagers_RPCManager__TransferLogicRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423bb00

void GameManagers_RPCManager__TransferLogicRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,
               int32_t msgNumber,int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  undefined4 in_register_0000000c;
  int32_t extraout_EDX;
  int32_t extraout_EDX_00;
  int32_t msgNumber_00;
  
  msgNumber_00 = (int32_t)strArray;
  if (DAT_0570516e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    DAT_0570516e = '\x01';
    msgNumber = extraout_EDX;
  }
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
    msgNumber = extraout_EDX_00;
  }
  Map_CustomLogicTransfer__OnTransferLogicRPC
            (strArray,msgNumber_00,msgNumber,info,
             (MethodInfo *)CONCAT44(in_register_0000000c,msgTotal));
  return;
}


// GameManagers.RPCManager$$LoadBuiltinLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinLogicRPC (GameManagers_RPCManager_o* __this, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423bf20

void GameManagers_RPCManager__LoadBuiltinLogicRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570516f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_0570516f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC(name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedLogicRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedLogicRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423bfa0

void GameManagers_RPCManager__LoadCachedLogicRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  if (DAT_05705170 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05705170 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$TransferMapRPC
// il2cpp: void GameManagers_RPCManager__TransferMapRPC (GameManagers_RPCManager_o* __this, System_Byte_array_array* strArray, int32_t msgNumber, int32_t msgTotal, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c010

void GameManagers_RPCManager__TransferMapRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array_array *strArray,
               int32_t msgNumber,int32_t msgTotal,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  if (DAT_05705171 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapTransfer);
    DAT_05705171 = '\x01';
  }
  if (*(int *)(TypeInfo_MapTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_MapTransfer__OnTransferMapRPC(strArray,msgNumber,msgTotal,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadBuiltinMapRPC
// il2cpp: void GameManagers_RPCManager__LoadBuiltinMapRPC (GameManagers_RPCManager_o* __this, System_String_o* category, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c0a0

void GameManagers_RPCManager__LoadBuiltinMapRPC
               (GameManagers_RPCManager_o *__this,System_String_o *category,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_05705172 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_05705172 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_MapManager__OnLoadBuiltinMapRPC(category,name,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadCachedMapRPC
// il2cpp: void GameManagers_RPCManager__LoadCachedMapRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c130

void GameManagers_RPCManager__LoadCachedMapRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  if (DAT_05705173 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    DAT_05705173 = '\x01';
  }
  if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_MapManager__OnLoadCachedMapRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$LoadSkyboxRPC
// il2cpp: void GameManagers_RPCManager__LoadSkyboxRPC (GameManagers_RPCManager_o* __this, System_String_o* urls, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c1a0

void GameManagers_RPCManager__LoadSkyboxRPC
               (GameManagers_RPCManager_o *__this,System_String_o *urls,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  System_String_array *urls_00;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05705174 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705174 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  if (urls != (System_String_o *)0x0) {
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    urls_00 = System_String__Split(urls,0x2c,0,(MethodInfo *)0x0);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
        routine = GameManagers_InGameManager__OnLoadSkyboxRPC(__this_00,urls_00,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$LoadLevelSkinRPC
// il2cpp: void GameManagers_RPCManager__LoadLevelSkinRPC (GameManagers_RPCManager_o* __this, System_String_o* indices, System_String_o* urls1, System_String_o* urls2, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c2b0

void GameManagers_RPCManager__LoadLevelSkinRPC
               (GameManagers_RPCManager_o *__this,System_String_o *indices,System_String_o *urls1,
               System_String_o *urls2,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *pPVar2;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05705175 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705175 = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  else {
    pPVar2 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  }
  if (info.fields.Sender != pPVar2) {
    return;
  }
  if (__this_00 == (GameManagers_InGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  routine = GameManagers_InGameManager__OnLoadLevelSkinRPC
                      (__this_00,indices,urls1,urls2,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$RestartGameRPC
// il2cpp: void GameManagers_RPCManager__RestartGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c3c0

void GameManagers_RPCManager__RestartGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  if (DAT_05705176 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705176 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__OnRestartGameRPC(info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PreRestartGameRPC
// il2cpp: void GameManagers_RPCManager__PreRestartGameRPC (GameManagers_RPCManager_o* __this, bool immediate, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c430

void GameManagers_RPCManager__PreRestartGameRPC
               (GameManagers_RPCManager_o *__this,bool_conflict immediate,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_05705177 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05705177 = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__OnPreRestartGameRPC(immediate & 0xff,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PauseGameRPC
// il2cpp: void GameManagers_RPCManager__PauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c4b0

void GameManagers_RPCManager__PauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (DAT_05705178 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705178 = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__OnPauseGameRPC(__this_00,info,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$StartUnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__StartUnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c570

void GameManagers_RPCManager__StartUnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (DAT_05705179 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705179 = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__OnStartUnpauseGameRPC(__this_00,info,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$UnpauseGameRPC
// il2cpp: void GameManagers_RPCManager__UnpauseGameRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c630

void GameManagers_RPCManager__UnpauseGameRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (DAT_0570517a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_0570517a = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__OnUnpauseGameRPC(__this_00,info,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$ResetKDRPC
// il2cpp: void GameManagers_RPCManager__ResetKDRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c6f0

void GameManagers_RPCManager__ResetKDRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Photon_Realtime_Player_o *player;
  
  if (DAT_0570517b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_0570517b = '\x01';
  }
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_InGameManager + 0xe4) != 0) {
    GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__ResetPlayerKD(player,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PlayerInfoRPC
// il2cpp: void GameManagers_RPCManager__PlayerInfoRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c790

void GameManagers_RPCManager__PlayerInfoRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570517c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_0570517c = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__OnPlayerInfoRPC(data,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$GameSettingsRPC
// il2cpp: void GameManagers_RPCManager__GameSettingsRPC (GameManagers_RPCManager_o* __this, System_Byte_array* data, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c810

void GameManagers_RPCManager__GameSettingsRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *data,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570517d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_0570517d = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__OnGameSettingsRPC(data,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetWeatherRPC
// il2cpp: void GameManagers_RPCManager__SetWeatherRPC (GameManagers_RPCManager_o* __this, System_Byte_array* currentWeatherJson, System_Byte_array* startWeatherJson, System_Byte_array* targetWeatherJson, System_Collections_Generic_Dictionary_int__float__o* targetWeatherStartTimes, System_Collections_Generic_Dictionary_int__float__o* targetWeatherEndTimes, float currentTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c890

void GameManagers_RPCManager__SetWeatherRPC
               (GameManagers_RPCManager_o *__this,System_Byte_array *currentWeatherJson,
               System_Byte_array *startWeatherJson,System_Byte_array *targetWeatherJson,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherStartTimes,
               System_Collections_Generic_Dictionary_int__float__o *targetWeatherEndTimes,
               float currentTime,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570517e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WeatherManager);
    DAT_0570517e = '\x01';
  }
  if (*(int *)(TypeInfo_WeatherManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Weather_WeatherManager__OnSetWeatherRPC
            (currentWeatherJson,startWeatherJson,targetWeatherJson,targetWeatherStartTimes,
             targetWeatherEndTimes,currentTime,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteEmojiRPC
// il2cpp: void GameManagers_RPCManager__EmoteEmojiRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* emoji, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c950

void GameManagers_RPCManager__EmoteEmojiRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *emoji,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteEmojiRPC(viewId,emoji,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$EmoteTextRPC
// il2cpp: void GameManagers_RPCManager__EmoteTextRPC (GameManagers_RPCManager_o* __this, int32_t viewId, System_String_o* text, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c960

void GameManagers_RPCManager__EmoteTextRPC
               (GameManagers_RPCManager_o *__this,int32_t viewId,System_String_o *text,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  UI_EmoteHandler__OnEmoteTextRPC(viewId,text,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SpawnEffectRPC
// il2cpp: void GameManagers_RPCManager__SpawnEffectRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, bool scaleSize, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423c970

void GameManagers_RPCManager__SpawnEffectRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,
               UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,float scale,
               bool_conflict scaleSize,System_Object_array *settings,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Transform_o *transform;
  MethodInfo *method_00;
  
  if (DAT_05705191 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EffectPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_BaseEffect_AddComponent_BaseEffect);
    il2cpp_init_method_metadata(&MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect);
    il2cpp_init_method_metadata(&MethodInfo_LineRendererEffect_AddComponent_LineRendererEffe);
    il2cpp_init_method_metadata(&MethodInfo_ThunderspearExplodeEffect_AddComponent_Thundersp);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_05705191 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x40);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (path,name,position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__op_Equality
                    (name,(System_String_o *)**(undefined8 **)(TypeInfo_EffectPrefabs + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_String__op_Equality
                      (name,*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 0xb8),
                       (MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_EffectPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = System_String__op_Equality
                        (name,*(System_String_o **)(*(long *)(TypeInfo_EffectPrefabs + 0xb8) + 8),
                         (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
      if ((char)bVar1 == '\0') {
        puVar2 = &MethodInfo_BaseEffect_AddComponent_BaseEffect;
      }
      else {
        puVar2 = &MethodInfo_GasBurstEffect_AddComponent_GasBurstEffect;
      }
    }
    else {
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
      puVar2 = &MethodInfo_LineRendererEffect_AddComponent_LineRendererEffe;
    }
  }
  else {
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_0423cbc8;
    puVar2 = &MethodInfo_ThunderspearExplodeEffect_AddComponent_Thundersp;
  }
  pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_00,(MethodInfo_24F0EB0 *)*puVar2);
  if (pIVar3 != (Il2CppObject *)0x0) {
    (*pIVar3->klass->vtable[4].methodPtr)
              (0x41200000,pIVar3,info.fields.Sender,settings,pIVar3->klass->vtable[4].method);
    transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    Effects_EffectSpawner__ScaleEffect(transform,scale,scaleSize & 0xff,method_00);
    return;
  }
LAB_0423cbc8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$SpawnSpawnableRPC
// il2cpp: void GameManagers_RPCManager__SpawnSpawnableRPC (GameManagers_RPCManager_o* __this, System_String_o* name, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, System_Object_array* settings, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423cbd0

void GameManagers_RPCManager__SpawnSpawnableRPC
               (GameManagers_RPCManager_o *__this,System_String_o *name,
               UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,float scale,
               System_Object_array *settings,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Spawnables_SpawnableSpawner__OnSpawnSpawnableRPC
            (name,position,rotation,scale,settings,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$SetLabelRPC
// il2cpp: void GameManagers_RPCManager__SetLabelRPC (GameManagers_RPCManager_o* __this, System_String_o* label, System_String_o* message, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423cbe0

void GameManagers_RPCManager__SetLabelRPC
               (GameManagers_RPCManager_o *__this,System_String_o *label,System_String_o *message,
               float time,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570517f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_0570517f = '\x01';
  }
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_InGameManager__OnSetLabelRPC(label,message,time,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$ShowKillFeedRPC
// il2cpp: void GameManagers_RPCManager__ShowKillFeedRPC (GameManagers_RPCManager_o* __this, System_String_o* killer, System_String_o* victim, int32_t score, System_String_o* weapon, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423cc80

void GameManagers_RPCManager__ShowKillFeedRPC
               (GameManagers_RPCManager_o *__this,System_String_o *killer,System_String_o *victim,
               int32_t score,System_String_o *weapon,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_InGameMenu_o *__this_00;
  
  if (DAT_05705180 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05705180 = '\x01';
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__ShowKillFeed(__this_00,killer,victim,score,weapon,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$EndGameRPC
// il2cpp: void GameManagers_RPCManager__EndGameRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423cd70

void GameManagers_RPCManager__EndGameRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  
  if (DAT_05705181 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705181 = '\x01';
  }
  __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      GameManagers_InGameManager__EndGame(__this_00,time,info,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$NotifyPlayerJoinedRPC
// il2cpp: void GameManagers_RPCManager__NotifyPlayerJoinedRPC (GameManagers_RPCManager_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423ce30

void GameManagers_RPCManager__NotifyPlayerJoinedRPC
               (GameManagers_RPCManager_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *str1;
  MethodInfo *pMVar7;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_05705182 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705182 = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar3 = *plVar2;
  if ((*(byte *)(lVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
     (*(long *)(*(long *)(lVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
      TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  if (DAT_057050fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&" has joined the room.");
    il2cpp_init_method_metadata(&"");
    DAT_057050fc = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__OnPlayerJoin(__this_00,info.fields.Sender,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x168), lVar3 != 0)) {
      if (*(char *)(lVar3 + 0x11) != '\0') {
        if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar7 = (MethodInfo *)0x0;
        pSVar6 = PhotonExtensions__GetStringProperty
                           (info.fields.Sender,
                            (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                            (MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        str1 = GameManagers_ChatManager__GetColorString(" has joined the room.",3,0,pMVar7);
        pSVar6 = System_String__Concat(pSVar6,str1,(MethodInfo *)0x0);
        GameManagers_ChatManager__AddLine
                  (pSVar6,0,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,
                   in_stack_ffffffffffffffd8);
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        pMVar7 = TypeInfo_ChatManager;
        il2cpp_init_class();
        bVar5 = GameManagers_ChatManager__HasActivePlayerSuggestions(pMVar7);
        cVar4 = (char)bVar5;
        pMVar7 = TypeInfo_ChatManager;
      }
      else {
        bVar5 = GameManagers_ChatManager__HasActivePlayerSuggestions(TypeInfo_ChatManager);
        cVar4 = (char)bVar5;
        pMVar7 = TypeInfo_ChatManager;
      }
      if (cVar4 == '\0') {
        TypeInfo_ChatManager = pMVar7;
        return;
      }
      TypeInfo_ChatManager = pMVar7;
      if (*(int *)((long)&pMVar7[2].parameters + 4) != 0) {
        GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar7);
        return;
      }
      il2cpp_init_class();
      GameManagers_ChatManager__RefreshPlayerSuggestions(pMVar7);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$TransferNetworkViewRPC
// il2cpp: void GameManagers_RPCManager__TransferNetworkViewRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423cec0

void GameManagers_RPCManager__TransferNetworkViewRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  UnityEngine_Vector3_Fields position;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  
  if (DAT_05705183 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncPrefab");
    DAT_05705183 = '\x01';
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  position = **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                        ("Game/CustomLogicPhotonSyncPrefab",(UnityEngine_Vector3_o)position,
                         (UnityEngine_Quaternion_o)rotation,'\0',(System_Object_array *)0x0,
                         (MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)
                UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
    if (__this_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__Init(__this_01,id,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$SendMessageRPC
// il2cpp: void GameManagers_RPCManager__SendMessageRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d010

void GameManagers_RPCManager__SendMessageRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonMessageInfo_o __this_00;
  Photon_Realtime_Player_o *sender;
  undefined8 in_RAX;
  undefined8 unaff_RBX;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Photon_Pun_PhotonView_o *unaff_R12;
  double sentServerTimestamp;
  
  if (DAT_05705184 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05705184 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    sender = info.fields.Sender;
    __this_00.fields.Sender = (Photon_Realtime_Player_o *)unaff_RBX;
    __this_00.fields._0_8_ = in_RAX;
    __this_00.fields.photonView = unaff_R12;
    sentServerTimestamp =
         Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_00,(MethodInfo *)&info);
    if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicEvaluator__OnNetworkMessage
              (__this_01,sender,message,sentServerTimestamp,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.RPCManager$$SpawnPlayerRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerRPC (GameManagers_RPCManager_o* __this, bool force, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d0f0

void GameManagers_RPCManager__SpawnPlayerRPC
               (GameManagers_RPCManager_o *__this,bool_conflict force,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05705185 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705185 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
        GameManagers_InGameManager__SpawnPlayer(__this_00,force & 0xff,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$SpawnPlayerAtRPC
// il2cpp: void GameManagers_RPCManager__SpawnPlayerAtRPC (GameManagers_RPCManager_o* __this, bool force, UnityEngine_Vector3_o position, float rotationY, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d1a0

void GameManagers_RPCManager__SpawnPlayerAtRPC
               (GameManagers_RPCManager_o *__this,bool_conflict force,UnityEngine_Vector3_o position
               ,float rotationY,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05705186 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05705186 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar2 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = *(GameManagers_InGameManager_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
      bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
      if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
        GameManagers_InGameManager__SpawnPlayerAt
                  (__this_00,force & 0xff,position,rotationY,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$SyncCurrentTimeRPC
// il2cpp: void GameManagers_RPCManager__SyncCurrentTimeRPC (GameManagers_RPCManager_o* __this, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d280

void GameManagers_RPCManager__SyncCurrentTimeRPC
               (GameManagers_RPCManager_o *__this,float time,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  
  if (DAT_05705187 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05705187 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (lVar2 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar2 == 0) goto LAB_0423d32f;
        }
        *(float *)(lVar2 + 0x20) = time;
      }
    }
    return;
  }
LAB_0423d32f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$ChatRPC
// il2cpp: void GameManagers_RPCManager__ChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d340

void GameManagers_RPCManager__ChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int64_t senderTimestamp,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_05705188 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05705188 = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__OnChatRPC(message,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$AnnounceRPC
// il2cpp: void GameManagers_RPCManager__AnnounceRPC (GameManagers_RPCManager_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d3d0

void GameManagers_RPCManager__AnnounceRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if (DAT_05705189 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05705189 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
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
    il2cpp_init_class();
  }
  GameManagers_ChatManager__OnAnnounceRPC(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$VoteKickRPC
// il2cpp: void GameManagers_RPCManager__VoteKickRPC (GameManagers_RPCManager_o* __this, int32_t id, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d470

void GameManagers_RPCManager__VoteKickRPC
               (GameManagers_RPCManager_o *__this,int32_t id,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Realtime_Room_o *pPVar1;
  Photon_Realtime_Player_o *target;
  
  if (DAT_0570518a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_0570518a = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar1 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
  if (pPVar1 != (Photon_Realtime_Room_o *)0x0) {
    target = (Photon_Realtime_Player_o *)
             (*(pPVar1->klass->vtable)._10_GetPlayer.methodPtr)
                       (pPVar1,id,0,(pPVar1->klass->vtable)._10_GetPlayer.method);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GameManagers_ChatManager__VoteKickPlayer(info.fields.Sender,target,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.RPCManager$$TestRPC
// il2cpp: void GameManagers_RPCManager__TestRPC (GameManagers_RPCManager_o* __this, UnityEngine_Color_o c, const MethodInfo* method);
// 0x423d520

void GameManagers_RPCManager__TestRPC
               (GameManagers_RPCManager_o *__this,UnityEngine_Color_o c,MethodInfo *method)

{
  Il2CppObject *message;
  
  if (DAT_0570518b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Color);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    DAT_0570518b = '\x01';
  }
  message = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Color);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__Log(message,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$PrivateChatRPC
// il2cpp: void GameManagers_RPCManager__PrivateChatRPC (GameManagers_RPCManager_o* __this, System_String_o* message, int32_t targetID, int64_t senderTimestamp, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x423d5b0

void GameManagers_RPCManager__PrivateChatRPC
               (GameManagers_RPCManager_o *__this,System_String_o *message,int32_t targetID,
               int64_t senderTimestamp,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  if (DAT_0570518c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_0570518c = '\x01';
  }
  if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  GameManagers_ChatManager__OnPrivateChatRPC
            (message,targetID,senderTimestamp,info,(MethodInfo *)0x0);
  return;
}


// GameManagers.RPCManager$$Awake
// il2cpp: void GameManagers_RPCManager__Awake (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x423d640

void GameManagers_RPCManager__Awake(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_0570518d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    DAT_0570518d = '\x01';
  }
  pIVar1 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_PhotonView_GetComponent_PhotonView);
  **(undefined8 **)(TypeInfo_RPCManager + 0xb8) = pIVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_RPCManager + 0xb8),pIVar1);
  return;
}


// GameManagers.RPCManager$$.ctor
// il2cpp: void GameManagers_RPCManager___ctor (GameManagers_RPCManager_o* __this, const MethodInfo* method);
// 0x423d6b0

void GameManagers_RPCManager___ctor(GameManagers_RPCManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPun___ctor((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  return;
}


