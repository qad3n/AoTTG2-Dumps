// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x539de10

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, float value, const MethodInfo* method);
// 0x539de70

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar1;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_07542b89 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
    __this_00 = (pGVar1->fields)._brushMaterial;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat_68e0ad0
                (__this_00,
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId,
                 value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x539df00

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar1;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((__this->fields).active != false) {
    return;
  }
  pGVar1 = (__this->fields).__4__this;
  if ((pGVar1 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) ||
     (pUVar2 = (pGVar1->fields)._brush, pUVar2 == (UnityEngine_UI_Image_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
            (pUVar2,(UnityEngine_Color_o)(pGVar1->fields)._hiddenBrush.fields,
             (pUVar2->klass->vtable)._23_set_color.method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_UI_Image_o* brush, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* icon, UnityEngine_RectTransform_o* content, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x539c9a0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_UI_Image_o *brush,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *icon,
               UnityEngine_RectTransform_o *content,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o **targetAddress;
  TMPro_TextMeshProUGUI_o **targetAddress_00;
  UnityEngine_UI_Image_o **targetAddress_01;
  UnityEngine_Material_o **targetAddress_02;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  bool bVar6;
  UnityEngine_Material_o *pUVar7;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_Fields UVar13;
  
  if (Il2CppMethodInitialized_07542b80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_07542b80 = '\x01';
  }
  targetAddress = &(__this->fields)._brush;
  (__this->fields)._brush = brush;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._label;
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  targetAddress_01 = &(__this->fields)._icon;
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(targetAddress_01);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (content == (UnityEngine_RectTransform_o *)0x0) goto label_0539ce38;
    UVar4 = UnityEngine_RectTransform__get_anchoredPosition(content,(MethodInfo *)0x0);
    fVar10 = UVar4.fields.x;
    fVar11 = UVar4.fields.y;
  }
  else {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    fVar10 = UVar1.x;
    fVar11 = UVar1.y;
  }
  UVar1.y = fVar11;
  UVar1.x = fVar10;
  (__this->fields)._contentOrigin.fields = UVar1;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = (float)g_data_01005870;
  fVar11 = g_data_01005870._4_4_;
  UVar12.fields._8_8_ = g_data_01005870;
  if (bVar6) {
    if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_0539ce38;
    UVar12 = (*(brush->klass->vtable)._22_get_color.methodPtr)
                       (brush,(brush->klass->vtable)._22_get_color.method);
    UVar12.fields._8_8_ = UVar12.fields._8_8_;
    fVar10 = UVar12.fields.r;
    fVar11 = UVar12.fields.g;
  }
  (__this->fields)._shownBrush.fields.r = fVar10;
  (__this->fields)._shownBrush.fields.g = fVar11;
  (__this->fields)._shownBrush.fields.b = (float)UVar12.fields._8_8_;
  (__this->fields)._shownBrush.fields.a = (float)((ulong)UVar12.fields._8_8_ >> 0x20);
  fVar10 = (__this->fields)._shownBrush.fields.g;
  fVar11 = (__this->fields)._shownBrush.fields.b;
  fVar5 = (__this->fields)._shownBrush.fields.a;
  (__this->fields)._hiddenBrush.fields.r = (__this->fields)._shownBrush.fields.r;
  (__this->fields)._hiddenBrush.fields.g = fVar10;
  (__this->fields)._hiddenBrush.fields.b = fVar11;
  (__this->fields)._hiddenBrush.fields.a = fVar5;
  (__this->fields)._hiddenBrush.fields.a = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539ce38;
    UVar12 = (*(label->klass->vtable)._22_get_color.methodPtr)
                       (label,(label->klass->vtable)._22_get_color.method);
    UVar12.fields._8_8_ = UVar12.fields._8_8_;
    fVar10 = UVar12.fields.r;
    fVar11 = UVar12.fields.g;
  }
  else {
    UVar12.fields._8_8_ = 0x3f80000000000000;
    fVar10 = 0.0;
    fVar11 = 0.0;
  }
  (__this->fields)._normalText.fields.r = fVar10;
  (__this->fields)._normalText.fields.g = fVar11;
  (__this->fields)._normalText.fields.b = (float)UVar12.fields._8_8_;
  (__this->fields)._normalText.fields.a = (float)((ulong)UVar12.fields._8_8_ >> 0x20);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
label_0539ce38:
    ThrowNullReferenceException();
  }
  UVar12.fields.b = 1.0;
  UVar12.fields.a = 1.0;
  UVar12.fields.r = 1.0;
  UVar12.fields.g = 1.0;
  UVar13 = (UnityEngine_Color_Fields)
           Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (theme,"buttonText",UVar12,(MethodInfo *)0x0);
  (__this->fields)._activeText.fields = UVar13;
  fVar10 = (__this->fields)._activeText.fields.g;
  fVar11 = (__this->fields)._activeText.fields.b;
  fVar5 = (__this->fields)._activeText.fields.a;
  (__this->fields)._fadedText.fields.r = (__this->fields)._activeText.fields.r;
  (__this->fields)._fadedText.fields.g = fVar10;
  (__this->fields)._fadedText.fields.b = fVar11;
  (__this->fields)._fadedText.fields.a = fVar5;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar7 = (UnityEngine_Material_o *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_0539ce38;
    pUVar7 = (*(brush->klass->vtable)._32_get_material.methodPtr)
                       (brush,(brush->klass->vtable)._32_get_material.method);
  }
  targetAddress_02 = &(__this->fields)._brushMaterial;
  (__this->fields)._brushMaterial = pUVar7;
  Il2CppCodeGenWriteBarrier(targetAddress_02);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539ce38;
    pMVar8 = (MethodInfo *)TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
  }
  (__this->fields)._labelNormalMaterial = (UnityEngine_Material_o *)pMVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelNormalMaterial);
  pMVar8 = (MethodInfo *)
           Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial(label,pMVar8);
  (__this->fields)._labelShadowMaterial = (UnityEngine_Material_o *)pMVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelShadowMaterial);
  pGVar9 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
                     ((UnityEngine_UI_Graphic_o *)icon,pMVar8);
  (__this->fields)._iconShadow = pGVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._iconShadow);
  pUVar2 = (__this->fields)._brush;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar2 = *targetAddress;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_0539ce38;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,(UnityEngine_Color_o)(__this->fields)._hiddenBrush.fields,
               (pUVar2->klass->vtable)._23_set_color.method);
  }
  pUVar7 = *targetAddress_02;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar7 = *targetAddress_02;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_0539ce38;
    bVar6 = UnityEngine_Material__HasProperty
                      (pUVar7,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                              BrushRevealId,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar7 = *targetAddress_02;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar7 == (UnityEngine_Material_o *)0x0) goto label_0539ce38;
      UnityEngine_Material__SetFloat_68e0ad0
                (pUVar7,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        BrushRevealId,0.0,(MethodInfo *)0x0);
    }
  }
  pTVar3 = *targetAddress_00;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pTVar3 = *targetAddress_00;
    if (pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539ce38;
    (*(pTVar3->klass->vtable)._23_set_color.methodPtr)
              (pTVar3,(UnityEngine_Color_o)(__this->fields)._normalText.fields,
               (pTVar3->klass->vtable)._23_set_color.method);
  }
  pUVar2 = *targetAddress_01;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if (bVar6) {
    pUVar2 = *targetAddress_01;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_0539ce38;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,(UnityEngine_Color_o)(__this->fields)._normalText.fields,
               (pUVar2->klass->vtable)._23_set_color.method);
    pMVar8 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows(__this,false,pMVar8);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x539d380

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542b81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b81 = '\x01';
  }
  pUVar1 = (__this->fields)._labelShadowMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._labelShadowMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetPanelFaded
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool faded, const MethodInfo* method);
// 0x539d400

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool faded,MethodInfo *method)

{
  undefined7 in_register_00000031;
  
  (__this->fields)._panelFaded = faded;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
            (__this,(MethodInfo *)CONCAT71(in_register_00000031,faded));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x539d590

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool active,MethodInfo *method
               )

{
  undefined7 in_register_00000031;
  
  (__this->fields)._forced = active;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
            (__this,(MethodInfo *)CONCAT71(in_register_00000031,active));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539d5a0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539d5b0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539d5c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539d5d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539d5e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539d7d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText(__this,0.0,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539d9b0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText(__this,0.03,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x539d410

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  TMPro_TextMeshProUGUI_o *pTVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  bool bVar8;
  UnityEngine_Color_o *pUVar9;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  bool enabled;
  bool bVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_o UVar13;
  
  if (Il2CppMethodInitialized_07542b82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b82 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    bVar8 = (__this->fields)._forced;
    bVar11 = (__this->fields)._panelFaded != false;
    enabled = bVar11 && bVar8 == false;
    if (bVar8 != false) goto label_0539d456;
    bVar11 = !bVar11;
    if (bVar11) {
      pUVar9 = &(__this->fields)._normalText;
      pUVar7 = &(__this->fields)._normalText;
    }
    else {
      pUVar9 = &(__this->fields)._fadedText;
      pUVar7 = &(__this->fields)._fadedText;
    }
    enabled = !bVar11;
    pMVar10 = (MethodInfo *)0x0;
  }
  else {
    enabled = false;
label_0539d456:
    pUVar9 = &(__this->fields)._activeText;
    pUVar7 = &(__this->fields)._activeText;
    pMVar10 = (MethodInfo *)CONCAT71((int7)((ulong)in_RDX >> 8),1);
  }
  uVar1 = (pUVar7->fields).b;
  uVar3 = (pUVar7->fields).a;
  UVar13.fields.a = (float)uVar3;
  UVar13.fields.b = (float)uVar1;
  uVar2 = (pUVar9->fields).r;
  uVar4 = (pUVar9->fields).g;
  UVar13.fields.g = (float)uVar4;
  UVar13.fields.r = (float)uVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush(__this,SUB81(pMVar10,0),pMVar10);
  pTVar5 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    pTVar5 = (__this->fields)._label;
    if (pTVar5 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539d580;
    UVar12.fields.b = (float)uVar1;
    UVar12.fields.a = (float)uVar3;
    UVar12.fields.r = (float)uVar2;
    UVar12.fields.g = (float)uVar4;
    (*(pTVar5->klass->vtable)._23_set_color.methodPtr)
              (pTVar5,UVar12,(pTVar5->klass->vtable)._23_set_color.method);
  }
  pUVar6 = (__this->fields)._icon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX_00;
  if (bVar8) {
    pUVar6 = (__this->fields)._icon;
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) {
label_0539d580:
      ThrowNullReferenceException();
    }
    (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
              (pUVar6,UVar13,(pUVar6->klass->vtable)._23_set_color.method);
    pMVar10 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows(__this,enabled,pMVar10);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$AddHardShadow
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow (UnityEngine_UI_Graphic_o* graphic, const MethodInfo* method);
// 0x539d190

Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
          (UnityEngine_UI_Graphic_o *graphic,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b83 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)graphic,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0;
  }
  if (((graphic == (UnityEngine_UI_Graphic_o *)0x0) ||
      (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)graphic,(MethodInfo *)0x0),
      __this == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_00 = UnityEngine_GameObject__AddComponent_object_
                            (__this,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow),
     __this_00 == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_522eda0
            (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
             (UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,true,(MethodInfo *)0x0);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$CreateLabelShadowMaterial
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial (TMPro_TextMeshProUGUI_o* label, const MethodInfo* method);
// 0x539ce40

UnityEngine_Material_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
          (TMPro_TextMeshProUGUI_o *label,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Material_o *__this;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07542b84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_ShaderUtilities);
    il2cpp_codegen_initialize_runtime_metadata(&" Brush Hard Shadow");
    Il2CppMethodInitialized_07542b84 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_Material_o *)0x0;
  }
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar2 = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (UnityEngine_Material_o *)0x0;
    }
    pUVar2 = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
    UnityEngine_Material___ctor_68dcfd0(__this,pUVar2,(MethodInfo *)0x0);
    pUVar2 = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320(pSVar3," Brush Hard Shadow",(MethodInfo *)0x0);
      if (__this != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,pSVar3,(MethodInfo *)0x0);
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        UnityEngine_Material__EnableKeyword
                  (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->Keyword_Underlay,(MethodInfo *)0x0);
        bVar1 = UnityEngine_Material__HasProperty
                          (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayColor,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
          }
          UnityEngine_Material__SetColor_68dd4d0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayColor,
                     (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        }
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        bVar1 = UnityEngine_Material__HasProperty
                          (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayOffsetX,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
          }
          UnityEngine_Material__SetFloat_68e0ad0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayOffsetX,-0.4,
                     (MethodInfo *)0x0);
        }
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        bVar1 = UnityEngine_Material__HasProperty
                          (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayOffsetY,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
          }
          UnityEngine_Material__SetFloat_68e0ad0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayOffsetY,-0.4,
                     (MethodInfo *)0x0);
        }
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        bVar1 = UnityEngine_Material__HasProperty
                          (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayDilate,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
          }
          UnityEngine_Material__SetFloat_68e0ad0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayDilate,0.12,
                     (MethodInfo *)0x0);
        }
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        bVar1 = UnityEngine_Material__HasProperty
                          (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlaySoftness,
                           (MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
          }
          UnityEngine_Material__SetFloat_68e0ad0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlaySoftness,0.0,
                     (MethodInfo *)0x0);
        }
        if ((TypeInfo_TMPro_ShaderUtilities->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_ShaderUtilities);
        }
        TMPro_ShaderUtilities__UpdateShaderRatios(__this,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$EnableShadows
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool enabled, const MethodInfo* method);
// 0x539d260

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool enabled,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Material_o *x;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar2;
  bool bVar3;
  UnityEngine_Material_o **ppUVar4;
  
  if (Il2CppMethodInitialized_07542b85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b85 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pTVar1 = (__this->fields)._label;
    if (enabled) {
      x = (__this->fields)._labelShadowMaterial;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) goto label_0539d2f2;
      ppUVar4 = &(__this->fields)._labelShadowMaterial;
    }
    else {
label_0539d2f2:
      ppUVar4 = &(__this->fields)._labelNormalMaterial;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539d375;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar1,*ppUVar4,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._label;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0539d375;
    (*(pTVar1->klass->vtable)._29_SetMaterialDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._29_SetMaterialDirty.method);
  }
  pGVar2 = (__this->fields)._iconShadow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pGVar2 = (__this->fields)._iconShadow;
  if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2,enabled,(MethodInfo *)0x0);
    return;
  }
label_0539d375:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetBrush
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x539d9d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool active,MethodInfo *method
               )

{
  UnityEngine_Color_o *pUVar1;
  float duration;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  UnityEngine_UI_Image_o *pUVar7;
  DG_Tweening_Tween_o *pDVar8;
  UnityEngine_Material_o *pUVar9;
  bool bVar10;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this_00;
  DG_Tweening_TweenCallback_float__o *__this_01;
  DG_Tweening_Tweener_o *pDVar11;
  DG_Tweening_TweenCallback_o *__this_02;
  ulong uVar12;
  DG_Tweening_Tween_o **targetAddress;
  float fVar13;
  UnityEngine_Color_o UVar14;
  float local_28;
  
  if (Il2CppMethodInitialized_07542b86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0);
    Il2CppMethodInitialized_07542b86 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)0x0)
  goto label_0539de06;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).active = active;
  pUVar7 = (__this->fields)._brush;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return;
  }
  pDVar8 = (__this->fields)._revealTween;
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar8,false,(MethodInfo *)0x0);
  }
  if ((__this_00->fields).active != false) {
    pUVar7 = (__this->fields)._brush;
    if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_0539de06;
    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
              (pUVar7,(UnityEngine_Color_o)(__this->fields)._shownBrush.fields,
               (pUVar7->klass->vtable)._23_set_color.method);
  }
  pUVar9 = (__this->fields)._brushMaterial;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar10) {
    pUVar9 = (__this->fields)._brushMaterial;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar9 == (UnityEngine_Material_o *)0x0) goto label_0539de06;
    bVar10 = UnityEngine_Material__HasProperty
                       (pUVar9,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                               BrushRevealId,(MethodInfo *)0x0);
    if (bVar10) {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar9 = (__this->fields)._brushMaterial;
      uVar6 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
      if (bVar10) {
        if (uVar6 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        if (pUVar9 != (UnityEngine_Material_o *)0x0) {
          fVar13 = UnityEngine_Material__GetFloat_68e0ed0
                             (pUVar9,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields
                                     ->BrushRevealId,(MethodInfo *)0x0);
          local_28 = 0.0;
          if ((__this_00->fields).active != false) {
            local_28 = 1.0;
          }
          pUVar9 = (__this->fields)._brushMaterial;
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          if (pUVar9 != (UnityEngine_Material_o *)0x0) {
            targetAddress = &(__this->fields)._revealTween;
            UnityEngine_Material__SetFloat_68e0ad0
                      (pUVar9,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                              BrushRevealId,fVar13,(MethodInfo *)0x0);
            duration = *(float *)(&g_data_0100ade0 + (ulong)((__this_00->fields).active == false) * 4);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor
                      (__this_01,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__0
                       ,(MethodInfo_4293C90 *)0x0);
            pDVar11 = DG_Tweening_DOVirtual__Float(fVar13,local_28,duration,__this_01,(MethodInfo *)0x0);
            pDVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                ((Il2CppObject *)pDVar11,(uint)(__this_00->fields).active << 2 | 8,
                                 (MethodInfo_36B0160 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
            pDVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                ((Il2CppObject *)pDVar11,true,
                                 (MethodInfo_36B08F0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
            DG_Tweening_TweenCallback___ctor
                      (__this_02,(Il2CppObject *)__this_00,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__1
                       ,(MethodInfo *)0x0);
            pDVar11 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                ((Il2CppObject *)pDVar11,__this_02,
                                 (MethodInfo_36AF8A0 *)
                                 MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
            *targetAddress = (DG_Tweening_Tween_o *)pDVar11;
            Il2CppCodeGenWriteBarrier(targetAddress);
            pDVar8 = *targetAddress;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
            }
            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar8,false,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_0539de06;
      }
      if (uVar6 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar9 == (UnityEngine_Material_o *)0x0) goto label_0539de06;
      fVar13 = 0.0;
      if ((__this_00->fields).active != false) {
        fVar13 = 1.0;
      }
      UnityEngine_Material__SetFloat_68e0ad0
                (pUVar9,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        BrushRevealId,fVar13,(MethodInfo *)0x0);
    }
  }
  pUVar7 = (__this->fields)._brush;
  if (pUVar7 != (UnityEngine_UI_Image_o *)0x0) {
    uVar12 = (ulong)(__this_00->fields).active;
    pUVar1 = &(__this->fields)._hiddenBrush + (uVar12 != 0);
    uVar2 = (pUVar1->fields).r;
    uVar4 = (pUVar1->fields).g;
    UVar14.fields.g = (float)uVar4;
    UVar14.fields.r = (float)uVar2;
    pUVar1 = &(__this->fields)._hiddenBrush + uVar12;
    uVar3 = (pUVar1->fields).b;
    uVar5 = (pUVar1->fields).a;
    UVar14.fields.a = (float)uVar5;
    UVar14.fields.b = (float)uVar3;
    (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
              (pUVar7,UVar14,(pUVar7->klass->vtable)._23_set_color.method);
    return;
  }
label_0539de06:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$PushText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x539d5f0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_Vector2_o from;
  bool bVar5;
  DG_Tweening_TweenCallback_Vector2__o *__this_00;
  DG_Tweening_Tweener_o *pDVar6;
  UnityEngine_Vector2_o local_38;
  
  if (Il2CppMethodInitialized_07542b87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_PushText_b__36_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    Il2CppMethodInitialized_07542b87 = '\x01';
  }
  pUVar3 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pDVar4 = (__this->fields)._pressTween;
  if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar4,false,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._content;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  from = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
  UVar1 = (__this->fields)._contentOrigin.fields;
  if (Il2CppMethodInitialized_07542888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542888 = '\x01';
  }
  UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
  local_38.fields.y = UVar1.y + UVar2.y * 8.0;
  local_38.fields.x = UVar1.x + UVar2.x * 8.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_Vector2);
  DG_Tweening_TweenCallback_Vector2____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_PushText_b__36_0,
             (MethodInfo_4293DC0 *)0x0);
  pDVar6 = DG_Tweening_DOVirtual__Vector2(from,local_38,0.045,__this_00,(MethodInfo *)0x0);
  pDVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                     ((Il2CppObject *)pDVar6,9,
                      (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
  pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar6,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
  (__this->fields)._pressTween = (DG_Tweening_Tween_o *)pDVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressTween);
  pDVar4 = (__this->fields)._pressTween;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$ReleaseText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, float delay, const MethodInfo* method);
// 0x539d7e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,float delay,MethodInfo *method
               )

{
  UnityEngine_Vector2_Fields to;
  UnityEngine_RectTransform_o *pUVar1;
  DG_Tweening_Tween_o *pDVar2;
  UnityEngine_Vector2_o from;
  bool bVar3;
  DG_Tweening_TweenCallback_Vector2__o *__this_00;
  DG_Tweening_Tweener_o *pDVar4;
  
  if (Il2CppMethodInitialized_07542b88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_ReleaseText_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    Il2CppMethodInitialized_07542b88 = '\x01';
  }
  pUVar1 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pDVar2 = (__this->fields)._pressTween;
  if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._content;
  if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  from = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
  to = (__this->fields)._contentOrigin.fields;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_Vector2);
  DG_Tweening_TweenCallback_Vector2____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_ReleaseText_b__37_0,
             (MethodInfo_4293DC0 *)0x0);
  pDVar4 = DG_Tweening_DOVirtual__Vector2(from,(UnityEngine_Vector2_o)to,0.12,__this_00,(MethodInfo *)0x0);
  pDVar4 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                     ((Il2CppObject *)pDVar4,delay,
                      (MethodInfo_36AFF70 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tweener);
  pDVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                     ((Il2CppObject *)pDVar4,0x1b,
                      (MethodInfo_36B0160 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
  pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                     ((Il2CppObject *)pDVar4,true,
                      (MethodInfo_36B08F0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
  (__this->fields)._pressTween = (DG_Tweening_Tween_o *)pDVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressTween);
  pDVar2 = (__this->fields)._pressTween;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x539de20

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<PushText>b__36_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x539de30

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<ReleaseText>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x539de50

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
  return;
}


