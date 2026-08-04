// Type: UI.PlayerPropEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/PlayerPropEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.PlayerPropEditPopup$$get_Title
// il2cpp: System_String_o* UI_PlayerPropEditPopup__get_Title (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9400

System_String_o * UI_PlayerPropEditPopup__get_Title(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae46e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Edit Prop");
    il2cpp_runtime_helper_023445d0(&"Add Prop");
    g_data_057ae46e = '\x01';
  }
  if ((char)(__this->fields)._addMode == '\0') {
    return "Edit Prop";
  }
  return "Add Prop";
}


// UI.PlayerPropEditPopup$$get_Width
// il2cpp: float UI_PlayerPropEditPopup__get_Width (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9450

float UI_PlayerPropEditPopup__get_Width(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.PlayerPropEditPopup$$get_Height
// il2cpp: float UI_PlayerPropEditPopup__get_Height (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9460

float UI_PlayerPropEditPopup__get_Height(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.PlayerPropEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PlayerPropEditPopup__get_VerticalPadding (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9470

int32_t UI_PlayerPropEditPopup__get_VerticalPadding(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PlayerPropEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PlayerPropEditPopup__get_HorizontalPadding (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9480

int32_t UI_PlayerPropEditPopup__get_HorizontalPadding(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.PlayerPropEditPopup$$get_PanelAlignment
// il2cpp: int32_t UI_PlayerPropEditPopup__get_PanelAlignment (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9490

int32_t UI_PlayerPropEditPopup__get_PanelAlignment(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.PlayerPropEditPopup$$Setup
// il2cpp: void UI_PlayerPropEditPopup__Setup (UI_PlayerPropEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d94a0

void UI_PlayerPropEditPopup__Setup(UI_PlayerPropEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_InputField_o *pUVar2;
  long lVar3;
  code *vtableDispatch;
  int32_t fontSize;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UI_BasePopup_o *__this_02;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  undefined8 *puVar9;
  Photon_Realtime_Room_o *pPVar10;
  Photon_Realtime_Player_o *__this_04;
  UI_TooltipPopup_o *__this_05;
  Settings_StringSetting_o *__this_06;
  MethodInfo_255A0F0 **value;
  Il2CppObject *value_00;
  UI_TooltipPopup_o *extraout_RDX;
  undefined4 uVar11;
  UI_ElementStyle_o *pUVar12;
  MethodInfo_255A0F0 *pMVar13;
  UI_TooltipPopup_o *__this_07;
  UI_BasePopup_o *pUVar14;
  long *plVar15;
  
  if (g_data_057ae46f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae46f = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,80.0,20.0,pSVar5,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar14 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
  value = (MethodInfo_255A0F0 **)"Name";
  pUVar12 = __this_00;
  pSVar5 = "";
  __this_02 = (UI_BasePopup_o *)
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)pUVar14,__this_00,
                         (Settings_BaseSetting_o *)(__this->fields)._keySetting,"Name","",
                         280.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  uVar11 = SUB84(pUVar12,0);
  if (__this_02 != (UI_BasePopup_o *)0x0) {
    value = &MethodInfo_InputSettingElement_GetComponent_InputSettingElement;
    pMVar13 = MethodInfo_InputSettingElement_GetComponent_InputSettingElement;
    pIVar6 = UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_02,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    uVar11 = SUB84(pMVar13,0);
    pUVar14 = __this_02;
    if (pIVar6 != (Il2CppObject *)0x0) {
      (__this->fields)._keyInputField = pIVar6[3].monitor;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._keyInputField);
      UI_ElementFactory__CreateInputSetting
                ((__this->fields).SinglePanel,__this_00,
                 (Settings_BaseSetting_o *)(__this->fields)._valueSetting,"Value","",280.0,40.0
                 ,0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar14 = (UI_BasePopup_o *)(__this->fields).SinglePanel;
      value = (MethodInfo_255A0F0 **)0x0;
      pSVar5 = (System_String_o *)0x3;
      __this_03 = UI_ElementFactory__CreateDefaultLabel
                            ((UnityEngine_Transform_o *)pUVar14,__this_00,
                             (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),0,3,(MethodInfo *)0x0);
      uVar11 = SUB84(__this_00,0);
      if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
        value = &MethodInfo_Text_GetComponent_Text;
        pUVar7 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(__this_03,MethodInfo_Text_GetComponent_Text)
        ;
        (__this->fields)._statusLabel = pUVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._statusLabel);
        uVar11 = SUB84(pUVar7,0);
        pUVar7 = (__this->fields)._statusLabel;
        pUVar14 = (UI_BasePopup_o *)0x0;
        if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                    (0x3f800000,0x3ecccccd,pUVar7,(pUVar7->klass->vtable)._23_set_color.method);
          pUVar1 = (__this->fields).BottomBar;
          pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar1,__this_01,"Save",0.0,pUVar8,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).BottomBar;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar1,__this_01,pSVar5,0.0,pUVar8,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae470 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae470 = '\x01';
  }
  *(undefined1 *)&pUVar14[1].fields.SinglePanel = 0;
  *(undefined4 *)((long)&pUVar14[1].fields.SinglePanel + 4) = uVar11;
  pUVar14[1].fields.m_CachedPtr = (intptr_t)pSVar5;
  il2cpp_runtime_helper_022b4080(&pUVar14[1].fields);
  pUVar14[1].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)0x0;
  uVar11 = 0;
  il2cpp_runtime_helper_022b4080(&pUVar14[1].fields.m_CancellationTokenSource);
  if (pUVar14[1].klass != (UI_BasePopup_c *)0x0) {
    pIVar6 = value_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pUVar14[1].klass,value_00,MethodInfo_Void_set_Value);
    uVar11 = SUB84(pIVar6,0);
    if ((System_String_o *)value == (System_String_o *)0x0) {
      value = (MethodInfo_255A0F0 **)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (pUVar14[1].monitor != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value(pUVar14[1].monitor,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      uVar11 = SUB84(value,0);
      pUVar1 = pUVar14[1].fields.DoublePanelRight;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        (*(code *)pUVar1->klass[3].vtable._1_Finalize.method)
                  (pUVar1,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   pUVar1->klass[3].vtable._2_GetHashCode.methodPtr);
        pUVar1 = pUVar14[1].fields.DoublePanelLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar11 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043d9997:
          (*(pUVar14->klass->vtable)._23_SyncSettingElements.methodPtr)(pUVar14);
          UI_BasePopup__Show(pUVar14,(MethodInfo *)0x0);
          return;
        }
        pUVar2 = (UnityEngine_UI_InputField_o *)pUVar14[1].fields.DoublePanelLeft;
        if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
          *(undefined1 *)&(pUVar2->fields).m_CaretBlinkRate = 1;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar2,(MethodInfo *)0x0);
          goto label_043d9997;
        }
      }
    }
  }
  pUVar14 = (UI_BasePopup_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae471 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae471 = '\x01';
  }
  *(undefined1 *)&pUVar14[1].fields.SinglePanel = 1;
  *(undefined4 *)((long)&pUVar14[1].fields.SinglePanel + 4) = uVar11;
  pUVar14[1].fields.m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080(&pUVar14[1].fields,0);
  pUVar14[1].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)extraout_RDX;
  __this_07 = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&pUVar14[1].fields.m_CancellationTokenSource);
  if (pUVar14[1].klass != (UI_BasePopup_c *)0x0) {
    __this_07 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pUVar14[1].klass,(Il2CppObject *)__this_07,MethodInfo_Void_set_Value);
    if (pUVar14[1].monitor != (Settings_TypedSetting_T__o *)0x0) {
      __this_07 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value(pUVar14[1].monitor,(Il2CppObject *)__this_07,MethodInfo_Void_set_Value);
      pUVar1 = pUVar14[1].fields.DoublePanelRight;
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        (*(code *)pUVar1->klass[3].vtable._1_Finalize.method)
                  (pUVar1,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   pUVar1->klass[3].vtable._2_GetHashCode.methodPtr);
        pUVar1 = pUVar14[1].fields.DoublePanelLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_07 = (UI_TooltipPopup_o *)0x0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043d9b1c:
          (*(pUVar14->klass->vtable)._23_SyncSettingElements.methodPtr)(pUVar14);
          UI_BasePopup__Show(pUVar14,(MethodInfo *)0x0);
          return;
        }
        pUVar2 = (UnityEngine_UI_InputField_o *)pUVar14[1].fields.DoublePanelLeft;
        if (pUVar2 != (UnityEngine_UI_InputField_o *)0x0) {
          *(undefined1 *)&(pUVar2->fields).m_CaretBlinkRate = 0;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar2,(MethodInfo *)0x0);
          goto label_043d9b1c;
        }
      }
    }
  }
  plVar15 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Player not found in room.");
    il2cpp_runtime_helper_023445d0(&"Name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae472 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_07,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_043d9d8f:
    (**(code **)(*plVar15 + 0x298))(plVar15,*(undefined8 *)(*plVar15 + 0x2a0));
    return;
  }
  if (plVar15[0x15] != 0) {
    __this_07 = *(UI_TooltipPopup_o **)(plVar15[0x15] + 0x18);
    if ((__this_07 == (UI_TooltipPopup_o *)0x0) ||
       (pSVar5 = System_String__Trim((System_String_o *)__this_07,(MethodInfo *)0x0),
       pSVar5 == (System_String_o *)0x0)) {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (plVar15[0x16] != 0) {
      pIVar6 = *(Il2CppObject **)(plVar15[0x16] + 0x18);
      if (pIVar6 == (Il2CppObject *)0x0) {
        pIVar6 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        else {
          pPVar10 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        if ((pPVar10 == (Photon_Realtime_Room_o *)0x0) ||
           (__this_04 = (Photon_Realtime_Player_o *)
                        (*(pPVar10->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar10,(ulong)*(uint *)((long)plVar15 + 0xcc),0),
           __this_04 == (Photon_Realtime_Player_o *)0x0)) {
          plVar15 = (long *)plVar15[0x1b];
          __this_07 = (UI_TooltipPopup_o *)0x0;
          if (plVar15 != (long *)0x0) {
            puVar9 = &"Player not found in room.";
            goto label_043d9d55;
          }
        }
        else {
          __this_05 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
          __this_07 = __this_05;
          ExitGames_Client_Photon_Hashtable___ctor
                    ((ExitGames_Client_Photon_Hashtable_o *)__this_05,(MethodInfo *)0x0);
          if (__this_05 != (UI_TooltipPopup_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      ((ExitGames_Client_Photon_Hashtable_o *)__this_05,(Il2CppObject *)pSVar5,pIVar6,
                       (MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_04,(ExitGames_Client_Photon_Hashtable_o *)__this_05,
                       (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                       (MethodInfo *)0x0);
            if ((char)plVar15[0x19] == '\0') {
              lVar3 = plVar15[0x17];
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),pIVar6,*(undefined8 *)(lVar3 + 0x28));
              }
            }
            else {
              lVar3 = plVar15[0x18];
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),pSVar5,pIVar6,*(undefined8 *)(lVar3 + 0x28));
              }
            }
            goto label_043d9d8f;
          }
        }
      }
      else {
        plVar15 = (long *)plVar15[0x1b];
        __this_07 = (UI_TooltipPopup_o *)0x0;
        if (plVar15 != (long *)0x0) {
          puVar9 = &"Name cannot be empty.";
label_043d9d55:
          vtableDispatch = *(code **)(*plVar15 + 0x5e8);
          (*vtableDispatch)(plVar15,*puVar9,*(undefined8 *)(*plVar15 + 0x5f0),vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae473 = '\x01';
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar7 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pUVar7,pSVar5,0x7fffffff,(MethodInfo *)0x0);
  (__this_07->fields)._label = pUVar7;
  il2cpp_runtime_helper_022b4080(&(__this_07->fields)._label,pUVar7);
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_06 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_06,pSVar5,0x7fffffff,(MethodInfo *)0x0);
  (__this_07->fields)._panel = (UnityEngine_RectTransform_o *)__this_06;
  il2cpp_runtime_helper_022b4080(&(__this_07->fields)._panel);
  UI_PromptPopup___ctor(__this_07,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$ShowEdit
// il2cpp: void UI_PlayerPropEditPopup__ShowEdit (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_String_o* key, System_String_o* currentValue, System_Action_string__o* onSave, const MethodInfo* method);
// 0x43d9840

void UI_PlayerPropEditPopup__ShowEdit
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,System_String_o *key,
               System_String_o *currentValue,System_Action_string__o *onSave,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  long lVar3;
  code *vtableDispatch;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  Photon_Realtime_Room_o *pPVar7;
  Photon_Realtime_Player_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_UI_Text_o *pUVar8;
  Settings_StringSetting_o *pSVar9;
  UI_TooltipPopup_o *extraout_RDX;
  undefined4 uVar10;
  UI_TooltipPopup_o *__this_02;
  UI_BasePopup_o *__this_03;
  long *plVar11;
  Il2CppObject *value;
  
  if (g_data_057ae470 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae470 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._addMode = 0;
  (__this->fields)._targetActorNumber = targetActorNumber;
  (__this->fields)._onSave = onSave;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave);
  (__this->fields)._onAdd = (System_Action_string__string__o *)0x0;
  uVar10 = 0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onAdd);
  pSVar9 = (__this->fields)._keySetting;
  if (pSVar9 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)key,MethodInfo_Void_set_Value);
    uVar10 = SUB84(key,0);
    pSVar9 = (__this->fields)._valueSetting;
    if (currentValue == (System_String_o *)0x0) {
      currentValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (pSVar9 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar9,(Il2CppObject *)currentValue,MethodInfo_Void_set_Value);
      uVar10 = SUB84(currentValue,0);
      pUVar8 = (__this->fields)._statusLabel;
      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                  (pUVar8,**(undefined8 **)(g_data_057b9c00 + 0xb8),(pUVar8->klass->vtable)._75_set_text.method);
        pUVar1 = (__this->fields)._keyInputField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar10 = 0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043d9997:
          (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)(__this);
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
        pUVar1 = (__this->fields)._keyInputField;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          *(undefined1 *)&(pUVar1->fields).m_CaretBlinkRate = 1;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar1,(MethodInfo *)0x0);
          goto label_043d9997;
        }
      }
    }
  }
  __this_03 = (UI_BasePopup_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae471 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae471 = '\x01';
  }
  *(undefined1 *)&__this_03[1].fields.SinglePanel = 1;
  *(undefined4 *)((long)&__this_03[1].fields.SinglePanel + 4) = uVar10;
  __this_03[1].fields.m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080(&__this_03[1].fields,0);
  __this_03[1].fields.m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)extraout_RDX;
  __this_02 = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&__this_03[1].fields.m_CancellationTokenSource);
  if (__this_03[1].klass != (UI_BasePopup_c *)0x0) {
    __this_02 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_03[1].klass,(Il2CppObject *)__this_02,MethodInfo_Void_set_Value);
    if (__this_03[1].monitor != (Settings_TypedSetting_T__o *)0x0) {
      __this_02 = (UI_TooltipPopup_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value(__this_03[1].monitor,(Il2CppObject *)__this_02,MethodInfo_Void_set_Value);
      pUVar2 = __this_03[1].fields.DoublePanelRight;
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        (*(code *)pUVar2->klass[3].vtable._1_Finalize.method)
                  (pUVar2,**(undefined8 **)(g_data_057b9c00 + 0xb8),
                   pUVar2->klass[3].vtable._2_GetHashCode.methodPtr);
        pUVar2 = __this_03[1].fields.DoublePanelLeft;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (UI_TooltipPopup_o *)0x0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_043d9b1c:
          (*(__this_03->klass->vtable)._23_SyncSettingElements.methodPtr)(__this_03);
          UI_BasePopup__Show(__this_03,(MethodInfo *)0x0);
          return;
        }
        pUVar1 = (UnityEngine_UI_InputField_o *)__this_03[1].fields.DoublePanelLeft;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          *(undefined1 *)&(pUVar1->fields).m_CaretBlinkRate = 0;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar1,(MethodInfo *)0x0);
          goto label_043d9b1c;
        }
      }
    }
  }
  plVar11 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Player not found in room.");
    il2cpp_runtime_helper_023445d0(&"Name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae472 = '\x01';
  }
  bVar4 = System_String__op_Equality((System_String_o *)__this_02,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_043d9d8f:
    (**(code **)(*plVar11 + 0x298))(plVar11,*(undefined8 *)(*plVar11 + 0x2a0));
    return;
  }
  if (plVar11[0x15] != 0) {
    __this_02 = *(UI_TooltipPopup_o **)(plVar11[0x15] + 0x18);
    if ((__this_02 == (UI_TooltipPopup_o *)0x0) ||
       (pSVar5 = System_String__Trim((System_String_o *)__this_02,(MethodInfo *)0x0),
       pSVar5 == (System_String_o *)0x0)) {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (plVar11[0x16] != 0) {
      value = *(Il2CppObject **)(plVar11[0x16] + 0x18);
      if (value == (Il2CppObject *)0x0) {
        value = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        else {
          pPVar7 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        if ((pPVar7 == (Photon_Realtime_Room_o *)0x0) ||
           (__this_00 = (Photon_Realtime_Player_o *)
                        (*(pPVar7->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar7,(ulong)*(uint *)((long)plVar11 + 0xcc),0),
           __this_00 == (Photon_Realtime_Player_o *)0x0)) {
          plVar11 = (long *)plVar11[0x1b];
          __this_02 = (UI_TooltipPopup_o *)0x0;
          if (plVar11 != (long *)0x0) {
            puVar6 = &"Player not found in room.";
            goto label_043d9d55;
          }
        }
        else {
          __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
          __this_02 = __this_01;
          ExitGames_Client_Photon_Hashtable___ctor
                    ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(MethodInfo *)0x0);
          if (__this_01 != (UI_TooltipPopup_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(Il2CppObject *)pSVar5,value,
                       (MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,(ExitGames_Client_Photon_Hashtable_o *)__this_01,
                       (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                       (MethodInfo *)0x0);
            if ((char)plVar11[0x19] == '\0') {
              lVar3 = plVar11[0x17];
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),value,*(undefined8 *)(lVar3 + 0x28))
                ;
              }
            }
            else {
              lVar3 = plVar11[0x18];
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),pSVar5,value,*(undefined8 *)(lVar3 + 0x28));
              }
            }
            goto label_043d9d8f;
          }
        }
      }
      else {
        plVar11 = (long *)plVar11[0x1b];
        __this_02 = (UI_TooltipPopup_o *)0x0;
        if (plVar11 != (long *)0x0) {
          puVar6 = &"Name cannot be empty.";
label_043d9d55:
          vtableDispatch = *(code **)(*plVar11 + 0x5e8);
          (*vtableDispatch)(plVar11,*puVar6,*(undefined8 *)(*plVar11 + 0x5f0),vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae473 = '\x01';
  }
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar8 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pUVar8,pSVar5,0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields)._label = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._label,pUVar8);
  pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar9 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar9,pSVar5,0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields)._panel = (UnityEngine_RectTransform_o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._panel);
  UI_PromptPopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$ShowAdd
// il2cpp: void UI_PlayerPropEditPopup__ShowAdd (UI_PlayerPropEditPopup_o* __this, int32_t targetActorNumber, System_Action_string__string__o* onAdd, const MethodInfo* method);
// 0x43d99d0

void UI_PlayerPropEditPopup__ShowAdd
               (UI_PlayerPropEditPopup_o *__this,int32_t targetActorNumber,
               System_Action_string__string__o *onAdd,MethodInfo *method)

{
  UnityEngine_UI_InputField_o *pUVar1;
  long lVar2;
  code *vtableDispatch;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  Photon_Realtime_Room_o *pPVar6;
  Photon_Realtime_Player_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_UI_Text_o *pUVar7;
  Settings_StringSetting_o *pSVar8;
  long *plVar9;
  Il2CppObject *value;
  
  if (g_data_057ae471 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae471 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._addMode = 1;
  (__this->fields)._targetActorNumber = targetActorNumber;
  (__this->fields)._onSave = (System_Action_string__o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave,0);
  (__this->fields)._onAdd = onAdd;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onAdd);
  pSVar8 = (__this->fields)._keySetting;
  if (pSVar8 != (Settings_StringSetting_o *)0x0) {
    onAdd = (System_Action_string__string__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)onAdd,MethodInfo_Void_set_Value);
    pSVar8 = (__this->fields)._valueSetting;
    if (pSVar8 != (Settings_StringSetting_o *)0x0) {
      onAdd = (System_Action_string__string__o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar8,(Il2CppObject *)onAdd,MethodInfo_Void_set_Value);
      pUVar7 = (__this->fields)._statusLabel;
      if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                  (pUVar7,**(undefined8 **)(g_data_057b9c00 + 0xb8),(pUVar7->klass->vtable)._75_set_text.method);
        pUVar1 = (__this->fields)._keyInputField;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        onAdd = (System_Action_string__string__o *)0x0;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
label_043d9b1c:
          (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)(__this);
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
        pUVar1 = (__this->fields)._keyInputField;
        if (pUVar1 != (UnityEngine_UI_InputField_o *)0x0) {
          *(undefined1 *)&(pUVar1->fields).m_CaretBlinkRate = 0;
          UnityEngine_UI_InputField__ForceLabelUpdate(pUVar1,(MethodInfo *)0x0);
          goto label_043d9b1c;
        }
      }
    }
  }
  plVar9 = (long *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Player not found in room.");
    il2cpp_runtime_helper_023445d0(&"Name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae472 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)onAdd,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_043d9d8f:
    (**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
    return;
  }
  if (plVar9[0x15] != 0) {
    onAdd = *(System_Action_string__string__o **)(plVar9[0x15] + 0x18);
    if (((UI_TooltipPopup_o *)onAdd == (UI_TooltipPopup_o *)0x0) ||
       (pSVar4 = System_String__Trim((System_String_o *)onAdd,(MethodInfo *)0x0),
       pSVar4 == (System_String_o *)0x0)) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (plVar9[0x16] != 0) {
      value = *(Il2CppObject **)(plVar9[0x16] + 0x18);
      if (value == (Il2CppObject *)0x0) {
        value = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        else {
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        if ((pPVar6 == (Photon_Realtime_Room_o *)0x0) ||
           (__this_00 = (Photon_Realtime_Player_o *)
                        (*(pPVar6->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar6,(ulong)*(uint *)((long)plVar9 + 0xcc),0),
           __this_00 == (Photon_Realtime_Player_o *)0x0)) {
          plVar9 = (long *)plVar9[0x1b];
          onAdd = (System_Action_string__string__o *)0x0;
          if (plVar9 != (long *)0x0) {
            puVar5 = &"Player not found in room.";
            goto label_043d9d55;
          }
        }
        else {
          __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
          onAdd = (System_Action_string__string__o *)__this_01;
          ExitGames_Client_Photon_Hashtable___ctor
                    ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(MethodInfo *)0x0);
          if (__this_01 != (UI_TooltipPopup_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(Il2CppObject *)pSVar4,value,
                       (MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,(ExitGames_Client_Photon_Hashtable_o *)__this_01,
                       (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                       (MethodInfo *)0x0);
            if ((char)plVar9[0x19] == '\0') {
              lVar2 = plVar9[0x17];
              if (lVar2 != 0) {
                (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),value,*(undefined8 *)(lVar2 + 0x28))
                ;
              }
            }
            else {
              lVar2 = plVar9[0x18];
              if (lVar2 != 0) {
                (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),pSVar4,value,*(undefined8 *)(lVar2 + 0x28));
              }
            }
            goto label_043d9d8f;
          }
        }
      }
      else {
        plVar9 = (long *)plVar9[0x1b];
        onAdd = (System_Action_string__string__o *)0x0;
        if (plVar9 != (long *)0x0) {
          puVar5 = &"Name cannot be empty.";
label_043d9d55:
          vtableDispatch = *(code **)(*plVar9 + 0x5e8);
          (*vtableDispatch)(plVar9,*puVar5,*(undefined8 *)(*plVar9 + 0x5f0),vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae473 = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar7 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pUVar7,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)onAdd)->fields)._label = pUVar7;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)onAdd)->fields)._label,pUVar7);
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar8 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar8,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)onAdd)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)onAdd)->fields)._panel);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)onAdd,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$OnButtonClick
// il2cpp: void UI_PlayerPropEditPopup__OnButtonClick (UI_PlayerPropEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43d9b50

void UI_PlayerPropEditPopup__OnButtonClick
               (UI_PlayerPropEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Action_string__string__o *pSVar1;
  Il2CppMethodPointer vtableDispatch;
  System_Action_string__o *pSVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  Photon_Realtime_Room_o *pPVar6;
  Photon_Realtime_Player_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_UI_Text_o *pUVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *value;
  
  if (g_data_057ae472 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Hashtable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Player not found in room.");
    il2cpp_runtime_helper_023445d0(&"Name cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae472 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_043d9d8f:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pSVar8 = (__this->fields)._keySetting;
  if (pSVar8 != (Settings_StringSetting_o *)0x0) {
    name = (pSVar8->fields)._value;
    if (((UI_TooltipPopup_o *)name == (UI_TooltipPopup_o *)0x0) ||
       (pSVar4 = System_String__Trim(name,(MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0)) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar8 = (__this->fields)._valueSetting;
    if (pSVar8 != (Settings_StringSetting_o *)0x0) {
      value = (pSVar8->fields)._value;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        else {
          pPVar6 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
        }
        if ((pPVar6 == (Photon_Realtime_Room_o *)0x0) ||
           (__this_00 = (Photon_Realtime_Player_o *)
                        (*(pPVar6->klass->vtable)._10_GetPlayer.methodPtr)
                                  (pPVar6,(ulong)(uint)(__this->fields)._targetActorNumber,0),
           __this_00 == (Photon_Realtime_Player_o *)0x0)) {
          pUVar7 = (__this->fields)._statusLabel;
          name = (System_String_o *)0x0;
          if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
            puVar5 = &"Player not found in room.";
            goto label_043d9d55;
          }
        }
        else {
          __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Hashtable);
          name = (System_String_o *)__this_01;
          ExitGames_Client_Photon_Hashtable___ctor
                    ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(MethodInfo *)0x0);
          if (__this_01 != (UI_TooltipPopup_o *)0x0) {
            ExitGames_Client_Photon_Hashtable__set_Item
                      ((ExitGames_Client_Photon_Hashtable_o *)__this_01,(Il2CppObject *)pSVar4,
                       (Il2CppObject *)value,(MethodInfo *)0x0);
            Photon_Realtime_Player__SetCustomProperties
                      (__this_00,(ExitGames_Client_Photon_Hashtable_o *)__this_01,
                       (ExitGames_Client_Photon_Hashtable_o *)0x0,(Photon_Realtime_WebFlags_o *)0x0,
                       (MethodInfo *)0x0);
            if ((char)(__this->fields)._addMode == '\0') {
              pSVar2 = (__this->fields)._onSave;
              if (pSVar2 != (System_Action_string__o *)0x0) {
                (*(code *)(pSVar2->fields).invoke_impl)
                          ((pSVar2->fields).method_code,value,(pSVar2->fields).method);
              }
            }
            else {
              pSVar1 = (__this->fields)._onAdd;
              if (pSVar1 != (System_Action_string__string__o *)0x0) {
                (*(code *)(pSVar1->fields).invoke_impl)
                          ((pSVar1->fields).method_code,pSVar4,value,(pSVar1->fields).method);
              }
            }
            goto label_043d9d8f;
          }
        }
      }
      else {
        pUVar7 = (__this->fields)._statusLabel;
        name = (System_String_o *)0x0;
        if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
          puVar5 = &"Name cannot be empty.";
label_043d9d55:
          vtableDispatch = (pUVar7->klass->vtable)._75_set_text.methodPtr;
          (*vtableDispatch)
                    (pUVar7,*puVar5,(pUVar7->klass->vtable)._75_set_text.method,vtableDispatch);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae473 = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pUVar7 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pUVar7,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields)._label = pUVar7;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._label,pUVar7);
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar8 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar8,pSVar4,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)name)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._panel);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$.ctor
// il2cpp: void UI_PlayerPropEditPopup___ctor (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9dc0

void UI_PlayerPropEditPopup___ctor(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (g_data_057ae473 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae473 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._keySetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._keySetting,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._valueSetting = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._valueSetting);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PlayerPropEditPopup$$<Setup>b__20_0
// il2cpp: void UI_PlayerPropEditPopup___Setup_b__20_0 (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9ea0

void UI_PlayerPropEditPopup___Setup_b__20_0(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae474 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae474 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PlayerPropEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.PlayerPropEditPopup$$<Setup>b__20_1
// il2cpp: void UI_PlayerPropEditPopup___Setup_b__20_1 (UI_PlayerPropEditPopup_o* __this, const MethodInfo* method);
// 0x43d9ee0

void UI_PlayerPropEditPopup___Setup_b__20_1(UI_PlayerPropEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae475 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae475 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PlayerPropEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


