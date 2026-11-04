// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDropdownItemFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_UI_Image_o* image, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o* icon, const MethodInfo* method);
// 0x1818fe570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818feaef: mov rsi, r14

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_UI_Image_o *image
               ,TMPro_TextMeshProUGUI_o *label,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               UnityEngine_UI_Image_o *icon,MethodInfo *method)

{
  bool bVar1;
  _union_53103 _Var2;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar3;
  UnityEngine_Color_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_o local_58 [3];
  
  if (Il2CppMethodInitialized_184342222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_184342222 = '\x01';
  }
  (__this->fields)._image = image;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image,image);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,icon);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar11 = 0.0;
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_1818feb1d;
    pUVar3 = (*(image->klass->vtable)._22_get_color.methodPtr)
                       ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_68,image,
                        (image->klass->vtable)._22_get_color.method);
    fVar10 = *(float *)&(pUVar3->fields).m_Ptr;
    fVar6 = *(float *)((longlong)&(pUVar3->fields).m_Ptr + 4);
    fVar7 = (float)(pUVar3->fields).m_Count;
    fVar8 = *(float *)&(pUVar3->fields).field_0xc;
  }
  else {
    fVar10 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  (__this->fields)._normalBg.fields.r = fVar10;
  (__this->fields)._normalBg.fields.g = fVar6;
  (__this->fields)._normalBg.fields.b = fVar7;
  (__this->fields)._normalBg.fields.a = fVar8;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)icon,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = 1.0;
  if (bVar1) {
    if (icon == (UnityEngine_UI_Image_o *)0x0) goto label_1818feb1d;
    pUVar3 = (*(icon->klass->vtable)._22_get_color.methodPtr)
                       ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_68,icon,
                        (icon->klass->vtable)._22_get_color.method);
    fVar6 = *(float *)&(pUVar3->fields).m_Ptr;
    fVar7 = *(float *)((longlong)&(pUVar3->fields).m_Ptr + 4);
    fVar8 = (float)(pUVar3->fields).m_Count;
    fVar9 = *(float *)&(pUVar3->fields).field_0xc;
  }
  else {
    fVar6 = 1.0;
    fVar7 = 1.0;
    fVar8 = 1.0;
    fVar9 = 1.0;
  }
  (__this->fields)._normalIcon.fields.r = fVar6;
  (__this->fields)._normalIcon.fields.g = fVar7;
  (__this->fields)._normalIcon.fields.b = fVar8;
  (__this->fields)._normalIcon.fields.a = fVar9;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818feb1d;
    pUVar4 = (*(label->klass->vtable)._22_get_color.methodPtr)
                       ((UnityEngine_Color_o *)&local_68,label,(label->klass->vtable)._22_get_color.method);
    fVar6 = (pUVar4->fields).r;
    fVar7 = (pUVar4->fields).g;
    fVar8 = (pUVar4->fields).b;
    fVar9 = (pUVar4->fields).a;
  }
  else {
    fVar6 = 1.0;
    fVar7 = 1.0;
    fVar8 = 1.0;
    fVar9 = 1.0;
  }
  (__this->fields)._normalText.fields.r = fVar6;
  (__this->fields)._normalText.fields.g = fVar7;
  (__this->fields)._normalText.fields.b = fVar8;
  (__this->fields)._normalText.fields.a = fVar9;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818feb1d;
    _Var2._at_rgba.rgba =
         (_struct_53104)TMPro_TMP_Text__get_faceColor((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
  }
  else {
    local_68.r = 1.0;
    local_68.g = 1.0;
    local_68.b = 1.0;
    local_68.a = 1.0;
    _Var2._at_rgba.rgba =
         (_struct_53104)UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
  }
  (__this->fields)._normalFace.fields._overlap_0._at_rgba.rgba = (int32_t)_Var2;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0;
  if (bVar1) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_1818feb1d;
    pUVar4 = (UnityEngine_Color_o *)
             (*(image->klass->vtable)._22_get_color.methodPtr)
                       ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_68,image,
                        (image->klass->vtable)._22_get_color.method);
  }
  else {
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818feb1d;
    local_68.r = 1.0;
    local_68.g = 1.0;
    local_68.b = 1.0;
    local_68.a = 1.0;
    pUVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (local_58,theme,"surface",(UnityEngine_Color_o *)&local_68,
                        (MethodInfo *)0x0);
  }
  if (0.5 <= (pUVar4->fields).g * 0.7152 + (pUVar4->fields).r * 0.2126 + (pUVar4->fields).b * 0.0722) {
    fVar10 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar11 = 1.0;
    fVar6 = 1.0;
  }
  (__this->fields)._disabledText.fields.r = fVar10;
  (__this->fields)._disabledText.fields.g = fVar11;
  (__this->fields)._disabledText.fields.b = fVar6;
  (__this->fields)._disabledText.fields.a = 0.5;
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818feb1d;
  local_68.r = 1.0;
  local_68.g = 0.0;
  local_68.b = 0.0;
  local_68.a = 1.0;
  pUVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (local_58,theme,"primary",(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0)
  ;
  local_68.r = 1.0;
  local_68.g = 1.0;
  local_68.b = 1.0;
  local_68.a = 1.0;
  fVar11 = (pUVar4->fields).g;
  fVar10 = (pUVar4->fields).b;
  fVar6 = (pUVar4->fields).a;
  (__this->fields)._hoverBg.fields.r = (pUVar4->fields).r;
  (__this->fields)._hoverBg.fields.g = fVar11;
  (__this->fields)._hoverBg.fields.b = fVar10;
  (__this->fields)._hoverBg.fields.a = fVar6;
  pUVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (local_58,theme,"buttonText",(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0)
  ;
  fVar11 = (pUVar4->fields).g;
  fVar10 = (pUVar4->fields).b;
  fVar6 = (pUVar4->fields).a;
  (__this->fields)._hoverText.fields.r = (pUVar4->fields).r;
  (__this->fields)._hoverText.fields.g = fVar11;
  (__this->fields)._hoverText.fields.b = fVar10;
  (__this->fields)._hoverText.fields.a = fVar6;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818feb1d;
    pSVar5 = (*(label->klass->vtable)._65_get_text.methodPtr)
                       (label,(label->klass->vtable)._65_get_text.method);
  }
  else {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._normalLabelText = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._normalLabelText,pSVar5);
  pSVar5 = (__this->fields)._normalLabelText;
  (__this->fields)._activeLabelText = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLabelText,pSVar5);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818feb1d;
    TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)label,true,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342224 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342224 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) {
label_1818feb1d:
          ThrowNullReferenceException();
        }
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)x,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_GisketchHoverMarqueeText);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = UnityEngine_GameObject__AddComponent_object_
                                ((UnityEngine_GameObject_o *)x,
                                 (MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchHoverMarqueeText);
        }
        if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) goto label_1818feb1d;
        Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure(__this_00,label,false,(MethodInfo *)0x0)
        ;
      }
    }
    (__this->fields)._marquee = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._marquee,__this_00);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$get_NormalTextColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x1818feb30

UnityEngine_Color_o *
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor
          (UnityEngine_Color_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields)._normalText.fields.g;
  fVar2 = (__this->fields)._normalText.fields.b;
  fVar3 = (__this->fields)._normalText.fields.a;
  (__return_storage_ptr__->fields).r = (__this->fields)._normalText.fields.r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetActiveTextColor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1818fe4a0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_Color_o *color,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (color->fields).g;
  fVar2 = (color->fields).b;
  fVar3 = (color->fields).a;
  (__this->fields)._hoverText.fields.r = (color->fields).r;
  (__this->fields)._hoverText.fields.g = fVar1;
  (__this->fields)._hoverText.fields.b = fVar2;
  (__this->fields)._hoverText.fields.a = fVar3;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetDisabled
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool disabled, const MethodInfo* method);
// 0x1818fe4c0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool disabled,
               MethodInfo *method)

{
  (__this->fields)._disabled = disabled;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fe120

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Func_bool__o *pSVar1;
  char cVar2;
  bool bVar3;
  
  if ((__this->fields)._pointerHoverAllowed != (System_Func_bool__o *)0x0) {
    pSVar1 = (__this->fields)._pointerHoverAllowed;
    cVar2 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    bVar3 = false;
    if (cVar2 == '\0') goto label_1818fe14b;
  }
  bVar3 = true;
label_1818fe14b:
  (__this->fields)._hovered = bVar3;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fe060

void
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit(Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fe160

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_GameObject_o *focused;
  
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184341f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_184341f35 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1) {
    focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fe110

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool active, const MethodInfo* method);
// 0x1818fe4d0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool active,
               MethodInfo *method)

{
  (__this->fields)._forced = active;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetPointerHoverAllowed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_Func_bool__o* allowed, const MethodInfo* method);
// 0x180c8ffc0

void
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed(Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_Func_bool__o* allowed, MethodInfo* method)

{
  (__this->fields)._pointerHoverAllowed = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pointerHoverAllowed,value);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$ClearPointerHover
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x1818fe060

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetLabelText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_String_o* normal, System_String_o* active, bool normalOwnsColor, const MethodInfo* method);
// 0x1818fe4e0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,System_String_o *normal,
               System_String_o *active,bool normalOwnsColor,MethodInfo *method)

{
  if (normal == (System_String_o *)0x0) {
    normal = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
    (__this->fields)._normalLabelText = normal;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._normalLabelText,normal);
    if (active == (System_String_o *)0x0) {
      active = (__this->fields)._normalLabelText;
    }
    (__this->fields)._activeLabelText = active;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activeLabelText,active);
    (__this->fields)._normalLabelOwnsColor = normalOwnsColor;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x1818fe1d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fe436: mov rcx, rdi
// asm:   0x1818fe439: mov edx, eax

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar2;
  bool bVar3;
  _union_53103 value;
  TMPro_TextMeshProUGUI_o *pTVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184342223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342223 = '\x01';
  }
  if ((__this->fields)._disabled == false) {
    if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
      cVar6 = (__this->fields)._forced;
    }
    else {
      cVar6 = '\x01';
    }
  }
  else {
    cVar6 = '\0';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._image;
    if (cVar6 == '\0') {
      uVar7._0_4_ = (__this->fields)._normalBg.fields.r;
      uVar7._4_4_ = (__this->fields)._normalBg.fields.g;
      uVar10._0_4_ = (__this->fields)._normalBg.fields.b;
      uVar10._4_4_ = (__this->fields)._normalBg.fields.a;
    }
    else {
      uVar7._0_4_ = (__this->fields)._hoverBg.fields.r;
      uVar7._4_4_ = (__this->fields)._hoverBg.fields.g;
      uVar10._0_4_ = (__this->fields)._hoverBg.fields.b;
      uVar10._4_4_ = (__this->fields)._hoverBg.fields.a;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fe491;
    local_38._0_8_ = uVar7;
    local_38._8_8_ = uVar10;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(UnityEngine_Color_o *)&local_38,(pUVar1->klass->vtable)._23_set_color.method);
  }
  pUVar1 = (__this->fields)._icon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar1 = (__this->fields)._icon;
    if ((__this->fields)._disabled == false) {
      if (cVar6 == '\0') {
        uVar8._0_4_ = (__this->fields)._normalIcon.fields.r;
        uVar8._4_4_ = (__this->fields)._normalIcon.fields.g;
        uVar11._0_4_ = (__this->fields)._normalIcon.fields.b;
        uVar11._4_4_ = (__this->fields)._normalIcon.fields.a;
      }
      else {
        uVar8._0_4_ = (__this->fields)._hoverText.fields.r;
        uVar8._4_4_ = (__this->fields)._hoverText.fields.g;
        uVar11._0_4_ = (__this->fields)._hoverText.fields.b;
        uVar11._4_4_ = (__this->fields)._hoverText.fields.a;
      }
    }
    else {
      uVar8._0_4_ = (__this->fields)._disabledText.fields.r;
      uVar8._4_4_ = (__this->fields)._disabledText.fields.g;
      uVar11._0_4_ = (__this->fields)._disabledText.fields.b;
      uVar11._4_4_ = (__this->fields)._disabledText.fields.a;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fe491;
    local_38._0_8_ = uVar8;
    local_38._8_8_ = uVar11;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(UnityEngine_Color_o *)&local_38,(pUVar1->klass->vtable)._23_set_color.method);
  }
  pTVar4 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar4 = (__this->fields)._label;
    lVar5 = 0xa8;
    if (cVar6 == '\0') {
      lVar5 = 0xa0;
    }
    if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
    (*(pTVar4->klass->vtable)._66_set_text.methodPtr)
              (pTVar4,*(System_String_o **)((longlong)&__this->klass + lVar5),
               (pTVar4->klass->vtable)._66_set_text.method);
    pTVar4 = (__this->fields)._label;
    if ((__this->fields)._disabled == false) {
      if ((__this->fields)._normalLabelOwnsColor != false) {
        if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
        local_38.r = 1.0;
        local_38.g = 1.0;
        local_38.b = 1.0;
        local_38.a = 1.0;
        (*(pTVar4->klass->vtable)._23_set_color.methodPtr)
                  (pTVar4,(UnityEngine_Color_o *)&local_38,(pTVar4->klass->vtable)._23_set_color.method);
        local_38.r = 1.0;
        local_38.g = 1.0;
        local_38.b = 1.0;
        local_38.a = 1.0;
        goto label_1818fe41c;
      }
      if (cVar6 == '\0') {
        uVar9._0_4_ = (__this->fields)._normalText.fields.r;
        uVar9._4_4_ = (__this->fields)._normalText.fields.g;
        uVar12._0_4_ = (__this->fields)._normalText.fields.b;
        uVar12._4_4_ = (__this->fields)._normalText.fields.a;
      }
      else {
        uVar9._0_4_ = (__this->fields)._hoverText.fields.r;
        uVar9._4_4_ = (__this->fields)._hoverText.fields.g;
        uVar12._0_4_ = (__this->fields)._hoverText.fields.b;
        uVar12._4_4_ = (__this->fields)._hoverText.fields.a;
      }
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
      local_38._0_8_ = uVar9;
      local_38._8_8_ = uVar12;
      (*(pTVar4->klass->vtable)._23_set_color.methodPtr)
                (pTVar4,(UnityEngine_Color_o *)&local_38,(pTVar4->klass->vtable)._23_set_color.method);
      pTVar4 = (__this->fields)._label;
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
      value = (_union_53103)(__this->fields)._normalFace.fields._overlap_0._at_rgba.rgba;
    }
    else {
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
      local_38.r = (__this->fields)._disabledText.fields.r;
      local_38.g = (__this->fields)._disabledText.fields.g;
      local_38.b = (__this->fields)._disabledText.fields.b;
      local_38.a = (__this->fields)._disabledText.fields.a;
      (*(pTVar4->klass->vtable)._23_set_color.methodPtr)
                (pTVar4,(UnityEngine_Color_o *)&local_38,(pTVar4->klass->vtable)._23_set_color.method);
      local_38.r = (__this->fields)._disabledText.fields.r;
      local_38.g = (__this->fields)._disabledText.fields.g;
      local_38.b = (__this->fields)._disabledText.fields.b;
      local_38.a = (__this->fields)._disabledText.fields.a;
label_1818fe41c:
      pTVar4 = (__this->fields)._label;
      value._at_rgba.rgba =
           (_struct_53104)UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0)
      ;
      if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fe491;
    }
    TMPro_TMP_Text__set_faceColor((TMPro_TMP_Text_o *)pTVar4,(UnityEngine_Color32_o)value,(MethodInfo *)0x0);
  }
  pGVar2 = (__this->fields)._marquee;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields)._marquee;
    if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
label_1818fe491:
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh(pGVar2,cVar6 != '\0',(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Muted
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted (UnityEngine_Color_o surface, const MethodInfo* method);
// 0x1818fe0a0

UnityEngine_Color_o *
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted
          (UnityEngine_Color_o *__return_storage_ptr__,UnityEngine_Color_o *surface,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (0.5 <= (surface->fields).g * 0.7152 + (surface->fields).r * 0.2126 + (surface->fields).b * 0.0722) {
    fVar1 = 0.0;
    fVar2 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar1 = 1.0;
    fVar2 = 1.0;
    fVar3 = 1.0;
  }
  (__return_storage_ptr__->fields).r = fVar1;
  (__return_storage_ptr__->fields).g = fVar2;
  (__return_storage_ptr__->fields).b = fVar3;
  (__return_storage_ptr__->fields).a = 0.5;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Luminance
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance (UnityEngine_Color_o color, const MethodInfo* method);
// 0x1818fe070

float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance
                (UnityEngine_Color_o *color,MethodInfo *method)

{
  return (color->fields).g * 0.7152 + (color->fields).r * 0.2126 + (color->fields).b * 0.0722;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor(Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


