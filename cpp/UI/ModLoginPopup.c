// Type: UI.ModLoginPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/ModLoginPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.ModLoginPopup$$get_Title
// il2cpp: System_String_o* UI_ModLoginPopup__get_Title (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4500

System_String_o * UI_ModLoginPopup__get_Title(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704818 == '\0') {
    il2cpp_init_method_metadata(&"Mod Login");
    DAT_05704818 = '\x01';
  }
  return "Mod Login";
}


// UI.ModLoginPopup$$get_Width
// il2cpp: float UI_ModLoginPopup__get_Width (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4530

float UI_ModLoginPopup__get_Width(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.ModLoginPopup$$get_Height
// il2cpp: float UI_ModLoginPopup__get_Height (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4540

float UI_ModLoginPopup__get_Height(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.ModLoginPopup$$get_DoublePanel
// il2cpp: bool UI_ModLoginPopup__get_DoublePanel (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4550

bool_conflict UI_ModLoginPopup__get_DoublePanel(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.ModLoginPopup$$get_PanelAlignment
// il2cpp: int32_t UI_ModLoginPopup__get_PanelAlignment (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4560

int32_t UI_ModLoginPopup__get_PanelAlignment(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.ModLoginPopup$$Setup
// il2cpp: void UI_ModLoginPopup__Setup (UI_ModLoginPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f4570

void UI_ModLoginPopup__Setup(UI_ModLoginPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_05704819 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Username");
    il2cpp_init_method_metadata(&"Password");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"");
    DAT_05704819 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  lVar1 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar2,0.0,onClick,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x58),
               "Username","",180.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x60),
               "Password","",180.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModLoginPopup$$OnSaveButtonClick
// il2cpp: void UI_ModLoginPopup__OnSaveButtonClick (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f47f0

void UI_ModLoginPopup__OnSaveButtonClick(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_0570481a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570481a = '\x01';
  }
  plVar1 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.ModLoginPopup$$.ctor
// il2cpp: void UI_ModLoginPopup___ctor (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4860

void UI_ModLoginPopup___ctor(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ModLoginPopup$$<Setup>b__10_0
// il2cpp: void UI_ModLoginPopup___Setup_b__10_0 (UI_ModLoginPopup_o* __this, const MethodInfo* method);
// 0x40f4870

void UI_ModLoginPopup__<Setup>b__10_0(UI_ModLoginPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_0570481a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570481a = '\x01';
  }
  plVar1 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


