// Type: UI.ScoreboardMutePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ScoreboardMutePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// --------------------------------

// UI.ScoreboardMutePopup$$get_DialogId
// il2cpp: System_String_o* UI_ScoreboardMutePopup__get_DialogId (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x5d48af0

System_String_o * UI_ScoreboardMutePopup__get_DialogId(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute");
    Il2CppMethodInitialized_07547ec9 = '\x01';
  }
  return "ingame-scoreboard-mute";
}


// UI.ScoreboardMutePopup$$Setup
// il2cpp: void UI_ScoreboardMutePopup__Setup (UI_ScoreboardMutePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d48b20

void UI_ScoreboardMutePopup__Setup(UI_ScoreboardMutePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *pGVar4;
  
  if (Il2CppMethodInitialized_07547eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgSliderControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-emote");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-voice");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-text");
    Il2CppMethodInitialized_07547eca = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-scoreboard-mute-emote",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
      (__this->fields)._muteEmote = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._muteEmote);
      pGVar1 = (__this->fields)._Dialog_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-scoreboard-mute-text",(MethodInfo *)0x0)
        ;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
          (__this->fields)._muteText = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._muteText);
          pGVar1 = (__this->fields)._Dialog_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                               (pGVar1,"ingame-scoreboard-mute-voice",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar2,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
              (__this->fields)._muteVoice = pUVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._muteVoice);
              pGVar1 = (__this->fields)._Dialog_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                                   (pGVar1,"ingame-scoreboard-mute-volume",(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                  pGVar4 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar2,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_AottgSliderControl
                                     );
                  (__this->fields)._voiceVolume = pGVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._voiceVolume);
                  return;
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


// UI.ScoreboardMutePopup$$Show
// il2cpp: void UI_ScoreboardMutePopup__Show (UI_ScoreboardMutePopup_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5d48cd0

void UI_ScoreboardMutePopup__Show
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_01;
  bool bVar3;
  uint in_EAX;
  float value;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547ecb = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  (__this->fields)._player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._player);
  pUVar1 = (__this->fields)._muteEmote;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  if ((pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) &&
     (bVar3 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar2,(player->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains),
     pUVar1 != (UnityEngine_UI_Toggle_o *)0x0)) {
    UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
    if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      pUVar1 = (__this->fields)._muteText;
      bVar3 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar2,(player->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
        UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
        pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
        if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          pUVar1 = (__this->fields)._muteVoice;
          bVar3 = System_Collections_Generic_HashSet_int___Contains
                            (pSVar2,(player->fields).actorNumber,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
            __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
            if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
              __this_01 = (__this->fields)._voiceVolume;
              bVar3 = System_Collections_Generic_Dictionary_int__float___TryGetValue
                                (__this_00,(player->fields).actorNumber,(float *)((long)&uStack_38 + 4),
                                 (MethodInfo_4A19160 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_float_TryGetValue);
              if (__this_01 != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
                if (bVar3) {
                  value = uStack_38._4_4_;
                }
                else {
                  value = 1.0;
                }
                Gisketch_Aottg2UI_Actions_AottgSliderControl__SetValueWithoutNotify
                          (__this_01,value,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
                          ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardMutePopup$$HandleMute
// il2cpp: void UI_ScoreboardMutePopup__HandleMute (UI_ScoreboardMutePopup_o* __this, System_String_o* type, bool mute, bool isMuted, const MethodInfo* method);
// 0x5d48ea0

void UI_ScoreboardMutePopup__HandleMute
               (UI_ScoreboardMutePopup_o *__this,System_String_o *type,bool mute,bool isMuted,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if (Il2CppMethodInitialized_07547ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_07547ecc = '\x01';
  }
  if ((mute) && (!isMuted)) {
    pPVar1 = (__this->fields)._player;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__MutePlayer(pPVar1,type,(MethodInfo *)0x0);
    return;
  }
  if (!mute && isMuted) {
    pPVar1 = (__this->fields)._player;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__UnmutePlayer(pPVar1,type,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.ScoreboardMutePopup$$Confirm
// il2cpp: void UI_ScoreboardMutePopup__Confirm (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x5d48f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d49024: mov rdi, qword ptr [r12]

void UI_ScoreboardMutePopup__Confirm(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  float volume;
  bool bVar1;
  UnityEngine_UI_Toggle_o *pUVar2;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *pGVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Photon_Realtime_Player_o *pPVar7;
  
  if (Il2CppMethodInitialized_07547ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_07547ecd = '\x01';
  }
  if (((__this->fields).IsActive == false) ||
     (pPVar7 = (__this->fields)._player, pPVar7 == (Photon_Realtime_Player_o *)0x0)) {
    return;
  }
  pUVar2 = (__this->fields)._muteEmote;
  if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
    bVar1 = (pUVar2->fields).m_IsOn;
    if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      pPVar7 = (__this->fields)._player;
      if (pPVar7 == (Photon_Realtime_Player_o *)0x0) goto label_05d4932c;
    }
    pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
    if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar6 = System_Collections_Generic_HashSet_int___Contains
                        (pSVar3,(pPVar7->fields).actorNumber,
                         (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      pSVar5 = "Emote";
      if (Il2CppMethodInitialized_07547ecc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
        Il2CppMethodInitialized_07547ecc = '\x01';
      }
      if (bVar1 == false || bVar6) {
        if (bVar6 && bVar1 == false) {
          pPVar7 = (__this->fields)._player;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__UnmutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
        }
      }
      else {
        pPVar7 = (__this->fields)._player;
        if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
        }
        GameManagers_ChatManager__MutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
      }
      pUVar2 = (__this->fields)._muteText;
      if (((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
          (pPVar7 = (__this->fields)._player, pPVar7 != (Photon_Realtime_Player_o *)0x0)) &&
         (pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
         pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
        bVar1 = (pUVar2->fields).m_IsOn;
        bVar6 = System_Collections_Generic_HashSet_int___Contains
                          (pSVar3,(pPVar7->fields).actorNumber,
                           (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        pSVar5 = "Text";
        if (Il2CppMethodInitialized_07547ecc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
          Il2CppMethodInitialized_07547ecc = '\x01';
        }
        if (bVar1 == false || bVar6) {
          if (bVar6 && bVar1 == false) {
            pPVar7 = (__this->fields)._player;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__UnmutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
          }
        }
        else {
          pPVar7 = (__this->fields)._player;
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          GameManagers_ChatManager__MutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
        }
        pUVar2 = (__this->fields)._muteVoice;
        if (((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
            (pPVar7 = (__this->fields)._player, pPVar7 != (Photon_Realtime_Player_o *)0x0)) &&
           (pSVar3 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat,
           pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
          bVar1 = (pUVar2->fields).m_IsOn;
          bVar6 = System_Collections_Generic_HashSet_int___Contains
                            (pSVar3,(pPVar7->fields).actorNumber,
                             (MethodInfo_4FA7E00 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          pSVar5 = "Voice";
          if (Il2CppMethodInitialized_07547ecc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
            Il2CppMethodInitialized_07547ecc = '\x01';
          }
          if (bVar1 == false || bVar6) {
            if (bVar6 && bVar1 == false) {
              pPVar7 = (__this->fields)._player;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__UnmutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
            }
          }
          else {
            pPVar7 = (__this->fields)._player;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__MutePlayer(pPVar7,pSVar5,(MethodInfo *)0x0);
          }
          pGVar4 = (__this->fields)._voiceVolume;
          if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
            pPVar7 = (__this->fields)._player;
            volume = (pGVar4->fields)._Value_k__BackingField;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            GameManagers_ChatManager__SetPlayerVolume(pPVar7,volume,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
        }
      }
    }
  }
label_05d4932c:
  ThrowNullReferenceException();
}


// UI.ScoreboardMutePopup$$.ctor
// il2cpp: void UI_ScoreboardMutePopup___ctor (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x5d49340

void UI_ScoreboardMutePopup___ctor(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


