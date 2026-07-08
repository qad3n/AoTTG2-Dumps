// Type: UI.MapEditorSettingsGeneralPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsGeneralPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsGeneralPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorSettingsGeneralPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsGeneralPanel__get_DoublePanel (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x4122880

bool_conflict
UI_MapEditorSettingsGeneralPanel__get_DoublePanel
          (UI_MapEditorSettingsGeneralPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsGeneralPanel$$Setup
// il2cpp: void UI_MapEditorSettingsGeneralPanel__Setup (UI_MapEditorSettingsGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4122890

void UI_MapEditorSettingsGeneralPanel__Setup
               (UI_MapEditorSettingsGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method
               )

{
  byte bVar1;
  System_String_o *category;
  long lVar2;
  UnityEngine_Transform_o *pUVar3;
  Settings_BaseSetting_o *pSVar4;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  System_String_o *pSVar6;
  
  if (DAT_05704900 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorSettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"PlacementDistance");
    il2cpp_init_method_metadata(&"RenderDistance");
    il2cpp_init_method_metadata(&"CameraMoveSpeed");
    il2cpp_init_method_metadata(&"SnapMove");
    il2cpp_init_method_metadata(&"CameraRotateSpeed");
    il2cpp_init_method_metadata(&"CameraFastMoveSpeed");
    il2cpp_init_method_metadata(&"SnapScale");
    il2cpp_init_method_metadata(&"PlaceOnFirstSurface");
    il2cpp_init_method_metadata(&"CameraSlowMoveSpeed");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"SnapRotate");
    DAT_05704900 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = "General";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorSettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorSettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    category = (System_String_o *)parent[1].fields._currentCategoryPanel;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,250.0,20.0,pSVar5,(MethodInfo *)0x0);
    if (lVar2 != 0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x28);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraMoveSpeed","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x30);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraSlowMoveSpeed","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x38);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraFastMoveSpeed","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x40);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"CameraRotateSpeed","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x48);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"RenderDistance","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x50);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapMove","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x58);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapRotate","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x60);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"SnapScale","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x68);
      pSVar5 = UI_UIManager__GetLocale
                         (category,pSVar6,"PlacementDistance","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_00,pSVar4,pSVar5,"",120.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x70);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar6,"PlaceOnFirstSurface","","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_00,pSVar4,pSVar6,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsGeneralPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsGeneralPanel___ctor (UI_MapEditorSettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x4122f40

void UI_MapEditorSettingsGeneralPanel___ctor
               (UI_MapEditorSettingsGeneralPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


