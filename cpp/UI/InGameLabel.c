// Type: UI.InGameLabel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/InGameLabel.cs
// Prior real C# source: none
// --------------------------------

// UI.InGameLabel$$get_Root
// il2cpp: UnityEngine_GameObject_o* UI_InGameLabel__get_Root (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x5d28280

UnityEngine_GameObject_o * UI_InGameLabel__get_Root(UI_InGameLabel_o *__this,MethodInfo *method)

{
  return (__this->fields)._Root_k__BackingField;
}


// UI.InGameLabel$$set_Root
// il2cpp: void UI_InGameLabel__set_Root (UI_InGameLabel_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5d28290

void UI_InGameLabel__set_Root(UI_InGameLabel_o *__this,UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField);
  return;
}


// UI.InGameLabel$$get_TextTransform
// il2cpp: UnityEngine_Transform_o* UI_InGameLabel__get_TextTransform (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x5d282a0

UnityEngine_Transform_o * UI_InGameLabel__get_TextTransform(UI_InGameLabel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *__this_00;
  TMPro_TextMeshProUGUI_o *__this_01;
  UnityEngine_Transform_o *pUVar1;
  
  if ((__this->fields)._legacy == false) {
    __this_01 = (__this->fields)._tmpText;
    if (__this_01 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pUVar1 = TMPro_TMP_Text__get_transform((TMPro_TMP_Text_o *)__this_01,(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  else {
    __this_00 = (__this->fields)._legacyText;
    if (__this_00 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      return pUVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameLabel$$get_Text
// il2cpp: System_String_o* UI_InGameLabel__get_Text (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x5d282d0

System_String_o * UI_InGameLabel__get_Text(UI_InGameLabel_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields)._legacy == false) {
    pTVar2 = (__this->fields)._tmpText;
    if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pSVar3 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                         (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
      return pSVar3;
    }
  }
  else {
    pUVar1 = (__this->fields)._legacyText;
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pSVar3 = (*(pUVar1->klass->vtable)._74_get_text.methodPtr)
                         (pUVar1,(pUVar1->klass->vtable)._74_get_text.method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// UI.InGameLabel$$set_Text
// il2cpp: void UI_InGameLabel__set_Text (UI_InGameLabel_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5d28320

void UI_InGameLabel__set_Text(UI_InGameLabel_o *__this,System_String_o *value,MethodInfo *method)

{
  char cVar1;
  UnityEngine_UI_Text_o *text;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_UI_Image_o *__this_00;
  bool bVar3;
  System_String_o *a;
  TMPro_TMP_FontAsset_o *value_00;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    Il2CppMethodInitialized_07547dec = '\x01';
    if (value != (System_String_o *)0x0) goto label_05d28339;
label_05d2839e:
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    if ((__this->fields)._legacy != false) goto label_05d28340;
label_05d283bd:
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    }
    pSVar4 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(value,false,(MethodInfo *)0x0);
    pTVar2 = (__this->fields)._tmpText;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d2849d;
    a = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)(pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
    bVar3 = System_String__op_Inequality(a,pSVar4,(MethodInfo *)0x0);
    if (bVar3) {
      pTVar2 = (__this->fields)._tmpText;
      value_00 = Gisketch_Aottg2UI_Styling_GisketchTypography__ForText
                           (pSVar4,(__this->fields)._tmpFont,(MethodInfo *)0x0);
      if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d2849d;
      TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar2,value_00,(MethodInfo *)0x0);
    }
    pTVar2 = (__this->fields)._tmpText;
    if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d2849d;
    (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
              (pTVar2,pSVar4,(pTVar2->klass->vtable)._66_set_text.method);
    cVar1 = (__this->fields)._legacy;
  }
  else {
    if (value == (System_String_o *)0x0) goto label_05d2839e;
label_05d28339:
    if ((__this->fields)._legacy == false) goto label_05d283bd;
label_05d28340:
    text = (__this->fields)._legacyText;
    if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
    }
    UI_LanguageFonts__SetText(text,value,(MethodInfo *)0x0);
    cVar1 = (__this->fields)._legacy;
  }
  if (cVar1 != '\0') {
    return;
  }
  pTVar2 = (__this->fields)._tmpText;
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = (__this->fields)._background;
    pSVar4 = (*(pTVar2->klass->vtable)._65_get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable)._65_get_text.method);
    bVar3 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_05d2849d:
  ThrowNullReferenceException();
}


// UI.InGameLabel$$.ctor
// il2cpp: void UI_InGameLabel___ctor (UI_InGameLabel_o* __this, UnityEngine_Transform_o* parent, UI_ElementStyle_o* style, int32_t alignment, int32_t anchor, UnityEngine_Vector2_o offset, bool legacy, const MethodInfo* method);
// 0x5d28500

void UI_InGameLabel___ctor
               (UI_InGameLabel_o *__this,UnityEngine_Transform_o *parent,UI_ElementStyle_o *style,
               int32_t alignment,int32_t anchor,UnityEngine_Vector2_o offset,bool legacy,MethodInfo *method)

{
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._parent);
  (__this->fields)._style = style;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._style);
  (__this->fields)._alignment = alignment;
  (__this->fields)._anchor = anchor;
  (__this->fields)._offset.fields = offset.fields;
  UI_InGameLabel__SetLegacy(__this,legacy,method_00);
  return;
}


// UI.InGameLabel$$SetLegacy
// il2cpp: void UI_InGameLabel__SetLegacy (UI_InGameLabel_o* __this, bool legacy, const MethodInfo* method);
// 0x5d28580

void UI_InGameLabel__SetLegacy(UI_InGameLabel_o *__this,bool legacy,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_UI_Text_o **targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  int iVar1;
  int32_t iVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  bool value;
  int32_t index;
  System_String_o *value_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  TMPro_TMP_FontAsset_o *pTVar9;
  UnityEngine_UI_Image_o *pUVar10;
  MethodInfo *method_00;
  uint alignment;
  
  if (Il2CppMethodInitialized_07547ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Background");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07547ded = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._Root_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar4) && ((__this->fields)._legacy == legacy)) {
    return;
  }
  targetAddress = &(__this->fields)._Root_k__BackingField;
  pUVar3 = (UnityEngine_Object_o *)*targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields)._legacy == false) {
      pTVar8 = (__this->fields)._tmpText;
      if (pTVar8 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05d28a1d;
      value_00 = (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                           (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
    }
    else {
      pUVar7 = (__this->fields)._legacyText;
      if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_05d28a1d;
      value_00 = (*(pUVar7->klass->vtable)._74_get_text.methodPtr)
                           (pUVar7,(pUVar7->klass->vtable)._74_get_text.method);
    }
  }
  else {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pUVar3 = (UnityEngine_Object_o *)*targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  value = true;
  if (!bVar4) {
    if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
    value = UnityEngine_GameObject__get_activeSelf(*targetAddress,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)*targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
    pUVar5 = UnityEngine_GameObject__get_transform(*targetAddress,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d28a1d;
    index = UnityEngine_Transform__GetSiblingIndex(pUVar5,(MethodInfo *)0x0);
  }
  else {
    pUVar5 = (__this->fields)._parent;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d28a1d;
    index = UnityEngine_Transform__get_childCount(pUVar5,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)*targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (*targetAddress == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
    UnityEngine_GameObject__SetActive(*targetAddress,false,(MethodInfo *)0x0);
  }
  if (legacy) {
    pUVar7 = (__this->fields)._legacyText;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress_00 = &(__this->fields)._legacyText;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      iVar1 = (__this->fields)._alignment;
      alignment = 3;
      if (iVar1 != 0x201) {
        alignment = iVar1 == 0x204 | 4;
      }
      pUVar6 = UI_ElementFactory__CreateLegacyHUDLabel
                         ((__this->fields)._parent,(__this->fields)._style,
                          (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,alignment,
                          (MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         (pUVar6,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      *targetAddress_00 = pUVar7;
      Il2CppCodeGenWriteBarrier(targetAddress_00);
      if (*targetAddress_00 == (UnityEngine_UI_Text_o *)0x0) goto label_05d28a1d;
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._anchor;
      UI_ElementFactory__SetAnchor
                (pUVar6,iVar2,iVar2,(UnityEngine_Vector2_o)(__this->fields)._offset.fields,(MethodInfo *)0x0);
    }
    if (*targetAddress_00 == (UnityEngine_UI_Text_o *)0x0) goto label_05d28a1d;
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
  }
  else {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tmpRoot;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    targetAddress_01 = &(__this->fields)._tmpRoot;
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar6 = UI_ElementFactory__CreateHUDLabel
                         ((__this->fields)._parent,(__this->fields)._style,
                          (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),0,
                          (__this->fields)._alignment,(MethodInfo *)0x0);
      (__this->fields)._tmpRoot = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress_01);
      iVar2 = (__this->fields)._anchor;
      UI_ElementFactory__SetAnchor
                ((__this->fields)._tmpRoot,iVar2,iVar2,(UnityEngine_Vector2_o)(__this->fields)._offset.fields,
                 (MethodInfo *)0x0);
      pUVar6 = (__this->fields)._tmpRoot;
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
      pTVar8 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                         (pUVar6,true,
                          (MethodInfo_353B9A0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI_71ab0b0);
      (__this->fields)._tmpText = pTVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpText);
      pTVar9 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                         ("text",400,(System_String_o *)0x0,(MethodInfo *)0x0);
      (__this->fields)._tmpFont = pTVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._tmpFont);
      pUVar6 = (__this->fields)._tmpRoot;
      if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05d28a1d;
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d28a1d;
      pUVar5 = UnityEngine_Transform__Find(pUVar5,"Background",(MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05d28a1d;
      pUVar10 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar5,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
      (__this->fields)._background = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._background);
    }
    pUVar6 = *targetAddress_01;
  }
  (__this->fields)._Root_k__BackingField = pUVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._legacy = legacy;
  pUVar6 = (__this->fields)._Root_k__BackingField;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
      UI_InGameLabel__set_Text(__this,value_00,method_00);
      pUVar6 = (__this->fields)._Root_k__BackingField;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d28a1d:
  ThrowNullReferenceException();
}


// UI.InGameLabel$$SetBackgroundColor
// il2cpp: void UI_InGameLabel__SetBackgroundColor (UI_InGameLabel_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5d28a30

void UI_InGameLabel__SetBackgroundColor(UI_InGameLabel_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  if ((__this->fields)._legacy != false) {
    return;
  }
  pUVar1 = (__this->fields)._background;
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
            (pUVar1,color,(pUVar1->klass->vtable)._23_set_color.method);
  return;
}


// UI.InGameLabel$$UpdateBackground
// il2cpp: void UI_InGameLabel__UpdateBackground (UI_InGameLabel_o* __this, const MethodInfo* method);
// 0x5d284b0

void UI_InGameLabel__UpdateBackground(UI_InGameLabel_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_UI_Image_o *__this_00;
  bool bVar2;
  System_String_o *value;
  
  if ((__this->fields)._legacy != false) {
    return;
  }
  pTVar1 = (__this->fields)._tmpText;
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    __this_00 = (__this->fields)._background;
    value = (*(pTVar1->klass->vtable)._65_get_text.methodPtr)
                      (pTVar1,(pTVar1->klass->vtable)._65_get_text.method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_00,!bVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


