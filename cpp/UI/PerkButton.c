// Type: UI.PerkButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PerkButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/PerkButton.cs
// --------------------------------

// UI.PerkButton$$Awake
// il2cpp: void UI_PerkButton__Awake (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x182216c30

void UI_PerkButton__Awake(UI_PerkButton_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_Image_o *value;
  
  if (Il2CppMethodInitialized_184347089 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    Il2CppMethodInitialized_184347089 = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Image",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      UnityEngine_UI_Selectable__set_targetGraphic
                ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.PerkButton$$Setup
// il2cpp: void UI_PerkButton__Setup (UI_PerkButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, float offset, const MethodInfo* method);
// 0x182216e80

void UI_PerkButton__Setup
               (UI_PerkButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,float offset,
               MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o *pUVar1;
  UnityEngine_UI_Navigation_o local_108;
  UnityEngine_UI_ColorBlock_o local_d8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_18434708a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434708a = '\x01';
  }
  (__this->fields)._tooltipMessage = tooltipMessage;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipMessage,tooltipMessage);
  (__this->fields)._offset = offset;
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = UI_UIManager__GetThemeColorBlock
                       (&local_78,panel,"DefaultButton","","DefaultPanel",
                        (MethodInfo *)0x0);
    local_d8.fields.m_NormalColor.fields.r = (pUVar1->fields).m_NormalColor.fields.r;
    local_d8.fields.m_NormalColor.fields.g = (pUVar1->fields).m_NormalColor.fields.g;
    local_d8.fields.m_NormalColor.fields.b = (pUVar1->fields).m_NormalColor.fields.b;
    local_d8.fields.m_NormalColor.fields.a = (pUVar1->fields).m_NormalColor.fields.a;
    local_d8.fields.m_HighlightedColor.fields.r = (pUVar1->fields).m_HighlightedColor.fields.r;
    local_d8.fields.m_HighlightedColor.fields.g = (pUVar1->fields).m_HighlightedColor.fields.g;
    local_d8.fields.m_HighlightedColor.fields.b = (pUVar1->fields).m_HighlightedColor.fields.b;
    local_d8.fields.m_HighlightedColor.fields.a = (pUVar1->fields).m_HighlightedColor.fields.a;
    local_d8.fields.m_PressedColor.fields.r = (pUVar1->fields).m_PressedColor.fields.r;
    local_d8.fields.m_PressedColor.fields.g = (pUVar1->fields).m_PressedColor.fields.g;
    local_d8.fields.m_PressedColor.fields.b = (pUVar1->fields).m_PressedColor.fields.b;
    local_d8.fields.m_PressedColor.fields.a = (pUVar1->fields).m_PressedColor.fields.a;
    local_d8.fields.m_SelectedColor.fields.r = (pUVar1->fields).m_SelectedColor.fields.r;
    local_d8.fields.m_SelectedColor.fields.g = (pUVar1->fields).m_SelectedColor.fields.g;
    local_d8.fields.m_SelectedColor.fields.b = (pUVar1->fields).m_SelectedColor.fields.b;
    local_d8.fields.m_SelectedColor.fields.a = (pUVar1->fields).m_SelectedColor.fields.a;
    local_d8.fields.m_DisabledColor.fields.r = (pUVar1->fields).m_DisabledColor.fields.r;
    local_d8.fields.m_DisabledColor.fields.g = (pUVar1->fields).m_DisabledColor.fields.g;
    local_d8.fields.m_DisabledColor.fields.b = (pUVar1->fields).m_DisabledColor.fields.b;
    local_d8.fields.m_DisabledColor.fields.a = (pUVar1->fields).m_DisabledColor.fields.a;
    local_d8.fields.m_ColorMultiplier = (pUVar1->fields).m_ColorMultiplier;
    local_d8.fields.m_FadeDuration = (pUVar1->fields).m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,&local_d8,(MethodInfo *)0x0);
    local_108.fields._4_8_ = *(undefined8 *)&(__this->fields).m_Navigation.fields.m_WrapAround;
    local_108.fields._12_8_ =
         *(undefined8 *)((longlong)&(__this->fields).m_Navigation.fields.m_SelectOnUp + 4);
    local_108.fields.m_SelectOnRight._4_4_ =
         *(undefined4 *)((longlong)&(__this->fields).m_Navigation.fields.m_SelectOnRight + 4);
    local_108.fields._20_8_ =
         *(undefined8 *)((longlong)&(__this->fields).m_Navigation.fields.m_SelectOnDown + 4);
    local_108.fields._28_8_ =
         *(undefined8 *)((longlong)&(__this->fields).m_Navigation.fields.m_SelectOnLeft + 4);
    local_108.fields.m_Mode = 0;
    UnityEngine_UI_Selectable__set_navigation
              ((UnityEngine_UI_Selectable_o *)__this,&local_108,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.PerkButton$$DoStateTransition
// il2cpp: void UI_PerkButton__DoStateTransition (UI_PerkButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x182216cc0

void UI_PerkButton__DoStateTransition(UI_PerkButton_o *__this,int32_t state,bool instant,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_TooltipPopup_o *pUVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434708b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434708b = '\x01';
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
    if ((state == 2) || (state == 1)) {
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
      if (bVar3) {
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if ((pUVar1 == (UI_BaseMenu_o *)0x0) ||
           (pUVar2 = (pUVar1->fields).TooltipPopup, pUVar2 == (UI_TooltipPopup_o *)0x0)) goto label_182216e72;
        (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      }
      return;
    }
  }
label_182216e72:
  ThrowNullReferenceException();
}


// UI.PerkButton$$.ctor
// il2cpp: void UI_PerkButton___ctor (UI_PerkButton_o* __this, const MethodInfo* method);
// 0x1818f43b0

void
UI_PerkButton___ctor(UI_PerkButton_o* __this, MethodInfo* method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


