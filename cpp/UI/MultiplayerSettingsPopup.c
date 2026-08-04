// Type: UI.MultiplayerSettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerSettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerSettingsPopup.cs
// --------------------------------

// UI.MultiplayerSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerSettingsPopup__get_Title (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440e920

System_String_o *
UI_MultiplayerSettingsPopup__get_Title(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"MultiplayerSettingsPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5e4 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerSettingsPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerSettingsPopup$$get_Width
// il2cpp: float UI_MultiplayerSettingsPopup__get_Width (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440e9c0

float UI_MultiplayerSettingsPopup__get_Width(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.MultiplayerSettingsPopup$$get_Height
// il2cpp: float UI_MultiplayerSettingsPopup__get_Height (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440e9d0

float UI_MultiplayerSettingsPopup__get_Height(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 550.0;
}


// UI.MultiplayerSettingsPopup$$get_DoublePanel
// il2cpp: bool UI_MultiplayerSettingsPopup__get_DoublePanel (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440e9e0

bool_conflict
UI_MultiplayerSettingsPopup__get_DoublePanel(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerSettingsPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerSettingsPopup__get_PanelAlignment (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440e9f0

int32_t UI_MultiplayerSettingsPopup__get_PanelAlignment
                  (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerSettingsPopup$$Setup
// il2cpp: void UI_MultiplayerSettingsPopup__Setup (UI_MultiplayerSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440ea00

void UI_MultiplayerSettingsPopup__Setup
               (UI_MultiplayerSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  Settings_BaseSetting_o *pSVar2;
  UnityEngine_Transform_c *pUVar3;
  code *vtableDispatch;
  undefined8 uVar4;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 extraout_RDX;
  UnityEngine_Transform_o *pUVar9;
  UI_TooltipPopup_o *__this_02;
  
  if (g_data_057ae5e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"LobbyOptions");
    il2cpp_runtime_helper_023445d0(&"Lobby");
    il2cpp_runtime_helper_023445d0(&"AppIdTooltip");
    il2cpp_runtime_helper_023445d0(&"LobbyTooltip");
    il2cpp_runtime_helper_023445d0(&"LobbyCustom");
    il2cpp_runtime_helper_023445d0(&"MultiplayerSettingsPopup");
    il2cpp_runtime_helper_023445d0(&"AppId");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"AppIdCustom");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"AppIdOptions");
    g_data_057ae5e5 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "MultiplayerSettingsPopup";
  pSVar8 = "MainMenu";
  lVar1 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar9,__this_00,pSVar5,0.0,onClick,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    pUVar9 = (__this->fields).SinglePanel;
    pSVar2 = *(Settings_BaseSetting_o **)(lVar1 + 0x20);
    pSVar5 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"Lobby","","",(MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocaleArray(pSVar8,subCategory,"LobbyOptions","",(MethodInfo *)0x0);
    pSVar7 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"LobbyTooltip","","",(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar9,__this_01,pSVar2,pSVar5,pSVar6,pSVar7,30.0,30.0,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).SinglePanel;
    pSVar2 = *(Settings_BaseSetting_o **)(lVar1 + 0x30);
    pSVar5 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"LobbyCustom","","",(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar9,__this_01,pSVar2,pSVar5,"",180.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).SinglePanel;
    pSVar2 = *(Settings_BaseSetting_o **)(lVar1 + 0x28);
    pSVar5 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"AppId","","",(MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocaleArray(pSVar8,subCategory,"AppIdOptions","",(MethodInfo *)0x0);
    pSVar7 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"AppIdTooltip","","",(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar9,__this_01,pSVar2,pSVar5,pSVar6,pSVar7,30.0,30.0,(MethodInfo *)0x0);
    pUVar9 = (__this->fields).SinglePanel;
    pSVar2 = *(Settings_BaseSetting_o **)(lVar1 + 0x38);
    pSVar8 = UI_UIManager__GetLocale
                       (pSVar8,subCategory,"AppIdCustom","","",(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar9,__this_01,pSVar2,pSVar8,"",180.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5e6 = '\x01';
  }
  __this_02 = (UI_TooltipPopup_o *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (__this_02 != (UI_TooltipPopup_o *)0x0) {
    (*(__this_02->klass->vtable)._16_get_CategoryPanel.methodPtr)
              (__this_02,(__this_02->klass->vtable)._16_get_CategoryPanel.method);
    pUVar3 = pUVar9->klass;
    vtableDispatch = *(code **)&pUVar3[1]._2.thread_static_fields_offset;
    uVar4._0_4_ = pUVar3[1]._2.token;
    uVar4._4_2_ = pUVar3[1]._2.method_count;
    uVar4._6_2_ = pUVar3[1]._2.property_count;
    (*vtableDispatch)(pUVar9,uVar4,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_PromptPopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerSettingsPopup$$OnSaveButtonClick
// il2cpp: void UI_MultiplayerSettingsPopup__OnSaveButtonClick (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440eee0

void UI_MultiplayerSettingsPopup__OnSaveButtonClick(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae5e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5e6 = '\x01';
  }
  __this_00 = (UI_TooltipPopup_o *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (__this_00 != (UI_TooltipPopup_o *)0x0) {
    (*(__this_00->klass->vtable)._16_get_CategoryPanel.methodPtr)
              (__this_00,(__this_00->klass->vtable)._16_get_CategoryPanel.method);
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_PromptPopup___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerSettingsPopup$$.ctor
// il2cpp: void UI_MultiplayerSettingsPopup___ctor (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440ef50

void UI_MultiplayerSettingsPopup___ctor(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerSettingsPopup$$<Setup>b__10_0
// il2cpp: void UI_MultiplayerSettingsPopup___Setup_b__10_0 (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x440ef60

void UI_MultiplayerSettingsPopup___Setup_b__10_0(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  if (g_data_057ae5e6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5e6 = '\x01';
  }
  plVar1 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


