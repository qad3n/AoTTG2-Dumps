// Type: UI.PerkButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PerkButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs
// --------------------------------

// UI.PerkButton$$Awake
// il2cpp: void UI_PerkButton__Awake (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x5ce2240

void UI_PerkButton__Awake(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *value;
  
  if (Il2CppMethodInitialized_07547bf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_07547bf8 = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      UnityEngine_UI_Selectable__set_targetGraphic
                ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.PerkButton$$Setup
// il2cpp: void UI_PerkButton__Setup (UI_PerkButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, float offset, const MethodInfo* method);
// 0x5ce22d0

void UI_PerkButton__Setup
               (UI_PerkButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,float offset,
               MethodInfo *method)

{
  System_String_o *panel;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_UI_Navigation_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  UnityEngine_UI_ColorBlock_o UStack_70;
  
  if (Il2CppMethodInitialized_07547bf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547bf9 = '\x01';
  }
  (__this->fields)._tooltipMessage = tooltipMessage;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipMessage);
  (__this->fields)._offset = offset;
  if (style == (UI_ElementStyle_o *)0x0) {
    ThrowNullReferenceException();
  }
  panel = (style->fields).ThemePanel;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  UI_UIManager__GetThemeColorBlock
            (&UStack_70,panel,"DefaultButton","","DefaultPanel",
             (MethodInfo *)0x0);
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
  lVar1 = *(long *)&(__this->fields).m_Navigation.fields.m_WrapAround;
  uVar2 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnUp + 4);
  uVar3 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnDown + 4);
  uVar4 = *(undefined8 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnLeft + 4);
  uStack_84 = (undefined4)uVar3;
  uStack_80 = (undefined4)((ulong)uVar3 >> 0x20);
  uStack_7c = (undefined4)uVar4;
  uStack_78 = (undefined4)((ulong)uVar4 >> 0x20);
  uStack_90 = (undefined4)((ulong)lVar1 >> 0x20);
  uStack_8c = (undefined4)uVar2;
  uStack_88 = (undefined4)((ulong)uVar2 >> 0x20);
  value.fields.m_SelectOnRight._4_4_ =
       *(undefined4 *)((long)&(__this->fields).m_Navigation.fields.m_SelectOnRight + 4);
  value.fields.m_SelectOnRight._0_4_ = uStack_78;
  lVar1 = lVar1 << 0x20;
  value.fields.m_SelectOnUp._4_4_ = uStack_8c;
  value.fields.m_SelectOnUp._0_4_ = uStack_90;
  value.fields.m_SelectOnDown._4_4_ = uStack_84;
  value.fields.m_SelectOnDown._0_4_ = uStack_88;
  value.fields.m_SelectOnLeft._4_4_ = uStack_7c;
  value.fields.m_SelectOnLeft._0_4_ = uStack_80;
  value.fields.m_Mode = (int)lVar1;
  value.fields.m_WrapAround = (bool)(char)((ulong)lVar1 >> 0x20);
  value.fields._5_3_ = (int3)((ulong)lVar1 >> 0x28);
  UnityEngine_UI_Selectable__set_navigation((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// UI.PerkButton$$DoStateTransition
// il2cpp: void UI_PerkButton__DoStateTransition (UI_PerkButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x5ce2460

void UI_PerkButton__DoStateTransition(UI_PerkButton_o *__this,int32_t state,bool instant,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_TooltipPopup_o *pUVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547bfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547bfa = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar1 != (UI_BaseMenu_o *)0x0) {
    pUVar2 = (pUVar1->fields).TooltipPopup;
    if (state - 1U < 2) {
      if (pUVar2 != (UI_TooltipPopup_o *)0x0) {
        UI_TooltipPopup__Show
                  (pUVar2,(__this->fields)._tooltipMessage,(UnityEngine_Component_o *)__this,
                   (__this->fields)._offset,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar2 != (UI_TooltipPopup_o *)0x0) {
      x = (UnityEngine_Object_o *)(pUVar2->fields).Caller;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).TooltipPopup, pUVar2 != (UI_TooltipPopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.PerkButton$$.ctor
// il2cpp: void UI_PerkButton___ctor (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x5ce25e0

void UI_PerkButton___ctor(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


