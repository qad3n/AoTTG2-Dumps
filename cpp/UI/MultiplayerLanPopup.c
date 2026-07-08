// Type: UI.MultiplayerLanPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerLanPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerLanPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerLanPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerLanPopup__get_Title (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f5e10

System_String_o *
UI_MultiplayerLanPopup__get_Title(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570481f == '\0') {
    il2cpp_init_method_metadata(&"LAN");
    DAT_0570481f = '\x01';
  }
  return "LAN";
}


// UI.MultiplayerLanPopup$$get_Width
// il2cpp: float UI_MultiplayerLanPopup__get_Width (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f5e40

float UI_MultiplayerLanPopup__get_Width(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 400.0;
}


// UI.MultiplayerLanPopup$$get_Height
// il2cpp: float UI_MultiplayerLanPopup__get_Height (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f5e50

float UI_MultiplayerLanPopup__get_Height(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 370.0;
}


// UI.MultiplayerLanPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerLanPopup__get_PanelAlignment (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f5e60

int32_t UI_MultiplayerLanPopup__get_PanelAlignment
                  (UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerLanPopup$$Setup
// il2cpp: void UI_MultiplayerLanPopup__Setup (UI_MultiplayerLanPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f5e70

void UI_MultiplayerLanPopup__Setup
               (UI_MultiplayerLanPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  System_String_o *pSVar4;
  UnityEngine_Events_UnityAction_o *pUVar5;
  
  if (DAT_05704820 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__8_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__8_1);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Connect");
    il2cpp_init_method_metadata(&"MultiplayerLanPopup");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Password (optional)");
    il2cpp_init_method_metadata(&"IP");
    il2cpp_init_method_metadata(&"Port");
    il2cpp_init_method_metadata(&"");
    DAT_05704820 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "MultiplayerLanPopup";
  pSVar4 = "MainMenu";
  lVar1 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocale
                     (pSVar4,subCategory,"Connect","","",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x40),
               "IP","",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x48),
               "Port","",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              ((__this->fields).SinglePanel,__this_01,*(Settings_BaseSetting_o **)(lVar1 + 0x50),
               "Password (optional)","",200.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerLanPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerLanPopup__OnButtonClick (UI_MultiplayerLanPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f6200

void UI_MultiplayerLanPopup__OnButtonClick
               (UI_MultiplayerLanPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long *plVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704821 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&"Connect");
    il2cpp_init_method_metadata(&"Back");
    DAT_05704821 = '\x01';
    method = extraout_RDX;
  }
  plVar1 = (long *)**(long **)(TypeInfo_SettingsManager + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240),method);
    bVar2 = System_String__op_Equality(name,"Connect",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        (*(__this->klass->vtable)._22_Hide.methodPtr)
                  (__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      return;
    }
    if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) !=
        (Settings_MultiplayerSettings_o *)0x0) {
      Settings_MultiplayerSettings__ConnectLAN
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerLanPopup$$.ctor
// il2cpp: void UI_MultiplayerLanPopup___ctor (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f62e0

void UI_MultiplayerLanPopup___ctor(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_0
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_0 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f62f0

void UI_MultiplayerLanPopup__<Setup>b__8_0(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704822 == '\0') {
    il2cpp_init_method_metadata(&"Connect");
    DAT_05704822 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Connect",in_RDX);
  return;
}


// UI.MultiplayerLanPopup$$<Setup>b__8_1
// il2cpp: void UI_MultiplayerLanPopup___Setup_b__8_1 (UI_MultiplayerLanPopup_o* __this, const MethodInfo* method);
// 0x40f6330

void UI_MultiplayerLanPopup__<Setup>b__8_1(UI_MultiplayerLanPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704823 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704823 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerLanPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


