// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDropdownItemFeedback.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_UI_Image_o* image, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o* icon, const MethodInfo* method);
// 0x3b28340

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_UI_Image_o *image,TMPro_TextMeshProUGUI_o *label,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,UnityEngine_UI_Image_o *icon,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_Color32_o UVar4;
  System_String_o *pSVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Color_o fallback;
  
  if (DAT_057015b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"surface");
    il2cpp_init_method_metadata(&"buttonText");
    DAT_057015b3 = '\x01';
  }
  (__this->fields)._image = image;
  il2cpp_runtime_glue(&(__this->fields)._image,image);
  (__this->fields)._icon = icon;
  il2cpp_runtime_glue(&(__this->fields)._icon,icon);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar6 = 0;
  fVar7 = 0.0;
  fVar9 = 0.0;
  if ((char)bVar2 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b2870e;
    uVar6 = (*(image->klass->vtable)._22_get_color.methodPtr)(image);
  }
  (__this->fields)._normalBg.fields.r = (float)(int)uVar6;
  (__this->fields)._normalBg.fields.g = (float)(int)((ulong)uVar6 >> 0x20);
  (__this->fields)._normalBg.fields.b = fVar7;
  (__this->fields)._normalBg.fields.a = fVar9;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)icon,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar7 = 1.0;
    fVar9 = 1.0;
    uVar6 = 0x3f8000003f800000;
  }
  else {
    if (icon == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b2870e;
    uVar6 = (*(icon->klass->vtable)._22_get_color.methodPtr)(icon);
  }
  (__this->fields)._normalIcon.fields.r = (float)(int)uVar6;
  (__this->fields)._normalIcon.fields.g = (float)(int)((ulong)uVar6 >> 0x20);
  (__this->fields)._normalIcon.fields.b = fVar7;
  (__this->fields)._normalIcon.fields.a = fVar9;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar7 = 1.0;
    fVar9 = 1.0;
    uVar6 = 0x3f8000003f800000;
  }
  else {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b2870e;
    uVar6 = (*(label->klass->vtable)._22_get_color.methodPtr)(label);
  }
  (__this->fields)._normalText.fields.r = (float)(int)uVar6;
  (__this->fields)._normalText.fields.g = (float)(int)((ulong)uVar6 >> 0x20);
  (__this->fields)._normalText.fields.b = fVar7;
  (__this->fields)._normalText.fields.a = fVar9;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar7 = 1.0;
    iVar3 = il2cpp_glue_03ad8d60(0);
    (__this->fields)._normalFace.fields.rgba = iVar3;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b2870e;
    UVar4 = TMPro_TMP_Text__get_faceColor((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    (__this->fields)._normalFace.fields.rgba = UVar4.fields.rgba;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto LAB_03b2870e;
    UVar10.fields.b = 1.0;
    UVar10.fields.a = 1.0;
    UVar10.fields.r = 1.0;
    UVar10.fields.g = 1.0;
    UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"surface",UVar10,(MethodInfo *)0x0);
    fVar7 = UVar10.fields.b;
    uVar6 = UVar10.fields._0_8_;
  }
  else {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b2870e;
    uVar6 = (*(image->klass->vtable)._22_get_color.methodPtr)
                      (image,(image->klass->vtable)._22_get_color.method);
  }
  fVar9 = 0.0;
  if (fVar7 * 0.0722 + (float)((ulong)uVar6 >> 0x20) * 0.7152 + (float)uVar6 * 0.2126 < 0.5) {
    uVar8 = 0x3f800000;
    fVar7 = 1.0;
    fVar9 = 1.0;
  }
  else {
    uVar8 = 0;
    fVar7 = 0.0;
  }
  (__this->fields)._normalFace.fields.r = (char)uVar8;
  (__this->fields)._normalFace.fields.g = (char)((uint)uVar8 >> 8);
  (__this->fields)._normalFace.fields.b = (char)((uint)uVar8 >> 0x10);
  (__this->fields)._normalFace.fields.a = (char)((uint)uVar8 >> 0x18);
  (__this->fields)._disabledText.fields.r = fVar7;
  (__this->fields)._disabledText.fields.g = fVar9;
  (__this->fields)._disabledText.fields.b = 0.5;
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fallback.fields.b = 0.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 0.0;
    UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"primary",fallback,(MethodInfo *)0x0);
    *(UnityEngine_Color_Fields *)&(__this->fields)._disabledText.fields.a = UVar10.fields;
    fallback_00.fields.b = 1.0;
    fallback_00.fields.a = 1.0;
    fallback_00.fields.r = 1.0;
    fallback_00.fields.g = 1.0;
    UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"buttonText",fallback_00,(MethodInfo *)0x0);
    *(UnityEngine_Color_Fields *)&(__this->fields)._hoverBg.fields.a = UVar10.fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    else {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b2870e;
      pSVar5 = (System_String_o *)
               (*(label->klass->vtable)._65_get_text.methodPtr)
                         (label,(label->klass->vtable)._65_get_text.method);
    }
    (__this->fields)._normalLabelText = pSVar5;
    il2cpp_runtime_glue(&(__this->fields)._normalLabelText);
    (__this->fields)._activeLabelText = (__this->fields)._normalLabelText;
    il2cpp_runtime_glue(&(__this->fields)._activeLabelText);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)label,1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03b2870e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$get_NormalTextColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b28780

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor
          (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._normalText.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetActiveTextColor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3b23ad0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_Color_o color,MethodInfo *method)

{
  *(UnityEngine_Color_Fields *)&(__this->fields)._hoverBg.fields.a = color.fields;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetDisabled
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool disabled, const MethodInfo* method);
// 0x3b20540

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               bool_conflict disabled,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 3) = (char)disabled;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,disabled));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b28a50

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
      *(undefined1 *)&(__this->fields)._hovered = 0;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                (__this,(MethodInfo *)eventData);
      return;
    }
  }
  *(undefined1 *)&(__this->fields)._hovered = 1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b28aa0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 0;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b28ab0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_GameObject_o *focused;
  MethodInfo *method_00;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  method_00 = (MethodInfo *)0x0;
  focused = UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b28ae0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool active, const MethodInfo* method);
// 0x3b20550

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               bool_conflict active,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 2) = (char)active;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetPointerHoverAllowed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_Func_bool__o* allowed, const MethodInfo* method);
// 0x3b28af0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               System_Func_bool__o *allowed,MethodInfo *method)

{
  (__this->fields)._pointerHoverAllowed = allowed;
  il2cpp_runtime_glue(&(__this->fields)._pointerHoverAllowed);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$ClearPointerHover
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b21020

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 0;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetLabelText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_String_o* normal, System_String_o* active, bool normalOwnsColor, const MethodInfo* method);
// 0x3b23ae0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               System_String_o *normal,System_String_o *active,bool_conflict normalOwnsColor,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if (normal == (System_String_o *)0x0) {
    normal = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
    ppSVar1 = &(__this->fields)._normalLabelText;
    (__this->fields)._normalLabelText = normal;
    il2cpp_runtime_glue(ppSVar1);
    if (active == (System_String_o *)0x0) {
      active = *ppSVar1;
    }
    (__this->fields)._activeLabelText = active;
    il2cpp_runtime_glue(&(__this->fields)._activeLabelText);
    *(char *)&(__this->fields)._normalLabelOwnsColor = (char)normalOwnsColor;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)active);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b28790

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  bool_conflict bVar8;
  uint uVar9;
  UnityEngine_Color32_o value;
  float *pfVar10;
  char cVar11;
  TMPro_TextMeshProUGUI_o *pTVar12;
  
  if (DAT_057015b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015b4 = '\x01';
  }
  cVar11 = '\0';
  if (((*(char *)((long)&(__this->fields)._hovered + 3) == '\0') &&
      (cVar11 = '\x01', (char)(__this->fields)._hovered == '\0')) &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    cVar11 = *(char *)((long)&(__this->fields)._hovered + 2);
  }
  pUVar6 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar6 = (__this->fields)._image;
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b28a45;
    pfVar10 = &(__this->fields)._normalBg.fields.b;
    pUVar7 = &(__this->fields)._normalBg;
    if (cVar11 != '\0') {
      pfVar10 = &(__this->fields)._hoverBg.fields.g;
      pUVar7 = (UnityEngine_Color_o *)&(__this->fields)._disabledText.fields.a;
    }
    uVar1._0_4_ = (pUVar7->fields).r;
    uVar1._4_4_ = (pUVar7->fields).g;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)(uVar1,*(undefined8 *)pfVar10);
  }
  pUVar6 = (__this->fields)._icon;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar6 = (__this->fields)._icon;
    if (*(char *)((long)&(__this->fields)._hovered + 3) == '\0') {
      if (cVar11 == '\0') {
        pUVar7 = &(__this->fields)._normalIcon;
        pfVar10 = &(__this->fields)._normalIcon.fields.b;
      }
      else {
        pUVar7 = (UnityEngine_Color_o *)&(__this->fields)._hoverBg.fields.a;
        pfVar10 = &(__this->fields)._hoverText.fields.g;
      }
    }
    else {
      pUVar7 = (UnityEngine_Color_o *)&(__this->fields)._normalFace.fields.r;
      pfVar10 = &(__this->fields)._disabledText.fields.g;
    }
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b28a45;
    uVar2._0_4_ = (pUVar7->fields).r;
    uVar2._4_4_ = (pUVar7->fields).g;
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)(uVar2,*(undefined8 *)pfVar10);
  }
  pTVar12 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pTVar12 = (__this->fields)._label;
  if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b28a45;
  (*(pTVar12->klass->vtable)._66_set_text.methodPtr)
            (pTVar12,(&(__this->fields)._normalLabelText)[cVar11 != '\0'],
             (pTVar12->klass->vtable)._66_set_text.method);
  if (*(char *)((long)&(__this->fields)._hovered + 3) == '\0') {
    pTVar12 = (__this->fields)._label;
    if ((char)(__this->fields)._normalLabelOwnsColor == '\0') {
      if (pTVar12 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pfVar10 = &(__this->fields)._normalText.fields.b;
        pUVar7 = &(__this->fields)._normalText;
        if (cVar11 != '\0') {
          pfVar10 = &(__this->fields)._hoverText.fields.g;
          pUVar7 = (UnityEngine_Color_o *)&(__this->fields)._hoverBg.fields.a;
        }
        uVar5._0_4_ = (pUVar7->fields).r;
        uVar5._4_4_ = (pUVar7->fields).g;
        (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
                  (uVar5,*(undefined8 *)pfVar10,pTVar12,
                   (pTVar12->klass->vtable)._23_set_color.method);
        pTVar12 = (__this->fields)._label;
        if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b28a45;
        uVar9 = (__this->fields)._normalFace.fields.rgba;
        goto LAB_03b289e4;
      }
      goto LAB_03b28a45;
    }
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b28a45;
    (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
              (0x3f8000003f800000,0x3f8000003f800000,pTVar12,
               (pTVar12->klass->vtable)._23_set_color.method);
    pTVar12 = (__this->fields)._label;
    uVar9 = il2cpp_glue_03ad8d60(0x3f8000003f800000,0x3f8000003f800000,0);
  }
  else {
    pTVar12 = (__this->fields)._label;
    if (pTVar12 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b28a45;
    uVar3._0_4_ = (__this->fields)._disabledText.fields.g;
    uVar3._4_4_ = (__this->fields)._disabledText.fields.b;
    (*(pTVar12->klass->vtable)._23_set_color.methodPtr)
              (*(undefined8 *)&(__this->fields)._normalFace.fields.r,uVar3,pTVar12,
               (pTVar12->klass->vtable)._23_set_color.method);
    pTVar12 = (__this->fields)._label;
    uVar4._0_4_ = (__this->fields)._disabledText.fields.g;
    uVar4._4_4_ = (__this->fields)._disabledText.fields.b;
    uVar9 = il2cpp_glue_03ad8d60(*(undefined8 *)&(__this->fields)._normalFace.fields.r,uVar4,0);
  }
  if (pTVar12 != (TMPro_TextMeshProUGUI_o *)0x0) {
LAB_03b289e4:
    value.fields.r = '\0';
    value.fields.g = '\0';
    value.fields.b = '\0';
    value.fields.a = '\0';
    value.fields.rgba = uVar9;
    TMPro_TMP_Text__set_faceColor((TMPro_TMP_Text_o *)pTVar12,value,(MethodInfo *)0x0);
    return;
  }
LAB_03b28a45:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Muted
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted (UnityEngine_Color_o surface, const MethodInfo* method);
// 0x3b28720

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted
          (UnityEngine_Color_o surface,MethodInfo *method)

{
  undefined8 uVar1;
  undefined4 uVar2;
  UnityEngine_Color_o UVar3;
  
  uVar2 = 0;
  if (surface.fields.b * 0.0722 + surface.fields.g * 0.7152 + surface.fields.r * 0.2126 < 0.5) {
    uVar1 = 0x3f8000003f800000;
    uVar2 = 0x3f800000;
  }
  else {
    uVar1 = 0;
  }
  UVar3.fields.a = 0.5;
  UVar3.fields.b = (float)uVar2;
  UVar3.fields.r = (float)(int)uVar1;
  UVar3.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
  return (UnityEngine_Color_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Luminance
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance (UnityEngine_Color_o color, const MethodInfo* method);
// 0x3b28b10

float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance
                (UnityEngine_Color_o color,MethodInfo *method)

{
  return color.fields.g * 0.7152 + color.fields.r * 0.2126 + color.fields.b * 0.0722;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b28b40

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


