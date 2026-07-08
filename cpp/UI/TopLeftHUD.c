// Type: UI.TopLeftHUD
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TopLeftHUD.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs  [CHANGED since prior version]
// --------------------------------

// UI.TopLeftHUD$$get_ThemePanel
// il2cpp: System_String_o* UI_TopLeftHUD__get_ThemePanel (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x40da800

System_String_o * UI_TopLeftHUD__get_ThemePanel(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  if (DAT_0570476c == '\0') {
    il2cpp_init_method_metadata(&"TopLeftHUD");
    DAT_0570476c = '\x01';
  }
  return "TopLeftHUD";
}


// UI.TopLeftHUD$$Setup
// il2cpp: void UI_TopLeftHUD__Setup (UI_TopLeftHUD_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40da830

void UI_TopLeftHUD__Setup(UI_TopLeftHUD_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UI_ElementStyle_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UI_Telemetry_o *pUVar10;
  UI_KDRPanel_o *pUVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Vector2_o UVar12;
  
  if (DAT_0570476d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_KDRPanel_AddComponent_KDRPanel);
    il2cpp_init_method_metadata(&MethodInfo_Telemetry_AddComponent_Telemetry);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&"Content/Panel");
    il2cpp_init_method_metadata(&"Telemetry");
    il2cpp_init_method_metadata(&"KDR");
    DAT_0570476d = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Content/Panel",(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields).panel;
      (__this->fields).panel = pUVar7;
      il2cpp_runtime_glue(ppUVar1);
      pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor(pUVar7,(MethodInfo *)0x0);
      ppUVar2 = &(__this->fields).telemetryCanvas;
      (__this->fields).telemetryCanvas = pUVar7;
      il2cpp_runtime_glue(ppUVar2,pUVar7);
      pUVar5 = (UnityEngine_Object_o *)(__this->fields).telemetryCanvas;
      if (pUVar5 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(pUVar5,"Telemetry",(MethodInfo *)0x0);
        if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent<object>(*ppUVar2,MethodInfo_Canvas_AddComponent_Canvas);
          if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar8 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__GetComponent<object>(*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
            UVar12 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_pivot(pUVar8,UVar12,(MethodInfo *)0x0);
              pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
              UnityEngine_GameObject___ctor(pUVar7,(MethodInfo *)0x0);
              ppUVar3 = &(__this->fields).kdrCanvas;
              (__this->fields).kdrCanvas = pUVar7;
              il2cpp_runtime_glue(ppUVar3,pUVar7);
              pUVar5 = (UnityEngine_Object_o *)(__this->fields).kdrCanvas;
              if (pUVar5 != (UnityEngine_Object_o *)0x0) {
                UnityEngine_Object__set_name(pUVar5,"KDR",(MethodInfo *)0x0);
                if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__AddComponent<object>(*ppUVar3,MethodInfo_Canvas_AddComponent_Canvas);
                  if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                    pUVar8 = (UnityEngine_RectTransform_o *)
                             UnityEngine_GameObject__GetComponent<object>(*ppUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
                    UVar12 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot(pUVar8,UVar12,(MethodInfo *)0x0);
                      if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar6 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0);
                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar1,(MethodInfo *)0x0)
                          ;
                          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                            UnityEngine_Transform__SetParent(pUVar6,pUVar9,(MethodInfo *)0x0);
                            if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar6 = UnityEngine_GameObject__get_transform
                                                 (*ppUVar3,(MethodInfo *)0x0);
                              if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                pUVar9 = UnityEngine_GameObject__get_transform
                                                   (*ppUVar1,(MethodInfo *)0x0);
                                if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                  UnityEngine_Transform__SetParent(pUVar6,pUVar9,(MethodInfo *)0x0);
                                  themePanel = (System_String_o *)
                                               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr
                                               )(__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                        method);
                                  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                                  UI_ElementStyle___ctor
                                            (__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0)
                                  ;
                                  ppUVar4 = &(__this->fields)._style;
                                  (__this->fields)._style = __this_00;
                                  il2cpp_runtime_glue(ppUVar4);
                                  pUVar7 = (__this->fields).telemetryCanvas;
                                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar6 = UnityEngine_GameObject__get_transform
                                                       (pUVar7,(MethodInfo *)0x0);
                                    pUVar7 = UI_ElementFactory__CreateVerticalGroup
                                                       (pUVar6,0.0,0,(MethodInfo *)0x0);
                                    UI_ElementFactory__SetAnchor
                                              (pUVar7,0,0,(UnityEngine_Vector2_o)0x0,
                                               (MethodInfo *)0x0);
                                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                      pUVar8 = (UnityEngine_RectTransform_o *)
                                               UnityEngine_GameObject__GetComponent<object>
                                                         (pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                                      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                        UnityEngine_RectTransform__set_sizeDelta
                                                  (pUVar8,(UnityEngine_Vector2_o)0x4270000043c80000,
                                                   (MethodInfo *)0x0);
                                        pUVar10 = (UI_Telemetry_o *)
                                                  UnityEngine_GameObject__AddComponent<object>
                                                            (pUVar7,MethodInfo_Telemetry_AddComponent_Telemetry);
                                        (__this->fields)._telemetry = pUVar10;
                                        il2cpp_runtime_glue(&(__this->fields)._telemetry,pUVar10);
                                        pUVar10 = (__this->fields)._telemetry;
                                        if (pUVar10 != (UI_Telemetry_o *)0x0) {
                                          UI_Telemetry__Setup(pUVar10,*ppUVar4,method_00);
                                          if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                            pUVar6 = UnityEngine_GameObject__get_transform
                                                               (*ppUVar3,(MethodInfo *)0x0);
                                            pUVar7 = UI_ElementFactory__CreateVerticalGroup
                                                               (pUVar6,0.0,0,(MethodInfo *)0x0);
                                            ppUVar1 = &(__this->fields).kdrAndLabel;
                                            (__this->fields).kdrAndLabel = pUVar7;
                                            il2cpp_runtime_glue(ppUVar1);
                                            UI_ElementFactory__SetAnchor
                                                      ((__this->fields).kdrAndLabel,0,0,
                                                       (UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0)
                                            ;
                                            pUVar7 = (__this->fields).kdrAndLabel;
                                            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                              pUVar8 = (UnityEngine_RectTransform_o *)
                                                       UnityEngine_GameObject__GetComponent<object>
                                                                 (pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
                                              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                                                UnityEngine_RectTransform__set_sizeDelta
                                                          (pUVar8,(UnityEngine_Vector2_o)
                                                                  0x442f000043fa0000,
                                                           (MethodInfo *)0x0);
                                                pUVar7 = *ppUVar1;
                                                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                                  pUVar6 = UnityEngine_GameObject__get_transform
                                                                     (pUVar7,(MethodInfo *)0x0);
                                                  pUVar7 = UI_ElementFactory__CreateVerticalGroup
                                                                     (pUVar6,0.0,0,(MethodInfo *)0x0
                                                                     );
                                                  UI_ElementFactory__SetAnchor
                                                            (pUVar7,0,0,(UnityEngine_Vector2_o)0x0,
                                                             (MethodInfo *)0x0);
                                                  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar11 = (UI_KDRPanel_o *)
                                                                                                                            
                                                  UnityEngine_GameObject__AddComponent<object>
                                                            (pUVar7,MethodInfo_KDRPanel_AddComponent_KDRPanel);
                                                  (__this->fields)._kdr = pUVar11;
                                                  il2cpp_runtime_glue(&(__this->fields)._kdr,pUVar11)
                                                  ;
                                                  pUVar11 = (__this->fields)._kdr;
                                                  if (pUVar11 != (UI_KDRPanel_o *)0x0) {
                                                    method_01 = (MethodInfo *)
                                                                (__this->fields)._style;
                                                    UI_KDRPanel__Setup(pUVar11,(UI_ElementStyle_o *)
                                                                               method_01,
                                                                       (MethodInfo *)0x0);
                                                    UI_TopLeftHUD__ApplySettings(__this,method_01);
                                                    pUVar7 = (__this->fields).kdrCanvas;
                                                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar6 = UnityEngine_GameObject__get_transform
                                                                         (pUVar7,(MethodInfo *)0x0);
                                                      if (DAT_056fe077 == '\0') {
                                                        il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                                        DAT_056fe077 = '\x01';
                                                      }
                                                      if (pUVar6 != (UnityEngine_Transform_o *)0x0)
                                                      {
                                                        UnityEngine_Transform__set_localScale
                                                                  (pUVar6,(UnityEngine_Vector3_o)
                                                                          *(
                                                  UnityEngine_Vector3_Fields *)
                                                  (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                  (MethodInfo *)0x0);
                                                  if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                                                    pUVar6 = UnityEngine_GameObject__get_transform
                                                                       (*ppUVar2,(MethodInfo *)0x0);
                                                    if (DAT_056fe077 == '\0') {
                                                      il2cpp_init_method_metadata(&TypeInfo_Vector3);
                                                      DAT_056fe077 = '\x01';
                                                    }
                                                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                                      UnityEngine_Transform__set_localScale
                                                                (pUVar6,(UnityEngine_Vector3_o)
                                                                        *(UnityEngine_Vector3_Fields
                                                                          *)(*(long *)(TypeInfo_Vector3
                                                                                      + 0xb8) + 0xc)
                                                                 ,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TopLeftHUD$$ApplySettings
// il2cpp: void UI_TopLeftHUD__ApplySettings (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x40dadb0

void UI_TopLeftHUD__ApplySettings(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  long lVar1;
  long lVar2;
  UnityEngine_RectTransform_o *__this_01;
  float fVar3;
  
  if (DAT_0570476e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_0570476e = '\x01';
  }
  __this_00 = (__this->fields).kdrAndLabel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_040dae99;
  __this_01 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x58), lVar1 == 0)) goto LAB_040dae99;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (*(char *)(lVar1 + 0x11) == '\0') {
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0xb8) == 0)) goto LAB_040dae99;
    fVar3 = 0.0;
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x11) != '\0') goto LAB_040dae55;
  }
  else {
    if (lVar2 == 0) goto LAB_040dae99;
LAB_040dae55:
    fVar3 = 30.0;
  }
  if ((*(long *)(lVar2 + 0xd0) != 0) && (__this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    if (*(char *)(*(long *)(lVar2 + 0xd0) + 0x11) != '\0') {
      fVar3 = fVar3 + 30.0;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_01,(UnityEngine_Vector2_o)((ulong)(uint)-fVar3 << 0x20),(MethodInfo *)0x0);
    return;
  }
LAB_040dae99:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TopLeftHUD$$.ctor
// il2cpp: void UI_TopLeftHUD___ctor (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x40daea0

void UI_TopLeftHUD___ctor(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


