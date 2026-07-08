// Type: UI.TooltipButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/TooltipButton.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/TooltipButton.cs  [CHANGED since prior version]
// --------------------------------

// UI.TooltipButton$$Awake
// il2cpp: void UI_TooltipButton__Awake (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x408be40

void UI_TooltipButton__Awake(UI_TooltipButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *value;
  
  if (DAT_0570456f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Graphic_GetComponent_Graphic);
    DAT_0570456f = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  value = (UnityEngine_UI_Graphic_o *)
          UnityEngine_Component__GetComponent<object>
                    ((UnityEngine_Component_o *)__this,MethodInfo_Graphic_GetComponent_Graphic);
  UnityEngine_UI_Selectable__set_targetGraphic
            ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// UI.TooltipButton$$Setup
// il2cpp: void UI_TooltipButton__Setup (UI_TooltipButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x408be90

void UI_TooltipButton__Setup
               (UI_TooltipButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o local_70;
  
  if (DAT_05704570 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DefaultSetting");
    il2cpp_init_method_metadata(&"Icon");
    DAT_05704570 = '\x01';
  }
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)tooltipMessage;
  il2cpp_runtime_glue(&(__this->fields).m_OnClick,tooltipMessage);
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__GetThemeColorBlock
              (&local_70,panel,"DefaultSetting","Icon","DefaultPanel",(MethodInfo *)0x0);
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
    UnityEngine_UI_Selectable__set_colors
              ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TooltipButton$$DoStateTransition
// il2cpp: void UI_TooltipButton__DoStateTransition (UI_TooltipButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x408c010

void UI_TooltipButton__DoStateTransition
               (UI_TooltipButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  UI_TooltipPopup_o *__this_00;
  long *plVar3;
  bool_conflict bVar4;
  
  if (DAT_05704571 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704571 = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar1 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (lVar2 != 0) {
    __this_00 = *(UI_TooltipPopup_o **)(lVar2 + 0x28);
    if (state - 1U < 2) {
      if (__this_00 != (UI_TooltipPopup_o *)0x0) {
        UI_TooltipPopup__Show
                  (__this_00,(System_String_o *)(__this->fields).m_OnClick,
                   (UnityEngine_Component_o *)__this,40.0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (state != 0) {
        return;
      }
      if (__this_00 != (UI_TooltipPopup_o *)0x0) {
        pUVar1 = (UnityEngine_Object_o *)(__this_00->fields).Caller;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Equality
                          (pUVar1,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x28), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.TooltipButton$$.ctor
// il2cpp: void UI_TooltipButton___ctor (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x408c1a0

void UI_TooltipButton___ctor(UI_TooltipButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


