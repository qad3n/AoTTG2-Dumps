// Type: UI.TooltipButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TooltipButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/TooltipButton.cs
// --------------------------------

// UI.TooltipButton$$Awake
// il2cpp: void UI_TooltipButton__Awake (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x4399db0

void UI_TooltipButton__Awake(UI_TooltipButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *value;
  
  if (g_data_057ae2ea == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponent_Graphic);
    g_data_057ae2ea = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  value = (UnityEngine_UI_Graphic_o *)
          UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Graphic_GetComponent_Graphic);
  UnityEngine_UI_Selectable__set_targetGraphic((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// UI.TooltipButton$$Setup
// il2cpp: void UI_TooltipButton__Setup (UI_TooltipButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x4399e00

void UI_TooltipButton__Setup
               (UI_TooltipButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  System_String_o *panel;
  UnityEngine_Object_o *pUVar4;
  long lVar5;
  UnityEngine_UI_Selectable_c *pUVar6;
  long *plVar7;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  uint extraout_EDX;
  int state;
  UnityEngine_UI_Selectable_o *pUVar9;
  UnityEngine_UI_Button_o *y;
  UnityEngine_UI_Button_o *__this_03;
  float value_00;
  UnityEngine_UI_ColorBlock_o local_70;
  
  if (g_data_057ae2eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae2eb = '\x01';
  }
  pUVar9 = (UnityEngine_UI_Selectable_o *)&(__this->fields).m_OnClick;
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)tooltipMessage;
  il2cpp_runtime_helper_022b4080();
  state = (int)tooltipMessage;
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetThemeColorBlock(&local_70,panel,"DefaultSetting","Icon","DefaultPanel",(MethodInfo *)0x0)
    ;
    value.fields.m_NormalColor.fields.b = local_70.fields.m_NormalColor.fields.b;
    value.fields.m_NormalColor.fields.a = local_70.fields.m_NormalColor.fields.a;
    value.fields.m_NormalColor.fields.r = local_70.fields.m_NormalColor.fields.r;
    value.fields.m_NormalColor.fields.g = local_70.fields.m_NormalColor.fields.g;
    value.fields.m_HighlightedColor.fields.r = local_70.fields.m_HighlightedColor.fields.r;
    value.fields.m_HighlightedColor.fields.g = local_70.fields.m_HighlightedColor.fields.g;
    value.fields.m_HighlightedColor.fields.b = local_70.fields.m_HighlightedColor.fields.b;
    value.fields.m_HighlightedColor.fields.a = local_70.fields.m_HighlightedColor.fields.a;
    value.fields.m_PressedColor.fields.r = local_70.fields.m_PressedColor.fields.r;
    value.fields.m_PressedColor.fields.g = local_70.fields.m_PressedColor.fields.g;
    value.fields.m_PressedColor.fields.b = local_70.fields.m_PressedColor.fields.b;
    value.fields.m_PressedColor.fields.a = local_70.fields.m_PressedColor.fields.a;
    value.fields.m_SelectedColor.fields.r = local_70.fields.m_SelectedColor.fields.r;
    value.fields.m_SelectedColor.fields.g = local_70.fields.m_SelectedColor.fields.g;
    value.fields.m_SelectedColor.fields.b = local_70.fields.m_SelectedColor.fields.b;
    value.fields.m_SelectedColor.fields.a = local_70.fields.m_SelectedColor.fields.a;
    value.fields.m_DisabledColor.fields.r = local_70.fields.m_DisabledColor.fields.r;
    value.fields.m_DisabledColor.fields.g = local_70.fields.m_DisabledColor.fields.g;
    value.fields.m_DisabledColor.fields.b = local_70.fields.m_DisabledColor.fields.b;
    value.fields.m_DisabledColor.fields.a = local_70.fields.m_DisabledColor.fields.a;
    value.fields.m_ColorMultiplier = local_70.fields.m_ColorMultiplier;
    value.fields.m_FadeDuration = local_70.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2ec = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition(pUVar9,state,extraout_EDX & 0xff,(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Object_o *)
           (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  __this_03 = TypeInfo_UIManager;
  if (lVar5 == 0) {
label_0439a0fc:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_UI_Button___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  __this_03 = *(UnityEngine_UI_Button_o **)(lVar5 + 0x28);
  if (1 < state - 1U) {
    if (state != 0) {
      return;
    }
    if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar4 = (UnityEngine_Object_o *)(__this_03->fields).m_SpriteState.fields.m_PressedSprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
      __this_03 = TypeInfo_UIManager;
      if (lVar5 != 0) {
        plVar7 = *(long **)(lVar5 + 0x28);
        __this_03 = (UnityEngine_UI_Button_o *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
          return;
        }
      }
    }
    goto label_0439a0fc;
  }
  if (__this_03 == (UnityEngine_UI_Button_o *)0x0) goto label_0439a0fc;
  pUVar6 = pUVar9[1].klass;
  y = __this_03;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar8 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0)
      ;
      value_00 = (float)(*(((UI_TooltipPopup_c *)__this_03->klass)->vtable)._48_get_MaxFadeAlpha.methodPtr)
                                  (__this_03);
      if (g_data_057ae0e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      y = __this_03;
      __this_01 = (UnityEngine_UI_Button_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
      ;
      if ((__this_01 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this_02 = (UnityEngine_CanvasGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), y = __this_01,
         __this_02 == (UnityEngine_CanvasGroup_o *)0x0)) goto label_0434d2a2;
      UnityEngine_CanvasGroup__set_alpha(__this_02,value_00,(MethodInfo *)0x0);
    }
    pUVar2 = *(UnityEngine_UI_Text_o **)&(__this_03->fields).m_Colors.fields.m_FadeDuration;
    y = (UnityEngine_UI_Button_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pUVar6,(pUVar2->klass->vtable)._75_set_text.method);
      (__this_03->fields).m_SpriteState.fields.m_PressedSprite = (UnityEngine_Sprite_o *)pUVar9;
      il2cpp_runtime_helper_022b4080();
      *(float *)&(__this_03->fields).m_SpriteState.fields.m_SelectedSprite = 40.0;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)__this_03,(MethodInfo *)pUVar9);
      UI_BasePopup__Show((UI_BasePopup_o *)__this_03,(MethodInfo *)pUVar9);
      return;
    }
  }
label_0434d2a2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  pUVar9 = (y->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(y->fields).m_Navigation.fields.m_SelectOnDown;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      (pUVar9->fields).m_Navigation.fields.m_Mode = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar9,(MethodInfo *)0x0);
      return;
    }
    pUVar4 = (UnityEngine_Object_o *)((*ppUVar1)->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar3 = *ppUVar1;
      pUVar9 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0434d36c;
      (*(pUVar3->klass->vtable)._22_unknown.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_unknown.method);
    }
  }
  *ppUVar1 = (UnityEngine_UI_Selectable_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.TooltipButton$$DoStateTransition
// il2cpp: void UI_TooltipButton__DoStateTransition (UI_TooltipButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x4399f80

void UI_TooltipButton__DoStateTransition
               (UI_TooltipButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Selectable_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  long lVar5;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar6;
  long *plVar7;
  bool_conflict bVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UnityEngine_UI_Button_o *y;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_UI_Button_o *__this_04;
  float value;
  
  if (g_data_057ae2ec == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2ec = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant & 0xff,(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Object_o *)
           (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  __this_04 = TypeInfo_UIManager;
  if (lVar5 == 0) {
label_0439a0fc:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_UI_Button___ctor(__this_04,(MethodInfo *)0x0);
    return;
  }
  __this_04 = *(UnityEngine_UI_Button_o **)(lVar5 + 0x28);
  if (1 < state - 1U) {
    if (state != 0) {
      return;
    }
    if (__this_04 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar4 = (UnityEngine_Object_o *)(__this_04->fields).m_SpriteState.fields.m_PressedSprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar5 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
      __this_04 = TypeInfo_UIManager;
      if (lVar5 != 0) {
        plVar7 = *(long **)(lVar5 + 0x28);
        __this_04 = (UnityEngine_UI_Button_o *)0x0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
          return;
        }
      }
    }
    goto label_0439a0fc;
  }
  if (__this_04 == (UnityEngine_UI_Button_o *)0x0) goto label_0439a0fc;
  pUVar6 = (__this->fields).m_OnClick;
  y = __this_04;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar8 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0)
      ;
      value = (float)(*(((UI_TooltipPopup_c *)__this_04->klass)->vtable)._48_get_MaxFadeAlpha.methodPtr)
                               (__this_04);
      if (g_data_057ae0e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      y = __this_04;
      __this_01 = (UnityEngine_UI_Button_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0)
      ;
      if ((__this_01 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this_02 = (UnityEngine_CanvasGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), y = __this_01,
         __this_02 == (UnityEngine_CanvasGroup_o *)0x0)) goto label_0434d2a2;
      UnityEngine_CanvasGroup__set_alpha(__this_02,value,(MethodInfo *)0x0);
    }
    pUVar2 = *(UnityEngine_UI_Text_o **)&(__this_04->fields).m_Colors.fields.m_FadeDuration;
    y = (UnityEngine_UI_Button_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pUVar6,(pUVar2->klass->vtable)._75_set_text.method);
      (__this_04->fields).m_SpriteState.fields.m_PressedSprite = (UnityEngine_Sprite_o *)__this;
      il2cpp_runtime_helper_022b4080();
      *(float *)&(__this_04->fields).m_SpriteState.fields.m_SelectedSprite = 40.0;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)__this_04,(MethodInfo *)__this);
      UI_BasePopup__Show((UI_BasePopup_o *)__this_04,(MethodInfo *)__this);
      return;
    }
  }
label_0434d2a2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  __this_03 = (y->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(y->fields).m_Navigation.fields.m_SelectOnDown;
  bVar8 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      (__this_03->fields).m_Navigation.fields.m_Mode = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
    pUVar4 = (UnityEngine_Object_o *)((*ppUVar1)->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar3 = *ppUVar1;
      __this_03 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar3 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0434d36c;
      (*(pUVar3->klass->vtable)._22_unknown.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_unknown.method);
    }
  }
  *ppUVar1 = (UnityEngine_UI_Selectable_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.TooltipButton$$.ctor
// il2cpp: void UI_TooltipButton___ctor (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x439a110

void UI_TooltipButton___ctor(UI_TooltipButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


