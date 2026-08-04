// Type: UI.MapEditorSettingsGeneralPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsGeneralPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsGeneralPanel.cs
// --------------------------------

// UI.MapEditorSettingsGeneralPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsGeneralPanel__get_DoublePanel (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x4437c50

bool_conflict
UI_MapEditorSettingsGeneralPanel__get_DoublePanel
          (UI_MapEditorSettingsGeneralPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsGeneralPanel$$Setup
// il2cpp: void UI_MapEditorSettingsGeneralPanel__Setup (UI_MapEditorSettingsGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4437c60

void UI_MapEditorSettingsGeneralPanel__Setup
               (UI_MapEditorSettingsGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  System_String_o *category;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_BaseSetting_o *pSVar4;
  System_String_o *pSVar5;
  UI_BasePanel_o *__this_00;
  System_String_o *pSVar6;
  UI_MapEditorSettingsGeneralPanel_o *__this_01;
  
  if (g_data_057ae6a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorSettingsPopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"PlacementDistance");
    il2cpp_runtime_helper_023445d0(&"RenderDistance");
    il2cpp_runtime_helper_023445d0(&"CameraMoveSpeed");
    il2cpp_runtime_helper_023445d0(&"SnapMove");
    il2cpp_runtime_helper_023445d0(&"CameraRotateSpeed");
    il2cpp_runtime_helper_023445d0(&"CameraFastMoveSpeed");
    il2cpp_runtime_helper_023445d0(&"SnapScale");
    il2cpp_runtime_helper_023445d0(&"PlaceOnFirstSurface");
    il2cpp_runtime_helper_023445d0(&"CameraSlowMoveSpeed");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"SnapRotate");
    g_data_057ae6a3 = '\x01';
  }
  __this_01 = __this;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = "General";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorSettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorSettingsPopup)) {
      il2cpp_runtime_helper_022b2fd0();
      __this_01 = (UI_MapEditorSettingsGeneralPanel_o *)parent;
    }
    else {
      category = (System_String_o *)parent[1].fields._currentCategoryPanel;
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = (UI_BasePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      __this_01 = (UI_MapEditorSettingsGeneralPanel_o *)__this_00;
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_00,0x18,250.0,20.0,pSVar5,(MethodInfo *)0x0);
      if (lVar2 != 0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x28);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"CameraMoveSpeed","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x30);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"CameraSlowMoveSpeed","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x38);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"CameraFastMoveSpeed","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x40);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"CameraRotateSpeed","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x48);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"RenderDistance","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x50);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"SnapMove","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x58);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"SnapRotate","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x60);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"SnapScale","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x68);
        pSVar5 = UI_UIManager__GetLocale
                           (category,pSVar6,"PlacementDistance","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar3 = (__this->fields).DoublePanelRight;
        pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x70);
        pSVar6 = UI_UIManager__GetLocale
                           (category,pSVar6,"PlaceOnFirstSurface","","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar3,(UI_ElementStyle_o *)__this_00,pSVar4,pSVar6,"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsGeneralPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsGeneralPanel___ctor (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x4438310

void UI_MapEditorSettingsGeneralPanel___ctor(UI_MapEditorSettingsGeneralPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


