// Type: UI.MapEditorSettingsGeneralPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsGeneralPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsGeneralPanel.cs
// --------------------------------

// UI.MapEditorSettingsGeneralPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsGeneralPanel__get_DoublePanel (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorSettingsGeneralPanel__get_DoublePanel(UI_MapEditorSettingsGeneralPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorSettingsGeneralPanel$$Setup
// il2cpp: void UI_MapEditorSettingsGeneralPanel__Setup (UI_MapEditorSettingsGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822d1d40

void UI_MapEditorSettingsGeneralPanel__Setup
               (UI_MapEditorSettingsGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  Settings_MapEditorSettings_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_IntSetting_o *setting;
  Settings_BoolSetting_o *setting_00;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_1843475c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"PlacementDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMoveSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"HUDScale");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapMove");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraRotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraFastMoveSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapScale");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaceOnFirstSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraSlowMoveSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapRotate");
    Il2CppMethodInitialized_1843475c5 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = "General";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MapEditorSettingsPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    category = (System_String_o *)(*(uint64_t *)((char *)parent + 0xa8));
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,250.0,20.0,pSVar5,(MethodInfo *)0x0);
    if (pSVar2 != (Settings_MapEditorSettings_o *)0x0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).CameraMoveSpeed;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraMoveSpeed","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).CameraSlowMoveSpeed;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraSlowMoveSpeed","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).CameraFastMoveSpeed;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraFastMoveSpeed","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar2->fields).CameraRotateSpeed;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraRotateSpeed","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      setting = (pSVar2->fields).RenderDistance;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"RenderDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)setting,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = (pSVar2->fields).SnapMove;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapMove","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = (pSVar2->fields).SnapRotate;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapRotate","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = (pSVar2->fields).SnapScale;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapScale","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = (pSVar2->fields).PlacementDistance;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"PlacementDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar5,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      setting_00 = (pSVar2->fields).PlaceOnFirstSurface;
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"PlaceOnFirstSurface","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)setting_00,pSVar5,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = (pSVar2->fields).HUDScale;
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar6,"HUDScale","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",120.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsGeneralPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsGeneralPanel___ctor (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_MapEditorSettingsGeneralPanel___ctor(UI_MapEditorSettingsGeneralPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


