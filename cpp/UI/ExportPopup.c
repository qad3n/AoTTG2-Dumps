// Type: UI.ExportPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ExportPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/ExportPopup.cs
// --------------------------------

// UI.ExportPopup$$get_Title
// il2cpp: System_String_o* UI_ExportPopup__get_Title (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x1821c1eb0

System_String_o * UI_ExportPopup__get_Title(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_184346efd = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Export",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.ExportPopup$$get_Width
// il2cpp: float UI_ExportPopup__get_Width (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x18210fb90

float
UI_ExportPopup__get_Width(UI_ExportPopup_o* __this, MethodInfo* method)

{
  return 500.0;
}


// UI.ExportPopup$$get_Height
// il2cpp: float UI_ExportPopup__get_Height (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x1821c1ea0

float
UI_ExportPopup__get_Height(UI_ExportPopup_o* __this, MethodInfo* method)

{
  return 585.0;
}


// UI.ExportPopup$$get_VerticalPadding
// il2cpp: int32_t UI_ExportPopup__get_VerticalPadding (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_ExportPopup__get_VerticalPadding(UI_ExportPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.ExportPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_ExportPopup__get_HorizontalPadding (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_ExportPopup__get_HorizontalPadding(UI_ExportPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.ExportPopup$$Setup
// il2cpp: void UI_ExportPopup__Setup (UI_ExportPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c12a0

void UI_ExportPopup__Setup(UI_ExportPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184346efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ExportPopup_Setup_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Done");
    Il2CppMethodInitialized_184346efe = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Done",(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_ExportPopup_Setup_b__15_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
  return;
}


// UI.ExportPopup$$Show
// il2cpp: void UI_ExportPopup__Show (UI_ExportPopup_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1821c13f0

void UI_ExportPopup__Show(UI_ExportPopup_o *__this,System_String_o *value,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Settings_StringSetting_o *__this_00;
  bool bVar2;
  int32_t fontSize;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_01;
  
  if (Il2CppMethodInitialized_184346eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346eff = '\x01';
  }
  pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._element;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._element;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
      }
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._versionElement;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pUVar1 = (UnityEngine_Object_o *)(__this->fields)._versionElement;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
      }
      UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                           (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
      themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,themePanel,(MethodInfo *)0x0);
      __this_00 = (__this->fields).ExportSetting;
      if (__this_00 == (Settings_StringSetting_o *)0x0) goto label_1821c1654;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      pUVar3 = UI_ElementFactory__CreateInputSetting
                         ((__this->fields).SinglePanel,__this_01,
                          (Settings_BaseSetting_o *)(__this->fields).ExportSetting,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",
                          460.0,435.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                          (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                          (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._element = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._element,pUVar3);
    }
    return;
  }
label_1821c1654:
  ThrowNullReferenceException();
}


// UI.ExportPopup$$Show
// il2cpp: void UI_ExportPopup__Show (UI_ExportPopup_o* __this, Map_MapScript_o* mapScript, const MethodInfo* method);
// 0x1821c1660

void UI_ExportPopup__Show_21c1660(UI_ExportPopup_o *__this,Map_MapScript_o *mapScript,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  UnityEngine_Transform_o *parent;
  bool bVar3;
  int32_t fontSize;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_String_array *options;
  UnityEngine_Events_UnityAction_o *__this_01;
  UI_MultiSelectDropdownElement_o *__this_02;
  Map_MapScript_o *__this_03;
  UI_InputSettingElement_o *pUVar6;
  
  if (Il2CppMethodInitialized_184346f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ExportPopup_UpdateMapExport);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Version");
    Il2CppMethodInitialized_184346f00 = '\x01';
  }
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._element;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._element;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._versionElement;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (UnityEngine_Object_o *)(__this->fields)._versionElement;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                         (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,fontSize,80.0,20.0,pSVar5,(MethodInfo *)0x0);
    if (mapScript != (Map_MapScript_o *)0x0) {
      pSVar5 = (*(mapScript->klass->vtable)._4_Serialize.methodPtr)
                         (mapScript,(mapScript->klass->vtable)._4_Serialize.method);
      (__this->fields)._mapExportSource = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._mapExportSource,pSVar5);
      pSVar2 = (__this->fields)._version;
      if (pSVar2 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)"1.1",
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        parent = (__this->fields).SinglePanel;
        pSVar2 = (__this->fields)._version;
        if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
        }
        options = Map_MapVersionConverter__get_SupportedVersions((MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_ExportPopup_UpdateMapExport,(MethodInfo *)0x0);
        pUVar4 = UI_ElementFactory__CreateDropdownSetting
                           (parent,__this_00,(Settings_BaseSetting_o *)pSVar2,"Version",options,
                            "",140.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,
                            (System_Int32_array *)0x0,(MethodInfo *)0x0);
        (__this->fields)._versionElement = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._versionElement,pUVar4);
        pUVar4 = (__this->fields)._versionElement;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_02 = (UI_MultiSelectDropdownElement_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  (pUVar4,(MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_DropdownSettingElement
                                  ), __this_02 != (UI_MultiSelectDropdownElement_o *)0x0)) {
          UI_MultiSelectDropdownElement__FixScale(__this_02,(MethodInfo *)0x0);
          pUVar4 = UI_ElementFactory__CreateInputSetting
                             ((__this->fields).SinglePanel,__this_00,
                              (Settings_BaseSetting_o *)(__this->fields).ExportSetting,
                              (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),""
                              ,460.0,375.0,true,(UnityEngine_Events_UnityAction_o *)0x0,
                              (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                              (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          (__this->fields)._element = pUVar4;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._element,pUVar4);
          if (Il2CppMethodInitialized_184346f01 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
            il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
            il2cpp_codegen_initialize_runtime_metadata(&"1.1");
            Il2CppMethodInitialized_184346f01 = '\x01';
          }
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
          Map_MapScript___ctor(__this_03,(MethodInfo *)0x0);
          if (__this_03 != (Map_MapScript_o *)0x0) {
            (*(__this_03->klass->vtable)._5_Deserialize.methodPtr)
                      (__this_03,(__this->fields)._mapExportSource,
                       (__this_03->klass->vtable)._5_Deserialize.method);
            pSVar2 = (__this->fields)._version;
            if (pSVar2 != (Settings_StringSetting_o *)0x0) {
              bVar3 = System_String__op_Inequality
                                ((pSVar2->fields)._value,"1.1",(MethodInfo *)0x0);
              if (bVar3) {
                pSVar2 = (__this->fields)._version;
                if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1821c1ba1;
                pSVar5 = (pSVar2->fields)._value;
                if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
                }
                Map_MapVersionConverter__Downgrade(__this_03,pSVar5,(MethodInfo *)0x0);
              }
              pSVar2 = (__this->fields).ExportSetting;
              pSVar5 = (*(__this_03->klass->vtable)._4_Serialize.methodPtr)
                                 (__this_03,(__this_03->klass->vtable)._4_Serialize.method);
              if (pSVar2 != (Settings_StringSetting_o *)0x0) {
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar5,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                pUVar4 = (__this->fields)._element;
                if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
                   (pUVar6 = UnityEngine_GameObject__GetComponent_object_
                                       (pUVar4,(MethodInfo_6F5650 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement
                                       ), pUVar6 != (UI_InputSettingElement_o *)0x0)) {
                  (*(pUVar6->klass->vtable)._6_SyncElement.methodPtr)
                            (pUVar6,(pUVar6->klass->vtable)._6_SyncElement.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_1821c1ba1:
  ThrowNullReferenceException();
}


// UI.ExportPopup$$UpdateMapExport
// il2cpp: void UI_ExportPopup__UpdateMapExport (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x1821c1c40

void UI_ExportPopup__UpdateMapExport(UI_ExportPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  Map_MapScript_o *__this_01;
  System_String_o *pSVar3;
  UI_InputSettingElement_o *pUVar4;
  
  if (Il2CppMethodInitialized_184346f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapVersionConverter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_184346f01 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Map_MapScript_o *)0x0) {
    (*(__this_01->klass->vtable)._5_Deserialize.methodPtr)
              (__this_01,(__this->fields)._mapExportSource,(__this_01->klass->vtable)._5_Deserialize.method);
    pSVar1 = (__this->fields)._version;
    if (pSVar1 != (Settings_StringSetting_o *)0x0) {
      bVar2 = System_String__op_Inequality((pSVar1->fields)._value,"1.1",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (__this->fields)._version;
        if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1821c1db6;
        pSVar3 = (pSVar1->fields)._value;
        if ((TypeInfo_Map_MapVersionConverter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapVersionConverter);
        }
        Map_MapVersionConverter__Downgrade(__this_01,pSVar3,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields).ExportSetting;
      pSVar3 = (*(__this_01->klass->vtable)._4_Serialize.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._4_Serialize.method);
      if (pSVar1 != (Settings_StringSetting_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar3,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        __this_00 = (__this->fields)._element;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pUVar4 = UnityEngine_GameObject__GetComponent_object_
                             (__this_00,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_InputSettingElement);
          if (pUVar4 != (UI_InputSettingElement_o *)0x0) {
            (*(pUVar4->klass->vtable)._6_SyncElement.methodPtr)
                      (pUVar4,(pUVar4->klass->vtable)._6_SyncElement.method);
            return;
          }
        }
      }
    }
  }
label_1821c1db6:
  ThrowNullReferenceException();
}


// UI.ExportPopup$$OnButtonClick
// il2cpp: void UI_ExportPopup__OnButtonClick (UI_ExportPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c1240

void UI_ExportPopup__OnButtonClick(UI_ExportPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Done");
    Il2CppMethodInitialized_184346f02 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Done",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.ExportPopup$$.ctor
// il2cpp: void UI_ExportPopup___ctor (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x1821c1dc0

void UI_ExportPopup___ctor(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"1.1");
    Il2CppMethodInitialized_184346f03 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"1.1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._version = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._version,pSVar1);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).ExportSetting = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ExportSetting,pSVar1);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ExportPopup$$<Setup>b__15_0
// il2cpp: void UI_ExportPopup___Setup_b__15_0 (UI_ExportPopup_o* __this, const MethodInfo* method);
// 0x1821c1bb0

void UI_ExportPopup___Setup_b__15_0(UI_ExportPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Done");
    Il2CppMethodInitialized_184346f04 = '\x01';
  }
  a = "Done";
  if (Il2CppMethodInitialized_184346f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Done");
    Il2CppMethodInitialized_184346f02 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Done",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


