// Type: UI.GlobalPauseGamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/GlobalPauseGamePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.GlobalPauseGamePopup$$get_Title
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_Title (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adf60

System_String_o *
UI_GlobalPauseGamePopup__get_Title(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  if (DAT_05704640 == '\0') {
    il2cpp_init_method_metadata(&"Game Paused");
    DAT_05704640 = '\x01';
  }
  return "Game Paused";
}


// UI.GlobalPauseGamePopup$$get_ThemePanel
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_ThemePanel (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adf90

System_String_o *
UI_GlobalPauseGamePopup__get_ThemePanel(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  if (DAT_05704641 == '\0') {
    il2cpp_init_method_metadata(&"LoadingPanel");
    DAT_05704641 = '\x01';
  }
  return "LoadingPanel";
}


// UI.GlobalPauseGamePopup$$get_Width
// il2cpp: float UI_GlobalPauseGamePopup__get_Width (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adfc0

float UI_GlobalPauseGamePopup__get_Width(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.GlobalPauseGamePopup$$get_Height
// il2cpp: float UI_GlobalPauseGamePopup__get_Height (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adfd0

float UI_GlobalPauseGamePopup__get_Height(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 220.0;
}


// UI.GlobalPauseGamePopup$$get_TopBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_TopBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adfe0

float UI_GlobalPauseGamePopup__get_TopBarHeight
                (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_BottomBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_BottomBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40adff0

float UI_GlobalPauseGamePopup__get_BottomBarHeight
                (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_TitleFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_TitleFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae000

int32_t UI_GlobalPauseGamePopup__get_TitleFontSize
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.GlobalPauseGamePopup$$get_ButtonFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae010

int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.GlobalPauseGamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_VerticalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae020

int32_t UI_GlobalPauseGamePopup__get_VerticalPadding
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae030

int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_PanelAlignment
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PanelAlignment (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae040

int32_t UI_GlobalPauseGamePopup__get_PanelAlignment
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.GlobalPauseGamePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae050

int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType
                  (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.GlobalPauseGamePopup$$get_AnimationTime
// il2cpp: float UI_GlobalPauseGamePopup__get_AnimationTime (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae060

float UI_GlobalPauseGamePopup__get_AnimationTime
                (UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.GlobalPauseGamePopup$$Setup
// il2cpp: void UI_GlobalPauseGamePopup__Setup (UI_GlobalPauseGamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ae070

void UI_GlobalPauseGamePopup__Setup
               (UI_GlobalPauseGamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  UnityEngine_Transform_o *parent_00;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  int iVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_Text_o *pUVar4;
  Il2CppObject *pIVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  if (DAT_05704642 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"DefaultLabel");
    il2cpp_init_method_metadata(&"");
    DAT_05704642 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_01,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  __this_02 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._label;
    (__this->fields)._label = pUVar4;
    il2cpp_runtime_glue(ppUVar1,pUVar4);
    pUVar4 = (__this->fields)._label;
    pSVar3 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar7 = UI_UIManager__GetThemeColor
                      (pSVar3,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                (UVar7.fields._0_8_,UVar7.fields._8_8_,pUVar4,
                 (pUVar4->klass->vtable)._23_set_color.method);
      if (*ppUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        pIVar5 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
        fVar6 = (float)(*(__this->klass->vtable)._33_GetWidth.methodPtr)
                                 (__this,(__this->klass->vtable)._33_GetWidth.method);
        iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
        if (pIVar5 != (Il2CppObject *)0x0) {
          (*pIVar5->klass->vtable[0x24].methodPtr)
                    ((ulong)(uint)(fVar6 - (float)(iVar2 * 2)),pIVar5,
                     pIVar5->klass->vtable[0x24].method);
          if (*ppUVar1 != (UnityEngine_UI_Text_o *)0x0) {
            pIVar5 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_LayoutElement_GetComponent_LayoutElement);
            if (pIVar5 != (Il2CppObject *)0x0) {
              vtable_dispatch = pIVar5->klass->vtable[0x26].methodPtr;
              (*vtable_dispatch)
                        (0x42200000,pIVar5,pIVar5->klass->vtable[0x26].method,vtable_dispatch)
              ;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalPauseGamePopup$$SetLabel
// il2cpp: void UI_GlobalPauseGamePopup__SetLabel (UI_GlobalPauseGamePopup_o* __this, System_String_o* label, const MethodInfo* method);
// 0x40ae3b0

void UI_GlobalPauseGamePopup__SetLabel
               (UI_GlobalPauseGamePopup_o *__this,System_String_o *label,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields)._label;
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._75_set_text.methodPtr;
    (*vtable_dispatch)
              (pUVar1,label,(pUVar1->klass->vtable)._75_set_text.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalPauseGamePopup$$OnButtonClick
// il2cpp: void UI_GlobalPauseGamePopup__OnButtonClick (UI_GlobalPauseGamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40ae3e0

void UI_GlobalPauseGamePopup__OnButtonClick
               (UI_GlobalPauseGamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704643 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05704643 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$.ctor
// il2cpp: void UI_GlobalPauseGamePopup___ctor (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae440

void UI_GlobalPauseGamePopup___ctor(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$<Setup>b__27_0
// il2cpp: void UI_GlobalPauseGamePopup___Setup_b__27_0 (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x40ae450

void UI_GlobalPauseGamePopup__<Setup>b__27_0(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704644 == '\0') {
    il2cpp_init_method_metadata(&"Quit");
    DAT_05704644 = '\x01';
  }
  if (DAT_05704643 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05704643 = '\x01';
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


