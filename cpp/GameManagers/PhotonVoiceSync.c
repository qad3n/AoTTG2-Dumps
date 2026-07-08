// Type: GameManagers.PhotonVoiceSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/PhotonVoiceSync.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/PhotonVoiceSync.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.PhotonVoiceSync$$Awake
// il2cpp: void GameManagers_PhotonVoiceSync__Awake (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x423a040

void GameManagers_PhotonVoiceSync__Awake(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Photon_Voice_Unity_Recorder_o **ppPVar2;
  uint uVar3;
  long *plVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar5;
  long lVar6;
  UnityEngine_Transform_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar9;
  Photon_Voice_Unity_Recorder_o *pPVar10;
  UnityEngine_AudioSource_o *pUVar11;
  Photon_Voice_Unity_Speaker_o *pPVar12;
  MethodInfo *method_00;
  
  if (DAT_0570515e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_GetComponent_AudioSource);
    il2cpp_init_method_metadata(&MethodInfo_MicAmplifier_GetComponent_MicAmplifier);
    il2cpp_init_method_metadata(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_init_method_metadata(&MethodInfo_PhotonVoiceView_GetComponent_PhotonVoiceView);
    il2cpp_init_method_metadata(&MethodInfo_Recorder_GetComponent_Recorder);
    il2cpp_init_method_metadata(&MethodInfo_Speaker_GetComponent_Speaker);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&"Speaker");
    DAT_0570515e = '\x01';
  }
  lVar6 = MethodInfo_Void_Add;
  plVar4 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar4 != (long *)0x0) {
    if ((*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    __this_00 = (System_Collections_Generic_List_object__o *)plVar4[0xb];
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this_00->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)__this;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,(Il2CppObject *)__this,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        (__this->fields).Transform = pUVar7;
        il2cpp_runtime_glue(&(__this->fields).Transform,pUVar7);
        pPVar8 = (Photon_Pun_PhotonView_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_PhotonView_GetComponent_PhotonView);
        (__this->fields).PhotonView = pPVar8;
        il2cpp_runtime_glue(&(__this->fields).PhotonView,pPVar8);
        pPVar9 = (Photon_Voice_PUN_PhotonVoiceView_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this,MethodInfo_PhotonVoiceView_GetComponent_PhotonVoiceView);
        (__this->fields).VoiceView = pPVar9;
        il2cpp_runtime_glue(&(__this->fields).VoiceView,pPVar9);
        pPVar10 = (Photon_Voice_Unity_Recorder_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,MethodInfo_Recorder_GetComponent_Recorder);
        ppPVar2 = &(__this->fields).Recorder;
        (__this->fields).Recorder = pPVar10;
        il2cpp_runtime_glue(ppPVar2);
        pUVar7 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Transform__Find(pUVar7,"Speaker",(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pUVar11 = (UnityEngine_AudioSource_o *)
                      UnityEngine_Component__GetComponent<object>
                                ((UnityEngine_Component_o *)pUVar7,MethodInfo_AudioSource_GetComponent_AudioSource);
            (__this->fields).AudioSource = pUVar11;
            il2cpp_runtime_glue(&(__this->fields).AudioSource,pUVar11);
            pUVar11 = (__this->fields).AudioSource;
            if (pUVar11 != (UnityEngine_AudioSource_o *)0x0) {
              UnityEngine_AudioSource__set_ignoreListenerVolume(pUVar11,1,(MethodInfo *)0x0);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pUVar7 = UnityEngine_Transform__Find(pUVar7,"Speaker",(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                  pPVar12 = (Photon_Voice_Unity_Speaker_o *)
                            UnityEngine_Component__GetComponent<object>
                                      ((UnityEngine_Component_o *)pUVar7,MethodInfo_Speaker_GetComponent_Speaker);
                  (__this->fields).Speaker = pPVar12;
                  il2cpp_runtime_glue(&(__this->fields).Speaker,pPVar12);
                  method_00 = (MethodInfo *)
                              UnityEngine_Component__GetComponent<object>
                                        ((UnityEngine_Component_o *)__this,MethodInfo_MicAmplifier_GetComponent_MicAmplifier);
                  (__this->fields).MicAmplifier =
                       (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)method_00;
                  il2cpp_runtime_glue(&(__this->fields).MicAmplifier);
                  pPVar8 = (__this->fields).PhotonView;
                  if (pPVar8 != (Photon_Pun_PhotonView_o *)0x0) {
                    if ((char)(pPVar8->fields)._IsMine_k__BackingField == '\0') {
LAB_0423a35d:
                      GameManagers_PhotonVoiceSync__Apply(__this,method_00);
                      return;
                    }
                    pPVar10 = *ppPVar2;
                    if (pPVar10 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                      *(undefined1 *)
                       ((long)&(pPVar10->fields).audioSessionParameters.fields.Mode + 2) = 1;
                      Photon_Voice_Unity_Recorder__set_LoopAudioClip(pPVar10,1,(MethodInfo *)0x0);
                      if (*ppPVar2 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                        Photon_Voice_Unity_Recorder__set_VoiceDetectionThreshold
                                  (*ppPVar2,0.01,(MethodInfo *)0x0);
                        if (*ppPVar2 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                          Photon_Voice_Unity_Recorder__set_FrameDuration
                                    (*ppPVar2,20000,(MethodInfo *)0x0);
                          if (*ppPVar2 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                            Photon_Voice_Unity_Recorder__set_SamplingRate
                                      (*ppPVar2,48000,(MethodInfo *)0x0);
                            if (*ppPVar2 != (Photon_Voice_Unity_Recorder_o *)0x0) {
                              method_00 = (MethodInfo *)0x1f4;
                              Photon_Voice_Unity_Recorder__set_VoiceDetectionDelayMs
                                        (*ppPVar2,500,(MethodInfo *)0x0);
                              goto LAB_0423a35d;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.PhotonVoiceSync$$Apply
// il2cpp: void GameManagers_PhotonVoiceSync__Apply (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x423a380

void GameManagers_PhotonVoiceSync__Apply(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Voice_Unity_Recorder_o *pPVar2;
  long lVar3;
  System_String_o *a;
  Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *__this_00;
  Photon_Voice_DeviceInfo_o __this_01;
  Photon_Voice_DeviceInfo_o value;
  bool_conflict bVar4;
  System_String_o *b;
  Photon_Voice_DeviceFeatures_o *features;
  UnityEngine_AudioSource_o *pUVar5;
  float fVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  System_String_o local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (DAT_0570515f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Common");
    il2cpp_init_method_metadata(&"");
    DAT_0570515f = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_0423a6f2;
  if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto LAB_0423a6f2;
    Photon_Voice_Unity_Recorder__set_TransmitEnabled(pPVar2,0,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb0), lVar3 == 0)) ||
       (pPVar2 = (__this->fields).Recorder, pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0))
    goto LAB_0423a6f2;
    Photon_Voice_Unity_Recorder__set_VoiceDetection
              (pPVar2,(uint)(*(int *)(lVar3 + 0x14) == 1),(MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto LAB_0423a6f2;
    Photon_Voice_Unity_Recorder__set_MicrophoneType(pPVar2,0,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xa8), lVar3 == 0)) goto LAB_0423a6f2;
    a = *(System_String_o **)(lVar3 + 0x18);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    b = UI_UIManager__GetLocale
                  ("Common","None","","","",
                   (MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    pPVar2 = (__this->fields).Recorder;
    if ((char)bVar4 == '\0') {
      features = (Photon_Voice_DeviceFeatures_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
      if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xa8), lVar3 == 0)) goto LAB_0423a6f2;
      features = *(Photon_Voice_DeviceFeatures_o **)(lVar3 + 0x18);
    }
    local_48.fields._stringLength = 0;
    local_48.fields._firstChar = 0;
    local_48.fields._6_2_ = 0;
    uStack_30 = 0;
    local_48.klass = (System_String_c *)0x0;
    local_48.monitor = (void *)0x0;
    local_28 = 0;
    __this_01.fields._IDString_k__BackingField = (System_String_o *)in_stack_ffffffffffffff90;
    __this_01.fields._IsDefault_k__BackingField = (int)in_stack_ffffffffffffff88;
    __this_01.fields._IDInt_k__BackingField = (int)((ulong)in_stack_ffffffffffffff88 >> 0x20);
    __this_01.fields._Name_k__BackingField = (System_String_o *)in_stack_ffffffffffffff98;
    __this_01.fields.features = (Photon_Voice_DeviceFeatures_o *)in_stack_ffffffffffffffa0;
    __this_01.fields._32_8_ = in_stack_ffffffffffffffa8;
    Photon_Voice_DeviceInfo___ctor(__this_01,&local_48,features,(MethodInfo *)0x0);
    if (pPVar2 == (Photon_Voice_Unity_Recorder_o *)0x0) goto LAB_0423a6f2;
    value.fields._IDString_k__BackingField = local_48.monitor;
    value.fields._0_8_ = local_48.klass;
    value.fields._Name_k__BackingField = (System_String_o *)local_48.fields;
    value.fields.features = (Photon_Voice_DeviceFeatures_o *)uStack_30;
    value.fields._32_8_ = local_28;
    Photon_Voice_Unity_Recorder__set_MicrophoneDevice(pPVar2,value,(MethodInfo *)0x0);
    __this_00 = (__this->fields).MicAmplifier;
    if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar6 = ApplicationManagers_VoiceChatManager__GetInputVolume((MethodInfo *)0x0);
    if (__this_00 == (Photon_Voice_Unity_UtilityScripts_MicAmplifier_o *)0x0) goto LAB_0423a6f2;
    Photon_Voice_Unity_UtilityScripts_MicAmplifier__set_AmplificationFactor
              (__this_00,fVar6,(MethodInfo *)0x0);
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0)) &&
     (*(long *)(lVar3 + 0x108) != 0)) {
    pUVar5 = (__this->fields).AudioSource;
    if (*(int *)(*(long *)(lVar3 + 0x108) + 0x14) == 1) {
      if ((*(long *)(lVar3 + 0x118) != 0) && (pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__set_maxDistance
                  (pUVar5,*(float *)(*(long *)(lVar3 + 0x118) + 0x14),(MethodInfo *)0x0);
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
        if (((lVar3 != 0) &&
            ((lVar3 = *(long *)(lVar3 + 0x58), lVar3 != 0 &&
             (lVar3 = *(long *)(lVar3 + 0x110), lVar3 != 0)))) &&
           (pUVar5 = (__this->fields).AudioSource, pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
          UnityEngine_AudioSource__set_minDistance
                    (pUVar5,*(float *)(lVar3 + 0x14),(MethodInfo *)0x0);
          pUVar5 = (__this->fields).AudioSource;
          if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
            fVar6 = *(float *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 0x10);
            goto LAB_0423a6df;
          }
        }
      }
    }
    else if (pUVar5 != (UnityEngine_AudioSource_o *)0x0) {
      fVar6 = 0.0;
LAB_0423a6df:
      UnityEngine_AudioSource__set_spatialBlend(pUVar5,fVar6,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0423a6f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.PhotonVoiceSync$$Update
// il2cpp: void GameManagers_PhotonVoiceSync__Update (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x423a700

void GameManagers_PhotonVoiceSync__Update(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  Photon_Pun_PhotonView_o *view;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  Settings_KeybindSetting_o *__this_01;
  char cVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  byte bVar8;
  Photon_Voice_Unity_Recorder_o *__this_02;
  UnityEngine_AudioSource_o *__this_03;
  float value;
  UnityEngine_Vector3_Fields value_00;
  
  if (DAT_05705160 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseTitan);
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05705160 = '\x01';
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar2);
    }
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if ((((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x58), lVar3 == 0)) ||
      (lVar3 = *(long *)(lVar3 + 0x108), lVar3 == 0)) ||
     (view = (__this->fields).PhotonView, view == (Photon_Pun_PhotonView_o *)0x0))
  goto LAB_0423aaad;
  iVar1 = *(int *)(lVar3 + 0x14);
  if ((char)(view->fields)._IsMine_k__BackingField == '\0') {
    __this_03 = (__this->fields).AudioSource;
    if (iVar1 != 2) {
      if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = ApplicationManagers_VoiceChatManager__GetOuputVolume(view,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_AudioSource_o *)0x0) goto LAB_0423aaad;
      goto LAB_0423aa98;
    }
    if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
      value = 0.0;
      goto LAB_0423aa98;
    }
    goto LAB_0423aaad;
  }
  if (plVar2 == (long *)0x0) goto LAB_0423aaad;
  pUVar4 = (UnityEngine_Object_o *)plVar2[0xe];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (pUVar4 == (UnityEngine_Object_o *)0x0) goto LAB_0423aaad;
    bVar8 = (TypeInfo_BaseTitan->_2).naturalAligment;
    if (((pUVar4->klass->_2).naturalAligment < bVar8) ||
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != TypeInfo_BaseTitan)) {
      __this_00 = (__this->fields).Transform;
      pUVar7 = (UnityEngine_Transform_o *)(**(code **)&pUVar4->klass[3]._2.element_size)(pUVar4);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto LAB_0423aaad;
      value_00 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    }
    else {
      if ((pUVar4[10].monitor == (void *)0x0) ||
         (pUVar7 = *(UnityEngine_Transform_o **)((long)pUVar4[10].monitor + 0x38),
         pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_0423aaad;
      __this_00 = (__this->fields).Transform;
      value_00 = (UnityEngine_Vector3_Fields)
                 UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    }
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_0423aaad;
    UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o)value_00,(MethodInfo *)0x0)
    ;
  }
  pUVar4 = (UnityEngine_Object_o *)plVar2[0xe];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = 0;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (plVar2[0xe] == 0) goto LAB_0423aaad;
    bVar8 = *(byte *)(plVar2[0xe] + 0x68) ^ 1;
  }
  if ((iVar1 == 2) || ((iVar1 == 1 && (bVar8 == 0)))) {
LAB_0423aa75:
    __this_02 = (__this->fields).Recorder;
    if (__this_02 == (Photon_Voice_Unity_Recorder_o *)0x0) goto LAB_0423aaad;
    bVar6 = 0;
LAB_0423aa80:
    Photon_Voice_Unity_Recorder__set_TransmitEnabled(__this_02,bVar6,(MethodInfo *)0x0);
  }
  else {
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
    if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0xb0), lVar3 == 0)) goto LAB_0423aaad;
    iVar1 = *(int *)(lVar3 + 0x14);
    if (iVar1 == 1) {
LAB_0423aa65:
      __this_02 = (__this->fields).Recorder;
      if (__this_02 == (Photon_Voice_Unity_Recorder_o *)0x0) goto LAB_0423aaad;
      bVar6 = 1;
      goto LAB_0423aa80;
    }
    if (iVar1 == 0) {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
        bVar6 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
      }
      else {
        bVar6 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
      }
      if (cVar5 == '\0') {
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
        if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
           (__this_01 = *(Settings_KeybindSetting_o **)(lVar3 + 0x90),
           __this_01 == (Settings_KeybindSetting_o *)0x0)) goto LAB_0423aaad;
        bVar6 = Settings_KeybindSetting__GetKey(__this_01,0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') goto LAB_0423aa65;
      }
      goto LAB_0423aa75;
    }
  }
  __this_03 = (__this->fields).AudioSource;
  if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
    value = 1.0;
LAB_0423aa98:
    UnityEngine_AudioSource__set_volume(__this_03,value,(MethodInfo *)0x0);
    return;
  }
LAB_0423aaad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.PhotonVoiceSync$$LateUpdate
// il2cpp: void GameManagers_PhotonVoiceSync__LateUpdate (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x423aac0

void GameManagers_PhotonVoiceSync__LateUpdate
               (GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Voice_PUN_PhotonVoiceView_o *pPVar1;
  char cVar2;
  bool_conflict bVar3;
  uint uVar4;
  Photon_Pun_PhotonView_o *pPVar5;
  Photon_Realtime_Player_o *player;
  
  if (DAT_05705161 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    DAT_05705161 = '\x01';
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) goto LAB_0423ab87;
LAB_0423aaeb:
    bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    if (*(int *)(TypeInfo_ChatManager + 0xe4) != 0) goto LAB_0423aaeb;
LAB_0423ab87:
    il2cpp_init_class();
    bVar3 = GameManagers_ChatManager__IsChatAvailable((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 == '\0') {
    return;
  }
  pPVar5 = (__this->fields).PhotonView;
  if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar5->fields)._IsMine_k__BackingField == '\0') {
      pPVar1 = (__this->fields).VoiceView;
      if (pPVar1 != (Photon_Voice_PUN_PhotonVoiceView_o *)0x0) {
        uVar4 = Photon_Voice_PUN_PhotonVoiceView__get_IsSpeaking(pPVar1,(MethodInfo *)0x0);
        pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                           ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
        if (pPVar5 != (Photon_Pun_PhotonView_o *)0x0) {
          player = (pPVar5->fields)._Owner_k__BackingField;
          if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          goto LAB_0423abe0;
        }
      }
    }
    else {
      pPVar5 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
      if ((pPVar5 != (Photon_Pun_PhotonView_o *)0x0) &&
         (pPVar1 = (__this->fields).VoiceView, pPVar1 != (Photon_Voice_PUN_PhotonVoiceView_o *)0x0))
      {
        player = (pPVar5->fields)._Owner_k__BackingField;
        uVar4 = Photon_Voice_PUN_PhotonVoiceView__get_IsRecording(pPVar1,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
LAB_0423abe0:
        GameManagers_ChatManager__IsTalking(player,uVar4 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.PhotonVoiceSync$$.ctor
// il2cpp: void GameManagers_PhotonVoiceSync___ctor (GameManagers_PhotonVoiceSync_o* __this, const MethodInfo* method);
// 0x423abf0

void GameManagers_PhotonVoiceSync___ctor(GameManagers_PhotonVoiceSync_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


