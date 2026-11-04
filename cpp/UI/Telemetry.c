// Type: UI.Telemetry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Telemetry.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/Telemetry.cs
// --------------------------------

// UI.Telemetry$$Setup
// il2cpp: void UI_Telemetry__Setup (UI_Telemetry_o* __this, UI_ElementStyle_o* _style, const MethodInfo* method);
// 0x182281990

void UI_Telemetry__Setup(UI_Telemetry_o *__this,UI_ElementStyle_o *_style,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UI_MultiTextLabel_o *pUVar4;
  System_String_o *htmlString;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_o local_68 [6];
  
  if (Il2CppMethodInitialized_18434738e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"Game Time: ");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping: ");
    il2cpp_codegen_initialize_runtime_metadata(&"System: ");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS: ");
    Il2CppMethodInitialized_18434738e = '\x01';
  }
  local_78.r = 0.0;
  local_78.g = 0.0;
  local_78.b = 0.0;
  local_78.a = 0.0;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateMultiTextLabel(pUVar2,_style,0,3,12.0,4,false,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar3,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel);
    (__this->fields).timePanel = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).timePanel,pUVar4);
    pUVar4 = (__this->fields).timePanel;
    if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetValue(pUVar4,0,"Game Time: ",(MethodInfo *)0x0);
      pUVar4 = (__this->fields).timePanel;
      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetValue
                  (pUVar4,1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        pUVar4 = (__this->fields).timePanel;
        if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetValue(pUVar4,2,"System: ",(MethodInfo *)0x0);
          pUVar4 = (__this->fields).timePanel;
          if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue
                      (pUVar4,3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
            if (__this_00 != (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) {
              htmlString = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                                      (MethodInfo_1454ED0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item
                                     );
              bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                                (htmlString,(UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
              if (bVar1) {
                fVar5 = local_78.r;
                fVar6 = local_78.g;
                fVar7 = local_78.b;
                fVar8 = local_78.a;
              }
              else {
                fVar5 = 1.0;
                fVar6 = 0.92156863;
                fVar8 = 1.0;
                fVar7 = 0.015686275;
              }
              pUVar4 = (__this->fields).timePanel;
              if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                local_68[0].fields.r = fVar5;
                local_68[0].fields.g = fVar6;
                local_68[0].fields.b = fVar7;
                local_68[0].fields.a = fVar8;
                UI_MultiTextLabel__ChangeTextColor(pUVar4,1,local_68,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).timePanel;
                if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                  local_68[0].fields.r = fVar5;
                  local_68[0].fields.g = fVar6;
                  local_68[0].fields.b = fVar7;
                  local_68[0].fields.a = fVar8;
                  UI_MultiTextLabel__ChangeTextColor(pUVar4,3,local_68,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).timePanel;
                  if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                    UI_MultiTextLabel__SetEnabled(pUVar4,false,(MethodInfo *)0x0);
                    pUVar2 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar3 = UI_ElementFactory__CreateMultiTextLabel
                                       (pUVar2,_style,0,3,12.0,4,false,(MethodInfo *)0x0);
                    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar3,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel
                                         );
                      (__this->fields).performancePanel = pUVar4;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).performancePanel,pUVar4);
                      pUVar4 = (__this->fields).performancePanel;
                      if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(pUVar4,0,"FPS: ",(MethodInfo *)0x0);
                        pUVar4 = (__this->fields).performancePanel;
                        if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue
                                    (pUVar4,1,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                     (MethodInfo *)0x0);
                          pUVar4 = (__this->fields).performancePanel;
                          if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                            UI_MultiTextLabel__SetValue(pUVar4,2,"Ping: ",(MethodInfo *)0x0);
                            pUVar4 = (__this->fields).performancePanel;
                            if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                              UI_MultiTextLabel__SetValue
                                        (pUVar4,3,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                                         (MethodInfo *)0x0);
                              pUVar4 = (__this->fields).performancePanel;
                              if (pUVar4 != (UI_MultiTextLabel_o *)0x0) {
                                UI_MultiTextLabel__SetEnabled(pUVar4,false,(MethodInfo *)0x0);
                                return;
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


// UI.Telemetry$$Update
// il2cpp: void UI_Telemetry__Update (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x182282760

void UI_Telemetry__Update(UI_Telemetry_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (fVar2 <= 0.0) {
    UI_Telemetry__Sync(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.Telemetry$$Sync
// il2cpp: void UI_Telemetry__Sync (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x182281da0

void UI_Telemetry__Sync(UI_Telemetry_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_MultiTextLabel_o *pUVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Text_StringBuilder_o *pSVar5;
  Settings_GraphicsSettings_o *pSVar6;
  Il2CppObject *arg0;
  System_String_o *value;
  System_DateTime_o dt;
  float fVar7;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_18434738f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434738f = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (((pSVar1 != (Settings_UISettings_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).ShowGameTime, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pUVar3 = (__this->fields).timePanel, pUVar3 != (UI_MultiTextLabel_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      UI_MultiTextLabel__SetEnabled(pUVar3,false,(MethodInfo *)0x0);
    }
    else {
      UI_MultiTextLabel__SetEnabled(pUVar3,true,(MethodInfo *)0x0);
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (pCVar4->fields).CurrentTime;
      }
      if (Il2CppMethodInitialized_184347391 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&", ");
        il2cpp_codegen_initialize_runtime_metadata(&"{0:0}");
        Il2CppMethodInitialized_184347391 = '\x01';
      }
      pSVar5 = (__this->fields)._sb;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) {
label_18228201b:
        ThrowNullReferenceException();
      }
      System_Text_StringBuilder__Clear(pSVar5,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._sb;
      local_res8[0] = fVar7;
      arg0 = il2cpp_value_box(g_data_184354e38,local_res8);
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_18228201b;
      System_Text_StringBuilder__AppendFormat(pSVar5,"{0:0}",arg0,(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._sb;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_18228201b;
      System_Text_StringBuilder__Append_197dca0(pSVar5,", ",(MethodInfo *)0x0);
      pSVar5 = (__this->fields)._sb;
      if (pSVar5 == (System_Text_StringBuilder_o *)0x0) goto label_18228201b;
      pUVar3 = (__this->fields).timePanel;
      value = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                        (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
      if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_18228201b;
      UI_MultiTextLabel__SetValue(pUVar3,1,value,(MethodInfo *)0x0);
      if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
      }
      dt = System_DateTime__get_Now((MethodInfo *)0x0);
      UI_Telemetry__UpdateSystemTime(__this,dt,(MethodInfo *)0x0);
    }
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar6 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar2 = (pSVar6->fields).ShowFPS, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == false) {
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
           (pSVar2 = (pSVar1->fields).ShowPing, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_182282015;
        if ((pSVar2->fields)._value == false) {
          pUVar3 = (__this->fields).performancePanel;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetEnabled(pUVar3,false,(MethodInfo *)0x0);
            return;
          }
          goto label_182282015;
        }
      }
      pUVar3 = (__this->fields).performancePanel;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetEnabled(pUVar3,true,(MethodInfo *)0x0);
        UI_Telemetry__UpdatePerformance(__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182282015:
  ThrowNullReferenceException();
}


// UI.Telemetry$$UpdatePerformance
// il2cpp: void UI_Telemetry__UpdatePerformance (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x182282120

void UI_Telemetry__UpdatePerformance(UI_Telemetry_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_MultiTextLabel_o *pUVar3;
  System_Text_StringBuilder_o *pSVar4;
  Settings_UISettings_o *pSVar5;
  System_String_o *pSVar6;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    Il2CppMethodInitialized_184347390 = '\x01';
  }
  local_res18[0] = 0;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).ShowFPS, pSVar2 == (Settings_BoolSetting_o *)0x0)) ||
     (pUVar3 = (__this->fields).performancePanel, pUVar3 == (UI_MultiTextLabel_o *)0x0)) goto label_1822824d4;
  if ((pSVar2->fields)._value == false) {
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,false,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_1822824d4;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,false,(MethodInfo *)0x0);
  }
  else {
    UI_MultiTextLabel__SetElementEnabled(pUVar3,0,true,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).performancePanel;
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_1822824d4;
    UI_MultiTextLabel__SetElementEnabled(pUVar3,1,true,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._sb;
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1822824d4;
    System_Text_StringBuilder__Clear(pSVar4,(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._sb;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    if (Il2CppMethodInitialized_1843473f9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      Il2CppMethodInitialized_1843473f9 = '\x01';
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1822824d4;
    System_Text_StringBuilder__Append_197ddb0
              (pSVar4,TypeInfo_UI_UIManager->static_fields->_lastFPS,(MethodInfo *)0x0);
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar5 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar5->fields).ShowPing, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_1822824d4;
    if ((pSVar2->fields)._value != false) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (Il2CppMethodInitialized_184344524 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
        Il2CppMethodInitialized_184344524 = '\x01';
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
        pSVar4 = (__this->fields)._sb;
        if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1822824d4;
        System_Text_StringBuilder__Append_197dca0(pSVar4,", ",(MethodInfo *)0x0);
      }
    }
    pSVar4 = (__this->fields)._sb;
    if (pSVar4 == (System_Text_StringBuilder_o *)0x0) goto label_1822824d4;
    pUVar3 = (__this->fields).performancePanel;
    pSVar6 = (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                       (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_1822824d4;
    UI_MultiTextLabel__SetValue(pUVar3,1,pSVar6,(MethodInfo *)0x0);
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar5 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar5->fields).ShowPing, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (Il2CppMethodInitialized_184344524 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
        Il2CppMethodInitialized_184344524 = '\x01';
      }
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      if (TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode == false) {
        pUVar3 = (__this->fields).performancePanel;
        if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar3,2,true,(MethodInfo *)0x0);
          pUVar3 = (__this->fields).performancePanel;
          if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetElementEnabled(pUVar3,3,true,(MethodInfo *)0x0);
            pUVar3 = (__this->fields).performancePanel;
            if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
            }
            local_res18[0] = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
            pSVar6 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
            if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
              UI_MultiTextLabel__SetValue(pUVar3,3,pSVar6,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto label_1822824d4;
      }
    }
    pUVar3 = (__this->fields).performancePanel;
    if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar3,2,false,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).performancePanel;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar3,3,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_1822824d4:
  ThrowNullReferenceException();
}


// UI.Telemetry$$UpdateGameTime
// il2cpp: void UI_Telemetry__UpdateGameTime (UI_Telemetry_o* __this, float currentTime, const MethodInfo* method);
// 0x182282030

void UI_Telemetry__UpdateGameTime(UI_Telemetry_o *__this,float currentTime,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *value;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184347391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:0}");
    Il2CppMethodInitialized_184347391 = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    local_res8[0] = currentTime;
    arg0 = il2cpp_value_box(g_data_184354e38,local_res8);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendFormat(pSVar1,"{0:0}",arg0,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_197dca0(pSVar1,", ",(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._sb;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          __this_00 = (__this->fields).timePanel;
          value = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
          if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(__this_00,1,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.Telemetry$$UpdateSystemTime
// il2cpp: void UI_Telemetry__UpdateSystemTime (UI_Telemetry_o* __this, System_DateTime_o dt, const MethodInfo* method);
// 0x1822824e0

void UI_Telemetry__UpdateSystemTime(UI_Telemetry_o *__this,System_DateTime_o dt,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  int32_t iVar2;
  System_String_o *value;
  System_DateTime_Fields local_res10 [3];
  
  local_res10[0] = dt.fields._dateData;
  if (Il2CppMethodInitialized_184347392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_184347392 = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    iVar2 = System_DateTime__get_Hour((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_197e090(pSVar1,(short)(iVar2 / 10) + 0x30,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      iVar2 = System_DateTime__get_Hour((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_197e090
                  (pSVar1,(short)iVar2 +
                          (((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f)) -
                          (short)((longlong)iVar2 * 0x66666667 >> 0x3f)) * -10 + 0x30,(MethodInfo *)0x0);
        pSVar1 = (__this->fields)._sb;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_197e090(pSVar1,0x3a,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._sb;
          iVar2 = System_DateTime__get_Minute((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_197e090(pSVar1,(short)(iVar2 / 10) + 0x30,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._sb;
            iVar2 = System_DateTime__get_Minute((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Append_197e090
                        (pSVar1,(short)iVar2 +
                                (((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f)) -
                                (short)((longlong)iVar2 * 0x66666667 >> 0x3f)) * -10 + 0x30,(MethodInfo *)0x0)
              ;
              pSVar1 = (__this->fields)._sb;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_197e090(pSVar1,0x3a,(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._sb;
                iVar2 = System_DateTime__get_Second((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_197e090
                            (pSVar1,(short)(iVar2 / 10) + 0x30,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._sb;
                  iVar2 = System_DateTime__get_Second((System_DateTime_o *)local_res10,(MethodInfo *)0x0);
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    System_Text_StringBuilder__Append_197e090
                              (pSVar1,(short)iVar2 +
                                      (((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f)) -
                                      (short)((longlong)iVar2 * 0x66666667 >> 0x3f)) * -10 + 0x30,
                               (MethodInfo *)0x0);
                    pSVar1 = (__this->fields)._sb;
                    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                      __this_00 = (__this->fields).timePanel;
                      value = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                                        (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
                      if (__this_00 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(__this_00,3,value,(MethodInfo *)0x0);
                        return;
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


// UI.Telemetry$$.ctor
// il2cpp: void UI_Telemetry___ctor (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x1822827a0

void UI_Telemetry___ctor(UI_Telemetry_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_184347393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347393 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._sb = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sb,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


