// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDropdownItemFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_UI_Image_o* image, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o* icon, const MethodInfo* method);
// 0x539fc50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539fe11: jmp 0x539fe34

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_UI_Image_o *image
               ,TMPro_TextMeshProUGUI_o *label,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               UnityEngine_UI_Image_o *icon,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Color32_o UVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *viewport;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_Fields UVar13;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o fallback_00;
  
  method_00 = (MethodInfo *)theme;
  if (Il2CppMethodInitialized_07542ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_07542ba1 = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar7 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  if (bVar2) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_053a0041;
    UVar12 = (*(image->klass->vtable)._22_get_color.methodPtr)
                       (image,(image->klass->vtable)._22_get_color.method);
    fVar9 = UVar12.fields.b;
    fVar10 = UVar12.fields.a;
    fVar7 = UVar12.fields.r;
    fVar8 = UVar12.fields.g;
  }
  (__this->fields)._normalBg.fields.r = fVar7;
  (__this->fields)._normalBg.fields.g = fVar8;
  (__this->fields)._normalBg.fields.b = fVar9;
  (__this->fields)._normalBg.fields.a = fVar10;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)icon,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar7 = 1.0;
  fVar8 = 1.0;
  fVar9 = fVar7;
  fVar10 = fVar8;
  if (bVar2) {
    if (icon == (UnityEngine_UI_Image_o *)0x0) goto label_053a0041;
    UVar12 = (*(icon->klass->vtable)._22_get_color.methodPtr)(icon,(icon->klass->vtable)._22_get_color.method)
    ;
    fVar9 = UVar12.fields.b;
    fVar10 = UVar12.fields.a;
    fVar7 = UVar12.fields.r;
    fVar8 = UVar12.fields.g;
  }
  (__this->fields)._normalIcon.fields.r = fVar7;
  (__this->fields)._normalIcon.fields.g = fVar8;
  (__this->fields)._normalIcon.fields.b = fVar9;
  (__this->fields)._normalIcon.fields.a = fVar10;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar7 = 1.0;
  fVar8 = 1.0;
  fVar9 = fVar7;
  fVar10 = fVar8;
  if (bVar2) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a0041;
    UVar12 = (*(label->klass->vtable)._22_get_color.methodPtr)
                       (label,(label->klass->vtable)._22_get_color.method);
    fVar9 = UVar12.fields.b;
    fVar10 = UVar12.fields.a;
    fVar7 = UVar12.fields.r;
    fVar8 = UVar12.fields.g;
  }
  (__this->fields)._normalText.fields.r = fVar7;
  (__this->fields)._normalText.fields.g = fVar8;
  (__this->fields)._normalText.fields.b = fVar9;
  (__this->fields)._normalText.fields.a = fVar10;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a0041;
    UVar3 = TMPro_TMP_Text__get_faceColor((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    (__this->fields)._normalFace.fields._overlap_0._at_rgba.rgba = (int32_t)UVar3.fields._overlap_0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    iVar4 = il2cpp_runtime_helper_05334d00(0x3f800000,0x3f800000,0);
    (__this->fields)._normalFace.fields._overlap_0._at_rgba.rgba = iVar4;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_053a0041;
    UVar12 = (*(image->klass->vtable)._22_get_color.methodPtr)
                       (image,(image->klass->vtable)._22_get_color.method);
    fVar9 = UVar12.fields.b;
    fVar7 = UVar12.fields.r;
    fVar8 = UVar12.fields.g;
  }
  else {
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_053a0041;
    UVar12.fields.b = 1.0;
    UVar12.fields.a = 1.0;
    UVar12.fields.r = 1.0;
    UVar12.fields.g = 1.0;
    UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"surface",UVar12,(MethodInfo *)0x0);
    fVar9 = UVar12.fields.b;
    fVar7 = UVar12.fields.r;
    fVar8 = UVar12.fields.g;
  }
  fVar10 = 1.0;
  fVar11 = 1.0;
  if (0.5 <= fVar9 * 0.0722 + fVar8 * 0.7152 + fVar7 * 0.2126) {
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  (__this->fields)._disabledText.fields.r = fVar10;
  (__this->fields)._disabledText.fields.g = fVar11;
  (__this->fields)._disabledText.fields.b = fVar10;
  (__this->fields)._disabledText.fields.a = 0.5;
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fallback.fields.b = 0.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 0.0;
    UVar13 = (UnityEngine_Color_Fields)
             Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"primary",fallback,(MethodInfo *)0x0);
    (__this->fields)._hoverBg.fields = UVar13;
    fallback_00.fields.b = 1.0;
    fallback_00.fields.a = 1.0;
    fallback_00.fields.r = 1.0;
    fallback_00.fields.g = 1.0;
    UVar13 = (UnityEngine_Color_Fields)
             Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"buttonText",fallback_00,(MethodInfo *)0x0);
    (__this->fields)._hoverText.fields = UVar13;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a0041;
      pSVar5 = (*(label->klass->vtable)._65_get_text.methodPtr)
                         (label,(label->klass->vtable)._65_get_text.method);
    }
    else {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    (__this->fields)._normalLabelText = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._normalLabelText);
    (__this->fields)._activeLabelText = (__this->fields)._normalLabelText;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLabelText);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)label,true,(MethodInfo *)0x0);
      viewport = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup(viewport,label,false,method_00);
      (__this->fields)._marquee = pGVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._marquee);
      return;
    }
  }
label_053a0041:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$get_NormalTextColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x53a01c0

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor
          (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._normalText.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetActiveTextColor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x539a4f0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  (__this->fields)._hoverText.fields = color.fields;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetDisabled
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool disabled, const MethodInfo* method);
// 0x5397010

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool disabled,
               MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._disabled = disabled;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT71(in_register_00000031,disabled));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a04d0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Func_bool__o *pSVar1;
  char cVar2;
  
  pSVar1 = (__this->fields)._pointerHoverAllowed;
  if (pSVar1 != (System_Func_bool__o *)0x0) {
    eventData = (UnityEngine_EventSystems_PointerEventData_o *)(pSVar1->fields).method;
    cVar2 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    if (cVar2 == '\0') {
      (__this->fields)._hovered = false;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
      return;
    }
  }
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x53a0520

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a0530

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_GameObject_o *focused;
  MethodInfo *method_00;
  
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1) {
    method_00 = (MethodInfo *)0x0;
    focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x53a0590

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool active, const MethodInfo* method);
// 0x5397020

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool active,
               MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._forced = active;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT71(in_register_00000031,active));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetPointerHoverAllowed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_Func_bool__o* allowed, const MethodInfo* method);
// 0x53a05a0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,System_Func_bool__o *allowed,
               MethodInfo *method)

{
  (__this->fields)._pointerHoverAllowed = allowed;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pointerHoverAllowed);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$ClearPointerHover
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x5397ab0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetLabelText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_String_o* normal, System_String_o* active, bool normalOwnsColor, const MethodInfo* method);
// 0x539a500

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,System_String_o *normal,
               System_String_o *active,bool normalOwnsColor,MethodInfo *method)

{
  System_String_o **targetAddress;
  
  if (normal == (System_String_o *)0x0) {
    normal = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
    ThrowNullReferenceException();
  }
  targetAddress = &(__this->fields)._normalLabelText;
  (__this->fields)._normalLabelText = normal;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (active == (System_String_o *)0x0) {
    active = *targetAddress;
  }
  (__this->fields)._activeLabelText = active;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLabelText);
  (__this->fields)._normalLabelOwnsColor = normalOwnsColor;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)active);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x53a01d0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53a02d4: jmp 0x53a04c9
// asm:   0x53a02f0: jmp 0x53a04c9
// asm:   0x53a03c3: jmp 0x53a04c9
// asm:   0x53a041b: mov rdi, r14
// asm:   0x53a041e: mov esi, eax

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar13;
  undefined4 uVar14;
  UnityEngine_UI_Image_o *pUVar15;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar16;
  UnityEngine_Color_o *pUVar17;
  UnityEngine_Color_o *pUVar18;
  bool bVar19;
  UnityEngine_Color32_o value;
  MethodInfo *method_00;
  char cVar20;
  TMPro_TextMeshProUGUI_o *pTVar21;
  UnityEngine_Color_o UVar22;
  UnityEngine_Color_o UVar23;
  UnityEngine_Color_o UVar24;
  UnityEngine_Color_o UVar25;
  
  if (Il2CppMethodInitialized_07542ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ba2 = '\x01';
  }
  cVar20 = '\0';
  if ((((__this->fields)._disabled == false) && (cVar20 = '\x01', (__this->fields)._hovered == false)) &&
     ((__this->fields)._selected == false)) {
    cVar20 = (__this->fields)._forced;
  }
  pUVar15 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar19) {
    pUVar15 = (__this->fields)._image;
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_053a04c9;
    pUVar17 = &(__this->fields)._hoverBg;
    pUVar18 = &(__this->fields)._hoverBg;
    if (cVar20 == '\0') {
      pUVar17 = &(__this->fields)._normalBg;
      pUVar18 = &(__this->fields)._normalBg;
    }
    uVar1 = (pUVar17->fields).r;
    uVar9 = (pUVar17->fields).g;
    UVar22.fields.g = (float)uVar9;
    UVar22.fields.r = (float)uVar1;
    uVar2 = (pUVar18->fields).b;
    uVar10 = (pUVar18->fields).a;
    UVar22.fields.a = (float)uVar10;
    UVar22.fields.b = (float)uVar2;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,UVar22,(pUVar15->klass->vtable)._23_set_color.method);
  }
  pUVar15 = (__this->fields)._icon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar19) {
    pUVar15 = (__this->fields)._icon;
    if ((__this->fields)._disabled == false) {
      if (cVar20 == '\0') {
        pUVar17 = &(__this->fields)._normalIcon;
        pUVar18 = &(__this->fields)._normalIcon;
      }
      else {
        pUVar17 = &(__this->fields)._hoverText;
        pUVar18 = &(__this->fields)._hoverText;
      }
    }
    else {
      pUVar17 = &(__this->fields)._disabledText;
      pUVar18 = &(__this->fields)._disabledText;
    }
    if (pUVar15 == (UnityEngine_UI_Image_o *)0x0) goto label_053a04c9;
    uVar3 = (pUVar17->fields).r;
    uVar11 = (pUVar17->fields).g;
    UVar23.fields.g = (float)uVar11;
    UVar23.fields.r = (float)uVar3;
    uVar4 = (pUVar18->fields).b;
    uVar12 = (pUVar18->fields).a;
    UVar23.fields.a = (float)uVar12;
    UVar23.fields.b = (float)uVar4;
    (*(pUVar15->klass->vtable)._23_set_color.methodPtr)
              (pUVar15,UVar23,(pUVar15->klass->vtable)._23_set_color.method);
  }
  pTVar21 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar19) {
    pTVar21 = (__this->fields)._label;
    if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
    (*(pTVar21->klass->vtable)._66_set_text.methodPtr)
              (pTVar21,*(System_String_o **)
                        (&(__this->fields)._normalFace + (ulong)(cVar20 != '\0') * 2 + 0xe),
               (pTVar21->klass->vtable)._66_set_text.method);
    if ((__this->fields)._disabled == false) {
      pTVar21 = (__this->fields)._label;
      if ((__this->fields)._normalLabelOwnsColor != false) {
        if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
        UVar24.fields.b = 1.0;
        UVar24.fields.a = 1.0;
        UVar24.fields.r = 1.0;
        UVar24.fields.g = 1.0;
        (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
                  (pTVar21,UVar24,(pTVar21->klass->vtable)._23_set_color.method);
        pTVar21 = (__this->fields)._label;
        value.fields._overlap_0 =
             (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(0x3f8000003f800000,0x3f8000003f800000,0);
        goto joined_r0x053a0415;
      }
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
      pUVar17 = &(__this->fields)._hoverText;
      pUVar18 = &(__this->fields)._hoverText;
      if (cVar20 == '\0') {
        pUVar17 = &(__this->fields)._normalText;
        pUVar18 = &(__this->fields)._normalText;
      }
      uVar5 = (pUVar17->fields).r;
      uVar13 = (pUVar17->fields).g;
      UVar25.fields.g = (float)uVar13;
      UVar25.fields.r = (float)uVar5;
      uVar6 = (pUVar18->fields).b;
      uVar14 = (pUVar18->fields).a;
      UVar25.fields.a = (float)uVar14;
      UVar25.fields.b = (float)uVar6;
      (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
                (pTVar21,UVar25,(pTVar21->klass->vtable)._23_set_color.method);
      pTVar21 = (__this->fields)._label;
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
      value.fields._overlap_0 =
           (UnityEngine_Color32_Fields)(__this->fields)._normalFace.fields._overlap_0._at_rgba.rgba;
    }
    else {
      pTVar21 = (__this->fields)._label;
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
      (*(pTVar21->klass->vtable)._23_set_color.methodPtr)
                (pTVar21,(UnityEngine_Color_o)(__this->fields)._disabledText.fields,
                 (pTVar21->klass->vtable)._23_set_color.method);
      pTVar21 = (__this->fields)._label;
      uVar7._0_4_ = (__this->fields)._disabledText.fields.r;
      uVar7._4_4_ = (__this->fields)._disabledText.fields.g;
      uVar8._0_4_ = (__this->fields)._disabledText.fields.b;
      uVar8._4_4_ = (__this->fields)._disabledText.fields.a;
      value.fields._overlap_0 = (UnityEngine_Color32_Fields)il2cpp_runtime_helper_05334d00(uVar7,uVar8,0);
joined_r0x053a0415:
      if (pTVar21 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053a04c9;
    }
    TMPro_TMP_Text__set_faceColor((TMPro_TMP_Text_o *)pTVar21,value,(MethodInfo *)0x0);
  }
  pGVar16 = (__this->fields)._marquee;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar19) {
    return;
  }
  pGVar16 = (__this->fields)._marquee;
  if (pGVar16 != (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(pGVar16,cVar20 != '\0',method_00);
    return;
  }
label_053a04c9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Muted
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted (UnityEngine_Color_o surface, const MethodInfo* method);
// 0x53a0050

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted(UnityEngine_Color_o surface,MethodInfo *method)

{
  UnityEngine_Color_o UVar1;
  
  if (surface.fields.b * 0.0722 + surface.fields.g * 0.7152 + surface.fields.r * 0.2126 < 0.5) {
    UVar1.fields.b = 1.0;
    UVar1.fields.a = 0.5;
    UVar1.fields.r = 1.0;
    UVar1.fields.g = 1.0;
    return (UnityEngine_Color_o)UVar1.fields;
  }
  return (UnityEngine_Color_Fields)(ZEXT816(0x3f00000000000000) << 0x40);
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Luminance
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance (UnityEngine_Color_o color, const MethodInfo* method);
// 0x53a05d0

float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance
                (UnityEngine_Color_o color,MethodInfo *method)

{
  return color.fields.r * 0.2126 + color.fields.g * 0.7152 + color.fields.b * 0.0722;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x53a05f0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


