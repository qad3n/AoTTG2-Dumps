// Type: GameManagers.PhotonVoiceSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PhotonVoiceSync.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PhotonVoiceSync.cs
// --------------------------------

// GameManagers.PhotonVoiceSync$$Awake
// il2cpp: void GameManagers_PhotonVoiceSync__Awake (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x456ea70

void GameManagers_PhotonVoiceSync__Awake(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Voice_Unity_Recorder_o **ppPVar1;
  byte bVar2;
  code *pcVar3;
  Il2CppMethodPointer pIVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  Settings_KeybindSetting_o *__this_00;
  undefined8 uVar6;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  Photon_Voice_DeviceInfo_o __this_01;
  Photon_Voice_DeviceInfo_o value;
  int64_t iVar7;
  char cVar8;
  int32_t iVar9;
  int iVar10;
  bool_conflict bVar11;
  uint uVar12;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_String_array *pSVar13;
  System_String_Fields str1;
  UnityEngine_GameObject_o *pUVar14;
  System_String_Fields SVar15;
  System_String_Fields SVar16;
  Il2CppObject *pIVar17;
  undefined8 uVar18;
  System_Collections_Generic_Dictionary_int__object__o *pSVar19;
  System_String_o *pSVar20;
  Il2CppObject *pIVar21;
  System_String_o *pSVar22;
  undefined4 extraout_var;
  System_String_array *pSVar23;
  char *pcVar24;
  System_String_array *pSVar25;
  System_String_array *pSVar26;
  long lVar27;
  long lVar28;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_05;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar29;
  System_Collections_Generic_List_TSource__o *__this_06;
  Photon_Realtime_Player_o *player;
  System_Text_StringBuilder_o *pSVar30;
  System_String_o *pSVar31;
  UnityEngine_Transform_o *pUVar32;
  Photon_Pun_PhotonView_o *pPVar33;
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar34;
  Photon_Voice_Unity_Recorder_o *pPVar35;
  System_String_Fields SVar36;
  UnityEngine_AudioSource_o *pUVar37;
  Photon_Voice_Unity_Speaker_o *pPVar38;
  MethodInfo *pMVar39;
  System_String_o *pSVar40;
  MethodInfo_37E4C90 *method_00;
  MethodInfo_24E7B40 **in_RCX;
  Il2CppClass *pIVar41;
  int32_t color;
  System_String_array **ppSVar42;
  System_String_Fields *pSVar43;
  long *unaff_RBP;
  System_String_Fields SVar44;
  Photon_Voice_DeviceFeatures_o *features;
  ulong uVar45;
  Il2CppClass **__this_07;
  long *plVar46;
  System_String_o **ppSVar47;
  Il2CppClass *player_00;
  Il2CppClass **ppIVar48;
  uint in_R8D;
  int32_t in_R9D;
  long *unaff_R12;
  System_String_Fields unaff_R13;
  MethodInfo **__this_08;
  MethodInfo **userMethod;
  System_String_o **unaff_R15;
  long *plVar49;
  float fVar50;
  UnityEngine_Color_o UVar53;
  UnityEngine_Vector3_o UVar54;
  System_Nullable_DateTime__o __this_09;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_fffffffffffffda0;
  MethodInfo *in_stack_fffffffffffffde8;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  System_String_o *pSStack_1f0;
  System_String_o *apSStack_1e8 [2];
  System_DateTime_o SStack_1d8;
  Photon_Realtime_Player_o *pPStack_1d0;
  System_DateTime_o *pSStack_1c8;
  System_String_Fields SStack_1c0;
  Il2CppClass *pIStack_1b8;
  System_String_o *pSStack_1b0;
  ulong uStack_1a8;
  MethodInfo *in_stack_fffffffffffffe60;
  System_DateTime_Fields timestamp_00;
  MethodInfo *in_stack_fffffffffffffe88;
  undefined4 uStack_168;
  undefined4 uStack_164;
  System_DateTime_o SStack_160;
  Photon_Realtime_Player_o *pPStack_158;
  System_DateTime_Fields SStack_150;
  System_String_array *pSStack_148;
  System_String_array *pSStack_140;
  System_String_Fields SStack_138;
  Photon_Pun_PhotonView_o *pPStack_130;
  System_String_o *pSStack_128;
  System_DateTime_Fields SStack_118;
  int64_t iStack_110;
  System_String_array *pSStack_108;
  System_String_array *pSStack_100;
  System_String_Fields SStack_f8;
  System_String_Fields SStack_f0;
  System_String_Fields SStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  UnityEngine_Transform_o *pUStack_d0;
  undefined8 uStack_c8;
  System_String_Fields SStack_c0;
  long *plStack_b8;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  GameManagers_PhotonVoiceSync_o *pGStack_38;
  float fVar51;
  float fVar52;
  
  if (g_data_057af04d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MicAmplifier_GetComponent_MicAmplifier);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonVoiceView_GetComponent_PhotonVoiceView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Recorder_GetComponent_Recorder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Speaker_GetComponent_Speaker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&"Speaker");
    g_data_057af04d = '\x01';
  }
  pIVar41 = MethodInfo_Void_Add;
  SVar15 = *(System_String_Fields *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (SVar15 == (System_String_Fields)0x0) {
label_0456ed97:
    il2cpp_runtime_helper_022b2c90();
    plVar49 = (long *)unaff_R15;
  }
  else {
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (MethodInfo_24E7B40 **)(ulong)bVar2;
    plVar49 = (long *)unaff_R15;
    if ((bVar2 <= *(byte *)(*(long *)SVar15 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)(*(long *)SVar15 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameManager)) {
      SVar15 = *(System_String_Fields *)((long)SVar15 + 0x58);
      if (SVar15 != (System_String_Fields)0x0) {
        *(int *)((long)SVar15 + 0x1c) = *(int *)((long)SVar15 + 0x1c) + 1;
        lVar27 = *(long *)((long)SVar15 + 0x10);
        in_RCX = (MethodInfo_24E7B40 **)pIVar41;
        if (lVar27 != 0) {
          uVar12 = *(uint *)((long)SVar15 + 0x18);
          if (uVar12 < *(uint *)(lVar27 + 0x18)) {
            in_RCX = (MethodInfo_24E7B40 **)(ulong)(uVar12 + 1);
            *(uint *)((long)SVar15 + 0x18) = uVar12 + 1;
            *(GameManagers_PhotonVoiceSync_o **)(lVar27 + 0x20 + (long)(int)uVar12 * 8) = __this;
            il2cpp_runtime_helper_022b4080(lVar27 + (long)(int)uVar12 * 8 + 0x20);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)SVar15,(Il2CppObject *)__this,
                       *(MethodInfo_362C220 **)(*(long *)((long)(pIVar41->_1).byval_arg.data + 0xc0) + 0x70));
            in_RCX = (MethodInfo_24E7B40 **)pIVar41;
          }
          pUVar32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          (__this->fields).Transform = pUVar32;
          il2cpp_runtime_helper_022b4080(&(__this->fields).Transform,pUVar32);
          pPVar33 = (Photon_Pun_PhotonView_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this,MethodInfo_PhotonView_GetComponent_PhotonView);
          (__this->fields).PhotonView = pPVar33;
          il2cpp_runtime_helper_022b4080(&(__this->fields).PhotonView,pPVar33);
          pPVar34 = (Photon_Voice_PUN_PhotonVoiceView_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this,MethodInfo_PhotonVoiceView_GetComponent_PhotonVoiceView);
          (__this->fields).VoiceView = pPVar34;
          il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceView,pPVar34);
          pPVar35 = (Photon_Voice_Unity_Recorder_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this,MethodInfo_Recorder_GetComponent_Recorder);
          ppPVar1 = &(__this->fields).Recorder;
          (__this->fields).Recorder = pPVar35;
          il2cpp_runtime_helper_022b4080(ppPVar1);
          SVar15 = (System_String_Fields)__this;
          SVar36 = (System_String_Fields)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (SVar36 != (System_String_Fields)0x0) {
            unaff_R15 = &"Speaker";
            pUVar32 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)SVar36,"Speaker",(MethodInfo *)0x0);
            SVar15 = SVar36;
            if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
              in_RCX = &MethodInfo_AudioSource_GetComponent_AudioSource;
              pUVar37 = (UnityEngine_AudioSource_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar32,MethodInfo_AudioSource_GetComponent_AudioSource);
              (__this->fields).AudioSource = pUVar37;
              il2cpp_runtime_helper_022b4080(&(__this->fields).AudioSource);
              pUVar37 = (__this->fields).AudioSource;
              SVar15._stringLength = 0;
              SVar15._firstChar = 0;
              SVar15._6_2_ = 0;
              if (pUVar37 != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar37,1,(MethodInfo *)0x0);
                SVar15 = (System_String_Fields)__this;
                SVar36 = (System_String_Fields)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if ((SVar36 != (System_String_Fields)0x0) &&
                   (pUVar32 = UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)SVar36,"Speaker",(MethodInfo *)0x0),
                   SVar15 = SVar36, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
                  in_RCX = &MethodInfo_Speaker_GetComponent_Speaker;
                  pPVar38 = (Photon_Voice_Unity_Speaker_o *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar32,MethodInfo_Speaker_GetComponent_Speaker);
                  (__this->fields).Speaker = pPVar38;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).Speaker,pPVar38);
                  pMVar39 = (MethodInfo *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this,MethodInfo_MicAmplifier_GetComponent_MicAmplifier);
                  SVar15 = (System_String_Fields)&(__this->fields).MicAmplifier;
                  (__this->fields).MicAmplifier = (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)pMVar39;
                  il2cpp_runtime_helper_022b4080();
                  pPVar33 = (__this->fields).PhotonView;
                  if (pPVar33 != (Photon_Pun_PhotonView_o *)0x0) {
                    if ((char)(pPVar33->fields)._IsMine_k__BackingField == '\0') {
label_0456ed8d:
                      GameManagers_PhotonVoiceSync__Apply(__this,pMVar39);
                      return;
                    }
                    pPVar35 = *ppPVar1;
                    SVar15._stringLength = 0;
                    SVar15._firstChar = 0;
                    SVar15._6_2_ = 0;
                    if (pPVar35 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                      *(undefined1 *)((long)&(pPVar35->fields).audioSessionParameters.fields.Mode + 2) = 1;
                      Photon_Voice_Unity_Recorder__set_LoopAudioClip(pPVar35,1,(MethodInfo *)0x0);
                      SVar15._stringLength = 0;
                      SVar15._firstChar = 0;
                      SVar15._6_2_ = 0;
                      if (*ppPVar1 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                        Photon_Voice_Unity_Recorder__set_VoiceDetectionThreshold
                                  (*ppPVar1,0.01,(MethodInfo *)0x0);
                        SVar15._stringLength = 0;
                        SVar15._firstChar = 0;
                        SVar15._6_2_ = 0;
                        if (*ppPVar1 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                          Photon_Voice_Unity_Recorder__set_FrameDuration(*ppPVar1,20000,(MethodInfo *)0x0);
                          SVar15._stringLength = 0;
                          SVar15._firstChar = 0;
                          SVar15._6_2_ = 0;
                          if (*ppPVar1 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                            Photon_Voice_Unity_Recorder__set_SamplingRate(*ppPVar1,48000,(MethodInfo *)0x0);
                            SVar15._stringLength = 0;
                            SVar15._firstChar = 0;
                            SVar15._6_2_ = 0;
                            if (*ppPVar1 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                              pMVar39 = (MethodInfo *)0x1f4;
                              Photon_Voice_Unity_Recorder__set_VoiceDetectionDelayMs
                                        (*ppPVar1,500,(MethodInfo *)0x0);
                              goto label_0456ed8d;
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
      goto label_0456ed97;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  ppIVar48 = (Il2CppClass **)SVar15;
  pGStack_38 = __this;
  if (g_data_057af04e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Common");
    ppIVar48 = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057af04e = '\x01';
  }
  if (*(long *)((long)SVar15 + 0x28) != 0) {
    if (*(char *)(*(long *)((long)SVar15 + 0x28) + 0x68) == '\0') {
label_0456f027:
      lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      __this = (GameManagers_PhotonVoiceSync_o *)&TypeInfo_SettingsManager;
      if (((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0)) &&
         (in_RCX = *(MethodInfo_24E7B40 ***)(lVar27 + 0x108), (Il2CppClass *)in_RCX != (Il2CppClass *)0x0)) {
        SVar36 = *(System_String_Fields *)((long)SVar15 + 0x48);
        ppIVar48 = (Il2CppClass **)SVar36;
        if (*(int *)((long)&(((Il2CppClass *)in_RCX)->_1).name + 4) == 1) {
          if ((*(long *)(lVar27 + 0x118) != 0) && (SVar36 != (System_String_Fields)0x0)) {
            UnityEngine_AudioSource__set_maxDistance
                      ((UnityEngine_AudioSource_o *)SVar36,*(float *)(*(long *)(lVar27 + 0x118) + 0x14),
                       (MethodInfo *)0x0);
            lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            ppIVar48 = (Il2CppClass **)SVar36;
            if ((lVar27 != 0) &&
               ((lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0 &&
                (lVar27 = *(long *)(lVar27 + 0x110), lVar27 != 0)))) {
              ppIVar48._0_4_ = 0;
              ppIVar48._4_2_ = 0;
              ppIVar48._6_2_ = 0;
              if (*(UnityEngine_AudioSource_o **)((long)SVar15 + 0x48) != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_minDistance
                          (*(UnityEngine_AudioSource_o **)((long)SVar15 + 0x48),*(float *)(lVar27 + 0x14),
                           (MethodInfo *)0x0);
                SVar36 = *(System_String_Fields *)((long)SVar15 + 0x48);
                ppIVar48 = (Il2CppClass **)TypeInfo_VoiceChatManager;
                if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this._0_4_ = 0;
                __this._4_2_ = 0;
                __this._6_2_ = 0;
                if (SVar36 != (System_String_Fields)0x0) {
                  fVar50 = *(float *)(*(long *)((long)TypeInfo_VoiceChatManager + 0xb8) + 0x10);
                  goto label_0456f10f;
                }
              }
            }
          }
        }
        else if (SVar36 != (System_String_Fields)0x0) {
          fVar50 = 0.0;
label_0456f10f:
          UnityEngine_AudioSource__set_spatialBlend
                    ((UnityEngine_AudioSource_o *)SVar36,fVar50,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      ppIVar48 = *(Il2CppClass ***)((long)SVar15 + 0x38);
      if ((System_String_Fields)ppIVar48 != (System_String_Fields)0x0) {
        Photon_Voice_Unity_Recorder__set_TransmitEnabled
                  ((Photon_Voice_Unity_Recorder_o *)ppIVar48,0,(MethodInfo *)0x0);
        unaff_R12 = &TypeInfo_SettingsManager;
        lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xb0), lVar27 != 0)) {
          ppIVar48._0_4_ = 0;
          ppIVar48._4_2_ = 0;
          ppIVar48._6_2_ = 0;
          if (*(Photon_Voice_Unity_Recorder_o **)((long)SVar15 + 0x38) != (Photon_Voice_Unity_Recorder_o *)0x0
             ) {
            Photon_Voice_Unity_Recorder__set_VoiceDetection
                      (*(Photon_Voice_Unity_Recorder_o **)((long)SVar15 + 0x38),
                       (uint)(*(int *)(lVar27 + 0x14) == 1),(MethodInfo *)0x0);
            ppIVar48 = *(Il2CppClass ***)((long)SVar15 + 0x38);
            if ((System_String_Fields)ppIVar48 != (System_String_Fields)0x0) {
              Photon_Voice_Unity_Recorder__set_MicrophoneType
                        ((Photon_Voice_Unity_Recorder_o *)ppIVar48,0,(MethodInfo *)0x0);
              lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xa8), lVar27 != 0)) {
                __this = *(GameManagers_PhotonVoiceSync_o **)(lVar27 + 0x18);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_R9D = 0;
                in_RCX = (MethodInfo_24E7B40 **)"";
                pIVar41 = "";
                pSVar40 = UI_UIManager__GetLocale
                                    ("Common","None",(System_String_o *)"",
                                     (System_String_o *)"",(System_String_o *)"",
                                     (MethodInfo *)0x0);
                in_R8D = (uint)pIVar41;
                ppIVar48 = (Il2CppClass **)__this;
                bVar11 = System_String__op_Inequality((System_String_o *)__this,pSVar40,(MethodInfo *)0x0);
                plVar49 = *(long **)((long)SVar15 + 0x38);
                if ((char)bVar11 == '\0') {
                  features = (Photon_Voice_DeviceFeatures_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                  if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0xa8), lVar27 == 0)) goto label_0456f122;
                  features = *(Photon_Voice_DeviceFeatures_o **)(lVar27 + 0x18);
                }
                __this = (GameManagers_PhotonVoiceSync_o *)&uStack_60;
                uStack_50 = 0;
                uStack_48 = 0;
                uStack_60 = 0;
                uStack_58 = 0;
                uStack_40 = 0;
                in_RCX = (MethodInfo_24E7B40 **)0x0;
                __this_01.fields._IDString_k__BackingField = (System_String_o *)in_stack_ffffffffffffff78;
                __this_01.fields._IsDefault_k__BackingField = (int)in_stack_ffffffffffffff70;
                __this_01.fields._IDInt_k__BackingField = (int)((ulong)in_stack_ffffffffffffff70 >> 0x20);
                __this_01.fields._Name_k__BackingField = (System_String_o *)in_stack_ffffffffffffff80;
                __this_01.fields.features = (Photon_Voice_DeviceFeatures_o *)in_stack_ffffffffffffff88;
                __this_01.fields._32_8_ = in_stack_ffffffffffffff90;
                ppIVar48 = (Il2CppClass **)__this;
                Photon_Voice_DeviceInfo___ctor_3f19490
                          (__this_01,(System_String_o *)__this,features,(MethodInfo *)0x0);
                if ((System_String_Fields)plVar49 != (System_String_Fields)0x0) {
                  value.fields._IDString_k__BackingField = (System_String_o *)uStack_58;
                  value.fields._IsDefault_k__BackingField = (undefined4)uStack_60;
                  value.fields._IDInt_k__BackingField = uStack_60._4_4_;
                  value.fields._Name_k__BackingField = (System_String_o *)uStack_50;
                  value.fields.features = (Photon_Voice_DeviceFeatures_o *)uStack_48;
                  value.fields._32_8_ = uStack_40;
                  Photon_Voice_Unity_Recorder__set_MicrophoneDevice
                            ((Photon_Voice_Unity_Recorder_o *)plVar49,value,(MethodInfo *)0x0);
                  __this = *(GameManagers_PhotonVoiceSync_o **)((long)SVar15 + 0x60);
                  if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ppIVar48._0_4_ = 0;
                  ppIVar48._4_2_ = 0;
                  ppIVar48._6_2_ = 0;
                  fVar50 = ApplicationManagers_VoiceChatManager__GetInputVolume((MethodInfo *)0x0);
                  if ((System_String_Fields)__this != (System_String_Fields)0x0) {
                    Photon_Voice_Unity_UtilityScripts_MicAmplifier__set_AmplificationFactor
                              ((Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)__this,fVar50,
                               (MethodInfo *)0x0);
                    ppIVar48 = (Il2CppClass **)__this;
                    goto label_0456f027;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0456f122:
  uStack_c8 = il2cpp_runtime_helper_022b2c90();
  ppSVar42 = (System_String_array **)&uStack_c8;
  SStack_c0 = (System_String_Fields)__this;
  plStack_b8 = unaff_R12;
  if (g_data_057af04f == '\0') {
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f153;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f15f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f16b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f177;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f183;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f18f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f19b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f1a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057af04f = '\x01';
  }
  pSVar13 = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar13 == (System_String_array *)0x0) {
label_0456f1fb:
    plVar49 = &TypeInfo_SettingsManager;
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((lVar27 != 0) &&
       (((lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0 && (lVar27 = *(long *)(lVar27 + 0x108), lVar27 != 0))
        && (__this = *(GameManagers_PhotonVoiceSync_o **)((long)ppIVar48 + 0x28),
           (System_String_Fields)__this != (System_String_Fields)0x0)))) {
      uVar12 = *(uint *)(lVar27 + 0x14);
      unaff_R13._4_4_ = 0;
      unaff_R13._stringLength = uVar12;
      if (*(char *)((long)__this + 0x68) == '\0') {
        SVar15 = *(System_String_Fields *)((long)ppIVar48 + 0x48);
        ppIVar48 = (Il2CppClass **)SVar15;
        if (uVar12 == 2) {
          if (SVar15 != (System_String_Fields)0x0) {
            fVar50 = 0.0;
            goto label_0456f4c8;
          }
        }
        else {
          if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
            pUStack_d0 = (UnityEngine_Transform_o *)0x456f3fc;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_d0 = (UnityEngine_Transform_o *)0x456f406;
          fVar50 = ApplicationManagers_VoiceChatManager__GetOuputVolume
                             ((Photon_Pun_PhotonView_o *)__this,(MethodInfo *)0x0);
          if (SVar15 != (System_String_Fields)0x0) goto label_0456f4c8;
        }
      }
      else if (pSVar13 != (System_String_array *)0x0) {
        __this = *(GameManagers_PhotonVoiceSync_o **)(pSVar13->m_Items + 10);
        unaff_RBP = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_d0 = (UnityEngine_Transform_o *)0x456f278;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_d0 = (UnityEngine_Transform_o *)0x456f284;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
label_0456f30d:
          plVar49 = &TypeInfo_SettingsManager;
          __this = *(GameManagers_PhotonVoiceSync_o **)(pSVar13->m_Items + 10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_d0 = (UnityEngine_Transform_o *)0x456f324;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBP = (long *)0x0;
          pUStack_d0 = (UnityEngine_Transform_o *)0x456f332;
          bVar11 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            if (pSVar13->m_Items[10] == (System_String_o *)0x0) goto label_0456f4dd;
            unaff_RBP = (long *)(ulong)(*(byte *)&pSVar13->m_Items[10][4].monitor ^ 1);
          }
          if ((uVar12 == 2) || ((uVar12 == 1 && ((int)unaff_RBP == 0)))) {
label_0456f4a5:
            pPVar35 = *(Photon_Voice_Unity_Recorder_o **)((long)ppIVar48 + 0x38);
            if (pPVar35 != (Photon_Voice_Unity_Recorder_o *)0x0) {
              bVar11 = 0;
label_0456f4b0:
              pUStack_d0 = (UnityEngine_Transform_o *)0x456f4b7;
              Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar35,bVar11,(MethodInfo *)0x0);
label_0456f4b7:
              SVar15 = *(System_String_Fields *)((long)ppIVar48 + 0x48);
              if (SVar15 != (System_String_Fields)0x0) {
                fVar50 = 1.0;
label_0456f4c8:
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)SVar15,fVar50,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xb0), lVar27 != 0)) {
              iVar10 = *(int *)(lVar27 + 0x14);
              if (iVar10 != 1) {
                if (iVar10 == 0) {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pUStack_d0 = (UnityEngine_Transform_o *)0x456f455;
                    il2cpp_runtime_helper_02337ed0();
                    pUStack_d0 = (UnityEngine_Transform_o *)0x456f45c;
                    bVar11 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar8 = (char)bVar11;
                  }
                  else {
                    pUStack_d0 = (UnityEngine_Transform_o *)0x456f3bf;
                    bVar11 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar8 = (char)bVar11;
                  }
                  if (cVar8 == '\0') {
                    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0)) ||
                       (__this_00 = *(Settings_KeybindSetting_o **)(lVar27 + 0x90),
                       __this_00 == (Settings_KeybindSetting_o *)0x0)) goto label_0456f4dd;
                    pUStack_d0 = (UnityEngine_Transform_o *)0x456f491;
                    bVar11 = Settings_KeybindSetting__GetKey(__this_00,0,(MethodInfo *)0x0);
                    if ((char)bVar11 != '\0') goto label_0456f495;
                  }
                  goto label_0456f4a5;
                }
                goto label_0456f4b7;
              }
label_0456f495:
              pPVar35 = *(Photon_Voice_Unity_Recorder_o **)((long)ppIVar48 + 0x38);
              if (pPVar35 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                bVar11 = 1;
                goto label_0456f4b0;
              }
            }
          }
        }
        else if ((System_String_Fields)__this != (System_String_Fields)0x0) {
          in_RCX = *(MethodInfo_24E7B40 ***)__this;
          if (((((Il2CppClass *)in_RCX)->_2).naturalAligment < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
             (in_RCX = (MethodInfo_24E7B40 **)(((Il2CppClass *)in_RCX)->_2).typeHierarchy,
             *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8 + -8) != TypeInfo_BaseTitan)) {
            unaff_RBP = &TypeInfo_SettingsManager;
            plVar49 = *(long **)((long)ppIVar48 + 0x58);
            pUStack_d0 = (UnityEngine_Transform_o *)0x456f2dd;
            pUVar32 = (UnityEngine_Transform_o *)(**(code **)(*(long *)__this + 0x568))(__this);
            if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
              pUStack_d0 = (UnityEngine_Transform_o *)0x456f2f0;
              UVar54 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
              fVar52 = UVar54.fields.z;
              fVar50 = UVar54.fields.x;
              fVar51 = UVar54.fields.y;
              if ((System_String_Fields)plVar49 != (System_String_Fields)0x0) goto label_0456f2f9;
            }
          }
          else if ((*(long *)((long)__this + 0xf8) != 0) &&
                  (pUVar32 = *(UnityEngine_Transform_o **)(*(long *)((long)__this + 0xf8) + 0x38),
                  pUVar32 != (UnityEngine_Transform_o *)0x0)) {
            unaff_RBP = &TypeInfo_SettingsManager;
            plVar49 = *(long **)((long)ppIVar48 + 0x58);
            pUStack_d0 = (UnityEngine_Transform_o *)0x456f442;
            UVar54 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
            fVar52 = UVar54.fields.z;
            fVar50 = UVar54.fields.x;
            fVar51 = UVar54.fields.y;
            if ((System_String_Fields)plVar49 != (System_String_Fields)0x0) {
label_0456f2f9:
              pUStack_d0 = (UnityEngine_Transform_o *)0x456f303;
              UVar54.fields.y = fVar51;
              UVar54.fields.x = fVar50;
              UVar54.fields.z = fVar52;
              UnityEngine_Transform__set_position((UnityEngine_Transform_o *)plVar49,UVar54,(MethodInfo *)0x0)
              ;
              goto label_0456f30d;
            }
            plVar49._0_4_ = 0;
            plVar49._4_2_ = 0;
            plVar49._6_2_ = 0;
          }
        }
      }
    }
label_0456f4dd:
    pUStack_d0 = (UnityEngine_Transform_o *)0x456f4e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar41 = (pSVar13->obj).klass;
    bVar2 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (MethodInfo_24E7B40 **)(ulong)bVar2;
    if ((bVar2 <= (pIVar41->_2).naturalAligment) &&
       ((pIVar41->_2).typeHierarchy
        [(long)((long)&((Il2CppClass *)((long)in_RCX + -0x1128))->vtable[0xfe].method + 7)] == TypeInfo_InGameManager))
    goto label_0456f1fb;
  }
  pUStack_d0 = (UnityEngine_Transform_o *)0x456f4ea;
  pSVar25 = pSVar13;
  il2cpp_runtime_helper_022b2fd0();
  SStack_e0 = (System_String_Fields)__this;
  SStack_d8 = (System_String_Fields)ppIVar48;
  pUStack_d0 = (UnityEngine_Transform_o *)unaff_RBP;
  if (g_data_057af050 == '\0') {
    SStack_e8._stringLength = 0x456f599;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af050 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0456f5b7;
label_0456f51b:
    pSVar26 = (System_String_array *)0x0;
    SStack_e8._stringLength = 0x456f522;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    bVar11 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar8 = (char)bVar11;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0456f51b;
label_0456f5b7:
    SStack_e8._stringLength = 0x456f5bc;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar26 = (System_String_array *)0x0;
    SStack_e8._stringLength = 0x456f5c3;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    bVar11 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar8 = (char)bVar11;
  }
  if (cVar8 == '\0') {
    return;
  }
  if (pSVar25->m_Items[1] == (System_String_o *)0x0) goto label_0456f61b;
  if (*(char *)&pSVar25->m_Items[1][4].monitor == '\0') {
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SStack_e8._stringLength = 0x456f5e0;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    uVar12 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    SStack_e8._stringLength = 0x456f5ec;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    pPVar33 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    pSVar26 = pSVar25;
    if (pPVar33 == (Photon_Pun_PhotonView_o *)0x0) goto label_0456f61b;
    SVar15 = (System_String_Fields)(pPVar33->fields)._Owner_k__BackingField;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_e8._stringLength = 0x456f609;
      SStack_e8._firstChar = 0;
      SStack_e8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    SStack_e8._stringLength = 0x456f54b;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    pSVar26 = pSVar25;
    pPVar33 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    if (pPVar33 == (Photon_Pun_PhotonView_o *)0x0) {
label_0456f61b:
      SStack_e8 = (System_String_Fields)GameManagers_PhotonVoiceSync___ctor;
      il2cpp_runtime_helper_022b2c90();
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar26,(MethodInfo *)0x0);
      return;
    }
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SVar15 = (System_String_Fields)(pPVar33->fields)._Owner_k__BackingField;
    SStack_e8._stringLength = 0x456f56f;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    uVar12 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_e8._stringLength = 0x456f582;
      SStack_e8._firstChar = 0;
      SStack_e8._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  uVar45 = (ulong)(uVar12 & 0xff);
  if (g_data_057aef7f == '\0') {
    SStack_e8._stringLength = 0x454e5c2;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,uVar45,0);
    SStack_e8._stringLength = 0x454e5ce;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aef7f = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
    SStack_e8._stringLength = 0x454e552;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    bVar11 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar8 = (char)bVar11;
    pMVar39 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
    SStack_e8._stringLength = 0x454e5f1;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    pMVar39 = TypeInfo_ChatManager;
    il2cpp_runtime_helper_02337ed0();
    SStack_e8._stringLength = 0x454e5f6;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    bVar11 = GameManagers_ChatManager__IsChatAvailable(pMVar39);
    cVar8 = (char)bVar11;
    pMVar39 = TypeInfo_ChatManager;
  }
  if (cVar8 == '\0') {
    TypeInfo_ChatManager = pMVar39;
    return;
  }
  TypeInfo_ChatManager = pMVar39;
  if (*(int *)((long)&pMVar39[2].parameters + 4) == 0) {
    SStack_e8._stringLength = 0x454e56b;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_e8._stringLength = 0x454e570;
  SStack_e8._firstChar = 0;
  SStack_e8._6_2_ = 0;
  SVar36 = (System_String_Fields)GameManagers_ChatManager__GetVoiceChatPanel(pMVar39);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    SStack_e8._stringLength = 0x454e58b;
    SStack_e8._firstChar = 0;
    SStack_e8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_e8._stringLength = 0x454e597;
  SStack_e8._firstChar = 0;
  SStack_e8._6_2_ = 0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)SVar36,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar32 = pUStack_d0;
  SVar16 = SStack_e0;
  if ((char)bVar11 != '\0') {
    return;
  }
  if (SVar36 != (System_String_Fields)0x0) {
    __this_07 = (Il2CppClass **)SVar36;
    SVar44 = SStack_d8;
    if ((char)uVar12 != '\0') {
      SStack_e0 = SStack_d8;
      SStack_f8 = SVar16;
      ppSVar42 = &pSStack_100;
      SVar44 = SVar15;
      pSStack_100 = (System_String_array *)CONCAT44(extraout_var,bVar11);
      SStack_f0 = (System_String_Fields)pSVar13;
      SStack_e8 = unaff_R13;
      SStack_d8 = (System_String_Fields)plVar49;
      if (g_data_057ae502 == '\0') {
        pSStack_108 = (System_String_array *)0x43eda96;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,SVar15,0);
        pSStack_108 = (System_String_array *)0x43edaa2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pSStack_108 = (System_String_array *)0x43edaae;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pSStack_108 = (System_String_array *)0x43edaba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        pSStack_108 = (System_String_array *)0x43edac6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        pSStack_108 = (System_String_array *)0x43edad2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pSStack_108 = (System_String_array *)0x43edade;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        __this_07 = &"";
        pSStack_108 = (System_String_array *)0x43edaea;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae502 = '\x01';
      }
      if ((SVar15 != (System_String_Fields)0x0) &&
         (__this_07 = *(Il2CppClass ***)((long)SVar36 + 0x70),
         (System_String_Fields)__this_07 != (System_String_Fields)0x0)) {
        SVar44._4_4_ = 0;
        SVar44._stringLength = *(uint *)((long)SVar15 + 0x18);
        pSStack_108 = (System_String_array *)0x43edb1a;
        bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_07,
                            *(uint *)((long)SVar15 + 0x18),MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 != '\0') {
          return;
        }
        lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
          uVar12 = *(uint *)(lVar27 + 0x14);
          pUVar32 = (UnityEngine_Transform_o *)(ulong)uVar12;
          pSStack_108 = (System_String_array *)0x43edb71;
          pSVar40 = (System_String_o *)
                    (**(code **)(*(long *)SVar36 + 0x178))(SVar36,*(undefined8 *)(*(long *)SVar36 + 0x180));
          pSStack_108 = (System_String_array *)0x43edb83;
          plVar49 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          pSStack_108 = (System_String_array *)0x43edba5;
          UI_ElementStyle___ctor((UI_ElementStyle_o *)plVar49,uVar12,120.0,20.0,pSVar40,(MethodInfo *)0x0);
          iVar9 = *(int32_t *)((long)SVar15 + 0x18);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            pSStack_108 = (System_String_array *)0x43edbc1;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_108 = (System_String_array *)0x43edbce;
          pSVar13 = (System_String_array *)GameManagers_ChatManager__GetIDString(iVar9,0,0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            pSStack_108 = (System_String_array *)0x43edbe9;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar44 = **(System_String_Fields **)(TypeInfo_PlayerProperty + 0xb8);
          pSStack_108 = (System_String_array *)0x43edc0a;
          str1 = (System_String_Fields)
                 PhotonExtensions__GetStringProperty
                           ((Photon_Realtime_Player_o *)SVar15,(System_String_o *)SVar44,
                            (System_String_o *)"",(MethodInfo *)0x0);
          __this_07._0_4_ = 0;
          __this_07._4_2_ = 0;
          __this_07._6_2_ = 0;
          SVar16 = (System_String_Fields)&TypeInfo_PlayerProperty;
          if (*(UnityEngine_GameObject_o **)((long)SVar36 + 0x68) != (UnityEngine_GameObject_o *)0x0) {
            pSStack_108 = (System_String_array *)0x43edc1d;
            pUVar32 = UnityEngine_GameObject__get_transform
                                (*(UnityEngine_GameObject_o **)((long)SVar36 + 0x68),(MethodInfo *)0x0);
            pSStack_108 = (System_String_array *)0x43edc2d;
            pSVar40 = System_String__Concat_3ae5ba0
                                ((System_String_o *)pSVar13,(System_String_o *)str1,(MethodInfo *)0x0);
            pSStack_108 = (System_String_array *)0x43edc46;
            SVar44 = (System_String_Fields)plVar49;
            pUVar14 = UI_ElementFactory__CreateWhiteLabel
                                (pUVar32,(UI_ElementStyle_o *)plVar49,pSVar40,0,3,(MethodInfo *)0x0);
            __this_07._0_4_ = 0;
            __this_07._4_2_ = 0;
            __this_07._6_2_ = 0;
            SVar16 = str1;
            if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar36 + 0x70) !=
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pSStack_108 = (System_String_array *)0x43edc65;
              System_Collections_Generic_Dictionary_int__object___Add
                        (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar36 + 0x70),
                         *(int32_t *)((long)SVar15 + 0x18),(Il2CppObject *)pUVar14,MethodInfo_Void_Add);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      pSStack_108 = (System_String_array *)0x43edc7f;
      il2cpp_runtime_helper_022b2c90();
      SVar15 = SVar44;
      SVar44 = SVar36;
    }
    *(long **)((long)ppSVar42 + -8) = plVar49;
    *(System_String_Fields *)((long)ppSVar42 + -0x10) = SVar44;
    *(System_String_Fields *)((long)ppSVar42 + -0x18) = SVar16;
    SVar36 = SVar15;
    plVar46 = (long *)__this_07;
    if (g_data_057ae503 == '\0') {
      *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edca0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edcac;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edcb8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
      plVar46 = &TypeInfo_Object;
      *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edcc4;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae503 = '\x01';
    }
    if (SVar15 != (System_String_Fields)0x0) {
      pSVar19 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_07 + 0x70);
      plVar46._0_4_ = 0;
      plVar46._4_2_ = 0;
      plVar46._6_2_ = 0;
      if (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar12 = *(uint *)((long)SVar15 + 0x18);
        SVar36._4_4_ = 0;
        SVar36._stringLength = uVar12;
        *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edcf3;
        bVar11 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar19,uVar12,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 == '\0') {
          return;
        }
        pSVar19 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_07 + 0x70);
        plVar46._0_4_ = 0;
        plVar46._4_2_ = 0;
        plVar46._6_2_ = 0;
        if (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar9 = *(int32_t *)((long)SVar15 + 0x18);
          *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edd12;
          plVar49 = (long *)System_Collections_Generic_Dictionary_int__object___get_Item
                                      (pSVar19,iVar9,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edd2d;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar36._stringLength = 0;
          SVar36._firstChar = 0;
          SVar36._6_2_ = 0;
          *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edd37;
          UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)plVar49,(MethodInfo *)0x0);
          pSVar19 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_07 + 0x70);
          plVar46._0_4_ = 0;
          plVar46._4_2_ = 0;
          plVar46._6_2_ = 0;
          if (pSVar19 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            iVar9 = *(int32_t *)((long)SVar15 + 0x18);
            *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edd52;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar19,iVar9,MethodInfo_Boolean_Remove);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar42 + -0x20) = 0x43edd69;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Transform_o **)((long)ppSVar42 + -0x20) = pUVar32;
    *(long **)((long)ppSVar42 + -0x28) = plVar49;
    *(Il2CppClass ***)((long)ppSVar42 + -0x30) = __this_07;
    *(System_String_array **)((long)ppSVar42 + -0x38) = pSVar13;
    *(System_String_Fields *)((long)ppSVar42 + -0x40) = SVar15;
    ppSVar47 = (System_String_o **)plVar46;
    if (g_data_057ae504 == '\0') {
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edd93;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edd9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43eddab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43eddb7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43eddc3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43eddcf;
      il2cpp_runtime_helper_023445d0(&"TextColor");
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edddb;
      il2cpp_runtime_helper_023445d0(&"DefaultPanel");
      ppSVar47 = &"Default";
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edde7;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae504 = '\x01';
    }
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
      iVar9 = *(int32_t *)(lVar27 + 0x14);
      uVar18 = *(undefined8 *)(*plVar46 + 0x180);
      pcVar3 = *(code **)(*plVar46 + 0x178);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43ede33;
      pSVar40 = (System_String_o *)(*pcVar3)(plVar46,uVar18);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43ede45;
      SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43ede68;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)SVar15,iVar9,120.0,20.0,pSVar40,(MethodInfo *)0x0);
      pUVar14 = *(UnityEngine_GameObject_o **)((long)plVar46 + 0x68);
      ppSVar47._0_4_ = 0;
      ppSVar47._4_2_ = 0;
      ppSVar47._6_2_ = 0;
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43ede7c;
        ppSVar47 = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar14,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43ede95;
        SVar16 = (System_String_Fields)
                 UI_ElementFactory__CreateWhiteLabel
                           ((UnityEngine_Transform_o *)ppSVar47,(UI_ElementStyle_o *)SVar15,
                            (System_String_o *)SVar36,0,3,(MethodInfo *)0x0);
        if (SVar16 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edeb3;
          ppSVar47 = (System_String_o **)SVar16;
          pIVar17 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar16,MethodInfo_Text_GetComponent_Text);
          SVar36 = SVar16;
          if (SVar15 != (System_String_Fields)0x0) {
            SVar15 = *(System_String_Fields *)((long)SVar15 + 0x18);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43eded7;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edf00;
            ppSVar47 = (System_String_o **)SVar15;
            UVar53 = UI_UIManager__GetThemeColor
                               ((System_String_o *)SVar15,"TextColor","Default","DefaultPanel",
                                (MethodInfo *)0x0);
            plVar46._0_4_ = 0;
            plVar46._4_2_ = 0;
            plVar46._6_2_ = 0;
            if (pIVar17 != (Il2CppObject *)0x0) {
              pMVar39 = pIVar17->klass->vtable[0x17].method;
              pIVar4 = pIVar17->klass->vtable[0x17].methodPtr;
              *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edf18;
              (*pIVar4)(UVar53.fields.r,UVar53.fields.b,pIVar17,pMVar39);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar42 + -0x48) = 0x43edf29;
    uVar18 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields *)((long)ppSVar42 + -0x48) = SVar36;
    *(System_String_Fields *)((long)ppSVar42 + -0x50) = SVar15;
    *(undefined8 *)((long)ppSVar42 + -0x58) = uVar18;
    if (g_data_057ae505 == '\0') {
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43edf4c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43edf58;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
      g_data_057ae505 = '\x01';
    }
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43edf6e;
    pSVar19 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43edf83;
    System_Collections_Generic_Dictionary_int__object____ctor(pSVar19,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    *(System_Collections_Generic_Dictionary_int__object__o **)((long)ppSVar47 + 0x70) = pSVar19;
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43edf93;
    il2cpp_runtime_helper_022b4080((long)ppSVar47 + 0x70,pSVar19);
    uVar18 = *(undefined8 *)((long)ppSVar42 + -0x50);
    uVar6 = *(undefined8 *)((long)ppSVar42 + -0x48);
    *(long **)((long)ppSVar42 + -0x48) = plVar46;
    *(undefined8 *)((long)ppSVar42 + -0x50) = uVar6;
    *(undefined8 *)((long)ppSVar42 + -0x58) = uVar18;
    if (g_data_057ae02c == '\0') {
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x432777d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327789;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327795;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43277a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43277ad;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      g_data_057ae02c = '\x01';
    }
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43277c3;
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43277d8;
    System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UI_BasePopup);
    *(System_Collections_Generic_List_object__o **)((long)ppSVar47 + 0x38) = __this_02;
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x43277e8;
    il2cpp_runtime_helper_022b4080((long)ppSVar47 + 0x38,__this_02);
    pSVar40 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x432780f;
    __this_03 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327824;
    Settings_StringSetting___ctor_40f74f0(__this_03,pSVar40,0x7fffffff,(MethodInfo *)0x0);
    *(Settings_StringSetting_o **)((long)ppSVar47 + 0x48) = __this_03;
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327834;
    il2cpp_runtime_helper_022b4080((long)ppSVar47 + 0x48,__this_03);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327843;
    __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327858;
    System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_Type);
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)ppSVar47 + 0x50) = __this_04;
    *(undefined8 *)((long)ppSVar42 + -0x60) = 0x4327868;
    il2cpp_runtime_helper_022b4080((long)ppSVar47 + 0x50);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar47,(MethodInfo *)0x0);
    return;
  }
  SStack_e8._stringLength = 0x454e611;
  SStack_e8._firstChar = 0;
  SStack_e8._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_e8 = SVar36;
  if (g_data_057aef8d == '\0') {
    SStack_f0._stringLength = 0x454e68c;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    SStack_f0._stringLength = 0x454e698;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aef8d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
    SStack_f0._stringLength = 0x454e6cf;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
    SStack_f0._stringLength = 0x454e6b7;
    SStack_f0._firstChar = 0;
    SStack_f0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
    pIVar41 = (pSVar25->obj).klass;
    bVar2 = (TypeInfo_InGameMenu->_2).naturalAligment;
    in_RCX = (MethodInfo_24E7B40 **)(ulong)bVar2;
    if ((bVar2 <= (pIVar41->_2).naturalAligment) &&
       ((pIVar41->_2).typeHierarchy
        [(long)((long)&((Il2CppClass *)((long)in_RCX + -0x1128))->vtable[0xfe].method + 7)] == TypeInfo_InGameMenu))
    {
      return;
    }
  }
  SStack_f0._stringLength = 0x454e6d4;
  SStack_f0._firstChar = 0;
  SStack_f0._6_2_ = 0;
  il2cpp_runtime_helper_022b2fd0();
  pSVar43 = (System_String_Fields *)&pSStack_100;
  pSStack_100 = (System_String_array *)&TypeInfo_UIManager;
  SStack_f8 = SVar15;
  SStack_f0 = (System_String_Fields)plVar49;
  if (g_data_057aef81 == '\0') {
    pSStack_108 = (System_String_array *)0x454e6fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pSStack_108 = (System_String_array *)0x454e709;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_108 = (System_String_array *)0x454e715;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aef81 = '\x01';
  }
  __this_08 = (MethodInfo **)&g_data_057b9b70;
  pSStack_108 = (System_String_array *)0x454e73e;
  bVar11 = System_String__op_Equality
                     ((System_String_o *)pSVar25,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return;
  }
  plVar49 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_108 = (System_String_array *)0x454e760;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar26 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (pSVar26 == (System_String_array *)0x0) {
label_0454e854:
    pSVar23 = pSVar26;
    pSStack_108 = (System_String_array *)0x454e859;
    pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_108 = (System_String_array *)0x454e781;
    pSVar23 = (System_String_array *)
              CustomLogic_CustomLogicEvaluator__OnChatInput
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar26,(System_String_o *)pSVar25,
                         (MethodInfo *)0x0);
    if ((pSVar23 != (System_String_array *)0x0) &&
       (in_RCX = (MethodInfo_24E7B40 **)(pSVar23->obj).klass, (Il2CppClass *)in_RCX == g_data_057b9b98)) {
      pSStack_108 = (System_String_array *)0x454e797;
      pcVar24 = (char *)il2cpp_runtime_helper_02305440();
      pSVar26 = pSVar23;
      if (*pcVar24 == '\0') {
        return;
      }
    }
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e854;
    pSStack_108 = (System_String_array *)0x454e7b9;
    pMVar39 = "/";
    bVar11 = System_String__StartsWith
                       ((System_String_o *)pSVar25,(System_String_o *)"/",(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        pSStack_108 = (System_String_array *)0x454e83f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_108 = (System_String_array *)0x454e847;
      pSVar40 = GameManagers_ChatManager__ProcessMentions((System_String_o *)pSVar25,pMVar39);
      pSVar25 = pSStack_100;
      pSStack_108 = pSStack_100;
      pSStack_100 = pSVar13;
      if (g_data_057aef6e == '\0') {
        pSStack_128 = (System_String_o *)0x454bb53;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        pSStack_128 = (System_String_o *)0x454bb5f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        pSStack_128 = (System_String_o *)0x454bb6b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
        pSStack_128 = (System_String_o *)0x454bb77;
        il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
        g_data_057aef6e = '\x01';
      }
      SStack_118._dateData = 0;
      pPVar33 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSStack_128 = (System_String_o *)0x454bbaf;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (pSVar26 != (System_String_array *)0x0) {
        if (pSVar40 != (System_String_o *)0x0) {
          pSStack_128 = (System_String_o *)0x454bbd0;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar40);
          if (lVar27 == 0) goto label_0454bcaf;
        }
        pSVar13 = pSVar26;
        if ((int)pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = pSVar40;
          pSStack_128 = (System_String_o *)0x454bbf7;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
            pSStack_128 = (System_String_o *)0x454bc0f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_128 = (System_String_o *)0x454bc16;
          SStack_118._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
          pSStack_128 = (System_String_o *)0x454bc27;
          iStack_110 = System_DateTime__get_Ticks((System_DateTime_o)&SStack_118,(MethodInfo *)0x0);
          pSStack_128 = (System_String_o *)0x454bc41;
          pSVar25 = (System_String_array *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
          if (pSVar25 != (System_String_array *)0x0) {
            pSStack_128 = (System_String_o *)0x454bc59;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar25);
            if (lVar27 == 0) goto label_0454bcaf;
          }
          if (1 < (uint)pSVar26->max_length) {
            pSVar26->m_Items[1] = (System_String_o *)pSVar25;
            pSStack_128 = (System_String_o *)0x454bc7a;
            il2cpp_runtime_helper_022b4080(pSVar26->m_Items + 1);
            if (pPVar33 != (Photon_Pun_PhotonView_o *)0x0) {
              pSStack_128 = (System_String_o *)0x454bc99;
              Photon_Pun_PhotonView__RPC
                        (pPVar33,"PlayerChatRPC",0,(System_Object_array *)pSVar26,(MethodInfo *)0x0);
              return;
            }
            goto label_0454bcaa;
          }
        }
        pSStack_128 = (System_String_o *)0x454bcaa;
        il2cpp_runtime_helper_022b2ca0();
      }
label_0454bcaa:
      pSVar26 = pSVar13;
      pSStack_128 = (System_String_o *)0x454bcaf;
      il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
      pSStack_128 = (System_String_o *)0x454bcb4;
      pSVar20 = (System_String_o *)il2cpp_runtime_helper_0231b270();
      pSVar22 = (System_String_o *)0x0;
      pSStack_128 = (System_String_o *)0x454bcbe;
      il2cpp_runtime_helper_022b2b10();
      pSVar31 = pSVar22;
      pSStack_148 = pSVar25;
      pSStack_140 = pSVar26;
      SStack_138 = unaff_R13;
      pPStack_130 = pPVar33;
      pSStack_128 = pSVar40;
      if (g_data_057aef70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        g_data_057aef70 = '\x01';
      }
      SStack_160.fields._dateData = (System_DateTime_Fields)0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar7 = iStack_110;
      pIVar41 = TypeInfo_InGameManager;
      if (iStack_110 != 0) {
        pSVar5 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        pIVar41 = (Il2CppClass *)0x0;
        if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar11 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar5,*(int32_t *)(iStack_110 + 0x18),MethodInfo_Boolean_Contains);
          if ((char)bVar11 == '\0') {
            uStack_164 = *(undefined4 *)(iVar7 + 0x18);
            pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_164);
            uStack_168 = *(undefined4 *)(iVar7 + 0x18);
            pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_168);
            ppSVar47 = &"[{0}]";
            pSVar40 = System_String__Format("[{0}]",pIVar21,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar40 = GameManagers_ChatManager__GetColorString(pSVar40,1,0,(MethodInfo *)ppSVar47);
            pSVar40 = System_String__Format_3af78e0
                                ("<link=\"{0}\">{1}</link>",pIVar17,(Il2CppObject *)pSVar40,(MethodInfo *)0x0);
            pSVar40 = System_String__Concat_3af7150(pSVar40," ",pSVar20,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo_37E4C90 *)0x0;
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&SStack_160,(int64_t)pSVar22,1,(MethodInfo *)0x0);
            pPStack_158 = (Photon_Realtime_Player_o *)0x0;
            SStack_150._dateData = 0;
            __this_09.fields.value.fields._dateData = SStack_160.fields._dateData;
            __this_09.fields._0_8_ = &pPStack_158;
            System_Nullable_DateTime____ctor(__this_09,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
            timestamp.fields._0_8_ = (ulong)pPStack_158 & 0xffffffff;
            timestamp.fields.value.fields._dateData =
                 (System_DateTime_Fields)(System_DateTime_Fields)SStack_150._dateData;
            GameManagers_ChatManager__AddLine
                      (pSVar40,0,0,timestamp,*(int32_t *)(iVar7 + 0x18),0,0,-1,0,in_stack_fffffffffffffe88);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar40 = pSVar31;
      if (g_data_057aef71 == '\0') {
        uStack_1a8 = 0x454bf06;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        uStack_1a8 = 0x454bf12;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        uStack_1a8 = 0x454bf1e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        uStack_1a8 = 0x454bf2a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        g_data_057aef71 = '\x01';
      }
      timestamp_00._dateData = 0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        uStack_1a8 = 0x454bf57;
        il2cpp_runtime_helper_02337ed0();
      }
      player_00 = TypeInfo_InGameManager;
      if (pPStack_158 != (Photon_Realtime_Player_o *)0x0) {
        pSVar5 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        player_00 = (Il2CppClass *)0x0;
        if (pSVar5 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          uStack_1a8 = 0x454bf8e;
          bVar11 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar5,(pPStack_158->fields).actorNumber,MethodInfo_Boolean_Contains);
          if ((char)bVar11 == '\0') {
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              uStack_1a8 = 0x454bfaa;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_1a8 = 0x454bfbe;
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&stack0xfffffffffffffe70,(int64_t)pSVar31,1,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              uStack_1a8 = 0x454bfdb;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_1a8 = 0x454bff4;
            GameManagers_ChatManager__AddPlayerLine
                      (pPStack_158,(System_String_o *)pIVar41,0,(System_DateTime_o)timestamp_00._dateData,0,-1
                       ,in_stack_fffffffffffffe60);
          }
          return;
        }
      }
      uStack_1a8 = 0x454c005;
      il2cpp_runtime_helper_022b2c90();
      pPStack_1d0 = pPStack_158;
      pSStack_1c8 = &SStack_160;
      SStack_1c0 = unaff_R13;
      pIStack_1b8 = pIVar41;
      pSStack_1b0 = pSVar31;
      uStack_1a8 = uVar45;
      if (g_data_057aef74 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&": ");
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aef74 = '\x01';
      }
      uStack_1f8 = 0;
      pSStack_1f0 = (System_String_o *)0x0;
      apSStack_1e8[0] = (System_String_o *)0x0;
      if (player_00 == (Il2CppClass *)0x0) {
        return;
      }
      SStack_1d8.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)in_RCX;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar39 = (MethodInfo *)0x0;
      pSVar31 = PhotonExtensions__GetStringProperty
                          ((Photon_Realtime_Player_o *)player_00,
                           (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                           (System_String_o *)"",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar31 = Anticheat_ChatFilter__FilterSizeTag(pSVar31,(MethodInfo *)0x0);
      if (pSVar40 == (System_String_o *)0x0) {
        pSVar40 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        iVar10 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      else {
        iVar10 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      if (iVar10 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar40 = Anticheat_ChatFilter__FilterSizeTag(pSVar40,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar40 = MiscExtensions__ReplaceNamedColorTags(pSVar40,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = GameManagers_ChatManager__GetColorString(pSVar40,color,0,pMVar39);
      uStack_1fc = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_1fc);
      uStack_200 = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_200);
      ppSVar47 = &"[{0}]";
      pSVar40 = System_String__Format("[{0}]",pIVar21,(MethodInfo *)0x0);
      pSVar40 = GameManagers_ChatManager__GetColorString(pSVar40,1,0,(MethodInfo *)ppSVar47);
      pSVar22 = System_String__Format_3af78e0("<link=\"{0}\">{1}</link>",pIVar17,(Il2CppObject *)pSVar40,(MethodInfo *)0x0);
      pSVar40 = TypeInfo_string;
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
      if (pSVar13 != (System_String_array *)0x0) {
        if ((int)pSVar13->max_length != 0) {
          pSVar40 = (System_String_o *)pSVar13->m_Items;
          pSVar13->m_Items[0] = pSVar22;
          il2cpp_runtime_helper_022b4080(pSVar40,pSVar22);
          if (1 < (uint)pSVar13->max_length) {
            pSVar40 = (System_String_o *)(pSVar13->m_Items + 1);
            pSVar13->m_Items[1] = " ";
            il2cpp_runtime_helper_022b4080();
            if (2 < (uint)pSVar13->max_length) {
              pSVar40 = (System_String_o *)(pSVar13->m_Items + 2);
              pSVar13->m_Items[2] = pSVar31;
              il2cpp_runtime_helper_022b4080(pSVar40,pSVar31);
              if (3 < (uint)pSVar13->max_length) {
                pSVar40 = (System_String_o *)(pSVar13->m_Items + 3);
                pSVar13->m_Items[3] = ": ";
                il2cpp_runtime_helper_022b4080();
                if (4 < (uint)pSVar13->max_length) {
                  pSVar13->m_Items[4] = pSVar20;
                  il2cpp_runtime_helper_022b4080(pSVar13->m_Items + 4);
                  pSVar40 = System_String__Concat_3af7570(pSVar13,(MethodInfo *)0x0);
                  iVar9 = *(int32_t *)&(player_00->_1).namespaze;
                  apSStack_1e8[0] = (System_String_o *)0x0;
                  uStack_1f8 = 1;
                  pSStack_1f0 = pSVar31;
                  il2cpp_runtime_helper_022b4080(&pSStack_1f0,pSVar31);
                  apSStack_1e8[0] = pSVar20;
                  il2cpp_runtime_helper_022b4080(apSStack_1e8,pSVar20);
                  playerLineData.fields.SenderName = pSStack_1f0;
                  playerLineData.fields._0_8_ = uStack_1f8;
                  playerLineData.fields.BodyText = apSStack_1e8[0];
                  GameManagers_ChatManager__AddLineInternal
                            (pSVar40,0,0,SStack_1d8,iVar9,0,in_R8D & 0xff,in_R9D,0,playerLineData,
                             in_stack_fffffffffffffde8);
                  return;
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aef72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        g_data_057aef72 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__AddLine
                (pSVar40,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_fffffffffffffda0);
      return;
    }
    if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar25->bounds)->_networkCallback == 1) {
      return;
    }
    pMVar39 = (MethodInfo *)0x1;
    pSStack_108 = (System_String_array *)0x454e7d6;
    pSVar25 = (System_String_array *)System_String__Substring((System_String_o *)pSVar25,1,(MethodInfo *)0x0);
    __this_08 = &TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_108 = (System_String_array *)0x454e7f1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_108 = (System_String_array *)0x454e7f9;
    pSVar26 = pSVar25;
    pSVar23 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)pSVar25,pMVar39);
    if (pSVar23 == (System_String_array *)0x0) goto label_0454e854;
    if (pSVar23->max_length == 0) {
      return;
    }
    pSVar26 = pSVar23;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_108 = (System_String_array *)0x454e81d;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
    }
    pSVar43 = &SStack_e8;
    pSVar25 = pSStack_100;
    __this_08 = (MethodInfo **)SStack_f8;
    plVar49 = (long *)SStack_f0;
  }
  *(ulong *)((long)pSVar43 + -8) = uVar45;
  *(long **)((long)pSVar43 + -0x10) = plVar49;
  *(MethodInfo ***)((long)pSVar43 + -0x18) = __this_08;
  *(System_String_Fields *)((long)pSVar43 + -0x20) = unaff_R13;
  *(System_String_array **)((long)pSVar43 + -0x28) = pSVar13;
  *(System_String_array **)((long)pSVar43 + -0x30) = pSVar25;
  *(System_String_array **)((long)pSVar43 + -0x38) = pSVar26;
  if (g_data_057aef84 == '\0') {
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e887;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e893;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e89f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8f3;
    il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e8ff;
    il2cpp_runtime_helper_023445d0(&"Command ");
    g_data_057aef84 = '\x01';
  }
  *(undefined8 *)((long)pSVar43 + -0x38) = 0;
  userMethod = &TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e926;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15 = unaff_R13;
  if (pSVar23 == (System_String_array *)0x0) goto label_0454ed3e;
  pSVar26 = pSVar25;
  if (*(int *)&pSVar23->max_length == 0) goto label_0454ed43;
  pSVar40 = pSVar23->m_Items[0];
  if (pSVar40 == (System_String_o *)0x0) {
label_0454ed3e:
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed43;
    il2cpp_runtime_helper_022b2c90();
    pSVar26 = pSVar25;
    unaff_R13 = SVar15;
  }
  else {
    pSVar26 = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e95e;
    pSVar40 = System_String__ToLower(pSVar40,(MethodInfo *)0x0);
    pSVar25 = pSVar26;
    if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
    *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e97f;
    bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar26,
                        (Il2CppObject *)pSVar40,(Il2CppObject **)((long)pSVar43 + -0x38),MethodInfo_Boolean_TryGetValue);
    lVar27 = MethodInfo_String_Empty_String;
    if ((char)bVar11 == '\0') {
      if (*(int *)&pSVar23->max_length != 0) {
        pSVar40 = pSVar23->m_Items[0];
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ea69;
        pSVar40 = System_String__Concat_3af7150("Command ",pSVar40," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ea7d;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)pSVar43 + -0x50) = 0;
        *(undefined8 *)((long)pSVar43 + -0x58) = 0xffffffffffffffff;
        *(undefined8 *)((long)pSVar43 + -0x60) = 0;
        *(undefined8 *)((long)pSVar43 + -0x68) = 0;
        *(undefined8 *)((long)pSVar43 + -0x70) = 0x454eaac;
        GameManagers_ChatManager__AddLine
                  (pSVar40,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,
                   *(bool_conflict *)((long)pSVar43 + -0x68),*(bool_conflict *)((long)pSVar43 + -0x60),
                   *(int32_t *)((long)pSVar43 + -0x58),*(bool_conflict *)((long)pSVar43 + -0x50),
                   *(MethodInfo **)((long)pSVar43 + -0x48));
        return;
      }
      goto label_0454ed43;
    }
    pSVar25 = *(System_String_array **)((long)pSVar43 + -0x38);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454ed3e;
    pIVar41 = (pSVar25->obj).klass;
    bVar2 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
    if (((pIVar41->_2).naturalAligment < bVar2) ||
       ((pIVar41->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CLCommandAttribute)) {
      __this_08 = *(MethodInfo ***)(pSVar25->m_Items + 1);
      if ((System_String_Fields)__this_08 == (System_String_Fields)0x0) goto label_0454ed3e;
      *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e9d9;
      bVar11 = System_Reflection_MethodBase__get_IsStatic
                         ((System_Reflection_MethodBase_o *)__this_08,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eac6;
          il2cpp_runtime_helper_02337ed0();
        }
        userMethod = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eae8;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar41 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eb03;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar41);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eb29;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items,pSVar23);
          goto label_0454eb2f;
        }
      }
      else {
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454e9f5;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar41 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ea10;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar41);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ea36;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          userMethod = (MethodInfo **)0x0;
label_0454eb2f:
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eb39;
          System_Reflection_MethodBase__Invoke
                    ((System_Reflection_MethodBase_o *)__this_08,(Il2CppObject *)userMethod,
                     (System_Object_array *)pSVar26,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)&pSVar23->max_length < 2) {
        if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ecf5;
          il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
          lVar28 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
          if (*(int *)(lVar28 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed24;
          il2cpp_runtime_helper_02337ed0();
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar2 = *(byte *)(lVar27 + 0x135);
        }
        else {
          lVar28 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed0f;
          lVar28 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar28 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar2 = *(byte *)(lVar27 + 0x135);
        }
        if ((bVar2 & 1) == 0) {
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ebdd;
          lVar27 = il2cpp_runtime_helper_023009c0(lVar27);
        }
        pSVar13 = (System_String_array *)**(undefined8 **)(lVar27 + 0xb8);
        iVar10 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eb65;
        pSVar29 = System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar23,1,MethodInfo_IEnumerable_1_System_String_Skip_String);
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eb77;
        pSVar13 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(pSVar29,MethodInfo_String_ToArray_String);
        iVar10 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar10 == 0) {
        *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ebff;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_08 = *(MethodInfo ***)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((System_String_Fields)__this_08 == (System_String_Fields)0x0) {
        return;
      }
      userMethod = (MethodInfo **)pSVar25->m_Items[5];
      *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ec2e;
      SVar15 = (System_String_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pSVar26 = pSVar25;
      if (*(int *)&pSVar23->max_length != 0) {
        if (SVar15 == (System_String_Fields)0x0) goto label_0454ed3e;
        pSVar26 = (System_String_array *)pSVar23->m_Items[0];
        if (pSVar26 != (System_String_array *)0x0) {
          uVar18 = *(undefined8 *)(*(long *)SVar15 + 0x40);
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ec5d;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar18);
          if (lVar27 == 0) goto label_0454ed48;
        }
        unaff_R13 = SVar15;
        if (*(int *)((long)SVar15 + 0x18) != 0) {
          *(System_String_array **)((long)SVar15 + 0x20) = pSVar26;
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ec81;
          il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar15 + 0x20),pSVar26);
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ec90;
          pSVar26 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
          *(undefined8 *)((long)pSVar43 + -0x40) = 0x454eca0;
          CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                    ((CustomLogic_CustomLogicListBuiltin_o *)pSVar26,(System_Object_array *)pSVar13,
                     (MethodInfo *)0x0);
          if (pSVar26 != (System_String_array *)0x0) {
            uVar18 = *(undefined8 *)(*(long *)SVar15 + 0x40);
            *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ecb5;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar18);
            if (lVar27 == 0) goto label_0454ed48;
          }
          if (1 < *(uint *)((long)SVar15 + 0x18)) {
            *(System_String_array **)((long)SVar15 + 0x28) = pSVar26;
            *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ecd8;
            il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar15 + 0x28),pSVar26);
            *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ece8;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                      ((CustomLogic_CustomLogicEvaluator_o *)__this_08,(CustomLogic_UserMethod_o *)userMethod,
                       (System_Object_array *)SVar15,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0454ed43:
  *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed48;
  il2cpp_runtime_helper_022b2ca0();
  SVar15 = unaff_R13;
label_0454ed48:
  *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed4d;
  pSVar40 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)pSVar43 + -0x40) = 0x454ed57;
  uVar18 = il2cpp_runtime_helper_022b2b10(pSVar40,0);
  *(System_String_array **)((long)pSVar43 + -0x40) = pSVar23;
  *(MethodInfo ***)((long)pSVar43 + -0x48) = userMethod;
  *(MethodInfo ***)((long)pSVar43 + -0x50) = __this_08;
  *(System_String_Fields *)((long)pSVar43 + -0x58) = SVar15;
  *(System_String_array **)((long)pSVar43 + -0x60) = pSVar13;
  *(System_String_array **)((long)pSVar43 + -0x68) = pSVar26;
  *(undefined8 *)((long)pSVar43 + -0x70) = uVar18;
  if (g_data_057aef82 == '\0') {
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ed87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ed93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ed9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edc3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edcf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ede7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454edff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ee0b;
    il2cpp_runtime_helper_023445d0(&"@");
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ee17;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef82 = '\x01';
  }
  if (pSVar40 != (System_String_o *)0x0) {
    *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ee36;
    iVar9 = System_String__IndexOf(pSVar40,0x40,(MethodInfo *)0x0);
    if (iVar9 == -1) {
      return;
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ee5b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
      *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ee7d;
      System_Text_StringBuilder__Clear(pSVar30,(MethodInfo *)0x0);
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
        *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eea2;
        System_Text_StringBuilder__Append_3b03f90(pSVar30,pSVar40,(MethodInfo *)0x0);
label_0454eeda:
        do {
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eee3;
          __this_05 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eef0;
          GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_05,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ef02;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar49 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar49 == (long *)0x0) goto label_0454f2d9;
          uVar18 = *(undefined8 *)(*plVar49 + 0x170);
          pcVar3 = *(code **)(*plVar49 + 0x168);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ef2d;
          pSVar40 = (System_String_o *)(*pcVar3)(plVar49,uVar18);
          if (pSVar40 == (System_String_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ef48;
          iVar10 = System_String__IndexOf_3afbe50(pSVar40,0x20,iVar9,(MethodInfo *)0x0);
          if (iVar10 == -1) {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              *(undefined8 *)((long)pSVar43 + -0x78) = 0x454ef92;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454efb4;
            iVar10 = System_Text_StringBuilder__get_Length(pSVar30,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          else {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454efc8;
            il2cpp_runtime_helper_02337ed0();
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eff7;
          pSVar40 = System_Text_StringBuilder__ToString_3b032f0
                              (pSVar30,iVar9 + 1,(iVar10 - iVar9) + -1,(MethodInfo *)0x0);
          if (__this_05 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
          (__this_05->fields).mention = pSVar40;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f013;
          il2cpp_runtime_helper_022b4080(&__this_05->fields);
          pSVar40 = (__this_05->fields).mention;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f01e;
          bVar11 = System_String__IsNullOrWhiteSpace(pSVar40,(MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            iVar10 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
            if (iVar10 == 0) {
              *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f034;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar49 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (plVar49 == (long *)0x0) goto label_0454f2d9;
            uVar18 = *(undefined8 *)(*plVar49 + 0x170);
            pcVar3 = *(code **)(*plVar49 + 0x168);
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f05f;
            pSVar40 = (System_String_o *)(*pcVar3)(plVar49,uVar18);
            if (pSVar40 == (System_String_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f07a;
            iVar9 = System_String__IndexOf_3afbe50(pSVar40,0x40,iVar9 + 1,(MethodInfo *)0x0);
            if (iVar9 == -1) break;
            goto label_0454eeda;
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f0a8;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f0af;
          source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f0c1;
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f0db;
          System_Func_object__bool____ctor();
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f0f0;
          pSVar29 = System_Linq_Enumerable__Where_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                               MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f102;
          __this_06 = System_Linq_Enumerable__ToList_object_(pSVar29,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
          if (__this_06 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
          if ((__this_06->fields)._size != 1) {
            iVar10 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
            goto joined_r0x0454f02d;
          }
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f130;
          player = (Photon_Realtime_Player_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_06,0,MethodInfo_Player_get_Item);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f14e;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar40 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f16f;
          pSVar40 = PhotonExtensions__GetStringProperty
                              (player,pSVar40,(System_String_o *)"",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f18a;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f194;
          pSVar40 = Anticheat_ChatFilter__FilterSizeTag(pSVar40,(MethodInfo *)0x0);
          ppSVar47 = &"@";
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f1a8;
          pSVar40 = System_String__Concat_3ae5ba0("@",pSVar40,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f1bd;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f1cc;
          pSVar40 = GameManagers_ChatManager__GetColorString(pSVar40,2,0,(MethodInfo *)ppSVar47);
          pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f1f6;
          pSVar30 = System_Text_StringBuilder__Remove(pSVar30,iVar9,iVar10 - iVar9,(MethodInfo *)0x0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f20f;
          System_Text_StringBuilder__Insert(pSVar30,iVar9,pSVar40,(MethodInfo *)0x0);
          plVar49 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar49 == (long *)0x0) goto label_0454f2d9;
          uVar18 = *(undefined8 *)(*plVar49 + 0x170);
          pcVar3 = *(code **)(*plVar49 + 0x168);
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f23a;
          pSVar31 = (System_String_o *)(*pcVar3)(plVar49,uVar18);
          if ((pSVar40 == (System_String_o *)0x0) || (pSVar31 == (System_String_o *)0x0)) goto label_0454f2d9;
          iVar10 = (pSVar40->fields)._stringLength;
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454eec6;
          iVar9 = System_String__IndexOf_3afbe50(pSVar31,0x40,iVar9 + iVar10,(MethodInfo *)0x0);
        } while (iVar9 != -1);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f28f;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar49 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
        if (plVar49 != (long *)0x0) {
          (**(code **)(*plVar49 + 0x168))(plVar49,*(undefined8 *)(*plVar49 + 0x170));
          return;
        }
      }
    }
  }
label_0454f2d9:
  *(undefined8 *)((long)pSVar43 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameManagers.PhotonVoiceSync$$Apply
// il2cpp: void GameManagers_PhotonVoiceSync__Apply (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x456edb0

void GameManagers_PhotonVoiceSync__Apply(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  byte bVar1;
  code *pcVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  UnityEngine_AudioSource_o *__this_00;
  Settings_KeybindSetting_o *__this_01;
  undefined8 uVar5;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  Photon_Voice_DeviceInfo_o __this_02;
  Photon_Voice_DeviceInfo_o value;
  int64_t iVar6;
  char cVar7;
  int32_t iVar8;
  int iVar9;
  bool_conflict bVar10;
  uint uVar11;
  System_Collections_Generic_List_object__o *__this_03;
  Settings_StringSetting_o *__this_04;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  System_String_array *pSVar12;
  System_String_Fields str1;
  UnityEngine_GameObject_o *pUVar13;
  System_String_Fields SVar14;
  System_String_Fields SVar15;
  Il2CppObject *pIVar16;
  undefined8 uVar17;
  System_Collections_Generic_Dictionary_int__object__o *pSVar18;
  System_String_o *pSVar19;
  Il2CppObject *pIVar20;
  System_String_o *pSVar21;
  System_String_Fields SVar22;
  undefined4 extraout_var;
  System_String_array *pSVar23;
  char *pcVar24;
  System_String_array *pSVar25;
  System_String_array *pSVar26;
  long lVar27;
  long lVar28;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_06;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar29;
  System_Collections_Generic_List_TSource__o *__this_07;
  Photon_Realtime_Player_o *player;
  System_Text_StringBuilder_o *pSVar30;
  System_String_o *pSVar31;
  System_String_o *pSVar32;
  UnityEngine_Transform_o *pUVar33;
  Photon_Pun_PhotonView_o *pPVar34;
  MethodInfo_37E4C90 *method_00;
  Il2CppClass *in_RCX;
  int32_t color;
  long *unaff_RBX;
  System_String_array **ppSVar35;
  System_String_Fields *pSVar36;
  long *unaff_RBP;
  System_String_Fields SVar37;
  MethodInfo *pMVar38;
  Photon_Voice_DeviceFeatures_o *features;
  ulong uVar39;
  Il2CppClass **__this_08;
  long *plVar40;
  System_String_o **ppSVar41;
  Il2CppClass *pIVar42;
  Il2CppClass *player_00;
  Il2CppClass **ppIVar43;
  Photon_Voice_Unity_Recorder_o *pPVar44;
  uint in_R8D;
  int32_t in_R9D;
  long *unaff_R12;
  System_String_Fields unaff_R13;
  MethodInfo **__this_09;
  MethodInfo **userMethod;
  long *unaff_R15;
  float fVar45;
  UnityEngine_Color_o UVar48;
  UnityEngine_Vector3_o UVar49;
  System_Nullable_DateTime__o __this_10;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_fffffffffffffdb8;
  MethodInfo *in_stack_fffffffffffffe00;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  System_String_o *pSStack_1d8;
  System_String_o *apSStack_1d0 [2];
  System_DateTime_o SStack_1c0;
  Photon_Realtime_Player_o *pPStack_1b8;
  System_DateTime_o *pSStack_1b0;
  System_String_Fields SStack_1a8;
  Il2CppClass *pIStack_1a0;
  System_String_o *pSStack_198;
  ulong uStack_190;
  MethodInfo *in_stack_fffffffffffffe78;
  System_DateTime_Fields timestamp_00;
  MethodInfo *in_stack_fffffffffffffea0;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  System_DateTime_o SStack_148;
  Photon_Realtime_Player_o *pPStack_140;
  System_DateTime_Fields SStack_138;
  System_String_array *pSStack_130;
  System_String_array *pSStack_128;
  System_String_Fields SStack_120;
  Photon_Pun_PhotonView_o *pPStack_118;
  System_String_o *pSStack_110;
  System_DateTime_Fields SStack_100;
  int64_t iStack_f8;
  System_String_array *pSStack_f0;
  System_String_array *pSStack_e8;
  System_String_Fields SStack_e0;
  System_String_Fields SStack_d8;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  System_String_Fields SStack_c0;
  UnityEngine_Transform_o *pUStack_b8;
  undefined8 uStack_b0;
  System_String_Fields SStack_a8;
  long *plStack_a0;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  float fVar46;
  float fVar47;
  
  ppIVar43 = (Il2CppClass **)__this;
  if (g_data_057af04e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Common");
    ppIVar43 = &"";
    il2cpp_runtime_helper_023445d0();
    g_data_057af04e = '\x01';
  }
  pPVar34 = (__this->fields).PhotonView;
  if (pPVar34 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar34->fields)._IsMine_k__BackingField == '\0') {
label_0456f027:
      unaff_RBX = &TypeInfo_SettingsManager;
      lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0)) &&
         (in_RCX = *(Il2CppClass **)(lVar27 + 0x108), in_RCX != (Il2CppClass *)0x0)) {
        SVar14 = (System_String_Fields)(__this->fields).AudioSource;
        ppIVar43 = (Il2CppClass **)SVar14;
        if (*(int *)((long)&(in_RCX->_1).name + 4) == 1) {
          if ((*(long *)(lVar27 + 0x118) != 0) && (SVar14 != (System_String_Fields)0x0)) {
            UnityEngine_AudioSource__set_maxDistance
                      ((UnityEngine_AudioSource_o *)SVar14,*(float *)(*(long *)(lVar27 + 0x118) + 0x14),
                       (MethodInfo *)0x0);
            lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
            ppIVar43 = (Il2CppClass **)SVar14;
            if ((lVar27 != 0) &&
               ((lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0 &&
                (lVar27 = *(long *)(lVar27 + 0x110), lVar27 != 0)))) {
              __this_00 = (__this->fields).AudioSource;
              ppIVar43._0_4_ = 0;
              ppIVar43._4_2_ = 0;
              ppIVar43._6_2_ = 0;
              if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
                UnityEngine_AudioSource__set_minDistance
                          (__this_00,*(float *)(lVar27 + 0x14),(MethodInfo *)0x0);
                SVar14 = (System_String_Fields)(__this->fields).AudioSource;
                ppIVar43 = (Il2CppClass **)TypeInfo_VoiceChatManager;
                if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                unaff_RBX._0_4_ = 0;
                unaff_RBX._4_2_ = 0;
                unaff_RBX._6_2_ = 0;
                if (SVar14 != (System_String_Fields)0x0) {
                  fVar45 = *(float *)(*(long *)((long)TypeInfo_VoiceChatManager + 0xb8) + 0x10);
                  goto label_0456f10f;
                }
              }
            }
          }
        }
        else if (SVar14 != (System_String_Fields)0x0) {
          fVar45 = 0.0;
label_0456f10f:
          UnityEngine_AudioSource__set_spatialBlend
                    ((UnityEngine_AudioSource_o *)SVar14,fVar45,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      ppIVar43 = (Il2CppClass **)(__this->fields).Recorder;
      if ((System_String_Fields)ppIVar43 != (System_String_Fields)0x0) {
        Photon_Voice_Unity_Recorder__set_TransmitEnabled
                  ((Photon_Voice_Unity_Recorder_o *)ppIVar43,0,(MethodInfo *)0x0);
        unaff_R12 = &TypeInfo_SettingsManager;
        lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xb0), lVar27 != 0)) {
          pPVar44 = (__this->fields).Recorder;
          ppIVar43._0_4_ = 0;
          ppIVar43._4_2_ = 0;
          ppIVar43._6_2_ = 0;
          if (pPVar44 != (Photon_Voice_Unity_Recorder_o *)0x0) {
            Photon_Voice_Unity_Recorder__set_VoiceDetection
                      (pPVar44,(uint)(*(int *)(lVar27 + 0x14) == 1),(MethodInfo *)0x0);
            ppIVar43 = (Il2CppClass **)(__this->fields).Recorder;
            if ((System_String_Fields)ppIVar43 != (System_String_Fields)0x0) {
              Photon_Voice_Unity_Recorder__set_MicrophoneType
                        ((Photon_Voice_Unity_Recorder_o *)ppIVar43,0,(MethodInfo *)0x0);
              lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
              if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xa8), lVar27 != 0)) {
                unaff_RBX = *(long **)(lVar27 + 0x18);
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                in_R9D = 0;
                in_RCX = "";
                pIVar42 = "";
                pSVar32 = UI_UIManager__GetLocale
                                    ("Common","None",(System_String_o *)"",
                                     (System_String_o *)"",(System_String_o *)"",
                                     (MethodInfo *)0x0);
                in_R8D = (uint)pIVar42;
                ppIVar43 = (Il2CppClass **)unaff_RBX;
                bVar10 = System_String__op_Inequality((System_String_o *)unaff_RBX,pSVar32,(MethodInfo *)0x0);
                unaff_R15 = (long *)(__this->fields).Recorder;
                if ((char)bVar10 == '\0') {
                  features = (Photon_Voice_DeviceFeatures_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                else {
                  lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
                  if ((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0xa8), lVar27 == 0)) goto label_0456f122;
                  features = *(Photon_Voice_DeviceFeatures_o **)(lVar27 + 0x18);
                }
                unaff_RBX = &local_48;
                local_38 = 0;
                uStack_30 = 0;
                local_48 = 0;
                uStack_40 = 0;
                local_28 = 0;
                in_RCX = (Il2CppClass *)0x0;
                __this_02.fields._IDString_k__BackingField = (System_String_o *)in_stack_ffffffffffffff90;
                __this_02.fields._IsDefault_k__BackingField = (int)in_stack_ffffffffffffff88;
                __this_02.fields._IDInt_k__BackingField = (int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
                __this_02.fields._Name_k__BackingField = (System_String_o *)in_stack_ffffffffffffff98;
                __this_02.fields.features = (Photon_Voice_DeviceFeatures_o *)in_stack_ffffffffffffffa0;
                __this_02.fields._32_8_ = in_stack_ffffffffffffffa8;
                ppIVar43 = (Il2CppClass **)unaff_RBX;
                Photon_Voice_DeviceInfo___ctor_3f19490
                          (__this_02,(System_String_o *)unaff_RBX,features,(MethodInfo *)0x0);
                if ((System_String_Fields)unaff_R15 != (System_String_Fields)0x0) {
                  value.fields._IDString_k__BackingField = (System_String_o *)uStack_40;
                  value.fields._IsDefault_k__BackingField = (undefined4)local_48;
                  value.fields._IDInt_k__BackingField = local_48._4_4_;
                  value.fields._Name_k__BackingField = (System_String_o *)local_38;
                  value.fields.features = (Photon_Voice_DeviceFeatures_o *)uStack_30;
                  value.fields._32_8_ = local_28;
                  Photon_Voice_Unity_Recorder__set_MicrophoneDevice
                            ((Photon_Voice_Unity_Recorder_o *)unaff_R15,value,(MethodInfo *)0x0);
                  unaff_RBX = (long *)(__this->fields).MicAmplifier;
                  if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ppIVar43._0_4_ = 0;
                  ppIVar43._4_2_ = 0;
                  ppIVar43._6_2_ = 0;
                  fVar45 = ApplicationManagers_VoiceChatManager__GetInputVolume((MethodInfo *)0x0);
                  if ((System_String_Fields)unaff_RBX != (System_String_Fields)0x0) {
                    Photon_Voice_Unity_UtilityScripts_MicAmplifier__set_AmplificationFactor
                              ((Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)unaff_RBX,fVar45,
                               (MethodInfo *)0x0);
                    ppIVar43 = (Il2CppClass **)unaff_RBX;
                    goto label_0456f027;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0456f122:
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  plStack_a0 = unaff_R12;
  SStack_a8 = (System_String_Fields)unaff_RBX;
  ppSVar35 = (System_String_array **)&uStack_b0;
  if (g_data_057af04f == '\0') {
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f153;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f15f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f16b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f177;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f183;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f18f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f19b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f1a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057af04f = '\x01';
  }
  pSVar12 = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar12 == (System_String_array *)0x0) {
label_0456f1fb:
    unaff_R15 = &TypeInfo_SettingsManager;
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((lVar27 != 0) &&
       (((lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0 && (lVar27 = *(long *)(lVar27 + 0x108), lVar27 != 0))
        && (unaff_RBX = *(long **)((long)ppIVar43 + 0x28),
           (System_String_Fields)unaff_RBX != (System_String_Fields)0x0)))) {
      uVar11 = *(uint *)(lVar27 + 0x14);
      unaff_R13._4_4_ = 0;
      unaff_R13._stringLength = uVar11;
      if (*(char *)((long)unaff_RBX + 0x68) == '\0') {
        SVar14 = *(System_String_Fields *)((long)ppIVar43 + 0x48);
        ppIVar43 = (Il2CppClass **)SVar14;
        if (uVar11 == 2) {
          if (SVar14 != (System_String_Fields)0x0) {
            fVar45 = 0.0;
            goto label_0456f4c8;
          }
        }
        else {
          if (*(int *)((long)TypeInfo_VoiceChatManager + 0xe4) == 0) {
            pUStack_b8 = (UnityEngine_Transform_o *)0x456f3fc;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_b8 = (UnityEngine_Transform_o *)0x456f406;
          fVar45 = ApplicationManagers_VoiceChatManager__GetOuputVolume
                             ((Photon_Pun_PhotonView_o *)unaff_RBX,(MethodInfo *)0x0);
          if (SVar14 != (System_String_Fields)0x0) goto label_0456f4c8;
        }
      }
      else if (pSVar12 != (System_String_array *)0x0) {
        unaff_RBX = *(long **)(pSVar12->m_Items + 10);
        unaff_RBP = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_b8 = (UnityEngine_Transform_o *)0x456f278;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_b8 = (UnityEngine_Transform_o *)0x456f284;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
label_0456f30d:
          unaff_R15 = &TypeInfo_SettingsManager;
          unaff_RBX = *(long **)(pSVar12->m_Items + 10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_b8 = (UnityEngine_Transform_o *)0x456f324;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBP = (long *)0x0;
          pUStack_b8 = (UnityEngine_Transform_o *)0x456f332;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') {
            if (pSVar12->m_Items[10] == (System_String_o *)0x0) goto label_0456f4dd;
            unaff_RBP = (long *)(ulong)(*(byte *)&pSVar12->m_Items[10][4].monitor ^ 1);
          }
          if ((uVar11 == 2) || ((uVar11 == 1 && ((int)unaff_RBP == 0)))) {
label_0456f4a5:
            pPVar44 = *(Photon_Voice_Unity_Recorder_o **)((long)ppIVar43 + 0x38);
            if (pPVar44 != (Photon_Voice_Unity_Recorder_o *)0x0) {
              bVar10 = 0;
label_0456f4b0:
              pUStack_b8 = (UnityEngine_Transform_o *)0x456f4b7;
              Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar44,bVar10,(MethodInfo *)0x0);
label_0456f4b7:
              SVar14 = *(System_String_Fields *)((long)ppIVar43 + 0x48);
              if (SVar14 != (System_String_Fields)0x0) {
                fVar45 = 1.0;
label_0456f4c8:
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)SVar14,fVar45,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xb0), lVar27 != 0)) {
              iVar9 = *(int *)(lVar27 + 0x14);
              if (iVar9 != 1) {
                if (iVar9 == 0) {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pUStack_b8 = (UnityEngine_Transform_o *)0x456f455;
                    il2cpp_runtime_helper_02337ed0();
                    pUStack_b8 = (UnityEngine_Transform_o *)0x456f45c;
                    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar7 = (char)bVar10;
                  }
                  else {
                    pUStack_b8 = (UnityEngine_Transform_o *)0x456f3bf;
                    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar7 = (char)bVar10;
                  }
                  if (cVar7 == '\0') {
                    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0)) ||
                       (__this_01 = *(Settings_KeybindSetting_o **)(lVar27 + 0x90),
                       __this_01 == (Settings_KeybindSetting_o *)0x0)) goto label_0456f4dd;
                    pUStack_b8 = (UnityEngine_Transform_o *)0x456f491;
                    bVar10 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') goto label_0456f495;
                  }
                  goto label_0456f4a5;
                }
                goto label_0456f4b7;
              }
label_0456f495:
              pPVar44 = *(Photon_Voice_Unity_Recorder_o **)((long)ppIVar43 + 0x38);
              if (pPVar44 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                bVar10 = 1;
                goto label_0456f4b0;
              }
            }
          }
        }
        else if ((System_String_Fields)unaff_RBX != (System_String_Fields)0x0) {
          in_RCX = (Il2CppClass *)*unaff_RBX;
          if (((in_RCX->_2).naturalAligment < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
             (in_RCX = (Il2CppClass *)(in_RCX->_2).typeHierarchy,
             *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8 + -8) != TypeInfo_BaseTitan)) {
            unaff_RBP = &TypeInfo_SettingsManager;
            unaff_R15 = *(long **)((long)ppIVar43 + 0x58);
            pUStack_b8 = (UnityEngine_Transform_o *)0x456f2dd;
            pUVar33 = (UnityEngine_Transform_o *)(**(code **)(*unaff_RBX + 0x568))(unaff_RBX);
            if (pUVar33 != (UnityEngine_Transform_o *)0x0) {
              pUStack_b8 = (UnityEngine_Transform_o *)0x456f2f0;
              UVar49 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
              fVar47 = UVar49.fields.z;
              fVar45 = UVar49.fields.x;
              fVar46 = UVar49.fields.y;
              if ((System_String_Fields)unaff_R15 != (System_String_Fields)0x0) goto label_0456f2f9;
            }
          }
          else if ((*(long *)((long)unaff_RBX + 0xf8) != 0) &&
                  (pUVar33 = *(UnityEngine_Transform_o **)(*(long *)((long)unaff_RBX + 0xf8) + 0x38),
                  pUVar33 != (UnityEngine_Transform_o *)0x0)) {
            unaff_RBP = &TypeInfo_SettingsManager;
            unaff_R15 = *(long **)((long)ppIVar43 + 0x58);
            pUStack_b8 = (UnityEngine_Transform_o *)0x456f442;
            UVar49 = UnityEngine_Transform__get_position(pUVar33,(MethodInfo *)0x0);
            fVar47 = UVar49.fields.z;
            fVar45 = UVar49.fields.x;
            fVar46 = UVar49.fields.y;
            if ((System_String_Fields)unaff_R15 != (System_String_Fields)0x0) {
label_0456f2f9:
              pUStack_b8 = (UnityEngine_Transform_o *)0x456f303;
              UVar49.fields.y = fVar46;
              UVar49.fields.x = fVar45;
              UVar49.fields.z = fVar47;
              UnityEngine_Transform__set_position
                        ((UnityEngine_Transform_o *)unaff_R15,UVar49,(MethodInfo *)0x0);
              goto label_0456f30d;
            }
            unaff_R15._0_4_ = 0;
            unaff_R15._4_2_ = 0;
            unaff_R15._6_2_ = 0;
          }
        }
      }
    }
label_0456f4dd:
    pUStack_b8 = (UnityEngine_Transform_o *)0x456f4e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar42 = (pSVar12->obj).klass;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pIVar42->_2).naturalAligment) &&
       ((pIVar42->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameManager))
    goto label_0456f1fb;
  }
  pUStack_b8 = (UnityEngine_Transform_o *)0x456f4ea;
  pSVar25 = pSVar12;
  il2cpp_runtime_helper_022b2fd0();
  SStack_c8 = (System_String_Fields)unaff_RBX;
  SStack_c0 = (System_String_Fields)ppIVar43;
  pUStack_b8 = (UnityEngine_Transform_o *)unaff_RBP;
  if (g_data_057af050 == '\0') {
    SStack_d0._stringLength = 0x456f599;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af050 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0456f5b7;
label_0456f51b:
    pSVar26 = (System_String_array *)0x0;
    SStack_d0._stringLength = 0x456f522;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar7 = (char)bVar10;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0456f51b;
label_0456f5b7:
    SStack_d0._stringLength = 0x456f5bc;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar26 = (System_String_array *)0x0;
    SStack_d0._stringLength = 0x456f5c3;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar7 = (char)bVar10;
  }
  if (cVar7 == '\0') {
    return;
  }
  if (pSVar25->m_Items[1] == (System_String_o *)0x0) goto label_0456f61b;
  if (*(char *)&pSVar25->m_Items[1][4].monitor == '\0') {
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SStack_d0._stringLength = 0x456f5e0;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    uVar11 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    SStack_d0._stringLength = 0x456f5ec;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    pPVar34 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    pSVar26 = pSVar25;
    if (pPVar34 == (Photon_Pun_PhotonView_o *)0x0) goto label_0456f61b;
    SVar14 = (System_String_Fields)(pPVar34->fields)._Owner_k__BackingField;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_d0._stringLength = 0x456f609;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    SStack_d0._stringLength = 0x456f54b;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    pSVar26 = pSVar25;
    pPVar34 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    if (pPVar34 == (Photon_Pun_PhotonView_o *)0x0) {
label_0456f61b:
      SStack_d0 = (System_String_Fields)GameManagers_PhotonVoiceSync___ctor;
      il2cpp_runtime_helper_022b2c90();
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar26,(MethodInfo *)0x0);
      return;
    }
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SVar14 = (System_String_Fields)(pPVar34->fields)._Owner_k__BackingField;
    SStack_d0._stringLength = 0x456f56f;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    uVar11 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_d0._stringLength = 0x456f582;
      SStack_d0._firstChar = 0;
      SStack_d0._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  uVar39 = (ulong)(uVar11 & 0xff);
  if (g_data_057aef7f == '\0') {
    SStack_d0._stringLength = 0x454e5c2;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,uVar39,0);
    SStack_d0._stringLength = 0x454e5ce;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aef7f = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
    SStack_d0._stringLength = 0x454e552;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar7 = (char)bVar10;
    pMVar38 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
    SStack_d0._stringLength = 0x454e5f1;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    pMVar38 = TypeInfo_ChatManager;
    il2cpp_runtime_helper_02337ed0();
    SStack_d0._stringLength = 0x454e5f6;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar38);
    cVar7 = (char)bVar10;
    pMVar38 = TypeInfo_ChatManager;
  }
  if (cVar7 == '\0') {
    TypeInfo_ChatManager = pMVar38;
    return;
  }
  TypeInfo_ChatManager = pMVar38;
  if (*(int *)((long)&pMVar38[2].parameters + 4) == 0) {
    SStack_d0._stringLength = 0x454e56b;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_d0._stringLength = 0x454e570;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  SVar22 = (System_String_Fields)GameManagers_ChatManager__GetVoiceChatPanel(pMVar38);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    SStack_d0._stringLength = 0x454e58b;
    SStack_d0._firstChar = 0;
    SStack_d0._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_d0._stringLength = 0x454e597;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)SVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar33 = pUStack_b8;
  SVar15 = SStack_c8;
  if ((char)bVar10 != '\0') {
    return;
  }
  if (SVar22 != (System_String_Fields)0x0) {
    __this_08 = (Il2CppClass **)SVar22;
    SVar37 = SStack_c0;
    if ((char)uVar11 != '\0') {
      SStack_c8 = SStack_c0;
      SStack_e0 = SVar15;
      ppSVar35 = &pSStack_e8;
      SVar37 = SVar14;
      pSStack_e8 = (System_String_array *)CONCAT44(extraout_var,bVar10);
      SStack_d8 = (System_String_Fields)pSVar12;
      SStack_d0 = unaff_R13;
      SStack_c0 = (System_String_Fields)unaff_R15;
      if (g_data_057ae502 == '\0') {
        pSStack_f0 = (System_String_array *)0x43eda96;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,SVar14,0);
        pSStack_f0 = (System_String_array *)0x43edaa2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pSStack_f0 = (System_String_array *)0x43edaae;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pSStack_f0 = (System_String_array *)0x43edaba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        pSStack_f0 = (System_String_array *)0x43edac6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        pSStack_f0 = (System_String_array *)0x43edad2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pSStack_f0 = (System_String_array *)0x43edade;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        __this_08 = &"";
        pSStack_f0 = (System_String_array *)0x43edaea;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae502 = '\x01';
      }
      if ((SVar14 != (System_String_Fields)0x0) &&
         (__this_08 = *(Il2CppClass ***)((long)SVar22 + 0x70),
         (System_String_Fields)__this_08 != (System_String_Fields)0x0)) {
        SVar37._4_4_ = 0;
        SVar37._stringLength = *(uint *)((long)SVar14 + 0x18);
        pSStack_f0 = (System_String_array *)0x43edb1a;
        bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)__this_08,
                            *(uint *)((long)SVar14 + 0x18),MethodInfo_Boolean_ContainsKey);
        if ((char)bVar10 != '\0') {
          return;
        }
        lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
          uVar11 = *(uint *)(lVar27 + 0x14);
          pUVar33 = (UnityEngine_Transform_o *)(ulong)uVar11;
          pSStack_f0 = (System_String_array *)0x43edb71;
          pSVar32 = (System_String_o *)
                    (**(code **)(*(long *)SVar22 + 0x178))(SVar22,*(undefined8 *)(*(long *)SVar22 + 0x180));
          pSStack_f0 = (System_String_array *)0x43edb83;
          unaff_R15 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          pSStack_f0 = (System_String_array *)0x43edba5;
          UI_ElementStyle___ctor((UI_ElementStyle_o *)unaff_R15,uVar11,120.0,20.0,pSVar32,(MethodInfo *)0x0);
          iVar8 = *(int32_t *)((long)SVar14 + 0x18);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            pSStack_f0 = (System_String_array *)0x43edbc1;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_f0 = (System_String_array *)0x43edbce;
          pSVar12 = (System_String_array *)GameManagers_ChatManager__GetIDString(iVar8,0,0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            pSStack_f0 = (System_String_array *)0x43edbe9;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar37 = **(System_String_Fields **)(TypeInfo_PlayerProperty + 0xb8);
          pSStack_f0 = (System_String_array *)0x43edc0a;
          str1 = (System_String_Fields)
                 PhotonExtensions__GetStringProperty
                           ((Photon_Realtime_Player_o *)SVar14,(System_String_o *)SVar37,
                            (System_String_o *)"",(MethodInfo *)0x0);
          __this_08._0_4_ = 0;
          __this_08._4_2_ = 0;
          __this_08._6_2_ = 0;
          SVar15 = (System_String_Fields)&TypeInfo_PlayerProperty;
          if (*(UnityEngine_GameObject_o **)((long)SVar22 + 0x68) != (UnityEngine_GameObject_o *)0x0) {
            pSStack_f0 = (System_String_array *)0x43edc1d;
            pUVar33 = UnityEngine_GameObject__get_transform
                                (*(UnityEngine_GameObject_o **)((long)SVar22 + 0x68),(MethodInfo *)0x0);
            pSStack_f0 = (System_String_array *)0x43edc2d;
            pSVar32 = System_String__Concat_3ae5ba0
                                ((System_String_o *)pSVar12,(System_String_o *)str1,(MethodInfo *)0x0);
            pSStack_f0 = (System_String_array *)0x43edc46;
            SVar37 = (System_String_Fields)unaff_R15;
            pUVar13 = UI_ElementFactory__CreateWhiteLabel
                                (pUVar33,(UI_ElementStyle_o *)unaff_R15,pSVar32,0,3,(MethodInfo *)0x0);
            __this_08._0_4_ = 0;
            __this_08._4_2_ = 0;
            __this_08._6_2_ = 0;
            SVar15 = str1;
            if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar22 + 0x70) !=
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pSStack_f0 = (System_String_array *)0x43edc65;
              System_Collections_Generic_Dictionary_int__object___Add
                        (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar22 + 0x70),
                         *(int32_t *)((long)SVar14 + 0x18),(Il2CppObject *)pUVar13,MethodInfo_Void_Add);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      pSStack_f0 = (System_String_array *)0x43edc7f;
      il2cpp_runtime_helper_022b2c90();
      SVar14 = SVar37;
      SVar37 = SVar22;
    }
    *(long **)((long)ppSVar35 + -8) = unaff_R15;
    *(System_String_Fields *)((long)ppSVar35 + -0x10) = SVar37;
    *(System_String_Fields *)((long)ppSVar35 + -0x18) = SVar15;
    SVar22 = SVar14;
    plVar40 = (long *)__this_08;
    if (g_data_057ae503 == '\0') {
      *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edca0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edcac;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edcb8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
      plVar40 = &TypeInfo_Object;
      *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edcc4;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae503 = '\x01';
    }
    if (SVar14 != (System_String_Fields)0x0) {
      pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_08 + 0x70);
      plVar40._0_4_ = 0;
      plVar40._4_2_ = 0;
      plVar40._6_2_ = 0;
      if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar11 = *(uint *)((long)SVar14 + 0x18);
        SVar22._4_4_ = 0;
        SVar22._stringLength = uVar11;
        *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edcf3;
        bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar18,uVar11,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar10 == '\0') {
          return;
        }
        pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_08 + 0x70);
        plVar40._0_4_ = 0;
        plVar40._4_2_ = 0;
        plVar40._6_2_ = 0;
        if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar8 = *(int32_t *)((long)SVar14 + 0x18);
          *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edd12;
          unaff_R15 = (long *)System_Collections_Generic_Dictionary_int__object___get_Item
                                        (pSVar18,iVar8,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edd2d;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar22._stringLength = 0;
          SVar22._firstChar = 0;
          SVar22._6_2_ = 0;
          *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edd37;
          UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_R15,(MethodInfo *)0x0);
          pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_08 + 0x70);
          plVar40._0_4_ = 0;
          plVar40._4_2_ = 0;
          plVar40._6_2_ = 0;
          if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            iVar8 = *(int32_t *)((long)SVar14 + 0x18);
            *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edd52;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar18,iVar8,MethodInfo_Boolean_Remove);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar35 + -0x20) = 0x43edd69;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Transform_o **)((long)ppSVar35 + -0x20) = pUVar33;
    *(long **)((long)ppSVar35 + -0x28) = unaff_R15;
    *(Il2CppClass ***)((long)ppSVar35 + -0x30) = __this_08;
    *(System_String_array **)((long)ppSVar35 + -0x38) = pSVar12;
    *(System_String_Fields *)((long)ppSVar35 + -0x40) = SVar14;
    ppSVar41 = (System_String_o **)plVar40;
    if (g_data_057ae504 == '\0') {
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edd93;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edd9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43eddab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43eddb7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43eddc3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43eddcf;
      il2cpp_runtime_helper_023445d0(&"TextColor");
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edddb;
      il2cpp_runtime_helper_023445d0(&"DefaultPanel");
      ppSVar41 = &"Default";
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edde7;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae504 = '\x01';
    }
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
      iVar8 = *(int32_t *)(lVar27 + 0x14);
      uVar17 = *(undefined8 *)(*plVar40 + 0x180);
      pcVar2 = *(code **)(*plVar40 + 0x178);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43ede33;
      pSVar32 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43ede45;
      SVar14 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43ede68;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)SVar14,iVar8,120.0,20.0,pSVar32,(MethodInfo *)0x0);
      pUVar13 = *(UnityEngine_GameObject_o **)((long)plVar40 + 0x68);
      ppSVar41._0_4_ = 0;
      ppSVar41._4_2_ = 0;
      ppSVar41._6_2_ = 0;
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43ede7c;
        ppSVar41 = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar13,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43ede95;
        SVar15 = (System_String_Fields)
                 UI_ElementFactory__CreateWhiteLabel
                           ((UnityEngine_Transform_o *)ppSVar41,(UI_ElementStyle_o *)SVar14,
                            (System_String_o *)SVar22,0,3,(MethodInfo *)0x0);
        if (SVar15 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edeb3;
          ppSVar41 = (System_String_o **)SVar15;
          pIVar16 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar15,MethodInfo_Text_GetComponent_Text);
          SVar22 = SVar15;
          if (SVar14 != (System_String_Fields)0x0) {
            SVar14 = *(System_String_Fields *)((long)SVar14 + 0x18);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43eded7;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edf00;
            ppSVar41 = (System_String_o **)SVar14;
            UVar48 = UI_UIManager__GetThemeColor
                               ((System_String_o *)SVar14,"TextColor","Default","DefaultPanel",
                                (MethodInfo *)0x0);
            plVar40._0_4_ = 0;
            plVar40._4_2_ = 0;
            plVar40._6_2_ = 0;
            if (pIVar16 != (Il2CppObject *)0x0) {
              pMVar38 = pIVar16->klass->vtable[0x17].method;
              pIVar3 = pIVar16->klass->vtable[0x17].methodPtr;
              *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edf18;
              (*pIVar3)(UVar48.fields.r,UVar48.fields.b,pIVar16,pMVar38);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar35 + -0x48) = 0x43edf29;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields *)((long)ppSVar35 + -0x48) = SVar22;
    *(System_String_Fields *)((long)ppSVar35 + -0x50) = SVar14;
    *(undefined8 *)((long)ppSVar35 + -0x58) = uVar17;
    if (g_data_057ae505 == '\0') {
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43edf4c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43edf58;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
      g_data_057ae505 = '\x01';
    }
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43edf6e;
    pSVar18 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43edf83;
    System_Collections_Generic_Dictionary_int__object____ctor(pSVar18,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    *(System_Collections_Generic_Dictionary_int__object__o **)((long)ppSVar41 + 0x70) = pSVar18;
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43edf93;
    il2cpp_runtime_helper_022b4080((long)ppSVar41 + 0x70,pSVar18);
    uVar17 = *(undefined8 *)((long)ppSVar35 + -0x50);
    uVar5 = *(undefined8 *)((long)ppSVar35 + -0x48);
    *(long **)((long)ppSVar35 + -0x48) = plVar40;
    *(undefined8 *)((long)ppSVar35 + -0x50) = uVar5;
    *(undefined8 *)((long)ppSVar35 + -0x58) = uVar17;
    if (g_data_057ae02c == '\0') {
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x432777d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327789;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327795;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43277a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43277ad;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      g_data_057ae02c = '\x01';
    }
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43277c3;
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43277d8;
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UI_BasePopup);
    *(System_Collections_Generic_List_object__o **)((long)ppSVar41 + 0x38) = __this_03;
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x43277e8;
    il2cpp_runtime_helper_022b4080((long)ppSVar41 + 0x38,__this_03);
    pSVar32 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x432780f;
    __this_04 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327824;
    Settings_StringSetting___ctor_40f74f0(__this_04,pSVar32,0x7fffffff,(MethodInfo *)0x0);
    *(Settings_StringSetting_o **)((long)ppSVar41 + 0x48) = __this_04;
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327834;
    il2cpp_runtime_helper_022b4080((long)ppSVar41 + 0x48,__this_04);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327843;
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327858;
    System_Collections_Generic_Dictionary_object__object____ctor(__this_05,MethodInfo_Dictionary_2_System_String_System_Type);
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)ppSVar41 + 0x50) = __this_05;
    *(undefined8 *)((long)ppSVar35 + -0x60) = 0x4327868;
    il2cpp_runtime_helper_022b4080((long)ppSVar41 + 0x50);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar41,(MethodInfo *)0x0);
    return;
  }
  SStack_d0._stringLength = 0x454e611;
  SStack_d0._firstChar = 0;
  SStack_d0._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_d0 = SVar22;
  if (g_data_057aef8d == '\0') {
    SStack_d8._stringLength = 0x454e68c;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    SStack_d8._stringLength = 0x454e698;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aef8d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
    SStack_d8._stringLength = 0x454e6cf;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
    SStack_d8._stringLength = 0x454e6b7;
    SStack_d8._firstChar = 0;
    SStack_d8._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
    pIVar42 = (pSVar25->obj).klass;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pIVar42->_2).naturalAligment) &&
       ((pIVar42->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameMenu)) {
      return;
    }
  }
  SStack_d8._stringLength = 0x454e6d4;
  SStack_d8._firstChar = 0;
  SStack_d8._6_2_ = 0;
  il2cpp_runtime_helper_022b2fd0();
  pSVar36 = (System_String_Fields *)&pSStack_e8;
  pSStack_e8 = (System_String_array *)&TypeInfo_UIManager;
  SStack_e0 = SVar14;
  SStack_d8 = (System_String_Fields)unaff_R15;
  if (g_data_057aef81 == '\0') {
    pSStack_f0 = (System_String_array *)0x454e6fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pSStack_f0 = (System_String_array *)0x454e709;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_f0 = (System_String_array *)0x454e715;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aef81 = '\x01';
  }
  __this_09 = (MethodInfo **)&g_data_057b9b70;
  pSStack_f0 = (System_String_array *)0x454e73e;
  bVar10 = System_String__op_Equality
                     ((System_String_o *)pSVar25,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  plVar40 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_f0 = (System_String_array *)0x454e760;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar26 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (pSVar26 == (System_String_array *)0x0) {
label_0454e854:
    pSVar23 = pSVar26;
    pSStack_f0 = (System_String_array *)0x454e859;
    pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_f0 = (System_String_array *)0x454e781;
    pSVar23 = (System_String_array *)
              CustomLogic_CustomLogicEvaluator__OnChatInput
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar26,(System_String_o *)pSVar25,
                         (MethodInfo *)0x0);
    if ((pSVar23 != (System_String_array *)0x0) && (in_RCX = (pSVar23->obj).klass, in_RCX == g_data_057b9b98)) {
      pSStack_f0 = (System_String_array *)0x454e797;
      pcVar24 = (char *)il2cpp_runtime_helper_02305440();
      pSVar26 = pSVar23;
      if (*pcVar24 == '\0') {
        return;
      }
    }
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e854;
    pSStack_f0 = (System_String_array *)0x454e7b9;
    pMVar38 = "/";
    bVar10 = System_String__StartsWith
                       ((System_String_o *)pSVar25,(System_String_o *)"/",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        pSStack_f0 = (System_String_array *)0x454e83f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_f0 = (System_String_array *)0x454e847;
      pSVar32 = GameManagers_ChatManager__ProcessMentions((System_String_o *)pSVar25,pMVar38);
      pSVar25 = pSStack_e8;
      pSStack_f0 = pSStack_e8;
      pSStack_e8 = pSVar12;
      if (g_data_057aef6e == '\0') {
        pSStack_110 = (System_String_o *)0x454bb53;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        pSStack_110 = (System_String_o *)0x454bb5f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        pSStack_110 = (System_String_o *)0x454bb6b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
        pSStack_110 = (System_String_o *)0x454bb77;
        il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
        g_data_057aef6e = '\x01';
      }
      SStack_100._dateData = 0;
      pPVar34 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSStack_110 = (System_String_o *)0x454bbaf;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (pSVar26 != (System_String_array *)0x0) {
        if (pSVar32 != (System_String_o *)0x0) {
          pSStack_110 = (System_String_o *)0x454bbd0;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar32);
          if (lVar27 == 0) goto label_0454bcaf;
        }
        pSVar12 = pSVar26;
        if ((int)pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = pSVar32;
          pSStack_110 = (System_String_o *)0x454bbf7;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
            pSStack_110 = (System_String_o *)0x454bc0f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_110 = (System_String_o *)0x454bc16;
          SStack_100._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
          pSStack_110 = (System_String_o *)0x454bc27;
          iStack_f8 = System_DateTime__get_Ticks((System_DateTime_o)&SStack_100,(MethodInfo *)0x0);
          pSStack_110 = (System_String_o *)0x454bc41;
          pSVar25 = (System_String_array *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
          if (pSVar25 != (System_String_array *)0x0) {
            pSStack_110 = (System_String_o *)0x454bc59;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar25);
            if (lVar27 == 0) goto label_0454bcaf;
          }
          if (1 < (uint)pSVar26->max_length) {
            pSVar26->m_Items[1] = (System_String_o *)pSVar25;
            pSStack_110 = (System_String_o *)0x454bc7a;
            il2cpp_runtime_helper_022b4080(pSVar26->m_Items + 1);
            if (pPVar34 != (Photon_Pun_PhotonView_o *)0x0) {
              pSStack_110 = (System_String_o *)0x454bc99;
              Photon_Pun_PhotonView__RPC
                        (pPVar34,"PlayerChatRPC",0,(System_Object_array *)pSVar26,(MethodInfo *)0x0);
              return;
            }
            goto label_0454bcaa;
          }
        }
        pSStack_110 = (System_String_o *)0x454bcaa;
        il2cpp_runtime_helper_022b2ca0();
      }
label_0454bcaa:
      pSVar26 = pSVar12;
      pSStack_110 = (System_String_o *)0x454bcaf;
      il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
      pSStack_110 = (System_String_o *)0x454bcb4;
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_0231b270();
      pSVar21 = (System_String_o *)0x0;
      pSStack_110 = (System_String_o *)0x454bcbe;
      il2cpp_runtime_helper_022b2b10();
      pSVar31 = pSVar21;
      pSStack_130 = pSVar25;
      pSStack_128 = pSVar26;
      SStack_120 = unaff_R13;
      pPStack_118 = pPVar34;
      pSStack_110 = pSVar32;
      if (g_data_057aef70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        g_data_057aef70 = '\x01';
      }
      SStack_148.fields._dateData = (System_DateTime_Fields)0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = iStack_f8;
      pIVar42 = TypeInfo_InGameManager;
      if (iStack_f8 != 0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        pIVar42 = (Il2CppClass *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,*(int32_t *)(iStack_f8 + 0x18),MethodInfo_Boolean_Contains);
          if ((char)bVar10 == '\0') {
            uStack_14c = *(undefined4 *)(iVar6 + 0x18);
            pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_14c);
            uStack_150 = *(undefined4 *)(iVar6 + 0x18);
            pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_150);
            ppSVar41 = &"[{0}]";
            pSVar32 = System_String__Format("[{0}]",pIVar20,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar32 = GameManagers_ChatManager__GetColorString(pSVar32,1,0,(MethodInfo *)ppSVar41);
            pSVar32 = System_String__Format_3af78e0
                                ("<link=\"{0}\">{1}</link>",pIVar16,(Il2CppObject *)pSVar32,(MethodInfo *)0x0);
            pSVar32 = System_String__Concat_3af7150(pSVar32," ",pSVar19,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo_37E4C90 *)0x0;
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&SStack_148,(int64_t)pSVar21,1,(MethodInfo *)0x0);
            pPStack_140 = (Photon_Realtime_Player_o *)0x0;
            SStack_138._dateData = 0;
            __this_10.fields.value.fields._dateData = SStack_148.fields._dateData;
            __this_10.fields._0_8_ = &pPStack_140;
            System_Nullable_DateTime____ctor(__this_10,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
            timestamp.fields._0_8_ = (ulong)pPStack_140 & 0xffffffff;
            timestamp.fields.value.fields._dateData =
                 (System_DateTime_Fields)(System_DateTime_Fields)SStack_138._dateData;
            GameManagers_ChatManager__AddLine
                      (pSVar32,0,0,timestamp,*(int32_t *)(iVar6 + 0x18),0,0,-1,0,in_stack_fffffffffffffea0);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar32 = pSVar31;
      if (g_data_057aef71 == '\0') {
        uStack_190 = 0x454bf06;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        uStack_190 = 0x454bf12;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        uStack_190 = 0x454bf1e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        uStack_190 = 0x454bf2a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        g_data_057aef71 = '\x01';
      }
      timestamp_00._dateData = 0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        uStack_190 = 0x454bf57;
        il2cpp_runtime_helper_02337ed0();
      }
      player_00 = TypeInfo_InGameManager;
      if (pPStack_140 != (Photon_Realtime_Player_o *)0x0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        player_00 = (Il2CppClass *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          uStack_190 = 0x454bf8e;
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,(pPStack_140->fields).actorNumber,MethodInfo_Boolean_Contains);
          if ((char)bVar10 == '\0') {
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              uStack_190 = 0x454bfaa;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_190 = 0x454bfbe;
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&stack0xfffffffffffffe88,(int64_t)pSVar31,1,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              uStack_190 = 0x454bfdb;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_190 = 0x454bff4;
            GameManagers_ChatManager__AddPlayerLine
                      (pPStack_140,(System_String_o *)pIVar42,0,(System_DateTime_o)timestamp_00._dateData,0,-1
                       ,in_stack_fffffffffffffe78);
          }
          return;
        }
      }
      uStack_190 = 0x454c005;
      il2cpp_runtime_helper_022b2c90();
      pPStack_1b8 = pPStack_140;
      pSStack_1b0 = &SStack_148;
      SStack_1a8 = unaff_R13;
      pIStack_1a0 = pIVar42;
      pSStack_198 = pSVar31;
      uStack_190 = uVar39;
      if (g_data_057aef74 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&": ");
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aef74 = '\x01';
      }
      uStack_1e0 = 0;
      pSStack_1d8 = (System_String_o *)0x0;
      apSStack_1d0[0] = (System_String_o *)0x0;
      if (player_00 == (Il2CppClass *)0x0) {
        return;
      }
      SStack_1c0.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)in_RCX;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar38 = (MethodInfo *)0x0;
      pSVar31 = PhotonExtensions__GetStringProperty
                          ((Photon_Realtime_Player_o *)player_00,
                           (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                           (System_String_o *)"",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar31 = Anticheat_ChatFilter__FilterSizeTag(pSVar31,(MethodInfo *)0x0);
      if (pSVar32 == (System_String_o *)0x0) {
        pSVar32 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        iVar9 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      else {
        iVar9 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      if (iVar9 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar32 = Anticheat_ChatFilter__FilterSizeTag(pSVar32,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar32 = MiscExtensions__ReplaceNamedColorTags(pSVar32,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = GameManagers_ChatManager__GetColorString(pSVar32,color,0,pMVar38);
      uStack_1e4 = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_1e4);
      uStack_1e8 = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_1e8);
      ppSVar41 = &"[{0}]";
      pSVar32 = System_String__Format("[{0}]",pIVar20,(MethodInfo *)0x0);
      pSVar32 = GameManagers_ChatManager__GetColorString(pSVar32,1,0,(MethodInfo *)ppSVar41);
      pSVar21 = System_String__Format_3af78e0("<link=\"{0}\">{1}</link>",pIVar16,(Il2CppObject *)pSVar32,(MethodInfo *)0x0);
      pSVar32 = TypeInfo_string;
      pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
      if (pSVar12 != (System_String_array *)0x0) {
        if ((int)pSVar12->max_length != 0) {
          pSVar32 = (System_String_o *)pSVar12->m_Items;
          pSVar12->m_Items[0] = pSVar21;
          il2cpp_runtime_helper_022b4080(pSVar32,pSVar21);
          if (1 < (uint)pSVar12->max_length) {
            pSVar32 = (System_String_o *)(pSVar12->m_Items + 1);
            pSVar12->m_Items[1] = " ";
            il2cpp_runtime_helper_022b4080();
            if (2 < (uint)pSVar12->max_length) {
              pSVar32 = (System_String_o *)(pSVar12->m_Items + 2);
              pSVar12->m_Items[2] = pSVar31;
              il2cpp_runtime_helper_022b4080(pSVar32,pSVar31);
              if (3 < (uint)pSVar12->max_length) {
                pSVar32 = (System_String_o *)(pSVar12->m_Items + 3);
                pSVar12->m_Items[3] = ": ";
                il2cpp_runtime_helper_022b4080();
                if (4 < (uint)pSVar12->max_length) {
                  pSVar12->m_Items[4] = pSVar19;
                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 4);
                  pSVar32 = System_String__Concat_3af7570(pSVar12,(MethodInfo *)0x0);
                  iVar8 = *(int32_t *)&(player_00->_1).namespaze;
                  apSStack_1d0[0] = (System_String_o *)0x0;
                  uStack_1e0 = 1;
                  pSStack_1d8 = pSVar31;
                  il2cpp_runtime_helper_022b4080(&pSStack_1d8,pSVar31);
                  apSStack_1d0[0] = pSVar19;
                  il2cpp_runtime_helper_022b4080(apSStack_1d0,pSVar19);
                  playerLineData.fields.SenderName = pSStack_1d8;
                  playerLineData.fields._0_8_ = uStack_1e0;
                  playerLineData.fields.BodyText = apSStack_1d0[0];
                  GameManagers_ChatManager__AddLineInternal
                            (pSVar32,0,0,SStack_1c0,iVar8,0,in_R8D & 0xff,in_R9D,0,playerLineData,
                             in_stack_fffffffffffffe00);
                  return;
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aef72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        g_data_057aef72 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__AddLine
                (pSVar32,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_fffffffffffffdb8);
      return;
    }
    if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar25->bounds)->_networkCallback == 1) {
      return;
    }
    pMVar38 = (MethodInfo *)0x1;
    pSStack_f0 = (System_String_array *)0x454e7d6;
    pSVar25 = (System_String_array *)System_String__Substring((System_String_o *)pSVar25,1,(MethodInfo *)0x0);
    __this_09 = &TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_f0 = (System_String_array *)0x454e7f1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_f0 = (System_String_array *)0x454e7f9;
    pSVar26 = pSVar25;
    pSVar23 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)pSVar25,pMVar38);
    if (pSVar23 == (System_String_array *)0x0) goto label_0454e854;
    if (pSVar23->max_length == 0) {
      return;
    }
    pSVar26 = pSVar23;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_f0 = (System_String_array *)0x454e81d;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
    }
    pSVar36 = &SStack_d0;
    pSVar25 = pSStack_e8;
    __this_09 = (MethodInfo **)SStack_e0;
    plVar40 = (long *)SStack_d8;
  }
  *(ulong *)((long)pSVar36 + -8) = uVar39;
  *(long **)((long)pSVar36 + -0x10) = plVar40;
  *(MethodInfo ***)((long)pSVar36 + -0x18) = __this_09;
  *(System_String_Fields *)((long)pSVar36 + -0x20) = unaff_R13;
  *(System_String_array **)((long)pSVar36 + -0x28) = pSVar12;
  *(System_String_array **)((long)pSVar36 + -0x30) = pSVar25;
  *(System_String_array **)((long)pSVar36 + -0x38) = pSVar26;
  if (g_data_057aef84 == '\0') {
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e887;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e893;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e89f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8f3;
    il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e8ff;
    il2cpp_runtime_helper_023445d0(&"Command ");
    g_data_057aef84 = '\x01';
  }
  *(undefined8 *)((long)pSVar36 + -0x38) = 0;
  userMethod = &TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e926;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar14 = unaff_R13;
  if (pSVar23 == (System_String_array *)0x0) goto label_0454ed3e;
  pSVar26 = pSVar25;
  if (*(int *)&pSVar23->max_length == 0) goto label_0454ed43;
  pSVar32 = pSVar23->m_Items[0];
  if (pSVar32 == (System_String_o *)0x0) {
label_0454ed3e:
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed43;
    il2cpp_runtime_helper_022b2c90();
    pSVar26 = pSVar25;
    unaff_R13 = SVar14;
  }
  else {
    pSVar26 = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e95e;
    pSVar32 = System_String__ToLower(pSVar32,(MethodInfo *)0x0);
    pSVar25 = pSVar26;
    if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
    *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e97f;
    bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar26,
                        (Il2CppObject *)pSVar32,(Il2CppObject **)((long)pSVar36 + -0x38),MethodInfo_Boolean_TryGetValue);
    lVar27 = MethodInfo_String_Empty_String;
    if ((char)bVar10 == '\0') {
      if (*(int *)&pSVar23->max_length != 0) {
        pSVar32 = pSVar23->m_Items[0];
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ea69;
        pSVar32 = System_String__Concat_3af7150("Command ",pSVar32," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ea7d;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)pSVar36 + -0x50) = 0;
        *(undefined8 *)((long)pSVar36 + -0x58) = 0xffffffffffffffff;
        *(undefined8 *)((long)pSVar36 + -0x60) = 0;
        *(undefined8 *)((long)pSVar36 + -0x68) = 0;
        *(undefined8 *)((long)pSVar36 + -0x70) = 0x454eaac;
        GameManagers_ChatManager__AddLine
                  (pSVar32,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,
                   *(bool_conflict *)((long)pSVar36 + -0x68),*(bool_conflict *)((long)pSVar36 + -0x60),
                   *(int32_t *)((long)pSVar36 + -0x58),*(bool_conflict *)((long)pSVar36 + -0x50),
                   *(MethodInfo **)((long)pSVar36 + -0x48));
        return;
      }
      goto label_0454ed43;
    }
    pSVar25 = *(System_String_array **)((long)pSVar36 + -0x38);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454ed3e;
    pIVar42 = (pSVar25->obj).klass;
    bVar1 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
    if (((pIVar42->_2).naturalAligment < bVar1) ||
       ((pIVar42->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLCommandAttribute)) {
      __this_09 = *(MethodInfo ***)(pSVar25->m_Items + 1);
      if ((System_String_Fields)__this_09 == (System_String_Fields)0x0) goto label_0454ed3e;
      *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e9d9;
      bVar10 = System_Reflection_MethodBase__get_IsStatic
                         ((System_Reflection_MethodBase_o *)__this_09,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eac6;
          il2cpp_runtime_helper_02337ed0();
        }
        userMethod = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eae8;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar42 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eb03;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar42);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eb29;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items,pSVar23);
          goto label_0454eb2f;
        }
      }
      else {
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454e9f5;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar42 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ea10;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar42);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ea36;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          userMethod = (MethodInfo **)0x0;
label_0454eb2f:
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eb39;
          System_Reflection_MethodBase__Invoke
                    ((System_Reflection_MethodBase_o *)__this_09,(Il2CppObject *)userMethod,
                     (System_Object_array *)pSVar26,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)&pSVar23->max_length < 2) {
        if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ecf5;
          il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
          lVar28 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
          if (*(int *)(lVar28 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed24;
          il2cpp_runtime_helper_02337ed0();
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar27 + 0x135);
        }
        else {
          lVar28 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed0f;
          lVar28 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar28 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar27 + 0x135);
        }
        if ((bVar1 & 1) == 0) {
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ebdd;
          lVar27 = il2cpp_runtime_helper_023009c0(lVar27);
        }
        pSVar12 = (System_String_array *)**(undefined8 **)(lVar27 + 0xb8);
        iVar9 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eb65;
        pSVar29 = System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar23,1,MethodInfo_IEnumerable_1_System_String_Skip_String);
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eb77;
        pSVar12 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(pSVar29,MethodInfo_String_ToArray_String);
        iVar9 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar9 == 0) {
        *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ebff;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = *(MethodInfo ***)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((System_String_Fields)__this_09 == (System_String_Fields)0x0) {
        return;
      }
      userMethod = (MethodInfo **)pSVar25->m_Items[5];
      *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ec2e;
      SVar14 = (System_String_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pSVar26 = pSVar25;
      if (*(int *)&pSVar23->max_length != 0) {
        if (SVar14 == (System_String_Fields)0x0) goto label_0454ed3e;
        pSVar26 = (System_String_array *)pSVar23->m_Items[0];
        if (pSVar26 != (System_String_array *)0x0) {
          uVar17 = *(undefined8 *)(*(long *)SVar14 + 0x40);
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ec5d;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar17);
          if (lVar27 == 0) goto label_0454ed48;
        }
        unaff_R13 = SVar14;
        if (*(int *)((long)SVar14 + 0x18) != 0) {
          *(System_String_array **)((long)SVar14 + 0x20) = pSVar26;
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ec81;
          il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar14 + 0x20),pSVar26);
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ec90;
          pSVar26 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
          *(undefined8 *)((long)pSVar36 + -0x40) = 0x454eca0;
          CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                    ((CustomLogic_CustomLogicListBuiltin_o *)pSVar26,(System_Object_array *)pSVar12,
                     (MethodInfo *)0x0);
          if (pSVar26 != (System_String_array *)0x0) {
            uVar17 = *(undefined8 *)(*(long *)SVar14 + 0x40);
            *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ecb5;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar17);
            if (lVar27 == 0) goto label_0454ed48;
          }
          if (1 < *(uint *)((long)SVar14 + 0x18)) {
            *(System_String_array **)((long)SVar14 + 0x28) = pSVar26;
            *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ecd8;
            il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar14 + 0x28),pSVar26);
            *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ece8;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                      ((CustomLogic_CustomLogicEvaluator_o *)__this_09,(CustomLogic_UserMethod_o *)userMethod,
                       (System_Object_array *)SVar14,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0454ed43:
  *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed48;
  il2cpp_runtime_helper_022b2ca0();
  SVar14 = unaff_R13;
label_0454ed48:
  *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed4d;
  pSVar32 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)pSVar36 + -0x40) = 0x454ed57;
  uVar17 = il2cpp_runtime_helper_022b2b10(pSVar32,0);
  *(System_String_array **)((long)pSVar36 + -0x40) = pSVar23;
  *(MethodInfo ***)((long)pSVar36 + -0x48) = userMethod;
  *(MethodInfo ***)((long)pSVar36 + -0x50) = __this_09;
  *(System_String_Fields *)((long)pSVar36 + -0x58) = SVar14;
  *(System_String_array **)((long)pSVar36 + -0x60) = pSVar12;
  *(System_String_array **)((long)pSVar36 + -0x68) = pSVar26;
  *(undefined8 *)((long)pSVar36 + -0x70) = uVar17;
  if (g_data_057aef82 == '\0') {
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ed87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ed93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ed9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edc3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edcf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ede7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454edff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ee0b;
    il2cpp_runtime_helper_023445d0(&"@");
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ee17;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef82 = '\x01';
  }
  if (pSVar32 != (System_String_o *)0x0) {
    *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ee36;
    iVar8 = System_String__IndexOf(pSVar32,0x40,(MethodInfo *)0x0);
    if (iVar8 == -1) {
      return;
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ee5b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
      *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ee7d;
      System_Text_StringBuilder__Clear(pSVar30,(MethodInfo *)0x0);
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
        *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eea2;
        System_Text_StringBuilder__Append_3b03f90(pSVar30,pSVar32,(MethodInfo *)0x0);
label_0454eeda:
        do {
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eee3;
          __this_06 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eef0;
          GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_06,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ef02;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar40 == (long *)0x0) goto label_0454f2d9;
          uVar17 = *(undefined8 *)(*plVar40 + 0x170);
          pcVar2 = *(code **)(*plVar40 + 0x168);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ef2d;
          pSVar32 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
          if (pSVar32 == (System_String_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ef48;
          iVar9 = System_String__IndexOf_3afbe50(pSVar32,0x20,iVar8,(MethodInfo *)0x0);
          if (iVar9 == -1) {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              *(undefined8 *)((long)pSVar36 + -0x78) = 0x454ef92;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454efb4;
            iVar9 = System_Text_StringBuilder__get_Length(pSVar30,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          else {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454efc8;
            il2cpp_runtime_helper_02337ed0();
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eff7;
          pSVar32 = System_Text_StringBuilder__ToString_3b032f0
                              (pSVar30,iVar8 + 1,(iVar9 - iVar8) + -1,(MethodInfo *)0x0);
          if (__this_06 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
          (__this_06->fields).mention = pSVar32;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f013;
          il2cpp_runtime_helper_022b4080(&__this_06->fields);
          pSVar32 = (__this_06->fields).mention;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f01e;
          bVar10 = System_String__IsNullOrWhiteSpace(pSVar32,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            iVar9 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
            if (iVar9 == 0) {
              *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f034;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (plVar40 == (long *)0x0) goto label_0454f2d9;
            uVar17 = *(undefined8 *)(*plVar40 + 0x170);
            pcVar2 = *(code **)(*plVar40 + 0x168);
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f05f;
            pSVar32 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
            if (pSVar32 == (System_String_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f07a;
            iVar8 = System_String__IndexOf_3afbe50(pSVar32,0x40,iVar8 + 1,(MethodInfo *)0x0);
            if (iVar8 == -1) break;
            goto label_0454eeda;
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f0a8;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f0af;
          source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f0c1;
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f0db;
          System_Func_object__bool____ctor();
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f0f0;
          pSVar29 = System_Linq_Enumerable__Where_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                               MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f102;
          __this_07 = System_Linq_Enumerable__ToList_object_(pSVar29,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
          if (__this_07 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
          if ((__this_07->fields)._size != 1) {
            iVar9 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
            goto joined_r0x0454f02d;
          }
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f130;
          player = (Photon_Realtime_Player_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_07,0,MethodInfo_Player_get_Item);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f14e;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar32 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f16f;
          pSVar32 = PhotonExtensions__GetStringProperty
                              (player,pSVar32,(System_String_o *)"",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f18a;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f194;
          pSVar32 = Anticheat_ChatFilter__FilterSizeTag(pSVar32,(MethodInfo *)0x0);
          ppSVar41 = &"@";
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f1a8;
          pSVar32 = System_String__Concat_3ae5ba0("@",pSVar32,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f1bd;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f1cc;
          pSVar32 = GameManagers_ChatManager__GetColorString(pSVar32,2,0,(MethodInfo *)ppSVar41);
          pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f1f6;
          pSVar30 = System_Text_StringBuilder__Remove(pSVar30,iVar8,iVar9 - iVar8,(MethodInfo *)0x0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f20f;
          System_Text_StringBuilder__Insert(pSVar30,iVar8,pSVar32,(MethodInfo *)0x0);
          plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar40 == (long *)0x0) goto label_0454f2d9;
          uVar17 = *(undefined8 *)(*plVar40 + 0x170);
          pcVar2 = *(code **)(*plVar40 + 0x168);
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f23a;
          pSVar31 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
          if ((pSVar32 == (System_String_o *)0x0) || (pSVar31 == (System_String_o *)0x0)) goto label_0454f2d9;
          iVar9 = (pSVar32->fields)._stringLength;
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454eec6;
          iVar8 = System_String__IndexOf_3afbe50(pSVar31,0x40,iVar8 + iVar9,(MethodInfo *)0x0);
        } while (iVar8 != -1);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f28f;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
        if (plVar40 != (long *)0x0) {
          (**(code **)(*plVar40 + 0x168))(plVar40,*(undefined8 *)(*plVar40 + 0x170));
          return;
        }
      }
    }
  }
label_0454f2d9:
  *(undefined8 *)((long)pSVar36 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameManagers.PhotonVoiceSync$$Update
// il2cpp: void GameManagers_PhotonVoiceSync__Update (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x456f130

void GameManagers_PhotonVoiceSync__Update(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_int__Dictionary_string__float___o *__this_00;
  code *pcVar2;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Settings_KeybindSetting_o *__this_02;
  undefined8 uVar5;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  int64_t iVar6;
  char cVar7;
  int32_t iVar8;
  int iVar9;
  bool_conflict bVar10;
  uint uVar11;
  System_Collections_Generic_List_object__o *__this_03;
  Settings_StringSetting_o *__this_04;
  System_Collections_Generic_Dictionary_int__object__c *__this_05;
  System_String_o *pSVar12;
  System_String_array *pSVar13;
  System_String_Fields str1;
  UnityEngine_GameObject_o *value;
  System_String_Fields SVar14;
  System_String_Fields SVar15;
  Il2CppObject *pIVar16;
  undefined8 uVar17;
  System_Collections_Generic_Dictionary_int__object__o *pSVar18;
  System_String_o *pSVar19;
  Il2CppObject *pIVar20;
  System_String_o *pSVar21;
  System_String_Fields SVar22;
  undefined4 extraout_var;
  System_String_array *pSVar23;
  char *pcVar24;
  System_String_array *pSVar25;
  System_String_array *pSVar26;
  long lVar27;
  long lVar28;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_06;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar29;
  System_Collections_Generic_List_TSource__o *__this_07;
  Photon_Realtime_Player_o *player;
  System_Text_StringBuilder_o *pSVar30;
  System_String_o *pSVar31;
  UnityEngine_Transform_o *pUVar32;
  Photon_Pun_PhotonView_o *pPVar33;
  MethodInfo_37E4C90 *method_00;
  Il2CppClass *in_RCX;
  int32_t color;
  System_String_Fields unaff_RBX;
  System_String_array **ppSVar34;
  System_String_Fields *pSVar35;
  long *unaff_RBP;
  System_String_Fields SVar36;
  MethodInfo *pMVar37;
  ulong uVar38;
  System_String_o **ppSVar39;
  long *plVar40;
  System_String_o **__this_08;
  Il2CppClass *pIVar41;
  Il2CppClass *player_00;
  Photon_Voice_Unity_Recorder_o *__this_09;
  uint in_R8D;
  int32_t in_R9D;
  System_String_Fields unaff_R13;
  MethodInfo **__this_10;
  MethodInfo **userMethod;
  long *unaff_R15;
  float fVar42;
  UnityEngine_Color_o UVar45;
  UnityEngine_Vector3_o UVar46;
  System_Nullable_DateTime__o __this_11;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_fffffffffffffe30;
  MethodInfo *in_stack_fffffffffffffe78;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  System_String_o *pSStack_160;
  System_String_o *apSStack_158 [2];
  System_DateTime_o SStack_148;
  Photon_Realtime_Player_o *pPStack_140;
  System_DateTime_o *pSStack_138;
  System_String_Fields SStack_130;
  Il2CppClass *pIStack_128;
  System_String_o *pSStack_120;
  ulong uStack_118;
  MethodInfo *in_stack_fffffffffffffef0;
  System_DateTime_Fields timestamp_00;
  MethodInfo *in_stack_ffffffffffffff18;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  System_DateTime_o SStack_d0;
  Photon_Realtime_Player_o *pPStack_c8;
  System_DateTime_Fields SStack_c0;
  System_String_array *pSStack_b8;
  System_String_array *pSStack_b0;
  System_String_Fields SStack_a8;
  Photon_Pun_PhotonView_o *pPStack_a0;
  System_String_o *pSStack_98;
  System_DateTime_Fields SStack_88;
  int64_t iStack_80;
  System_String_array *pSStack_78;
  System_String_array *pSStack_70;
  System_String_Fields SStack_68;
  System_String_Fields SStack_60;
  System_String_Fields SStack_58;
  System_String_Fields SStack_50;
  System_String_Fields SStack_48;
  UnityEngine_Transform_o *pUStack_40;
  undefined1 auStack_38 [8];
  float fVar43;
  float fVar44;
  
  ppSVar34 = (System_String_array **)auStack_38;
  if (g_data_057af04f == '\0') {
    pUStack_40 = (UnityEngine_Transform_o *)0x456f153;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseTitan);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f15f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f16b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f177;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f183;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f18f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f19b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    pUStack_40 = (UnityEngine_Transform_o *)0x456f1a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057af04f = '\x01';
  }
  pSVar13 = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar13 == (System_String_array *)0x0) {
label_0456f1fb:
    unaff_R15 = &TypeInfo_SettingsManager;
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if ((lVar27 != 0) &&
       (((lVar27 = *(long *)(lVar27 + 0x58), lVar27 != 0 && (lVar27 = *(long *)(lVar27 + 0x108), lVar27 != 0))
        && (unaff_RBX = (System_String_Fields)(__this->fields).PhotonView,
           unaff_RBX != (System_String_Fields)0x0)))) {
      uVar11 = *(uint *)(lVar27 + 0x14);
      unaff_R13._4_4_ = 0;
      unaff_R13._stringLength = uVar11;
      if (*(char *)&(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)unaff_RBX + 0x68))
                    ->fields).hashCode == '\0') {
        SVar14 = (System_String_Fields)(__this->fields).AudioSource;
        __this = (GameManagers_PhotonVoiceSync_o *)SVar14;
        if (uVar11 == 2) {
          if (SVar14 != (System_String_Fields)0x0) {
            fVar42 = 0.0;
            goto label_0456f4c8;
          }
        }
        else {
          if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
            pUStack_40 = (UnityEngine_Transform_o *)0x456f3fc;
            il2cpp_runtime_helper_02337ed0();
          }
          pUStack_40 = (UnityEngine_Transform_o *)0x456f406;
          fVar42 = ApplicationManagers_VoiceChatManager__GetOuputVolume
                             ((Photon_Pun_PhotonView_o *)unaff_RBX,(MethodInfo *)0x0);
          if (SVar14 != (System_String_Fields)0x0) goto label_0456f4c8;
        }
      }
      else if (pSVar13 != (System_String_array *)0x0) {
        unaff_RBX = *(System_String_Fields *)(pSVar13->m_Items + 10);
        unaff_RBP = &TypeInfo_Object;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pUStack_40 = (UnityEngine_Transform_o *)0x456f278;
          il2cpp_runtime_helper_02337ed0();
        }
        pUStack_40 = (UnityEngine_Transform_o *)0x456f284;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
label_0456f30d:
          unaff_R15 = &TypeInfo_SettingsManager;
          unaff_RBX = *(System_String_Fields *)(pSVar13->m_Items + 10);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pUStack_40 = (UnityEngine_Transform_o *)0x456f324;
            il2cpp_runtime_helper_02337ed0();
          }
          unaff_RBP = (long *)0x0;
          pUStack_40 = (UnityEngine_Transform_o *)0x456f332;
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar10 != '\0') {
            if (pSVar13->m_Items[10] == (System_String_o *)0x0) goto label_0456f4dd;
            unaff_RBP = (long *)(ulong)(*(byte *)&pSVar13->m_Items[10][4].monitor ^ 1);
          }
          if ((uVar11 == 2) || ((uVar11 == 1 && ((int)unaff_RBP == 0)))) {
label_0456f4a5:
            __this_09 = (__this->fields).Recorder;
            if (__this_09 != (Photon_Voice_Unity_Recorder_o *)0x0) {
              bVar10 = 0;
label_0456f4b0:
              pUStack_40 = (UnityEngine_Transform_o *)0x456f4b7;
              Photon_Voice_Unity_Recorder__set_TransmitEnabled(__this_09,bVar10,(MethodInfo *)0x0);
label_0456f4b7:
              SVar14 = (System_String_Fields)(__this->fields).AudioSource;
              if (SVar14 != (System_String_Fields)0x0) {
                fVar42 = 1.0;
label_0456f4c8:
                UnityEngine_AudioSource__set_volume
                          ((UnityEngine_AudioSource_o *)SVar14,fVar42,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
            if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0xb0), lVar27 != 0)) {
              iVar9 = *(int *)(lVar27 + 0x14);
              if (iVar9 != 1) {
                if (iVar9 == 0) {
                  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
                    pUStack_40 = (UnityEngine_Transform_o *)0x456f455;
                    il2cpp_runtime_helper_02337ed0();
                    pUStack_40 = (UnityEngine_Transform_o *)0x456f45c;
                    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar7 = (char)bVar10;
                  }
                  else {
                    pUStack_40 = (UnityEngine_Transform_o *)0x456f3bf;
                    bVar10 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
                    cVar7 = (char)bVar10;
                  }
                  if (cVar7 == '\0') {
                    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    if (((lVar27 == 0) || (lVar27 = *(long *)(lVar27 + 0x20), lVar27 == 0)) ||
                       (__this_02 = *(Settings_KeybindSetting_o **)(lVar27 + 0x90),
                       __this_02 == (Settings_KeybindSetting_o *)0x0)) goto label_0456f4dd;
                    pUStack_40 = (UnityEngine_Transform_o *)0x456f491;
                    bVar10 = Settings_KeybindSetting__GetKey(__this_02,0,(MethodInfo *)0x0);
                    if ((char)bVar10 != '\0') goto label_0456f495;
                  }
                  goto label_0456f4a5;
                }
                goto label_0456f4b7;
              }
label_0456f495:
              __this_09 = (__this->fields).Recorder;
              if (__this_09 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                bVar10 = 1;
                goto label_0456f4b0;
              }
            }
          }
        }
        else if (unaff_RBX != (System_String_Fields)0x0) {
          in_RCX = *(Il2CppClass **)unaff_RBX;
          if (((in_RCX->_2).naturalAligment < *(byte *)(TypeInfo_BaseTitan + 0x130)) ||
             (in_RCX = (Il2CppClass *)(in_RCX->_2).typeHierarchy,
             *(long *)((long)in_RCX + (ulong)*(byte *)(TypeInfo_BaseTitan + 0x130) * 8 + -8) != TypeInfo_BaseTitan)) {
            unaff_RBP = &TypeInfo_SettingsManager;
            unaff_R15 = (long *)(__this->fields).Transform;
            pUStack_40 = (UnityEngine_Transform_o *)0x456f2dd;
            pUVar32 = (UnityEngine_Transform_o *)(**(code **)(*(long *)unaff_RBX + 0x568))(unaff_RBX);
            if (pUVar32 != (UnityEngine_Transform_o *)0x0) {
              pUStack_40 = (UnityEngine_Transform_o *)0x456f2f0;
              UVar46 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
              fVar44 = UVar46.fields.z;
              fVar42 = UVar46.fields.x;
              fVar43 = UVar46.fields.y;
              if ((System_String_Fields)unaff_R15 != (System_String_Fields)0x0) goto label_0456f2f9;
            }
          }
          else {
            pSVar12 = *(System_String_o **)
                       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)
                        ((long)unaff_RBX + 0xf8))->fields;
            if ((pSVar12 != (System_String_o *)0x0) &&
               (pUVar32 = pSVar12[2].monitor, pUVar32 != (UnityEngine_Transform_o *)0x0)) {
              unaff_RBP = &TypeInfo_SettingsManager;
              unaff_R15 = (long *)(__this->fields).Transform;
              pUStack_40 = (UnityEngine_Transform_o *)0x456f442;
              UVar46 = UnityEngine_Transform__get_position(pUVar32,(MethodInfo *)0x0);
              fVar44 = UVar46.fields.z;
              fVar42 = UVar46.fields.x;
              fVar43 = UVar46.fields.y;
              if ((System_String_Fields)unaff_R15 != (System_String_Fields)0x0) {
label_0456f2f9:
                pUStack_40 = (UnityEngine_Transform_o *)0x456f303;
                UVar46.fields.y = fVar43;
                UVar46.fields.x = fVar42;
                UVar46.fields.z = fVar44;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)unaff_R15,UVar46,(MethodInfo *)0x0);
                goto label_0456f30d;
              }
              unaff_R15._0_4_ = 0;
              unaff_R15._4_2_ = 0;
              unaff_R15._6_2_ = 0;
            }
          }
        }
      }
    }
label_0456f4dd:
    pUStack_40 = (UnityEngine_Transform_o *)0x456f4e2;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar41 = (pSVar13->obj).klass;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pIVar41->_2).naturalAligment) &&
       ((pIVar41->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameManager))
    goto label_0456f1fb;
  }
  pUStack_40 = (UnityEngine_Transform_o *)0x456f4ea;
  pSVar25 = pSVar13;
  il2cpp_runtime_helper_022b2fd0();
  SStack_50 = unaff_RBX;
  SStack_48 = (System_String_Fields)__this;
  pUStack_40 = (UnityEngine_Transform_o *)unaff_RBP;
  if (g_data_057af050 == '\0') {
    SStack_58._stringLength = 0x456f599;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af050 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0456f5b7;
label_0456f51b:
    pSVar26 = (System_String_array *)0x0;
    SStack_58._stringLength = 0x456f522;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar7 = (char)bVar10;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0456f51b;
label_0456f5b7:
    SStack_58._stringLength = 0x456f5bc;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar26 = (System_String_array *)0x0;
    SStack_58._stringLength = 0x456f5c3;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar7 = (char)bVar10;
  }
  if (cVar7 == '\0') {
    return;
  }
  if (pSVar25->m_Items[1] == (System_String_o *)0x0) goto label_0456f61b;
  if (*(char *)&pSVar25->m_Items[1][4].monitor == '\0') {
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SStack_58._stringLength = 0x456f5e0;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    uVar11 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    SStack_58._stringLength = 0x456f5ec;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    pPVar33 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    pSVar26 = pSVar25;
    if (pPVar33 == (Photon_Pun_PhotonView_o *)0x0) goto label_0456f61b;
    SVar14 = (System_String_Fields)(pPVar33->fields)._Owner_k__BackingField;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_58._stringLength = 0x456f609;
      SStack_58._firstChar = 0;
      SStack_58._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    SStack_58._stringLength = 0x456f54b;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    pSVar26 = pSVar25;
    pPVar33 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)pSVar25,(MethodInfo *)0x0);
    if (pPVar33 == (Photon_Pun_PhotonView_o *)0x0) {
label_0456f61b:
      SStack_58 = (System_String_Fields)GameManagers_PhotonVoiceSync___ctor;
      il2cpp_runtime_helper_022b2c90();
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)pSVar26,(MethodInfo *)0x0);
      return;
    }
    pSVar26 = (System_String_array *)0x0;
    if ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2] == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0
       ) goto label_0456f61b;
    SVar14 = (System_String_Fields)(pPVar33->fields)._Owner_k__BackingField;
    SStack_58._stringLength = 0x456f56f;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    uVar11 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording
                       ((Photon_Voice_PUN_PhotonVoiceView_o *)pSVar25->m_Items[2],(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      SStack_58._stringLength = 0x456f582;
      SStack_58._firstChar = 0;
      SStack_58._6_2_ = 0;
      il2cpp_runtime_helper_02337ed0();
    }
  }
  uVar38 = (ulong)(uVar11 & 0xff);
  if (g_data_057aef7f == '\0') {
    SStack_58._stringLength = 0x454e5c2;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,uVar38,0);
    SStack_58._stringLength = 0x454e5ce;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aef7f = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
    SStack_58._stringLength = 0x454e552;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar7 = (char)bVar10;
    pMVar37 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
    SStack_58._stringLength = 0x454e5f1;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    pMVar37 = TypeInfo_ChatManager;
    il2cpp_runtime_helper_02337ed0();
    SStack_58._stringLength = 0x454e5f6;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    bVar10 = GameManagers_ChatManager__IsChatAvailable(pMVar37);
    cVar7 = (char)bVar10;
    pMVar37 = TypeInfo_ChatManager;
  }
  if (cVar7 == '\0') {
    TypeInfo_ChatManager = pMVar37;
    return;
  }
  TypeInfo_ChatManager = pMVar37;
  if (*(int *)((long)&pMVar37[2].parameters + 4) == 0) {
    SStack_58._stringLength = 0x454e56b;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_58._stringLength = 0x454e570;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  SVar22 = (System_String_Fields)GameManagers_ChatManager__GetVoiceChatPanel(pMVar37);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    SStack_58._stringLength = 0x454e58b;
    SStack_58._firstChar = 0;
    SStack_58._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_58._stringLength = 0x454e597;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)SVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar32 = pUStack_40;
  SVar15 = SStack_50;
  if ((char)bVar10 != '\0') {
    return;
  }
  if (SVar22 != (System_String_Fields)0x0) {
    ppSVar39 = (System_String_o **)SVar22;
    SVar36 = SStack_48;
    if ((char)uVar11 != '\0') {
      SStack_50 = SStack_48;
      SStack_68 = SVar15;
      ppSVar34 = &pSStack_70;
      SVar36 = SVar14;
      pSStack_70 = (System_String_array *)CONCAT44(extraout_var,bVar10);
      SStack_60 = (System_String_Fields)pSVar13;
      SStack_58 = unaff_R13;
      SStack_48 = (System_String_Fields)unaff_R15;
      if (g_data_057ae502 == '\0') {
        pSStack_78 = (System_String_array *)0x43eda96;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,SVar14,0);
        pSStack_78 = (System_String_array *)0x43edaa2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pSStack_78 = (System_String_array *)0x43edaae;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        pSStack_78 = (System_String_array *)0x43edaba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        pSStack_78 = (System_String_array *)0x43edac6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        pSStack_78 = (System_String_array *)0x43edad2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        pSStack_78 = (System_String_array *)0x43edade;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        ppSVar39 = &"";
        pSStack_78 = (System_String_array *)0x43edaea;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae502 = '\x01';
      }
      if ((SVar14 != (System_String_Fields)0x0) &&
         (ppSVar39 = *(System_String_o ***)((long)SVar22 + 0x70),
         (System_String_Fields)ppSVar39 != (System_String_Fields)0x0)) {
        SVar36._4_4_ = 0;
        SVar36._stringLength = *(uint *)((long)SVar14 + 0x18);
        pSStack_78 = (System_String_array *)0x43edb1a;
        bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar39,
                            *(uint *)((long)SVar14 + 0x18),MethodInfo_Boolean_ContainsKey);
        if ((char)bVar10 != '\0') {
          return;
        }
        lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
          uVar11 = *(uint *)(lVar27 + 0x14);
          pUVar32 = (UnityEngine_Transform_o *)(ulong)uVar11;
          pSStack_78 = (System_String_array *)0x43edb71;
          pSVar12 = (System_String_o *)
                    (**(code **)(*(long *)SVar22 + 0x178))(SVar22,*(undefined8 *)(*(long *)SVar22 + 0x180));
          pSStack_78 = (System_String_array *)0x43edb83;
          unaff_R15 = (long *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          pSStack_78 = (System_String_array *)0x43edba5;
          UI_ElementStyle___ctor((UI_ElementStyle_o *)unaff_R15,uVar11,120.0,20.0,pSVar12,(MethodInfo *)0x0);
          iVar8 = *(int32_t *)((long)SVar14 + 0x18);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            pSStack_78 = (System_String_array *)0x43edbc1;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_78 = (System_String_array *)0x43edbce;
          pSVar13 = (System_String_array *)GameManagers_ChatManager__GetIDString(iVar8,0,0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            pSStack_78 = (System_String_array *)0x43edbe9;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar36 = **(System_String_Fields **)(TypeInfo_PlayerProperty + 0xb8);
          pSStack_78 = (System_String_array *)0x43edc0a;
          str1 = (System_String_Fields)
                 PhotonExtensions__GetStringProperty
                           ((Photon_Realtime_Player_o *)SVar14,(System_String_o *)SVar36,"",
                            (MethodInfo *)0x0);
          __this_00 = *(System_Collections_Generic_Dictionary_int__Dictionary_string__float___o **)
                       &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)SVar22 + 0x68))
                        ->fields;
          ppSVar39._0_4_ = 0;
          ppSVar39._4_2_ = 0;
          ppSVar39._6_2_ = 0;
          SVar15 = (System_String_Fields)&TypeInfo_PlayerProperty;
          if (__this_00 != (System_Collections_Generic_Dictionary_int__Dictionary_string__float___o *)0x0) {
            pSStack_78 = (System_String_array *)0x43edc1d;
            pUVar32 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
            pSStack_78 = (System_String_array *)0x43edc2d;
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)pSVar13,(System_String_o *)str1,(MethodInfo *)0x0);
            pSStack_78 = (System_String_array *)0x43edc46;
            SVar36 = (System_String_Fields)unaff_R15;
            value = UI_ElementFactory__CreateWhiteLabel
                              (pUVar32,(UI_ElementStyle_o *)unaff_R15,pSVar12,0,3,(MethodInfo *)0x0);
            ppSVar39._0_4_ = 0;
            ppSVar39._4_2_ = 0;
            ppSVar39._6_2_ = 0;
            SVar15 = str1;
            if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar22 + 0x70) !=
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              pSStack_78 = (System_String_array *)0x43edc65;
              System_Collections_Generic_Dictionary_int__object___Add
                        (*(System_Collections_Generic_Dictionary_int__object__o **)((long)SVar22 + 0x70),
                         *(int32_t *)((long)SVar14 + 0x18),(Il2CppObject *)value,MethodInfo_Void_Add);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      pSStack_78 = (System_String_array *)0x43edc7f;
      il2cpp_runtime_helper_022b2c90();
      SVar14 = SVar36;
      SVar36 = SVar22;
    }
    *(long **)((long)ppSVar34 + -8) = unaff_R15;
    *(System_String_Fields *)((long)ppSVar34 + -0x10) = SVar36;
    *(System_String_Fields *)((long)ppSVar34 + -0x18) = SVar15;
    SVar22 = SVar14;
    plVar40 = (long *)ppSVar39;
    if (g_data_057ae503 == '\0') {
      *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edca0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edcac;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edcb8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
      plVar40 = &TypeInfo_Object;
      *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edcc4;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae503 = '\x01';
    }
    if (SVar14 != (System_String_Fields)0x0) {
      pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)ppSVar39 + 0x70);
      plVar40._0_4_ = 0;
      plVar40._4_2_ = 0;
      plVar40._6_2_ = 0;
      if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar11 = *(uint *)((long)SVar14 + 0x18);
        SVar22._4_4_ = 0;
        SVar22._stringLength = uVar11;
        *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edcf3;
        bVar10 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar18,uVar11,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar10 == '\0') {
          return;
        }
        pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)ppSVar39 + 0x70);
        plVar40._0_4_ = 0;
        plVar40._4_2_ = 0;
        plVar40._6_2_ = 0;
        if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar8 = *(int32_t *)((long)SVar14 + 0x18);
          *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edd12;
          unaff_R15 = (long *)System_Collections_Generic_Dictionary_int__object___get_Item
                                        (pSVar18,iVar8,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edd2d;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar22._stringLength = 0;
          SVar22._firstChar = 0;
          SVar22._6_2_ = 0;
          *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edd37;
          UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_R15,(MethodInfo *)0x0);
          pSVar18 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)ppSVar39 + 0x70);
          plVar40._0_4_ = 0;
          plVar40._4_2_ = 0;
          plVar40._6_2_ = 0;
          if (pSVar18 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            iVar8 = *(int32_t *)((long)SVar14 + 0x18);
            *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edd52;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar18,iVar8,MethodInfo_Boolean_Remove);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar34 + -0x20) = 0x43edd69;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Transform_o **)((long)ppSVar34 + -0x20) = pUVar32;
    *(long **)((long)ppSVar34 + -0x28) = unaff_R15;
    *(System_String_o ***)((long)ppSVar34 + -0x30) = ppSVar39;
    *(System_String_array **)((long)ppSVar34 + -0x38) = pSVar13;
    *(System_String_Fields *)((long)ppSVar34 + -0x40) = SVar14;
    __this_08 = (System_String_o **)plVar40;
    if (g_data_057ae504 == '\0') {
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edd93;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edd9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43eddab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43eddb7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43eddc3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43eddcf;
      il2cpp_runtime_helper_023445d0(&"TextColor");
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edddb;
      il2cpp_runtime_helper_023445d0(&"DefaultPanel");
      __this_08 = &"Default";
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edde7;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae504 = '\x01';
    }
    lVar27 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x148), lVar27 != 0)) {
      iVar8 = *(int32_t *)(lVar27 + 0x14);
      uVar17 = *(undefined8 *)(*plVar40 + 0x180);
      pcVar2 = *(code **)(*plVar40 + 0x178);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43ede33;
      pSVar12 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43ede45;
      SVar14 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43ede68;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)SVar14,iVar8,120.0,20.0,pSVar12,(MethodInfo *)0x0);
      __this_01 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)plVar40 + 0x68))->
                    fields;
      __this_08._0_4_ = 0;
      __this_08._4_2_ = 0;
      __this_08._6_2_ = 0;
      if (__this_01 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43ede7c;
        __this_08 = (System_String_o **)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43ede95;
        SVar15 = (System_String_Fields)
                 UI_ElementFactory__CreateWhiteLabel
                           ((UnityEngine_Transform_o *)__this_08,(UI_ElementStyle_o *)SVar14,
                            (System_String_o *)SVar22,0,3,(MethodInfo *)0x0);
        if (SVar15 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edeb3;
          __this_08 = (System_String_o **)SVar15;
          pIVar16 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar15,MethodInfo_Text_GetComponent_Text);
          SVar22 = SVar15;
          if (SVar14 != (System_String_Fields)0x0) {
            SVar14 = *(System_String_Fields *)((long)SVar14 + 0x18);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43eded7;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edf00;
            __this_08 = (System_String_o **)SVar14;
            UVar45 = UI_UIManager__GetThemeColor
                               ((System_String_o *)SVar14,"TextColor","Default","DefaultPanel",
                                (MethodInfo *)0x0);
            plVar40._0_4_ = 0;
            plVar40._4_2_ = 0;
            plVar40._6_2_ = 0;
            if (pIVar16 != (Il2CppObject *)0x0) {
              pMVar37 = pIVar16->klass->vtable[0x17].method;
              pIVar3 = pIVar16->klass->vtable[0x17].methodPtr;
              *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edf18;
              (*pIVar3)(UVar45.fields.r,UVar45.fields._8_8_,pIVar16,pMVar37);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)ppSVar34 + -0x48) = 0x43edf29;
    uVar17 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields *)((long)ppSVar34 + -0x48) = SVar22;
    *(System_String_Fields *)((long)ppSVar34 + -0x50) = SVar14;
    *(undefined8 *)((long)ppSVar34 + -0x58) = uVar17;
    if (g_data_057ae505 == '\0') {
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43edf4c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43edf58;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
      g_data_057ae505 = '\x01';
    }
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43edf6e;
    pSVar18 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43edf83;
    System_Collections_Generic_Dictionary_int__object____ctor(pSVar18,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    *(System_Collections_Generic_Dictionary_int__object__o **)((long)__this_08 + 0x70) = pSVar18;
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43edf93;
    il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)__this_08 + 0x70),pSVar18);
    uVar17 = *(undefined8 *)((long)ppSVar34 + -0x50);
    uVar5 = *(undefined8 *)((long)ppSVar34 + -0x48);
    *(long **)((long)ppSVar34 + -0x48) = plVar40;
    *(undefined8 *)((long)ppSVar34 + -0x50) = uVar5;
    *(undefined8 *)((long)ppSVar34 + -0x58) = uVar17;
    if (g_data_057ae02c == '\0') {
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x432777d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327789;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327795;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43277a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43277ad;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      g_data_057ae02c = '\x01';
    }
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43277c3;
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43277d8;
    System_Collections_Generic_List_object____ctor(__this_03,MethodInfo_List_1_UI_BasePopup);
    *(System_Collections_Generic_List_object__o **)
     &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)__this_08 + 0x38))->fields =
         __this_03;
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x43277e8;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *)((long)__this_08 + 0x38)
                       ,__this_03);
    pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x432780f;
    __this_04 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327824;
    Settings_StringSetting___ctor_40f74f0(__this_04,pSVar12,0x7fffffff,(MethodInfo *)0x0);
    *(Settings_StringSetting_o **)((long)__this_08 + 0x48) = __this_04;
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327834;
    il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)__this_08 + 0x48),__this_04);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327843;
    __this_05 = (System_Collections_Generic_Dictionary_int__object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327858;
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,MethodInfo_Dictionary_2_System_String_System_Type);
    ((System_Collections_Generic_Dictionary_int__object__o *)((long)__this_08 + 0x50))->klass = __this_05;
    *(undefined8 *)((long)ppSVar34 + -0x60) = 0x4327868;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_int__object__o *)((long)__this_08 + 0x50));
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_08,(MethodInfo *)0x0);
    return;
  }
  SStack_58._stringLength = 0x454e611;
  SStack_58._firstChar = 0;
  SStack_58._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  SStack_58 = SVar22;
  if (g_data_057aef8d == '\0') {
    SStack_60._stringLength = 0x454e68c;
    SStack_60._firstChar = 0;
    SStack_60._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    SStack_60._stringLength = 0x454e698;
    SStack_60._firstChar = 0;
    SStack_60._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aef8d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
    SStack_60._stringLength = 0x454e6cf;
    SStack_60._firstChar = 0;
    SStack_60._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
    SStack_60._stringLength = 0x454e6b7;
    SStack_60._firstChar = 0;
    SStack_60._6_2_ = 0;
    il2cpp_runtime_helper_02337ed0();
    pSVar25 = *(System_String_array **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
    pIVar41 = (pSVar25->obj).klass;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pIVar41->_2).naturalAligment) &&
       ((pIVar41->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameMenu)) {
      return;
    }
  }
  SStack_60._stringLength = 0x454e6d4;
  SStack_60._firstChar = 0;
  SStack_60._6_2_ = 0;
  il2cpp_runtime_helper_022b2fd0();
  pSVar35 = (System_String_Fields *)&pSStack_70;
  pSStack_70 = (System_String_array *)&TypeInfo_UIManager;
  SStack_68 = SVar14;
  SStack_60 = (System_String_Fields)unaff_R15;
  if (g_data_057aef81 == '\0') {
    pSStack_78 = (System_String_array *)0x454e6fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pSStack_78 = (System_String_array *)0x454e709;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pSStack_78 = (System_String_array *)0x454e715;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aef81 = '\x01';
  }
  __this_10 = (MethodInfo **)&g_data_057b9b70;
  pSStack_78 = (System_String_array *)0x454e73e;
  bVar10 = System_String__op_Equality
                     ((System_String_o *)pSVar25,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  plVar40 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pSStack_78 = (System_String_array *)0x454e760;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar26 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (pSVar26 == (System_String_array *)0x0) {
label_0454e854:
    pSVar23 = pSVar26;
    pSStack_78 = (System_String_array *)0x454e859;
    pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSStack_78 = (System_String_array *)0x454e781;
    pSVar23 = (System_String_array *)
              CustomLogic_CustomLogicEvaluator__OnChatInput
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar26,(System_String_o *)pSVar25,
                         (MethodInfo *)0x0);
    if ((pSVar23 != (System_String_array *)0x0) && (in_RCX = (pSVar23->obj).klass, in_RCX == g_data_057b9b98)) {
      pSStack_78 = (System_String_array *)0x454e797;
      pcVar24 = (char *)il2cpp_runtime_helper_02305440();
      pSVar26 = pSVar23;
      if (*pcVar24 == '\0') {
        return;
      }
    }
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e854;
    pSStack_78 = (System_String_array *)0x454e7b9;
    pMVar37 = "/";
    bVar10 = System_String__StartsWith
                       ((System_String_o *)pSVar25,(System_String_o *)"/",(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        pSStack_78 = (System_String_array *)0x454e83f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_78 = (System_String_array *)0x454e847;
      pSVar12 = GameManagers_ChatManager__ProcessMentions((System_String_o *)pSVar25,pMVar37);
      pSVar25 = pSStack_70;
      pSStack_78 = pSStack_70;
      pSStack_70 = pSVar13;
      if (g_data_057aef6e == '\0') {
        pSStack_98 = (System_String_o *)0x454bb53;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        pSStack_98 = (System_String_o *)0x454bb5f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        pSStack_98 = (System_String_o *)0x454bb6b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
        pSStack_98 = (System_String_o *)0x454bb77;
        il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
        g_data_057aef6e = '\x01';
      }
      SStack_88._dateData = 0;
      pPVar33 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSStack_98 = (System_String_o *)0x454bbaf;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (pSVar26 != (System_String_array *)0x0) {
        if (pSVar12 != (System_String_o *)0x0) {
          pSStack_98 = (System_String_o *)0x454bbd0;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar12);
          if (lVar27 == 0) goto label_0454bcaf;
        }
        pSVar13 = pSVar26;
        if ((int)pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = pSVar12;
          pSStack_98 = (System_String_o *)0x454bbf7;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
            pSStack_98 = (System_String_o *)0x454bc0f;
            il2cpp_runtime_helper_02337ed0();
          }
          pSStack_98 = (System_String_o *)0x454bc16;
          SStack_88._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
          pSStack_98 = (System_String_o *)0x454bc27;
          iStack_80 = System_DateTime__get_Ticks((System_DateTime_o)&SStack_88,(MethodInfo *)0x0);
          pSStack_98 = (System_String_o *)0x454bc41;
          pSVar25 = (System_String_array *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
          if (pSVar25 != (System_String_array *)0x0) {
            pSStack_98 = (System_String_o *)0x454bc59;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar25);
            if (lVar27 == 0) goto label_0454bcaf;
          }
          if (1 < (uint)pSVar26->max_length) {
            pSVar26->m_Items[1] = (System_String_o *)pSVar25;
            pSStack_98 = (System_String_o *)0x454bc7a;
            il2cpp_runtime_helper_022b4080(pSVar26->m_Items + 1);
            if (pPVar33 != (Photon_Pun_PhotonView_o *)0x0) {
              pSStack_98 = (System_String_o *)0x454bc99;
              Photon_Pun_PhotonView__RPC
                        (pPVar33,"PlayerChatRPC",0,(System_Object_array *)pSVar26,(MethodInfo *)0x0);
              return;
            }
            goto label_0454bcaa;
          }
        }
        pSStack_98 = (System_String_o *)0x454bcaa;
        il2cpp_runtime_helper_022b2ca0();
      }
label_0454bcaa:
      pSVar26 = pSVar13;
      pSStack_98 = (System_String_o *)0x454bcaf;
      il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
      pSStack_98 = (System_String_o *)0x454bcb4;
      pSVar19 = (System_String_o *)il2cpp_runtime_helper_0231b270();
      pSVar21 = (System_String_o *)0x0;
      pSStack_98 = (System_String_o *)0x454bcbe;
      il2cpp_runtime_helper_022b2b10();
      pSVar31 = pSVar21;
      pSStack_b8 = pSVar25;
      pSStack_b0 = pSVar26;
      SStack_a8 = unaff_R13;
      pPStack_a0 = pPVar33;
      pSStack_98 = pSVar12;
      if (g_data_057aef70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        g_data_057aef70 = '\x01';
      }
      SStack_d0.fields._dateData = (System_DateTime_Fields)0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar6 = iStack_80;
      pIVar41 = TypeInfo_InGameManager;
      if (iStack_80 != 0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        pIVar41 = (Il2CppClass *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,*(int32_t *)(iStack_80 + 0x18),MethodInfo_Boolean_Contains);
          if ((char)bVar10 == '\0') {
            uStack_d4 = *(undefined4 *)(iVar6 + 0x18);
            pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_d4);
            uStack_d8 = *(undefined4 *)(iVar6 + 0x18);
            pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_d8);
            ppSVar39 = &"[{0}]";
            pSVar12 = System_String__Format("[{0}]",pIVar20,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,1,0,(MethodInfo *)ppSVar39);
            pSVar12 = System_String__Format_3af78e0
                                ("<link=\"{0}\">{1}</link>",pIVar16,(Il2CppObject *)pSVar12,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_3af7150(pSVar12," ",pSVar19,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo_37E4C90 *)0x0;
            System_DateTime___ctor_3c8ff10((System_DateTime_o)&SStack_d0,(int64_t)pSVar21,1,(MethodInfo *)0x0)
            ;
            pPStack_c8 = (Photon_Realtime_Player_o *)0x0;
            SStack_c0._dateData = 0;
            __this_11.fields.value.fields._dateData = SStack_d0.fields._dateData;
            __this_11.fields._0_8_ = &pPStack_c8;
            System_Nullable_DateTime____ctor(__this_11,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
            timestamp.fields._0_8_ = (ulong)pPStack_c8 & 0xffffffff;
            timestamp.fields.value.fields._dateData =
                 (System_DateTime_Fields)(System_DateTime_Fields)SStack_c0._dateData;
            GameManagers_ChatManager__AddLine
                      (pSVar12,0,0,timestamp,*(int32_t *)(iVar6 + 0x18),0,0,-1,0,in_stack_ffffffffffffff18);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = pSVar31;
      if (g_data_057aef71 == '\0') {
        uStack_118 = 0x454bf06;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        uStack_118 = 0x454bf12;
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        uStack_118 = 0x454bf1e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        uStack_118 = 0x454bf2a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        g_data_057aef71 = '\x01';
      }
      timestamp_00._dateData = 0;
      if (*(int *)&(TypeInfo_InGameManager->_2).field_0x1c == 0) {
        uStack_118 = 0x454bf57;
        il2cpp_runtime_helper_02337ed0();
      }
      player_00 = TypeInfo_InGameManager;
      if (pPStack_c8 != (Photon_Realtime_Player_o *)0x0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)((long)TypeInfo_InGameManager->static_fields + 0x28);
        player_00 = (Il2CppClass *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          uStack_118 = 0x454bf8e;
          bVar10 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,(pPStack_c8->fields).actorNumber,MethodInfo_Boolean_Contains);
          if ((char)bVar10 == '\0') {
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              uStack_118 = 0x454bfaa;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_118 = 0x454bfbe;
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&stack0xffffffffffffff00,(int64_t)pSVar31,1,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              uStack_118 = 0x454bfdb;
              il2cpp_runtime_helper_02337ed0();
            }
            uStack_118 = 0x454bff4;
            GameManagers_ChatManager__AddPlayerLine
                      (pPStack_c8,(System_String_o *)pIVar41,0,(System_DateTime_o)timestamp_00._dateData,0,-1,
                       in_stack_fffffffffffffef0);
          }
          return;
        }
      }
      uStack_118 = 0x454c005;
      il2cpp_runtime_helper_022b2c90();
      pPStack_140 = pPStack_c8;
      pSStack_138 = &SStack_d0;
      SStack_130 = unaff_R13;
      pIStack_128 = pIVar41;
      pSStack_120 = pSVar31;
      uStack_118 = uVar38;
      if (g_data_057aef74 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&": ");
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aef74 = '\x01';
      }
      uStack_168 = 0;
      pSStack_160 = (System_String_o *)0x0;
      apSStack_158[0] = (System_String_o *)0x0;
      if (player_00 == (Il2CppClass *)0x0) {
        return;
      }
      SStack_148.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)in_RCX;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar37 = (MethodInfo *)0x0;
      pSVar31 = PhotonExtensions__GetStringProperty
                          ((Photon_Realtime_Player_o *)player_00,
                           (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar31 = Anticheat_ChatFilter__FilterSizeTag(pSVar31,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) {
        pSVar12 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        iVar9 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      else {
        iVar9 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      if (iVar9 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = Anticheat_ChatFilter__FilterSizeTag(pSVar12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar12 = MiscExtensions__ReplaceNamedColorTags(pSVar12,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = GameManagers_ChatManager__GetColorString(pSVar12,color,0,pMVar37);
      uStack_16c = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_16c);
      uStack_170 = *(undefined4 *)&(player_00->_1).namespaze;
      pIVar20 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_170);
      ppSVar39 = &"[{0}]";
      pSVar12 = System_String__Format("[{0}]",pIVar20,(MethodInfo *)0x0);
      pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,1,0,(MethodInfo *)ppSVar39);
      pSVar21 = System_String__Format_3af78e0("<link=\"{0}\">{1}</link>",pIVar16,(Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      pSVar12 = TypeInfo_string;
      pSVar13 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
      if (pSVar13 != (System_String_array *)0x0) {
        if ((int)pSVar13->max_length != 0) {
          pSVar12 = (System_String_o *)pSVar13->m_Items;
          pSVar13->m_Items[0] = pSVar21;
          il2cpp_runtime_helper_022b4080(pSVar12,pSVar21);
          if (1 < (uint)pSVar13->max_length) {
            pSVar12 = (System_String_o *)(pSVar13->m_Items + 1);
            pSVar13->m_Items[1] = " ";
            il2cpp_runtime_helper_022b4080();
            if (2 < (uint)pSVar13->max_length) {
              pSVar12 = (System_String_o *)(pSVar13->m_Items + 2);
              pSVar13->m_Items[2] = pSVar31;
              il2cpp_runtime_helper_022b4080(pSVar12,pSVar31);
              if (3 < (uint)pSVar13->max_length) {
                pSVar12 = (System_String_o *)(pSVar13->m_Items + 3);
                pSVar13->m_Items[3] = ": ";
                il2cpp_runtime_helper_022b4080();
                if (4 < (uint)pSVar13->max_length) {
                  pSVar13->m_Items[4] = pSVar19;
                  il2cpp_runtime_helper_022b4080(pSVar13->m_Items + 4);
                  pSVar12 = System_String__Concat_3af7570(pSVar13,(MethodInfo *)0x0);
                  iVar8 = *(int32_t *)&(player_00->_1).namespaze;
                  apSStack_158[0] = (System_String_o *)0x0;
                  uStack_168 = 1;
                  pSStack_160 = pSVar31;
                  il2cpp_runtime_helper_022b4080(&pSStack_160,pSVar31);
                  apSStack_158[0] = pSVar19;
                  il2cpp_runtime_helper_022b4080(apSStack_158,pSVar19);
                  playerLineData.fields.SenderName = pSStack_160;
                  playerLineData.fields._0_8_ = uStack_168;
                  playerLineData.fields.BodyText = apSStack_158[0];
                  GameManagers_ChatManager__AddLineInternal
                            (pSVar12,0,0,SStack_148,iVar8,0,in_R8D & 0xff,in_R9D,0,playerLineData,
                             in_stack_fffffffffffffe78);
                  return;
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aef72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        g_data_057aef72 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__AddLine
                (pSVar12,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_fffffffffffffe30);
      return;
    }
    if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar25->bounds)->_networkCallback == 1) {
      return;
    }
    pMVar37 = (MethodInfo *)0x1;
    pSStack_78 = (System_String_array *)0x454e7d6;
    pSVar25 = (System_String_array *)System_String__Substring((System_String_o *)pSVar25,1,(MethodInfo *)0x0);
    __this_10 = &TypeInfo_ChatManager;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_78 = (System_String_array *)0x454e7f1;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_78 = (System_String_array *)0x454e7f9;
    pSVar26 = pSVar25;
    pSVar23 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)pSVar25,pMVar37);
    if (pSVar23 == (System_String_array *)0x0) goto label_0454e854;
    if (pSVar23->max_length == 0) {
      return;
    }
    pSVar26 = pSVar23;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      pSStack_78 = (System_String_array *)0x454e81d;
      pSVar26 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
    }
    pSVar35 = &SStack_58;
    pSVar25 = pSStack_70;
    __this_10 = (MethodInfo **)SStack_68;
    plVar40 = (long *)SStack_60;
  }
  *(ulong *)((long)pSVar35 + -8) = uVar38;
  *(long **)((long)pSVar35 + -0x10) = plVar40;
  *(MethodInfo ***)((long)pSVar35 + -0x18) = __this_10;
  *(System_String_Fields *)((long)pSVar35 + -0x20) = unaff_R13;
  *(System_String_array **)((long)pSVar35 + -0x28) = pSVar13;
  *(System_String_array **)((long)pSVar35 + -0x30) = pSVar25;
  *(System_String_array **)((long)pSVar35 + -0x38) = pSVar26;
  if (g_data_057aef84 == '\0') {
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e887;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e893;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e89f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8f3;
    il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e8ff;
    il2cpp_runtime_helper_023445d0(&"Command ");
    g_data_057aef84 = '\x01';
  }
  *(undefined8 *)((long)pSVar35 + -0x38) = 0;
  userMethod = &TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e926;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar14 = unaff_R13;
  if (pSVar23 == (System_String_array *)0x0) goto label_0454ed3e;
  pSVar26 = pSVar25;
  if (*(int *)&pSVar23->max_length == 0) goto label_0454ed43;
  pSVar12 = pSVar23->m_Items[0];
  if (pSVar12 == (System_String_o *)0x0) {
label_0454ed3e:
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed43;
    il2cpp_runtime_helper_022b2c90();
    pSVar26 = pSVar25;
    unaff_R13 = SVar14;
  }
  else {
    pSVar26 = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e95e;
    pSVar12 = System_String__ToLower(pSVar12,(MethodInfo *)0x0);
    pSVar25 = pSVar26;
    if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
    *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e97f;
    bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar26,
                        (Il2CppObject *)pSVar12,(Il2CppObject **)((long)pSVar35 + -0x38),MethodInfo_Boolean_TryGetValue);
    lVar27 = MethodInfo_String_Empty_String;
    if ((char)bVar10 == '\0') {
      if (*(int *)&pSVar23->max_length != 0) {
        pSVar12 = pSVar23->m_Items[0];
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ea69;
        pSVar12 = System_String__Concat_3af7150("Command ",pSVar12," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ea7d;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)pSVar35 + -0x50) = 0;
        *(undefined8 *)((long)pSVar35 + -0x58) = 0xffffffffffffffff;
        *(undefined8 *)((long)pSVar35 + -0x60) = 0;
        *(undefined8 *)((long)pSVar35 + -0x68) = 0;
        *(undefined8 *)((long)pSVar35 + -0x70) = 0x454eaac;
        GameManagers_ChatManager__AddLine
                  (pSVar12,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,
                   *(bool_conflict *)((long)pSVar35 + -0x68),*(bool_conflict *)((long)pSVar35 + -0x60),
                   *(int32_t *)((long)pSVar35 + -0x58),*(bool_conflict *)((long)pSVar35 + -0x50),
                   *(MethodInfo **)((long)pSVar35 + -0x48));
        return;
      }
      goto label_0454ed43;
    }
    pSVar25 = *(System_String_array **)((long)pSVar35 + -0x38);
    if (pSVar25 == (System_String_array *)0x0) goto label_0454ed3e;
    pIVar41 = (pSVar25->obj).klass;
    bVar1 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
    if (((pIVar41->_2).naturalAligment < bVar1) ||
       ((pIVar41->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLCommandAttribute)) {
      __this_10 = *(MethodInfo ***)(pSVar25->m_Items + 1);
      if ((System_String_Fields)__this_10 == (System_String_Fields)0x0) goto label_0454ed3e;
      *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e9d9;
      bVar10 = System_Reflection_MethodBase__get_IsStatic
                         ((System_Reflection_MethodBase_o *)__this_10,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eac6;
          il2cpp_runtime_helper_02337ed0();
        }
        userMethod = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eae8;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar41 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eb03;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar41);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eb29;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items,pSVar23);
          goto label_0454eb2f;
        }
      }
      else {
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454e9f5;
        pSVar26 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar26 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar41 = (((pSVar26->obj).klass)->_1).element_class;
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ea10;
        lVar27 = il2cpp_runtime_helper_023051f0(pSVar23,pIVar41);
        if (lVar27 == 0) goto label_0454ed48;
        if (*(int *)&pSVar26->max_length != 0) {
          pSVar26->m_Items[0] = (System_String_o *)pSVar23;
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ea36;
          il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          userMethod = (MethodInfo **)0x0;
label_0454eb2f:
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eb39;
          System_Reflection_MethodBase__Invoke
                    ((System_Reflection_MethodBase_o *)__this_10,(Il2CppObject *)userMethod,
                     (System_Object_array *)pSVar26,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)&pSVar23->max_length < 2) {
        if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ecf5;
          il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
          lVar28 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
          if (*(int *)(lVar28 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed24;
          il2cpp_runtime_helper_02337ed0();
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar27 + 0x135);
        }
        else {
          lVar28 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
          if ((*(byte *)(lVar28 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed0f;
          lVar28 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar28 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
          lVar27 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar27 + 0x135);
        }
        if ((bVar1 & 1) == 0) {
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ebdd;
          lVar27 = il2cpp_runtime_helper_023009c0(lVar27);
        }
        pSVar13 = (System_String_array *)**(undefined8 **)(lVar27 + 0xb8);
        iVar9 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eb65;
        pSVar29 = System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar23,1,MethodInfo_IEnumerable_1_System_String_Skip_String);
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eb77;
        pSVar13 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(pSVar29,MethodInfo_String_ToArray_String);
        iVar9 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar9 == 0) {
        *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ebff;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_10 = *(MethodInfo ***)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if ((System_String_Fields)__this_10 == (System_String_Fields)0x0) {
        return;
      }
      userMethod = (MethodInfo **)pSVar25->m_Items[5];
      *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ec2e;
      SVar14 = (System_String_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pSVar26 = pSVar25;
      if (*(int *)&pSVar23->max_length != 0) {
        if (SVar14 == (System_String_Fields)0x0) goto label_0454ed3e;
        pSVar26 = (System_String_array *)pSVar23->m_Items[0];
        if (pSVar26 != (System_String_array *)0x0) {
          uVar17 = *(undefined8 *)(*(long *)SVar14 + 0x40);
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ec5d;
          lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar17);
          if (lVar27 == 0) goto label_0454ed48;
        }
        unaff_R13 = SVar14;
        if (*(int *)((long)SVar14 + 0x18) != 0) {
          *(System_String_array **)((long)SVar14 + 0x20) = pSVar26;
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ec81;
          il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar14 + 0x20),pSVar26);
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ec90;
          pSVar26 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
          *(undefined8 *)((long)pSVar35 + -0x40) = 0x454eca0;
          CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                    ((CustomLogic_CustomLogicListBuiltin_o *)pSVar26,(System_Object_array *)pSVar13,
                     (MethodInfo *)0x0);
          if (pSVar26 != (System_String_array *)0x0) {
            uVar17 = *(undefined8 *)(*(long *)SVar14 + 0x40);
            *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ecb5;
            lVar27 = il2cpp_runtime_helper_023051f0(pSVar26,uVar17);
            if (lVar27 == 0) goto label_0454ed48;
          }
          if (1 < *(uint *)((long)SVar14 + 0x18)) {
            *(System_String_array **)((long)SVar14 + 0x28) = pSVar26;
            *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ecd8;
            il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)SVar14 + 0x28),pSVar26);
            *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ece8;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                      ((CustomLogic_CustomLogicEvaluator_o *)__this_10,(CustomLogic_UserMethod_o *)userMethod,
                       (System_Object_array *)SVar14,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0454ed43:
  *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed48;
  il2cpp_runtime_helper_022b2ca0();
  SVar14 = unaff_R13;
label_0454ed48:
  *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed4d;
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)((long)pSVar35 + -0x40) = 0x454ed57;
  uVar17 = il2cpp_runtime_helper_022b2b10(pSVar12,0);
  *(System_String_array **)((long)pSVar35 + -0x40) = pSVar23;
  *(MethodInfo ***)((long)pSVar35 + -0x48) = userMethod;
  *(MethodInfo ***)((long)pSVar35 + -0x50) = __this_10;
  *(System_String_Fields *)((long)pSVar35 + -0x58) = SVar14;
  *(System_String_array **)((long)pSVar35 + -0x60) = pSVar13;
  *(System_String_array **)((long)pSVar35 + -0x68) = pSVar26;
  *(undefined8 *)((long)pSVar35 + -0x70) = uVar17;
  if (g_data_057aef82 == '\0') {
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ed87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ed93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ed9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edc3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edcf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ede7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454edff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ee0b;
    il2cpp_runtime_helper_023445d0(&"@");
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ee17;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef82 = '\x01';
  }
  if (pSVar12 != (System_String_o *)0x0) {
    *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ee36;
    iVar8 = System_String__IndexOf(pSVar12,0x40,(MethodInfo *)0x0);
    if (iVar8 == -1) {
      return;
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ee5b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
      *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ee7d;
      System_Text_StringBuilder__Clear(pSVar30,(MethodInfo *)0x0);
      pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar30 != (System_Text_StringBuilder_o *)0x0) {
        *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eea2;
        System_Text_StringBuilder__Append_3b03f90(pSVar30,pSVar12,(MethodInfo *)0x0);
label_0454eeda:
        do {
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eee3;
          __this_06 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eef0;
          GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_06,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ef02;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar40 == (long *)0x0) goto label_0454f2d9;
          uVar17 = *(undefined8 *)(*plVar40 + 0x170);
          pcVar2 = *(code **)(*plVar40 + 0x168);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ef2d;
          pSVar12 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
          if (pSVar12 == (System_String_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ef48;
          iVar9 = System_String__IndexOf_3afbe50(pSVar12,0x20,iVar8,(MethodInfo *)0x0);
          if (iVar9 == -1) {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              *(undefined8 *)((long)pSVar35 + -0x78) = 0x454ef92;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454efb4;
            iVar9 = System_Text_StringBuilder__get_Length(pSVar30,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          else {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454efc8;
            il2cpp_runtime_helper_02337ed0();
            pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eff7;
          pSVar12 = System_Text_StringBuilder__ToString_3b032f0
                              (pSVar30,iVar8 + 1,(iVar9 - iVar8) + -1,(MethodInfo *)0x0);
          if (__this_06 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
          (__this_06->fields).mention = pSVar12;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f013;
          il2cpp_runtime_helper_022b4080(&__this_06->fields);
          pSVar12 = (__this_06->fields).mention;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f01e;
          bVar10 = System_String__IsNullOrWhiteSpace(pSVar12,(MethodInfo *)0x0);
          if ((char)bVar10 != '\0') {
            iVar9 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
            if (iVar9 == 0) {
              *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f034;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (plVar40 == (long *)0x0) goto label_0454f2d9;
            uVar17 = *(undefined8 *)(*plVar40 + 0x170);
            pcVar2 = *(code **)(*plVar40 + 0x168);
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f05f;
            pSVar12 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
            if (pSVar12 == (System_String_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f07a;
            iVar8 = System_String__IndexOf_3afbe50(pSVar12,0x40,iVar8 + 1,(MethodInfo *)0x0);
            if (iVar8 == -1) break;
            goto label_0454eeda;
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f0a8;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f0af;
          source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f0c1;
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f0db;
          System_Func_object__bool____ctor();
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f0f0;
          pSVar29 = System_Linq_Enumerable__Where_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                               MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f102;
          __this_07 = System_Linq_Enumerable__ToList_object_(pSVar29,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
          if (__this_07 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
          if ((__this_07->fields)._size != 1) {
            iVar9 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
            goto joined_r0x0454f02d;
          }
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f130;
          player = (Photon_Realtime_Player_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_07,0,MethodInfo_Player_get_Item);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f14e;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar12 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f16f;
          pSVar12 = PhotonExtensions__GetStringProperty(player,pSVar12,"",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f18a;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f194;
          pSVar12 = Anticheat_ChatFilter__FilterSizeTag(pSVar12,(MethodInfo *)0x0);
          ppSVar39 = &"@";
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f1a8;
          pSVar12 = System_String__Concat_3ae5ba0("@",pSVar12,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f1bd;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f1cc;
          pSVar12 = GameManagers_ChatManager__GetColorString(pSVar12,2,0,(MethodInfo *)ppSVar39);
          pSVar30 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f1f6;
          pSVar30 = System_Text_StringBuilder__Remove(pSVar30,iVar8,iVar9 - iVar8,(MethodInfo *)0x0);
          if (pSVar30 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f20f;
          System_Text_StringBuilder__Insert(pSVar30,iVar8,pSVar12,(MethodInfo *)0x0);
          plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar40 == (long *)0x0) goto label_0454f2d9;
          uVar17 = *(undefined8 *)(*plVar40 + 0x170);
          pcVar2 = *(code **)(*plVar40 + 0x168);
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f23a;
          pSVar31 = (System_String_o *)(*pcVar2)(plVar40,uVar17);
          if ((pSVar12 == (System_String_o *)0x0) || (pSVar31 == (System_String_o *)0x0)) goto label_0454f2d9;
          iVar9 = (pSVar12->fields)._stringLength;
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454eec6;
          iVar8 = System_String__IndexOf_3afbe50(pSVar31,0x40,iVar8 + iVar9,(MethodInfo *)0x0);
        } while (iVar8 != -1);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f28f;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar40 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
        if (plVar40 != (long *)0x0) {
          (**(code **)(*plVar40 + 0x168))(plVar40,*(undefined8 *)(*plVar40 + 0x170));
          return;
        }
      }
    }
  }
label_0454f2d9:
  *(undefined8 *)((long)pSVar35 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameManagers.PhotonVoiceSync$$LateUpdate
// il2cpp: void GameManagers_PhotonVoiceSync__LateUpdate (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x456f4f0

void GameManagers_PhotonVoiceSync__LateUpdate(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppMethodPointer pIVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  code *pcVar5;
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar6;
  undefined8 uVar7;
  GameManagers_ChatManager_ChatPlayerLineData_o playerLineData;
  int64_t iVar8;
  char cVar9;
  int32_t iVar10;
  int iVar11;
  bool_conflict bVar12;
  uint uVar13;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *pSVar14;
  System_String_o *pSVar15;
  UnityEngine_GameObject_o *pUVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_03;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  Il2CppObject *pIVar18;
  undefined8 uVar19;
  System_Collections_Generic_Dictionary_int__object__o *pSVar20;
  Il2CppObject *pIVar21;
  System_String_o *pSVar22;
  System_String_o *pSVar23;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar24;
  System_String_array *pSVar25;
  char *pcVar26;
  System_String_array *pSVar27;
  long lVar28;
  System_Object_array *pSVar29;
  long lVar30;
  GameManagers_ChatManager___c__DisplayClass93_0_o *__this_04;
  Photon_Realtime_Player_array *source;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar31;
  System_Collections_Generic_List_TSource__o *__this_05;
  Photon_Realtime_Player_o *pPVar32;
  System_Text_StringBuilder_o *pSVar33;
  Photon_Pun_PhotonView_o *pPVar34;
  MethodInfo_37E4C90 *method_00;
  Il2CppClass *in_RCX;
  int32_t color;
  System_String_o *unaff_RBX;
  undefined1 *puVar35;
  UnityEngine_Transform_o *unaff_RBP;
  MethodInfo *pMVar36;
  System_String_o **ppSVar37;
  long *plVar38;
  Photon_Realtime_Player_o *player;
  GameManagers_PhotonVoiceSync_o *__this_06;
  uint in_R8D;
  int32_t in_R9D;
  System_Object_array *unaff_R12;
  System_Object_array *unaff_R13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_R14;
  long *plVar39;
  MethodInfo **userMethod;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_R15;
  UnityEngine_Color_o UVar40;
  System_Nullable_DateTime__o __this_07;
  System_Nullable_DateTime__o timestamp;
  MethodInfo *in_stack_fffffffffffffe68;
  MethodInfo *in_stack_fffffffffffffeb0;
  int32_t iStack_138;
  int32_t iStack_134;
  undefined8 uStack_130;
  System_String_o *pSStack_128;
  System_String_o *apSStack_120 [2];
  System_DateTime_o SStack_110;
  Photon_Realtime_Player_o *pPStack_108;
  System_DateTime_o *pSStack_100;
  MethodInfo *in_stack_ffffffffffffff28;
  System_DateTime_Fields timestamp_00;
  MethodInfo *in_stack_ffffffffffffff50;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  System_DateTime_o SStack_98;
  Photon_Realtime_Player_o *pPStack_90;
  System_DateTime_Fields SStack_88;
  Il2CppObject *pIStack_80;
  System_Object_array *pSStack_78;
  System_DateTime_Fields SStack_50;
  int64_t iStack_48;
  long *plStack_40;
  long *plVar41;
  
  if (g_data_057af050 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    g_data_057af050 = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0456f5b7;
label_0456f51b:
    __this_06 = (GameManagers_PhotonVoiceSync_o *)0x0;
    bVar12 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar9 = (char)bVar12;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0456f51b;
label_0456f5b7:
    il2cpp_runtime_helper_02337ed0();
    __this_06 = (GameManagers_PhotonVoiceSync_o *)0x0;
    bVar12 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar9 = (char)bVar12;
  }
  if (cVar9 == '\0') {
    return;
  }
  pPVar34 = (__this->fields).PhotonView;
  if (pPVar34 == (Photon_Pun_PhotonView_o *)0x0) goto label_0456f61b;
  if ((char)(pPVar34->fields)._IsMine_k__BackingField == '\0') {
    pPVar6 = (__this->fields).VoiceView;
    __this_06 = (GameManagers_PhotonVoiceSync_o *)0x0;
    if (pPVar6 == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0) goto label_0456f61b;
    uVar13 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking(pPVar6,(MethodInfo *)0x0);
    pPVar34 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    __this_06 = __this;
    if (pPVar34 == (Photon_Pun_PhotonView_o *)0x0) goto label_0456f61b;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (pPVar34->fields)._Owner_k__BackingField;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    __this_06 = __this;
    pPVar34 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar34 == (Photon_Pun_PhotonView_o *)0x0) {
label_0456f61b:
      il2cpp_runtime_helper_022b2c90();
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this_06,(MethodInfo *)0x0);
      return;
    }
    pPVar6 = (__this->fields).VoiceView;
    __this_06 = (GameManagers_PhotonVoiceSync_o *)0x0;
    if (pPVar6 == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0) goto label_0456f61b;
    __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                (pPVar34->fields)._Owner_k__BackingField;
    uVar13 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording(pPVar6,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  if (g_data_057aef7f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,(ulong)(uVar13 & 0xff),0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aef7f = '\x01';
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454e5ec;
label_0454e54d:
    bVar12 = GameManagers_ChatManager__IsChatAvailable(TypeInfo_ChatManager);
    cVar9 = (char)bVar12;
    pMVar36 = TypeInfo_ChatManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454e54d;
label_0454e5ec:
    pMVar36 = TypeInfo_ChatManager;
    il2cpp_runtime_helper_02337ed0();
    bVar12 = GameManagers_ChatManager__IsChatAvailable(pMVar36);
    cVar9 = (char)bVar12;
    pMVar36 = TypeInfo_ChatManager;
  }
  if (cVar9 == '\0') {
    TypeInfo_ChatManager = pMVar36;
    return;
  }
  TypeInfo_ChatManager = pMVar36;
  if (*(int *)((long)&pMVar36[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            GameManagers_ChatManager__GetVoiceChatPanel(pMVar36);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pSVar24,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (pSVar24 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppSVar37 = (System_String_o **)pSVar24;
    if ((char)uVar13 != '\0') {
      register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffc8;
      pSVar17 = __this_03;
      if (g_data_057ae502 == '\0') {
        plStack_40 = (long *)0x43eda96;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager,__this_03,0);
        plStack_40 = (long *)0x43edaa2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        plStack_40 = (long *)0x43edaae;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        plStack_40 = (long *)0x43edaba;
        il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
        plStack_40 = (long *)0x43edac6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        plStack_40 = (long *)0x43edad2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
        plStack_40 = (long *)0x43edade;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
        ppSVar37 = &"";
        plStack_40 = (long *)0x43edaea;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae502 = '\x01';
      }
      if ((__this_03 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) &&
         (ppSVar37 = (System_String_o **)pSVar24->m_Items[3].fields.key,
         (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37 !=
         (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  (ulong)*(uint *)&__this_03->max_length;
        plStack_40 = (long *)0x43edb1a;
        bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_int__object__o *)ppSVar37,
                            *(uint *)&__this_03->max_length,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 != '\0') {
          return;
        }
        lVar28 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
        if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x148), lVar28 != 0)) {
          uVar13 = *(uint *)(lVar28 + 0x14);
          unaff_RBP = (UnityEngine_Transform_o *)(ulong)uVar13;
          pIVar2 = (pSVar24->obj).klass;
          plStack_40 = (long *)0x43edb71;
          pSVar14 = (System_String_o *)
                    (*(((UI_VoiceChatPanel_VTable *)pIVar2->vtable)->_4_get_ThemePanel).methodPtr)
                              (pSVar24,(((UI_VoiceChatPanel_VTable *)pIVar2->vtable)->_4_get_ThemePanel).
                                       method);
          plStack_40 = (long *)0x43edb83;
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
          plStack_40 = (long *)0x43edba5;
          UI_ElementStyle___ctor((UI_ElementStyle_o *)unaff_R15,uVar13,120.0,20.0,pSVar14,(MethodInfo *)0x0);
          iVar10 = *(int32_t *)&__this_03->max_length;
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            plStack_40 = (long *)0x43edbc1;
            il2cpp_runtime_helper_02337ed0();
          }
          plStack_40 = (long *)0x43edbce;
          unaff_R12 = (System_Object_array *)
                      GameManagers_ChatManager__GetIDString(iVar10,0,0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            plStack_40 = (long *)0x43edbe9;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    **(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          plStack_40 = (long *)0x43edc0a;
          pSVar14 = PhotonExtensions__GetStringProperty
                              ((Photon_Realtime_Player_o *)__this_03,(System_String_o *)pSVar17,"",
                               (MethodInfo *)0x0);
          pUVar16 = *(UnityEngine_GameObject_o **)&pSVar24->m_Items[3].fields;
          ppSVar37 = (System_String_o **)0x0;
          unaff_RBX = (System_String_o *)&TypeInfo_PlayerProperty;
          if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
            plStack_40 = (long *)0x43edc1d;
            unaff_RBP = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
            plStack_40 = (long *)0x43edc2d;
            pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)unaff_R12,pSVar14,(MethodInfo *)0x0);
            plStack_40 = (long *)0x43edc46;
            pSVar17 = unaff_R15;
            pUVar16 = UI_ElementFactory__CreateWhiteLabel
                                (unaff_RBP,(UI_ElementStyle_o *)unaff_R15,pSVar15,0,3,(MethodInfo *)0x0);
            pSVar20 = (System_Collections_Generic_Dictionary_int__object__o *)pSVar24->m_Items[3].fields.key;
            ppSVar37 = (System_String_o **)0x0;
            unaff_RBX = pSVar14;
            if (pSVar20 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
              plStack_40 = (long *)0x43edc65;
              System_Collections_Generic_Dictionary_int__object___Add
                        (pSVar20,*(int32_t *)&__this_03->max_length,(Il2CppObject *)pUVar16,MethodInfo_Void_Add);
              UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      plStack_40 = (long *)0x43edc7f;
      il2cpp_runtime_helper_022b2c90();
      __this_03 = pSVar17;
      unaff_R14 = pSVar24;
    }
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -8) =
         unaff_R15;
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x10) =
         unaff_R14;
    *(System_String_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    pSVar24 = __this_03;
    plVar38 = (long *)ppSVar37;
    if (g_data_057ae503 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edca0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edcac;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edcb8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
      plVar38 = &TypeInfo_Object;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edcc4;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae503 = '\x01';
    }
    if (__this_03 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar20 = (System_Collections_Generic_Dictionary_int__object__o *)
                ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[3].
                fields.key;
      plVar38 = (long *)0x0;
      if (pSVar20 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        uVar13 = *(uint *)&__this_03->max_length;
        pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar13;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edcf3;
        bVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar20,uVar13,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar12 == '\0') {
          return;
        }
        pSVar20 = (System_Collections_Generic_Dictionary_int__object__o *)
                  ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[3].
                  fields.key;
        plVar38 = (long *)0x0;
        if (pSVar20 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
          iVar10 = *(int32_t *)&__this_03->max_length;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edd12;
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      System_Collections_Generic_Dictionary_int__object___get_Item
                                (pSVar20,iVar10,MethodInfo_GameObject_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edd2d;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edd37;
          UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_R15,(MethodInfo *)0x0);
          pSVar20 = (System_Collections_Generic_Dictionary_int__object__o *)
                    ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[3].
                    fields.key;
          plVar38 = (long *)0x0;
          if (pSVar20 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
            iVar10 = *(int32_t *)&__this_03->max_length;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edd52;
            System_Collections_Generic_Dictionary_int__object___Remove(pSVar20,iVar10,MethodInfo_Boolean_Remove);
            UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43edd69;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x28) =
         unaff_R15;
    *(System_String_o ***)((long)register0x00000020 + -0x30) = ppSVar37;
    *(System_Object_array **)((long)register0x00000020 + -0x38) = unaff_R12;
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x40) =
         __this_03;
    ppSVar37 = (System_String_o **)plVar38;
    if (g_data_057ae504 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edd93;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edd9f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43eddab;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43eddb7;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43eddc3;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43eddcf;
      il2cpp_runtime_helper_023445d0(&"TextColor");
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edddb;
      il2cpp_runtime_helper_023445d0(&"DefaultPanel");
      ppSVar37 = &"Default";
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edde7;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae504 = '\x01';
    }
    lVar28 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x148), lVar28 != 0)) {
      iVar10 = *(int32_t *)(lVar28 + 0x14);
      pIVar2 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar38)->obj).klass;
      pMVar36 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar2->vtable)->_4_unknown).
                method;
      pIVar3 = (((System_Collections_Generic_Dictionary_int__object__VTable *)pIVar2->vtable)->_4_unknown).
               methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ede33;
      pSVar14 = (System_String_o *)(*pIVar3)(plVar38,pMVar36);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ede45;
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ede68;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_03,iVar10,120.0,20.0,pSVar14,(MethodInfo *)0x0);
      pUVar16 = *(UnityEngine_GameObject_o **)
                 &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)plVar38)->m_Items[3].
                  fields;
      ppSVar37 = (System_String_o **)0x0;
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ede7c;
        ppSVar37 = (System_String_o **)UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43ede95;
        pSVar17 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  UI_ElementFactory__CreateWhiteLabel
                            ((UnityEngine_Transform_o *)ppSVar37,(UI_ElementStyle_o *)__this_03,
                             (System_String_o *)pSVar24,0,3,(MethodInfo *)0x0);
        if (pSVar17 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edeb3;
          ppSVar37 = (System_String_o **)pSVar17;
          pIVar18 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar17,MethodInfo_Text_GetComponent_Text);
          pSVar24 = pSVar17;
          if (__this_03 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        __this_03->max_length;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43eded7;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edf00;
            ppSVar37 = (System_String_o **)__this_03;
            UVar40 = UI_UIManager__GetThemeColor
                               ((System_String_o *)__this_03,"TextColor","Default","DefaultPanel",
                                (MethodInfo *)0x0);
            plVar38 = (long *)0x0;
            if (pIVar18 != (Il2CppObject *)0x0) {
              pMVar36 = pIVar18->klass->vtable[0x17].method;
              pIVar3 = pIVar18->klass->vtable[0x17].methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edf18;
              (*pIVar3)(UVar40.fields.r,UVar40.fields._8_8_,pIVar18,pMVar36);
              return;
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43edf29;
    uVar19 = il2cpp_runtime_helper_022b2c90();
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x48) =
         pSVar24;
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x50) =
         __this_03;
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar19;
    if (g_data_057ae505 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43edf4c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43edf58;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_int_GameObject);
      g_data_057ae505 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43edf6e;
    pSVar20 = (System_Collections_Generic_Dictionary_int__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_int_GameObject);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43edf83;
    System_Collections_Generic_Dictionary_int__object____ctor(pSVar20,MethodInfo_Dictionary_2_System_Int32_UnityEngine_GameObject);
    ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[3].fields.key =
         (Il2CppObject *)pSVar20;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43edf93;
    il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items
                        [3].fields.key,pSVar20);
    uVar19 = *(undefined8 *)((long)register0x00000020 + -0x50);
    uVar7 = *(undefined8 *)((long)register0x00000020 + -0x48);
    *(long **)((long)register0x00000020 + -0x48) = plVar38;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar7;
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar19;
    if (g_data_057ae02c == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x432777d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327789;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327795;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43277a1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43277ad;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      g_data_057ae02c = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43277c3;
    __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43277d8;
    System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_UI_BasePopup);
    *(System_Collections_Generic_List_object__o **)
     &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[1].fields =
         __this_00;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43277e8;
    il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items
                       + 1,__this_00);
    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x432780f;
    __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327824;
    Settings_StringSetting___ctor_40f74f0(__this_01,pSVar14,0x7fffffff,(MethodInfo *)0x0);
    ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[1].fields.value =
         (Il2CppObject *)__this_01;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327834;
    il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items
                        [1].fields.value,__this_01);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327843;
    __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327858;
    System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
    *(System_Collections_Generic_Dictionary_object__object__o **)
     &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items[2].fields =
         __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4327868;
    il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppSVar37)->m_Items
                       + 2);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)ppSVar37,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aef8d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057aef8d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_0454e6b2;
label_0454e63d:
    plVar38 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((System_String_array *)plVar38 != (System_String_array *)0x0) goto label_0454e64d;
label_0454e6ca:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_0454e63d;
label_0454e6b2:
    il2cpp_runtime_helper_02337ed0();
    plVar38 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((System_String_array *)plVar38 == (System_String_array *)0x0) goto label_0454e6ca;
label_0454e64d:
    pIVar2 = (((System_String_array *)plVar38)->obj).klass;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
       ((pIVar2->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_InGameMenu)) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  puVar35 = &stack0xffffffffffffffc8;
  plVar41 = &TypeInfo_UIManager;
  if (g_data_057aef81 == '\0') {
    plStack_40 = (long *)0x454e6fd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    plStack_40 = (long *)0x454e709;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    plStack_40 = (long *)0x454e715;
    il2cpp_runtime_helper_023445d0(&"/");
    g_data_057aef81 = '\x01';
  }
  plStack_40 = (long *)0x454e73e;
  bVar12 = System_String__op_Equality
                     ((System_String_o *)plVar38,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                      (MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  plVar39 = &TypeInfo_CustomLogicManager;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    plStack_40 = (long *)0x454e760;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar27 = *(System_String_array **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&g_data_057b9b70;
  if (pSVar27 == (System_String_array *)0x0) {
label_0454e854:
    __this_03 = pSVar24;
    pSVar25 = pSVar27;
    plStack_40 = (long *)0x454e859;
    pSVar27 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    plStack_40 = (long *)0x454e781;
    pSVar25 = (System_String_array *)
              CustomLogic_CustomLogicEvaluator__OnChatInput
                        ((CustomLogic_CustomLogicEvaluator_o *)pSVar27,(System_String_o *)plVar38,
                         (MethodInfo *)0x0);
    if ((pSVar25 != (System_String_array *)0x0) && (in_RCX = (pSVar25->obj).klass, in_RCX == g_data_057b9b98)) {
      plStack_40 = (long *)0x454e797;
      pcVar26 = (char *)il2cpp_runtime_helper_02305440();
      pSVar27 = pSVar25;
      if (*pcVar26 == '\0') {
        return;
      }
    }
    if ((System_String_array *)plVar38 == (System_String_array *)0x0) goto label_0454e854;
    plStack_40 = (long *)0x454e7b9;
    pMVar36 = "/";
    bVar12 = System_String__StartsWith
                       ((System_String_o *)plVar38,(System_String_o *)"/",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        plStack_40 = (long *)0x454e83f;
        il2cpp_runtime_helper_02337ed0();
      }
      plStack_40 = (long *)0x454e847;
      pSVar14 = GameManagers_ChatManager__ProcessMentions((System_String_o *)plVar38,pMVar36);
      plStack_40 = plVar41;
      if (g_data_057aef6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&TypeInfo_object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
        il2cpp_runtime_helper_023445d0(&"PlayerChatRPC");
        g_data_057aef6e = '\x01';
      }
      SStack_50._dateData = 0;
      pPVar34 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSVar29 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
      if (pSVar29 != (System_Object_array *)0x0) {
        if ((pSVar14 != (System_String_o *)0x0) && (lVar28 = il2cpp_runtime_helper_023051f0(pSVar14), lVar28 == 0))
        goto label_0454bcaf;
        unaff_R12 = pSVar29;
        if ((int)pSVar29->max_length != 0) {
          pSVar29->m_Items[0] = (Il2CppObject *)pSVar14;
          il2cpp_runtime_helper_022b4080(pSVar29->m_Items);
          if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          SStack_50._dateData = (uint64_t)System_DateTime__get_UtcNow((MethodInfo *)0x0);
          iStack_48 = System_DateTime__get_Ticks((System_DateTime_o)&SStack_50,(MethodInfo *)0x0);
          plVar41 = (long *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
          if (((Il2CppObject *)plVar41 != (Il2CppObject *)0x0) &&
             (lVar28 = il2cpp_runtime_helper_023051f0(plVar41), lVar28 == 0)) goto label_0454bcaf;
          if (1 < (uint)pSVar29->max_length) {
            pSVar29->m_Items[1] = (Il2CppObject *)plVar41;
            il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1);
            if (pPVar34 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar34,"PlayerChatRPC",0,pSVar29,(MethodInfo *)0x0);
              return;
            }
            goto label_0454bcaa;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
label_0454bcaa:
      pSVar29 = unaff_R12;
      il2cpp_runtime_helper_022b2c90();
label_0454bcaf:
      pSVar15 = (System_String_o *)il2cpp_runtime_helper_0231b270();
      pSVar22 = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b2b10();
      pSVar14 = pSVar22;
      pIStack_80 = (Il2CppObject *)plVar41;
      pSStack_78 = pSVar29;
      if (g_data_057aef70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_DateTime);
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        g_data_057aef70 = '\x01';
      }
      SStack_98.fields._dateData = (System_DateTime_Fields)0;
      if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      iVar8 = iStack_48;
      pPVar32 = TypeInfo_InGameManager;
      if (iStack_48 != 0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
        pPVar32 = (Photon_Realtime_Player_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar12 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,*(int32_t *)(iStack_48 + 0x18),MethodInfo_Boolean_Contains);
          if ((char)bVar12 == '\0') {
            uStack_9c = *(undefined4 *)(iVar8 + 0x18);
            pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_9c);
            uStack_a0 = *(undefined4 *)(iVar8 + 0x18);
            pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a0);
            ppSVar37 = &"[{0}]";
            pSVar14 = System_String__Format("[{0}]",pIVar21,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = GameManagers_ChatManager__GetColorString(pSVar14,1,0,(MethodInfo *)ppSVar37);
            pSVar14 = System_String__Format_3af78e0
                                ("<link=\"{0}\">{1}</link>",pIVar18,(Il2CppObject *)pSVar14,(MethodInfo *)0x0);
            pSVar14 = System_String__Concat_3af7150(pSVar14," ",pSVar15,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method_00 = (MethodInfo_37E4C90 *)0x0;
            System_DateTime___ctor_3c8ff10((System_DateTime_o)&SStack_98,(int64_t)pSVar22,1,(MethodInfo *)0x0)
            ;
            pPStack_90 = (Photon_Realtime_Player_o *)0x0;
            SStack_88._dateData = 0;
            __this_07.fields.value.fields._dateData = SStack_98.fields._dateData;
            __this_07.fields._0_8_ = &pPStack_90;
            System_Nullable_DateTime____ctor(__this_07,(System_DateTime_o)MethodInfo_Nullable_1_DateTime._dateData,method_00);
            timestamp.fields._0_8_ = (ulong)pPStack_90 & 0xffffffff;
            timestamp.fields.value.fields._dateData =
                 (System_DateTime_Fields)(System_DateTime_Fields)SStack_88._dateData;
            GameManagers_ChatManager__AddLine
                      (pSVar14,0,0,timestamp,*(int32_t *)(iVar8 + 0x18),0,0,-1,0,in_stack_ffffffffffffff50);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar15 = pSVar14;
      if (g_data_057aef71 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
        g_data_057aef71 = '\x01';
      }
      timestamp_00._dateData = 0;
      if (*(int *)((long)&TypeInfo_InGameManager[2].fields._CustomProperties_k__BackingField + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = TypeInfo_InGameManager;
      if (pPStack_90 != (Photon_Realtime_Player_o *)0x0) {
        pSVar4 = *(System_Collections_Generic_HashSet_int__o **)
                  (*(long *)&TypeInfo_InGameManager[2].fields.actorNumber + 0x28);
        player = (Photon_Realtime_Player_o *)0x0;
        if (pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          bVar12 = System_Collections_Generic_HashSet_int___Contains
                             (pSVar4,(pPStack_90->fields).actorNumber,MethodInfo_Boolean_Contains);
          if ((char)bVar12 == '\0') {
            if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            System_DateTime___ctor_3c8ff10
                      ((System_DateTime_o)&stack0xffffffffffffff38,(int64_t)pSVar14,1,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            GameManagers_ChatManager__AddPlayerLine
                      (pPStack_90,(System_String_o *)pPVar32,0,(System_DateTime_o)timestamp_00._dateData,0,-1,
                       in_stack_ffffffffffffff28);
          }
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pPStack_108 = pPStack_90;
      pSStack_100 = &SStack_98;
      if (g_data_057aef74 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
        il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
        il2cpp_runtime_helper_023445d0(&TypeInfo_string);
        il2cpp_runtime_helper_023445d0(&": ");
        il2cpp_runtime_helper_023445d0(&" ");
        il2cpp_runtime_helper_023445d0(&"<link=\"{0}\">{1}</link>");
        il2cpp_runtime_helper_023445d0(&"[{0}]");
        il2cpp_runtime_helper_023445d0(&"");
        g_data_057aef74 = '\x01';
      }
      uStack_130 = 0;
      pSStack_128 = (System_String_o *)0x0;
      apSStack_120[0] = (System_String_o *)0x0;
      if (player == (Photon_Realtime_Player_o *)0x0) {
        return;
      }
      SStack_110.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)in_RCX;
      if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar36 = (MethodInfo *)0x0;
      pSVar14 = PhotonExtensions__GetStringProperty
                          (player,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),"",
                           (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Anticheat_ChatFilter__FilterSizeTag(pSVar14,(MethodInfo *)0x0);
      if (pSVar15 == (System_String_o *)0x0) {
        pSVar15 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        iVar11 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      else {
        iVar11 = *(int *)(TypeInfo_ChatFilter + 0xe4);
      }
      if (iVar11 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = Anticheat_ChatFilter__FilterSizeTag(pSVar15,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar15 = MiscExtensions__ReplaceNamedColorTags(pSVar15,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar22 = GameManagers_ChatManager__GetColorString(pSVar15,color,0,pMVar36);
      iStack_134 = (player->fields).actorNumber;
      pIVar18 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_134);
      iStack_138 = (player->fields).actorNumber;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&iStack_138);
      ppSVar37 = &"[{0}]";
      pSVar15 = System_String__Format("[{0}]",pIVar21,(MethodInfo *)0x0);
      pSVar15 = GameManagers_ChatManager__GetColorString(pSVar15,1,0,(MethodInfo *)ppSVar37);
      pSVar23 = System_String__Format_3af78e0("<link=\"{0}\">{1}</link>",pIVar18,(Il2CppObject *)pSVar15,(MethodInfo *)0x0);
      pSVar15 = TypeInfo_string;
      pSVar27 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
      if (pSVar27 != (System_String_array *)0x0) {
        if ((int)pSVar27->max_length != 0) {
          pSVar15 = (System_String_o *)pSVar27->m_Items;
          pSVar27->m_Items[0] = pSVar23;
          il2cpp_runtime_helper_022b4080(pSVar15,pSVar23);
          if (1 < (uint)pSVar27->max_length) {
            pSVar15 = (System_String_o *)(pSVar27->m_Items + 1);
            pSVar27->m_Items[1] = " ";
            il2cpp_runtime_helper_022b4080();
            if (2 < (uint)pSVar27->max_length) {
              pSVar15 = (System_String_o *)(pSVar27->m_Items + 2);
              pSVar27->m_Items[2] = pSVar14;
              il2cpp_runtime_helper_022b4080(pSVar15,pSVar14);
              if (3 < (uint)pSVar27->max_length) {
                pSVar15 = (System_String_o *)(pSVar27->m_Items + 3);
                pSVar27->m_Items[3] = ": ";
                il2cpp_runtime_helper_022b4080();
                if (4 < (uint)pSVar27->max_length) {
                  pSVar27->m_Items[4] = pSVar22;
                  il2cpp_runtime_helper_022b4080(pSVar27->m_Items + 4);
                  pSVar15 = System_String__Concat_3af7570(pSVar27,(MethodInfo *)0x0);
                  iVar10 = (player->fields).actorNumber;
                  apSStack_120[0] = (System_String_o *)0x0;
                  uStack_130 = 1;
                  pSStack_128 = pSVar14;
                  il2cpp_runtime_helper_022b4080(&pSStack_128,pSVar14);
                  apSStack_120[0] = pSVar22;
                  il2cpp_runtime_helper_022b4080(apSStack_120,pSVar22);
                  playerLineData.fields.SenderName = pSStack_128;
                  playerLineData.fields._0_8_ = uStack_130;
                  playerLineData.fields.BodyText = apSStack_120[0];
                  GameManagers_ChatManager__AddLineInternal
                            (pSVar15,0,0,SStack_110,iVar10,0,in_R8D & 0xff,in_R9D,0,playerLineData,
                             in_stack_fffffffffffffeb0);
                  return;
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2ca0();
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aef72 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
        g_data_057aef72 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GameManagers_ChatManager__AddLine
                (pSVar15,3,1,(System_Nullable_DateTime__o)ZEXT816(0),-1,0,0,-1,0,in_stack_fffffffffffffe68);
      return;
    }
    if (*(int *)&((CustomLogic_CustomLogicEvaluator_Fields *)&((System_String_array *)plVar38)->bounds)->
                 _networkCallback == 1) {
      return;
    }
    pMVar36 = (MethodInfo *)0x1;
    plStack_40 = (long *)0x454e7d6;
    plVar38 = (long *)System_String__Substring((System_String_o *)plVar38,1,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      plStack_40 = (long *)0x454e7f1;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_40 = (long *)0x454e7f9;
    pSVar27 = (System_String_array *)plVar38;
    pSVar25 = GameManagers_ChatManager__ParseCommandArgs((System_String_o *)plVar38,pMVar36);
    pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&TypeInfo_ChatManager;
    if (pSVar25 == (System_String_array *)0x0) goto label_0454e854;
    if (pSVar25->max_length == 0) {
      return;
    }
    pSVar27 = pSVar25;
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      plStack_40 = (long *)0x454e81d;
      pSVar27 = (System_String_array *)il2cpp_runtime_helper_02337ed0();
    }
    plVar38 = &TypeInfo_UIManager;
    puVar35 = &stack0xffffffffffffffe0;
    plVar39 = (long *)unaff_R15;
  }
  *(ulong *)(puVar35 + -8) = (ulong)(uVar13 & 0xff);
  *(long **)(puVar35 + -0x10) = plVar39;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(puVar35 + -0x18) = __this_03;
  *(System_Object_array **)(puVar35 + -0x20) = unaff_R13;
  *(System_Object_array **)(puVar35 + -0x28) = unaff_R12;
  *(long **)(puVar35 + -0x30) = plVar38;
  *(System_String_array **)(puVar35 + -0x38) = pSVar27;
  if (g_data_057aef84 == '\0') {
    *(undefined8 *)(puVar35 + -0x40) = 0x454e887;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_Empty_String);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e893;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLCommandAttribute);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e89f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicListBuiltin);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8db;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8f3;
    il2cpp_runtime_helper_023445d0(&" not found, try /help to see a list of commands.");
    *(undefined8 *)(puVar35 + -0x40) = 0x454e8ff;
    il2cpp_runtime_helper_023445d0(&"Command ");
    g_data_057aef84 = '\x01';
  }
  *(undefined8 *)(puVar35 + -0x38) = 0;
  userMethod = &TypeInfo_ChatManager;
  if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
    *(undefined8 *)(puVar35 + -0x40) = 0x454e926;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar29 = unaff_R13;
  if (pSVar25 == (System_String_array *)0x0) goto label_0454ed3e;
  pSVar27 = (System_String_array *)plVar38;
  if (*(int *)&pSVar25->max_length == 0) goto label_0454ed43;
  pSVar14 = pSVar25->m_Items[0];
  if (pSVar14 == (System_String_o *)0x0) {
label_0454ed3e:
    *(undefined8 *)(puVar35 + -0x40) = 0x454ed43;
    il2cpp_runtime_helper_022b2c90();
    pSVar27 = (System_String_array *)plVar38;
    unaff_R13 = pSVar29;
  }
  else {
    pSVar27 = *(System_String_array **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x70);
    *(undefined8 *)(puVar35 + -0x40) = 0x454e95e;
    pSVar14 = System_String__ToLower(pSVar14,(MethodInfo *)0x0);
    plVar38 = (long *)pSVar27;
    if (pSVar27 == (System_String_array *)0x0) goto label_0454ed3e;
    *(undefined8 *)(puVar35 + -0x40) = 0x454e97f;
    bVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)pSVar27,
                        (Il2CppObject *)pSVar14,(Il2CppObject **)(puVar35 + -0x38),MethodInfo_Boolean_TryGetValue);
    lVar28 = MethodInfo_String_Empty_String;
    if ((char)bVar12 == '\0') {
      if (*(int *)&pSVar25->max_length != 0) {
        pSVar14 = pSVar25->m_Items[0];
        *(undefined8 *)(puVar35 + -0x40) = 0x454ea69;
        pSVar14 = System_String__Concat_3af7150("Command ",pSVar14," not found, try /help to see a list of commands.",(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar35 + -0x40) = 0x454ea7d;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar35 + -0x50) = 0;
        *(undefined8 *)(puVar35 + -0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar35 + -0x60) = 0;
        *(undefined8 *)(puVar35 + -0x68) = 0;
        *(undefined8 *)(puVar35 + -0x70) = 0x454eaac;
        GameManagers_ChatManager__AddLine
                  (pSVar14,4,0,(System_Nullable_DateTime__o)ZEXT816(0),-1,*(bool_conflict *)(puVar35 + -0x68),
                   *(bool_conflict *)(puVar35 + -0x60),*(int32_t *)(puVar35 + -0x58),
                   *(bool_conflict *)(puVar35 + -0x50),*(MethodInfo **)(puVar35 + -0x48));
        return;
      }
      goto label_0454ed43;
    }
    plVar38 = *(long **)(puVar35 + -0x38);
    if ((System_String_array *)plVar38 == (System_String_array *)0x0) goto label_0454ed3e;
    pIVar2 = (((System_String_array *)plVar38)->obj).klass;
    bVar1 = (TypeInfo_CLCommandAttribute->_2).naturalAligment;
    if (((pIVar2->_2).naturalAligment < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CLCommandAttribute)) {
      __this_03 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  ((System_String_array *)plVar38)->m_Items[1];
      if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
      goto label_0454ed3e;
      *(undefined8 *)(puVar35 + -0x40) = 0x454e9d9;
      bVar12 = System_Reflection_MethodBase__get_IsStatic
                         ((System_Reflection_MethodBase_o *)__this_03,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar35 + -0x40) = 0x454eac6;
          il2cpp_runtime_helper_02337ed0();
        }
        userMethod = *(MethodInfo ***)(TypeInfo_ChatManager[2].virtualMethodPointer + 0x20);
        *(undefined8 *)(puVar35 + -0x40) = 0x454eae8;
        pSVar27 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar27 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar2 = (((pSVar27->obj).klass)->_1).element_class;
        *(undefined8 *)(puVar35 + -0x40) = 0x454eb03;
        lVar28 = il2cpp_runtime_helper_023051f0(pSVar25,pIVar2);
        if (lVar28 == 0) goto label_0454ed48;
        if (*(int *)&pSVar27->max_length != 0) {
          pSVar27->m_Items[0] = (System_String_o *)pSVar25;
          *(undefined8 *)(puVar35 + -0x40) = 0x454eb29;
          il2cpp_runtime_helper_022b4080(pSVar27->m_Items,pSVar25);
          goto label_0454eb2f;
        }
      }
      else {
        *(undefined8 *)(puVar35 + -0x40) = 0x454e9f5;
        pSVar27 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1);
        if (pSVar27 == (System_String_array *)0x0) goto label_0454ed3e;
        pIVar2 = (((pSVar27->obj).klass)->_1).element_class;
        *(undefined8 *)(puVar35 + -0x40) = 0x454ea10;
        lVar28 = il2cpp_runtime_helper_023051f0(pSVar25,pIVar2);
        if (lVar28 == 0) goto label_0454ed48;
        if (*(int *)&pSVar27->max_length != 0) {
          pSVar27->m_Items[0] = (System_String_o *)pSVar25;
          *(undefined8 *)(puVar35 + -0x40) = 0x454ea36;
          il2cpp_runtime_helper_022b4080(pSVar27->m_Items);
          userMethod = (MethodInfo **)0x0;
label_0454eb2f:
          *(undefined8 *)(puVar35 + -0x40) = 0x454eb39;
          System_Reflection_MethodBase__Invoke
                    ((System_Reflection_MethodBase_o *)__this_03,(Il2CppObject *)userMethod,
                     (System_Object_array *)pSVar27,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      if (*(int *)&pSVar25->max_length < 2) {
        if (*(long *)(MethodInfo_String_Empty_String + 0x38) == 0) {
          *(undefined8 *)(puVar35 + -0x40) = 0x454ecf5;
          il2cpp_runtime_helper_02300a20(MethodInfo_String_Empty_String);
          lVar30 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          if ((*(byte *)(lVar30 + 0x135) & 1) == 0) goto label_0454ed0a;
label_0454ebb7:
          if (*(int *)(lVar30 + 0xe4) != 0) goto label_0454ebc4;
label_0454ed1f:
          *(undefined8 *)(puVar35 + -0x40) = 0x454ed24;
          il2cpp_runtime_helper_02337ed0();
          lVar28 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar28 + 0x135);
        }
        else {
          lVar30 = *(long *)(*(long *)(MethodInfo_String_Empty_String + 0x38) + 0x10);
          if ((*(byte *)(lVar30 + 0x135) & 1) != 0) goto label_0454ebb7;
label_0454ed0a:
          *(undefined8 *)(puVar35 + -0x40) = 0x454ed0f;
          lVar30 = il2cpp_runtime_helper_023009c0();
          if (*(int *)(lVar30 + 0xe4) == 0) goto label_0454ed1f;
label_0454ebc4:
          lVar28 = *(long *)(*(long *)(lVar28 + 0x38) + 0x10);
          bVar1 = *(byte *)(lVar28 + 0x135);
        }
        if ((bVar1 & 1) == 0) {
          *(undefined8 *)(puVar35 + -0x40) = 0x454ebdd;
          lVar28 = il2cpp_runtime_helper_023009c0(lVar28);
        }
        unaff_R12 = (System_Object_array *)**(undefined8 **)(lVar28 + 0xb8);
        iVar11 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        *(undefined8 *)(puVar35 + -0x40) = 0x454eb65;
        pSVar31 = System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar25,1,MethodInfo_IEnumerable_1_System_String_Skip_String);
        *(undefined8 *)(puVar35 + -0x40) = 0x454eb77;
        unaff_R12 = System_Linq_Enumerable__ToArray_object_(pSVar31,MethodInfo_String_ToArray_String);
        iVar11 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar11 == 0) {
        *(undefined8 *)(puVar35 + -0x40) = 0x454ebff;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_03 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                   (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_03 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        return;
      }
      userMethod = (MethodInfo **)((System_String_array *)plVar38)->m_Items[5];
      *(undefined8 *)(puVar35 + -0x40) = 0x454ec2e;
      pSVar29 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
      pSVar27 = (System_String_array *)plVar38;
      if (*(int *)&pSVar25->max_length != 0) {
        if (pSVar29 == (System_Object_array *)0x0) goto label_0454ed3e;
        pSVar27 = (System_String_array *)pSVar25->m_Items[0];
        if (pSVar27 != (System_String_array *)0x0) {
          pIVar2 = (((pSVar29->obj).klass)->_1).element_class;
          *(undefined8 *)(puVar35 + -0x40) = 0x454ec5d;
          lVar28 = il2cpp_runtime_helper_023051f0(pSVar27,pIVar2);
          if (lVar28 == 0) goto label_0454ed48;
        }
        unaff_R13 = pSVar29;
        if ((int)pSVar29->max_length != 0) {
          pSVar29->m_Items[0] = (Il2CppObject *)pSVar27;
          *(undefined8 *)(puVar35 + -0x40) = 0x454ec81;
          il2cpp_runtime_helper_022b4080(pSVar29->m_Items,pSVar27);
          *(undefined8 *)(puVar35 + -0x40) = 0x454ec90;
          pSVar27 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicListBuiltin);
          *(undefined8 *)(puVar35 + -0x40) = 0x454eca0;
          CustomLogic_CustomLogicListBuiltin___ctor_3fc0a50
                    ((CustomLogic_CustomLogicListBuiltin_o *)pSVar27,unaff_R12,(MethodInfo *)0x0);
          if (pSVar27 != (System_String_array *)0x0) {
            pIVar2 = (((pSVar29->obj).klass)->_1).element_class;
            *(undefined8 *)(puVar35 + -0x40) = 0x454ecb5;
            lVar28 = il2cpp_runtime_helper_023051f0(pSVar27,pIVar2);
            if (lVar28 == 0) goto label_0454ed48;
          }
          if (1 < (uint)pSVar29->max_length) {
            pSVar29->m_Items[1] = (Il2CppObject *)pSVar27;
            *(undefined8 *)(puVar35 + -0x40) = 0x454ecd8;
            il2cpp_runtime_helper_022b4080(pSVar29->m_Items + 1,pSVar27);
            *(undefined8 *)(puVar35 + -0x40) = 0x454ece8;
            CustomLogic_CustomLogicEvaluator__EvaluateMethod_41730f0
                      ((CustomLogic_CustomLogicEvaluator_o *)__this_03,(CustomLogic_UserMethod_o *)userMethod,
                       pSVar29,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_0454ed43:
  *(undefined8 *)(puVar35 + -0x40) = 0x454ed48;
  il2cpp_runtime_helper_022b2ca0();
  pSVar29 = unaff_R13;
label_0454ed48:
  *(undefined8 *)(puVar35 + -0x40) = 0x454ed4d;
  pSVar14 = (System_String_o *)il2cpp_runtime_helper_0231b270();
  *(undefined8 *)(puVar35 + -0x40) = 0x454ed57;
  uVar19 = il2cpp_runtime_helper_022b2b10(pSVar14,0);
  *(System_String_array **)(puVar35 + -0x40) = pSVar25;
  *(MethodInfo ***)(puVar35 + -0x48) = userMethod;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(puVar35 + -0x50) = __this_03;
  *(System_Object_array **)(puVar35 + -0x58) = pSVar29;
  *(System_Object_array **)(puVar35 + -0x60) = unaff_R12;
  *(System_String_array **)(puVar35 + -0x68) = pSVar27;
  *(undefined8 *)(puVar35 + -0x70) = uVar19;
  if (g_data_057aef82 == '\0') {
    *(undefined8 *)(puVar35 + -0x78) = 0x454ed87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatFilter);
    *(undefined8 *)(puVar35 + -0x78) = 0x454ed93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    *(undefined8 *)(puVar35 + -0x78) = 0x454ed9f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_Player_bool);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edc3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edcf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Player_get_Item);
    *(undefined8 *)(puVar35 + -0x78) = 0x454eddb;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    *(undefined8 *)(puVar35 + -0x78) = 0x454ede7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edf3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ProcessMentions_b__0);
    *(undefined8 *)(puVar35 + -0x78) = 0x454edff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass93_0);
    *(undefined8 *)(puVar35 + -0x78) = 0x454ee0b;
    il2cpp_runtime_helper_023445d0(&"@");
    *(undefined8 *)(puVar35 + -0x78) = 0x454ee17;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057aef82 = '\x01';
  }
  if (pSVar14 != (System_String_o *)0x0) {
    *(undefined8 *)(puVar35 + -0x78) = 0x454ee36;
    iVar10 = System_String__IndexOf(pSVar14,0x40,(MethodInfo *)0x0);
    if (iVar10 == -1) {
      return;
    }
    if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
      *(undefined8 *)(puVar35 + -0x78) = 0x454ee5b;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
    if (pSVar33 != (System_Text_StringBuilder_o *)0x0) {
      *(undefined8 *)(puVar35 + -0x78) = 0x454ee7d;
      System_Text_StringBuilder__Clear(pSVar33,(MethodInfo *)0x0);
      pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
      if (pSVar33 != (System_Text_StringBuilder_o *)0x0) {
        *(undefined8 *)(puVar35 + -0x78) = 0x454eea2;
        System_Text_StringBuilder__Append_3b03f90(pSVar33,pSVar14,(MethodInfo *)0x0);
label_0454eeda:
        do {
          *(undefined8 *)(puVar35 + -0x78) = 0x454eee3;
          __this_04 = (GameManagers_ChatManager___c__DisplayClass93_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass93_0);
          *(undefined8 *)(puVar35 + -0x78) = 0x454eef0;
          GameManagers_ChatManager___c__DisplayClass93_0___ctor(__this_04,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar35 + -0x78) = 0x454ef02;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar38 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar38 == (long *)0x0) goto label_0454f2d9;
          uVar19 = *(undefined8 *)(*plVar38 + 0x170);
          pcVar5 = *(code **)(*plVar38 + 0x168);
          *(undefined8 *)(puVar35 + -0x78) = 0x454ef2d;
          pSVar14 = (System_String_o *)(*pcVar5)(plVar38,uVar19);
          if (pSVar14 == (System_String_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)(puVar35 + -0x78) = 0x454ef48;
          iVar11 = System_String__IndexOf_3afbe50(pSVar14,0x20,iVar10,(MethodInfo *)0x0);
          if (iVar11 == -1) {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
              *(undefined8 *)(puVar35 + -0x78) = 0x454ef92;
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (pSVar33 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)(puVar35 + -0x78) = 0x454efb4;
            iVar11 = System_Text_StringBuilder__get_Length(pSVar33,(MethodInfo *)0x0);
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) goto label_0454efc3;
label_0454ef5c:
            pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          else {
            if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) != 0) goto label_0454ef5c;
label_0454efc3:
            *(undefined8 *)(puVar35 + -0x78) = 0x454efc8;
            il2cpp_runtime_helper_02337ed0();
            pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          }
          if (pSVar33 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)(puVar35 + -0x78) = 0x454eff7;
          pSVar14 = System_Text_StringBuilder__ToString_3b032f0
                              (pSVar33,iVar10 + 1,(iVar11 - iVar10) + -1,(MethodInfo *)0x0);
          if (__this_04 == (GameManagers_ChatManager___c__DisplayClass93_0_o *)0x0) goto label_0454f2d9;
          (__this_04->fields).mention = pSVar14;
          *(undefined8 *)(puVar35 + -0x78) = 0x454f013;
          il2cpp_runtime_helper_022b4080(&__this_04->fields);
          pSVar14 = (__this_04->fields).mention;
          *(undefined8 *)(puVar35 + -0x78) = 0x454f01e;
          bVar12 = System_String__IsNullOrWhiteSpace(pSVar14,(MethodInfo *)0x0);
          if ((char)bVar12 != '\0') {
            iVar11 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
joined_r0x0454f02d:
            if (iVar11 == 0) {
              *(undefined8 *)(puVar35 + -0x78) = 0x454f034;
              il2cpp_runtime_helper_02337ed0();
            }
            plVar38 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
            if (plVar38 == (long *)0x0) goto label_0454f2d9;
            uVar19 = *(undefined8 *)(*plVar38 + 0x170);
            pcVar5 = *(code **)(*plVar38 + 0x168);
            *(undefined8 *)(puVar35 + -0x78) = 0x454f05f;
            pSVar14 = (System_String_o *)(*pcVar5)(plVar38,uVar19);
            if (pSVar14 == (System_String_o *)0x0) goto label_0454f2d9;
            *(undefined8 *)(puVar35 + -0x78) = 0x454f07a;
            iVar10 = System_String__IndexOf_3afbe50(pSVar14,0x40,iVar10 + 1,(MethodInfo *)0x0);
            if (iVar10 == -1) break;
            goto label_0454eeda;
          }
          if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
            *(undefined8 *)(puVar35 + -0x78) = 0x454f0a8;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar35 + -0x78) = 0x454f0af;
          source = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
          *(undefined8 *)(puVar35 + -0x78) = 0x454f0c1;
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_Player_bool);
          *(undefined8 *)(puVar35 + -0x78) = 0x454f0db;
          System_Func_object__bool____ctor();
          *(undefined8 *)(puVar35 + -0x78) = 0x454f0f0;
          pSVar31 = System_Linq_Enumerable__Where_object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                               MethodInfo_IEnumerable_1_Photon_Realtime_Player_Where_Player);
          *(undefined8 *)(puVar35 + -0x78) = 0x454f102;
          __this_05 = System_Linq_Enumerable__ToList_object_(pSVar31,MethodInfo_List_1_Photon_Realtime_Player_ToList_Player);
          if (__this_05 == (System_Collections_Generic_List_TSource__o *)0x0) goto label_0454f2d9;
          if ((__this_05->fields)._size != 1) {
            iVar11 = *(int *)((long)&TypeInfo_ChatManager[2].parameters + 4);
            goto joined_r0x0454f02d;
          }
          *(undefined8 *)(puVar35 + -0x78) = 0x454f130;
          pPVar32 = (Photon_Realtime_Player_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_05,0,MethodInfo_Player_get_Item);
          if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
            *(undefined8 *)(puVar35 + -0x78) = 0x454f14e;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar14 = (System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8);
          *(undefined8 *)(puVar35 + -0x78) = 0x454f16f;
          pSVar14 = PhotonExtensions__GetStringProperty(pPVar32,pSVar14,"",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ChatFilter + 0xe4) == 0) {
            *(undefined8 *)(puVar35 + -0x78) = 0x454f18a;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar35 + -0x78) = 0x454f194;
          pSVar14 = Anticheat_ChatFilter__FilterSizeTag(pSVar14,(MethodInfo *)0x0);
          ppSVar37 = &"@";
          *(undefined8 *)(puVar35 + -0x78) = 0x454f1a8;
          pSVar14 = System_String__Concat_3ae5ba0("@",pSVar14,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar35 + -0x78) = 0x454f1bd;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar35 + -0x78) = 0x454f1cc;
          pSVar14 = GameManagers_ChatManager__GetColorString(pSVar14,2,0,(MethodInfo *)ppSVar37);
          pSVar33 = *(System_Text_StringBuilder_o **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (pSVar33 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)(puVar35 + -0x78) = 0x454f1f6;
          pSVar33 = System_Text_StringBuilder__Remove(pSVar33,iVar10,iVar11 - iVar10,(MethodInfo *)0x0);
          if (pSVar33 == (System_Text_StringBuilder_o *)0x0) goto label_0454f2d9;
          *(undefined8 *)(puVar35 + -0x78) = 0x454f20f;
          System_Text_StringBuilder__Insert(pSVar33,iVar10,pSVar14,(MethodInfo *)0x0);
          plVar38 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
          if (plVar38 == (long *)0x0) goto label_0454f2d9;
          uVar19 = *(undefined8 *)(*plVar38 + 0x170);
          pcVar5 = *(code **)(*plVar38 + 0x168);
          *(undefined8 *)(puVar35 + -0x78) = 0x454f23a;
          pSVar15 = (System_String_o *)(*pcVar5)(plVar38,uVar19);
          if ((pSVar14 == (System_String_o *)0x0) || (pSVar15 == (System_String_o *)0x0)) goto label_0454f2d9;
          iVar11 = (pSVar14->fields)._stringLength;
          *(undefined8 *)(puVar35 + -0x78) = 0x454eec6;
          iVar10 = System_String__IndexOf_3afbe50(pSVar15,0x40,iVar10 + iVar11,(MethodInfo *)0x0);
        } while (iVar10 != -1);
        if (*(int *)((long)&TypeInfo_ChatManager[2].parameters + 4) == 0) {
          *(undefined8 *)(puVar35 + -0x78) = 0x454f28f;
          il2cpp_runtime_helper_02337ed0();
        }
        plVar38 = *(long **)(TypeInfo_ChatManager[2].virtualMethodPointer + 0xa0);
        if (plVar38 != (long *)0x0) {
          (**(code **)(*plVar38 + 0x168))(plVar38,*(undefined8 *)(*plVar38 + 0x170));
          return;
        }
      }
    }
  }
label_0454f2d9:
  *(undefined8 *)(puVar35 + -0x78) = 0x454f2de;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// GameManagers.PhotonVoiceSync$$.ctor
// il2cpp: void GameManagers_PhotonVoiceSync___ctor (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x456f620

void GameManagers_PhotonVoiceSync___ctor(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


