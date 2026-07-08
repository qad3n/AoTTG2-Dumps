// Type: UI.LoadingProgressPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/LoadingProgressPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.LoadingProgressPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_Title (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd250

System_String_o *
UI_LoadingProgressPanel__get_Title(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704782 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Loading");
    DAT_05704782 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LoadingProgressPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_ThemePanel (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd2b0

System_String_o *
UI_LoadingProgressPanel__get_ThemePanel(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  if (DAT_05704783 == '\0') {
    il2cpp_init_method_metadata(&"LoadingPanel");
    DAT_05704783 = '\x01';
  }
  return "LoadingPanel";
}


// UI.LoadingProgressPanel$$get_Width
// il2cpp: float UI_LoadingProgressPanel__get_Width (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd2e0

float UI_LoadingProgressPanel__get_Width(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.LoadingProgressPanel$$get_Height
// il2cpp: float UI_LoadingProgressPanel__get_Height (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd2f0

float UI_LoadingProgressPanel__get_Height(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 180.0;
}


// UI.LoadingProgressPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_TopBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd300

float UI_LoadingProgressPanel__get_TopBarHeight
                (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.LoadingProgressPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_BottomBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd310

float UI_LoadingProgressPanel__get_BottomBarHeight
                (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.LoadingProgressPanel$$get_TitleFontSize
// il2cpp: int32_t UI_LoadingProgressPanel__get_TitleFontSize (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd320

int32_t UI_LoadingProgressPanel__get_TitleFontSize
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.LoadingProgressPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_LoadingProgressPanel__get_ButtonFontSize (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd330

int32_t UI_LoadingProgressPanel__get_ButtonFontSize
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.LoadingProgressPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LoadingProgressPanel__get_VerticalPadding (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd340

int32_t UI_LoadingProgressPanel__get_VerticalPadding
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.LoadingProgressPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_LoadingProgressPanel__get_HorizontalPadding (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd350

int32_t UI_LoadingProgressPanel__get_HorizontalPadding
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.LoadingProgressPanel$$get_PanelAlignment
// il2cpp: int32_t UI_LoadingProgressPanel__get_PanelAlignment (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd360

int32_t UI_LoadingProgressPanel__get_PanelAlignment
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.LoadingProgressPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingProgressPanel__get_PopupAnimationType (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd370

int32_t UI_LoadingProgressPanel__get_PopupAnimationType
                  (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingProgressPanel$$get_AnimationTime
// il2cpp: float UI_LoadingProgressPanel__get_AnimationTime (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd380

float UI_LoadingProgressPanel__get_AnimationTime
                (UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingProgressPanel$$Setup
// il2cpp: void UI_LoadingProgressPanel__Setup (UI_LoadingProgressPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40dd390

void UI_LoadingProgressPanel__Setup
               (UI_LoadingProgressPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **ppUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *pUVar3;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Slider_o *pUVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Color_o UVar8;
  
  if (DAT_05704784 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"TextColor");
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"ProgressBarFillColor");
    il2cpp_init_method_metadata(&"ProgressBar");
    il2cpp_init_method_metadata(&"Background");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"Fill Area/Fill");
    il2cpp_init_method_metadata(&"Prefabs/InGame/LoadingSlider");
    il2cpp_init_method_metadata(&"Value");
    il2cpp_init_method_metadata(&"Slider");
    il2cpp_init_method_metadata(&"ProgressBarBackgroundColor");
    il2cpp_init_method_metadata(&"DefaultLabel");
    DAT_05704784 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,0x18,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar3 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar3,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar4 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar4,pUVar3,pSVar2,0.0,onClick,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/InGame/LoadingSlider",(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar4 = UnityEngine_Transform__Find(pUVar4,"Value",(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = (UnityEngine_UI_Text_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar4,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._label = pUVar5;
        il2cpp_runtime_glue(&(__this->fields)._label);
        pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pUVar4 = UnityEngine_Transform__Find(pUVar4,"Slider",(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            pUVar6 = (UnityEngine_UI_Slider_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar4,MethodInfo_Slider_GetComponent_Slider);
            ppUVar1 = &(__this->fields)._slider;
            (__this->fields)._slider = pUVar6;
            il2cpp_runtime_glue(ppUVar1,pUVar6);
            pUVar6 = (__this->fields)._slider;
            if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
              pIVar7 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
              if (pIVar7 != (Il2CppObject *)0x0) {
                (*pIVar7->klass->vtable[0x24].methodPtr)
                          ((ulong)(uint)(__this->fields).SliderWidth,pIVar7,
                           pIVar7->klass->vtable[0x24].method);
                pUVar6 = (__this->fields)._slider;
                if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
                  pIVar7 = UnityEngine_Component__GetComponent<object>
                                     ((UnityEngine_Component_o *)pUVar6,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar7 != (Il2CppObject *)0x0) {
                    (*pIVar7->klass->vtable[0x26].methodPtr)
                              ((ulong)(uint)(__this->fields).SliderHeight,pIVar7);
                    pUVar6 = (__this->fields)._slider;
                    if (pUVar6 != (UnityEngine_UI_Slider_o *)0x0) {
                      pUVar4 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                        pUVar4 = UnityEngine_Transform__Find(pUVar4,"Background",(MethodInfo *)0x0);
                        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                          pIVar7 = UnityEngine_Component__GetComponent<object>
                                             ((UnityEngine_Component_o *)pUVar4,MethodInfo_Image_GetComponent_Image);
                          pSVar2 = (System_String_o *)
                                   (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                             (__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                     method);
                          UVar8 = UI_UIManager__GetThemeColor
                                            (pSVar2,"ProgressBar","ProgressBarBackgroundColor","DefaultPanel",
                                             (MethodInfo *)0x0);
                          if (pIVar7 != (Il2CppObject *)0x0) {
                            (*pIVar7->klass->vtable[0x17].methodPtr)
                                      (UVar8.fields._0_8_,UVar8.fields._8_8_,pIVar7);
                            if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                              pUVar4 = UnityEngine_Component__get_transform
                                                 ((UnityEngine_Component_o *)*ppUVar1,
                                                  (MethodInfo *)0x0);
                              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                pUVar4 = UnityEngine_Transform__Find
                                                   (pUVar4,"Fill Area/Fill",(MethodInfo *)0x0);
                                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                                  pIVar7 = UnityEngine_Component__GetComponent<object>
                                                     ((UnityEngine_Component_o *)pUVar4,MethodInfo_Image_GetComponent_Image
                                                     );
                                  pSVar2 = (System_String_o *)
                                           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                     (__this,(__this->klass->vtable).
                                                             _4_get_ThemePanel.method);
                                  UVar8 = UI_UIManager__GetThemeColor
                                                    (pSVar2,"ProgressBar","ProgressBarFillColor","DefaultPanel",
                                                     (MethodInfo *)0x0);
                                  if (pIVar7 != (Il2CppObject *)0x0) {
                                    (*pIVar7->klass->vtable[0x17].methodPtr)
                                              (UVar8.fields._0_8_,UVar8.fields._8_8_,pIVar7);
                                    if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                                      UnityEngine_UI_Selectable__set_interactable
                                                ((UnityEngine_UI_Selectable_o *)*ppUVar1,0,
                                                 (MethodInfo *)0x0);
                                      pUVar5 = (__this->fields)._label;
                                      pSVar2 = (System_String_o *)
                                               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr
                                               )(__this,(__this->klass->vtable)._4_get_ThemePanel.
                                                        method);
                                      UVar8 = UI_UIManager__GetThemeColor
                                                        (pSVar2,"DefaultLabel","TextColor",
                                                         "DefaultPanel",(MethodInfo *)0x0);
                                      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
                                        (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                                                  (UVar8.fields._0_8_,UVar8.fields._8_8_,pUVar5,
                                                   (pUVar5->klass->vtable)._23_set_color.method);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingProgressPanel$$ShowImmediate
// il2cpp: void UI_LoadingProgressPanel__ShowImmediate (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x40dce30

void UI_LoadingProgressPanel__ShowImmediate
               (UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704785 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"%");
    DAT_05704785 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = Utility_Util__FormatFloat(progress * 100.0,0,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    pSVar3 = System_String__Concat(pSVar3,"%",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar2->klass->vtable)._47_set_value.methodPtr)(progress);
        UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingProgressPanel$$Show
// il2cpp: void UI_LoadingProgressPanel__Show (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x40dcf20

void UI_LoadingProgressPanel__Show
               (UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704786 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"%");
    DAT_05704786 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = Utility_Util__FormatFloat(progress * 100.0,0,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)
             (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
    pSVar3 = System_String__Concat(pSVar3,"%",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar2->klass->vtable)._47_set_value.methodPtr)(progress);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LoadingProgressPanel$$OnButtonClick
// il2cpp: void UI_LoadingProgressPanel__OnButtonClick (UI_LoadingProgressPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40dd8d0

void UI_LoadingProgressPanel__OnButtonClick
               (UI_LoadingProgressPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704787 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05704787 = '\x01';
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


// UI.LoadingProgressPanel$$.ctor
// il2cpp: void UI_LoadingProgressPanel___ctor (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd930

void UI_LoadingProgressPanel___ctor(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  (__this->fields).SliderWidth = 200.0;
  (__this->fields).SliderHeight = 30.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$<Setup>b__30_0
// il2cpp: void UI_LoadingProgressPanel___Setup_b__30_0 (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x40dd950

void UI_LoadingProgressPanel__<Setup>b__30_0(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704788 == '\0') {
    il2cpp_init_method_metadata(&"Quit");
    DAT_05704788 = '\x01';
  }
  if (DAT_05704787 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_05704787 = '\x01';
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


