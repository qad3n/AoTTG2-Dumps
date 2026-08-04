// Type: UI.GlobalPauseGamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GlobalPauseGamePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs
// --------------------------------

// UI.GlobalPauseGamePopup$$get_Title
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_Title (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0050

System_String_o * UI_GlobalPauseGamePopup__get_Title(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae3d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Game Paused");
    g_data_057ae3d1 = '\x01';
  }
  return "Game Paused";
}


// UI.GlobalPauseGamePopup$$get_ThemePanel
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_ThemePanel (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0080

System_String_o *
UI_GlobalPauseGamePopup__get_ThemePanel(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae3d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadingPanel");
    g_data_057ae3d2 = '\x01';
  }
  return "LoadingPanel";
}


// UI.GlobalPauseGamePopup$$get_Width
// il2cpp: float UI_GlobalPauseGamePopup__get_Width (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c00b0

float UI_GlobalPauseGamePopup__get_Width(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.GlobalPauseGamePopup$$get_Height
// il2cpp: float UI_GlobalPauseGamePopup__get_Height (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c00c0

float UI_GlobalPauseGamePopup__get_Height(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 220.0;
}


// UI.GlobalPauseGamePopup$$get_TopBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_TopBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c00d0

float UI_GlobalPauseGamePopup__get_TopBarHeight(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_BottomBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_BottomBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c00e0

float UI_GlobalPauseGamePopup__get_BottomBarHeight(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_TitleFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_TitleFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c00f0

int32_t UI_GlobalPauseGamePopup__get_TitleFontSize(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.GlobalPauseGamePopup$$get_ButtonFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0100

int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.GlobalPauseGamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_VerticalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0110

int32_t UI_GlobalPauseGamePopup__get_VerticalPadding(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0120

int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_PanelAlignment
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PanelAlignment (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0130

int32_t UI_GlobalPauseGamePopup__get_PanelAlignment(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.GlobalPauseGamePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0140

int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.GlobalPauseGamePopup$$get_AnimationTime
// il2cpp: float UI_GlobalPauseGamePopup__get_AnimationTime (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0150

float UI_GlobalPauseGamePopup__get_AnimationTime(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.GlobalPauseGamePopup$$Setup
// il2cpp: void UI_GlobalPauseGamePopup__Setup (UI_GlobalPauseGamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43c0160

void UI_GlobalPauseGamePopup__Setup
               (UI_GlobalPauseGamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  int32_t fontSize;
  int iVar3;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  
  if (g_data_057ae3d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__27_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae3d3 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar4,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_01,pSVar4,0.0,onClick,(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_UI_Text_o *)(__this->fields).SinglePanel;
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)pUVar5,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar5);
    pUVar2 = (__this->fields)._label;
    pUVar5 = (UnityEngine_UI_Text_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar8 = UI_UIManager__GetThemeColor
                      ((System_String_o *)pUVar5,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (UVar8.fields._0_8_,UVar8.fields._8_8_,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
      pUVar5 = (UnityEngine_UI_Text_o *)0x0;
      if (*ppUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement)
        ;
        fVar7 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                 (__this,(__this->klass->vtable)._33_GetWidth.method);
        iVar3 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
        pUVar5 = (UnityEngine_UI_Text_o *)__this;
        if (pIVar6 != (Il2CppObject *)0x0) {
          (*pIVar6->klass->vtable[0x24].methodPtr)
                    ((ulong)(uint)(fVar7 - (float)(iVar3 * 2)),pIVar6,pIVar6->klass->vtable[0x24].method);
          pUVar5 = *ppUVar1;
          if ((pUVar5 != (UnityEngine_UI_Text_o *)0x0) &&
             (pIVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar5,MethodInfo_LayoutElement_GetComponent_LayoutElement),
             pIVar6 != (Il2CppObject *)0x0)) {
            vtableDispatch = pIVar6->klass->vtable[0x26].methodPtr;
            (*vtableDispatch)
                      (0x42200000,pIVar6,pIVar6->klass->vtable[0x26].method,vtableDispatch);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar5 = *(UnityEngine_UI_Text_o **)&(pUVar5->fields)._useLegacyMeshGeneration_k__BackingField;
  if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar5->klass->vtable)._75_set_text.methodPtr)();
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3d4 = '\x01';
    iVar3 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar3 != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$SetLabel
// il2cpp: void UI_GlobalPauseGamePopup__SetLabel (UI_GlobalPauseGamePopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x43c04a0

void UI_GlobalPauseGamePopup__SetLabel
               (UI_GlobalPauseGamePopup_o *__this,System_String_o *label,MethodInfo *method)

{
  int iVar1;
  UnityEngine_UI_Text_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  
  pUVar2 = (__this->fields)._label;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    vtableDispatch = (pUVar2->klass->vtable)._75_set_text.methodPtr;
    (*vtableDispatch)(pUVar2,label,(pUVar2->klass->vtable)._75_set_text.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$OnButtonClick
// il2cpp: void UI_GlobalPauseGamePopup__OnButtonClick (UI_GlobalPauseGamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43c04d0

void UI_GlobalPauseGamePopup__OnButtonClick
               (UI_GlobalPauseGamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$.ctor
// il2cpp: void UI_GlobalPauseGamePopup___ctor (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0530

void UI_GlobalPauseGamePopup___ctor(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$<Setup>b__27_0
// il2cpp: void UI_GlobalPauseGamePopup___Setup_b__27_0 (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x43c0540

void UI_GlobalPauseGamePopup___Setup_b__27_0(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae3d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae3d5 = '\x01';
  }
  if (g_data_057ae3d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae3d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


