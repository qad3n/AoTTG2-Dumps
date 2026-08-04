// Type: UI.ModLoginPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ModLoginPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.ModLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModLoginPopup__get_Title (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x44087f0

System_String_o * UI_ModLoginPopup__get_Title(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae5b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Mod Login");
    g_data_057ae5b3 = '\x01';
  }
  return "Mod Login";
}


// UI.ModLoginPopup$$get_Width
// il2cpp: float UI_ModLoginPopup__get_Width (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408820

float UI_ModLoginPopup__get_Width(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.ModLoginPopup$$get_Height
// il2cpp: float UI_ModLoginPopup__get_Height (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408830

float UI_ModLoginPopup__get_Height(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.ModLoginPopup$$get_DoublePanel
// il2cpp: bool UI_ModLoginPopup__get_DoublePanel (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408840

bool_conflict UI_ModLoginPopup__get_DoublePanel(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.ModLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModLoginPopup__get_PanelAlignment (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408850

int32_t UI_ModLoginPopup__get_PanelAlignment(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModLoginPopup$$Setup
// il2cpp: void UI_ModLoginPopup__Setup (UI_ModLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4408860

void UI_ModLoginPopup__Setup(UI_ModLoginPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_c *pUVar2;
  code *vtableDispatch;
  undefined8 uVar3;
  int32_t fontSize;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  undefined8 extraout_RDX;
  UnityEngine_Transform_o *parent_00;
  UI_TooltipPopup_o *__this_02;
  
  if (g_data_057ae5b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Username");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae5b4 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  lVar1 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar4,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar4,0.0,onClick,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x60),"Username",
               "",180.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x68),"Password",
               "",180.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5b5 = '\x01';
  }
  __this_02 = (UI_TooltipPopup_o *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (__this_02 != (UI_TooltipPopup_o *)0x0) {
    (*(__this_02->klass->vtable)._16_get_CategoryPanel.methodPtr)
              (__this_02,(__this_02->klass->vtable)._16_get_CategoryPanel.method);
    pUVar2 = parent_00->klass;
    vtableDispatch = *(code **)&pUVar2[1]._2.thread_static_fields_offset;
    uVar3._0_4_ = pUVar2[1]._2.token;
    uVar3._4_2_ = pUVar2[1]._2.method_count;
    uVar3._6_2_ = pUVar2[1]._2.property_count;
    (*vtableDispatch)(parent_00,uVar3,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_PromptPopup___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// UI.ModLoginPopup$$OnSaveButtonClick
// il2cpp: void UI_ModLoginPopup__OnSaveButtonClick (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408ae0

void UI_ModLoginPopup__OnSaveButtonClick(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae5b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5b5 = '\x01';
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


// UI.ModLoginPopup$$.ctor
// il2cpp: void UI_ModLoginPopup___ctor (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408b50

void UI_ModLoginPopup___ctor(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModLoginPopup$$<Setup>b__10_0
// il2cpp: void UI_ModLoginPopup___Setup_b__10_0 (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x4408b60

void UI_ModLoginPopup___Setup_b__10_0(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  
  if (g_data_057ae5b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae5b5 = '\x01';
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
  if (g_data_057ae5b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Filters");
    g_data_057ae5b6 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocaleCommon("Filters",(MethodInfo *)0x0);
  return;
}


