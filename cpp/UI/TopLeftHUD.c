// Type: UI.TopLeftHUD
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TopLeftHUD.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// --------------------------------

// UI.TopLeftHUD$$get_ThemePanel
// il2cpp: System_String_o* UI_TopLeftHUD__get_ThemePanel (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x43ed220

System_String_o * UI_TopLeftHUD__get_ThemePanel(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  if (g_data_057ae4fd == '\0') {
    il2cpp_runtime_helper_023445d0(&"TopLeftHUD");
    g_data_057ae4fd = '\x01';
  }
  return "TopLeftHUD";
}


// UI.TopLeftHUD$$Setup
// il2cpp: void UI_TopLeftHUD__Setup (UI_TopLeftHUD_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43ed250

void UI_TopLeftHUD__Setup(UI_TopLeftHUD_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UI_ElementStyle_o **ppUVar4;
  UnityEngine_Object_o *pUVar5;
  long lVar6;
  long lVar7;
  System_Threading_CancellationTokenSource_o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UI_TopLeftHUD_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *pSVar13;
  UI_ElementStyle_o *__this_03;
  UI_Telemetry_o *pUVar14;
  UI_KDRPanel_o *pUVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long *__this_04;
  UnityEngine_MonoBehaviour_o *__this_05;
  float fVar16;
  UnityEngine_Vector2_o UVar17;
  
  if (g_data_057ae4fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KDRPanel_AddComponent_KDRPanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Telemetry_AddComponent_Telemetry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&"Content/Panel");
    il2cpp_runtime_helper_023445d0(&"Telemetry");
    il2cpp_runtime_helper_023445d0(&"KDR");
    g_data_057ae4fe = '\x01';
  }
  __this_04 = (long *)__this;
  pUVar8 = (UI_TopLeftHUD_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar8 != (UI_TopLeftHUD_o *)0x0) &&
     (pUVar9 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar8,"Content/Panel",(MethodInfo *)0x0),
     __this_04 = (long *)pUVar8, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields).panel;
    (__this->fields).panel = pUVar10;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor_4dfc3c0(pUVar10,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields).telemetryCanvas;
    (__this->fields).telemetryCanvas = pUVar10;
    il2cpp_runtime_helper_022b4080(ppUVar2,pUVar10);
    pUVar5 = (UnityEngine_Object_o *)(__this->fields).telemetryCanvas;
    __this_04 = (long *)0x0;
    if (pUVar5 != (UnityEngine_Object_o *)0x0) {
      UnityEngine_Object__set_name(pUVar5,"Telemetry",(MethodInfo *)0x0);
      __this_04 = (long *)0x0;
      if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_(*ppUVar2,MethodInfo_Canvas_AddComponent_Canvas);
        __this_04 = (long *)0x0;
        if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar11 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
          __this_04 = (long *)0x0;
          UVar17 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
          if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_pivot(pUVar11,UVar17,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc3c0(pUVar10,(MethodInfo *)0x0);
            ppUVar3 = &(__this->fields).kdrCanvas;
            (__this->fields).kdrCanvas = pUVar10;
            il2cpp_runtime_helper_022b4080(ppUVar3,pUVar10);
            pUVar5 = (UnityEngine_Object_o *)(__this->fields).kdrCanvas;
            __this_04 = (long *)0x0;
            if (pUVar5 != (UnityEngine_Object_o *)0x0) {
              UnityEngine_Object__set_name(pUVar5,"KDR",(MethodInfo *)0x0);
              __this_04 = (long *)0x0;
              if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__AddComponent_object_(*ppUVar3,MethodInfo_Canvas_AddComponent_Canvas);
                __this_04 = (long *)0x0;
                if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar11 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent_object_(*ppUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
                  __this_04 = (long *)0x0;
                  UVar17 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
                  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_pivot(pUVar11,UVar17,(MethodInfo *)0x0);
                    __this_04 = (long *)0x0;
                    if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0);
                      __this_04 = (long *)*ppUVar1;
                      if (((UI_TopLeftHUD_o *)__this_04 != (UI_TopLeftHUD_o *)0x0) &&
                         (pUVar12 = UnityEngine_GameObject__get_transform
                                              ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0),
                         pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                        UnityEngine_Transform__SetParent(pUVar9,pUVar12,(MethodInfo *)0x0);
                        __this_04 = (long *)0x0;
                        if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar3,(MethodInfo *)0x0);
                          __this_04 = (long *)*ppUVar1;
                          if (((UI_TopLeftHUD_o *)__this_04 != (UI_TopLeftHUD_o *)0x0) &&
                             (pUVar12 = UnityEngine_GameObject__get_transform
                                                  ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0),
                             pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__SetParent(pUVar9,pUVar12,(MethodInfo *)0x0);
                            pSVar13 = (System_String_o *)
                                      (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                            __this_03 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
                            UI_ElementStyle___ctor(__this_03,0x18,120.0,20.0,pSVar13,(MethodInfo *)0x0);
                            ppUVar4 = &(__this->fields)._style;
                            (__this->fields)._style = __this_03;
                            il2cpp_runtime_helper_022b4080(ppUVar4);
                            pUVar10 = (__this->fields).telemetryCanvas;
                            __this_04 = (long *)0x0;
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar9 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
                              pUVar8 = (UI_TopLeftHUD_o *)
                                       UI_ElementFactory__CreateVerticalGroup(pUVar9,0.0,0,(MethodInfo *)0x0);
                              __this_04 = (long *)pUVar8;
                              UI_ElementFactory__SetAnchor
                                        ((UnityEngine_GameObject_o *)pUVar8,0,0,(UnityEngine_Vector2_o)0x0,
                                         (MethodInfo *)0x0);
                              if ((pUVar8 != (UI_TopLeftHUD_o *)0x0) &&
                                 (__this_04 = (long *)pUVar8,
                                 pUVar11 = (UnityEngine_RectTransform_o *)
                                           UnityEngine_GameObject__GetComponent_object_
                                                     ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_RectTransform_GetComponent_RectTransform),
                                 pUVar11 != (UnityEngine_RectTransform_o *)0x0)) {
                                UnityEngine_RectTransform__set_sizeDelta
                                          (pUVar11,(UnityEngine_Vector2_o)0x4270000043c80000,(MethodInfo *)0x0
                                          );
                                pUVar14 = (UI_Telemetry_o *)
                                          UnityEngine_GameObject__AddComponent_object_
                                                    ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Telemetry_AddComponent_Telemetry);
                                (__this->fields)._telemetry = pUVar14;
                                il2cpp_runtime_helper_022b4080(&(__this->fields)._telemetry,pUVar14);
                                pUVar14 = (__this->fields)._telemetry;
                                __this_04 = (long *)0x0;
                                if (pUVar14 != (UI_Telemetry_o *)0x0) {
                                  UI_Telemetry__Setup(pUVar14,*ppUVar4,method_00);
                                  __this_04 = (long *)0x0;
                                  if (*ppUVar3 != (UnityEngine_GameObject_o *)0x0) {
                                    pUVar9 = UnityEngine_GameObject__get_transform(*ppUVar3,(MethodInfo *)0x0)
                                    ;
                                    pUVar10 = UI_ElementFactory__CreateVerticalGroup
                                                        (pUVar9,0.0,0,(MethodInfo *)0x0);
                                    ppUVar1 = &(__this->fields).kdrAndLabel;
                                    (__this->fields).kdrAndLabel = pUVar10;
                                    il2cpp_runtime_helper_022b4080(ppUVar1);
                                    UI_ElementFactory__SetAnchor
                                              ((__this->fields).kdrAndLabel,0,0,(UnityEngine_Vector2_o)0x0,
                                               (MethodInfo *)0x0);
                                    __this_04 = (long *)(__this->fields).kdrAndLabel;
                                    if (((UI_TopLeftHUD_o *)__this_04 != (UI_TopLeftHUD_o *)0x0) &&
                                       (pUVar11 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_GameObject__GetComponent_object_
                                                            ((UnityEngine_GameObject_o *)__this_04,
                                                             MethodInfo_RectTransform_GetComponent_RectTransform),
                                       pUVar11 != (UnityEngine_RectTransform_o *)0x0)) {
                                      UnityEngine_RectTransform__set_sizeDelta
                                                (pUVar11,(UnityEngine_Vector2_o)0x442f000043fa0000,
                                                 (MethodInfo *)0x0);
                                      pUVar10 = *ppUVar1;
                                      __this_04 = (long *)0x0;
                                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar9 = UnityEngine_GameObject__get_transform
                                                           (pUVar10,(MethodInfo *)0x0);
                                        pUVar8 = (UI_TopLeftHUD_o *)
                                                 UI_ElementFactory__CreateVerticalGroup
                                                           (pUVar9,0.0,0,(MethodInfo *)0x0);
                                        __this_04 = (long *)pUVar8;
                                        UI_ElementFactory__SetAnchor
                                                  ((UnityEngine_GameObject_o *)pUVar8,0,0,
                                                   (UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
                                        if (pUVar8 != (UI_TopLeftHUD_o *)0x0) {
                                          pUVar15 = (UI_KDRPanel_o *)
                                                    UnityEngine_GameObject__AddComponent_object_
                                                              ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_KDRPanel_AddComponent_KDRPanel
                                                              );
                                          (__this->fields)._kdr = pUVar15;
                                          il2cpp_runtime_helper_022b4080(&(__this->fields)._kdr,pUVar15);
                                          pUVar15 = (__this->fields)._kdr;
                                          __this_04 = (long *)0x0;
                                          if (pUVar15 != (UI_KDRPanel_o *)0x0) {
                                            method_01 = (MethodInfo *)(__this->fields)._style;
                                            UI_KDRPanel__Setup(pUVar15,(UI_ElementStyle_o *)method_01,
                                                               (MethodInfo *)0x0);
                                            UI_TopLeftHUD__ApplySettings(__this,method_01);
                                            __this_04 = (long *)(__this->fields).kdrCanvas;
                                            if ((UI_TopLeftHUD_o *)__this_04 != (UI_TopLeftHUD_o *)0x0) {
                                              pUVar9 = UnityEngine_GameObject__get_transform
                                                                 ((UnityEngine_GameObject_o *)__this_04,
                                                                  (MethodInfo *)0x0);
                                              if (g_data_057a6932 == '\0') {
                                                __this_04 = &TypeInfo_Vector3;
                                                il2cpp_runtime_helper_023445d0();
                                                g_data_057a6932 = '\x01';
                                              }
                                              if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                                UnityEngine_Transform__set_localScale
                                                          (pUVar9,(UnityEngine_Vector3_o)
                                                                  *(UnityEngine_Vector3_Fields *)
                                                                   (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                           (MethodInfo *)0x0);
                                                __this_04 = (long *)*ppUVar2;
                                                if ((UI_TopLeftHUD_o *)__this_04 != (UI_TopLeftHUD_o *)0x0) {
                                                  pUVar9 = UnityEngine_GameObject__get_transform
                                                                     ((UnityEngine_GameObject_o *)__this_04,
                                                                      (MethodInfo *)0x0);
                                                  if (g_data_057a6932 == '\0') {
                                                    __this_04 = &TypeInfo_Vector3;
                                                    il2cpp_runtime_helper_023445d0();
                                                    g_data_057a6932 = '\x01';
                                                  }
                                                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                                                    UnityEngine_Transform__set_localScale
                                                              (pUVar9,(UnityEngine_Vector3_o)
                                                                      *(UnityEngine_Vector3_Fields *)
                                                                       (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                                               (MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae4ff = '\x01';
  }
  __this_05 = (UnityEngine_MonoBehaviour_o *)(((UI_TopLeftHUD_o *)__this_04)->fields).kdrAndLabel;
  if (__this_05 == (UnityEngine_MonoBehaviour_o *)0x0) goto UI_BasePanel___ctor;
  pUVar11 = (UnityEngine_RectTransform_o *)
            UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_05,MethodInfo_RectTransform_GetComponent_RectTransform);
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto UI_BasePanel___ctor;
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (*(char *)(lVar6 + 0x11) == '\0') {
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0xb8) == 0)) goto UI_BasePanel___ctor;
    fVar16 = 0.0;
    if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x11) != '\0') goto label_043ed875;
  }
  else {
    if (lVar7 == 0) goto UI_BasePanel___ctor;
label_043ed875:
    fVar16 = 30.0;
  }
  if ((*(long *)(lVar7 + 0xd0) != 0) && (pUVar11 != (UnityEngine_RectTransform_o *)0x0)) {
    if (*(char *)(*(long *)(lVar7 + 0xd0) + 0x11) != '\0') {
      fVar16 = fVar16 + 30.0;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar11,(UnityEngine_Vector2_o)((ulong)(uint)-fVar16 << 0x20),(MethodInfo *)0x0);
    return;
  }
UI_BasePanel___ctor:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  __this_05[1].fields.m_CancellationTokenSource = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_05[1].fields.m_CancellationTokenSource,__this_00);
  pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,pSVar13,0x7fffffff,(MethodInfo *)0x0);
  __this_05[2].monitor = __this_01;
  il2cpp_runtime_helper_022b4080(&__this_05[2].monitor,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  __this_05[2].fields.m_CachedPtr = (intptr_t)__this_02;
  il2cpp_runtime_helper_022b4080(&__this_05[2].fields);
  UnityEngine_MonoBehaviour___ctor(__this_05,(MethodInfo *)0x0);
  return;
}


// UI.TopLeftHUD$$ApplySettings
// il2cpp: void UI_TopLeftHUD__ApplySettings (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x43ed7d0

void UI_TopLeftHUD__ApplySettings(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  long lVar1;
  long lVar2;
  System_Threading_CancellationTokenSource_o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  float fVar3;
  
  if (g_data_057ae4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae4ff = '\x01';
  }
  __this_04 = (UnityEngine_MonoBehaviour_o *)(__this->fields).kdrAndLabel;
  if (__this_04 == (UnityEngine_MonoBehaviour_o *)0x0) goto UI_BasePanel___ctor;
  __this_03 = (UnityEngine_RectTransform_o *)
              UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_04,MethodInfo_RectTransform_GetComponent_RectTransform)
  ;
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x58), lVar1 == 0)) goto UI_BasePanel___ctor;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (*(char *)(lVar1 + 0x11) == '\0') {
    if ((lVar2 == 0) || (*(long *)(lVar2 + 0xb8) == 0)) goto UI_BasePanel___ctor;
    fVar3 = 0.0;
    if (*(char *)(*(long *)(lVar2 + 0xb8) + 0x11) != '\0') goto label_043ed875;
  }
  else {
    if (lVar2 == 0) goto UI_BasePanel___ctor;
label_043ed875:
    fVar3 = 30.0;
  }
  if ((*(long *)(lVar2 + 0xd0) != 0) && (__this_03 != (UnityEngine_RectTransform_o *)0x0)) {
    if (*(char *)(*(long *)(lVar2 + 0xd0) + 0x11) != '\0') {
      fVar3 = fVar3 + 30.0;
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_03,(UnityEngine_Vector2_o)((ulong)(uint)-fVar3 << 0x20),(MethodInfo *)0x0);
    return;
  }
UI_BasePanel___ctor:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  __this_04[1].fields.m_CancellationTokenSource = __this_00;
  il2cpp_runtime_helper_022b4080(&__this_04[1].fields.m_CancellationTokenSource,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  __this_04[2].monitor = __this_01;
  il2cpp_runtime_helper_022b4080(&__this_04[2].monitor,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  __this_04[2].fields.m_CachedPtr = (intptr_t)__this_02;
  il2cpp_runtime_helper_022b4080(&__this_04[2].fields);
  UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
  return;
}


// UI.TopLeftHUD$$.ctor
// il2cpp: void UI_TopLeftHUD___ctor (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x43ed8c0

void UI_TopLeftHUD___ctor(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  
  if (g_data_057ae02c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae02c = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._currentCategoryPanelName = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_02,MethodInfo_Dictionary_2_System_String_System_Type);
  (__this->fields)._categoryPanelTypes = (System_Collections_Generic_Dictionary_string__Type__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


