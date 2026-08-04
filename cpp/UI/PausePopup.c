// Type: UI.PausePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PausePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PausePopup.cs
// --------------------------------

// UI.PausePopup$$get_Title
// il2cpp: System_String_o* UI_PausePopup__get_Title (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d78f0

System_String_o * UI_PausePopup__get_Title(UI_PausePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae45c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    il2cpp_runtime_helper_023445d0(&"Pause");
    il2cpp_runtime_helper_023445d0(&"Keybinds.General");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae45c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Keybinds.General","Pause","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.PausePopup$$get_Width
// il2cpp: float UI_PausePopup__get_Width (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7990

float UI_PausePopup__get_Width(UI_PausePopup_o *__this,MethodInfo *method)

{
  return 220.0;
}


// UI.PausePopup$$get_Height
// il2cpp: float UI_PausePopup__get_Height (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d79a0

float UI_PausePopup__get_Height(UI_PausePopup_o *__this,MethodInfo *method)

{
  return 280.0;
}


// UI.PausePopup$$get_VerticalSpacing
// il2cpp: float UI_PausePopup__get_VerticalSpacing (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d79b0

float UI_PausePopup__get_VerticalSpacing(UI_PausePopup_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.PausePopup$$get_VerticalPadding
// il2cpp: int32_t UI_PausePopup__get_VerticalPadding (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d79c0

int32_t UI_PausePopup__get_VerticalPadding(UI_PausePopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PausePopup$$Setup
// il2cpp: void UI_PausePopup__Setup (UI_PausePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d79d0

void UI_PausePopup__Setup(UI_PausePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (g_data_057ae45d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__10_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Game");
    il2cpp_runtime_helper_023445d0(&"Settings");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae45d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocaleCommon("Settings",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDefaultButton(pUVar1,__this_00,pSVar2,160.0,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocaleCommon("Game",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDefaultButton(pUVar1,__this_00,pSVar2,160.0,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$OnButtonClick
// il2cpp: void UI_PausePopup__OnButtonClick (UI_PausePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43d7c70

void UI_PausePopup__OnButtonClick(UI_PausePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_BasePopup_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar3;
  undefined8 extraout_RDX;
  UI_InGameMenu_o *__this_00;
  
  if (g_data_057ae45e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Game");
    il2cpp_runtime_helper_023445d0(&"Settings");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae45e = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_043d7d26;
label_043d7c9b:
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_043d7c9b;
label_043d7d26:
    il2cpp_runtime_helper_02337ed0();
    __this_00 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  }
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043d7e73;
  }
  bVar3 = System_String__op_Equality(name,"Game",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"Settings",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality(name,"Quit",(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
          return;
        }
        return;
      }
      if (__this_00 != (UI_InGameMenu_o *)0x0) {
        UI_InGameMenu__SetPauseMenu(__this_00,0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_00 != (UI_InGameMenu_o *)0x0) {
      pUVar2 = (__this_00->fields)._settingsPopup;
      goto joined_r0x043d7dcd;
    }
  }
  else if (__this_00 != (UI_InGameMenu_o *)0x0) {
    pUVar2 = (__this_00->fields)._createGamePopup;
joined_r0x043d7dcd:
    if (pUVar2 != (UI_BasePopup_o *)0x0) {
      (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d7e73:
  il2cpp_runtime_helper_022b2fd0();
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$.ctor
// il2cpp: void UI_PausePopup___ctor (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7e80

void UI_PausePopup___ctor(UI_PausePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$<Setup>b__10_0
// il2cpp: void UI_PausePopup___Setup_b__10_0 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7e90

void UI_PausePopup___Setup_b__10_0(UI_PausePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae45f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae45f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PausePopup__OnButtonClick(__this,"Quit",in_RDX);
  return;
}


// UI.PausePopup$$<Setup>b__10_1
// il2cpp: void UI_PausePopup___Setup_b__10_1 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7ed0

void UI_PausePopup___Setup_b__10_1(UI_PausePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae460 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae460 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PausePopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.PausePopup$$<Setup>b__10_2
// il2cpp: void UI_PausePopup___Setup_b__10_2 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7f10

void UI_PausePopup___Setup_b__10_2(UI_PausePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae461 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Settings");
    g_data_057ae461 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PausePopup__OnButtonClick(__this,"Settings",in_RDX);
  return;
}


// UI.PausePopup$$<Setup>b__10_3
// il2cpp: void UI_PausePopup___Setup_b__10_3 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x43d7f50

void UI_PausePopup___Setup_b__10_3(UI_PausePopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae462 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Game");
    g_data_057ae462 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PausePopup__OnButtonClick(__this,"Game",in_RDX);
  return;
}


