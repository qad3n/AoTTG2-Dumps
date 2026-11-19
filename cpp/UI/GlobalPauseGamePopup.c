// Type: UI.GlobalPauseGamePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/GlobalPauseGamePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/GlobalPauseGamePopup.cs
// --------------------------------

// UI.GlobalPauseGamePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_EscapeBehavior (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d21f10

int32_t UI_GlobalPauseGamePopup__get_EscapeBehavior(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.GlobalPauseGamePopup$$get_Title
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_Title (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d21f20

System_String_o * UI_GlobalPauseGamePopup__get_Title(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547dd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalPause");
    Il2CppMethodInitialized_07547dd5 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("InGameMenu","GlobalPause","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.GlobalPauseGamePopup$$get_ThemePanel
// il2cpp: System_String_o* UI_GlobalPauseGamePopup__get_ThemePanel (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d21fc0

System_String_o *
UI_GlobalPauseGamePopup__get_ThemePanel(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547dd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LoadingPanel");
    Il2CppMethodInitialized_07547dd6 = '\x01';
  }
  return "LoadingPanel";
}


// UI.GlobalPauseGamePopup$$get_Width
// il2cpp: float UI_GlobalPauseGamePopup__get_Width (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d21ff0

float UI_GlobalPauseGamePopup__get_Width(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 320.0;
}


// UI.GlobalPauseGamePopup$$get_Height
// il2cpp: float UI_GlobalPauseGamePopup__get_Height (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22000

float UI_GlobalPauseGamePopup__get_Height(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 220.0;
}


// UI.GlobalPauseGamePopup$$get_TopBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_TopBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22010

float UI_GlobalPauseGamePopup__get_TopBarHeight(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_BottomBarHeight
// il2cpp: float UI_GlobalPauseGamePopup__get_BottomBarHeight (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22020

float UI_GlobalPauseGamePopup__get_BottomBarHeight(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.GlobalPauseGamePopup$$get_TitleFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_TitleFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22030

int32_t UI_GlobalPauseGamePopup__get_TitleFontSize(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.GlobalPauseGamePopup$$get_ButtonFontSize
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22040

int32_t UI_GlobalPauseGamePopup__get_ButtonFontSize(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.GlobalPauseGamePopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_VerticalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22050

int32_t UI_GlobalPauseGamePopup__get_VerticalPadding(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22060

int32_t UI_GlobalPauseGamePopup__get_HorizontalPadding(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.GlobalPauseGamePopup$$get_PanelAlignment
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PanelAlignment (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22070

int32_t UI_GlobalPauseGamePopup__get_PanelAlignment(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.GlobalPauseGamePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22080

int32_t UI_GlobalPauseGamePopup__get_PopupAnimationType(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.GlobalPauseGamePopup$$get_AnimationTime
// il2cpp: float UI_GlobalPauseGamePopup__get_AnimationTime (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d22090

float UI_GlobalPauseGamePopup__get_AnimationTime(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.GlobalPauseGamePopup$$Setup
// il2cpp: void UI_GlobalPauseGamePopup__Setup (UI_GlobalPauseGamePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d220a0

void UI_GlobalPauseGamePopup__Setup
               (UI_GlobalPauseGamePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_Transform_o *parent_00;
  int32_t iVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547dd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GlobalPauseGamePopup_Setup_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"UnpausingIn");
    il2cpp_codegen_initialize_runtime_metadata(&"PausedByMaster");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"GlobalPause");
    Il2CppMethodInitialized_07547dd7 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  iVar1 = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                    (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,iVar1,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_02,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_GlobalPauseGamePopup_Setup_b__31_0,
             (MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_01,pSVar2,0.0,__this_02,(MethodInfo *)0x0);
  __this_03 = UI_ElementFactory__CreateDefaultLabel
                        ((__this->fields).SinglePanel,__this_00,"",0,4,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (__this_03,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    targetAddress = &(__this->fields)._label;
    (__this->fields)._label = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = (__this->fields)._label;
    pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    UVar6 = UI_UIManager__GetThemeColor
                      (pSVar2,"DefaultLabel","TextColor","DefaultPanel",
                       (MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,UVar6,(pUVar3->klass->vtable)._23_set_color.method);
      if (*targetAddress != (UnityEngine_UI_Text_o *)0x0) {
        pUVar4 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)*targetAddress,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement)
        ;
        fVar5 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                          (__this,(__this->klass->vtable)._33_GetWidth.method);
        iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
        if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar4,fVar5 - (float)(iVar1 * 2),(pUVar4->klass->vtable)._36_set_preferredWidth.method);
          if (*targetAddress != (UnityEngine_UI_Text_o *)0x0) {
            pUVar4 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)*targetAddress,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
            if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar4,40.0,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
              pSVar2 = UI_UIManager__GetLocale
                                 ("InGameMenu","GlobalPause","UnpausingIn",
                                  "","",(MethodInfo *)0x0);
              (__this->fields)._unpausingText = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._unpausingText);
              pSVar2 = UI_UIManager__GetLocale
                                 ("InGameMenu","GlobalPause","PausedByMaster",
                                  "","",(MethodInfo *)0x0);
              (__this->fields)._pausedText = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._pausedText);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalPauseGamePopup$$SetTimeLeft
// il2cpp: void UI_GlobalPauseGamePopup__SetTimeLeft (UI_GlobalPauseGamePopup_o* __this, float timeLeft, const MethodInfo* method);
// 0x5d22490

void UI_GlobalPauseGamePopup__SetTimeLeft(UI_GlobalPauseGamePopup_o *__this,float timeLeft,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547dd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547dd8 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (0.0 <= timeLeft) {
    pSVar2 = (__this->fields)._unpausingText;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    str1 = Utility_Util__FormatFloat(timeLeft,1,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320(pSVar2,str1,(MethodInfo *)0x0);
  }
  else {
    pSVar2 = (__this->fields)._pausedText;
  }
  if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._75_set_text.methodPtr)(pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method)
  ;
  return;
}


// UI.GlobalPauseGamePopup$$OnButtonClick
// il2cpp: void UI_GlobalPauseGamePopup__OnButtonClick (UI_GlobalPauseGamePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d22550

void UI_GlobalPauseGamePopup__OnButtonClick
               (UI_GlobalPauseGamePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547dd9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$.ctor
// il2cpp: void UI_GlobalPauseGamePopup___ctor (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d225b0

void UI_GlobalPauseGamePopup___ctor(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalPauseGamePopup$$<Setup>b__31_0
// il2cpp: void UI_GlobalPauseGamePopup___Setup_b__31_0 (UI_GlobalPauseGamePopup_o* __this, const MethodInfo* method);
// 0x5d225c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d225ca: cmp byte ptr [rip + 0x1825808], 0
// asm:   0x5d225d1: je 0x5d2260a

void UI_GlobalPauseGamePopup___Setup_b__31_0(UI_GlobalPauseGamePopup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_07547dda = '\x01';
  }
  if (Il2CppMethodInitialized_07547dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    Il2CppMethodInitialized_07547dd9 = '\x01';
    uVar1 = (TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_GameManagers_InGameManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


