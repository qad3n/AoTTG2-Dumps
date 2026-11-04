// Type: Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchBrushButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___ctor(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback.<>c__DisplayClass35_0$$<SetBrush>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o* __this, float value, const MethodInfo* method);
// 0x18190af70

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               float value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar1;
  UnityEngine_Material_o *__this_00;
  
  if (Il2CppMethodInitialized_18434220a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    Il2CppMethodInitialized_18434220a = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) {
    __this_00 = (pGVar1->fields)._brushMaterial;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      UnityEngine_Material__SetFloat_2ee3980
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
// 0x18190b000

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0___SetBrush_b__1
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Color_o local_18;
  
  if ((__this->fields).active == false) {
    pGVar1 = (__this->fields).__4__this;
    if ((pGVar1 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0) ||
       (pUVar2 = (pGVar1->fields)._brush, pUVar2 == (UnityEngine_UI_Image_o *)0x0)) {
      ThrowNullReferenceException();
    }
    local_18.fields.r = (pGVar1->fields)._hiddenBrush.fields.r;
    local_18.fields.g = (pGVar1->fields)._hiddenBrush.fields.g;
    local_18.fields.b = (pGVar1->fields)._hiddenBrush.fields.b;
    local_18.fields.a = (pGVar1->fields)._hiddenBrush.fields.a;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,&local_18,(pUVar2->klass->vtable)._23_set_color.method);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_UI_Image_o* brush, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* icon, UnityEngine_RectTransform_o* content, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818fc190
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fc45d: mov rax, rbp
// asm:   0x1818fc4b0: mov rax, rbp
// asm:   0x1818fc5c0: mov rdi, rbp

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_UI_Image_o *brush,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *icon,
               UnityEngine_RectTransform_o *content,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  UnityEngine_Vector2_o UVar8;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar9;
  UnityEngine_Color_o *pUVar10;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar11;
  UnityEngine_Material_o *pUVar12;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_o local_58 [3];
  
  if (Il2CppMethodInitialized_184342201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_184342201 = '\x01';
  }
  (__this->fields)._brush = brush;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._brush,brush);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._icon,icon);
  (__this->fields)._content = content;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._content,content);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (content == (UnityEngine_RectTransform_o *)0x0) goto label_1818fc7b2;
    UVar8 = UnityEngine_RectTransform__get_anchoredPosition(content,(MethodInfo *)0x0);
    fVar17 = UVar8.fields.x;
    content._4_4_ = UVar8.fields.y;
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar17 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    content._4_4_ = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  (__this->fields)._contentOrigin.fields.x = fVar17;
  (__this->fields)._contentOrigin.fields.y = content._4_4_;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar17 = 1.0;
  if (bVar7) {
    if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_1818fc7b2;
    pUVar9 = (*(brush->klass->vtable)._22_get_color.methodPtr)
                       ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)&local_68,brush,
                        (brush->klass->vtable)._22_get_color.method);
    fVar13 = *(float *)&(pUVar9->fields).m_Ptr;
    fVar14 = *(float *)((longlong)&(pUVar9->fields).m_Ptr + 4);
    fVar15 = (float)(pUVar9->fields).m_Count;
    fVar16 = *(float *)&(pUVar9->fields).field_0xc;
  }
  else {
    fVar13 = 1.0;
    fVar14 = 1.0;
    fVar15 = 1.0;
    fVar16 = 1.0;
  }
  __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0;
  (__this->fields)._shownBrush.fields.r = fVar13;
  (__this->fields)._shownBrush.fields.g = fVar14;
  (__this->fields)._shownBrush.fields.b = fVar15;
  (__this->fields)._shownBrush.fields.a = fVar16;
  (__this->fields)._hiddenBrush.fields.r = fVar13;
  (__this->fields)._hiddenBrush.fields.g = fVar14;
  (__this->fields)._hiddenBrush.fields.b = fVar15;
  (__this->fields)._hiddenBrush.fields.a = fVar16;
  (__this->fields)._hiddenBrush.fields.a = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fc7b2;
    pUVar10 = (*(label->klass->vtable)._22_get_color.methodPtr)
                        ((UnityEngine_Color_o *)&local_68,label,(label->klass->vtable)._22_get_color.method);
    fVar13 = (pUVar10->fields).r;
    fVar14 = (pUVar10->fields).g;
    fVar15 = (pUVar10->fields).b;
    fVar17 = (pUVar10->fields).a;
  }
  else {
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
  }
  (__this->fields)._normalText.fields.r = fVar13;
  (__this->fields)._normalText.fields.g = fVar14;
  (__this->fields)._normalText.fields.b = fVar15;
  (__this->fields)._normalText.fields.a = fVar17;
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    local_68.r = 1.0;
    local_68.g = 1.0;
    local_68.b = 1.0;
    local_68.a = 1.0;
    pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (local_58,theme,"buttonText",(UnityEngine_Color_o *)&local_68,
                         (MethodInfo *)0x0);
    uVar3 = (pUVar10->fields).r;
    uVar4 = (pUVar10->fields).g;
    uVar5 = (pUVar10->fields).b;
    uVar6 = (pUVar10->fields).a;
    (__this->fields)._activeText.fields.r = (float)uVar3;
    (__this->fields)._activeText.fields.g = (float)uVar4;
    (__this->fields)._activeText.fields.b = (float)uVar5;
    (__this->fields)._activeText.fields.a = (float)uVar6;
    (__this->fields)._fadedText.fields.r = (float)uVar3;
    (__this->fields)._fadedText.fields.g = (float)uVar4;
    (__this->fields)._fadedText.fields.b = (float)uVar5;
    (__this->fields)._fadedText.fields.a = (float)uVar6;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)brush,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pGVar11 = __this_01;
    if (bVar7) {
      if (brush == (UnityEngine_UI_Image_o *)0x0) goto label_1818fc7b2;
      pGVar11 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                (*(brush->klass->vtable)._32_get_material.methodPtr)
                          (brush,(brush->klass->vtable)._32_get_material.method);
    }
    (__this->fields)._brushMaterial = (UnityEngine_Material_o *)pGVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._brushMaterial,pGVar11);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pGVar11 = __this_01;
    if (bVar7) {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fc7b2;
      pGVar11 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    }
    (__this->fields)._labelNormalMaterial = (UnityEngine_Material_o *)pGVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._labelNormalMaterial,pGVar11);
    pUVar12 = Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
                        (label,(MethodInfo *)0x0);
    (__this->fields)._labelShadowMaterial = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._labelShadowMaterial,pUVar12);
    if (Il2CppMethodInitialized_184342204 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184342204 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)icon,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar7) {
      if (((icon == (UnityEngine_UI_Image_o *)0x0) ||
          (__this_00 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)icon,(MethodInfo *)0x0),
          __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
         (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                (__this_00,
                                 (MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow),
         __this_01 == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0)) goto label_1818fc7b2;
      local_68.r = 0.0;
      local_68.g = 0.0;
      local_68.b = 0.0;
      local_68.a = 1.0;
      Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
                (__this_01,(UnityEngine_Color_o *)&local_68,(UnityEngine_Vector2_o)0xc0800000c0800000,1,0.0,
                 true,(MethodInfo *)0x0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
    }
    (__this->fields)._iconShadow = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._iconShadow,__this_01);
    pUVar1 = (__this->fields)._brush;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar1 = (__this->fields)._brush;
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fc7b2;
      local_68.r = (__this->fields)._hiddenBrush.fields.r;
      local_68.g = (__this->fields)._hiddenBrush.fields.g;
      local_68.b = (__this->fields)._hiddenBrush.fields.b;
      local_68.a = (__this->fields)._hiddenBrush.fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o *)&local_68,(pUVar1->klass->vtable)._23_set_color.method);
    }
    pUVar12 = (__this->fields)._brushMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar12 = (__this->fields)._brushMaterial;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_1818fc7b2;
      bVar7 = UnityEngine_Material__HasProperty
                        (pUVar12,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                 BrushRevealId,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar12 = (__this->fields)._brushMaterial;
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        if (pUVar12 == (UnityEngine_Material_o *)0x0) goto label_1818fc7b2;
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar12,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                           BrushRevealId,0.0,(MethodInfo *)0x0);
      }
    }
    pTVar2 = (__this->fields)._label;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pTVar2 = (__this->fields)._label;
      if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fc7b2;
      local_68.r = (__this->fields)._normalText.fields.r;
      local_68.g = (__this->fields)._normalText.fields.g;
      local_68.b = (__this->fields)._normalText.fields.b;
      local_68.a = (__this->fields)._normalText.fields.a;
      (*(pTVar2->klass->vtable)._23_set_color.methodPtr)
                (pTVar2,(UnityEngine_Color_o *)&local_68,(pTVar2->klass->vtable)._23_set_color.method);
    }
    pUVar1 = (__this->fields)._icon;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar1 = (__this->fields)._icon;
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fc7b2;
      local_68.r = (__this->fields)._normalText.fields.r;
      local_68.g = (__this->fields)._normalText.fields.g;
      local_68.b = (__this->fields)._normalText.fields.b;
      local_68.a = (__this->fields)._normalText.fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o *)&local_68,(pUVar1->klass->vtable)._23_set_color.method);
    }
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows(__this,false,(MethodInfo *)0x0);
    return;
  }
label_1818fc7b2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x1818fb6d0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342202 = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetPanelFaded
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool faded, const MethodInfo* method);
// 0x1818fc180

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetPanelFaded
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool faded,MethodInfo *method)

{
  (__this->fields)._panelFaded = faded;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetForcedActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x1818fc170

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetForcedActive
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool active,MethodInfo *method
               )

{
  (__this->fields)._forced = active;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fb770

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fb780

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fb7a0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fb6c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fb760

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818fb790

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText(__this,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fb7b0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText(__this,0.03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x1818fb9c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Image_o *pUVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_184342203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342203 = '\x01';
  }
  if (((__this->fields)._hovered == false) && ((__this->fields)._selected == false)) {
    cVar3 = (__this->fields)._forced;
  }
  else {
    cVar3 = '\x01';
  }
  bVar5 = (__this->fields)._panelFaded != false;
  if (cVar3 == '\0') {
    if (bVar5) {
      fVar6 = (__this->fields)._fadedText.fields.r;
      fVar7 = (__this->fields)._fadedText.fields.g;
      fVar8 = (__this->fields)._fadedText.fields.b;
      fVar9 = (__this->fields)._fadedText.fields.a;
    }
    else {
      fVar6 = (__this->fields)._normalText.fields.r;
      fVar7 = (__this->fields)._normalText.fields.g;
      fVar8 = (__this->fields)._normalText.fields.b;
      fVar9 = (__this->fields)._normalText.fields.a;
    }
  }
  else {
    fVar6 = (__this->fields)._activeText.fields.r;
    fVar7 = (__this->fields)._activeText.fields.g;
    fVar8 = (__this->fields)._activeText.fields.b;
    fVar9 = (__this->fields)._activeText.fields.a;
  }
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush(__this,cVar3 != '\0',(MethodInfo *)0x0);
  pTVar1 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pTVar1 = (__this->fields)._label;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fbb15;
    local_28[0].fields.r = fVar6;
    local_28[0].fields.g = fVar7;
    local_28[0].fields.b = fVar8;
    local_28[0].fields.a = fVar9;
    (*(pTVar1->klass->vtable)._23_set_color.methodPtr)
              (pTVar1,local_28,(pTVar1->klass->vtable)._23_set_color.method);
  }
  pUVar2 = (__this->fields)._icon;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar2 = (__this->fields)._icon;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
label_1818fbb15:
      ThrowNullReferenceException();
    }
    local_28[0].fields.r = fVar6;
    local_28[0].fields.g = fVar7;
    local_28[0].fields.b = fVar8;
    local_28[0].fields.a = fVar9;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
              (pUVar2,local_28,(pUVar2->klass->vtable)._23_set_color.method);
  }
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows
            (__this,bVar5 && cVar3 == '\0',(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$AddHardShadow
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchDropShadow_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow (UnityEngine_UI_Graphic_o* graphic, const MethodInfo* method);
// 0x1818fb0b0

Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__AddHardShadow
          (UnityEngine_UI_Graphic_o *graphic,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_00;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184342204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342204 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)graphic,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (graphic != (UnityEngine_UI_Graphic_o *)0x0) {
      __this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)graphic,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
          local_18.r = 0.0;
          local_18.g = 0.0;
          local_18.b = 0.0;
          local_18.a = 1.0;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
                    (__this_00,(UnityEngine_Color_o *)&local_18,(UnityEngine_Vector2_o)0xc0800000c0800000,1,
                     0.0,true,(MethodInfo *)0x0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,false,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$CreateLabelShadowMaterial
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial (TMPro_TextMeshProUGUI_o* label, const MethodInfo* method);
// 0x1818fb1b0

UnityEngine_Material_o *
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__CreateLabelShadowMaterial
          (TMPro_TextMeshProUGUI_o *label,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Material_o *__this;
  System_String_o *pSVar3;
  UnityEngine_Vector4_Fields local_18;
  
  if (Il2CppMethodInitialized_184342205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_ShaderUtilities);
    il2cpp_codegen_initialize_runtime_metadata(&" Brush Hard Shadow");
    Il2CppMethodInitialized_184342205 = '\x01';
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
    UnityEngine_Material___ctor_2ee55e0(__this,pUVar2,(MethodInfo *)0x0);
    pUVar2 = TMPro_TMP_Text__get_fontMaterial((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Material_o *)0x0) {
      pSVar3 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50(pSVar3," Brush Hard Shadow",(MethodInfo *)0x0);
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
          local_18.x = 0.0;
          local_18.y = 0.0;
          local_18.z = 0.0;
          local_18.w = 1.0;
          UnityEngine_Material__SetVector_2ee31b0
                    (__this,TypeInfo_TMPro_ShaderUtilities->static_fields->ID_UnderlayColor,
                     (UnityEngine_Vector4_o *)&local_18,(MethodInfo *)0x0);
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
          UnityEngine_Material__SetFloat_2ee3980
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
          UnityEngine_Material__SetFloat_2ee3980
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
          UnityEngine_Material__SetFloat_2ee3980
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
          UnityEngine_Material__SetFloat_2ee3980
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
// 0x1818fb590

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__EnableShadows
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool enabled,
               MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *pGVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  
  if (Il2CppMethodInitialized_184342206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342206 = '\x01';
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
      pUVar4 = (__this->fields)._labelShadowMaterial;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) goto label_1818fb634;
      pUVar4 = (__this->fields)._labelShadowMaterial;
    }
    else {
label_1818fb634:
      pUVar4 = (__this->fields)._labelNormalMaterial;
    }
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fb6b9;
    TMPro_TMP_Text__set_fontMaterial((TMPro_TMP_Text_o *)pTVar1,pUVar4,(MethodInfo *)0x0);
    pTVar1 = (__this->fields)._label;
    if (pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818fb6b9;
    (*(pTVar1->klass->vtable)._29_SetMaterialDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._29_SetMaterialDirty.method);
  }
  pGVar2 = (__this->fields)._iconShadow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pGVar2 = (__this->fields)._iconShadow;
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
label_1818fb6b9:
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pGVar2,enabled,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$SetBrush
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, bool active, const MethodInfo* method);
// 0x1818fbd00

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__SetBrush
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,bool active,MethodInfo *method
               )

{
  UnityEngine_UI_Image_o *pUVar1;
  DG_Tweening_Tween_o *pDVar2;
  UnityEngine_Material_o *pUVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *object;
  DG_Tweening_TweenCallback_float__o *__this_00;
  DG_Tweening_Tweener_o *pDVar5;
  DG_Tweening_TweenCallback_o *action;
  int32_t ease;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_184342207 == '\0') {
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
    Il2CppMethodInitialized_184342207 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___c__DisplayClass35_0_o *)0x0)
  goto label_1818fc167;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  (object->fields).active = active;
  pUVar1 = (__this->fields)._brush;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    pDVar2 = (__this->fields)._revealTween;
    if (pDVar2 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar2,false,(MethodInfo *)0x0);
    }
    if ((object->fields).active != false) {
      pUVar1 = (__this->fields)._brush;
      if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_1818fc167;
      local_48[0].r = (__this->fields)._shownBrush.fields.r;
      local_48[0].g = (__this->fields)._shownBrush.fields.g;
      local_48[0].b = (__this->fields)._shownBrush.fields.b;
      local_48[0].a = (__this->fields)._shownBrush.fields.a;
      (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                (pUVar1,(UnityEngine_Color_o *)local_48,(pUVar1->klass->vtable)._23_set_color.method);
    }
    pUVar3 = (__this->fields)._brushMaterial;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar3 = (__this->fields)._brushMaterial;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_1818fc167;
      bVar4 = UnityEngine_Material__HasProperty
                        (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                BrushRevealId,(MethodInfo *)0x0);
      if (bVar4) {
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        pUVar3 = (__this->fields)._brushMaterial;
        if (bVar4) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          if (pUVar3 != (UnityEngine_Material_o *)0x0) {
            fVar6 = UnityEngine_Material__GetFloat_2ee2100
                              (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->
                                      static_fields->BrushRevealId,(MethodInfo *)0x0);
            if ((object->fields).active == false) {
              fVar9 = 0.0;
            }
            else {
              fVar9 = 1.0;
            }
            pUVar3 = (__this->fields)._brushMaterial;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
            }
            if (pUVar3 != (UnityEngine_Material_o *)0x0) {
              UnityEngine_Material__SetFloat_2ee3980
                        (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                BrushRevealId,fVar6,(MethodInfo *)0x0);
              if ((object->fields).active == false) {
                fVar8 = 0.08;
              }
              else {
                fVar8 = 0.14;
              }
              __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_float);
              DG_Tweening_TweenCallback_float____ctor
                        ((DG_Tweening_Core_DOSetter_float__o *)__this_00,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__0
                         ,(MethodInfo_E5A750 *)0x0);
              pDVar5 = DG_Tweening_DOVirtual__Float(fVar6,fVar9,fVar8,__this_00,(MethodInfo *)0x0);
              ease = 0xc;
              if ((object->fields).active == false) {
                ease = 8;
              }
              pDVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                 ((Il2CppObject *)pDVar5,ease,
                                  (MethodInfo_7C9BC0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                 ((Il2CppObject *)pDVar5,true,
                                  (MethodInfo_7CA3D0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
              action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
              DG_Tweening_TweenCallback___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_c__DisplayClass35_0_SetBrush_b__1
                         ,(MethodInfo *)0x0);
              pDVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                 ((Il2CppObject *)pDVar5,action,
                                  (MethodInfo_7C92E0 *)
                                  MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener);
              (__this->fields)._revealTween = (DG_Tweening_Tween_o *)pDVar5;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._revealTween,pDVar5);
              pDVar2 = (__this->fields)._revealTween;
              if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
              }
              Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_1818fc167;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        if ((object->fields).active == false) {
          fVar6 = 0.0;
        }
        else {
          fVar6 = 1.0;
        }
        if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_1818fc167;
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          BrushRevealId,fVar6,(MethodInfo *)0x0);
      }
    }
    pUVar1 = (__this->fields)._brush;
    if ((object->fields).active == false) {
      fVar6 = (__this->fields)._hiddenBrush.fields.r;
      fVar9 = (__this->fields)._hiddenBrush.fields.g;
      fVar8 = (__this->fields)._hiddenBrush.fields.b;
      fVar7 = (__this->fields)._hiddenBrush.fields.a;
    }
    else {
      fVar6 = (__this->fields)._shownBrush.fields.r;
      fVar9 = (__this->fields)._shownBrush.fields.g;
      fVar8 = (__this->fields)._shownBrush.fields.b;
      fVar7 = (__this->fields)._shownBrush.fields.a;
    }
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
label_1818fc167:
      ThrowNullReferenceException();
    }
    local_48[0].g = fVar9;
    local_48[0].r = fVar6;
    local_48[0].a = fVar7;
    local_48[0].b = fVar8;
    (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
              (pUVar1,(UnityEngine_Color_o *)local_48,(pUVar1->klass->vtable)._23_set_color.method);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$PushText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x1818fb7e0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__PushText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  DG_Tweening_Tween_o *pDVar4;
  UnityEngine_Vector2_o to;
  bool bVar5;
  UnityEngine_Vector2_o from;
  DG_Tweening_TweenCallback_Vector2__o *__this_00;
  DG_Tweening_Tweener_o *pDVar6;
  
  if (Il2CppMethodInitialized_184342208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_PushText_b__36_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback_Vector2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener);
    Il2CppMethodInitialized_184342208 = '\x01';
  }
  pUVar3 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
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
    if (Il2CppMethodInitialized_184341f39 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f39 = '\x01';
    }
    UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback_Vector2);
    DG_Tweening_TweenCallback_Vector2____ctor
              ((DG_Tweening_Core_DOSetter_Vector2__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_PushText_b__36_0,
               (MethodInfo_E5A7E0 *)0x0);
    to.fields.y = UVar2.y * 8.0 + UVar1.y;
    to.fields.x = UVar2.x * 8.0 + UVar1.x;
    pDVar6 = DG_Tweening_DOVirtual__Vector2(from,to,0.045,__this_00,(MethodInfo *)0x0);
    pDVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar6,9,
                        (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    pDVar6 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar6,true,
                        (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener)
    ;
    (__this->fields)._pressTween = (DG_Tweening_Tween_o *)pDVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressTween,pDVar6);
    pDVar4 = (__this->fields)._pressTween;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar4,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$ReleaseText
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, float delay, const MethodInfo* method);
// 0x1818fbb20

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__ReleaseText
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,float delay,MethodInfo *method
               )

{
  UnityEngine_RectTransform_o *pUVar1;
  DG_Tweening_Tween_o *pDVar2;
  UnityEngine_Vector2_Fields to;
  bool bVar3;
  UnityEngine_Vector2_o from;
  DG_Tweening_TweenCallback_Vector2__o *__this_00;
  DG_Tweening_Tweener_o *pDVar4;
  
  if (Il2CppMethodInitialized_184342209 == '\0') {
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
    Il2CppMethodInitialized_184342209 = '\x01';
  }
  pUVar1 = (__this->fields)._content;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
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
              ((DG_Tweening_Core_DOSetter_Vector2__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_ReleaseText_b__37_0,
               (MethodInfo_E5A7E0 *)0x0);
    pDVar4 = DG_Tweening_DOVirtual__Vector2(from,(UnityEngine_Vector2_o)to,0.12,__this_00,(MethodInfo *)0x0);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__SetDelay_object_
                       ((Il2CppObject *)pDVar4,delay,
                        (MethodInfo_7C9AB0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetDelay_Tweener);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                       ((Il2CppObject *)pDVar4,0x1b,
                        (MethodInfo_7C9BC0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener);
    pDVar4 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                       ((Il2CppObject *)pDVar4,true,
                        (MethodInfo_7CA3D0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_SetUpdate_Tweener)
    ;
    (__this->fields)._pressTween = (DG_Tweening_Tween_o *)pDVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressTween,pDVar4);
    pDVar2 = (__this->fields)._pressTween;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar2,false,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ctor(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<PushText>b__36_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x1818fc7c0

void
Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___PushText_b__36_0(Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, MethodInfo* method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.GisketchBrushButtonFeedback$$<ReleaseText>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0 (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x1818fc7c0

void Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback___ReleaseText_b__37_0
               (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this,UnityEngine_Vector2_o value,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this_00;
  
  __this_00 = (__this->fields)._content;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


