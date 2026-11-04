// Type: UI.TopLeftHUD
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TopLeftHUD.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/TopLeftHUD.cs
// --------------------------------

// UI.TopLeftHUD$$get_ThemePanel
// il2cpp: System_String_o* UI_TopLeftHUD__get_ThemePanel (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x182283030

System_String_o * UI_TopLeftHUD__get_ThemePanel(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TopLeftHUD");
    Il2CppMethodInitialized_184347394 = '\x01';
  }
  return "TopLeftHUD";
}


// UI.TopLeftHUD$$Setup
// il2cpp: void UI_TopLeftHUD__Setup (UI_TopLeftHUD_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182282920

void UI_TopLeftHUD__Setup(UI_TopLeftHUD_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_UISettings_o *pSVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_Transform_o *pUVar10;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UI_Telemetry_o *pUVar11;
  UI_KDRPanel_o *pUVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_KDRPanel);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Telemetry);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Content/Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Telemetry");
    il2cpp_codegen_initialize_runtime_metadata(&"KDR");
    Il2CppMethodInitialized_184347395 = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_Transform__Find(pUVar6,"Content/Panel",(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18228301c;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
  (__this->fields).panel = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).panel,pUVar7);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(pUVar7,(MethodInfo *)0x0);
  (__this->fields).telemetryCanvas = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).telemetryCanvas,pUVar7);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).telemetryCanvas;
  if (pUVar1 == (UnityEngine_Object_o *)0x0) goto label_18228301c;
  UnityEngine_Object__set_name(pUVar1,"Telemetry",(MethodInfo *)0x0);
  pUVar7 = (__this->fields).telemetryCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  UnityEngine_GameObject__AddComponent_object_
            (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
  pUVar7 = (__this->fields).telemetryCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  UVar9 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_18228301c;
  UnityEngine_RectTransform__set_pivot(pUVar8,UVar9,(MethodInfo *)0x0);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(pUVar7,(MethodInfo *)0x0);
  (__this->fields).kdrCanvas = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).kdrCanvas,pUVar7);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).kdrCanvas;
  if (pUVar1 == (UnityEngine_Object_o *)0x0) goto label_18228301c;
  UnityEngine_Object__set_name(pUVar1,"KDR",(MethodInfo *)0x0);
  pUVar7 = (__this->fields).kdrCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  UnityEngine_GameObject__AddComponent_object_
            (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
  pUVar7 = (__this->fields).kdrCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  UVar9 = UI_ElementFactory__GetAnchorVector(0,(MethodInfo *)0x0);
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_18228301c;
  UnityEngine_RectTransform__set_pivot(pUVar8,UVar9,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).telemetryCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).panel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18228301c;
  UnityEngine_Transform__SetParent(pUVar6,pUVar10,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).kdrCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).panel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_18228301c;
  UnityEngine_Transform__SetParent(pUVar6,pUVar10,(MethodInfo *)0x0);
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,themePanel,(MethodInfo *)0x0);
  (__this->fields)._style = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style,__this_00);
  pUVar7 = (__this->fields).telemetryCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateVerticalGroup(pUVar6,0.0,0,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar7,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_18228301c;
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x4270000043c80000,(MethodInfo *)0x0)
  ;
  pUVar11 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Telemetry);
  (__this->fields)._telemetry = pUVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._telemetry,pUVar11);
  pUVar11 = (__this->fields)._telemetry;
  if (pUVar11 == (UI_Telemetry_o *)0x0) goto label_18228301c;
  UI_Telemetry__Setup(pUVar11,(__this->fields)._style,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).kdrCanvas;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateVerticalGroup(pUVar6,0.0,0,(MethodInfo *)0x0);
  (__this->fields).kdrAndLabel = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).kdrAndLabel,pUVar7);
  UI_ElementFactory__SetAnchor((__this->fields).kdrAndLabel,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).kdrAndLabel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) goto label_18228301c;
  UnityEngine_RectTransform__set_sizeDelta(pUVar8,(UnityEngine_Vector2_o)0x442f000043fa0000,(MethodInfo *)0x0)
  ;
  pUVar7 = (__this->fields).kdrAndLabel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateVerticalGroup(pUVar6,0.0,0,(MethodInfo *)0x0);
  UI_ElementFactory__SetAnchor(pUVar7,0,0,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar12 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_KDRPanel);
  (__this->fields)._kdr = pUVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._kdr,pUVar12);
  pUVar12 = (__this->fields)._kdr;
  if (pUVar12 == (UI_KDRPanel_o *)0x0) goto label_18228301c;
  UI_KDRPanel__Setup(pUVar12,(__this->fields)._style,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347396 = '\x01';
  }
  pUVar7 = (__this->fields).kdrAndLabel;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18228301c;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar2 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).ShowFPS, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_18228301c;
  if ((pSVar3->fields)._value == false) {
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar4 == (Settings_UISettings_o *)0x0) ||
       (pSVar3 = (pSVar4->fields).ShowPing, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_18228301c;
    if ((pSVar3->fields)._value != false) goto label_182282ee3;
    fVar13 = 0.0;
  }
  else {
label_182282ee3:
    fVar13 = 30.0;
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
     (pSVar3 = (pSVar4->fields).ShowGameTime, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != false) {
      fVar13 = fVar13 + 30.0;
    }
    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar8,(UnityEngine_Vector2_o)((ulonglong)(uint)-fVar13 << 0x20),(MethodInfo *)0x0);
      pUVar7 = (__this->fields).kdrCanvas;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbeb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbeb = '\x01';
        }
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_28[0].x = (pUVar5->oneVector).fields.x;
          local_28[0].y = (pUVar5->oneVector).fields.y;
          local_28[0].z = (pUVar5->oneVector).fields.z;
          UnityEngine_Transform__set_localScale(pUVar6,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
          pUVar7 = (__this->fields).telemetryCanvas;
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar6 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433dbeb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433dbeb = '\x01';
            }
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_28[0].x = (pUVar5->oneVector).fields.x;
              local_28[0].y = (pUVar5->oneVector).fields.y;
              local_28[0].z = (pUVar5->oneVector).fields.z;
              UnityEngine_Transform__set_localScale
                        (pUVar6,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_18228301c:
  ThrowNullReferenceException();
}


// UI.TopLeftHUD$$ApplySettings
// il2cpp: void UI_TopLeftHUD__ApplySettings (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x182282810

void UI_TopLeftHUD__ApplySettings(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Settings_GraphicsSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_UISettings_o *pSVar3;
  UnityEngine_RectTransform_o *__this_01;
  float fVar4;
  
  if (Il2CppMethodInitialized_184347396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347396 = '\x01';
  }
  __this_00 = (__this->fields).kdrAndLabel;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_182282919;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this_00,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).ShowFPS, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_182282919;
  if ((pSVar2->fields)._value == false) {
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
    if ((pSVar3 == (Settings_UISettings_o *)0x0) ||
       (pSVar2 = (pSVar3->fields).ShowPing, pSVar2 == (Settings_BoolSetting_o *)0x0)) goto label_182282919;
    if ((pSVar2->fields)._value != false) goto label_1822828cc;
    fVar4 = 0.0;
  }
  else {
label_1822828cc:
    fVar4 = 30.0;
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar2 = (pSVar3->fields).ShowGameTime, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value != false) {
      fVar4 = fVar4 + 30.0;
    }
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (__this_01,(UnityEngine_Vector2_o)((ulonglong)(uint)-fVar4 << 0x20),(MethodInfo *)0x0);
      return;
    }
  }
label_182282919:
  ThrowNullReferenceException();
}


// UI.TopLeftHUD$$.ctor
// il2cpp: void UI_TopLeftHUD___ctor (UI_TopLeftHUD_o* __this, const MethodInfo* method);
// 0x1821bc920

void UI_TopLeftHUD___ctor(UI_TopLeftHUD_o *__this,MethodInfo *method)

{
  UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


