// Type: UI.ScoreboardMutePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardMutePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardMutePopup.cs
// --------------------------------

// UI.ScoreboardMutePopup$$get_DialogId
// il2cpp: System_String_o* UI_ScoreboardMutePopup__get_DialogId (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x18226a3d0

System_String_o * UI_ScoreboardMutePopup__get_DialogId(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute");
    Il2CppMethodInitialized_184347351 = '\x01';
  }
  return "ingame-scoreboard-mute";
}


// UI.ScoreboardMutePopup$$Setup
// il2cpp: void UI_ScoreboardMutePopup__Setup (UI_ScoreboardMutePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18226a040

void UI_ScoreboardMutePopup__Setup(UI_ScoreboardMutePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *value;
  
  if (Il2CppMethodInitialized_184347352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AottgSliderControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-emote");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-voice");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-volume");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-scoreboard-mute-text");
    Il2CppMethodInitialized_184347352 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-scoreboard-mute-emote",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
      (__this->fields)._muteEmote = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._muteEmote,pUVar3);
      pGVar1 = (__this->fields)._Dialog_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-scoreboard-mute-text",(MethodInfo *)0x0)
        ;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
          (__this->fields)._muteText = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._muteText,pUVar3);
          pGVar1 = (__this->fields)._Dialog_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                               (pGVar1,"ingame-scoreboard-mute-voice",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar3 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar2,(MethodInfo_6F5650 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Toggle);
              (__this->fields)._muteVoice = pUVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._muteVoice,pUVar3);
              pGVar1 = (__this->fields)._Dialog_k__BackingField;
              if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
                pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                                   (pGVar1,"ingame-scoreboard-mute-volume",(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                  value = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar2,(MethodInfo_6F5650 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_AottgSliderControl)
                  ;
                  (__this->fields)._voiceVolume = value;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._voiceVolume,value);
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
// 0x18226a1f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18226a382: movss xmm1, dword ptr [rsp + 0x38]
// asm:   0x18226a388: jmp 0x18226a392

void UI_ScoreboardMutePopup__Show
               (UI_ScoreboardMutePopup_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__float__o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this_01;
  bool bVar3;
  float value;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184347353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_float_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_184347353 = '\x01';
  }
  local_res10[0] = 0.0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return;
  }
  (__this->fields)._player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._player,player);
  pUVar1 = (__this->fields)._muteEmote;
  if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
  }
  pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote;
  if ((pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) &&
     (bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar2,(player->fields).actorNumber,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains),
     pUVar1 != (UnityEngine_UI_Toggle_o *)0x0)) {
    UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
    pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText;
    if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
      pUVar1 = (__this->fields)._muteText;
      bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                        ((System_Collections_Generic_HashSet_T__o *)pSVar2,(player->fields).actorNumber,
                         (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
      if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
        UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
        pSVar2 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat;
        if (pSVar2 != (System_Collections_Generic_HashSet_int__o *)0x0) {
          pUVar1 = (__this->fields)._muteVoice;
          bVar3 = System_Collections_Generic_HashSet_Int32Enum___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar2,(player->fields).actorNumber,
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Toggle__set_isOn(pUVar1,bVar3,(MethodInfo *)0x0);
            __this_00 = TypeInfo_GameManagers_InGameManager->static_fields->VoiceChatVolumeMultiplier;
            if (__this_00 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
              __this_01 = (__this->fields)._voiceVolume;
              bVar3 = System_Collections_Generic_Dictionary_int__float___TryGetValue
                                (__this_00,(player->fields).actorNumber,local_res10,
                                 (MethodInfo_1411820 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_int_float_TryGetValue);
              value = local_res10[0];
              if (!bVar3) {
                value = 1.0;
              }
              if (__this_01 != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
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
// 0x182269f90

void UI_ScoreboardMutePopup__HandleMute
               (UI_ScoreboardMutePopup_o *__this,System_String_o *type,bool mute,bool isMuted,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if (Il2CppMethodInitialized_184347354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    Il2CppMethodInitialized_184347354 = '\x01';
  }
  if ((mute) && (!isMuted)) {
    pPVar1 = (__this->fields)._player;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__MutePlayer(pPVar1,type,(MethodInfo *)0x0);
    return;
  }
  if (isMuted && !mute) {
    pPVar1 = (__this->fields)._player;
    if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
    }
    GameManagers_ChatManager__UnmutePlayer(pPVar1,type,(MethodInfo *)0x0);
  }
  return;
}


// UI.ScoreboardMutePopup$$Confirm
// il2cpp: void UI_ScoreboardMutePopup__Confirm (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x182269d30

void UI_ScoreboardMutePopup__Confirm(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  float volume;
  bool bVar1;
  UnityEngine_UI_Toggle_o *pUVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *pGVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_184347355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Voice");
    Il2CppMethodInitialized_184347355 = '\x01';
  }
  if (((__this->fields).IsActive != false) && ((__this->fields)._player != (Photon_Realtime_Player_o *)0x0)) {
    pUVar2 = (__this->fields)._muteEmote;
    if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
      bVar1 = (pUVar2->fields).m_IsOn;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      pPVar3 = (__this->fields)._player;
      if ((pPVar3 != (Photon_Realtime_Player_o *)0x0) &&
         (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteEmote,
         pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
        bVar6 = System_Collections_Generic_HashSet_Int32Enum___Contains
                          ((System_Collections_Generic_HashSet_T__o *)pSVar4,(pPVar3->fields).actorNumber,
                           (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains);
        UI_ScoreboardMutePopup__HandleMute(__this,"Emote",bVar1,bVar6,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._muteText;
        if ((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
           ((pPVar3 = (__this->fields)._player, pPVar3 != (Photon_Realtime_Player_o *)0x0 &&
            (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteText,
            pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
          bVar1 = (pUVar2->fields).m_IsOn;
          bVar6 = System_Collections_Generic_HashSet_Int32Enum___Contains
                            ((System_Collections_Generic_HashSet_T__o *)pSVar4,(pPVar3->fields).actorNumber,
                             (MethodInfo_1759C90 *)MethodInfo_System_Collections_Generic_HashSet_int_Contains)
          ;
          UI_ScoreboardMutePopup__HandleMute(__this,"Text",bVar1,bVar6,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._muteVoice;
          if ((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
             ((pPVar3 = (__this->fields)._player, pPVar3 != (Photon_Realtime_Player_o *)0x0 &&
              (pSVar4 = TypeInfo_GameManagers_InGameManager->static_fields->MuteVoiceChat,
              pSVar4 != (System_Collections_Generic_HashSet_int__o *)0x0)))) {
            bVar1 = (pUVar2->fields).m_IsOn;
            bVar6 = System_Collections_Generic_HashSet_Int32Enum___Contains
                              ((System_Collections_Generic_HashSet_T__o *)pSVar4,(pPVar3->fields).actorNumber,
                               (MethodInfo_1759C90 *)
                               MethodInfo_System_Collections_Generic_HashSet_int_Contains);
            UI_ScoreboardMutePopup__HandleMute(__this,"Voice",bVar1,bVar6,(MethodInfo *)0x0);
            pGVar5 = (__this->fields)._voiceVolume;
            if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
              pPVar3 = (__this->fields)._player;
              volume = (pGVar5->fields)._Value_k__BackingField;
              if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
              }
              GameManagers_ChatManager__SetPlayerVolume(pPVar3,volume,(MethodInfo *)0x0);
              (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
              return;
            }
          }
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.ScoreboardMutePopup$$.ctor
// il2cpp: void UI_ScoreboardMutePopup___ctor (UI_ScoreboardMutePopup_o* __this, const MethodInfo* method);
// 0x18225daf0

void UI_ScoreboardMutePopup___ctor(UI_ScoreboardMutePopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor((UI_MapEditorVersionConversionPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


