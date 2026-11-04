// Type: GameManagers.PhotonVoiceSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/GameManagers/PhotonVoiceSync.cs
// Prior real C# source (older reference): Assets/Scripts/GameManagers/PhotonVoiceSync.cs
// --------------------------------

// GameManagers.PhotonVoiceSync$$Awake
// il2cpp: void GameManagers_PhotonVoiceSync__Awake (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x181e72710

void GameManagers_PhotonVoiceSync__Awake(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Photon_Voice_PUN_PhotonVoiceView_o *value;
  Photon_Voice_Unity_Recorder_o *pPVar9;
  UnityEngine_AudioSource_o *pUVar10;
  Photon_Voice_Unity_Speaker_o *value_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *value_01;
  
  if (Il2CppMethodInitialized_184344f11 == '\0') {
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
    Il2CppMethodInitialized_184344f11 = '\x01';
  }
  pMVar6 = MethodInfo_System_Collections_Generic_List_PhotonVoiceSync_Add;
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar2) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
    }
    __this_00 = (System_Collections_Generic_List_object__o *)(*(uint64_t *)((char *)pGVar4 + 0x60));
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar5->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3,__this);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_00,(Il2CppObject *)__this,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        (__this->fields).Transform = pUVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Transform,pUVar7);
        pPVar8 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
        (__this->fields).PhotonView = pPVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView,pPVar8);
        value = (Photon_Voice_PUN_PhotonVoiceView_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonVoiceView)
        ;
        (__this->fields).VoiceView = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceView,value);
        pPVar9 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this,
                            (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Recorder);
        (__this->fields).Recorder = pPVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Recorder,pPVar9);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Speaker",(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar7,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_AudioSource);
            (__this->fields).AudioSource = pUVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).AudioSource,pUVar10);
            pUVar10 = (__this->fields).AudioSource;
            if (pUVar10 != (UnityEngine_AudioSource_o *)0x0) {
              UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar10,true,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Transform__Find(pUVar7,"Speaker",(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  value_00 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)pUVar7,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_Speaker);
                  (__this->fields).Speaker = value_00;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).Speaker,value_00);
                  value_01 = UnityEngine_Component__GetComponent_object_
                                       ((UnityEngine_Component_o *)__this,
                                        (MethodInfo_6651A0 *)
                                        MethodInfo_UnityEngine_Component_GetComponent_MicAmplifier);
                  (__this->fields).MicAmplifier = value_01;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).MicAmplifier,value_01);
                  pPVar8 = (__this->fields).PhotonView;
                  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
                    if ((pPVar8->fields)._IsMine_k__BackingField == false) {
label_181e72a3c:
                      GameManagers_PhotonVoiceSync__Apply(__this,(MethodInfo *)0x0);
                      return;
                    }
                    pPVar9 = (__this->fields).Recorder;
                    if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                      (pPVar9->fields).useMicrophoneTypeFallback = true;
                      pPVar9 = (__this->fields).Recorder;
                      if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                        Photon_Voice_Unity_Recorder__set_LoopAudioClip(pPVar9,true,(MethodInfo *)0x0);
                        pPVar9 = (__this->fields).Recorder;
                        if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                          Photon_Voice_Unity_Recorder__set_VoiceDetectionThreshold
                                    (pPVar9,0.01,(MethodInfo *)0x0);
                          pPVar9 = (__this->fields).Recorder;
                          if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                            Photon_Voice_Unity_Recorder__set_FrameDuration(pPVar9,20000,(MethodInfo *)0x0);
                            pPVar9 = (__this->fields).Recorder;
                            if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                              Photon_Voice_Unity_Recorder__set_SamplingRate(pPVar9,48000,(MethodInfo *)0x0);
                              pPVar9 = (__this->fields).Recorder;
                              if (pPVar9 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                                Photon_Voice_Unity_Recorder__set_VoiceDetectionDelayMs
                                          (pPVar9,500,(MethodInfo *)0x0);
                                goto label_181e72a3c;
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
  }
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$Apply
// il2cpp: void GameManagers_PhotonVoiceSync__Apply (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x181e72320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e72505: jmp 0x181e72566

void GameManagers_PhotonVoiceSync__Apply(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Voice_Unity_Recorder_o *pPVar2;
  Settings_SoundSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *a;
  Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *__this_00;
  Settings_InGameSet_o *pSVar6;
  Settings_InGameMiscSettings_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  bool bVar9;
  System_String_o *b;
  UnityEngine_AudioSource_o *pUVar10;
  float fVar11;
  Photon_Voice_DeviceInfo_Fields local_68;
  Photon_Voice_DeviceInfo_Fields local_38;
  
  if (Il2CppMethodInitialized_184344f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344f12 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e726fe;
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e726fe;
    Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar2,false,(MethodInfo *)0x0);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if (((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
        (pSVar4 = (pSVar3->fields).VoiceChatInput, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
       (pPVar2 = (__this->fields).Recorder, pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0))
    goto label_181e726fe;
    Photon_Voice_Unity_Recorder__set_VoiceDetection(pPVar2,(pSVar4->fields)._value == 1,(MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e726fe;
    Photon_Voice_Unity_Recorder__set_MicrophoneType(pPVar2,0,(MethodInfo *)0x0);
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar5 = (pSVar3->fields).VoiceChatDevice, pSVar5 == (Settings_StringSetting_o *)0x0))
    goto label_181e726fe;
    a = (pSVar5->fields)._value;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    b = UI_UIManager__GetLocale
                  ("Common","None","","",
                   "",(MethodInfo *)0x0);
    bVar9 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if (bVar9) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar3 == (Settings_SoundSettings_o *)0x0) ||
         (pSVar5 = (pSVar3->fields).VoiceChatDevice, pSVar5 == (Settings_StringSetting_o *)0x0)) {
label_181e7270a:
        ThrowNullReferenceException();
      }
      local_68.useStringID = false;
      local_68._33_7_ = 0;
      local_68._IsDefault_k__BackingField = false;
      local_68._1_3_ = 0;
      local_68._IDInt_k__BackingField = 0;
      local_68._IDString_k__BackingField = (System_String_o *)0x0;
      local_68._Name_k__BackingField = (System_String_o *)0x0;
      local_68.features = (Photon_Voice_DeviceFeatures_o *)0x0;
      Photon_Voice_DeviceInfo___ctor_1d695b0
                ((Photon_Voice_DeviceInfo_o *)&local_68,(pSVar5->fields)._value,
                 (Photon_Voice_DeviceFeatures_o *)0x0,(MethodInfo *)0x0);
      if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e7270a;
    }
    else {
      local_68._IsDefault_k__BackingField = false;
      local_68._1_3_ = 0;
      local_68._IDInt_k__BackingField = 0;
      local_68._IDString_k__BackingField = (System_String_o *)0x0;
      local_68.useStringID = false;
      local_68._33_7_ = 0;
      local_68._Name_k__BackingField = (System_String_o *)0x0;
      local_68.features = (Photon_Voice_DeviceFeatures_o *)0x0;
      Photon_Voice_DeviceInfo___ctor_1d695b0
                ((Photon_Voice_DeviceInfo_o *)&local_68,
                 (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                 (Photon_Voice_DeviceFeatures_o *)0x0,(MethodInfo *)0x0);
      if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    local_38._IsDefault_k__BackingField = local_68._IsDefault_k__BackingField;
    local_38._1_3_ = local_68._1_3_;
    local_38._IDInt_k__BackingField = local_68._IDInt_k__BackingField;
    local_38._IDString_k__BackingField = local_68._IDString_k__BackingField;
    local_38.useStringID = local_68.useStringID;
    local_38._33_7_ = local_68._33_7_;
    local_38._Name_k__BackingField = local_68._Name_k__BackingField;
    local_38.features = local_68.features;
    Photon_Voice_Unity_Recorder__set_MicrophoneDevice
              (pPVar2,(Photon_Voice_DeviceInfo_o *)&local_38,(MethodInfo *)0x0);
    __this_00 = (__this->fields).MicAmplifier;
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    fVar11 = ApplicationManagers_VoiceChatManager__GetInputVolume((MethodInfo *)0x0);
    if (__this_00 == (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)0x0) goto label_181e726fe;
    Photon_Voice_Unity_UtilityScripts_MicAmplifier__set_AmplificationFactor
              (__this_00,fVar11,(MethodInfo *)0x0);
  }
  pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar6 != (Settings_InGameSet_o *)0x0) &&
      (pSVar7 = (pSVar6->fields).Misc, pSVar7 != (Settings_InGameMiscSettings_o *)0x0)) &&
     (pSVar4 = (pSVar7->fields).VoiceChat, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    pUVar10 = (__this->fields).AudioSource;
    if ((pSVar4->fields)._value == 1) {
      pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
      if (((pSVar6 != (Settings_InGameSet_o *)0x0) &&
          (pSVar7 = (pSVar6->fields).Misc, pSVar7 != (Settings_InGameMiscSettings_o *)0x0)) &&
         ((pSVar8 = (pSVar7->fields).ProximityMaxDistance, pSVar8 != (Settings_FloatSetting_o *)0x0 &&
          (pUVar10 != (UnityEngine_AudioSource_o *)0x0)))) {
        UnityEngine_AudioSource__set_maxDistance(pUVar10,(pSVar8->fields)._value,(MethodInfo *)0x0);
        pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
        if (((pSVar6 != (Settings_InGameSet_o *)0x0) &&
            (pSVar7 = (pSVar6->fields).Misc, pSVar7 != (Settings_InGameMiscSettings_o *)0x0)) &&
           ((pSVar8 = (pSVar7->fields).ProximityMinDistance, pSVar8 != (Settings_FloatSetting_o *)0x0 &&
            (pUVar10 = (__this->fields).AudioSource, pUVar10 != (UnityEngine_AudioSource_o *)0x0)))) {
          UnityEngine_AudioSource__set_minDistance(pUVar10,(pSVar8->fields)._value,(MethodInfo *)0x0);
          pUVar10 = (__this->fields).AudioSource;
          if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
          }
          if (pUVar10 != (UnityEngine_AudioSource_o *)0x0) {
            fVar11 = TypeInfo_ApplicationManagers_VoiceChatManager->static_fields->ProximitySpatialBlend;
            goto label_181e72621;
          }
        }
      }
    }
    else if (pUVar10 != (UnityEngine_AudioSource_o *)0x0) {
      fVar11 = 0.0;
label_181e72621:
      UnityEngine_AudioSource__set_spatialBlend(pUVar10,fVar11,(MethodInfo *)0x0);
      return;
    }
  }
label_181e726fe:
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$Update
// il2cpp: void GameManagers_PhotonVoiceSync__Update (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x181e72b50
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e72ca8: xor r8d, r8d
// asm:   0x181e72cab: movaps xmm1, xmm0
// asm:   0x181e72cae: mov rcx, rdi
// asm:   0x181e72d83: mov rdx, rax
// asm:   0x181e72e31: jmp 0x181e72d86

void GameManagers_PhotonVoiceSync__Update(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Photon_Pun_PhotonView_o *view;
  GameManagers_BaseGameManager_c *pGVar7;
  UnityEngine_Object_c *pUVar8;
  UnityEngine_Transform_o *__this_00;
  longlong lVar9;
  Settings_SoundSettings_o *pSVar10;
  Settings_InputSettings_o *pSVar11;
  Settings_GeneralInputSettings_o *pSVar12;
  Settings_KeybindSetting_o *__this_01;
  bool bVar13;
  GameManagers_BaseGameManager_c *pGVar14;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_AudioSource_o *__this_03;
  Photon_Voice_Unity_Recorder_o *__this_04;
  float value;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184344f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184344f13 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
    }
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if ((((pSVar4 == (Settings_InGameSet_o *)0x0) ||
       (pSVar5 = (pSVar4->fields).Misc, pSVar5 == (Settings_InGameMiscSettings_o *)0x0)) ||
      (pSVar6 = (pSVar5->fields).VoiceChat, pSVar6 == (Settings_IntSetting_o *)0x0)) ||
     (view = (__this->fields).PhotonView, view == (Photon_Pun_PhotonView_o *)0x0)) goto label_181e72f61;
  iVar2 = (pSVar6->fields)._value;
  if ((view->fields)._IsMine_k__BackingField == false) {
    __this_03 = (__this->fields).AudioSource;
    if (iVar2 == 2) {
      if (__this_03 == (UnityEngine_AudioSource_o *)0x0) goto label_181e72f61;
      value = 0.0;
      goto label_181e72cb1;
    }
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    value = ApplicationManagers_VoiceChatManager__GetOuputVolume(view,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_AudioSource_o *)0x0) goto label_181e72cb1;
    goto label_181e72f61;
  }
  if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) goto label_181e72f61;
  pGVar7 = (*(uint64_t *)((char *)pGVar3 + 0x78));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    if (pGVar7 == (GameManagers_BaseGameManager_c *)0x0) goto label_181e72f61;
    pUVar8 = (pGVar7->_1).image;
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if (((pUVar8->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    __this_00 = (__this->fields).Transform;
    pGVar14 = (GameManagers_BaseGameManager_c *)0x0;
    if (bVar13) {
      pGVar14 = pGVar7;
    }
    if (pGVar14 == (GameManagers_BaseGameManager_c *)0x0) {
      __this_02 = (UnityEngine_Transform_o *)
                  (**(code **)&((Il2CppClass *)pUVar8)->vtable[77].methodPtr)(pGVar7,((Il2CppClass *)pUVar8)->vtable[77].method);
    }
    else {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if (((pUVar8->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar8->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar7);
      }
      lVar9 = *(longlong *)&(pGVar7->_2).actualSize;
      if (lVar9 == 0) goto label_181e72f61;
      __this_02 = *(UnityEngine_Transform_o **)(lVar9 + 0x38);
    }
    if ((__this_02 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar15 = UnityEngine_Transform__get_position(&local_18,__this_02,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_181e72f61;
    local_28.x = (pUVar15->fields).x;
    local_28.y = (pUVar15->fields).y;
    local_28.z = (pUVar15->fields).z;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
  }
  pGVar7 = (*(uint64_t *)((char *)pGVar3 + 0x78));
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    if ((*(uint64_t *)((char *)pGVar3 + 0x78)) == (GameManagers_BaseGameManager_c *)0x0) goto label_181e72f61;
    bVar13 = *(char *)&(((*(Il2CppClass **)((char *)pGVar3 + 0x78)))->_1).interopData == '\0';
  }
  else {
    bVar13 = false;
  }
  if ((iVar2 == 2) || ((iVar2 == 1 && (!bVar13)))) {
label_181e72f2c:
    __this_04 = (__this->fields).Recorder;
    if (__this_04 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e72f61;
    bVar13 = false;
label_181e72f37:
    Photon_Voice_Unity_Recorder__set_TransmitEnabled(__this_04,bVar13,(MethodInfo *)0x0);
  }
  else {
    pSVar10 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
    if ((pSVar10 == (Settings_SoundSettings_o *)0x0) ||
       (pSVar6 = (pSVar10->fields).VoiceChatInput, pSVar6 == (Settings_IntSetting_o *)0x0))
    goto label_181e72f61;
    if ((pSVar6->fields)._value == 0) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      bVar13 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      if (!bVar13) {
        pSVar11 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
        if (((pSVar11 == (Settings_InputSettings_o *)0x0) ||
            (pSVar12 = (pSVar11->fields).General, pSVar12 == (Settings_GeneralInputSettings_o *)0x0)) ||
           (__this_01 = (pSVar12->fields).PushToTalk, __this_01 == (Settings_KeybindSetting_o *)0x0))
        goto label_181e72f61;
        bVar13 = Settings_KeybindSetting__GetKey(__this_01,false,(MethodInfo *)0x0);
        if (bVar13) {
          __this_04 = (__this->fields).Recorder;
          if (__this_04 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e72f61;
          bVar13 = true;
          goto label_181e72f37;
        }
      }
      goto label_181e72f2c;
    }
    if ((((TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).VoiceChatInput)->fields).
        _value == 1) {
      __this_04 = (__this->fields).Recorder;
      if (__this_04 == (Photon_Voice_Unity_Recorder_o *)0x0) goto label_181e72f61;
      bVar13 = true;
      goto label_181e72f37;
    }
  }
  __this_03 = (__this->fields).AudioSource;
  if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
    value = 1.0;
label_181e72cb1:
    UnityEngine_AudioSource__set_volume(__this_03,value,(MethodInfo *)0x0);
    return;
  }
label_181e72f61:
  ThrowNullReferenceException();
}


// GameManagers.PhotonVoiceSync$$LateUpdate
// il2cpp: void GameManagers_PhotonVoiceSync__LateUpdate (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x181e72a60

void GameManagers_PhotonVoiceSync__LateUpdate(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar1;
  bool bVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184344f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184344f14 = '\x01';
  }
  if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
  }
  bVar2 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
  if (bVar2) {
    pPVar3 = (__this->fields).PhotonView;
    if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e72b44;
    if ((pPVar3->fields)._IsMine_k__BackingField == false) {
      pPVar1 = (__this->fields).VoiceView;
      if (pPVar1 == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0) {
label_181e72b44:
        ThrowNullReferenceException();
      }
      bVar2 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking(pPVar1,(MethodInfo *)0x0);
      pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e72b44;
      player = (pPVar3->fields)._Owner_k__BackingField;
    }
    else {
      pPVar3 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      if ((pPVar3 == (Photon_Pun_PhotonView_o *)0x0) ||
         (pPVar1 = (__this->fields).VoiceView, pPVar1 == (Photon_Voice_PUN_PhotonVoiceView_o *)0x0))
      goto label_181e72b44;
      player = (pPVar3->fields)._Owner_k__BackingField;
      bVar2 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording(pPVar1,(MethodInfo *)0x0);
    }
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__IsTalking(player,bVar2,(MethodInfo *)0x0);
  }
  return;
}


// GameManagers.PhotonVoiceSync$$.ctor
// il2cpp: void GameManagers_PhotonVoiceSync___ctor (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x18190eda0

void
GameManagers_PhotonVoiceSync___ctor(GameManagers_PhotonVoiceSync_o* __this, MethodInfo* method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


