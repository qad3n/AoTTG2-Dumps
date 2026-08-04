// Type: Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDropdownItemFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_UI_Image_o* image, TMPro_TextMeshProUGUI_o* label, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o* icon, const MethodInfo* method);
// 0x3b943f0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_UI_Image_o *image
               ,TMPro_TextMeshProUGUI_o *label,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               UnityEngine_UI_Image_o *icon,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  UnityEngine_Color32_o UVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *viewport;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar6;
  MethodInfo *method_00;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  UnityEngine_Color_o UVar11;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Color_o fallback;
  
  method_00 = (MethodInfo *)theme;
  if (g_data_057a9ee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"primary");
    il2cpp_runtime_helper_023445d0(&"surface");
    il2cpp_runtime_helper_023445d0(&"buttonText");
    g_data_057a9ee2 = '\x01';
  }
  (__this->fields)._image = image;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image,image);
  (__this->fields)._icon = icon;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._icon,icon);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar7 = 0;
  fVar8 = 0.0;
  fVar10 = 0.0;
  if ((char)bVar2 != '\0') {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b947eb;
    uVar7 = (*(image->klass->vtable)._22_get_color.methodPtr)(image);
  }
  (__this->fields)._normalBg.fields.r = (float)(int)uVar7;
  (__this->fields)._normalBg.fields.g = (float)(int)((ulong)uVar7 >> 0x20);
  (__this->fields)._normalBg.fields.b = fVar8;
  (__this->fields)._normalBg.fields.a = fVar10;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)icon,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar8 = 1.0;
    fVar10 = 1.0;
    uVar7 = 0x3f8000003f800000;
  }
  else {
    if (icon == (UnityEngine_UI_Image_o *)0x0) goto label_03b947eb;
    uVar7 = (*(icon->klass->vtable)._22_get_color.methodPtr)(icon);
  }
  (__this->fields)._normalIcon.fields.r = (float)(int)uVar7;
  (__this->fields)._normalIcon.fields.g = (float)(int)((ulong)uVar7 >> 0x20);
  (__this->fields)._normalIcon.fields.b = fVar8;
  (__this->fields)._normalIcon.fields.a = fVar10;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar8 = 1.0;
    fVar10 = 1.0;
    uVar7 = 0x3f8000003f800000;
  }
  else {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b947eb;
    uVar7 = (*(label->klass->vtable)._22_get_color.methodPtr)(label);
  }
  (__this->fields)._normalText.fields.r = (float)(int)uVar7;
  (__this->fields)._normalText.fields.g = (float)(int)((ulong)uVar7 >> 0x20);
  (__this->fields)._normalText.fields.b = fVar8;
  (__this->fields)._normalText.fields.a = fVar10;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    fVar8 = 1.0;
    iVar3 = il2cpp_runtime_helper_03b428b0(0);
    (__this->fields)._normalFace.fields.rgba = iVar3;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b947eb;
    UVar4 = TMPro_TMP_Text__get_faceColor((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    (__this->fields)._normalFace.fields.rgba = UVar4.fields.rgba;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b947eb;
    UVar11.fields.b = 1.0;
    UVar11.fields.a = 1.0;
    UVar11.fields.r = 1.0;
    UVar11.fields.g = 1.0;
    UVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(theme,"surface",UVar11,(MethodInfo *)0x0);
    fVar8 = UVar11.fields.b;
    uVar7 = UVar11.fields._0_8_;
  }
  else {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b947eb;
    uVar7 = (*(image->klass->vtable)._22_get_color.methodPtr)
                      (image,(image->klass->vtable)._22_get_color.method);
  }
  fVar10 = 0.0;
  if (fVar8 * 0.0722 + (float)((ulong)uVar7 >> 0x20) * 0.7152 + (float)uVar7 * 0.2126 < 0.5) {
    uVar9 = 0x3f800000;
    fVar8 = 1.0;
    fVar10 = 1.0;
  }
  else {
    uVar9 = 0;
    fVar8 = 0.0;
  }
  (__this->fields)._normalFace.fields.r = (char)uVar9;
  (__this->fields)._normalFace.fields.g = (char)((uint)uVar9 >> 8);
  (__this->fields)._normalFace.fields.b = (char)((uint)uVar9 >> 0x10);
  (__this->fields)._normalFace.fields.a = (char)((uint)uVar9 >> 0x18);
  (__this->fields)._disabledText.fields.r = fVar8;
  (__this->fields)._disabledText.fields.g = fVar10;
  (__this->fields)._disabledText.fields.b = 0.5;
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fallback.fields.b = 0.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 0.0;
    UVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(theme,"primary",fallback,(MethodInfo *)0x0);
    *(UnityEngine_Color_Fields *)&(__this->fields)._disabledText.fields.a = UVar11.fields;
    fallback_00.fields.b = 1.0;
    fallback_00.fields.a = 1.0;
    fallback_00.fields.r = 1.0;
    fallback_00.fields.g = 1.0;
    UVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"buttonText",fallback_00,(MethodInfo *)0x0);
    *(UnityEngine_Color_Fields *)&(__this->fields)._hoverBg.fields.a = UVar11.fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b947eb;
      pSVar5 = (System_String_o *)
               (*(label->klass->vtable)._65_get_text.methodPtr)
                         (label,(label->klass->vtable)._65_get_text.method);
    }
    (__this->fields)._normalLabelText = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._normalLabelText);
    (__this->fields)._activeLabelText = (__this->fields)._normalLabelText;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._activeLabelText);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)label,1,(MethodInfo *)0x0);
      viewport = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup(viewport,label,0,method_00);
      (__this->fields)._marquee = pGVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._marquee,pGVar6);
      return;
    }
  }
label_03b947eb:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$get_NormalTextColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b94960

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__get_NormalTextColor
          (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields)._normalText.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetActiveTextColor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3b8fc20

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetActiveTextColor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,UnityEngine_Color_o color,
               MethodInfo *method)

{
  *(UnityEngine_Color_Fields *)&(__this->fields)._hoverBg.fields.a = color.fields;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetDisabled
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, bool disabled, const MethodInfo* method);
// 0x3b8c700

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetDisabled
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool_conflict disabled,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 3) = (char)disabled;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,disabled));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b94c70

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
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
      return;
    }
  }
  *(undefined1 *)&(__this->fields)._hovered = 1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b94cc0

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
// 0x3b94cd0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_GameObject_o *focused;
  MethodInfo *method_00;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)eventData);
  method_00 = (MethodInfo *)0x0;
  focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b94d00

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
// 0x3b8c710

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,bool_conflict active,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 2) = (char)active;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetPointerHoverAllowed
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_Func_bool__o* allowed, const MethodInfo* method);
// 0x3b94d10

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetPointerHoverAllowed
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,System_Func_bool__o *allowed,
               MethodInfo *method)

{
  (__this->fields)._pointerHoverAllowed = allowed;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pointerHoverAllowed);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$ClearPointerHover
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b8d1e0

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__ClearPointerHover
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 0;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$SetLabelText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, System_String_o* normal, System_String_o* active, bool normalOwnsColor, const MethodInfo* method);
// 0x3b8fc30

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__SetLabelText
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,System_String_o *normal,
               System_String_o *active,bool_conflict normalOwnsColor,MethodInfo *method)

{
  System_String_o **ppSVar1;
  undefined4 extraout_EDX;
  
  if (normal == (System_String_o *)0x0) {
    normal = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) {
    ppSVar1 = &(__this->fields)._normalLabelText;
    (__this->fields)._normalLabelText = normal;
    il2cpp_runtime_helper_022b4080(ppSVar1);
    if (active == (System_String_o *)0x0) {
      active = *ppSVar1;
    }
    (__this->fields)._activeLabelText = active;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._activeLabelText);
    *(char *)&(__this->fields)._normalLabelOwnsColor = (char)normalOwnsColor;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this,(MethodInfo *)active);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  (__this->fields)._image = (UnityEngine_UI_Image_o *)normal;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._image);
  *(undefined4 *)&(__this->fields)._icon = extraout_EDX;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b94970

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_UI_Image_o *pUVar7;
  TMPro_TextMeshProUGUI_c *pTVar8;
  long lVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Il2CppMethodPointer pIVar11;
  undefined1 auVar12 [16];
  UnityEngine_Vector2_o UVar13;
  undefined1 auVar14 [16];
  float fVar15;
  UnityEngine_Color_o *pUVar16;
  ulong uVar17;
  char cVar18;
  bool_conflict bVar19;
  uint uVar20;
  MethodInfo *pMVar21;
  long *unaff_RBX;
  undefined1 *puVar22;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  UnityEngine_Color32_o value;
  float *pfVar23;
  ulong uVar24;
  TMPro_TextMeshProUGUI_o *pTVar25;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar26;
  long *__this_00;
  ulong unaff_R14;
  TMPro_TextMeshProUGUI_o *pTVar27;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar28;
  
  if (g_data_057a9ee3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ee3 = '\x01';
  }
  cVar18 = '\0';
  if (((*(char *)((long)&(__this->fields)._hovered + 3) == '\0') &&
      (cVar18 = '\x01', (char)(__this->fields)._hovered == '\0')) &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    cVar18 = *(char *)((long)&(__this->fields)._hovered + 2);
  }
  pUVar7 = (__this->fields)._image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    pUVar7 = (__this->fields)._image;
    pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_03b94c69;
    pfVar23 = &(__this->fields)._normalBg.fields.b;
    pUVar16 = &(__this->fields)._normalBg;
    if (cVar18 != '\0') {
      pfVar23 = &(__this->fields)._hoverBg.fields.g;
      pUVar16 = (UnityEngine_Color_o *)&(__this->fields)._disabledText.fields.a;
    }
    uVar2 = (pUVar16->fields).r;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)(uVar2,(int)*(undefined8 *)pfVar23);
  }
  pUVar7 = (__this->fields)._icon;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    pUVar7 = (__this->fields)._icon;
    if (*(char *)((long)&(__this->fields)._hovered + 3) == '\0') {
      if (cVar18 == '\0') {
        pUVar16 = &(__this->fields)._normalIcon;
        pfVar23 = &(__this->fields)._normalIcon.fields.b;
      }
      else {
        pUVar16 = (UnityEngine_Color_o *)&(__this->fields)._hoverBg.fields.a;
        pfVar23 = &(__this->fields)._hoverText.fields.g;
      }
    }
    else {
      pUVar16 = (UnityEngine_Color_o *)&(__this->fields)._normalFace.fields.r;
      pfVar23 = &(__this->fields)._disabledText.fields.g;
    }
    pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_03b94c69;
    uVar3 = (pUVar16->fields).r;
    in_XMM1_Dc = 0;
    in_XMM1_Dd = 0;
    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)(uVar3,(int)*(undefined8 *)pfVar23);
  }
  pTVar25 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar19 != '\0') {
    pTVar27 = (__this->fields)._label;
    pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar27 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
    pMVar21 = (MethodInfo *)(&(__this->fields)._normalLabelText)[cVar18 != '\0'];
    (*(pTVar27->klass->vtable)._66_set_text.methodPtr)
              (pTVar27,pMVar21,(pTVar27->klass->vtable)._66_set_text.method);
    if (*(char *)((long)&(__this->fields)._hovered + 3) == '\0') {
      pTVar25 = (__this->fields)._label;
      if ((char)(__this->fields)._normalLabelOwnsColor != '\0') {
        if (pTVar25 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
        pMVar21 = (pTVar25->klass->vtable)._23_set_color.method;
        (*(pTVar25->klass->vtable)._23_set_color.methodPtr)(0x3f800000,0x3f800000);
        pTVar27 = (__this->fields)._label;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
        uVar20 = il2cpp_runtime_helper_03b428b0(0x3f800000,0x3f800000);
        goto joined_r0x03b94bb5;
      }
      if (pTVar25 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
      pfVar23 = &(__this->fields)._normalText.fields.b;
      pUVar16 = &(__this->fields)._normalText;
      if (cVar18 != '\0') {
        pfVar23 = &(__this->fields)._hoverText.fields.g;
        pUVar16 = (UnityEngine_Color_o *)&(__this->fields)._hoverBg.fields.a;
      }
      uVar6 = (pUVar16->fields).r;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      pMVar21 = (pTVar25->klass->vtable)._23_set_color.method;
      (*(pTVar25->klass->vtable)._23_set_color.methodPtr)(uVar6,(int)*(undefined8 *)pfVar23);
      pTVar27 = (__this->fields)._label;
      if (pTVar27 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
      uVar20 = (__this->fields)._normalFace.fields.rgba;
    }
    else {
      pTVar27 = (__this->fields)._label;
      pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pTVar27 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
      uVar4 = (__this->fields)._disabledText.fields.g;
      pTVar8 = pTVar27->klass;
      pMVar21 = (pTVar8->vtable)._23_set_color.method;
      (*(pTVar8->vtable)._23_set_color.methodPtr)
                ((int)*(undefined8 *)&(__this->fields)._normalFace.fields.r,uVar4);
      pTVar27 = (__this->fields)._label;
      uVar5 = (__this->fields)._disabledText.fields.g;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
      uVar20 = il2cpp_runtime_helper_03b428b0((int)*(undefined8 *)&(__this->fields)._normalFace.fields.r,uVar5);
joined_r0x03b94bb5:
      if (pTVar27 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b94c69;
    }
    value.fields.r = '\0';
    value.fields.g = '\0';
    value.fields.b = '\0';
    value.fields.a = '\0';
    value.fields.rgba = uVar20;
    TMPro_TMP_Text__set_faceColor((TMPro_TMP_Text_o *)pTVar27,value,(MethodInfo *)0x0);
  }
  pGVar26 = (__this->fields)._marquee;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar21 = (MethodInfo *)0x0;
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar19 == '\0') {
    return;
  }
  __this_00 = (long *)(__this->fields)._marquee;
  pTVar25 = (TMPro_TextMeshProUGUI_o *)0x0;
  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00 !=
      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
    puVar22 = (undefined1 *)register0x00000020;
    uVar17 = (ulong)(cVar18 != '\0');
    do {
      pGVar26 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00;
      uVar24 = uVar17;
      *(TMPro_TextMeshProUGUI_o **)(puVar22 + -8) = unaff_RBP;
      *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar22 + -0x10) = unaff_R15;
      *(ulong *)(puVar22 + -0x18) = unaff_R14;
      *(long **)(puVar22 + -0x20) = unaff_RBX;
      if (g_data_057a9ee7 == '\0') {
        *(undefined8 *)(puVar22 + -0x50) = 0x3b94fa5;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        *(undefined8 *)(puVar22 + -0x50) = 0x3b94fb1;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ee7 = '\x01';
      }
      pTVar25 = (pGVar26->fields)._label;
      unaff_RBX = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar22 + -0x50) = 0x3b94fd4;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar22 + -0x50) = 0x3b94fe0;
      bVar19 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pTVar25,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') {
        return;
      }
      pUVar10 = (pGVar26->fields)._textRect;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar22 + -0x50) = 0x3b94ff9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar22 + -0x50) = 0x3b95005;
      bVar19 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') {
        return;
      }
      unaff_RBP = (TMPro_TextMeshProUGUI_o *)(pGVar26->fields)._viewport;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar22 + -0x50) = 0x3b9501e;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar22 + -0x50) = 0x3b9502a;
      bVar19 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar19 != '\0') {
        return;
      }
      __this_00 = (long *)(pGVar26->fields)._viewport;
      if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00 !=
          (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
        *(undefined8 *)(puVar22 + -0x50) = 0x3b9504d;
        UVar28 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
        auVar14._8_4_ = in_XMM1_Dc;
        auVar14._0_8_ = UVar28.fields._8_8_;
        auVar14._12_4_ = in_XMM1_Dd;
        *(undefined1 (*) [16])(puVar22 + -0x38) = auVar14;
        unaff_RBP = (pGVar26->fields)._label;
        if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
          pMVar21 = (unaff_RBP->klass->vtable)._65_get_text.method;
          pIVar11 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
          *(undefined8 *)(puVar22 + -0x50) = 0x3b95073;
          pMVar21 = (MethodInfo *)(*pIVar11)(UVar28.fields.m_XMin,unaff_RBP,pMVar21);
          *(undefined8 *)(puVar22 + -0x50) = 0x3b95080;
          UVar13 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                             ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar21,(MethodInfo *)0x0);
          if (((*(float *)(puVar22 + -0x38) <= 1.0) || (UVar13.fields.x <= *(float *)(puVar22 + -0x38) + 1.0))
             || ((char)uVar24 == '\0')) {
label_03b95206:
            Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(pGVar26,pMVar21);
            return;
          }
          auVar12._8_4_ = extraout_XMM0_Dc;
          auVar12._0_4_ = UVar13.fields.x;
          auVar12._4_4_ = UVar13.fields.y;
          auVar12._12_4_ = extraout_XMM0_Dd;
          *(undefined1 (*) [16])(puVar22 + -0x48) = auVar12;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)(puVar22 + -0x50) = 0x3b950cf;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar22 + -0x50) = 0x3b950d6;
          bVar19 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          fVar1 = *(float *)(puVar22 + -0x48);
          fVar15 = *(float *)(puVar22 + -0x38);
          in_XMM1_Dc = *(undefined4 *)(puVar22 + -0x30);
          in_XMM1_Dd = *(undefined4 *)(puVar22 + -0x2c);
          if ((char)bVar19 == '\0') goto label_03b95206;
          *(undefined1 *)((long)&(pGVar26->fields)._selfActivate + 3) = 1;
          (pGVar26->fields)._hovered = 0;
          (pGVar26->fields)._selected = (bool_conflict)((fVar1 - fVar15) + 24.0);
          pTVar25 = (pGVar26->fields)._label;
          __this_00 = (long *)0x0;
          if (pTVar25 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar22 + -0x50) = 0x3b9511c;
            TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar25,0,(MethodInfo *)0x0);
            pTVar25 = (pGVar26->fields)._label;
            __this_00 = (long *)0x0;
            if (pTVar25 != (TMPro_TextMeshProUGUI_o *)0x0) {
              *(undefined8 *)(puVar22 + -0x50) = 0x3b95135;
              TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar25,0x1001,(MethodInfo *)0x0);
              pUVar10 = (pGVar26->fields)._textRect;
              __this_00 = (long *)0x0;
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (pGVar26->fields)._normalAnchorMin.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar22 + -0x50) = 0x3b9515a;
                UnityEngine_RectTransform__set_anchorMin
                          (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar10 = (pGVar26->fields)._textRect;
                __this_00 = (long *)0x0;
                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                  fVar1 = (pGVar26->fields)._normalAnchorMax.fields.y;
                  in_XMM1_Dc = 0;
                  in_XMM1_Dd = 0;
                  *(undefined8 *)(puVar22 + -0x50) = 0x3b9517f;
                  UnityEngine_RectTransform__set_anchorMax
                            (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                  pUVar10 = (pGVar26->fields)._textRect;
                  __this_00 = (long *)0x0;
                  if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                    *(undefined8 *)(puVar22 + -0x50) = 0x3b9519a;
                    UnityEngine_RectTransform__set_pivot
                              (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                    __this_00 = (long *)(pGVar26->fields)._textRect;
                    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00 !=
                        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                      *(undefined8 *)(puVar22 + -0x50) = 0x3b951b8;
                      UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                                ((UnityEngine_RectTransform_o *)__this_00,0,*(float *)(puVar22 + -0x48) + 24.0
                                 ,(MethodInfo *)0x0);
                      pUVar10 = (pGVar26->fields)._textRect;
                      if (g_data_057a694c == '\0') {
                        __this_00 = &TypeInfo_Vector2;
                        *(undefined8 *)(puVar22 + -0x50) = 0x3b951d1;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057a694c = '\x01';
                      }
                      unaff_RBX = (long *)0x0;
                      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (pUVar10,(UnityEngine_Vector2_o)
                                           **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                   (MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar22 + -0x50) = 0x3b9521d;
      il2cpp_runtime_helper_022b2c90();
      if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00)->fields)._selfActivate ==
          '\0') {
        return;
      }
      *(undefined1 *)
       ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00)->fields)._selfActivate + 1
       ) = 1;
      puVar22 = puVar22 + -0x48;
      uVar17 = 1;
      unaff_R14 = uVar24;
      unaff_R15 = pGVar26;
    } while( true );
  }
label_03b94c69:
  il2cpp_runtime_helper_022b2c90();
  lVar9 = *(long *)&(pTVar25->fields).m_Maskable;
  if (lVar9 != 0) {
    pMVar21 = *(MethodInfo **)(lVar9 + 0x28);
    cVar18 = (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40));
    if (cVar18 == '\0') {
      *(undefined1 *)&(pTVar25->fields).m_IncludeForMasking = 0;
      Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)pTVar25,pMVar21);
      return;
    }
  }
  *(undefined1 *)&(pTVar25->fields).m_IncludeForMasking = 1;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
            ((Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)pTVar25,pMVar21);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$Muted
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted (UnityEngine_Color_o surface, const MethodInfo* method);
// 0x3b947f0

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Muted(UnityEngine_Color_o surface,MethodInfo *method)

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
// 0x3b94d40

float Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Luminance
                (UnityEngine_Color_o color,MethodInfo *method)

{
  return color.fields.g * 0.7152 + color.fields.r * 0.2126 + color.fields.b * 0.0722;
}


// Gisketch.Aottg2UI.Actions.GisketchDropdownItemFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o* __this, const MethodInfo* method);
// 0x3b94d70

void Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


