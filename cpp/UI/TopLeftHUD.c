// Type: UI.TopLeftHUD
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/TopLeftHUD.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// --------------------------------

// UI.TopLeftHUD$$get_ThemePanel
// il2cpp: System_String_o* UI_TopLeftHUD__get_ThemePanel (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x5d53210

System_String_o * UI_TopLeftHUD__get_ThemePanel(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeftHUD");
    Il2CppMethodInitialized_07547f0d = '\x01';
  }
  return "TopLeftHUD";
}


// UI.TopLeftHUD$$get_KDR
// il2cpp: UI_KDRPanel_o* UI_TopLeftHUD__get_KDR (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x5d53240

UI_KDRPanel_o * UI_TopLeftHUD__get_KDR(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  return (__this->fields)._kdr;
}


// UI.TopLeftHUD$$Setup
// il2cpp: void UI_TopLeftHUD__Setup (UI_TopLeftHUD_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d53250

void UI_TopLeftHUD__Setup(UI_TopLeftHUD_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_GameObject_o **targetAddress_00;
  UI_ElementStyle_o **targetAddress_01;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UI_Telemetry_o *pUVar7;
  UI_KDRPanel_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector2_o UVar9;
  
  if (Il2CppMethodInitialized_07547f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_KDRPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Telemetry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Telemetry");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    Il2CppMethodInitialized_07547f0e = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields).panel;
      (__this->fields).panel = pUVar4;
      Il2CppCodeGenWriteBarrier(ppUVar1);
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa10(pUVar4,(MethodInfo *)0x0);
      targetAddress = &(__this->fields).telemetryCanvas;
      (__this->fields).telemetryCanvas = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar2 = (UnityEngine_Object_o *)(__this->fields).telemetryCanvas;
      if (pUVar2 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(pUVar2,"Telemetry",(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (*targetAddress,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
          if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
            pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (*targetAddress,
                                (MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            UVar9 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot(pUVar5,UVar9,(MethodInfo *)0x0);
              pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
              UnityEngine_GameObject___ctor_691aa10(pUVar4,(MethodInfo *)0x0);
              targetAddress_00 = &(__this->fields).kdrCanvas;
              (__this->fields).kdrCanvas = pUVar4;
              Il2CppCodeGenWriteBarrier(targetAddress_00);
              pUVar2 = (UnityEngine_Object_o *)(__this->fields).kdrCanvas;
              if (pUVar2 != (UnityEngine_Object_o *)0x0) {
                UnityEngine_Object__set_name(pUVar2,"KDR",(MethodInfo *)0x0);
                if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__AddComponent_object_
                            (*targetAddress_00,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
                  if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                       (*targetAddress_00,
                                        (MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    UVar9 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot(pUVar5,UVar9,(MethodInfo *)0x0);
                      if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                        pUVar3 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
                          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__SetParent(pUVar3,pUVar6,(MethodInfo *)0x0);
                            if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar3 = UnityEngine_GameObject__get_transform
                                                 (*targetAddress_00,(MethodInfo *)0x0);
                              if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0);
                                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetParent(pUVar3,pUVar6,(MethodInfo *)0x0);
                                  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                         (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                                 method);
                                  __this_00 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)TypeInfo_UI_ElementStyle);
                                  UI_ElementStyle___ctor
                                            (__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
                                  targetAddress_01 = &(__this->fields)._style;
                                  (__this->fields)._style = __this_00;
                                  Il2CppCodeGenWriteBarrier(targetAddress_01);
                                  pUVar4 = (__this->fields).telemetryCanvas;
                                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar3 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
                                    pUVar4 = UI_ElementFactory__CreateVerticalGroup
                                                       (pUVar3,0.0,0,(MethodInfo *)0x0);
                                    UI_ElementFactory__SetAnchor
                                              (pUVar4,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                                         (pUVar4,(MethodInfo_353B730 *)
                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                      if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_sizeDelta
                                                  (pUVar5,(UnityEngine_Vector2_o)0x4270000043c80000,
                                                   (MethodInfo *)0x0);
                                        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                                                           (pUVar4,(MethodInfo_353B6A0 *)
                                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_Telemetry
                                                       );
                                        (__this->fields)._telemetry = pUVar7;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields)._telemetry);
                                        pUVar7 = (__this->fields)._telemetry;
                                        if (pUVar7 != (UI_Telemetry_o *)0x0) {
                                          UI_Telemetry__Setup(pUVar7,*targetAddress_01,method_00);
                                          if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar3 = UnityEngine_GameObject__get_transform
                                                               (*targetAddress_00,(MethodInfo *)0x0);
                                            pUVar4 = UI_ElementFactory__CreateVerticalGroup
                                                               (pUVar3,0.0,0,(MethodInfo *)0x0);
                                            ppUVar1 = &(__this->fields).kdrAndLabel;
                                            (__this->fields).kdrAndLabel = pUVar4;
                                            Il2CppCodeGenWriteBarrier(ppUVar1);
                                            UI_ElementFactory__SetAnchor
                                                      ((__this->fields).kdrAndLabel,0,0,
                                                       (UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                                            pUVar4 = (__this->fields).kdrAndLabel;
                                            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                                                 (pUVar4,(MethodInfo_353B730 *)
                                                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                                                       );
                                              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                                                UnityEngine_RectTransform__set_sizeDelta
                                                          (pUVar5,(UnityEngine_Vector2_o)0x442f000043fa0000,
                                                           (MethodInfo *)0x0);
                                                pUVar4 = *ppUVar1;
                                                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                                  pUVar3 = UnityEngine_GameObject__get_transform
                                                                     (pUVar4,(MethodInfo *)0x0);
                                                  pUVar4 = UI_ElementFactory__CreateVerticalGroup
                                                                     (pUVar3,0.0,0,(MethodInfo *)0x0);
                                                  UI_ElementFactory__SetAnchor
                                                            (pUVar4,0,0,(UnityEngine_Vector2_o)0x0,
                                                             (MethodInfo *)0x0);
                                                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar8 = UnityEngine_GameObject__AddComponent_object_
                                                                       (pUVar4,(MethodInfo_353B6A0 *)
                                                                                                                                                              
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_KDRPanel
                                                       );
                                                    (__this->fields)._kdr = pUVar8;
                                                    Il2CppCodeGenWriteBarrier(&(__this->fields)._kdr);
                                                    pUVar8 = (__this->fields)._kdr;
                                                    if (pUVar8 != (UI_KDRPanel_o *)0x0) {
                                                      method_01 = (MethodInfo *)(__this->fields)._style;
                                                      UI_KDRPanel__Setup(pUVar8,(UI_ElementStyle_o *)method_01
                                                                         ,(MethodInfo *)0x0);
                                                      UI_TopLeftHUD__ApplySettings(__this,method_01);
                                                      pUVar4 = (__this->fields).kdrCanvas;
                                                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                                                        pUVar3 = UnityEngine_GameObject__get_transform
                                                                           (pUVar4,(MethodInfo *)0x0);
                                                        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                          il2cpp_codegen_initialize_runtime_metadata
                                                                    (&TypeInfo_UnityEngine_Vector3);
                                                          Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                        }
                                                        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                                          UnityEngine_Transform__set_localScale
                                                                    (pUVar3,(UnityEngine_Vector3_o)
                                                                            (TypeInfo_UnityEngine_Vector3->
                                                                             static_fields->oneVector).fields,
                                                                     (MethodInfo *)0x0);
                                                          if (*targetAddress !=
                                                              (UnityEngine_GameObject_o *)0x0) {
                                                            pUVar3 = UnityEngine_GameObject__get_transform
                                                                               (*targetAddress,
                                                                                (MethodInfo *)0x0);
                                                            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                                                              il2cpp_codegen_initialize_runtime_metadata
                                                                        (&TypeInfo_UnityEngine_Vector3);
                                                              Il2CppMethodInitialized_0753e4b7 = '\x01';
                                                            }
                                                            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                                                              UnityEngine_Transform__set_localScale
                                                                        (pUVar3,(UnityEngine_Vector3_o)
                                                                                (TypeInfo_UnityEngine_Vector3
                                                                                 ->static_fields->oneVector).
                                                                                fields,(MethodInfo *)0x0);
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


// UI.TopLeftHUD$$ApplySettings
// il2cpp: void UI_TopLeftHUD__ApplySettings (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x5d537d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d53859: jmp 0x5d538b9

void UI_TopLeftHUD__ApplySettings(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Settings_GraphicsSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_UISettings_o *pSVar3;
  UnityEngine_RectTransform_o *__this_01;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547f0f = '\x01';
  }
  __this_00 = (__this->fields).kdrAndLabel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05d538b9;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this_00,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ShowFPS, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d538b9;
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar2->fields)._value == false) {
    if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar3->fields).ShowPing, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_05d538b9;
    fVar4 = 0.0;
    if ((pSVar2->fields)._value != false) goto label_05d53875;
  }
  else {
    if (pSVar3 == (Settings_UISettings_o *)0x0) goto label_05d538b9;
label_05d53875:
    fVar4 = 30.0;
  }
  pSVar2 = (pSVar3->fields).ShowGameTime;
  if ((pSVar2 != (Settings_BoolSetting_o *)0x0) && (__this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      fVar4 = fVar4 + 30.0;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)-fVar4 << 0x20),(MethodInfo *)0x0);
    return;
  }
label_05d538b9:
  ThrowNullReferenceException();
}


// UI.TopLeftHUD$$.ctor
// il2cpp: void UI_TopLeftHUD___ctor (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x5d538c0

void UI_TopLeftHUD___ctor(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UI_BasePanel___ctor((UI_SimplePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


