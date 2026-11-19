// Type: UI.PlayerPropEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/PlayerPropEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PlayerPropEditPopup$$get_DialogId
// il2cpp: System_String_o* UI_PlayerPropEditPopup__get_DialogId (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x5d3ba30

System_String_o * UI_PlayerPropEditPopup__get_DialogId(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop");
    Il2CppMethodInitialized_07547e70 = '\x01';
  }
  return "ingame-moderation-player-prop";
}


// UI.PlayerPropEditPopup$$Setup
// il2cpp: void UI_PlayerPropEditPopup__Setup (UI_PlayerPropEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d3ba60

void UI_PlayerPropEditPopup__Setup(UI_PlayerPropEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  TMPro_TMP_InputField_o *pTVar3;
  TMPro_TMP_Text_o *pTVar4;
  
  if (Il2CppMethodInitialized_07547e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-status");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-name");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-value");
    Il2CppMethodInitialized_07547e71 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-moderation-player-prop-name",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pTVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      (__this->fields)._keyInput = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._keyInput);
      pGVar1 = (__this->fields)._Dialog_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-moderation-player-prop-value",(MethodInfo *)0x0)
        ;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pTVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
          (__this->fields)._valueInput = pTVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._valueInput);
          pGVar1 = (__this->fields)._Dialog_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                               (pGVar1,"ingame-moderation-player-prop-status",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pTVar4 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar2,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
              (__this->fields)._statusLabel = pTVar4;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PlayerPropEditPopup$$ShowEdit
// il2cpp: void UI_PlayerPropEditPopup__ShowEdit (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_String_o* key, System_String_o* currentValue, System_Action_string__o* onSave, const MethodInfo* method);
// 0x5d3bbc0

void UI_PlayerPropEditPopup__ShowEdit
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,System_String_o *key,
               System_String_o *currentValue,System_Action_string__o *onSave,MethodInfo *method)

{
  (__this->fields)._onSave = onSave;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave);
  (__this->fields)._onAdd = (System_Action_string__string__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onAdd);
  UI_PlayerPropEditPopup__ShowForm(__this,targetActorNumber,key,currentValue,false,method);
  return;
}


// UI.PlayerPropEditPopup$$ShowAdd
// il2cpp: void UI_PlayerPropEditPopup__ShowAdd (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_Action_string__string__o* onAdd, const MethodInfo* method);
// 0x5d3be00

void UI_PlayerPropEditPopup__ShowAdd
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,
               System_Action_string__string__o *onAdd,MethodInfo *method)

{
  MethodInfo *in_R9;
  
  (__this->fields)._onSave = (System_Action_string__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave);
  (__this->fields)._onAdd = onAdd;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onAdd);
  UI_PlayerPropEditPopup__ShowForm
            (__this,targetActorNumber,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),true,in_R9);
  return;
}


// UI.PlayerPropEditPopup$$ShowForm
// il2cpp: void UI_PlayerPropEditPopup__ShowForm (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_String_o* key, System_String_o* value, bool addMode, const MethodInfo* method);
// 0x5d3bc20

void UI_PlayerPropEditPopup__ShowForm
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,System_String_o *key,
               System_String_o *value,bool addMode,MethodInfo *method)

{
  uint32_t uVar1;
  TMPro_TMP_InputField_o *pTVar2;
  TMPro_TMP_Text_o *pTVar3;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *key_00;
  System_String_o **ppSVar4;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_07547e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-title");
    il2cpp_codegen_initialize_runtime_metadata(&"AddProp");
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"EditProp");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e72 = '\x01';
  }
  (__this->fields)._targetActorNumber = targetActorNumber;
  pTVar2 = (__this->fields)._keyInput;
  if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,key,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._keyInput;
    if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
      (pTVar2->fields).m_ReadOnly = !addMode;
      pTVar2 = (__this->fields)._valueInput;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      if (pTVar2 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar2,value,(MethodInfo *)0x0);
        pTVar3 = (__this->fields)._statusLabel;
        if (pTVar3 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar3->klass->vtable)._66_set_text.methodPtr)
                    (pTVar3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                     (pTVar3->klass->vtable)._66_set_text.method);
          key_00 = "ingame-moderation-player-prop-title";
          __this_00 = (__this->fields)._View_k__BackingField;
          uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
          if (addMode) {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            ppSVar4 = &"AddProp";
          }
          else {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            ppSVar4 = &"EditProp";
          }
          value_00 = UI_UIManager__GetLocale
                               ("ScoreboardPopup","Moderation",*ppSVar4,"",
                                "",(MethodInfo *)0x0);
          if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgInGameView__SetState(__this_00,key_00,value_00,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Show
                      ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PlayerPropEditPopup$$Save
// il2cpp: void UI_PlayerPropEditPopup__Save (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x5d3be70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d3bfc2: jmp 0x5d3c0a1

void UI_PlayerPropEditPopup__Save(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_Action_string__string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Photon_Realtime_Room_o *pPVar6;
  Photon_Realtime_Player_o *__this_00;
  ExitGames_Client_Photon_Hashtable_o *__this_01;
  TMPro_TMP_Text_o *pTVar7;
  System_String_o *pSVar8;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_07547e73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"EmptyName");
    il2cpp_codegen_initialize_runtime_metadata(&"Moderation");
    il2cpp_codegen_initialize_runtime_metadata(&"Common");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayerNotFound");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e73 = '\x01';
  }
  if ((__this->fields).IsActive == false) {
    return;
  }
  pTVar1 = (__this->fields)._keyInput;
  if ((pTVar1 != (TMPro_TMP_InputField_o *)0x0) &&
     (pSVar5 = (pTVar1->fields).m_Text, pSVar5 != (System_String_o *)0x0)) {
    pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._valueInput;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      pSVar8 = (pTVar1->fields).m_Text;
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar7 = (__this->fields)._statusLabel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar5 = "";
        pSVar8 = "EmptyName";
        category = "Common";
      }
      else {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        else {
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        if ((pPVar6 != (Photon_Realtime_Room_o *)0x0) &&
           (__this_00 = (*(pPVar6->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar6,(__this->fields)._targetActorNumber,false,
                                   (pPVar6->klass->vtable)._10_GetPlayer.method),
           __this_00 != (Photon_Realtime_Player_o *)0x0)) {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
          ExitGames_Client_Photon_Hashtable___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      (__this_01,(Il2CppObject *)pSVar5,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,__this_01,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                       (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = (__this->fields)._onAdd;
            if (pSVar2 != (System_Action_string__string__o *)0x0) {
              (*(code *)(pSVar2->fields).invoke_impl)
                        ((pSVar2->fields).method_code,pSVar5,pSVar8,(pSVar2->fields).method);
            }
            pSVar3 = (__this->fields)._onSave;
            if (pSVar3 != (System_Action_string__o *)0x0) {
              (*(code *)(pSVar3->fields).invoke_impl)
                        ((pSVar3->fields).method_code,pSVar8,(pSVar3->fields).method);
            }
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
          goto label_05d3c11b;
        }
        pTVar7 = (__this->fields)._statusLabel;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar5 = "PlayerNotFound";
        pSVar8 = "Moderation";
        category = "ScoreboardPopup";
      }
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar8,pSVar5,"","",(MethodInfo *)0x0
                         );
      if (pTVar7 != (TMPro_TMP_Text_o *)0x0) {
        (*(pTVar7->klass->vtable)._66_set_text.methodPtr)
                  (pTVar7,pSVar5,(pTVar7->klass->vtable)._66_set_text.method);
        return;
      }
    }
  }
label_05d3c11b:
  ThrowNullReferenceException();
}


// UI.PlayerPropEditPopup$$.ctor
// il2cpp: void UI_PlayerPropEditPopup___ctor (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x5d3c120

void UI_PlayerPropEditPopup___ctor(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


