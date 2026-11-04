// Type: UI.TooltipButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TooltipButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/TooltipButton.cs
// --------------------------------

// UI.TooltipButton$$Awake
// il2cpp: void UI_TooltipButton__Awake (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x1822396c0

void UI_TooltipButton__Awake(UI_TooltipButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_o *value;
  
  if (Il2CppMethodInitialized_18434715b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Graphic);
    Il2CppMethodInitialized_18434715b = '\x01';
  }
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  value = UnityEngine_Component__GetComponent_object_
                    ((UnityEngine_Component_o *)__this,
                     (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Graphic);
  UnityEngine_UI_Selectable__set_targetGraphic((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
  return;
}


// UI.TooltipButton$$Setup
// il2cpp: void UI_TooltipButton__Setup (UI_TooltipButton_o* __this, System_String_o* tooltipMessage, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x1822398e0

void UI_TooltipButton__Setup
               (UI_TooltipButton_o *__this,System_String_o *tooltipMessage,UI_ElementStyle_o *style,
               MethodInfo *method)

{
  System_String_o *panel;
  UnityEngine_UI_ColorBlock_o *pUVar1;
  UnityEngine_UI_ColorBlock_o local_c8;
  UnityEngine_UI_ColorBlock_o local_68;
  
  if (Il2CppMethodInitialized_18434715c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultSetting");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    Il2CppMethodInitialized_18434715c = '\x01';
  }
  (__this->fields)._tooltipMessage = tooltipMessage;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipMessage,tooltipMessage);
  if (style != (UI_ElementStyle_o *)0x0) {
    panel = (style->fields).ThemePanel;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = UI_UIManager__GetThemeColorBlock
                       (&local_68,panel,"DefaultSetting","Icon","DefaultPanel",
                        (MethodInfo *)0x0);
    local_c8.fields.m_NormalColor.fields.r = (pUVar1->fields).m_NormalColor.fields.r;
    local_c8.fields.m_NormalColor.fields.g = (pUVar1->fields).m_NormalColor.fields.g;
    local_c8.fields.m_NormalColor.fields.b = (pUVar1->fields).m_NormalColor.fields.b;
    local_c8.fields.m_NormalColor.fields.a = (pUVar1->fields).m_NormalColor.fields.a;
    local_c8.fields.m_HighlightedColor.fields.r = (pUVar1->fields).m_HighlightedColor.fields.r;
    local_c8.fields.m_HighlightedColor.fields.g = (pUVar1->fields).m_HighlightedColor.fields.g;
    local_c8.fields.m_HighlightedColor.fields.b = (pUVar1->fields).m_HighlightedColor.fields.b;
    local_c8.fields.m_HighlightedColor.fields.a = (pUVar1->fields).m_HighlightedColor.fields.a;
    local_c8.fields.m_PressedColor.fields.r = (pUVar1->fields).m_PressedColor.fields.r;
    local_c8.fields.m_PressedColor.fields.g = (pUVar1->fields).m_PressedColor.fields.g;
    local_c8.fields.m_PressedColor.fields.b = (pUVar1->fields).m_PressedColor.fields.b;
    local_c8.fields.m_PressedColor.fields.a = (pUVar1->fields).m_PressedColor.fields.a;
    local_c8.fields.m_SelectedColor.fields.r = (pUVar1->fields).m_SelectedColor.fields.r;
    local_c8.fields.m_SelectedColor.fields.g = (pUVar1->fields).m_SelectedColor.fields.g;
    local_c8.fields.m_SelectedColor.fields.b = (pUVar1->fields).m_SelectedColor.fields.b;
    local_c8.fields.m_SelectedColor.fields.a = (pUVar1->fields).m_SelectedColor.fields.a;
    local_c8.fields.m_DisabledColor.fields.r = (pUVar1->fields).m_DisabledColor.fields.r;
    local_c8.fields.m_DisabledColor.fields.g = (pUVar1->fields).m_DisabledColor.fields.g;
    local_c8.fields.m_DisabledColor.fields.b = (pUVar1->fields).m_DisabledColor.fields.b;
    local_c8.fields.m_DisabledColor.fields.a = (pUVar1->fields).m_DisabledColor.fields.a;
    local_c8.fields.m_ColorMultiplier = (pUVar1->fields).m_ColorMultiplier;
    local_c8.fields.m_FadeDuration = (pUVar1->fields).m_FadeDuration;
    UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,&local_c8,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.TooltipButton$$DoStateTransition
// il2cpp: void UI_TooltipButton__DoStateTransition (UI_TooltipButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x182239720

void UI_TooltipButton__DoStateTransition
               (UI_TooltipButton_o *__this,int32_t state,bool instant,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_TooltipPopup_o *pUVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434715d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434715d = '\x01';
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
    if ((state != 2) && (state != 1)) {
      if (state == 0) {
        if (pUVar2 == (UI_TooltipPopup_o *)0x0) goto label_1822398d6;
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
             (pUVar2 = (pUVar1->fields).TooltipPopup, pUVar2 == (UI_TooltipPopup_o *)0x0)) goto label_1822398d6;
          (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
        }
      }
      return;
    }
    if (pUVar2 != (UI_TooltipPopup_o *)0x0) {
      UI_TooltipPopup__Show
                (pUVar2,(__this->fields)._tooltipMessage,(UnityEngine_Component_o *)__this,40.0,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1822398d6:
  ThrowNullReferenceException();
}


// UI.TooltipButton$$.ctor
// il2cpp: void UI_TooltipButton___ctor (UI_TooltipButton_o* __this, const MethodInfo* method);
// 0x1818f43b0

void
UI_TooltipButton___ctor(UI_TooltipButton_o* __this, MethodInfo* method)

{
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


