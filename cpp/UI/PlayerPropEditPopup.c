// Type: UI.PlayerPropEditPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/PlayerPropEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PlayerPropEditPopup$$get_DialogId
// il2cpp: System_String_o* UI_PlayerPropEditPopup__get_DialogId (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x182260dd0

System_String_o * UI_PlayerPropEditPopup__get_DialogId(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop");
    Il2CppMethodInitialized_1843472ff = '\x01';
  }
  return "ingame-moderation-player-prop";
}


// UI.PlayerPropEditPopup$$Setup
// il2cpp: void UI_PlayerPropEditPopup__Setup (UI_PlayerPropEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182260960

void UI_PlayerPropEditPopup__Setup(UI_PlayerPropEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  TMPro_TMP_InputField_o *pTVar3;
  TMPro_TMP_Text_o *value;
  
  if (Il2CppMethodInitialized_184347300 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-status");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-name");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-value");
    Il2CppMethodInitialized_184347300 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup__Setup
            ((Gisketch_Aottg2UI_Game_AottgScoreboardPopup_o *)__this,parent,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._Dialog_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-moderation-player-prop-name",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pTVar3 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar2,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      (__this->fields)._keyInput = pTVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._keyInput,pTVar3);
      pGVar1 = (__this->fields)._Dialog_k__BackingField;
      if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find(pGVar1,"ingame-moderation-player-prop-value",(MethodInfo *)0x0)
        ;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pTVar3 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar2,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
          (__this->fields)._valueInput = pTVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._valueInput,pTVar3);
          pGVar1 = (__this->fields)._Dialog_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
            pUVar2 = Gisketch_Aottg2UI_Building_GisketchView__Find
                               (pGVar1,"ingame-moderation-player-prop-status",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              value = UnityEngine_GameObject__GetComponent_object_
                                (pUVar2,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_TMP_Text);
              (__this->fields)._statusLabel = value;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._statusLabel,value);
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
// 0x182260c20

void UI_PlayerPropEditPopup__ShowEdit
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,System_String_o *key,
               System_String_o *currentValue,System_Action_string__o *onSave,MethodInfo *method)

{
  (__this->fields)._onSave = onSave;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave,onSave);
  (__this->fields)._onAdd = (System_Action_string__string__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onAdd,(void *)0x0);
  UI_PlayerPropEditPopup__ShowForm(__this,targetActorNumber,key,currentValue,false,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$ShowAdd
// il2cpp: void UI_PlayerPropEditPopup__ShowAdd (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_Action_string__string__o* onAdd, const MethodInfo* method);
// 0x182260ac0

void UI_PlayerPropEditPopup__ShowAdd
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,
               System_Action_string__string__o *onAdd,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *input;
  
  (__this->fields)._onSave = (System_Action_string__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSave,(void *)0x0);
  (__this->fields)._onAdd = onAdd;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onAdd,onAdd);
  input = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (Il2CppMethodInitialized_184347301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Prop");
    il2cpp_codegen_initialize_runtime_metadata(&"Add Prop");
    Il2CppMethodInitialized_184347301 = '\x01';
  }
  pTVar1 = (__this->fields)._keyInput;
  (__this->fields)._targetActorNumber = targetActorNumber;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,input,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._keyInput;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      (pTVar1->fields).m_ReadOnly = false;
      if (input == (System_String_o *)0x0) {
        input = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pTVar1 = (__this->fields)._valueInput;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,input,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._statusLabel;
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (pTVar2->klass->vtable)._66_set_text.method);
          __this_00 = (__this->fields)._View_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgInGameView__SetState
                      (__this_00,"ingame-moderation-player-prop-title","Add Prop",(MethodInfo *)0x0);
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


// UI.PlayerPropEditPopup$$ShowForm
// il2cpp: void UI_PlayerPropEditPopup__ShowForm (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_String_o* key, System_String_o* value, bool addMode, const MethodInfo* method);
// 0x182260ca0

void UI_PlayerPropEditPopup__ShowForm
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,System_String_o *key,
               System_String_o *value,bool addMode,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  TMPro_TMP_Text_o *pTVar2;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *value_00;
  
  if (Il2CppMethodInitialized_184347301 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ingame-moderation-player-prop-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Prop");
    il2cpp_codegen_initialize_runtime_metadata(&"Add Prop");
    Il2CppMethodInitialized_184347301 = '\x01';
  }
  pTVar1 = (__this->fields)._keyInput;
  (__this->fields)._targetActorNumber = targetActorNumber;
  if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
    TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,key,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._keyInput;
    if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
      (pTVar1->fields).m_ReadOnly = !addMode;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pTVar1 = (__this->fields)._valueInput;
      if (pTVar1 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__SetTextWithoutNotify(pTVar1,value,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._statusLabel;
        if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (pTVar2->klass->vtable)._66_set_text.method);
          value_00 = "Add Prop";
          if (!addMode) {
            value_00 = "Edit Prop";
          }
          __this_00 = (__this->fields)._View_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgInGameView__SetState
                      (__this_00,"ingame-moderation-player-prop-title",value_00,(MethodInfo *)0x0);
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
// 0x182260750

void UI_PlayerPropEditPopup__Save(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  TMPro_TMP_InputField_o *pTVar1;
  System_String_o *value;
  System_Action_string__string__o *pSVar2;
  System_Action_string__o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  Photon_Realtime_Room_o *pPVar6;
  Photon_Realtime_Player_o *__this_00;
  ExitGames_Client_Photon_Hashtable_o *__this_01;
  TMPro_TMP_Text_c *pTVar7;
  TMPro_TMP_Text_o *pTVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_184347302 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ExitGames_Client_Photon_Hashtable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"Player not found in room.");
    il2cpp_codegen_initialize_runtime_metadata(&"Name cannot be empty.");
    Il2CppMethodInitialized_184347302 = '\x01';
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
      value = (pTVar1->fields).m_Text;
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if (bVar4) {
        pTVar8 = (__this->fields)._statusLabel;
        if (pTVar8 != (TMPro_TMP_Text_o *)0x0) {
          pTVar7 = pTVar8->klass;
          pMVar9 = (pTVar7->vtable)._66_set_text.method;
          pSVar5 = "Name cannot be empty.";
label_182260911:
          (*(pTVar7->vtable)._66_set_text.methodPtr)(pTVar8,pSVar5,pMVar9);
          return;
        }
      }
      else {
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        if ((pPVar6 == (Photon_Realtime_Room_o *)0x0) ||
           (__this_00 = (*(pPVar6->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar6,(__this->fields)._targetActorNumber,false,
                                   (pPVar6->klass->vtable)._10_GetPlayer.method),
           __this_00 == (Photon_Realtime_Player_o *)0x0)) {
          pTVar8 = (__this->fields)._statusLabel;
          if (pTVar8 != (TMPro_TMP_Text_o *)0x0) {
            pTVar7 = pTVar8->klass;
            pMVar9 = (pTVar7->vtable)._66_set_text.method;
            pSVar5 = "Player not found in room.";
            goto label_182260911;
          }
        }
        else {
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ExitGames_Client_Photon_Hashtable);
          ExitGames_Client_Photon_Hashtable___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (ExitGames_Client_Photon_Hashtable_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      (__this_01,(Il2CppObject *)pSVar5,(Il2CppObject *)value,(MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,__this_01,(ExitGames_Client_Photon_Hashtable_o *)0x0,
                       (Photon_Realtime_WebFlags_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = (__this->fields)._onAdd;
            if (pSVar2 != (System_Action_string__string__o *)0x0) {
              (*(code *)(pSVar2->fields).invoke_impl)
                        ((pSVar2->fields).method_code,pSVar5,value,(pSVar2->fields).method);
            }
            pSVar3 = (__this->fields)._onSave;
            if (pSVar3 != (System_Action_string__o *)0x0) {
              (*(code *)(pSVar3->fields).invoke_impl)
                        ((pSVar3->fields).method_code,value,(pSVar3->fields).method);
            }
            (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PlayerPropEditPopup$$.ctor
// il2cpp: void UI_PlayerPropEditPopup___ctor (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x18225daf0

void
UI_PlayerPropEditPopup___ctor(UI_PlayerPropEditPopup_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgScoreboardPopup___ctor((UI_MapEditorVersionConversionPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


