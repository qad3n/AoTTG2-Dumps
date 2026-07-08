// Type: UI.MultiplayerSettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerSettingsPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerSettingsPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerSettingsPopup__get_Title (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fa5e0

System_String_o *
UI_MultiplayerSettingsPopup__get_Title(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704849 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"MultiplayerSettingsPopup");
    il2cpp_init_method_metadata(&"");
    DAT_05704849 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerSettingsPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerSettingsPopup$$get_Width
// il2cpp: float UI_MultiplayerSettingsPopup__get_Width (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fa680

float UI_MultiplayerSettingsPopup__get_Width
                (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 480.0;
}


// UI.MultiplayerSettingsPopup$$get_Height
// il2cpp: float UI_MultiplayerSettingsPopup__get_Height (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fa690

float UI_MultiplayerSettingsPopup__get_Height
                (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 550.0;
}


// UI.MultiplayerSettingsPopup$$get_DoublePanel
// il2cpp: bool UI_MultiplayerSettingsPopup__get_DoublePanel (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fa6a0

bool_conflict
UI_MultiplayerSettingsPopup__get_DoublePanel
          (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerSettingsPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerSettingsPopup__get_PanelAlignment (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fa6b0

int32_t UI_MultiplayerSettingsPopup__get_PanelAlignment
                  (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerSettingsPopup$$Setup
// il2cpp: void UI_MultiplayerSettingsPopup__Setup (UI_MultiplayerSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fa6c0

void UI_MultiplayerSettingsPopup__Setup
               (UI_MultiplayerSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *pUVar2;
  Settings_BaseSetting_o *pSVar3;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  System_String_array *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  
  if (DAT_0570484a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"LobbyOptions");
    il2cpp_init_method_metadata(&"Lobby");
    il2cpp_init_method_metadata(&"AppIdTooltip");
    il2cpp_init_method_metadata(&"LobbyTooltip");
    il2cpp_init_method_metadata(&"LobbyCustom");
    il2cpp_init_method_metadata(&"MultiplayerSettingsPopup");
    il2cpp_init_method_metadata(&"AppId");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"AppIdCustom");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"AppIdOptions");
    DAT_0570484a = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "MultiplayerSettingsPopup";
  pSVar7 = "MainMenu";
  lVar1 = **(long **)(TypeInfo_SettingsManager + 0xb8);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,160.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar4,0.0,onClick,(MethodInfo *)0x0);
  if (lVar1 != 0) {
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x20);
    pSVar4 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"Lobby","","",(MethodInfo *)0x0)
    ;
    pSVar5 = UI_UIManager__GetLocaleArray
                       (pSVar7,subCategory,"LobbyOptions","",(MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"LobbyTooltip","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar2,__this_01,pSVar3,pSVar4,pSVar5,pSVar6,30.0,30.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x30);
    pSVar4 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"LobbyCustom","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateInputSetting
              (pUVar2,__this_01,pSVar3,pSVar4,"",180.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
               (MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x28);
    pSVar4 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"AppId","","",(MethodInfo *)0x0)
    ;
    pSVar5 = UI_UIManager__GetLocaleArray
                       (pSVar7,subCategory,"AppIdOptions","",(MethodInfo *)0x0);
    pSVar6 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"AppIdTooltip","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateToggleGroupSetting
              (pUVar2,__this_01,pSVar3,pSVar4,pSVar5,pSVar6,30.0,30.0,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).SinglePanel;
    pSVar3 = *(Settings_BaseSetting_o **)(lVar1 + 0x38);
    pSVar7 = UI_UIManager__GetLocale
                       (pSVar7,subCategory,"AppIdCustom","","",(MethodInfo *)0x0)
    ;
    UI_ElementFactory__CreateInputSetting
              (pUVar2,__this_01,pSVar3,pSVar7,"",180.0,40.0,0,
               (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerSettingsPopup$$OnSaveButtonClick
// il2cpp: void UI_MultiplayerSettingsPopup__OnSaveButtonClick (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40faba0

void UI_MultiplayerSettingsPopup__OnSaveButtonClick
               (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_0570484b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570484b = '\x01';
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


// UI.MultiplayerSettingsPopup$$.ctor
// il2cpp: void UI_MultiplayerSettingsPopup___ctor (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fac10

void UI_MultiplayerSettingsPopup___ctor(UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerSettingsPopup$$<Setup>b__10_0
// il2cpp: void UI_MultiplayerSettingsPopup___Setup_b__10_0 (UI_MultiplayerSettingsPopup_o* __this, const MethodInfo* method);
// 0x40fac20

void UI_MultiplayerSettingsPopup__<Setup>b__10_0
               (UI_MultiplayerSettingsPopup_o *__this,MethodInfo *method)

{
  long *plVar1;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_0570484b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570484b = '\x01';
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


