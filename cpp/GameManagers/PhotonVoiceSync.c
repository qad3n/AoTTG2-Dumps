// Type: GameManagers.PhotonVoiceSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/GameManagers/PhotonVoiceSync.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PhotonVoiceSync.cs
// --------------------------------

// GameManagers.PhotonVoiceSync$$Awake
// il2cpp: void GameManagers_PhotonVoiceSync__Awake (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x5956cc0

void GameManagers_PhotonVoiceSync__Awake(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Photon_Voice_Unity_Recorder_o **targetAddress;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Threading_CancellationTokenSource_o *__this_00;
  System_Object_array *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  Photon_Pun_PhotonView_o *pPVar7;
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar8;
  Photon_Voice_Unity_Recorder_o *pPVar9;
  UnityEngine_AudioSource_o *pUVar10;
  Photon_Voice_Unity_Speaker_o *pPVar11;
  MethodInfo *pMVar12;
  
  if (Il2CppMethodInitialized_075458b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MicAmplifier);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonVoiceView)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Recorder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Speaker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&"Speaker");
    Il2CppMethodInitialized_075458b0 = '\x01';
  }
  pMVar12 = MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_Add;
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    __this_00 = (*(uint64_t *)((char *)pGVar4 + 0x68));
    if (__this_00 != (System_Threading_CancellationTokenSource_o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_00->fields)._registeredCallbacksLists + 4);
      *piVar1 = *piVar1 + 1;
      pSVar5 = (System_Object_array *)(__this_00->fields)._kernelEvent;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar3 = *(uint *)&(__this_00->fields)._registeredCallbacksLists;
        if (uVar3 < (uint)pSVar5->max_length) {
          *(uint *)&(__this_00->fields)._registeredCallbacksLists = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this,
                     (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
        }
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        (__this->fields).Transform = pUVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Transform);
        pPVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
        (__this->fields).PhotonView = pPVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView);
        pPVar8 = (Photon_Voice_PUN_PhotonVoiceView_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_PhotonVoiceView);
        (__this->fields).VoiceView = pPVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceView);
        pPVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Recorder);
        targetAddress = &(__this->fields).Recorder;
        (__this->fields).Recorder = pPVar9;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = UnityEngine_Transform__Find(pUVar6,"Speaker",(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            pUVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar6,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
            (__this->fields).AudioSource = pUVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).AudioSource);
            pUVar10 = (__this->fields).AudioSource;
            if (pUVar10 != (UnityEngine_AudioSource_o *)0x0) {
              UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar10,true,(MethodInfo *)0x0);
              pUVar6 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                pUVar6 = UnityEngine_Transform__Find(pUVar6,"Speaker",(MethodInfo *)0x0);
                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                  pPVar11 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar6,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_Speaker);
                  (__this->fields).Speaker = pPVar11;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).Speaker);
                  pMVar12 = (MethodInfo *)
                            UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_MicAmplifier);
                  (__this->fields).MicAmplifier = (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)pMVar12;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).MicAmplifier);
                  pPVar7 = (__this->fields).PhotonView;
                  if (pPVar7 != (Photon_Pun_PhotonView_o *)0x0) {
                    if ((pPVar7->fields)._IsMine_k__BackingField == false) {
label_05956fe2:
                      GameManagers_PhotonVoiceSync__Apply(__this,pMVar12);
                      return;
                    }
                    pPVar9 = *targetAddress;
                    if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                      (pPVar9->fields).useMicrophoneTypeFallback = true;
                      (pPVar9->fields).recordWhenJoined = false;
                      Photon_Voice_Unity_Recorder__set_LoopAudioClip(pPVar9,true,(MethodInfo *)0x0);
                      if (*targetAddress != (Photon_Voice_Unity_Recorder_o *)0x0) {
                        Photon_Voice_Unity_Recorder__set_VoiceDetectionThreshold
                                  (*targetAddress,0.01,(MethodInfo *)0x0);
                        if (*targetAddress != (Photon_Voice_Unity_Recorder_o *)0x0) {
                          Photon_Voice_Unity_Recorder__set_FrameDuration
                                    (*targetAddress,20000,(MethodInfo *)0x0);
                          if (*targetAddress != (Photon_Voice_Unity_Recorder_o *)0x0) {
                            Photon_Voice_Unity_Recorder__set_SamplingRate
                                      (*targetAddress,48000,(MethodInfo *)0x0);
                            if (*targetAddress != (Photon_Voice_Unity_Recorder_o *)0x0) {
                              pMVar12 = (MethodInfo *)0x1f4;
                              Photon_Voice_Unity_Recorder__set_VoiceDetectionDelayMs
                                        (*targetAddress,500,(MethodInfo *)0x0);
                              goto label_05956fe2;
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
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$Apply
// il2cpp: void GameManagers_PhotonVoiceSync__Apply (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x5957000

void GameManagers_PhotonVoiceSync__Apply(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Voice_Unity_Recorder_o *pPVar2;
  Settings_SoundSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *__this_00;
  Settings_InGameSet_o *pSVar5;
  Settings_InGameMiscSettings_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Photon_Voice_DeviceInfo_o value;
  System_String_array *devices;
  UnityEngine_AudioSource_o *pUVar8;
  float fVar9;
  Photon_Voice_DeviceInfo_Fields local_40;
  
  if (Il2CppMethodInitialized_075458b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_075458b1 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto label_0595726d;
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_0595726d;
    Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar2,false,(MethodInfo *)0x0);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if (((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
        (pSVar4 = (pSVar3->fields).VoiceChatInput, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
       (pPVar2 = (__this->fields).Recorder, pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0))
    goto label_0595726d;
    Photon_Voice_Unity_Recorder__set_VoiceDetection(pPVar2,(pSVar4->fields)._value == 1,(MethodInfo *)0x0);
    devices = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_0595726d;
    Photon_Voice_Unity_Recorder__set_MicrophoneType(pPVar2,0,(MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    ApplicationManagers_VoiceChatManager__GetRecorderDevice
              ((Photon_Voice_DeviceInfo_o *)&local_40,devices,(MethodInfo *)0x0);
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_0595726d;
    value.fields._IDString_k__BackingField = local_40._IDString_k__BackingField;
    value.fields._IsDefault_k__BackingField = local_40._IsDefault_k__BackingField;
    value.fields._1_3_ = local_40._1_3_;
    value.fields._IDInt_k__BackingField = local_40._IDInt_k__BackingField;
    value.fields._Name_k__BackingField = local_40._Name_k__BackingField;
    value.fields.features = local_40.features;
    value.fields.useStringID = local_40.useStringID;
    value.fields._33_7_ = local_40._33_7_;
    Photon_Voice_Unity_Recorder__set_MicrophoneDevice(pPVar2,value,(MethodInfo *)0x0);
    if (devices == (System_String_array *)0x0) goto label_0595726d;
    (__this->fields)._hasMicrophone = (int)devices->max_length != 0;
    __this_00 = (__this->fields).MicAmplifier;
    fVar9 = ApplicationManagers_VoiceChatManager__GetInputVolume((MethodInfo *)0x0);
    if (__this_00 == (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)0x0) goto label_0595726d;
    Photon_Voice_Unity_UtilityScripts_MicAmplifier__set_AmplificationFactor(__this_00,fVar9,(MethodInfo *)0x0)
    ;
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
      (pSVar6 = (pSVar5->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar4 = (pSVar6->fields).VoiceChat, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    pUVar8 = (__this->fields).AudioSource;
    if ((pSVar4->fields)._value == 1) {
      pSVar7 = (pSVar6->fields).ProximityMaxDistance;
      if ((pSVar7 != (Settings_FloatSetting_o *)0x0) && (pUVar8 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_maxDistance(pUVar8,(pSVar7->fields)._value,(MethodInfo *)0x0);
        pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if ((pSVar5 != (Settings_InGameSet_o *)0x0) &&
           (((pSVar6 = (pSVar5->fields).Misc, pSVar6 != (Settings_InGameMiscSettings_o *)0x0 &&
             (pSVar7 = (pSVar6->fields).ProximityMinDistance, pSVar7 != (Settings_FloatSetting_o *)0x0)) &&
            (pUVar8 = (__this->fields).AudioSource, pUVar8 != (UnityEngine_AudioSource_o *)0x0)))) {
          UnityEngine_AudioSource__set_minDistance(pUVar8,(pSVar7->fields)._value,(MethodInfo *)0x0);
          pUVar8 = (__this->fields).AudioSource;
          if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
          }
          if (pUVar8 != (UnityEngine_AudioSource_o *)0x0) {
            fVar9 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->ProximitySpatialBlend;
            goto label_0595725c;
          }
        }
      }
    }
    else if (pUVar8 != (UnityEngine_AudioSource_o *)0x0) {
      fVar9 = 0.0;
label_0595725c:
      UnityEngine_AudioSource__set_spatialBlend(pUVar8,fVar9,(MethodInfo *)0x0);
      return;
    }
  }
label_0595726d:
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$Update
// il2cpp: void GameManagers_PhotonVoiceSync__Update (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x5957280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x595762a: mov rdi, rbx

void GameManagers_PhotonVoiceSync__Update(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Photon_Pun_PhotonView_o *view;
  Settings_SoundSettings_o *pSVar7;
  UnityEngine_Object_o *x;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *__this_00;
  Settings_InputSettings_o *pSVar9;
  Settings_GeneralInputSettings_o *pSVar10;
  Settings_KeybindSetting_o *__this_01;
  Photon_Voice_Unity_Recorder_o *pPVar11;
  bool bVar12;
  bool bVar13;
  UnityEngine_Transform_o *pUVar14;
  byte bVar15;
  UnityEngine_AudioSource_o *__this_02;
  bool bVar16;
  bool bVar17;
  float fVar18;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_075458b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_075458b2 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar15 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar15) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar15 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
    }
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((((pSVar4 == (Settings_InGameSet_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Misc, pSVar5 == (Settings_InGameMiscSettings_o *)0x0)) ||
      (pSVar6 = (pSVar5->fields).VoiceChat, pSVar6 == (Settings_IntSetting_o *)0x0)) ||
     (view = (__this->fields).PhotonView, view == (Photon_Pun_PhotonView_o *)0x0)) goto label_0595766b;
  iVar1 = (pSVar6->fields)._value;
  if ((view->fields)._IsMine_k__BackingField == false) {
    __this_02 = (__this->fields).AudioSource;
    if (iVar1 == 2) {
      if (__this_02 != (UnityEngine_AudioSource_o *)0x0) {
        fVar18 = 0.0;
        goto label_0595762d;
      }
    }
    else {
      if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
      }
      fVar18 = ApplicationManagers_VoiceChatManager__GetOuputVolume(view,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_AudioSource_o *)0x0) {
label_0595762d:
        UnityEngine_AudioSource__set_volume(__this_02,fVar18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar7 != (Settings_SoundSettings_o *)0x0) &&
       (pSVar6 = (pSVar7->fields).VoiceChatInput, pSVar6 != (Settings_IntSetting_o *)0x0)) {
      iVar2 = (pSVar6->fields)._value;
      bVar16 = iVar2 != 2;
      bVar17 = iVar1 != 2;
      if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
        x = (*(uint64_t *)((char *)pGVar3 + 0x80));
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_0595766b;
          pUVar8 = x->klass;
          bVar15 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
          if (((pUVar8->_2).typeHierarchyDepth < bVar15) ||
             ((pUVar8->_2).typeHierarchy[(ulong)bVar15 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan))
          {
            __this_00 = (__this->fields).Transform;
            pUVar14 = (UnityEngine_Transform_o *)(**(code **)&((Il2CppClass *)pUVar8)->vtable[77].methodPtr)(x);
            if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_0595766b;
            value = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          }
          else {
            if ((x[0xb].klass == (UnityEngine_Object_c *)0x0) ||
               (pUVar14 = *(UnityEngine_Transform_o **)&((x[0xb].klass)->_1).this_arg.bits,
               pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_0595766b;
            __this_00 = (__this->fields).Transform;
            value = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
          }
          if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_0595766b;
          UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = 0;
        bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar12) {
          if (x == (UnityEngine_Object_o *)0x0) goto label_0595766b;
          bVar15 = *(byte *)&(*(uint64_t *)((char *)x + 0x78)) ^ 1;
        }
        bVar12 = (bVar16 && bVar17) && (iVar1 != 1 || bVar15 != 0);
        if ((iVar2 != 1) && ((bVar16 && bVar17) && (iVar1 != 1 || bVar15 != 0))) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar12 = false;
          bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          if (!bVar13) {
            pSVar9 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
            if (((pSVar9 == (Settings_InputSettings_o *)0x0) ||
                (pSVar10 = (pSVar9->fields).General, pSVar10 == (Settings_GeneralInputSettings_o *)0x0)) ||
               (__this_01 = (pSVar10->fields).PushToTalk, __this_01 == (Settings_KeybindSetting_o *)0x0))
            goto label_0595766b;
            bVar12 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
          }
        }
        bVar13 = bVar12;
        if (iVar2 == 1) {
          bVar13 = bVar16 && bVar17;
        }
        if ((((__this->fields)._hasMicrophone == false) && (bVar13 != false)) &&
           (*(int *)&(*(uint64_t *)((char *)pGVar3 + 0x78)) == 1)) {
          if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
          }
          ApplicationManagers_VoiceChatManager__RequestMicrophonePermission((MethodInfo *)0x0);
        }
        if (bVar12 != false) {
          fVar18 = UnityEngine_Time__get_unscaledTime((MethodInfo *)0x0);
          (__this->fields)._lastTransmitTime = fVar18;
        }
        pPVar11 = (__this->fields).Recorder;
        if (pPVar11 != (Photon_Voice_Unity_Recorder_o *)0x0) {
          Photon_Voice_Unity_Recorder__set_RecordingEnabled
                    (pPVar11,(bool)((__this->fields)._hasMicrophone & (bVar16 && bVar17)),(MethodInfo *)0x0);
          pPVar11 = (__this->fields).Recorder;
          if (pPVar11 != (Photon_Voice_Unity_Recorder_o *)0x0) {
            Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar11,bVar12,(MethodInfo *)0x0);
            __this_02 = (__this->fields).AudioSource;
            if (__this_02 != (UnityEngine_AudioSource_o *)0x0) {
              fVar18 = 1.0;
              goto label_0595762d;
            }
          }
        }
      }
    }
  }
label_0595766b:
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$LateUpdate
// il2cpp: void GameManagers_PhotonVoiceSync__LateUpdate (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x5957680
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5957712: movzx esi, bl
// asm:   0x5957715: mov rdi, rbp
// asm:   0x5957718: jmp 0x59577a0
// asm:   0x5957799: movzx esi, bpl
// asm:   0x595779d: mov rdi, rbx

void GameManagers_PhotonVoiceSync__LateUpdate(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_075458b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075458b3 = '\x01';
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) goto label_05957747;
label_059576ab:
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor != 0) goto label_059576ab;
label_05957747:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  }
  if (!bVar2) {
    return;
  }
  pPVar3 = (__this->fields).PhotonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar3->fields)._IsMine_k__BackingField == false) {
      pPVar1 = (__this->fields).VoiceView;
      if (pPVar1 != (Photon_Voice_PUN_PhotonVoiceView_o *)0x0) {
        bVar2 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking(pPVar1,(MethodInfo *)0x0);
        pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
          player = (pPVar3->fields)._Owner_k__BackingField;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          goto label_059577a0;
        }
      }
    }
    else {
      pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      if ((pPVar3 != (Photon_Pun_PhotonView_o *)0x0) &&
         (pPVar1 = (__this->fields).VoiceView, pPVar1 != (Photon_Voice_PUN_PhotonVoiceView_o *)0x0)) {
        player = (pPVar3->fields)._Owner_k__BackingField;
        bVar2 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording(pPVar1,(MethodInfo *)0x0);
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
label_059577a0:
        GameManagers_ChatManager__IsTalking(player,bVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$OnDestroy
// il2cpp: void GameManagers_PhotonVoiceSync__OnDestroy (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x59577b0

void GameManagers_PhotonVoiceSync__OnDestroy(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int32_t actorNumber;
  Photon_Pun_PhotonView_o *pPVar1;
  
  if (Il2CppMethodInitialized_075458b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_075458b4 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  actorNumber = (pPVar1->fields).ownerActorNr;
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    GameManagers_ChatManager__ClearTalking(actorNumber,(MethodInfo *)0x0);
    return;
  }
  GameManagers_ChatManager__ClearTalking(actorNumber,(MethodInfo *)0x0);
  return;
}


// GameManagers.PhotonVoiceSync$$.ctor
// il2cpp: void GameManagers_PhotonVoiceSync___ctor (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x5957810

void GameManagers_PhotonVoiceSync___ctor(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  (__this->fields)._lastTransmitTime = -INFINITY;
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


