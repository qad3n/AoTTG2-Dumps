// Type: UI.LoadingProgressPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LoadingProgressPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// --------------------------------

// UI.LoadingProgressPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_Title (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efc70

System_String_o * UI_LoadingProgressPanel__get_Title(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae513 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Loading");
    g_data_057ae513 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LoadingProgressPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_ThemePanel (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efcd0

System_String_o *
UI_LoadingProgressPanel__get_ThemePanel(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae514 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LoadingPanel");
    g_data_057ae514 = '\x01';
  }
  return "LoadingPanel";
}


// UI.LoadingProgressPanel$$get_Width
// il2cpp: float UI_LoadingProgressPanel__get_Width (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd00

float UI_LoadingProgressPanel__get_Width(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.LoadingProgressPanel$$get_Height
// il2cpp: float UI_LoadingProgressPanel__get_Height (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd10

float UI_LoadingProgressPanel__get_Height(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 180.0;
}


// UI.LoadingProgressPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_TopBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd20

float UI_LoadingProgressPanel__get_TopBarHeight(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.LoadingProgressPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_BottomBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd30

float UI_LoadingProgressPanel__get_BottomBarHeight(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 55.0;
}


// UI.LoadingProgressPanel$$get_TitleFontSize
// il2cpp: int32_t UI_LoadingProgressPanel__get_TitleFontSize (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd40

int32_t UI_LoadingProgressPanel__get_TitleFontSize(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x1a;
}


// UI.LoadingProgressPanel$$get_ButtonFontSize
// il2cpp: int32_t UI_LoadingProgressPanel__get_ButtonFontSize (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd50

int32_t UI_LoadingProgressPanel__get_ButtonFontSize(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x16;
}


// UI.LoadingProgressPanel$$get_VerticalPadding
// il2cpp: int32_t UI_LoadingProgressPanel__get_VerticalPadding (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd60

int32_t UI_LoadingProgressPanel__get_VerticalPadding(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.LoadingProgressPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_LoadingProgressPanel__get_HorizontalPadding (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd70

int32_t UI_LoadingProgressPanel__get_HorizontalPadding(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.LoadingProgressPanel$$get_PanelAlignment
// il2cpp: int32_t UI_LoadingProgressPanel__get_PanelAlignment (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd80

int32_t UI_LoadingProgressPanel__get_PanelAlignment(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.LoadingProgressPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingProgressPanel__get_PopupAnimationType (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efd90

int32_t UI_LoadingProgressPanel__get_PopupAnimationType(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingProgressPanel$$get_AnimationTime
// il2cpp: float UI_LoadingProgressPanel__get_AnimationTime (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43efda0

float UI_LoadingProgressPanel__get_AnimationTime(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingProgressPanel$$Setup
// il2cpp: void UI_LoadingProgressPanel__Setup (UI_LoadingProgressPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43efdb0

void UI_LoadingProgressPanel__Setup
               (UI_LoadingProgressPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Slider_o **ppUVar1;
  int iVar2;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  UnityEngine_UI_Slider_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Color_o UVar9;
  
  if (g_data_057ae515 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Slider_GetComponent_Slider);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__30_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"ProgressBarFillColor");
    il2cpp_runtime_helper_023445d0(&"ProgressBar");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"Fill Area/Fill");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/LoadingSlider");
    il2cpp_runtime_helper_023445d0(&"Value");
    il2cpp_runtime_helper_023445d0(&"Slider");
    il2cpp_runtime_helper_023445d0(&"ProgressBarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DefaultLabel");
    g_data_057ae515 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar5 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar5,pUVar4,pSVar3,0.0,onClick,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndBind
                        ((__this->fields).SinglePanel,"Prefabs/InGame/LoadingSlider",(MethodInfo *)0x0);
  if (((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
      (pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
      pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
     (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Value",(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    pUVar6 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._label = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label);
    pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if ((pUVar5 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Slider",(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar7 = (UnityEngine_UI_Slider_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_Slider_GetComponent_Slider);
      ppUVar1 = &(__this->fields)._slider;
      (__this->fields)._slider = pUVar7;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar7);
      pUVar7 = (__this->fields)._slider;
      if ((pUVar7 != (UnityEngine_UI_Slider_o *)0x0) &&
         (pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement)
         , pIVar8 != (Il2CppObject *)0x0)) {
        (*pIVar8->klass->vtable[0x24].methodPtr)
                  ((ulong)(uint)(__this->fields).SliderWidth,pIVar8,pIVar8->klass->vtable[0x24].method);
        pUVar7 = (__this->fields)._slider;
        if ((pUVar7 != (UnityEngine_UI_Slider_o *)0x0) &&
           (pIVar8 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement), pIVar8 != (Il2CppObject *)0x0
           )) {
          (*pIVar8->klass->vtable[0x26].methodPtr)((ulong)(uint)(__this->fields).SliderHeight,pIVar8);
          pUVar7 = (__this->fields)._slider;
          if ((pUVar7 != (UnityEngine_UI_Slider_o *)0x0) &&
             ((pUVar5 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
              pUVar5 != (UnityEngine_Transform_o *)0x0 &&
              (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0),
              pUVar5 != (UnityEngine_Transform_o *)0x0)))) {
            pIVar8 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar5,MethodInfo_Image_GetComponent_Image);
            pSVar3 = (System_String_o *)
                     (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                               (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            UVar9 = UI_UIManager__GetThemeColor
                              (pSVar3,"ProgressBar","ProgressBarBackgroundColor","DefaultPanel",(MethodInfo *)0x0);
            if (pIVar8 != (Il2CppObject *)0x0) {
              (*pIVar8->klass->vtable[0x17].methodPtr)(UVar9.fields._0_8_,UVar9.fields._8_8_,pIVar8);
              if (((*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) &&
                  (pUVar5 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0),
                  pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
                 (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Fill Area/Fill",(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                pIVar8 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar5,MethodInfo_Image_GetComponent_Image);
                pSVar3 = (System_String_o *)
                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                UVar9 = UI_UIManager__GetThemeColor
                                  (pSVar3,"ProgressBar","ProgressBarFillColor","DefaultPanel",(MethodInfo *)0x0);
                if (pIVar8 != (Il2CppObject *)0x0) {
                  (*pIVar8->klass->vtable[0x17].methodPtr)(UVar9.fields._0_8_,UVar9.fields._8_8_,pIVar8);
                  if (*ppUVar1 != (UnityEngine_UI_Slider_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)*ppUVar1,0,(MethodInfo *)0x0);
                    pUVar6 = (__this->fields)._label;
                    pSVar3 = (System_String_o *)
                             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    UVar9 = UI_UIManager__GetThemeColor
                                      (pSVar3,"DefaultLabel","TextColor","DefaultPanel",(MethodInfo *)0x0);
                    if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
                      (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                                (UVar9.fields._0_8_,UVar9.fields._8_8_,pUVar6,
                                 (pUVar6->klass->vtable)._23_set_color.method);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae518 = '\x01';
    iVar2 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_InGameManager + 0xe4);
  }
  if (iVar2 != 0) {
    GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$ShowImmediate
// il2cpp: void UI_LoadingProgressPanel__ShowImmediate (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x43ef850

void UI_LoadingProgressPanel__ShowImmediate
               (UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  long *plVar3;
  System_String_o *pSVar4;
  UI_BasePopup_o *__this_00;
  Il2CppClass *str0;
  Il2CppObject *__this_01;
  undefined4 uVar5;
  Il2CppObject *__this_02;
  float fVar6;
  
  if (g_data_057ae516 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae516 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (UI_BasePopup_o *)0x0;
  pSVar4 = Utility_Util__FormatFloat(progress * 100.0,0,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    __this_00 = (UI_BasePopup_o *)
                (*(pSVar4->klass->vtable)._3_ToString.methodPtr)
                          (pSVar4,(pSVar4->klass->vtable)._3_ToString.method);
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)__this_00,"%",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar4,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar2 = (__this->fields)._slider;
      __this_00 = (UI_BasePopup_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar2->klass->vtable)._47_set_value.methodPtr)(progress);
        UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  fVar6 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  plVar3 = __this_00[1].monitor;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar4 = Utility_Util__FormatFloat(fVar6 * 100.0,0,(MethodInfo *)0x0);
  if (pSVar4 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar4->klass->vtable)._3_ToString.methodPtr)(pSVar4,(pSVar4->klass->vtable)._3_ToString.method)
    ;
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x5e8))(plVar3,pSVar4,*(undefined8 *)(*plVar3 + 0x5f0));
      plVar3 = (long *)__this_00[1].fields.m_CachedPtr;
      str0 = (Il2CppClass *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x428))(fVar6);
        UI_BasePopup__Show(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar5 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = str0;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,str0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar5;
  return;
}


// UI.LoadingProgressPanel$$Show
// il2cpp: void UI_LoadingProgressPanel__Show (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x43ef940

void UI_LoadingProgressPanel__Show(UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  System_String_o *pSVar3;
  Il2CppClass *str0;
  Il2CppObject *__this_00;
  undefined4 uVar4;
  Il2CppObject *__this_01;
  
  if (g_data_057ae517 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"%");
    g_data_057ae517 = '\x01';
  }
  pUVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str0 = (Il2CppClass *)0x0;
  pSVar3 = Utility_Util__FormatFloat(progress * 100.0,0,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    str0 = (Il2CppClass *)
           (*(pSVar3->klass->vtable)._3_ToString.methodPtr)(pSVar3,(pSVar3->klass->vtable)._3_ToString.method)
    ;
    pSVar3 = System_String__Concat_3ae5ba0((System_String_o *)str0,"%",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar2 = (__this->fields)._slider;
      str0 = (Il2CppClass *)0x0;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        (*(pUVar2->klass->vtable)._47_set_value.methodPtr)(progress);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae511 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
    g_data_057ae511 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
  uVar4 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = str0;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,str0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar4;
  return;
}


// UI.LoadingProgressPanel$$OnButtonClick
// il2cpp: void UI_LoadingProgressPanel__OnButtonClick (UI_LoadingProgressPanel_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43f02f0

void UI_LoadingProgressPanel__OnButtonClick
               (UI_LoadingProgressPanel_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae518 = '\x01';
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


// UI.LoadingProgressPanel$$.ctor
// il2cpp: void UI_LoadingProgressPanel___ctor (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43f0350

void UI_LoadingProgressPanel___ctor(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  (__this->fields).SliderWidth = 200.0;
  (__this->fields).SliderHeight = 30.0;
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$<Setup>b__30_0
// il2cpp: void UI_LoadingProgressPanel___Setup_b__30_0 (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x43f0370

void UI_LoadingProgressPanel___Setup_b__30_0(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae519 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Quit");
    g_data_057ae519 = '\x01';
  }
  if (g_data_057ae518 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    g_data_057ae518 = '\x01';
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


