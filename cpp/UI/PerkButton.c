// Type: UI.PerkButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PerkButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs
// --------------------------------

// UI.PerkButton$$Awake
// il2cpp: void UI_PerkButton__Awake (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x436d350

void UI_PerkButton__Awake(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  float fVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  System_String_o *panel;
  UnityEngine_Object_o *pUVar5;
  long lVar6;
  UnityEngine_UI_Selectable_c *pUVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  bool_conflict bVar12;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UI_PerkButton_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_UI_Graphic_o *value_01;
  uint extraout_EDX;
  long extraout_RDX;
  int32_t state;
  UnityEngine_UI_Selectable_o *pUVar13;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar14;
  UnityEngine_UI_Button_o *y;
  UI_PerkButton_o *__this_05;
  UnityEngine_UI_Button_o *__this_06;
  float value_02;
  undefined4 uVar15;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  UnityEngine_UI_ColorBlock_o UStack_78;
  UI_PerkButton_o *pUStack_20;
  
  if (g_data_057ae1ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&"Image");
    g_data_057ae1ec = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0;
  __this_05 = __this;
  __this_03 = (UI_PerkButton_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_03 != (UI_PerkButton_o *)0x0) &&
     (pUVar14 = "Image",
     __this_04 = UnityEngine_Transform__Find
                           ((UnityEngine_Transform_o *)__this_03,(System_String_o *)"Image",
                            (MethodInfo *)0x0), __this_05 = __this_03,
     __this_04 != (UnityEngine_Transform_o *)0x0)) {
    value_01 = (UnityEngine_UI_Graphic_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_Image_GetComponent_Image);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this,value_01,(MethodInfo *)0x0);
    return;
  }
  uVar15 = il2cpp_runtime_helper_022b2c90();
  pUStack_20 = __this;
  if (g_data_057ae1ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1ed = '\x01';
  }
  pUVar13 = (UnityEngine_UI_Selectable_o *)&(__this_05->fields).m_OnClick;
  (__this_05->fields).m_OnClick = pUVar14;
  il2cpp_runtime_helper_022b4080();
  state = (int32_t)pUVar14;
  *(undefined4 *)&(__this_05->fields)._tooltipMessage = uVar15;
  if (extraout_RDX != 0) {
    panel = *(System_String_o **)(extraout_RDX + 0x18);
    if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetThemeColorBlock
              (&UStack_78,panel,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
    value_00.fields.m_NormalColor.fields.b = UStack_78.fields.m_NormalColor.fields.b;
    value_00.fields.m_NormalColor.fields.a = UStack_78.fields.m_NormalColor.fields.a;
    value_00.fields.m_NormalColor.fields.r = UStack_78.fields.m_NormalColor.fields.r;
    value_00.fields.m_NormalColor.fields.g = UStack_78.fields.m_NormalColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.r = UStack_78.fields.m_HighlightedColor.fields.r;
    value_00.fields.m_HighlightedColor.fields.g = UStack_78.fields.m_HighlightedColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.b = UStack_78.fields.m_HighlightedColor.fields.b;
    value_00.fields.m_HighlightedColor.fields.a = UStack_78.fields.m_HighlightedColor.fields.a;
    value_00.fields.m_PressedColor.fields.r = UStack_78.fields.m_PressedColor.fields.r;
    value_00.fields.m_PressedColor.fields.g = UStack_78.fields.m_PressedColor.fields.g;
    value_00.fields.m_PressedColor.fields.b = UStack_78.fields.m_PressedColor.fields.b;
    value_00.fields.m_PressedColor.fields.a = UStack_78.fields.m_PressedColor.fields.a;
    value_00.fields.m_SelectedColor.fields.r = UStack_78.fields.m_SelectedColor.fields.r;
    value_00.fields.m_SelectedColor.fields.g = UStack_78.fields.m_SelectedColor.fields.g;
    value_00.fields.m_SelectedColor.fields.b = UStack_78.fields.m_SelectedColor.fields.b;
    value_00.fields.m_SelectedColor.fields.a = UStack_78.fields.m_SelectedColor.fields.a;
    value_00.fields.m_DisabledColor.fields.r = UStack_78.fields.m_DisabledColor.fields.r;
    value_00.fields.m_DisabledColor.fields.g = UStack_78.fields.m_DisabledColor.fields.g;
    value_00.fields.m_DisabledColor.fields.b = UStack_78.fields.m_DisabledColor.fields.b;
    value_00.fields.m_DisabledColor.fields.a = UStack_78.fields.m_DisabledColor.fields.a;
    value_00.fields.m_ColorMultiplier = UStack_78.fields.m_ColorMultiplier;
    value_00.fields.m_FadeDuration = UStack_78.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this_05,value_00,(MethodInfo *)0x0)
    ;
    lVar6 = *(long *)&(__this_05->fields).m_Navigation.fields.m_WrapAround;
    uVar9 = *(undefined8 *)((long)&(__this_05->fields).m_Navigation.fields.m_SelectOnUp + 4);
    uVar10 = *(undefined8 *)((long)&(__this_05->fields).m_Navigation.fields.m_SelectOnDown + 4);
    uVar11 = *(undefined8 *)((long)&(__this_05->fields).m_Navigation.fields.m_SelectOnLeft + 4);
    uStack_f0 = (undefined4)((ulong)lVar6 >> 0x20);
    uStack_ec = (undefined4)uVar9;
    uStack_e8 = (undefined4)((ulong)uVar9 >> 0x20);
    uStack_e4 = (undefined4)uVar10;
    uStack_e0 = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_dc = (undefined4)uVar11;
    uStack_d8 = (undefined4)((ulong)uVar11 >> 0x20);
    value.fields.m_SelectOnRight._4_4_ =
         *(undefined4 *)((long)&(__this_05->fields).m_Navigation.fields.m_SelectOnRight + 4);
    value.fields.m_SelectOnRight._0_4_ = uStack_d8;
    lVar6 = lVar6 << 0x20;
    value.fields.m_SelectOnUp._4_4_ = uStack_ec;
    value.fields.m_SelectOnUp._0_4_ = uStack_f0;
    value.fields.m_SelectOnDown._4_4_ = uStack_e4;
    value.fields.m_SelectOnDown._0_4_ = uStack_e8;
    value.fields.m_SelectOnLeft._4_4_ = uStack_dc;
    value.fields.m_SelectOnLeft._0_4_ = uStack_e0;
    value.fields.m_Mode = (int)lVar6;
    value.fields.m_WrapAround = (int)((ulong)lVar6 >> 0x20);
    UnityEngine_UI_Selectable__set_navigation
              ((UnityEngine_UI_Selectable_o *)__this_05,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1ee = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition(pUVar13,state,extraout_EDX & 0xff,(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Object_o *)
           (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  __this_06 = TypeInfo_UIManager;
  if (lVar6 == 0) {
label_0436d748:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_UI_Button___ctor(__this_06,(MethodInfo *)0x0);
    return;
  }
  __this_06 = *(UnityEngine_UI_Button_o **)(lVar6 + 0x28);
  if (1 < state - 1U) {
    if (__this_06 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar5 = (UnityEngine_Object_o *)(__this_06->fields).m_SpriteState.fields.m_PressedSprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
      __this_06 = TypeInfo_UIManager;
      if (lVar6 != 0) {
        plVar8 = *(long **)(lVar6 + 0x28);
        __this_06 = (UnityEngine_UI_Button_o *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          return;
        }
      }
    }
    goto label_0436d748;
  }
  if (__this_06 == (UnityEngine_UI_Button_o *)0x0) goto label_0436d748;
  fVar2 = *(float *)&pUVar13[1].monitor;
  pUVar7 = pUVar13[1].klass;
  y = __this_06;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar12 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0)
      ;
      value_02 = (float)(*(((UI_TooltipPopup_c *)__this_06->klass)->vtable)._48_get_MaxFadeAlpha.methodPtr)
                                  (__this_06);
      if (g_data_057ae0e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      y = __this_06;
      __this_01 = (UnityEngine_UI_Button_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0)
      ;
      if ((__this_01 == (UnityEngine_UI_Button_o *)0x0) ||
         (__this_02 = (UnityEngine_CanvasGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), y = __this_01,
         __this_02 == (UnityEngine_CanvasGroup_o *)0x0)) goto label_0434d2a2;
      UnityEngine_CanvasGroup__set_alpha(__this_02,value_02,(MethodInfo *)0x0);
    }
    pUVar3 = *(UnityEngine_UI_Text_o **)&(__this_06->fields).m_Colors.fields.m_FadeDuration;
    y = (UnityEngine_UI_Button_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pUVar7,(pUVar3->klass->vtable)._75_set_text.method);
      (__this_06->fields).m_SpriteState.fields.m_PressedSprite = (UnityEngine_Sprite_o *)pUVar13;
      il2cpp_runtime_helper_022b4080();
      *(float *)&(__this_06->fields).m_SpriteState.fields.m_SelectedSprite = fVar2;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)__this_06,(MethodInfo *)pUVar13);
      UI_BasePopup__Show((UI_BasePopup_o *)__this_06,(MethodInfo *)pUVar13);
      return;
    }
  }
label_0434d2a2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  pUVar13 = (y->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(y->fields).m_Navigation.fields.m_SelectOnDown;
  bVar12 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      (pUVar13->fields).m_Navigation.fields.m_Mode = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar13,(MethodInfo *)0x0);
      return;
    }
    pUVar5 = (UnityEngine_Object_o *)((*ppUVar1)->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pUVar4 = *ppUVar1;
      pUVar13 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0434d36c;
      (*(pUVar4->klass->vtable)._22_unknown.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_unknown.method);
    }
  }
  *ppUVar1 = (UnityEngine_UI_Selectable_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.PerkButton$$Setup
// il2cpp: void UI_PerkButton__Setup (UI_PerkButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, float offset, const MethodInfo* method);
// 0x436d3e0

void UI_PerkButton__Setup
               (UI_PerkButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,float offset,
               MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  float fVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  System_String_o *panel;
  UnityEngine_Object_o *pUVar5;
  long lVar6;
  UnityEngine_UI_Selectable_c *pUVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  bool_conflict bVar12;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  uint extraout_EDX;
  int32_t state;
  UnityEngine_UI_Selectable_o *pUVar13;
  UnityEngine_UI_Button_o *y;
  UnityEngine_UI_Button_o *__this_03;
  float value_01;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  UnityEngine_UI_ColorBlock_o UStack_70;
  
  if (g_data_057ae1ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae1ed = '\x01';
  }
  pUVar13 = (UnityEngine_UI_Selectable_o *)&(__this->fields).m_OnClick;
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)tooltipMessage;
  il2cpp_runtime_helper_022b4080();
  state = (int32_t)tooltipMessage;
  *(float *)&(__this->fields)._tooltipMessage = offset;
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__GetThemeColorBlock
              (&UStack_70,panel,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
    value_00.fields.m_NormalColor.fields.b = UStack_70.fields.m_NormalColor.fields.b;
    value_00.fields.m_NormalColor.fields.a = UStack_70.fields.m_NormalColor.fields.a;
    value_00.fields.m_NormalColor.fields.r = UStack_70.fields.m_NormalColor.fields.r;
    value_00.fields.m_NormalColor.fields.g = UStack_70.fields.m_NormalColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.r = UStack_70.fields.m_HighlightedColor.fields.r;
    value_00.fields.m_HighlightedColor.fields.g = UStack_70.fields.m_HighlightedColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.b = UStack_70.fields.m_HighlightedColor.fields.b;
    value_00.fields.m_HighlightedColor.fields.a = UStack_70.fields.m_HighlightedColor.fields.a;
    value_00.fields.m_PressedColor.fields.r = UStack_70.fields.m_PressedColor.fields.r;
    value_00.fields.m_PressedColor.fields.g = UStack_70.fields.m_PressedColor.fields.g;
    value_00.fields.m_PressedColor.fields.b = UStack_70.fields.m_PressedColor.fields.b;
    value_00.fields.m_PressedColor.fields.a = UStack_70.fields.m_PressedColor.fields.a;
    value_00.fields.m_SelectedColor.fields.r = UStack_70.fields.m_SelectedColor.fields.r;
    value_00.fields.m_SelectedColor.fields.g = UStack_70.fields.m_SelectedColor.fields.g;
    value_00.fields.m_SelectedColor.fields.b = UStack_70.fields.m_SelectedColor.fields.b;
    value_00.fields.m_SelectedColor.fields.a = UStack_70.fields.m_SelectedColor.fields.a;
    value_00.fields.m_DisabledColor.fields.r = UStack_70.fields.m_DisabledColor.fields.r;
    value_00.fields.m_DisabledColor.fields.g = UStack_70.fields.m_DisabledColor.fields.g;
    value_00.fields.m_DisabledColor.fields.b = UStack_70.fields.m_DisabledColor.fields.b;
    value_00.fields.m_DisabledColor.fields.a = UStack_70.fields.m_DisabledColor.fields.a;
    value_00.fields.m_ColorMultiplier = UStack_70.fields.m_ColorMultiplier;
    value_00.fields.m_FadeDuration = UStack_70.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,value_00,(MethodInfo *)0x0);
    lVar6 = *(long *)&(__this->fields).m_Navigation.fields.m_WrapAround;
    uVar9 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnUp + 4);
    uVar10 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnDown + 4);
    uVar11 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnLeft + 4);
    uStack_e8 = (undefined4)((ulong)lVar6 >> 0x20);
    uStack_e4 = (undefined4)uVar9;
    uStack_e0 = (undefined4)((ulong)uVar9 >> 0x20);
    uStack_dc = (undefined4)uVar10;
    uStack_d8 = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_d4 = (undefined4)uVar11;
    uStack_d0 = (undefined4)((ulong)uVar11 >> 0x20);
    value.fields.m_SelectOnRight._4_4_ =
         *(undefined4 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnRight + 4);
    value.fields.m_SelectOnRight._0_4_ = uStack_d0;
    lVar6 = lVar6 << 0x20;
    value.fields.m_SelectOnUp._4_4_ = uStack_e4;
    value.fields.m_SelectOnUp._0_4_ = uStack_e8;
    value.fields.m_SelectOnDown._4_4_ = uStack_dc;
    value.fields.m_SelectOnDown._0_4_ = uStack_e0;
    value.fields.m_SelectOnLeft._4_4_ = uStack_d4;
    value.fields.m_SelectOnLeft._0_4_ = uStack_d8;
    value.fields.m_Mode = (int)lVar6;
    value.fields.m_WrapAround = (int)((ulong)lVar6 >> 0x20);
    UnityEngine_UI_Selectable__set_navigation((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1ee = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition(pUVar13,state,extraout_EDX & 0xff,(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Object_o *)
           (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  __this_03 = TypeInfo_UIManager;
  if (lVar6 == 0) {
label_0436d748:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_UI_Button___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  __this_03 = *(UnityEngine_UI_Button_o **)(lVar6 + 0x28);
  if (1 < state - 1U) {
    if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar5 = (UnityEngine_Object_o *)(__this_03->fields).m_SpriteState.fields.m_PressedSprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
      __this_03 = TypeInfo_UIManager;
      if (lVar6 != 0) {
        plVar8 = *(long **)(lVar6 + 0x28);
        __this_03 = (UnityEngine_UI_Button_o *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          return;
        }
      }
    }
    goto label_0436d748;
  }
  if (__this_03 == (UnityEngine_UI_Button_o *)0x0) goto label_0436d748;
  fVar2 = *(float *)&pUVar13[1].monitor;
  pUVar7 = pUVar13[1].klass;
  y = __this_03;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar12 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0)
      ;
      value_01 = (float)(*(((UI_TooltipPopup_c *)__this_03->klass)->vtable)._48_get_MaxFadeAlpha.methodPtr)
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
      UnityEngine_CanvasGroup__set_alpha(__this_02,value_01,(MethodInfo *)0x0);
    }
    pUVar3 = *(UnityEngine_UI_Text_o **)&(__this_03->fields).m_Colors.fields.m_FadeDuration;
    y = (UnityEngine_UI_Button_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pUVar7,(pUVar3->klass->vtable)._75_set_text.method);
      (__this_03->fields).m_SpriteState.fields.m_PressedSprite = (UnityEngine_Sprite_o *)pUVar13;
      il2cpp_runtime_helper_022b4080();
      *(float *)&(__this_03->fields).m_SpriteState.fields.m_SelectedSprite = fVar2;
      UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
      UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)__this_03,(MethodInfo *)pUVar13);
      UI_BasePopup__Show((UI_BasePopup_o *)__this_03,(MethodInfo *)pUVar13);
      return;
    }
  }
label_0434d2a2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  pUVar13 = (y->fields).m_Navigation.fields.m_SelectOnDown;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(y->fields).m_Navigation.fields.m_SelectOnDown;
  bVar12 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar13,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      (pUVar13->fields).m_Navigation.fields.m_Mode = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar13,(MethodInfo *)0x0);
      return;
    }
    pUVar5 = (UnityEngine_Object_o *)((*ppUVar1)->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar12 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pUVar4 = *ppUVar1;
      pUVar13 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0434d36c;
      (*(pUVar4->klass->vtable)._22_unknown.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_unknown.method);
    }
  }
  *ppUVar1 = (UnityEngine_UI_Selectable_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.PerkButton$$DoStateTransition
// il2cpp: void UI_PerkButton__DoStateTransition (UI_PerkButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x436d5d0

void UI_PerkButton__DoStateTransition
               (UI_PerkButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  float fVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  long lVar6;
  UnityEngine_UI_Button_ButtonClickedEvent_o *pUVar7;
  long *plVar8;
  bool_conflict bVar9;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UnityEngine_UI_Button_o *y;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_UI_Button_o *__this_04;
  float value;
  
  if (g_data_057ae1ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae1ee = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant & 0xff,(MethodInfo *)0x0);
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_Object_o *)
           (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
  __this_04 = TypeInfo_UIManager;
  if (lVar6 == 0) {
label_0436d748:
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_UI_Button___ctor(__this_04,(MethodInfo *)0x0);
    return;
  }
  __this_04 = *(UnityEngine_UI_Button_o **)(lVar6 + 0x28);
  if (1 < state - 1U) {
    if (__this_04 != (UnityEngine_UI_Button_o *)0x0) {
      pUVar5 = (UnityEngine_Object_o *)(__this_04->fields).m_SpriteState.fields.m_PressedSprite;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        return;
      }
      if (*(int *)((long)&(TypeInfo_UIManager->fields).m_TargetGraphic + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = (TypeInfo_UIManager->fields).m_SpriteState.fields.m_PressedSprite[1].fields.m_CachedPtr;
      __this_04 = TypeInfo_UIManager;
      if (lVar6 != 0) {
        plVar8 = *(long **)(lVar6 + 0x28);
        __this_04 = (UnityEngine_UI_Button_o *)0x0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
          return;
        }
      }
    }
    goto label_0436d748;
  }
  if (__this_04 == (UnityEngine_UI_Button_o *)0x0) goto label_0436d748;
  fVar2 = *(float *)&(__this->fields)._tooltipMessage;
  pUVar7 = (__this->fields).m_OnClick;
  y = __this_04;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar9 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
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
    pUVar3 = *(UnityEngine_UI_Text_o **)&(__this_04->fields).m_Colors.fields.m_FadeDuration;
    y = (UnityEngine_UI_Button_o *)0x0;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pUVar7,(pUVar3->klass->vtable)._75_set_text.method);
      (__this_04->fields).m_SpriteState.fields.m_PressedSprite = (UnityEngine_Sprite_o *)__this;
      il2cpp_runtime_helper_022b4080();
      *(float *)&(__this_04->fields).m_SpriteState.fields.m_SelectedSprite = fVar2;
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
  bVar9 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      (__this_03->fields).m_Navigation.fields.m_Mode = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
    pUVar5 = (UnityEngine_Object_o *)((*ppUVar1)->fields).m_SpriteState.fields.m_PressedSprite;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pUVar4 = *ppUVar1;
      __this_03 = (UnityEngine_UI_Selectable_o *)0x0;
      if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0434d36c;
      (*(pUVar4->klass->vtable)._22_unknown.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_unknown.method);
    }
  }
  *ppUVar1 = (UnityEngine_UI_Selectable_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.PerkButton$$.ctor
// il2cpp: void UI_PerkButton___ctor (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x436d750

void UI_PerkButton___ctor(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


