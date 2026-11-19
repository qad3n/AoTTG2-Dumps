// Type: UI.Telemetry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/Telemetry.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/Telemetry.cs
// --------------------------------

// UI.Telemetry$$Setup
// il2cpp: void UI_Telemetry__Setup (UI_Telemetry_o* __this, UI_ElementStyle_o* _style, const MethodInfo* method);
// 0x5d52420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d526b5: movaps xmm1, xmmword ptr [rip - 0x4d496ac]

void UI_Telemetry__Setup(UI_Telemetry_o *__this,UI_ElementStyle_o *_style,MethodInfo *method)

{
  UI_MultiTextLabel_o **ppUVar1;
  System_Collections_Generic_Dictionary_ChatTextColor__string__o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UI_MultiTextLabel_o *pUVar5;
  System_String_o *pSVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_Fields local_78;
  UI_ElementStyle_o *local_60;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_07547f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"System");
    il2cpp_codegen_initialize_runtime_metadata(&"GameTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Telemetry");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping: ");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS: ");
    Il2CppMethodInitialized_07547f07 = '\x01';
  }
  local_78.r = 0.0;
  local_78.g = 0.0;
  local_78.b = 0.0;
  local_78.a = 0.0;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  local_60 = _style;
  pUVar4 = UI_ElementFactory__CreateMultiTextLabel(pUVar3,_style,0,3,12.0,4,false,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel);
    ppUVar1 = &(__this->fields).timePanel;
    (__this->fields).timePanel = pUVar5;
    Il2CppCodeGenWriteBarrier(ppUVar1);
    pUVar5 = (__this->fields).timePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar6 = UI_UIManager__GetLocale
                       ("InGame","Telemetry","GameTime",
                        "","",(MethodInfo *)0x0);
    if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetValue(pUVar5,0,pSVar6,(MethodInfo *)0x0);
      if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetValue
                  (*ppUVar1,1,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
        pUVar5 = *ppUVar1;
        pSVar6 = UI_UIManager__GetLocale
                           ("InGame","Telemetry","System",
                            "","",(MethodInfo *)0x0);
        if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetValue(pUVar5,2,pSVar6,(MethodInfo *)0x0);
          if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue
                      (*ppUVar1,3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
            ;
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            __this_00 = TypeInfo_GameManagers_ChatManager->static_fields->ColorTags;
            if (__this_00 != (System_Collections_Generic_Dictionary_ChatTextColor__string__o *)0x0) {
              pSVar6 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                                 ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,3,
                                  (MethodInfo_4A54F30 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_ChatTextColor_string_get_Item
                                 );
              bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                                (pSVar6,(UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
              if (bVar2) {
                fVar7 = local_78.r;
                fVar8 = local_78.g;
                fVar9 = local_78.b;
                fVar10 = local_78.a;
              }
              else {
                fVar8 = 0.92156863;
                fVar7 = 1.0;
                fVar9 = 0.015686275;
                fVar10 = 1.0;
              }
              if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                uStack_40 = 0;
                uStack_3c = 0;
                uStack_50 = 0;
                uStack_4c = 0;
                color.fields.g = fVar8;
                color.fields.r = fVar7;
                color.fields.a = fVar10;
                color.fields.b = fVar9;
                local_58 = fVar9;
                fStack_54 = fVar10;
                local_48 = fVar7;
                fStack_44 = fVar8;
                UI_MultiTextLabel__ChangeTextColor(*ppUVar1,1,color,(MethodInfo *)0x0);
                if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                  color_00.fields.g = fStack_44;
                  color_00.fields.r = local_48;
                  color_00.fields.a = fStack_54;
                  color_00.fields.b = local_58;
                  UI_MultiTextLabel__ChangeTextColor(*ppUVar1,3,color_00,(MethodInfo *)0x0);
                  if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                    UI_MultiTextLabel__SetEnabled(*ppUVar1,false,(MethodInfo *)0x0);
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar4 = UI_ElementFactory__CreateMultiTextLabel
                                       (pUVar3,local_60,0,3,12.0,4,false,(MethodInfo *)0x0);
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar4,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_MultiTextLabel
                                         );
                      ppUVar1 = &(__this->fields).performancePanel;
                      (__this->fields).performancePanel = pUVar5;
                      Il2CppCodeGenWriteBarrier(ppUVar1);
                      pUVar5 = (__this->fields).performancePanel;
                      if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
                        UI_MultiTextLabel__SetValue(pUVar5,0,"FPS: ",(MethodInfo *)0x0);
                        if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                          UI_MultiTextLabel__SetValue
                                    (*ppUVar1,1,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                     (MethodInfo *)0x0);
                          if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                            UI_MultiTextLabel__SetValue(*ppUVar1,2,"Ping: ",(MethodInfo *)0x0);
                            if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                              UI_MultiTextLabel__SetValue
                                        (*ppUVar1,3,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                                         (MethodInfo *)0x0);
                              if (*ppUVar1 != (UI_MultiTextLabel_o *)0x0) {
                                UI_MultiTextLabel__SetEnabled(*ppUVar1,false,(MethodInfo *)0x0);
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
// 0x5d52830

void UI_Telemetry__Update(UI_Telemetry_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields)._currentSyncDelay;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields)._currentSyncDelay = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  UI_Telemetry__Sync(__this,method);
  return;
}


// UI.Telemetry$$Sync
// il2cpp: void UI_Telemetry__Sync (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x5d52880

void UI_Telemetry__Sync(UI_Telemetry_o *__this,MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_MultiTextLabel_o *pUVar3;
  Settings_GraphicsSettings_o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  System_DateTime_o dt;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  float currentTime;
  
  if (Il2CppMethodInitialized_07547f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547f08 = '\x01';
  }
  (__this->fields)._currentSyncDelay = 0.01;
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ShowGameTime, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d52a1d;
  pUVar3 = (__this->fields).timePanel;
  if ((pSVar2->fields)._value == false) {
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_05d52a1d;
    UI_MultiTextLabel__SetEnabled(pUVar3,false,(MethodInfo *)0x0);
  }
  else {
    if (pUVar3 == (UI_MultiTextLabel_o *)0x0) goto label_05d52a1d;
    pMVar6 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar3,true,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d52972;
label_05d5293f:
      currentTime = (pCVar5->fields).CurrentTime;
    }
    else {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05d5293f;
label_05d52972:
      currentTime = 0.0;
    }
    UI_Telemetry__UpdateGameTime(__this,currentTime,pMVar6);
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    dt = System_DateTime__get_Now((MethodInfo *)0x0);
    UI_Telemetry__UpdateSystemTime(__this,dt,method_00);
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar4 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar4->fields).ShowFPS, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d52a1d;
  if ((pSVar2->fields)._value == false) {
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar1 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).ShowPing, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d52a1d;
    if ((pSVar2->fields)._value == false) {
      pUVar3 = (__this->fields).performancePanel;
      if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetEnabled(pUVar3,false,(MethodInfo *)0x0);
        return;
      }
      goto label_05d52a1d;
    }
  }
  pUVar3 = (__this->fields).performancePanel;
  if (pUVar3 != (UI_MultiTextLabel_o *)0x0) {
    pMVar6 = (MethodInfo *)0x1;
    UI_MultiTextLabel__SetEnabled(pUVar3,true,(MethodInfo *)0x0);
    UI_Telemetry__UpdatePerformance(__this,pMVar6);
    return;
  }
label_05d52a1d:
  ThrowNullReferenceException();
}


// UI.Telemetry$$UpdatePerformance
// il2cpp: void UI_Telemetry__UpdatePerformance (UI_Telemetry_o* __this, const MethodInfo* method);
// 0x5d52d70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d52e77: test rbx, rbx
// asm:   0x5d52e7a: jne 0x5d52ef5
// asm:   0x5d52e7c: jmp 0x5d531a8

void UI_Telemetry__UpdatePerformance(UI_Telemetry_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  UI_MultiTextLabel_o *pUVar5;
  System_Text_StringBuilder_o *pSVar6;
  Settings_UISettings_o *pSVar7;
  int32_t iVar8;
  undefined8 in_RAX;
  System_String_o *pSVar9;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    Il2CppMethodInitialized_07547f09 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar3 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).ShowFPS, pSVar4 == (Settings_BoolSetting_o *)0x0)) goto label_05d531a8;
  pUVar5 = (__this->fields).performancePanel;
  if ((pSVar4->fields)._value == false) {
    if (pUVar5 == (UI_MultiTextLabel_o *)0x0) goto label_05d531a8;
    UI_MultiTextLabel__SetElementEnabled(pUVar5,0,false,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).performancePanel;
    if (pUVar5 == (UI_MultiTextLabel_o *)0x0) goto label_05d531a8;
    UI_MultiTextLabel__SetElementEnabled(pUVar5,1,false,(MethodInfo *)0x0);
  }
  else {
    if (pUVar5 == (UI_MultiTextLabel_o *)0x0) goto label_05d531a8;
    UI_MultiTextLabel__SetElementEnabled(pUVar5,0,true,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).performancePanel;
    if (pUVar5 == (UI_MultiTextLabel_o *)0x0) goto label_05d531a8;
    UI_MultiTextLabel__SetElementEnabled(pUVar5,1,true,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._sb;
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_05d531a8;
    System_Text_StringBuilder__Clear(pSVar6,(MethodInfo *)0x0);
    pSVar6 = (__this->fields)._sb;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      if (g_data_075454e5 != '\0') goto label_05d52e6a;
label_05d52ec3:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      g_data_075454e5 = '\x01';
      uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (g_data_075454e5 == '\0') goto label_05d52ec3;
label_05d52e6a:
      uVar2 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_05d531a8;
    System_Text_StringBuilder__Append_530f730
              (pSVar6,*(int32_t *)((long)((Il2CppClass *)TypeInfo_UI_UIManager)->static_fields + 0x74),
               (MethodInfo *)0x0);
    pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar7 == (Settings_UISettings_o *)0x0) ||
       (pSVar4 = (pSVar7->fields).ShowPing, pSVar4 == (Settings_BoolSetting_o *)0x0)) goto label_05d531a8;
    if ((pSVar4->fields)._value == false) {
label_05d52f7b:
      pSVar6 = (__this->fields)._sb;
    }
    else {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        if (g_data_07544cc2 != '\0') goto label_05d52f5a;
label_05d53145:
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
        g_data_07544cc2 = '\x01';
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05d52f6a;
label_05d53168:
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
      }
      else {
        if (g_data_07544cc2 == '\0') goto label_05d53145;
label_05d52f5a:
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05d53168;
label_05d52f6a:
        cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
      }
      if (cVar1 != '\0') goto label_05d52f7b;
      pSVar6 = (__this->fields)._sb;
      if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_05d531a8;
      System_Text_StringBuilder__Append_530ed80(pSVar6,", ",(MethodInfo *)0x0);
      pSVar6 = (__this->fields)._sb;
    }
    if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_05d531a8;
    pUVar5 = (__this->fields).performancePanel;
    pSVar9 = (*(pSVar6->klass->vtable)._3_ToString.methodPtr)
                       (pSVar6,(pSVar6->klass->vtable)._3_ToString.method);
    if (pUVar5 == (UI_MultiTextLabel_o *)0x0) goto label_05d531a8;
    UI_MultiTextLabel__SetValue(pUVar5,1,pSVar9,(MethodInfo *)0x0);
  }
  pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar7 == (Settings_UISettings_o *)0x0) ||
     (pSVar4 = (pSVar7->fields).ShowPing, pSVar4 == (Settings_BoolSetting_o *)0x0)) goto label_05d531a8;
  if ((pSVar4->fields)._value != false) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      if (g_data_07544cc2 != '\0') goto label_05d53000;
label_05d5306c:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      g_data_07544cc2 = '\x01';
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor != 0) goto label_05d5300c;
label_05d5308b:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
    }
    else {
      if (g_data_07544cc2 == '\0') goto label_05d5306c;
label_05d53000:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) goto label_05d5308b;
label_05d5300c:
      cVar1 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
    }
    if (cVar1 == '\0') {
      pUVar5 = (__this->fields).performancePanel;
      if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
        UI_MultiTextLabel__SetElementEnabled(pUVar5,2,true,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).performancePanel;
        if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
          UI_MultiTextLabel__SetElementEnabled(pUVar5,3,true,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).performancePanel;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          iVar8 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
          uStack_28 = CONCAT44(iVar8,(undefined4)uStack_28);
          pSVar9 = System_Int32__ToString((int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
          if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
            UI_MultiTextLabel__SetValue(pUVar5,3,pSVar9,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05d531a8;
    }
  }
  pUVar5 = (__this->fields).performancePanel;
  if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
    UI_MultiTextLabel__SetElementEnabled(pUVar5,2,false,(MethodInfo *)0x0);
    pUVar5 = (__this->fields).performancePanel;
    if (pUVar5 != (UI_MultiTextLabel_o *)0x0) {
      UI_MultiTextLabel__SetElementEnabled(pUVar5,3,false,(MethodInfo *)0x0);
      return;
    }
  }
label_05d531a8:
  ThrowNullReferenceException();
}


// UI.Telemetry$$UpdateGameTime
// il2cpp: void UI_Telemetry__UpdateGameTime (UI_Telemetry_o* __this, float currentTime, const MethodInfo* method);
// 0x5d52a30

void UI_Telemetry__UpdateGameTime(UI_Telemetry_o *__this,float currentTime,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *value;
  undefined1 local_14 [4];
  
  if (Il2CppMethodInitialized_07547f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"{0:0}");
    Il2CppMethodInitialized_07547f0a = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    arg0 = il2cpp_vm_Object_Box(g_data_07556740,local_14);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendFormat(pSVar1,"{0:0}",arg0,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_530ed80(pSVar1,", ",(MethodInfo *)0x0);
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
// 0x5d52b20

void UI_Telemetry__UpdateSystemTime(UI_Telemetry_o *__this,System_DateTime_o dt,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  UI_MultiTextLabel_o *__this_00;
  int32_t iVar2;
  System_String_o *value;
  uint uVar3;
  System_DateTime_o local_18;
  
  local_18 = (System_DateTime_o)(System_DateTime_o)dt.fields._dateData;
  if (Il2CppMethodInitialized_07547f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    Il2CppMethodInitialized_07547f0b = '\x01';
  }
  pSVar1 = (__this->fields)._sb;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar1,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sb;
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    iVar2 = System_DateTime__get_Hour(&local_18,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530f6a0
                (pSVar1,((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) - (short)(iVar2 >> 0x1f)) + 0x30,
                 (MethodInfo *)0x0);
      pSVar1 = (__this->fields)._sb;
      iVar2 = System_DateTime__get_Hour(&local_18,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        uVar3 = -(iVar2 >> 0x1f);
        System_Text_StringBuilder__Append_530f6a0
                  (pSVar1,(short)iVar2 + ((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 +
                          0x30,(MethodInfo *)(ulong)(uVar3 ^ (uint)(iVar2 >> 0x1f) >> 0x1f));
        pSVar1 = (__this->fields)._sb;
        if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append_530f6a0(pSVar1,0x3a,(MethodInfo *)0x0);
          pSVar1 = (__this->fields)._sb;
          iVar2 = System_DateTime__get_Minute(&local_18,(MethodInfo *)0x0);
          if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append_530f6a0
                      (pSVar1,((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) - (short)(iVar2 >> 0x1f)) +
                              0x30,(MethodInfo *)0x0);
            pSVar1 = (__this->fields)._sb;
            iVar2 = System_DateTime__get_Minute(&local_18,(MethodInfo *)0x0);
            if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
              uVar3 = -(iVar2 >> 0x1f);
              System_Text_StringBuilder__Append_530f6a0
                        (pSVar1,(short)iVar2 +
                                ((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 + 0x30,
                         (MethodInfo *)(ulong)(uVar3 ^ (uint)(iVar2 >> 0x1f) >> 0x1f));
              pSVar1 = (__this->fields)._sb;
              if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                System_Text_StringBuilder__Append_530f6a0(pSVar1,0x3a,(MethodInfo *)0x0);
                pSVar1 = (__this->fields)._sb;
                iVar2 = System_DateTime__get_Second(&local_18,(MethodInfo *)0x0);
                if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                  System_Text_StringBuilder__Append_530f6a0
                            (pSVar1,((short)((ulong)((long)iVar2 * 0x66666667) >> 0x22) -
                                    (short)(iVar2 >> 0x1f)) + 0x30,(MethodInfo *)0x0);
                  pSVar1 = (__this->fields)._sb;
                  iVar2 = System_DateTime__get_Second(&local_18,(MethodInfo *)0x0);
                  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
                    uVar3 = -(iVar2 >> 0x1f);
                    System_Text_StringBuilder__Append_530f6a0
                              (pSVar1,(short)iVar2 +
                                      ((short)(iVar2 / 10) + (short)(iVar2 >> 0x1f) + (short)uVar3) * -10 +
                                      0x30,(MethodInfo *)(ulong)(uVar3 ^ (uint)(iVar2 >> 0x1f) >> 0x1f));
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
// 0x5d531b0

void UI_Telemetry___ctor(UI_Telemetry_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_07547f0c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._sb = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sb);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


