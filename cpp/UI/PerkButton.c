// Type: UI.PerkButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/PerkButton.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs  [CHANGED since prior version]
// --------------------------------

// UI.PerkButton$$Awake
// il2cpp: void UI_PerkButton__Awake (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x405f4d0

void UI_PerkButton__Awake(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Graphic_o *value;
  
  if (DAT_05704472 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&"Image");
    DAT_05704472 = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = (UnityEngine_UI_Graphic_o *)
              UnityEngine_Component__GetComponent<object>
                        ((UnityEngine_Component_o *)pUVar1,MethodInfo_Image_GetComponent_Image);
      UnityEngine_UI_Selectable__set_targetGraphic
                ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PerkButton$$Setup
// il2cpp: void UI_PerkButton__Setup (UI_PerkButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, float offset, const MethodInfo* method);
// 0x405f560

void UI_PerkButton__Setup
               (UI_PerkButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,
               float offset,MethodInfo *method)

{
  System_String_o *panel;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  UnityEngine_UI_ColorBlock_o local_70;
  
  if (DAT_05704473 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"DefaultPanel");
    il2cpp_init_method_metadata(&"DefaultButton");
    il2cpp_init_method_metadata(&"");
    DAT_05704473 = '\x01';
  }
  (__this->fields).m_OnClick = (UnityEngine_UI_Button_ButtonClickedEvent_o *)tooltipMessage;
  il2cpp_runtime_glue(&(__this->fields).m_OnClick,tooltipMessage);
  *(float *)&(__this->fields)._tooltipMessage = offset;
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__GetThemeColorBlock
              (&local_70,panel,"DefaultButton","","DefaultPanel",(MethodInfo *)0x0);
    value_00.fields.m_NormalColor.fields.b = local_70.fields.m_NormalColor.fields.b;
    value_00.fields.m_NormalColor.fields.a = local_70.fields.m_NormalColor.fields.a;
    value_00.fields.m_NormalColor.fields.r = local_70.fields.m_NormalColor.fields.r;
    value_00.fields.m_NormalColor.fields.g = local_70.fields.m_NormalColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.r = local_70.fields.m_HighlightedColor.fields.r;
    value_00.fields.m_HighlightedColor.fields.g = local_70.fields.m_HighlightedColor.fields.g;
    value_00.fields.m_HighlightedColor.fields.b = local_70.fields.m_HighlightedColor.fields.b;
    value_00.fields.m_HighlightedColor.fields.a = local_70.fields.m_HighlightedColor.fields.a;
    value_00.fields.m_PressedColor.fields.r = local_70.fields.m_PressedColor.fields.r;
    value_00.fields.m_PressedColor.fields.g = local_70.fields.m_PressedColor.fields.g;
    value_00.fields.m_PressedColor.fields.b = local_70.fields.m_PressedColor.fields.b;
    value_00.fields.m_PressedColor.fields.a = local_70.fields.m_PressedColor.fields.a;
    value_00.fields.m_SelectedColor.fields.r = local_70.fields.m_SelectedColor.fields.r;
    value_00.fields.m_SelectedColor.fields.g = local_70.fields.m_SelectedColor.fields.g;
    value_00.fields.m_SelectedColor.fields.b = local_70.fields.m_SelectedColor.fields.b;
    value_00.fields.m_SelectedColor.fields.a = local_70.fields.m_SelectedColor.fields.a;
    value_00.fields.m_DisabledColor.fields.r = local_70.fields.m_DisabledColor.fields.r;
    value_00.fields.m_DisabledColor.fields.g = local_70.fields.m_DisabledColor.fields.g;
    value_00.fields.m_DisabledColor.fields.b = local_70.fields.m_DisabledColor.fields.b;
    value_00.fields.m_DisabledColor.fields.a = local_70.fields.m_DisabledColor.fields.a;
    value_00.fields.m_ColorMultiplier = local_70.fields.m_ColorMultiplier;
    value_00.fields.m_FadeDuration = local_70.fields.m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors
              ((UnityEngine_UI_Selectable_o *)__this,value_00,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).m_Navigation.fields.m_WrapAround;
    uVar2 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnUp + 4);
    uVar3 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnDown + 4);
    uVar4 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnLeft + 4);
    uStack_e8 = (undefined4)((ulong)lVar1 >> 0x20);
    uStack_e4 = (undefined4)uVar2;
    uStack_e0 = (undefined4)((ulong)uVar2 >> 0x20);
    uStack_dc = (undefined4)uVar3;
    uStack_d8 = (undefined4)((ulong)uVar3 >> 0x20);
    uStack_d4 = (undefined4)uVar4;
    uStack_d0 = (undefined4)((ulong)uVar4 >> 0x20);
    value.fields.m_SelectOnRight._4_4_ =
         *(undefined4 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnRight + 4);
    value.fields.m_SelectOnRight._0_4_ = uStack_d0;
    lVar1 = lVar1 << 0x20;
    value.fields.m_SelectOnUp._4_4_ = uStack_e4;
    value.fields.m_SelectOnUp._0_4_ = uStack_e8;
    value.fields.m_SelectOnDown._4_4_ = uStack_dc;
    value.fields.m_SelectOnDown._0_4_ = uStack_e0;
    value.fields.m_SelectOnLeft._4_4_ = uStack_d4;
    value.fields.m_SelectOnLeft._0_4_ = uStack_d8;
    value.fields.m_Mode = (int)lVar1;
    value.fields.m_WrapAround = (int)((ulong)lVar1 >> 0x20);
    UnityEngine_UI_Selectable__set_navigation
              ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PerkButton$$DoStateTransition
// il2cpp: void UI_PerkButton__DoStateTransition (UI_PerkButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x405f750

void UI_PerkButton__DoStateTransition
               (UI_PerkButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  long lVar2;
  UI_TooltipPopup_o *__this_00;
  long *plVar3;
  bool_conflict bVar4;
  
  if (DAT_05704474 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704474 = '\x01';
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
                   (UnityEngine_Component_o *)__this,*(float *)&(__this->fields)._tooltipMessage,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else if (__this_00 != (UI_TooltipPopup_o *)0x0) {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PerkButton$$.ctor
// il2cpp: void UI_PerkButton___ctor (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x405f8d0

void UI_PerkButton___ctor(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


