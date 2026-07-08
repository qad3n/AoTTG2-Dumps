// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonFeedback.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x3b268b0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_<>c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, float value, const MethodInfo* method);
// 0x3b26910

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_<>c__DisplayClass35_0__<SetBrush>b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o
                *__this,float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar1;
  UnityEngine_Material_o *__this_00;
  
  if (DAT_0570159d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    DAT_0570159d = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
    __this_00 = (pGVar1->fields)._brushMaterial;
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat
                (__this_00,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),value,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x3b269a0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_<>c__DisplayClass35_0__<SetBrush>b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar3;
  UnityEngine_UI_Image_o *pUVar4;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  
  if ((char)(__this->fields).active != '\0') {
    return;
  }
  pGVar3 = (__this->fields).__4__this;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) &&
     (pUVar4 = (pGVar3->fields)._brush, pUVar4 != (UnityEngine_UI_Image_o *)0x0)) {
    uVar1._0_4_ = (pGVar3->fields)._hiddenBrush.fields.r;
    uVar1._4_4_ = (pGVar3->fields)._hiddenBrush.fields.g;
    uVar2._0_4_ = (pGVar3->fields)._hiddenBrush.fields.b;
    uVar2._4_4_ = (pGVar3->fields)._hiddenBrush.fields.a;
    vtable_dispatch = (pUVar4->klass->vtable)._23_set_color.methodPtr;
    (*vtable_dispatch)
              (uVar1,uVar2,pUVar4,(pUVar4->klass->vtable)._23_set_color.method,in_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_UI_Image_o* brush, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* icon, UnityEngine_RectTransform_o* content, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b25400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_UI_Image_o *brush,TMPro_TextMeshProUGUI_o *label,
               UnityEngine_UI_Image_o *icon,UnityEngine_RectTransform_o *content,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  TMPro_TextMeshProUGUI_o **ppTVar2;
  UnityEngine_UI_Image_o **ppUVar3;
  UnityEngine_Material_o **ppUVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  UnityEngine_UI_Image_o *pUVar10;
  UnityEngine_Object_o *x;
  TMPro_TextMeshProUGUI_o *x_00;
  UnityEngine_Vector2_Fields UVar11;
  UnityEngine_Vector2_o UVar12;
  float fVar13;
  bool_conflict bVar14;
  UnityEngine_Material_o *pUVar15;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar17;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  undefined8 in_XMM1_Qa;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_Fields UVar21;
  
  if (DAT_05701594 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"buttonText");
    DAT_05701594 = '\x01';
  }
  ppUVar1 = &(__this->fields)._brush;
  (__this->fields)._brush = brush;
  il2cpp_runtime_glue(ppUVar1,brush);
  ppTVar2 = &(__this->fields)._label;
  (__this->fields)._label = label;
  il2cpp_runtime_glue(ppTVar2,label);
  ppUVar3 = &(__this->fields)._icon;
  (__this->fields)._icon = icon;
  il2cpp_runtime_glue();
  (__this->fields)._content = content;
  il2cpp_runtime_glue(&(__this->fields)._content);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar14 == '\0') {
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    fVar18 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar20 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
  }
  else {
    if (content == (UnityEngine_RectTransform_o *)0x0) goto LAB_03b258a9;
    UVar12 = UnityEngine_RectTransform__get_anchoredPosition(content,(MethodInfo *)0x0);
    fVar18 = UVar12.fields.x;
    fVar20 = UVar12.fields.y;
  }
  UVar11.y = fVar20;
  UVar11.x = fVar18;
  (__this->fields)._contentOrigin.fields = UVar11;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    in_XMM1_Qa = DAT_00ccd980;
    uVar19 = in_XMM1_Qa;
  }
  else {
    if (brush == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b258a9;
    uVar19 = (*(brush->klass->vtable)._22_get_color.methodPtr)(brush);
  }
  (__this->fields)._shownBrush.fields.r = (float)(int)uVar19;
  (__this->fields)._shownBrush.fields.g = (float)(int)((ulong)uVar19 >> 0x20);
  (__this->fields)._shownBrush.fields.b = (float)in_XMM1_Qa;
  (__this->fields)._shownBrush.fields.a = (float)((ulong)in_XMM1_Qa >> 0x20);
  fVar18 = (__this->fields)._shownBrush.fields.g;
  fVar20 = (__this->fields)._shownBrush.fields.b;
  fVar13 = (__this->fields)._shownBrush.fields.a;
  (__this->fields)._hiddenBrush.fields.r = (__this->fields)._shownBrush.fields.r;
  (__this->fields)._hiddenBrush.fields.g = fVar18;
  (__this->fields)._hiddenBrush.fields.b = fVar20;
  (__this->fields)._hiddenBrush.fields.a = fVar13;
  (__this->fields)._hiddenBrush.fields.a = 0.0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar14 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    (__this->fields)._normalText.fields.r = 0.0;
    (__this->fields)._normalText.fields.g = 0.0;
    (__this->fields)._normalText.fields.b = 0.0;
    (__this->fields)._normalText.fields.a = 1.0;
  }
  else {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b258a9;
    uVar19 = (*(label->klass->vtable)._22_get_color.methodPtr)
                       (label,(label->klass->vtable)._22_get_color.method);
    (__this->fields)._normalText.fields.r = (float)(int)uVar19;
    (__this->fields)._normalText.fields.g = (float)(int)((ulong)uVar19 >> 0x20);
    (__this->fields)._normalText.fields.b = (float)in_XMM1_Qa;
    (__this->fields)._normalText.fields.a = (float)((ulong)in_XMM1_Qa >> 0x20);
  }
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fallback.fields.b = 1.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 1.0;
    UVar21 = (UnityEngine_Color_Fields)
             Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (theme,"buttonText",fallback,(MethodInfo *)0x0);
    (__this->fields)._activeText.fields = UVar21;
    fVar18 = (__this->fields)._activeText.fields.g;
    fVar20 = (__this->fields)._activeText.fields.b;
    fVar13 = (__this->fields)._activeText.fields.a;
    (__this->fields)._fadedText.fields.r = (__this->fields)._activeText.fields.r;
    (__this->fields)._fadedText.fields.g = fVar18;
    (__this->fields)._fadedText.fields.b = fVar20;
    (__this->fields)._fadedText.fields.a = fVar13;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar15 = (UnityEngine_Material_o *)0x0;
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar14 != '\0') {
      if (brush == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b258a9;
      pUVar15 = (UnityEngine_Material_o *)
                (*(brush->klass->vtable)._32_get_material.methodPtr)
                          (brush,(brush->klass->vtable)._32_get_material.method);
    }
    ppUVar4 = &(__this->fields)._brushMaterial;
    (__this->fields)._brushMaterial = pUVar15;
    il2cpp_runtime_glue(ppUVar4);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar16 = (MethodInfo *)0x0;
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar14 != '\0') {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b258a9;
      pMVar16 = (MethodInfo *)
                TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    }
    (__this->fields)._labelNormalMaterial = (UnityEngine_Material_o *)pMVar16;
    il2cpp_runtime_glue(&(__this->fields)._labelNormalMaterial);
    pMVar16 = (MethodInfo *)
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
                        (label,pMVar16);
    (__this->fields)._labelShadowMaterial = (UnityEngine_Material_o *)pMVar16;
    il2cpp_runtime_glue(&(__this->fields)._labelShadowMaterial);
    pGVar17 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
                        ((UnityEngine_UI_Graphic_o *)icon,pMVar16);
    (__this->fields)._iconShadow = pGVar17;
    il2cpp_runtime_glue(&(__this->fields)._iconShadow);
    pUVar10 = (__this->fields)._brush;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pUVar10 = *ppUVar1;
      if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b258a9;
      uVar5 = (__this->fields)._hiddenBrush.fields.r;
      uVar19._0_4_ = (__this->fields)._hiddenBrush.fields.b;
      uVar19._4_4_ = (__this->fields)._hiddenBrush.fields.a;
      (*(pUVar10->klass->vtable)._23_set_color.methodPtr)(uVar5,uVar19);
    }
    x = (UnityEngine_Object_o *)*ppUVar4;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar14 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pUVar15 = *ppUVar4;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (pUVar15 == (UnityEngine_Material_o *)0x0) goto LAB_03b258a9;
      bVar14 = UnityEngine_Material__HasProperty
                         (pUVar15,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),
                          (MethodInfo *)0x0);
      if ((char)bVar14 != '\0') {
        pUVar15 = *ppUVar4;
        if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (pUVar15 == (UnityEngine_Material_o *)0x0) goto LAB_03b258a9;
        UnityEngine_Material__SetFloat
                  (pUVar15,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),0.0,(MethodInfo *)0x0
                  );
      }
    }
    x_00 = *ppTVar2;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      if (*ppTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b258a9;
      uVar6 = (__this->fields)._normalText.fields.r;
      uVar8._0_4_ = (__this->fields)._normalText.fields.b;
      uVar8._4_4_ = (__this->fields)._normalText.fields.a;
      (*((*ppTVar2)->klass->vtable)._23_set_color.methodPtr)(uVar6,uVar8);
    }
    pUVar10 = *ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar14 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    pMVar16 = extraout_RDX;
    if ((char)bVar14 != '\0') {
      pUVar10 = *ppUVar3;
      if (pUVar10 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b258a9;
      uVar7 = (__this->fields)._normalText.fields.r;
      uVar9._0_4_ = (__this->fields)._normalText.fields.b;
      uVar9._4_4_ = (__this->fields)._normalText.fields.a;
      (*(pUVar10->klass->vtable)._23_set_color.methodPtr)(uVar7,uVar9);
      pMVar16 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows(__this,0,pMVar16);
    return;
  }
LAB_03b258a9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b25e00

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_05701595 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701595 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._labelShadowMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._labelShadowMaterial;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetPanelFaded
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool faded, const MethodInfo* method);
// 0x3b25e80

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict faded,
               MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 3) = (char)faded;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,faded));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x3b26010

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict active
               ,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  *(char *)((long)&(__this->fields)._hovered + 2) = (char)active;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
            (__this,(MethodInfo *)CONCAT44(in_register_00000034,active));
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b26020

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b26030

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._hovered = 0;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b26040

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b26050

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b26060

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b26250

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
            (__this,0.0,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b26430

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
            (__this,0.03,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b25e90

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  UnityEngine_UI_Image_o *pUVar5;
  UnityEngine_Color_o *pUVar6;
  bool_conflict bVar7;
  UnityEngine_Color_o *pUVar8;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  bool bVar10;
  bool bVar11;
  undefined4 local_48;
  undefined4 local_38;
  
  if (DAT_05701596 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701596 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    cVar3 = *(char *)((long)&(__this->fields)._hovered + 2);
    bVar11 = *(char *)((long)&(__this->fields)._hovered + 3) != '\0';
    bVar10 = bVar11 && cVar3 == '\0';
    if (cVar3 != '\0') goto LAB_03b25ed6;
    bVar11 = !bVar11;
    if (bVar11) {
      pUVar8 = &(__this->fields)._normalText;
      pUVar6 = &(__this->fields)._normalText;
    }
    else {
      pUVar8 = &(__this->fields)._fadedText;
      pUVar6 = &(__this->fields)._fadedText;
    }
    bVar10 = !bVar11;
    pMVar9 = (MethodInfo *)0x0;
  }
  else {
    bVar10 = false;
LAB_03b25ed6:
    pUVar8 = &(__this->fields)._activeText;
    pUVar6 = &(__this->fields)._activeText;
    pMVar9 = (MethodInfo *)CONCAT71((int7)((ulong)in_RDX >> 8),1);
  }
  uVar1 = (pUVar6->fields).b;
  uVar2 = (pUVar8->fields).r;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush(__this,(uint)pMVar9 & 0xff,pMVar9)
  ;
  pTVar4 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pTVar4 = (__this->fields)._label;
    if (pTVar4 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b25fff;
    (*(pTVar4->klass->vtable)._23_set_color.methodPtr)(uVar2,uVar1);
  }
  pUVar5 = (__this->fields)._icon;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar9 = extraout_RDX_00;
  if ((char)bVar7 != '\0') {
    pUVar5 = (__this->fields)._icon;
    if (pUVar5 == (UnityEngine_UI_Image_o *)0x0) {
LAB_03b25fff:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
              (uVar2,uVar1,pUVar5,(pUVar5->klass->vtable)._23_set_color.method);
    pMVar9 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows(__this,(uint)bVar10,pMVar9);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$AddHardShadow
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow (UnityEngine_UI_Graphic_o* graphic, const MethodInfo* method);
// 0x3b25c00

Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
          (UnityEngine_UI_Graphic_o *graphic,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_00;
  
  if (DAT_05701597 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701597 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)graphic,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0;
  }
  if (((graphic != (UnityEngine_UI_Graphic_o *)0x0) &&
      (__this = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)graphic,(MethodInfo *)0x0),
      __this != (UnityEngine_GameObject_o *)0x0)) &&
     (__this_00 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                  UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShad),
     __this_00 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0)) {
    Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
              (__this_00,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),
               (UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,1,(MethodInfo *)0x0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,0,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$CreateLabelShadowMaterial
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial (TMPro_TextMeshProUGUI_o* label, const MethodInfo* method);
// 0x3b258b0

UnityEngine_Material_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
          (TMPro_TextMeshProUGUI_o *label,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Material_o *source;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar3;
  
  if (DAT_05701598 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ShaderUtilities);
    il2cpp_init_method_metadata(&" Brush Hard Shadow");
    DAT_05701598 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (UnityEngine_Material_o *)0x0;
  }
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)
             TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (UnityEngine_Material_o *)0x0;
    }
    source = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
    UnityEngine_Material___ctor((UnityEngine_Material_o *)pUVar2,source,(MethodInfo *)0x0);
    __this = (UnityEngine_Object_o *)
             TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Object_o *)0x0) {
      pSVar3 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3," Brush Hard Shadow",(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(pUVar2,pSVar3,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Material__EnableKeyword
                  ((UnityEngine_Material_o *)pUVar2,
                   *(System_String_o **)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0xe8),(MethodInfo *)0x0);
        bVar1 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar2,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Material__SetColor
                    ((UnityEngine_Material_o *)pUVar2,
                     *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x14),
                     (UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar2,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar2,
                     *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x18),-0.4,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar2,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar2,
                     *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x1c),-0.4,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar2,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar2,
                     *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x20),0.12,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Material__HasProperty
                          ((UnityEngine_Material_o *)pUVar2,
                           *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Material__SetFloat
                    ((UnityEngine_Material_o *)pUVar2,
                     *(int32_t *)(*(long *)(TypeInfo_ShaderUtilities + 0xb8) + 0x24),0.0,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_ShaderUtilities + 0xe4) == 0) {
          il2cpp_init_class();
        }
        TMPro_ShaderUtilities__UpdateShaderRatios
                  ((UnityEngine_Material_o *)pUVar2,(MethodInfo *)0x0);
        return (UnityEngine_Material_o *)pUVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$EnableShadows
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool enabled, const MethodInfo* method);
// 0x3b25cd0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               bool_conflict enabled,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar2;
  UnityEngine_Material_o **ppUVar3;
  bool_conflict bVar4;
  
  if (DAT_05701599 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701599 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pTVar1 = (__this->fields)._label;
    if ((char)enabled == '\0') {
LAB_03b25d6a:
      ppUVar3 = &(__this->fields)._labelNormalMaterial;
    }
    else {
      x = (UnityEngine_Object_o *)(__this->fields)._labelShadowMaterial;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') goto LAB_03b25d6a;
      ppUVar3 = &(__this->fields)._labelShadowMaterial;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b25ded;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar1,*ppUVar3,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._label;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b25ded;
    (*(pTVar1->klass->vtable)._29_SetMaterialDirty.methodPtr)();
  }
  pGVar2 = (__this->fields)._iconShadow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pGVar2 = (__this->fields)._iconShadow;
  if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    UnityEngine_Behaviour__set_enabled
              ((UnityEngine_Behaviour_o *)pGVar2,enabled & 0xff,(MethodInfo *)0x0);
    return;
  }
LAB_03b25ded:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetBrush
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x3b26450

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool_conflict active
               ,MethodInfo *method)

{
  float *pfVar1;
  float duration;
  undefined8 uVar2;
  undefined8 uVar3;
  int32_t nameID;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar5;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_TweenCallback_o *action;
  DG_Tweening_Tween_o *pDVar8;
  UnityEngine_Color_o *pUVar9;
  DG_Tweening_Tween_o **ppDVar10;
  float *pfVar11;
  bool bVar12;
  float fVar13;
  float local_30;
  
  if (DAT_0570159a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_OnComplete_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetBrush_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetBrush_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass35_0);
    DAT_0570159a = '\x01';
  }
  pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass35_0);
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  if (pIVar7 == (Il2CppObject *)0x0) goto LAB_03b2689e;
  pIVar7[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar7 + 1);
  *(char *)&pIVar7[1].monitor = (char)active;
  pUVar4 = (__this->fields)._brush;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pDVar8 = (__this->fields)._revealTween;
  if (pDVar8 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar8,0,(MethodInfo *)0x0);
  }
  if (*(char *)&pIVar7[1].monitor != '\0') {
    pUVar4 = (__this->fields)._brush;
    if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto LAB_03b2689e;
    uVar2._0_4_ = (__this->fields)._shownBrush.fields.r;
    uVar2._4_4_ = (__this->fields)._shownBrush.fields.g;
    (*(pUVar4->klass->vtable)._23_set_color.methodPtr)(uVar2);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._brushMaterial;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar5 = (__this->fields)._brushMaterial;
    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pUVar5 == (UnityEngine_Material_o *)0x0) goto LAB_03b2689e;
    bVar6 = UnityEngine_Material__HasProperty
                      (pUVar5,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar5 = (__this->fields)._brushMaterial;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_init_class();
        nameID = *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48);
      }
      else {
        nameID = *(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48);
      }
      if ((char)bVar6 != '\0') {
        if (pUVar5 != (UnityEngine_Material_o *)0x0) {
          fVar13 = UnityEngine_Material__GetFloat(pUVar5,nameID,(MethodInfo *)0x0);
          local_30 = 0.0;
          if (*(char *)&pIVar7[1].monitor != '\0') {
            local_30 = 1.0;
          }
          pUVar5 = (__this->fields)._brushMaterial;
          if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (pUVar5 != (UnityEngine_Material_o *)0x0) {
            ppDVar10 = &(__this->fields)._revealTween;
            UnityEngine_Material__SetFloat
                      (pUVar5,*(int32_t *)(*(long *)(TypeInfo_GisketchSurfaceMaterial + 0xb8) + 0x48),fVar13,
                       (MethodInfo *)0x0);
            duration = *(float *)(&DAT_00cd0f80 + (ulong)(*(char *)&pIVar7[1].monitor == '\0') * 4);
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float)
            ;
            DG_Tweening_TweenCallback<float>___ctor();
            t = DG_Tweening_DOVirtual__Float
                          (fVar13,local_30,duration,onVirtualUpdate,(MethodInfo *)0x0);
            pIVar7 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                               ((Il2CppObject *)t,(uint)*(byte *)&pIVar7[1].monitor << 2 | 8,
                                MethodInfo_Tweener_SetEase_Tweener);
            pIVar7 = DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar7,1,MethodInfo_Tweener_SetUpdate_Tweener);
            action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
            DG_Tweening_TweenCallback___ctor();
            pDVar8 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                               (pIVar7,action,MethodInfo_Tweener_OnComplete_Tweener);
            *ppDVar10 = pDVar8;
            il2cpp_runtime_glue(ppDVar10);
            pDVar8 = *ppDVar10;
            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar8,0,(MethodInfo *)0x0);
            return;
          }
        }
        goto LAB_03b2689e;
      }
      if (pUVar5 == (UnityEngine_Material_o *)0x0) goto LAB_03b2689e;
      fVar13 = 0.0;
      if (*(char *)&pIVar7[1].monitor != '\0') {
        fVar13 = 1.0;
      }
      UnityEngine_Material__SetFloat(pUVar5,nameID,fVar13,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields)._brush;
  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
    pfVar1 = &(__this->fields)._hiddenBrush.fields.b;
    bVar12 = *(char *)&pIVar7[1].monitor == '\0';
    pUVar9 = &(__this->fields)._shownBrush;
    if (bVar12) {
      pUVar9 = &(__this->fields)._hiddenBrush;
    }
    uVar3._0_4_ = (pUVar9->fields).r;
    uVar3._4_4_ = (pUVar9->fields).g;
    pfVar11 = &(__this->fields)._shownBrush.fields.b;
    if (bVar12) {
      pfVar11 = pfVar1;
    }
    vtable_dispatch = (pUVar4->klass->vtable)._23_set_color.methodPtr;
    (*vtable_dispatch)
              (uVar3,*(undefined8 *)pfVar11,pUVar4,(pUVar4->klass->vtable)._23_set_color.method,
               pfVar1,vtable_dispatch);
    return;
  }
LAB_03b2689e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$PushText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b26070

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o from;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_Vector2__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar5;
  UnityEngine_Vector2_o local_38;
  
  if (DAT_0570159b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__PushText_b__36_0);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_Vector2);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    DAT_0570159b = '\x01';
  }
  pUVar3 = (__this->fields)._content;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pDVar5 = (__this->fields)._pressTween;
  if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
  }
  pUVar3 = (__this->fields)._content;
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    from = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
    UVar1 = (__this->fields)._contentOrigin.fields;
    if (DAT_05701371 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_05701371 = '\x01';
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x20);
    local_38.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * 8.0;
    local_38.fields.x = UVar1.x + (float)uVar2 * 8.0;
    onVirtualUpdate = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_Vector2);
    DG_Tweening_TweenCallback<Vector2>___ctor();
    t = DG_Tweening_DOVirtual__Vector2(from,local_38,0.045,onVirtualUpdate,(MethodInfo *)0x0);
    t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
    pDVar5 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(t_00,1,MethodInfo_Tweener_SetUpdate_Tweener);
    (__this->fields)._pressTween = pDVar5;
    il2cpp_runtime_glue(&(__this->fields)._pressTween);
    pDVar5 = (__this->fields)._pressTween;
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$ReleaseText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, float delay, const MethodInfo* method);
// 0x3b26260

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,float delay,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields to;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o from;
  bool_conflict bVar2;
  DG_Tweening_TweenCallback_Vector2__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar3;
  DG_Tweening_Tween_o *pDVar4;
  
  if (DAT_0570159c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__ReleaseText_b__37_0);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_Vector2);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetDelay_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    DAT_0570159c = '\x01';
  }
  pUVar1 = (__this->fields)._content;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pDVar4 = (__this->fields)._pressTween;
  if (pDVar4 != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(pDVar4,0,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._content;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    from = UnityEngine_RectTransform__get_anchoredPosition(pUVar1,(MethodInfo *)0x0);
    to = (__this->fields)._contentOrigin.fields;
    onVirtualUpdate = (DG_Tweening_TweenCallback_Vector2__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_Vector2);
    DG_Tweening_TweenCallback<Vector2>___ctor();
    t = DG_Tweening_DOVirtual__Vector2
                  (from,(UnityEngine_Vector2_o)to,0.12,onVirtualUpdate,(MethodInfo *)0x0);
    pIVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay<object>
                       ((Il2CppObject *)t,delay,MethodInfo_Tweener_SetDelay_Tweener);
    pIVar3 = DG_Tweening_TweenSettingsExtensions__SetEase<object>(pIVar3,0x1b,MethodInfo_Tweener_SetEase_Tweener);
    pDVar4 = (DG_Tweening_Tween_o *)
             DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar3,1,MethodInfo_Tweener_SetUpdate_Tweener);
    (__this->fields)._pressTween = pDVar4;
    il2cpp_runtime_glue(&(__this->fields)._pressTween);
    pDVar4 = (__this->fields)._pressTween;
    if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b268c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<PushText>b__36_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3b268d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__<PushText>b__36_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_Vector2_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<ReleaseText>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x3b268f0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__<ReleaseText>b__37_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_Vector2_o value,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


